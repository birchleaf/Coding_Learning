from pyecharts.charts import Line
from pyecharts.options import TitleOpts
line = Line()
line.add_xaxis(["china","american"])
line.add_yaxis("GDP",[10,20])
line.set_global_opts(
    title_opts=TitleOpts(title="Gdpshows")
)
line.render()