// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8 {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};

// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8 {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 4,
	EMovieSceneBlendType_MAX = 5
};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8 {
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21,
	EMovieSceneBuiltInEasing_MAX = 22
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8 {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2
};

// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8 {
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	Custom = 5,
	EUpdateClockSource_MAX = 6
};

// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8 {
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2
};

// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8 {
	Stopped = 0,
	Playing = 1,
	Recording = 2,
	Scrubbing = 3,
	Jumping = 4,
	Stepping = 5,
	Paused = 6,
	MAX = 7
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8 {
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};

// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8 {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8 {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3
};

// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8 {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3
};

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8 {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3
};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEvalTemplateBase {
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size: 0x20 (Inherited: 0x10)
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	enum class EMovieSceneCompletionMode CompletionMode; // 0x10(0x01)
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14(0x08)
};

// ScriptStruct MovieScene.MovieSceneChannel
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneChannel {
};

// ScriptStruct MovieScene.MovieSceneBoolChannel
// Size: 0x90 (Inherited: 0x08)
struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x08(0x10)
	bool DefaultValue; // 0x18(0x01)
	bool bHasDefaultValue; // 0x19(0x01)
	TArray<bool> Values; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieSceneFloatChannel
// Size: 0xa0 (Inherited: 0x08)
struct FMovieSceneFloatChannel : FMovieSceneChannel {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x08(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x09(0x01)
	TArray<FFrameNumber> Times; // 0x10(0x10)
	TArray<FMovieSceneFloatValue> Values; // 0x20(0x10)
	float DefaultValue; // 0x30(0x04)
	bool bHasDefaultValue; // 0x34(0x01)
	FMovieSceneKeyHandleMap KeyHandles; // 0x38(0x60)
	FFrameRate TickResolution; // 0x98(0x08)
};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// Size: 0x60 (Inherited: 0x60)
struct FMovieSceneKeyHandleMap : FKeyHandleLookupTable {
};

// ScriptStruct MovieScene.MovieSceneFloatValue
// Size: 0x1c (Inherited: 0x00)
struct FMovieSceneFloatValue {
	float Value; // 0x00(0x04)
	FMovieSceneTangentData Tangent; // 0x04(0x14)
	enum class ERichCurveInterpMode InterpMode; // 0x18(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x19(0x01)
	char PaddingByte; // 0x1a(0x01)
};

// ScriptStruct MovieScene.MovieSceneTangentData
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneTangentData {
	float ArriveTangent; // 0x00(0x04)
	float LeaveTangent; // 0x04(0x04)
	float ArriveTangentWeight; // 0x08(0x04)
	float LeaveTangentWeight; // 0x0c(0x04)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x10(0x01)
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
// Size: 0x90 (Inherited: 0x08)
struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x08(0x10)
	int32_t DefaultValue; // 0x18(0x04)
	bool bHasDefaultValue; // 0x1c(0x01)
	TArray<int32_t> Values; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size: 0x10 (Inherited: 0x10)
struct FMovieSceneTrackImplementation : FMovieSceneEvalTemplateBase {
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20(0x28)
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// Size: 0x28 (Inherited: 0x00)
struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x00(0x08)
	FString PropertyPath; // 0x08(0x10)
	FName FunctionName; // 0x18(0x08)
	FName NotifyFunctionName; // 0x20(0x08)
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneSequenceInstanceData {
};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingID; // 0x00(0x10)
	FMovieSceneSequenceID SequenceID; // 0x10(0x04)
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneSequenceID {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneSectionGroup
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x00(0x04)
	enum class EMovieSceneObjectBindingSpace Space; // 0x04(0x01)
	FGuid Guid; // 0x08(0x10)
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0xf0 (Inherited: 0x00)
struct FMovieSceneEditorData {
	TMap<FString, FMovieSceneExpansionState> ExpansionStates; // 0x00(0x50)
	TArray<FString> PinnedNodes; // 0x50(0x10)
	double ViewStart; // 0x60(0x08)
	double ViewEnd; // 0x68(0x08)
	double WorkStart; // 0x70(0x08)
	double WorkEnd; // 0x78(0x08)
	TSet<FFrameNumber> MarkedFrames; // 0x80(0x50)
	FFloatRange WorkingRange; // 0xd0(0x10)
	FFloatRange ViewRange; // 0xe0(0x10)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// Size: 0x01 (Inherited: 0x00)
struct FMovieSceneExpansionState {
	bool bExpanded; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x00(0x04)
	FString Label; // 0x08(0x10)
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x00(0x14)
	FFrameNumber DeltaFrame; // 0x14(0x04)
};

// ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x00(0x10)
	FString BindingName; // 0x10(0x10)
	TArray<UMovieSceneTrack*> Tracks; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 (Inherited: 0x00)
struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingID; // 0x00(0x18)
	TWeakObjectPtr<UObject> Object; // 0x18(0x08)
	bool bOverridesDefault; // 0x20(0x01)
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// Size: 0x02 (Inherited: 0x00)
struct FOptionalMovieSceneBlendType {
	enum class EMovieSceneBlendType BlendType; // 0x00(0x01)
	bool bIsValid; // 0x01(0x01)
};

// ScriptStruct MovieScene.MovieSceneByteChannel
// Size: 0x98 (Inherited: 0x08)
struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x08(0x10)
	char DefaultValue; // 0x18(0x01)
	bool bHasDefaultValue; // 0x19(0x01)
	TArray<char> Values; // 0x20(0x10)
	UEnum* Enum; // 0x30(0x08)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// Size: 0x88 (Inherited: 0x00)
struct FMovieSceneEvalTemplatePtr {
};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// Size: 0x01 (Inherited: 0x00)
struct FMovieSceneEmptyStruct {
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x00(0x10)
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10(0x10)
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size: 0x70 (Inherited: 0x00)
struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x00(0x10)
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10(0x10)
	TMap<FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20(0x50)
};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x00(0x0c)
	uint16_t SetupIndex; // 0x0c(0x02)
	uint16_t TearDownIndex; // 0x0e(0x02)
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x00(0x04)
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x04(0x04)
	uint32_t SectionIndex; // 0x08(0x04)
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x00(0x10)
	TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10(0x10)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x00(0x04)
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x04(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Size: 0x0c (Inherited: 0x08)
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x08(0x04)
};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t LUTOffset; // 0x00(0x04)
	int32_t NumInitPtrs; // 0x04(0x04)
	int32_t NumEvalPtrs; // 0x08(0x04)
};

// ScriptStruct MovieScene.MovieSceneFrameRange
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneFrameRange {
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size: 0x2f0 (Inherited: 0x00)
struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x00(0x50)
	FMovieSceneEvaluationField EvaluationField; // 0xa0(0x30)
	FMovieSceneSequenceHierarchy Hierarchy; // 0xd0(0xa0)
	FGuid SequenceSignature; // 0x170(0x10)
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0x180(0x04)
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0x188(0xa8)
	FMovieSceneTrackFieldData TrackFieldData; // 0x230(0x60)
	FMovieSceneSubSectionFieldData SubSectionFieldData; // 0x290(0x60)
};

// ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// Size: 0x60 (Inherited: 0x00)
struct FMovieSceneSubSectionFieldData {
};

// ScriptStruct MovieScene.MovieSceneTrackFieldData
// Size: 0x60 (Inherited: 0x00)
struct FMovieSceneTrackFieldData {
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// Size: 0xa8 (Inherited: 0x00)
struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x00(0x04)
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x08(0x50)
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58(0x50)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size: 0xa0 (Inherited: 0x00)
struct FMovieSceneSequenceHierarchy {
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x00(0x50)
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50(0x50)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x00(0x04)
	TArray<FMovieSceneSequenceID> Children; // 0x08(0x10)
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size: 0xe8 (Inherited: 0x00)
struct FMovieSceneSubSequenceData {
	FSoftObjectPath Sequence; // 0x00(0x18)
	FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18(0x20)
	FFrameRate TickResolution; // 0x38(0x08)
	FMovieSceneSequenceID DeterministicSequenceID; // 0x40(0x04)
	FMovieSceneFrameRange PlayRange; // 0x44(0x10)
	FMovieSceneFrameRange FullPlayRange; // 0x54(0x10)
	FMovieSceneFrameRange UnwarpedPlayRange; // 0x64(0x10)
	FMovieSceneFrameRange PreRollRange; // 0x74(0x10)
	FMovieSceneFrameRange PostRollRange; // 0x84(0x10)
	int32_t HierarchicalBias; // 0x94(0x04)
	FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x98(0x18)
	FGuid SubSectionSignature; // 0xb8(0x10)
	FMovieSceneSequenceTransform OuterToInnerTransform; // 0xc8(0x20)
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x00(0x0c)
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10(0x10)
};

// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x00(0x0c)
	FMovieSceneTimeWarping Warping; // 0x0c(0x08)
};

// ScriptStruct MovieScene.MovieSceneTimeWarping
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x00(0x04)
	FFrameNumber End; // 0x04(0x04)
};

// ScriptStruct MovieScene.MovieSceneTimeTransform
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneTimeTransform {
	float TimeScale; // 0x00(0x04)
	FFrameTime Offset; // 0x04(0x08)
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneSequenceInstanceDataPtr {
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size: 0xf8 (Inherited: 0x00)
struct FMovieSceneEvaluationTrack {
	FGuid ObjectBindingID; // 0x00(0x10)
	uint16_t EvaluationPriority; // 0x10(0x02)
	enum class EEvaluationMethod EvaluationMethod; // 0x12(0x01)
	FMovieSceneEvaluationTrackSegments Segments; // 0x18(0x20)
	UMovieSceneTrack* SourceTrack; // 0x38(0x08)
	FSectionEvaluationDataTree EvaluationTree; // 0x40(0x60)
	TArray<FMovieSceneEvalTemplatePtr> ChildTemplates; // 0xa0(0x10)
	FMovieSceneTrackImplementationPtr TrackTemplate; // 0xb0(0x38)
	FName EvaluationGroup; // 0xe8(0x08)
	char bEvaluateInPreroll : 1; // 0xf0(0x01)
	char bEvaluateInPostroll : 1; // 0xf0(0x01)
	char bTearDownPriority : 1; // 0xf0(0x01)
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size: 0x38 (Inherited: 0x00)
struct FMovieSceneTrackImplementationPtr {
};

// ScriptStruct MovieScene.SectionEvaluationDataTree
// Size: 0x60 (Inherited: 0x00)
struct FSectionEvaluationDataTree {
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneEvaluationTrackSegments {
	TArray<int32_t> SegmentIdentifierToIndex; // 0x00(0x10)
	TArray<FMovieSceneSegment> SortedSegments; // 0x10(0x10)
};

// ScriptStruct MovieScene.MovieSceneSegment
// Size: 0x58 (Inherited: 0x00)
struct FMovieSceneSegment {
};

// ScriptStruct MovieScene.MovieSceneSubSectionData
// Size: 0x1c (Inherited: 0x00)
struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x00(0x08)
	FGuid ObjectBindingID; // 0x08(0x10)
	enum class ESectionEvaluationFlags Flags; // 0x18(0x01)
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// Size: 0x320 (Inherited: 0x00)
struct FMovieSceneRootEvaluationTemplateInstance {
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x18(0x50)
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneKeyStruct {
};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// Size: 0x28 (Inherited: 0x08)
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x08(0x04)
};

// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// Size: 0x50 (Inherited: 0x00)
struct FGeneratedMovieSceneKeyStruct {
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// Size: 0xc0 (Inherited: 0x08)
struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x08(0x08)
	TArray<FFrameNumber> Times; // 0x10(0x10)
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20(0x10)
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30(0x30)
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x00(0x28)
	UObject* HardPtr; // 0x28(0x08)
};

// ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x48 (Inherited: 0x00)
struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x00(0x10)
	FGuid Guid; // 0x10(0x10)
	FString Name; // 0x20(0x10)
	UObject* PossessedObjectClass; // 0x30(0x08)
	FGuid ParentGuid; // 0x38(0x10)
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
// Size: 0x38 (Inherited: 0x00)
struct FMovieSceneEasingSettings {
	int32_t AutoEaseInDuration; // 0x00(0x04)
	int32_t AutoEaseOutDuration; // 0x04(0x04)
	TScriptInterface<IMovieSceneEasingFunction> EaseIn; // 0x08(0x10)
	bool bManualEaseIn; // 0x18(0x01)
	int32_t ManualEaseInDuration; // 0x1c(0x04)
	TScriptInterface<IMovieSceneEasingFunction> EaseOut; // 0x20(0x10)
	bool bManualEaseOut; // 0x30(0x01)
	int32_t ManualEaseOutDuration; // 0x34(0x04)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x02 (Inherited: 0x00)
struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x00(0x01)
	enum class EMovieSceneCompletionMode CompletionMode; // 0x01(0x01)
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// Size: 0x24 (Inherited: 0x00)
struct FMovieSceneSectionParameters {
	FFrameNumber StartFrameOffset; // 0x00(0x04)
	bool bCanLoop; // 0x04(0x01)
	FFrameNumber EndFrameOffset; // 0x08(0x04)
	FFrameNumber FirstLoopStartFrameOffset; // 0x0c(0x04)
	float TimeScale; // 0x10(0x04)
	int32_t HierarchicalBias; // 0x14(0x04)
	float StartOffset; // 0x18(0x04)
	float PrerollTime; // 0x1c(0x04)
	float PostrollTime; // 0x20(0x04)
};

// ScriptStruct MovieScene.SectionEvaluationData
// Size: 0x0c (Inherited: 0x00)
struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x00(0x04)
	FFrameNumber ForcedTime; // 0x04(0x04)
	enum class ESectionEvaluationFlags Flags; // 0x08(0x01)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneSequencePlaybackSettings {
	char bAutoPlay : 1; // 0x00(0x01)
	FMovieSceneSequenceLoopCount LoopCount; // 0x04(0x04)
	float PlayRate; // 0x08(0x04)
	float StartTime; // 0x0c(0x04)
	char bRandomStartTime : 1; // 0x10(0x01)
	char bRestoreState : 1; // 0x10(0x01)
	char bDisableMovementInput : 1; // 0x10(0x01)
	char bDisableLookAtInput : 1; // 0x10(0x01)
	char bHidePlayer : 1; // 0x10(0x01)
	char bHideHud : 1; // 0x10(0x01)
	char bDisableCameraCuts : 1; // 0x10(0x01)
	char pad_D_0 : 7; // 0x0d(0x01)
	char bPauseAtEnd : 1; // 0x10(0x01)
};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x00(0x08)
	enum class EMovieScenePlayerStatus LastKnownStatus; // 0x08(0x01)
	int32_t LastKnownNumLoops; // 0x0c(0x04)
};

// ScriptStruct MovieScene.MovieSceneWarpCounter
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x00(0x10)
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x90 (Inherited: 0x00)
struct FMovieSceneSpawnable {
	FTransform SpawnTransform; // 0x00(0x30)
	TArray<FName> Tags; // 0x30(0x10)
	bool bContinuouslyRespawn; // 0x40(0x01)
	FGuid Guid; // 0x44(0x10)
	FString Name; // 0x58(0x10)
	UObject* ObjectTemplate; // 0x68(0x08)
	TArray<FGuid> ChildPossessables; // 0x70(0x10)
	enum class ESpawnOwnership Ownership; // 0x80(0x01)
	FName LevelName; // 0x84(0x08)
};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// Size: 0x20 (Inherited: 0x20)
struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x00(0x01)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x00(0x01)
	char bEvalNearestSection : 1; // 0x00(0x01)
	char bEvaluateInPreroll : 1; // 0x00(0x01)
	char bEvaluateInPostroll : 1; // 0x00(0x01)
	char bEvaluateNearestSection : 1; // 0x00(0x01)
};

