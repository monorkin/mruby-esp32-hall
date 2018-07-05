# mruby-esp32-hall

mruby interface for the ESP32's built-in Hall effect sensor

![ESP32 displaying the Hall effect output on an OLED screen](/docs/demo.gif)

## Installation

Add the line below to your `build_config.rb`:

```ruby
  conf.gem github: 'stankec/mruby-esp32-hall'
```

## Example

```Ruby
loop do
  # Reads and returns the sensor's current value
  value = ESP32::Hall.current_value

  puts "Hall effect: #{value}"

  ESP32::System.delay(100)
end
```

## Contributing

The `develop` branch contains all the latest changes and all development is
done on it. Stable releases are merged into the `master` branch.

All contributions and suggestions are welcome.

## License

This project is licensed under the MIT license. Reference the
[LICENSE](/LICENSE) file to see the full license text.

This software comes "as is" and without any kind of warranty.
