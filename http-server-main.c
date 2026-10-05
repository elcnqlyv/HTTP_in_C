/*
RFC 1945: HyperText Transfer Protocol -- HTTP/1.0

1. Create a socket
2. Bind the socket to an address
3. Listen on the address
4. Block on Accept until a connection is made
5. Read on the connected socket
6. Figure out how to respond
7. Write back on the connected socket
8. Close the connection
9. Go back to blocking on Accept

*/