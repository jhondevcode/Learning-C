PYTHON_PATH=/usr/bin/python3.8
WORKSPACE_GENERATOR=template.py
BINARY_COMPILATION=.out

new:
	${PYTHON_PATH} ${WORKSPACE_GENERATOR}

clean:
	rm *${BINARY_COMPILATION}