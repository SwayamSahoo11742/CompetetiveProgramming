import flatbuffers
from CSClub import ProblemDatabase, ContestType

# Read the binary file
with open("problem_database.bin", "rb") as file:
    data = file.read()

# Access the Flatbuffer data
buffer = flatbuffers.binary_tables.ByteBuffer(data)
problem_db = ProblemDatabase.ProblemDatabase.GetRootAsProblemDatabase(buffer, 0)

# Retrieve the stats based on the contest type
contest_type = problem_db.ContestType()

if contest_type == ContestType.USACO:
    usaco_problem = problem_db.Problem(ProblemDatabase.Problem()).AsUSACOProblem()
    name = usaco_problem.Name().decode("utf-8")
    runtime = usaco_problem.Runtime()
    space = usaco_problem.Space()
    input_file = usaco_problem.InputFile().decode("utf-8")

    print("USACO Problem Stats:")
    print(f"Name: {name}")
    print(f"Runtime: {runtime}")
    print(f"Space: {space}")
    print(f"Input File: {input_file}")

elif contest_type == ContestType.ACSL:
    acsl_problem = problem_db.Problem(ProblemDatabase.Problem()).AsACSLProblem()
    id = acsl_problem.Id().decode("utf-8")
    is_short_answer = acsl_problem.IsShortAnswer()
    input_file = acsl_problem.InputFile().decode("utf-8")

    print("ACSL Problem Stats:")
    print(f"ID: {id}")
    print(f"Is Short Answer: {is_short_answer}")
    print(f"Input File: {input_file}")

elif contest_type == ContestType.KGGL:
    kggl_problem = problem_db.Problem(ProblemDatabase.Problem()).AsKGGLProblem()
    id = kggl_problem.Id().decode("utf-8")
    problem_type = kggl_problem.ProblemType()
    input_file = kggl_problem.InputFile().decode("utf-8")

    print("KGGL Problem Stats:")
    print(f"ID: {id}")
    print(f"Problem Type: {problem_type}")
    print(f"Input File: {input_file}")
