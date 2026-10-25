import http.server, socketserver, os
os.chdir('web')
PORT=8080
print(f"\n⚡ LIGHTING OS v5.0 WEB STARTING...")
print(f"Open on YOUR phone: http://localhost:{PORT}")
print(f"For VIETNAM access, run next command for public link!\n")
with socketserver.TCPServer(("", PORT), http.server.SimpleHTTPRequestHandler) as httpd:
 httpd.serve_forever()
