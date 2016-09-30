PROJECT = Cycsi
BUILD   = ../build

html:
		sphinx-build -b html -d _build/doctrees . _build/html
		cp -r _build/html $(BUILD)
pdf:
		sphinx-build -b latex -d _build/doctrees . _build/latex
		cd _build/latex && pdflatex $(PROJECT).tex
		cp _build/latex/$(PROJECT).pdf $(BUILD)

.PHONY: docs pdf

