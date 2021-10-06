import pygame as pg
pg.init()

d = pg.display.set_mode((800,600))

while True:
    for e in pg.event.get():
        if e.type == pg.QUIT:
            pg.quit()
            quit()
    
    pg.display.update()