import ast

# Static analysis function using AI to check for code quality
def check_code_quality(code):
    try:
        tree = ast.parse(code)
        issues = []
        
        # Check for unused variables
        for node in ast.walk(tree):
            if isinstance(node, ast.Name) and isinstance(node.ctx, ast.Store):
                if node.id not in code:
                    issues.append(f"Unused variable detected: {node.id}")
        return issues
    except SyntaxError as e:
        return [f"Error in code: {str(e)}"]

# Example code
code = """
x = 5
y = 10
z = 15
"""

# Check for issues
issues = check_code_quality(code)
print("Code Issues:", issues)

