#include <mruby.h>
#include <mruby/value.h>

#include "driver/adc.h"

static mrb_value
mrb_esp32_hall_current_value(mrb_state *mrb, mrb_value self) {
  int value = hall_sensor_read();
  return mrb_fixnum_value(value);
}

// Gem definition

void
mrb_mruby_esp32_hall_gem_init(mrb_state* mrb) {
  struct RClass *esp32_module = mrb_define_module(mrb, "ESP32");
  struct RClass *esp32_hall_module = mrb_define_module_under(mrb, esp32_module, "Hall");

  mrb_define_class_method(mrb, esp32_hall_module, "current_value", mrb_esp32_hall_current_value, MRB_ARGS_NONE());
}

void
mrb_mruby_esp32_hall_gem_final(mrb_state* mrb) {
}
