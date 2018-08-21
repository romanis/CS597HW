#!/bin/bash

# Make the pdf stuff

latex hw0
bibtex hw0
latex hw0
latex hw0

dvips hw0
ps2pdf hw0.ps
rm hw0.ps

