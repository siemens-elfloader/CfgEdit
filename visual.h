#ifndef _VISUAL_H_
  #define _VISUAL_H_

void ascii2ws(WSHDR *ws, const char *s);
void EditCoordinates(void *rect_or_xy, int is_rect);
void open_select_file_gui(void *ed_gui, int type);

#endif
