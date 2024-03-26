# Install flask package
package { 'flask':
  ensure   => '2.1.0',
  provider => 'pip',
}

# Install werkzeug package
package { 'werkzeug':
  ensure   => '2.1.1',
  provider => 'pip',
}
