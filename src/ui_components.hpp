#pragma once

#include "lib.rs.h"
#include <ImGuiFileDialog.h>
#include <imgui.h>
#include <imgui_internal.h>
#include <imnodes.h>

void draw_editor(bool *p_open, org::cfrs::CGraph &graph);
void draw_library(bool *p_open);
void draw_main_menu(bool *editor_open, bool *log_open, bool *browser_open,
                    bool *demo_open, bool *quit);
void file_selector(bool *stale_graph);

struct ApplicationLog {
  ImGuiTextBuffer buf;
  ImGuiTextFilter filter;
  ImVector<int> offsets;
  bool auto_scroll;

  ApplicationLog();
  void clear();
  void add_log(const char *fmt, ...);
  void draw(const char *title, bool *p_open);
};