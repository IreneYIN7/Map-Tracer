// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/2d/proto/map_limits.proto

#ifndef PROTOBUF_cartographer_2fmapping_2f2d_2fproto_2fmap_5flimits_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2f2d_2fproto_2fmap_5flimits_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/mapping/2d/proto/cell_limits.pb.h"
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)
namespace cartographer {
namespace mapping {
namespace proto {
class MapLimits;
class MapLimitsDefaultTypeInternal;
extern MapLimitsDefaultTypeInternal _MapLimits_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

namespace cartographer {
namespace mapping {
namespace proto {

namespace protobuf_cartographer_2fmapping_2f2d_2fproto_2fmap_5flimits_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cartographer_2fmapping_2f2d_2fproto_2fmap_5flimits_2eproto

// ===================================================================

class MapLimits : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.MapLimits) */ {
 public:
  MapLimits();
  virtual ~MapLimits();

  MapLimits(const MapLimits& from);

  inline MapLimits& operator=(const MapLimits& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MapLimits(MapLimits&& from) noexcept
    : MapLimits() {
    *this = ::std::move(from);
  }

  inline MapLimits& operator=(MapLimits&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MapLimits& default_instance();

  static inline const MapLimits* internal_default_instance() {
    return reinterpret_cast<const MapLimits*>(
               &_MapLimits_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MapLimits* other);
  friend void swap(MapLimits& a, MapLimits& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MapLimits* New() const PROTOBUF_FINAL { return New(NULL); }

  MapLimits* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MapLimits& from);
  void MergeFrom(const MapLimits& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MapLimits* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .cartographer.transform.proto.Vector2d max = 2;
  bool has_max() const;
  void clear_max();
  static const int kMaxFieldNumber = 2;
  const ::cartographer::transform::proto::Vector2d& max() const;
  ::cartographer::transform::proto::Vector2d* mutable_max();
  ::cartographer::transform::proto::Vector2d* release_max();
  void set_allocated_max(::cartographer::transform::proto::Vector2d* max);

  // .cartographer.mapping.proto.CellLimits cell_limits = 3;
  bool has_cell_limits() const;
  void clear_cell_limits();
  static const int kCellLimitsFieldNumber = 3;
  const ::cartographer::mapping::proto::CellLimits& cell_limits() const;
  ::cartographer::mapping::proto::CellLimits* mutable_cell_limits();
  ::cartographer::mapping::proto::CellLimits* release_cell_limits();
  void set_allocated_cell_limits(::cartographer::mapping::proto::CellLimits* cell_limits);

  // double resolution = 1;
  void clear_resolution();
  static const int kResolutionFieldNumber = 1;
  double resolution() const;
  void set_resolution(double value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.MapLimits)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::transform::proto::Vector2d* max_;
  ::cartographer::mapping::proto::CellLimits* cell_limits_;
  double resolution_;
  mutable int _cached_size_;
  friend struct protobuf_cartographer_2fmapping_2f2d_2fproto_2fmap_5flimits_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MapLimits

// double resolution = 1;
inline void MapLimits::clear_resolution() {
  resolution_ = 0;
}
inline double MapLimits::resolution() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.MapLimits.resolution)
  return resolution_;
}
inline void MapLimits::set_resolution(double value) {
  
  resolution_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.MapLimits.resolution)
}

// .cartographer.transform.proto.Vector2d max = 2;
inline bool MapLimits::has_max() const {
  return this != internal_default_instance() && max_ != NULL;
}
inline void MapLimits::clear_max() {
  if (GetArenaNoVirtual() == NULL && max_ != NULL) delete max_;
  max_ = NULL;
}
inline const ::cartographer::transform::proto::Vector2d& MapLimits::max() const {
  const ::cartographer::transform::proto::Vector2d* p = max_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.MapLimits.max)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::transform::proto::Vector2d*>(
      &::cartographer::transform::proto::_Vector2d_default_instance_);
}
inline ::cartographer::transform::proto::Vector2d* MapLimits::mutable_max() {
  
  if (max_ == NULL) {
    max_ = new ::cartographer::transform::proto::Vector2d;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.MapLimits.max)
  return max_;
}
inline ::cartographer::transform::proto::Vector2d* MapLimits::release_max() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.MapLimits.max)
  
  ::cartographer::transform::proto::Vector2d* temp = max_;
  max_ = NULL;
  return temp;
}
inline void MapLimits::set_allocated_max(::cartographer::transform::proto::Vector2d* max) {
  delete max_;
  max_ = max;
  if (max) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.MapLimits.max)
}

// .cartographer.mapping.proto.CellLimits cell_limits = 3;
inline bool MapLimits::has_cell_limits() const {
  return this != internal_default_instance() && cell_limits_ != NULL;
}
inline void MapLimits::clear_cell_limits() {
  if (GetArenaNoVirtual() == NULL && cell_limits_ != NULL) delete cell_limits_;
  cell_limits_ = NULL;
}
inline const ::cartographer::mapping::proto::CellLimits& MapLimits::cell_limits() const {
  const ::cartographer::mapping::proto::CellLimits* p = cell_limits_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.MapLimits.cell_limits)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::CellLimits*>(
      &::cartographer::mapping::proto::_CellLimits_default_instance_);
}
inline ::cartographer::mapping::proto::CellLimits* MapLimits::mutable_cell_limits() {
  
  if (cell_limits_ == NULL) {
    cell_limits_ = new ::cartographer::mapping::proto::CellLimits;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.MapLimits.cell_limits)
  return cell_limits_;
}
inline ::cartographer::mapping::proto::CellLimits* MapLimits::release_cell_limits() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.MapLimits.cell_limits)
  
  ::cartographer::mapping::proto::CellLimits* temp = cell_limits_;
  cell_limits_ = NULL;
  return temp;
}
inline void MapLimits::set_allocated_cell_limits(::cartographer::mapping::proto::CellLimits* cell_limits) {
  delete cell_limits_;
  cell_limits_ = cell_limits;
  if (cell_limits) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.MapLimits.cell_limits)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2f2d_2fproto_2fmap_5flimits_2eproto__INCLUDED
