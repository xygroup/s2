// Copyright 2005 Google Inc. All Rights Reserved.

#ifndef S2_S2POINTREGION_H__
#define S2_S2POINTREGION_H__

#include "s2/base/logging.h"
#include "s2/base/macros.h"
#include "s2/s2.h"
#include "s2/s2region.h"

// An S2PointRegion is a region that contains a single point.  It is more
// expensive than the raw S2Point type and is useful mainly for completeness.
class S2PointRegion : public S2Region {
 public:
  // Create a region containing the given point, which must be unit length.
  inline explicit S2PointRegion(S2Point const& point);

  ~S2PointRegion();

  S2Point const& point() const { return point_; }

  ////////////////////////////////////////////////////////////////////////
  // S2Region interface (see s2region.h for details):

  virtual S2PointRegion* Clone() const;
  virtual S2Cap GetCapBound() const;
  virtual S2LatLngRect GetRectBound() const;
  virtual bool Contains(S2Cell const& cell) const { return false; }
  virtual bool MayIntersect(S2Cell const& cell) const;
  virtual bool VirtualContainsPoint(S2Point const& p) const {
    return Contains(p);
  }
  bool Contains(S2Point const& p) const { return (point_ == p); }

 private:
  S2Point point_;

  DISALLOW_EVIL_CONSTRUCTORS(S2PointRegion);
};

S2PointRegion::S2PointRegion(S2Point const& point) : point_(point) {
  DCHECK(S2::IsUnitLength(point));
}

#endif  // S2_S2POINTREGION_H__
