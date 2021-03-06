/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface KCellularWcdmaRrcConnectionState : PBCodable <NSCopying> {
    int  _establishmentCause;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int establishmentCause : 1; 
        unsigned int releaseCause : 1; 
        unsigned int state : 1; 
    }  _has;
    int  _releaseCause;
    int  _state;
    unsigned long long  _timestamp;
}

@property (nonatomic) int establishmentCause;
@property (nonatomic) BOOL hasEstablishmentCause;
@property (nonatomic) BOOL hasReleaseCause;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int releaseCause;
@property (nonatomic) int state;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)establishmentCause;
- (BOOL)hasEstablishmentCause;
- (BOOL)hasReleaseCause;
- (BOOL)hasState;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)releaseCause;
- (void)setEstablishmentCause:(int)arg1;
- (void)setHasEstablishmentCause:(BOOL)arg1;
- (void)setHasReleaseCause:(BOOL)arg1;
- (void)setHasState:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setReleaseCause:(int)arg1;
- (void)setState:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)state;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
