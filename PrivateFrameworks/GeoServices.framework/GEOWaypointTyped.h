/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOWaypointTyped : PBCodable <NSCopying> {
    struct { 
        unsigned int waypointType : 1; 
        unsigned int isCurrentLocation : 1; 
    }  _has;
    BOOL  _isCurrentLocation;
    GEOWaypointID * _waypointId;
    GEOWaypointLocation * _waypointLocation;
    GEOWaypointPlace * _waypointPlace;
    int  _waypointType;
}

@property (nonatomic) BOOL hasIsCurrentLocation;
@property (nonatomic, readonly) BOOL hasWaypointId;
@property (nonatomic, readonly) BOOL hasWaypointLocation;
@property (nonatomic, readonly) BOOL hasWaypointPlace;
@property (nonatomic) BOOL hasWaypointType;
@property (nonatomic) BOOL isCurrentLocation;
@property (nonatomic, retain) GEOWaypointID *waypointId;
@property (nonatomic, retain) GEOWaypointLocation *waypointLocation;
@property (nonatomic, retain) GEOWaypointPlace *waypointPlace;
@property (nonatomic) int waypointType;

- (int)StringAsWaypointType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsCurrentLocation;
- (BOOL)hasWaypointId;
- (BOOL)hasWaypointLocation;
- (BOOL)hasWaypointPlace;
- (BOOL)hasWaypointType;
- (unsigned int)hash;
- (BOOL)isCurrentLocation;
- (BOOL)isEqual:(id)arg1;
- (id)locationForWaypoint;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIsCurrentLocation:(BOOL)arg1;
- (void)setHasWaypointType:(BOOL)arg1;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (void)setWaypointId:(id)arg1;
- (void)setWaypointLocation:(id)arg1;
- (void)setWaypointPlace:(id)arg1;
- (void)setWaypointType:(int)arg1;
- (id)waypointId;
- (id)waypointLocation;
- (id)waypointPlace;
- (int)waypointType;
- (id)waypointTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
