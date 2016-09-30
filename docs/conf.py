# -*- coding: utf-8 -*-
#
import sys
import os
import sphinx_rtd_theme as rtd

sys.path.insert(0, os.path.abspath('.'))

# -- General configuration ------------------------------------------------

extensions = []
templates_path = ['_templates']

source_suffix = '.rst'
master_doc = 'index'

# General information about the project.
project = u'Cycsi'
copyright = u'2016, Roie R. Black'
author = u'Roie R. Black'

version = 'Fall.16.1'
release = '1.0'

language = None

today_fmt = '%B %d, %Y'
exclude_patterns = ['_venv', '_build', 'README.rst']
pygments_style = 'sphinx'

todo_include_todos = False


# -- Options for HTML output ----------------------------------------------

html_theme = 'sphinx_rtd_theme'
html_theme_path = [rtd.get_html_theme_path()]
html_title = "Cycsi Docs"
#html_short_title = None
html_logo = "_static/images/ACClogo.png"
html_favicon = '_static/images/favicon.ico'
html_static_path = ['_static']
html_last_updated_fmt = '%b %d, %Y'
html_show_sourcelink = True
html_show_sphinx = True
html_show_copyright = True

# -- Options for LaTeX output ---------------------------------------------

latex_elements = {
'papersize': 'letterpaper',
'pointsize': '11pt',
#'preamble': '',
}

latex_documents = [
  (master_doc, 'Cycsi.tex', u'Cycsi',
   u'Roie R. Black', 'manual'),
]

latex_logo = '_static/images/ACClogo.png'
#latex_show_urls = False
#latex_appendices = []
#latex_domain_indices = True

