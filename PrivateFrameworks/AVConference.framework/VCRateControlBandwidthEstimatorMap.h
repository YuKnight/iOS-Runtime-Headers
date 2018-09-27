/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRateControlBandwidthEstimatorMap : NSObject {
    unsigned int  _currentActiveEstimatorID;
    double  _estimatedBandwidth;
    double  _estimatedBandwidthUncapped;
    NSMutableDictionary * _estimatorMap;
    unsigned int  _mode;
    unsigned int  _radioAccessTechnology;
    int  _state;
}

@property (nonatomic) double estimatedBandwidth;
@property (nonatomic) double estimatedBandwidthUncapped;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int radioAccessTechnology;

- (id)bandwidthEstimatorWithID:(unsigned int)arg1 isProbingSequence:(bool)arg2 isEndOfProbingSequence:(bool)arg3;
- (void)dealloc;
- (void)deregisterBandwidthEstimatorWithID:(unsigned int)arg1;
- (double)estimatedBandwidth;
- (double)estimatedBandwidthUncapped;
- (id)init;
- (unsigned int)mode;
- (unsigned int)radioAccessTechnology;
- (void)setEstimatedBandwidth:(double)arg1;
- (void)setEstimatedBandwidthUncapped:(double)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setRadioAccessTechnology:(unsigned int)arg1;

@end