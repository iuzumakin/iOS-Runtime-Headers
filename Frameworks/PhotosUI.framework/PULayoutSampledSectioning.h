/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULayoutSampledSectioning : PULayoutSectioning {
    BOOL _hasSomeSampling;
    int _lastHitRangeIndex;
    int _lastHitRealSectionIndex;
    int _lastHitVisualSectionIndex;
    int *_maximumNumberOfVisibleItemsForVisualSection;
    int *_numberOfItemsForRealSection;
    int *_numberOfRealItemsForVisualSection;
    int _numberOfRealSections;
    int _numberOfVisualSections;
    NSArray *_realSectionIndexesForVisualSection;
    BOOL _samplingIsValid;
    id *_sectionSamplers;
    BOOL _sectioningIsValid;
    int *_startIndexInVisualSectionForRealSection;
    BOOL _supportsSamplingAndSectionGrouping;
    int *_visualSectionForRealSection;
}

@property (nonatomic) BOOL supportsSamplingAndSectionGrouping;

- (void).cxx_destruct;
- (int)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1;
- (void)_cacheSectioningIfNeeded;
- (void)_discardSamplingCache;
- (void)_discardSectioningCache;
- (struct PUSimpleIndexPath { int x1; int x2; })_mainRealItemIndexPathForVisualSection:(int)arg1 andUnsampledItemIndex:(int)arg2;
- (id)_sectionSamplerForVisualSection:(int)arg1;
- (int)_unsampledItemIndexForVisualItemIndex:(int)arg1 visualSection:(int)arg2;
- (int)_visualItemIndexForUnsampledItemIndex:(int)arg1 visualSection:(int)arg2 isMainItem:(BOOL*)arg3;
- (void)dealloc;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(int)arg1 inVisualItemRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateRealSectionsForVisualSection:(int)arg1 usingBlock:(id /* block */)arg2;
- (BOOL)hasSomeSampling;
- (id)init;
- (void)invalidateSampling;
- (void)invalidateSections;
- (struct PUSimpleIndexPath { int x1; int x2; })mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1;
- (int)mainRealSectionForVisualSection:(int)arg1;
- (int)numberOfRealItemsInVisualSection:(int)arg1;
- (int)numberOfVisualItemsInVisualSection:(int)arg1;
- (void)setSupportsSamplingAndSectionGrouping:(BOOL)arg1;
- (BOOL)supportsSamplingAndSectionGrouping;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1;
- (struct PUSimpleIndexPath { int x1; int x2; })visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1 isMainItem:(BOOL*)arg2;
- (int)visualSectionForRealSection:(int)arg1;

@end
