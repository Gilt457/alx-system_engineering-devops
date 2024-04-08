# 0x11. What happens when you type google.com in your browser and press Enter

This project aims to provide a detailed explanation of what happens when you type `google.com` in your browser and press `Enter`.

## Table of Contents

- Introduction
- Detailed Steps
- Conclusion
- Author

## Introduction

The process of typing `google.com` into a browser and pressing `Enter` involves numerous steps that include local processes, network communication, server-side processing, and the rendering of the received data in the browser.

## Detailed Steps

1. **Local Search**: The browser checks its cache for DNS records to find the corresponding IP address of `google.com`.

2. **Operating System Assistance**: If the cache does not contain the required information, the browser requests the operating system to fetch the DNS record. The OS in turn checks its own cache and if it can't find it, it queries the DNS server configured in its network settings.

3. **DNS Lookup**: The DNS server contains a list of IP addresses and their corresponding hostnames. It finds the IP address that matches `google.com` and returns this to the requester.

4. **Establishing a Connection**: The browser initiates a TCP connection with the server at the received IP address.

5. **HTTP Request**: The browser sends an HTTP GET request to the server, asking for the content of `google.com`.

6. **Server Response**: The server processes the request and sends back an HTTP response containing the HTML content of `google.com`.

7. **Rendering the Page**: The browser receives the HTML content and renders the `google.com` webpage on your screen.

## Conclusion

The process of loading a webpage is a complex task that involves multiple layers of computing, ranging from local hardware and software to network protocols and server-side processing.

## Author

- Borel Lepatio
