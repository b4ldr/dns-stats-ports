--- src/tcp_ip/stream.cpp
+++ src/tcp_ip/stream.cpp
@@ -258,7 +258,7 @@ void Stream::auto_cleanup_client_data(bool value) {
 }
 
 void Stream::auto_cleanup_server_data(bool value) {
-    auto_cleanup_client_ = value;
+    auto_cleanup_server_ = value;
 }
 
 void Stream::enable_ack_tracking() {
