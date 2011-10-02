/**
 * Autogenerated by Thrift Compiler (0.8.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef pyload_TYPES_H
#define pyload_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>





struct DownloadStatus {
  enum type {
    Finished = 0,
    Offline = 1,
    Online = 2,
    Queued = 3,
    Skipped = 4,
    Waiting = 5,
    TempOffline = 6,
    Starting = 7,
    Failed = 8,
    Aborted = 9,
    Decrypting = 10,
    Custom = 11,
    Downloading = 12,
    Processing = 13,
    Unknown = 14
  };
};

extern const std::map<int, const char*> _DownloadStatus_VALUES_TO_NAMES;

struct Destination {
  enum type {
    Collector = 0,
    Queue = 1
  };
};

extern const std::map<int, const char*> _Destination_VALUES_TO_NAMES;

struct ElementType {
  enum type {
    Package = 0,
    File = 1
  };
};

extern const std::map<int, const char*> _ElementType_VALUES_TO_NAMES;

typedef int32_t FileID;

typedef int32_t PackageID;

typedef int32_t TaskID;

typedef int32_t ResultID;

typedef std::vector<std::string>  LinkList;

typedef std::string PluginName;

typedef int8_t Progress;

typedef int8_t Priority;

typedef struct _DownloadInfo__isset {
  _DownloadInfo__isset() : fid(false), name(false), speed(false), eta(false), format_eta(false), bleft(false), size(false), format_size(false), percent(false), status(false), statusmsg(false), format_wait(false), wait_until(false), packageID(false), packageName(false), plugin(false) {}
  bool fid;
  bool name;
  bool speed;
  bool eta;
  bool format_eta;
  bool bleft;
  bool size;
  bool format_size;
  bool percent;
  bool status;
  bool statusmsg;
  bool format_wait;
  bool wait_until;
  bool packageID;
  bool packageName;
  bool plugin;
} _DownloadInfo__isset;

class DownloadInfo {
 public:

  static const char* ascii_fingerprint; // = "CF42CA2EF87310701EF8CFD2DD7A07E2";
  static const uint8_t binary_fingerprint[16]; // = {0xCF,0x42,0xCA,0x2E,0xF8,0x73,0x10,0x70,0x1E,0xF8,0xCF,0xD2,0xDD,0x7A,0x07,0xE2};

  DownloadInfo() : fid(0), name(""), speed(0), eta(0), format_eta(""), bleft(0), size(0), format_size(""), percent(0), statusmsg(""), format_wait(""), wait_until(0), packageID(0), packageName(""), plugin("") {
  }

  virtual ~DownloadInfo() throw() {}

  FileID fid;
  std::string name;
  int64_t speed;
  int32_t eta;
  std::string format_eta;
  int64_t bleft;
  int64_t size;
  std::string format_size;
  Progress percent;
  DownloadStatus::type status;
  std::string statusmsg;
  std::string format_wait;
  int64_t wait_until;
  PackageID packageID;
  std::string packageName;
  PluginName plugin;

  _DownloadInfo__isset __isset;

  void __set_fid(const FileID val) {
    fid = val;
  }

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_speed(const int64_t val) {
    speed = val;
  }

  void __set_eta(const int32_t val) {
    eta = val;
  }

  void __set_format_eta(const std::string& val) {
    format_eta = val;
  }

  void __set_bleft(const int64_t val) {
    bleft = val;
  }

  void __set_size(const int64_t val) {
    size = val;
  }

  void __set_format_size(const std::string& val) {
    format_size = val;
  }

  void __set_percent(const Progress val) {
    percent = val;
  }

  void __set_status(const DownloadStatus::type val) {
    status = val;
  }

  void __set_statusmsg(const std::string& val) {
    statusmsg = val;
  }

  void __set_format_wait(const std::string& val) {
    format_wait = val;
  }

  void __set_wait_until(const int64_t val) {
    wait_until = val;
  }

  void __set_packageID(const PackageID val) {
    packageID = val;
  }

  void __set_packageName(const std::string& val) {
    packageName = val;
  }

  void __set_plugin(const PluginName& val) {
    plugin = val;
  }

  bool operator == (const DownloadInfo & rhs) const
  {
    if (!(fid == rhs.fid))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(speed == rhs.speed))
      return false;
    if (!(eta == rhs.eta))
      return false;
    if (!(format_eta == rhs.format_eta))
      return false;
    if (!(bleft == rhs.bleft))
      return false;
    if (!(size == rhs.size))
      return false;
    if (!(format_size == rhs.format_size))
      return false;
    if (!(percent == rhs.percent))
      return false;
    if (!(status == rhs.status))
      return false;
    if (!(statusmsg == rhs.statusmsg))
      return false;
    if (!(format_wait == rhs.format_wait))
      return false;
    if (!(wait_until == rhs.wait_until))
      return false;
    if (!(packageID == rhs.packageID))
      return false;
    if (!(packageName == rhs.packageName))
      return false;
    if (!(plugin == rhs.plugin))
      return false;
    return true;
  }
  bool operator != (const DownloadInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DownloadInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ServerStatus__isset {
  _ServerStatus__isset() : pause(false), active(false), queue(false), total(false), speed(false), download(false), reconnect(false) {}
  bool pause;
  bool active;
  bool queue;
  bool total;
  bool speed;
  bool download;
  bool reconnect;
} _ServerStatus__isset;

class ServerStatus {
 public:

  static const char* ascii_fingerprint; // = "F2178FF1B8C3AAE64F6AEEF9D19F9A6A";
  static const uint8_t binary_fingerprint[16]; // = {0xF2,0x17,0x8F,0xF1,0xB8,0xC3,0xAA,0xE6,0x4F,0x6A,0xEE,0xF9,0xD1,0x9F,0x9A,0x6A};

  ServerStatus() : pause(0), active(0), queue(0), total(0), speed(0), download(0), reconnect(0) {
  }

  virtual ~ServerStatus() throw() {}

  bool pause;
  int16_t active;
  int16_t queue;
  int16_t total;
  int64_t speed;
  bool download;
  bool reconnect;

  _ServerStatus__isset __isset;

  void __set_pause(const bool val) {
    pause = val;
  }

  void __set_active(const int16_t val) {
    active = val;
  }

  void __set_queue(const int16_t val) {
    queue = val;
  }

  void __set_total(const int16_t val) {
    total = val;
  }

  void __set_speed(const int64_t val) {
    speed = val;
  }

  void __set_download(const bool val) {
    download = val;
  }

  void __set_reconnect(const bool val) {
    reconnect = val;
  }

  bool operator == (const ServerStatus & rhs) const
  {
    if (!(pause == rhs.pause))
      return false;
    if (!(active == rhs.active))
      return false;
    if (!(queue == rhs.queue))
      return false;
    if (!(total == rhs.total))
      return false;
    if (!(speed == rhs.speed))
      return false;
    if (!(download == rhs.download))
      return false;
    if (!(reconnect == rhs.reconnect))
      return false;
    return true;
  }
  bool operator != (const ServerStatus &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServerStatus & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ConfigItem__isset {
  _ConfigItem__isset() : name(false), description(false), value(false), type(false) {}
  bool name;
  bool description;
  bool value;
  bool type;
} _ConfigItem__isset;

class ConfigItem {
 public:

  static const char* ascii_fingerprint; // = "C93D890311F28844166CF6E571EB3AC2";
  static const uint8_t binary_fingerprint[16]; // = {0xC9,0x3D,0x89,0x03,0x11,0xF2,0x88,0x44,0x16,0x6C,0xF6,0xE5,0x71,0xEB,0x3A,0xC2};

  ConfigItem() : name(""), description(""), value(""), type("") {
  }

  virtual ~ConfigItem() throw() {}

  std::string name;
  std::string description;
  std::string value;
  std::string type;

  _ConfigItem__isset __isset;

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_description(const std::string& val) {
    description = val;
  }

  void __set_value(const std::string& val) {
    value = val;
  }

  void __set_type(const std::string& val) {
    type = val;
  }

  bool operator == (const ConfigItem & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(description == rhs.description))
      return false;
    if (!(value == rhs.value))
      return false;
    if (!(type == rhs.type))
      return false;
    return true;
  }
  bool operator != (const ConfigItem &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ConfigItem & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ConfigSection__isset {
  _ConfigSection__isset() : name(false), description(false), items(false), outline(false) {}
  bool name;
  bool description;
  bool items;
  bool outline;
} _ConfigSection__isset;

class ConfigSection {
 public:

  static const char* ascii_fingerprint; // = "E0AABC02533A9D85321AD50858FAE1D6";
  static const uint8_t binary_fingerprint[16]; // = {0xE0,0xAA,0xBC,0x02,0x53,0x3A,0x9D,0x85,0x32,0x1A,0xD5,0x08,0x58,0xFA,0xE1,0xD6};

  ConfigSection() : name(""), description(""), outline("") {
  }

  virtual ~ConfigSection() throw() {}

  std::string name;
  std::string description;
  std::vector<ConfigItem>  items;
  std::string outline;

  _ConfigSection__isset __isset;

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_description(const std::string& val) {
    description = val;
  }

  void __set_items(const std::vector<ConfigItem> & val) {
    items = val;
  }

  void __set_outline(const std::string& val) {
    outline = val;
    __isset.outline = true;
  }

  bool operator == (const ConfigSection & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(description == rhs.description))
      return false;
    if (!(items == rhs.items))
      return false;
    if (__isset.outline != rhs.__isset.outline)
      return false;
    else if (__isset.outline && !(outline == rhs.outline))
      return false;
    return true;
  }
  bool operator != (const ConfigSection &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ConfigSection & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _FileData__isset {
  _FileData__isset() : fid(false), url(false), name(false), plugin(false), size(false), format_size(false), status(false), statusmsg(false), packageID(false), error(false), order(false) {}
  bool fid;
  bool url;
  bool name;
  bool plugin;
  bool size;
  bool format_size;
  bool status;
  bool statusmsg;
  bool packageID;
  bool error;
  bool order;
} _FileData__isset;

class FileData {
 public:

  static const char* ascii_fingerprint; // = "BA26B19165D8336A55E281BC6A2E4610";
  static const uint8_t binary_fingerprint[16]; // = {0xBA,0x26,0xB1,0x91,0x65,0xD8,0x33,0x6A,0x55,0xE2,0x81,0xBC,0x6A,0x2E,0x46,0x10};

  FileData() : fid(0), url(""), name(""), plugin(""), size(0), format_size(""), statusmsg(""), packageID(0), error(""), order(0) {
  }

  virtual ~FileData() throw() {}

  FileID fid;
  std::string url;
  std::string name;
  PluginName plugin;
  int64_t size;
  std::string format_size;
  DownloadStatus::type status;
  std::string statusmsg;
  PackageID packageID;
  std::string error;
  int16_t order;

  _FileData__isset __isset;

  void __set_fid(const FileID val) {
    fid = val;
  }

  void __set_url(const std::string& val) {
    url = val;
  }

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_plugin(const PluginName& val) {
    plugin = val;
  }

  void __set_size(const int64_t val) {
    size = val;
  }

  void __set_format_size(const std::string& val) {
    format_size = val;
  }

  void __set_status(const DownloadStatus::type val) {
    status = val;
  }

  void __set_statusmsg(const std::string& val) {
    statusmsg = val;
  }

  void __set_packageID(const PackageID val) {
    packageID = val;
  }

  void __set_error(const std::string& val) {
    error = val;
  }

  void __set_order(const int16_t val) {
    order = val;
  }

  bool operator == (const FileData & rhs) const
  {
    if (!(fid == rhs.fid))
      return false;
    if (!(url == rhs.url))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(plugin == rhs.plugin))
      return false;
    if (!(size == rhs.size))
      return false;
    if (!(format_size == rhs.format_size))
      return false;
    if (!(status == rhs.status))
      return false;
    if (!(statusmsg == rhs.statusmsg))
      return false;
    if (!(packageID == rhs.packageID))
      return false;
    if (!(error == rhs.error))
      return false;
    if (!(order == rhs.order))
      return false;
    return true;
  }
  bool operator != (const FileData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FileData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _PackageData__isset {
  _PackageData__isset() : pid(false), name(false), folder(false), site(false), password(false), dest(false), order(false), linksdone(false), sizedone(false), sizetotal(false), linkstotal(false), links(false), fids(false) {}
  bool pid;
  bool name;
  bool folder;
  bool site;
  bool password;
  bool dest;
  bool order;
  bool linksdone;
  bool sizedone;
  bool sizetotal;
  bool linkstotal;
  bool links;
  bool fids;
} _PackageData__isset;

class PackageData {
 public:

  static const char* ascii_fingerprint; // = "9C1616A7F89D00284D1DE7ABD417D2D3";
  static const uint8_t binary_fingerprint[16]; // = {0x9C,0x16,0x16,0xA7,0xF8,0x9D,0x00,0x28,0x4D,0x1D,0xE7,0xAB,0xD4,0x17,0xD2,0xD3};

  PackageData() : pid(0), name(""), folder(""), site(""), password(""), order(0), linksdone(0), sizedone(0), sizetotal(0), linkstotal(0) {
  }

  virtual ~PackageData() throw() {}

  PackageID pid;
  std::string name;
  std::string folder;
  std::string site;
  std::string password;
  Destination::type dest;
  int16_t order;
  int16_t linksdone;
  int64_t sizedone;
  int64_t sizetotal;
  int16_t linkstotal;
  std::vector<FileData>  links;
  std::vector<FileID>  fids;

  _PackageData__isset __isset;

  void __set_pid(const PackageID val) {
    pid = val;
  }

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_folder(const std::string& val) {
    folder = val;
  }

  void __set_site(const std::string& val) {
    site = val;
  }

  void __set_password(const std::string& val) {
    password = val;
  }

  void __set_dest(const Destination::type val) {
    dest = val;
  }

  void __set_order(const int16_t val) {
    order = val;
  }

  void __set_linksdone(const int16_t val) {
    linksdone = val;
    __isset.linksdone = true;
  }

  void __set_sizedone(const int64_t val) {
    sizedone = val;
    __isset.sizedone = true;
  }

  void __set_sizetotal(const int64_t val) {
    sizetotal = val;
    __isset.sizetotal = true;
  }

  void __set_linkstotal(const int16_t val) {
    linkstotal = val;
    __isset.linkstotal = true;
  }

  void __set_links(const std::vector<FileData> & val) {
    links = val;
    __isset.links = true;
  }

  void __set_fids(const std::vector<FileID> & val) {
    fids = val;
    __isset.fids = true;
  }

  bool operator == (const PackageData & rhs) const
  {
    if (!(pid == rhs.pid))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(folder == rhs.folder))
      return false;
    if (!(site == rhs.site))
      return false;
    if (!(password == rhs.password))
      return false;
    if (!(dest == rhs.dest))
      return false;
    if (!(order == rhs.order))
      return false;
    if (__isset.linksdone != rhs.__isset.linksdone)
      return false;
    else if (__isset.linksdone && !(linksdone == rhs.linksdone))
      return false;
    if (__isset.sizedone != rhs.__isset.sizedone)
      return false;
    else if (__isset.sizedone && !(sizedone == rhs.sizedone))
      return false;
    if (__isset.sizetotal != rhs.__isset.sizetotal)
      return false;
    else if (__isset.sizetotal && !(sizetotal == rhs.sizetotal))
      return false;
    if (__isset.linkstotal != rhs.__isset.linkstotal)
      return false;
    else if (__isset.linkstotal && !(linkstotal == rhs.linkstotal))
      return false;
    if (__isset.links != rhs.__isset.links)
      return false;
    else if (__isset.links && !(links == rhs.links))
      return false;
    if (__isset.fids != rhs.__isset.fids)
      return false;
    else if (__isset.fids && !(fids == rhs.fids))
      return false;
    return true;
  }
  bool operator != (const PackageData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PackageData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CaptchaTask__isset {
  _CaptchaTask__isset() : tid(false), data(false), type(false), resultType(false) {}
  bool tid;
  bool data;
  bool type;
  bool resultType;
} _CaptchaTask__isset;

class CaptchaTask {
 public:

  static const char* ascii_fingerprint; // = "9633349FCC7151C040D61CE4A7C5FCCA";
  static const uint8_t binary_fingerprint[16]; // = {0x96,0x33,0x34,0x9F,0xCC,0x71,0x51,0xC0,0x40,0xD6,0x1C,0xE4,0xA7,0xC5,0xFC,0xCA};

  CaptchaTask() : tid(0), data(""), type(""), resultType("") {
  }

  virtual ~CaptchaTask() throw() {}

  int16_t tid;
  std::string data;
  std::string type;
  std::string resultType;

  _CaptchaTask__isset __isset;

  void __set_tid(const int16_t val) {
    tid = val;
  }

  void __set_data(const std::string& val) {
    data = val;
  }

  void __set_type(const std::string& val) {
    type = val;
  }

  void __set_resultType(const std::string& val) {
    resultType = val;
  }

  bool operator == (const CaptchaTask & rhs) const
  {
    if (!(tid == rhs.tid))
      return false;
    if (!(data == rhs.data))
      return false;
    if (!(type == rhs.type))
      return false;
    if (!(resultType == rhs.resultType))
      return false;
    return true;
  }
  bool operator != (const CaptchaTask &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CaptchaTask & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _EventInfo__isset {
  _EventInfo__isset() : eventname(false), id(false), type(false), destination(false) {}
  bool eventname;
  bool id;
  bool type;
  bool destination;
} _EventInfo__isset;

class EventInfo {
 public:

  static const char* ascii_fingerprint; // = "FC7AC933E295B4EBA8CAC312A9A06BA5";
  static const uint8_t binary_fingerprint[16]; // = {0xFC,0x7A,0xC9,0x33,0xE2,0x95,0xB4,0xEB,0xA8,0xCA,0xC3,0x12,0xA9,0xA0,0x6B,0xA5};

  EventInfo() : eventname(""), id(0) {
  }

  virtual ~EventInfo() throw() {}

  std::string eventname;
  int32_t id;
  ElementType::type type;
  Destination::type destination;

  _EventInfo__isset __isset;

  void __set_eventname(const std::string& val) {
    eventname = val;
  }

  void __set_id(const int32_t val) {
    id = val;
    __isset.id = true;
  }

  void __set_type(const ElementType::type val) {
    type = val;
    __isset.type = true;
  }

  void __set_destination(const Destination::type val) {
    destination = val;
    __isset.destination = true;
  }

  bool operator == (const EventInfo & rhs) const
  {
    if (!(eventname == rhs.eventname))
      return false;
    if (__isset.id != rhs.__isset.id)
      return false;
    else if (__isset.id && !(id == rhs.id))
      return false;
    if (__isset.type != rhs.__isset.type)
      return false;
    else if (__isset.type && !(type == rhs.type))
      return false;
    if (__isset.destination != rhs.__isset.destination)
      return false;
    else if (__isset.destination && !(destination == rhs.destination))
      return false;
    return true;
  }
  bool operator != (const EventInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const EventInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserData__isset {
  _UserData__isset() : name(false), email(false), role(false), permission(false), template_(false) {}
  bool name;
  bool email;
  bool role;
  bool permission;
  bool template_;
} _UserData__isset;

class UserData {
 public:

  static const char* ascii_fingerprint; // = "79B8231729AAFA85B85FA74A964A20B5";
  static const uint8_t binary_fingerprint[16]; // = {0x79,0xB8,0x23,0x17,0x29,0xAA,0xFA,0x85,0xB8,0x5F,0xA7,0x4A,0x96,0x4A,0x20,0xB5};

  UserData() : name(""), email(""), role(0), permission(0), template_("") {
  }

  virtual ~UserData() throw() {}

  std::string name;
  std::string email;
  int32_t role;
  int32_t permission;
  std::string template_;

  _UserData__isset __isset;

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_email(const std::string& val) {
    email = val;
  }

  void __set_role(const int32_t val) {
    role = val;
  }

  void __set_permission(const int32_t val) {
    permission = val;
  }

  void __set_template_(const std::string& val) {
    template_ = val;
  }

  bool operator == (const UserData & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(email == rhs.email))
      return false;
    if (!(role == rhs.role))
      return false;
    if (!(permission == rhs.permission))
      return false;
    if (!(template_ == rhs.template_))
      return false;
    return true;
  }
  bool operator != (const UserData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _AccountInfo__isset {
  _AccountInfo__isset() : validuntil(false), login(false), options(false), valid(false), trafficleft(false), maxtraffic(false), premium(false), type(false) {}
  bool validuntil;
  bool login;
  bool options;
  bool valid;
  bool trafficleft;
  bool maxtraffic;
  bool premium;
  bool type;
} _AccountInfo__isset;

class AccountInfo {
 public:

  static const char* ascii_fingerprint; // = "9063CF5BEE52A0201626A23C256F897E";
  static const uint8_t binary_fingerprint[16]; // = {0x90,0x63,0xCF,0x5B,0xEE,0x52,0xA0,0x20,0x16,0x26,0xA2,0x3C,0x25,0x6F,0x89,0x7E};

  AccountInfo() : validuntil(0), login(""), valid(0), trafficleft(0), maxtraffic(0), premium(0), type("") {
  }

  virtual ~AccountInfo() throw() {}

  int64_t validuntil;
  std::string login;
  std::map<std::string, std::vector<std::string> >  options;
  bool valid;
  int64_t trafficleft;
  int64_t maxtraffic;
  bool premium;
  std::string type;

  _AccountInfo__isset __isset;

  void __set_validuntil(const int64_t val) {
    validuntil = val;
  }

  void __set_login(const std::string& val) {
    login = val;
  }

  void __set_options(const std::map<std::string, std::vector<std::string> > & val) {
    options = val;
  }

  void __set_valid(const bool val) {
    valid = val;
  }

  void __set_trafficleft(const int64_t val) {
    trafficleft = val;
  }

  void __set_maxtraffic(const int64_t val) {
    maxtraffic = val;
  }

  void __set_premium(const bool val) {
    premium = val;
  }

  void __set_type(const std::string& val) {
    type = val;
  }

  bool operator == (const AccountInfo & rhs) const
  {
    if (!(validuntil == rhs.validuntil))
      return false;
    if (!(login == rhs.login))
      return false;
    if (!(options == rhs.options))
      return false;
    if (!(valid == rhs.valid))
      return false;
    if (!(trafficleft == rhs.trafficleft))
      return false;
    if (!(maxtraffic == rhs.maxtraffic))
      return false;
    if (!(premium == rhs.premium))
      return false;
    if (!(type == rhs.type))
      return false;
    return true;
  }
  bool operator != (const AccountInfo &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AccountInfo & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ServiceCall__isset {
  _ServiceCall__isset() : plugin(false), func(false), arguments(false), parseArguments(false) {}
  bool plugin;
  bool func;
  bool arguments;
  bool parseArguments;
} _ServiceCall__isset;

class ServiceCall {
 public:

  static const char* ascii_fingerprint; // = "5CF4CC5F4B59F9DE54404CBEC4817C71";
  static const uint8_t binary_fingerprint[16]; // = {0x5C,0xF4,0xCC,0x5F,0x4B,0x59,0xF9,0xDE,0x54,0x40,0x4C,0xBE,0xC4,0x81,0x7C,0x71};

  ServiceCall() : plugin(""), func(""), parseArguments(0) {
  }

  virtual ~ServiceCall() throw() {}

  PluginName plugin;
  std::string func;
  std::vector<std::string>  arguments;
  bool parseArguments;

  _ServiceCall__isset __isset;

  void __set_plugin(const PluginName& val) {
    plugin = val;
  }

  void __set_func(const std::string& val) {
    func = val;
  }

  void __set_arguments(const std::vector<std::string> & val) {
    arguments = val;
    __isset.arguments = true;
  }

  void __set_parseArguments(const bool val) {
    parseArguments = val;
    __isset.parseArguments = true;
  }

  bool operator == (const ServiceCall & rhs) const
  {
    if (!(plugin == rhs.plugin))
      return false;
    if (!(func == rhs.func))
      return false;
    if (__isset.arguments != rhs.__isset.arguments)
      return false;
    else if (__isset.arguments && !(arguments == rhs.arguments))
      return false;
    if (__isset.parseArguments != rhs.__isset.parseArguments)
      return false;
    else if (__isset.parseArguments && !(parseArguments == rhs.parseArguments))
      return false;
    return true;
  }
  bool operator != (const ServiceCall &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServiceCall & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _OnlineStatus__isset {
  _OnlineStatus__isset() : name(false), plugin(false), packagename(false), status(false), size(false) {}
  bool name;
  bool plugin;
  bool packagename;
  bool status;
  bool size;
} _OnlineStatus__isset;

class OnlineStatus {
 public:

  static const char* ascii_fingerprint; // = "222AFB4990285E29234328916DC6F924";
  static const uint8_t binary_fingerprint[16]; // = {0x22,0x2A,0xFB,0x49,0x90,0x28,0x5E,0x29,0x23,0x43,0x28,0x91,0x6D,0xC6,0xF9,0x24};

  OnlineStatus() : name(""), plugin(""), packagename(""), size(0) {
  }

  virtual ~OnlineStatus() throw() {}

  std::string name;
  PluginName plugin;
  std::string packagename;
  DownloadStatus::type status;
  int64_t size;

  _OnlineStatus__isset __isset;

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_plugin(const PluginName& val) {
    plugin = val;
  }

  void __set_packagename(const std::string& val) {
    packagename = val;
  }

  void __set_status(const DownloadStatus::type val) {
    status = val;
  }

  void __set_size(const int64_t val) {
    size = val;
  }

  bool operator == (const OnlineStatus & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(plugin == rhs.plugin))
      return false;
    if (!(packagename == rhs.packagename))
      return false;
    if (!(status == rhs.status))
      return false;
    if (!(size == rhs.size))
      return false;
    return true;
  }
  bool operator != (const OnlineStatus &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OnlineStatus & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _OnlineCheck__isset {
  _OnlineCheck__isset() : rid(false), data(false) {}
  bool rid;
  bool data;
} _OnlineCheck__isset;

class OnlineCheck {
 public:

  static const char* ascii_fingerprint; // = "F404EC196E4B82D7BD078F53BD49D034";
  static const uint8_t binary_fingerprint[16]; // = {0xF4,0x04,0xEC,0x19,0x6E,0x4B,0x82,0xD7,0xBD,0x07,0x8F,0x53,0xBD,0x49,0xD0,0x34};

  OnlineCheck() : rid(0) {
  }

  virtual ~OnlineCheck() throw() {}

  ResultID rid;
  std::map<std::string, OnlineStatus>  data;

  _OnlineCheck__isset __isset;

  void __set_rid(const ResultID val) {
    rid = val;
  }

  void __set_data(const std::map<std::string, OnlineStatus> & val) {
    data = val;
  }

  bool operator == (const OnlineCheck & rhs) const
  {
    if (!(rid == rhs.rid))
      return false;
    if (!(data == rhs.data))
      return false;
    return true;
  }
  bool operator != (const OnlineCheck &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OnlineCheck & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _PackageDoesNotExists__isset {
  _PackageDoesNotExists__isset() : pid(false) {}
  bool pid;
} _PackageDoesNotExists__isset;

class PackageDoesNotExists : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

  PackageDoesNotExists() : pid(0) {
  }

  virtual ~PackageDoesNotExists() throw() {}

  PackageID pid;

  _PackageDoesNotExists__isset __isset;

  void __set_pid(const PackageID val) {
    pid = val;
  }

  bool operator == (const PackageDoesNotExists & rhs) const
  {
    if (!(pid == rhs.pid))
      return false;
    return true;
  }
  bool operator != (const PackageDoesNotExists &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PackageDoesNotExists & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _FileDoesNotExists__isset {
  _FileDoesNotExists__isset() : fid(false) {}
  bool fid;
} _FileDoesNotExists__isset;

class FileDoesNotExists : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "E86CACEB22240450EDCBEFC3A83970E4";
  static const uint8_t binary_fingerprint[16]; // = {0xE8,0x6C,0xAC,0xEB,0x22,0x24,0x04,0x50,0xED,0xCB,0xEF,0xC3,0xA8,0x39,0x70,0xE4};

  FileDoesNotExists() : fid(0) {
  }

  virtual ~FileDoesNotExists() throw() {}

  FileID fid;

  _FileDoesNotExists__isset __isset;

  void __set_fid(const FileID val) {
    fid = val;
  }

  bool operator == (const FileDoesNotExists & rhs) const
  {
    if (!(fid == rhs.fid))
      return false;
    return true;
  }
  bool operator != (const FileDoesNotExists &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FileDoesNotExists & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ServiceDoesNotExists__isset {
  _ServiceDoesNotExists__isset() : plugin(false), func(false) {}
  bool plugin;
  bool func;
} _ServiceDoesNotExists__isset;

class ServiceDoesNotExists : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "07A9615F837F7D0A952B595DD3020972";
  static const uint8_t binary_fingerprint[16]; // = {0x07,0xA9,0x61,0x5F,0x83,0x7F,0x7D,0x0A,0x95,0x2B,0x59,0x5D,0xD3,0x02,0x09,0x72};

  ServiceDoesNotExists() : plugin(""), func("") {
  }

  virtual ~ServiceDoesNotExists() throw() {}

  std::string plugin;
  std::string func;

  _ServiceDoesNotExists__isset __isset;

  void __set_plugin(const std::string& val) {
    plugin = val;
  }

  void __set_func(const std::string& val) {
    func = val;
  }

  bool operator == (const ServiceDoesNotExists & rhs) const
  {
    if (!(plugin == rhs.plugin))
      return false;
    if (!(func == rhs.func))
      return false;
    return true;
  }
  bool operator != (const ServiceDoesNotExists &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServiceDoesNotExists & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ServiceException__isset {
  _ServiceException__isset() : msg(false) {}
  bool msg;
} _ServiceException__isset;

class ServiceException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  ServiceException() : msg("") {
  }

  virtual ~ServiceException() throw() {}

  std::string msg;

  _ServiceException__isset __isset;

  void __set_msg(const std::string& val) {
    msg = val;
  }

  bool operator == (const ServiceException & rhs) const
  {
    if (!(msg == rhs.msg))
      return false;
    return true;
  }
  bool operator != (const ServiceException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ServiceException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};



#endif