// Enum Engine.ETextGender
enum class ETextGender : uint8_t {
	Masculine,
	Feminine,
	Neuter,
	ETextGender_MAX,
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t {
	Int,
	UInt,
	Float,
	Double,
	Text,
	Gender,
	EFormatArgumentType_MAX,
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t {
	Destroyed,
	LevelTransition,
	EndPlayInEditor,
	RemovedFromWorld,
	Quit,
	EEndPlayReason_MAX,
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t {
	TG_PrePhysics,
	TG_StartPhysics,
	TG_DuringPhysics,
	TG_EndPhysics,
	TG_PostPhysics,
	TG_PostUpdateWork,
	TG_LastDemotable,
	TG_NewlySpawned,
	TG_MAX,
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t {
	Native,
	SimpleConstructionScript,
	UserConstructionScript,
	Instance,
	EComponentCreationMethod_MAX,
};

// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t {
	Unknown,
	Good,
	Bad,
	Serious,
	Critical,
	NumSeverities,
	ETemperatureSeverityType_MAX,
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t {
	Custom,
	X,
	Y,
	Z,
	UseGlobalPhysicsSetting,
	EPlaneConstraintAxisSetting_MAX,
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t {
	OneShot,
	OneShot_Reverse,
	Loop_Reset,
	PingPong,
	EInterpToBehaviourType_MAX,
};

// Enum Engine.ETeleportType
enum class ETeleportType : uint8_t {
	None,
	TeleportPhysics,
	ResetPhysics,
	ETeleportType_MAX,
};

// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t {
	PIDT_None,
	PIDT_Int,
	PIDT_Float,
	PIDT_String,
	PIDT_Object,
	PIDT_Custom,
	PIDT_MAX,
};

// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t {
	MOVE_None,
	MOVE_Walking,
	MOVE_NavWalking,
	MOVE_Falling,
	MOVE_Swimming,
	MOVE_Flying,
	MOVE_Custom,
	MOVE_MAX,
};

// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t {
	NetDriverAlreadyExists,
	NetDriverCreateFailure,
	NetDriverListenFailure,
	ConnectionLost,
	ConnectionTimeout,
	FailureReceived,
	OutdatedClient,
	OutdatedServer,
	PendingConnectionFailure,
	NetGuidMismatch,
	NetChecksumMismatch,
	ENetworkFailure_MAX,
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t {
	NoLevel,
	LoadMapFailure,
	InvalidURL,
	PackageMissing,
	PackageVersion,
	NoDownload,
	TravelFailure,
	CheatCommands,
	PendingNetGameCreateFailure,
	CloudSaveFailure,
	ServerTravelFailure,
	ClientTravelFailure,
	ETravelFailure_MAX,
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t {
	Unknown,
	Portrait,
	PortraitUpsideDown,
	LandscapeLeft,
	LandscapeRight,
	FaceUp,
	FaceDown,
	EScreenOrientation_MAX,
};

// Enum Engine.EApplicationState
enum class EApplicationState : uint8_t {
	Unknown,
	Inactive,
	Background,
	Active,
	EApplicationState_MAX,
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t {
	ObjectTypeQuery1,
	ObjectTypeQuery2,
	ObjectTypeQuery3,
	ObjectTypeQuery4,
	ObjectTypeQuery5,
	ObjectTypeQuery6,
	ObjectTypeQuery7,
	ObjectTypeQuery8,
	ObjectTypeQuery9,
	ObjectTypeQuery10,
	ObjectTypeQuery11,
	ObjectTypeQuery12,
	ObjectTypeQuery13,
	ObjectTypeQuery14,
	ObjectTypeQuery15,
	ObjectTypeQuery16,
	ObjectTypeQuery17,
	ObjectTypeQuery18,
	ObjectTypeQuery19,
	ObjectTypeQuery20,
	ObjectTypeQuery21,
	ObjectTypeQuery22,
	ObjectTypeQuery23,
	ObjectTypeQuery24,
	ObjectTypeQuery25,
	ObjectTypeQuery26,
	ObjectTypeQuery27,
	ObjectTypeQuery28,
	ObjectTypeQuery29,
	ObjectTypeQuery30,
	ObjectTypeQuery31,
	ObjectTypeQuery32,
	ObjectTypeQuery_MAX,
	EObjectTypeQuery_MAX,
};

// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t {
	None,
	ForOneFrame,
	ForDuration,
	Persistent,
	EDrawDebugTrace_MAX,
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t {
	TraceTypeQuery1,
	TraceTypeQuery2,
	TraceTypeQuery3,
	TraceTypeQuery4,
	TraceTypeQuery5,
	TraceTypeQuery6,
	TraceTypeQuery7,
	TraceTypeQuery8,
	TraceTypeQuery9,
	TraceTypeQuery10,
	TraceTypeQuery11,
	TraceTypeQuery12,
	TraceTypeQuery13,
	TraceTypeQuery14,
	TraceTypeQuery15,
	TraceTypeQuery16,
	TraceTypeQuery17,
	TraceTypeQuery18,
	TraceTypeQuery19,
	TraceTypeQuery20,
	TraceTypeQuery21,
	TraceTypeQuery22,
	TraceTypeQuery23,
	TraceTypeQuery24,
	TraceTypeQuery25,
	TraceTypeQuery26,
	TraceTypeQuery27,
	TraceTypeQuery28,
	TraceTypeQuery29,
	TraceTypeQuery30,
	TraceTypeQuery31,
	TraceTypeQuery32,
	TraceTypeQuery_MAX,
	ETraceTypeQuery_MAX,
};

// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t {
	Move,
	Stop,
	Return,
	EMoveComponentAction_MAX,
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t {
	Quit,
	Background,
	EQuitPreference_MAX,
};

// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t {
	RTS_World,
	RTS_Actor,
	RTS_Component,
	RTS_ParentBoneSpace,
	RTS_MAX,
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t {
	KeepRelativeOffset,
	KeepWorldPosition,
	SnapToTarget,
	SnapToTargetIncludingScale,
	EAttachLocation_MAX,
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t {
	KeepRelative,
	KeepWorld,
	SnapToTarget,
	EAttachmentRule_MAX,
};

// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t {
	KeepRelative,
	KeepWorld,
	EDetachmentRule_MAX,
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t {
	Static,
	Stationary,
	Movable,
	EComponentMobility_MAX,
};

// Enum Engine.EDetailMode
enum class EDetailMode : uint8_t {
	DM_Low,
	DM_Medium,
	DM_High,
	DM_MAX,
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t {
	ECC_WorldStatic,
	ECC_WorldDynamic,
	ECC_Pawn,
	ECC_Visibility,
	ECC_Camera,
	ECC_PhysicsBody,
	ECC_Vehicle,
	ECC_Destructible,
	ECC_EngineTraceChannel1,
	ECC_EngineTraceChannel2,
	ECC_EngineTraceChannel3,
	ECC_EngineTraceChannel4,
	ECC_EngineTraceChannel5,
	ECC_EngineTraceChannel6,
	ECC_GameTraceChannel1,
	ECC_GameTraceChannel2,
	ECC_GameTraceChannel3,
	ECC_GameTraceChannel4,
	ECC_GameTraceChannel5,
	ECC_GameTraceChannel6,
	ECC_GameTraceChannel7,
	ECC_GameTraceChannel8,
	ECC_GameTraceChannel9,
	ECC_GameTraceChannel10,
	ECC_GameTraceChannel11,
	ECC_GameTraceChannel12,
	ECC_GameTraceChannel13,
	ECC_GameTraceChannel14,
	ECC_GameTraceChannel15,
	ECC_GameTraceChannel16,
	ECC_GameTraceChannel17,
	ECC_GameTraceChannel18,
	ECC_OverlapAll_Deprecated,
	ECC_MAX,
};

// Enum Engine.ENetRole
enum class ENetRole : uint8_t {
	ROLE_None,
	ROLE_SimulatedProxy,
	ROLE_AutonomousProxy,
	ROLE_Authority,
	ROLE_MAX,
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t {
	DORM_Never,
	DORM_Awake,
	DORM_DormantAll,
	DORM_DormantPartial,
	DORM_Initial,
	DORM_MAX,
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t {
	Disabled,
	Player0,
	Player1,
	Player2,
	Player3,
	Player4,
	Player5,
	Player6,
	Player7,
	EAutoReceiveInput_MAX,
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t {
	Undefined,
	AlwaysSpawn,
	AdjustIfPossibleButAlwaysSpawn,
	AdjustIfPossibleButDontSpawnIfColliding,
	DontSpawnIfColliding,
	ESpawnActorCollisionHandlingMethod_MAX,
};

// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t {
	ByteComponents,
	ShortComponents,
	ERotatorQuantization_MAX,
};

// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t {
	RoundWholeNumber,
	RoundOneDecimal,
	RoundTwoDecimals,
	EVectorQuantization_MAX,
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t {
	UseConfigDefault,
	AlwaysUpdate,
	OnlyUpdateMovable,
	NeverUpdate,
	EActorUpdateOverlapsMethod_MAX,
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t {
	Disabled,
	PlacedInWorld,
	Spawned,
	PlacedInWorldOrSpawned,
	EAutoPossessAI_MAX,
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t {
	DoNotLock,
	LockOnCapture,
	LockAlways,
	LockInFullscreen,
	EMouseLockMode_MAX,
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t {
	Overlay,
	VerticalBox,
	EWindowTitleBarMode_MAX,
};

// Enum Engine.EInputEvent
enum class EInputEvent : uint8_t {
	IE_Pressed,
	IE_Released,
	IE_Repeat,
	IE_DoubleClick,
	IE_Axis,
	IE_MAX,
};

// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t {
	CameraLocal,
	World,
	UserDefined,
	ECameraAnimPlaySpace_MAX,
};

// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t {
	VTBlend_Linear,
	VTBlend_Cubic,
	VTBlend_EaseIn,
	VTBlend_EaseOut,
	VTBlend_EaseInOut,
	VTBlend_MAX,
};

// Enum Engine.ETravelType
enum class ETravelType : uint8_t {
	TRAVEL_Absolute,
	TRAVEL_Partial,
	TRAVEL_Relative,
	TRAVEL_MAX,
};

// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t {
	CAS_LeftStick,
	CAS_RightStick,
	CAS_MAX,
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t {
	Start,
	Update,
	Stop,
	EDynamicForceFeedbackAction_MAX,
};

// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t {
	RIF_Constant,
	RIF_Linear,
	RIF_MAX,
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t {
	NoCollision,
	QueryOnly,
	PhysicsOnly,
	QueryAndPhysics,
	ECollisionEnabled_MAX,
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t {
	ECR_Ignore,
	ECR_Overlap,
	ECR_Block,
	ECR_MAX,
};

// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t {
	WalkableSlope_Default,
	WalkableSlope_Increase,
	WalkableSlope_Decrease,
	WalkableSlope_Unwalkable,
	WalkableSlope_Max,
};

// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t {
	Default,
	SixDOF,
	YZPlane,
	XZPlane,
	XYPlane,
	CustomPlane,
	None,
	EDOFMode_MAX,
};

// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t {
	ERSM_Default,
	ERSM_256,
	ERSM_2,
	ERSM_3,
	ERSM_5,
	ERSM_9,
	ERSM_17,
	ERSM_33,
	ERSM_65,
	ERSM_129,
	ERSM_MAX,
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t {
	Normal,
	Sensitive,
	Custom,
	ESleepFamily_MAX,
};

// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t {
	Never,
	Exclusive,
	Always,
	ERuntimeVirtualTextureMainPassType_MAX,
};

// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t {
	ECB_No,
	ECB_Yes,
	ECB_Owner,
	ECB_MAX,
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t {
	No,
	Yes,
	EvenIfNotCollidable,
	DontExport,
	EHasCustomNavigableGeometry_MAX,
};

// Enum Engine.ELightmapType
enum class ELightmapType : uint8_t {
	Default,
	ForceSurface,
	ForceVolumetric,
	ELightmapType_MAX,
};

// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t {
	ILCQ_Off,
	ILCQ_Point,
	ILCQ_Volume,
	ILCQ_MAX,
};

// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t {
	SDPG_World,
	SDPG_Foreground,
	SDPG_MAX,
};

// Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t {
	None,
	HasBeenSerialized,
	HasDeltaBeenRequested,
	IsUsingDeltaSerialization,
	EFastArraySerializerDeltaFlags_MAX,
};

// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t {
	BLEND_Opaque,
	BLEND_Masked,
	BLEND_Translucent,
	BLEND_Additive,
	BLEND_Modulate,
	BLEND_AlphaComposite,
	BLEND_AlphaHoldout,
	BLEND_MAX,
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t {
	Linear,
	Step,
	SinusoidalIn,
	SinusoidalOut,
	SinusoidalInOut,
	EaseIn,
	EaseOut,
	EaseInOut,
	ExpoIn,
	ExpoOut,
	ExpoInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	EEasingFunc_MAX,
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t {
	Linear,
	Cubic,
	HermiteCubic,
	Sinusoidal,
	QuadraticInOut,
	CubicInOut,
	QuarticInOut,
	QuinticInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	ExpIn,
	ExpOut,
	ExpInOut,
	Custom,
	EAlphaBlendOption_MAX,
};

// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t {
	CanBeLeader,
	AlwaysFollower,
	AlwaysLeader,
	TransitionLeader,
	TransitionFollower,
	EAnimGroupRole_MAX,
};

// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t {
	LinkedLayers,
	LinkedAnimGraph,
	EPreviewAnimationBlueprintApplicationMethod_MAX,
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8_t {
	AKF_ConstantKeyLerp,
	AKF_VariableKeyLerp,
	AKF_PerTrackCompression,
	AKF_MAX,
};

// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t {
	RCT_Float,
	RCT_Vector,
	RCT_Transform,
	RCT_MAX,
};

// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t {
	AACF_NONE,
	AACF_DriveMorphTarget_DEPRECATED,
	AACF_DriveAttribute_DEPRECATED,
	AACF_Editable,
	AACF_DriveMaterial_DEPRECATED,
	AACF_Metadata,
	AACF_DriveTrack,
	AACF_Disabled,
	AACF_MAX,
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8_t {
	ACF_None,
	ACF_Float96NoW,
	ACF_Fixed48NoW,
	ACF_IntervalFixed32NoW,
	ACF_Fixed32NoW,
	ACF_Float32NoW,
	ACF_Identity,
	ACF_MAX,
};

// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t {
	ABPT_None,
	ABPT_RefPose,
	ABPT_AnimScaled,
	ABPT_AnimFrame,
	ABPT_MAX,
};

// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t {
	NoRootMotionExtraction,
	IgnoreRootMotion,
	RootMotionFromEverything,
	RootMotionFromMontagesOnly,
	ERootMotionMode_MAX,
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t {
	RefPose,
	AnimFirstFrame,
	Zero,
	ERootMotionRootLock_MAX,
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t {
	MontageLength,
	Duration,
	EMontagePlayReturnType_MAX,
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t {
	DirectionalArrow,
	Sphere,
	Line,
	OnScreenMessage,
	CoordinateSystem,
	EDrawDebugItemType_MAX,
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t {
	Absolute,
	Relative,
	Proportional,
	EAnimLinkMethod_MAX,
};

// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t {
	Moved,
	NotMoved,
	InvalidSection,
	InvalidMontage,
	EMontageSubStepResult_MAX,
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t {
	Begin,
	End,
	EAnimNotifyEventType_MAX,
};

// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t {
	Default,
	WorldSpace,
	WorldRotation,
	EInertializationSpace_MAX,
};

// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t {
	Invalid,
	Valid,
	Excluded,
	EInertializationBoneState_MAX,
};

// Enum Engine.EInertializationState
enum class EInertializationState : uint8_t {
	Inactive,
	Pending,
	Active,
	EInertializationState_MAX,
};

// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t {
	EM_Standard,
	EM_Freeze,
	EM_DelayedFreeze,
	EM_MAX,
};

// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t {
	EDS_SourcePose,
	EDS_DestinationPose,
	EDS_MAX,
};

// Enum Engine.ECopyType
enum class ECopyType : uint8_t {
	PlainProperty,
	BoolProperty,
	StructProperty,
	ObjectProperty,
	NameProperty,
	ECopyType_MAX,
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t {
	None,
	LogicalNegateBool,
	EPostCopyOperation_MAX,
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t {
	NeverAsPin,
	PinHiddenByDefault,
	PinShownByDefault,
	AlwaysAsPin,
	EPinHidingMode_MAX,
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8_t {
	CoM,
	CustomSphere,
	InnerSphere,
	OuterSphere,
	AnimPhysCollisionType_MAX,
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8_t {
	AxisX,
	AxisY,
	AxisZ,
	AnimPhysTwistAxis_MAX,
};

// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t {
	ETAA_Default,
	ETAA_Finished,
	ETAA_Looped,
	ETAA_MAX,
};

// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t {
	TLT_StandardBlend,
	TLT_Inertialization,
	TLT_Custom,
	TLT_MAX,
};

// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t {
	TBM_Linear,
	TBM_Cubic,
	TBM_MAX,
};

// Enum Engine.EComponentType
enum class EComponentType : uint8_t {
	None,
	TranslationX,
	TranslationY,
	TranslationZ,
	RotationX,
	RotationY,
	RotationZ,
	Scale,
	ScaleX,
	ScaleY,
	ScaleZ,
	EComponentType_MAX,
};

// Enum Engine.EAxisOption
enum class EAxisOption : uint8_t {
	X,
	Y,
	Z,
	X_Neg,
	Y_Neg,
	Z_Neg,
	Custom,
	EAxisOption_MAX,
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t {
	Linear,
	Step,
	EAnimInterpolationType_MAX,
};

// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t {
	Override,
	DoNotOverride,
	NormalizeByWeight,
	BlendByWeight,
	UseBasePose,
	UseMaxValue,
	UseMinValue,
	ECurveBlendOption_MAX,
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t {
	AAT_None,
	AAT_LocalSpaceBase,
	AAT_RotationOffsetMeshSpace,
	AAT_MAX,
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t {
	NoFiltering,
	LOD,
	ENotifyFilterType_MAX,
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t {
	Queued,
	BranchingPoint,
	EMontageNotifyTickType_MAX,
};

// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t {
	BRS_KeepComponentSpaceRotation,
	BRS_KeepLocalSpaceRotation,
	BRS_CopyFromTarget,
	BRS_MAX,
};

// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t {
	BCS_WorldSpace,
	BCS_ComponentSpace,
	BCS_ParentBoneSpace,
	BCS_BoneSpace,
	BCS_MAX,
};

// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t {
	BA_X,
	BA_Y,
	BA_Z,
	BA_MAX,
};

// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t {
	Unknown,
	NeverCook,
	DevelopmentCook,
	DevelopmentAlwaysCook,
	AlwaysCook,
	EPrimaryAssetCookRule_MAX,
};

// Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8_t {
	Continues,
	Silent,
	Hold,
	ENaturalSoundFalloffMode_MAX,
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t {
	Sphere,
	Capsule,
	Box,
	Cone,
	EAttenuationShape_MAX,
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t {
	Linear,
	Logarithmic,
	Inverse,
	LogReverse,
	NaturalSound,
	Custom,
	EAttenuationDistanceModel_MAX,
};

// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t {
	Linear,
	Logarithmic,
	SCurve,
	Sin,
	Count,
	EAudioFaderCurve_MAX,
};

// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t {
	Playing,
	Stopped,
	Paused,
	FadingIn,
	FadingOut,
	Count,
	EAudioComponentPlayState_MAX,
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t {
	Speaker,
	Controller,
	ControllerFallbackToSpeaker,
	EAudioOutputTarget_MAX,
};

// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t {
	Linear,
	EqualPower,
	FullVolume,
	EMonoChannelUpmixMethod_MAX,
};

// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8_t {
	Linear,
	EqualPower,
	EPanningMethod_MAX,
};

// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint8_t {
	Low16000Hz,
	Normal24000Hz,
	EVoiceSampleRate_MAX,
};

// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t {
	BL_AfterTonemapping,
	BL_BeforeTonemapping,
	BL_BeforeTranslucency,
	BL_ReplacingTonemapper,
	BL_SSRInput,
	BL_MAX,
};

// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t {
	AllAnimations,
	HighestWeightedAnimation,
	None,
	ENotifyTriggerMode_MAX,
};

// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t {
	BSA_None,
	BSA_X,
	BSA_Y,
	BSA_Max,
};

// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t {
	Disabled,
	Dependency,
	ExplicitlyEnabled,
	EBlueprintNativizationFlag_MAX,
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t {
	Default,
	Development,
	FinalRelease,
	EBlueprintCompileMode_MAX,
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t {
	BPTYPE_Normal,
	BPTYPE_Const,
	BPTYPE_MacroLibrary,
	BPTYPE_Interface,
	BPTYPE_LevelScript,
	BPTYPE_FunctionLibrary,
	BPTYPE_MAX,
};

// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t {
	BS_Unknown,
	BS_Dirty,
	BS_Error,
	BS_UpToDate,
	BS_BeingCreated,
	BS_UpToDateWithWarnings,
	BS_MAX,
};

// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t {
	BodyCollision_Enabled,
	BodyCollision_Disabled,
	BodyCollision_MAX,
};

// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t {
	PhysType_Default,
	PhysType_Kinematic,
	PhysType_Simulated,
	PhysType_MAX,
};

// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t {
	CTF_UseDefault,
	CTF_UseSimpleAndComplex,
	CTF_UseSimpleAsComplex,
	CTF_UseComplexAsSimple,
	CTF_MAX,
};

// Enum Engine.EBrushType
enum class EBrushType : uint8_t {
	Brush_Default,
	Brush_Add,
	Brush_Subtract,
	Brush_MAX,
};

// Enum Engine.ECsgOper
enum class ECsgOper : uint8_t {
	CSG_Active,
	CSG_Add,
	CSG_Subtract,
	CSG_Intersect,
	CSG_Deintersect,
	CSG_None,
	CSG_MAX,
};

// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t {
	EOO_OffsetRandom,
	EOO_OffsetZero,
	EOO_MAX,
};

// Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t {
	SineWave,
	PerlinNoise,
	EOscillatorWaveform_MAX,
};

// Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8_t {
	Linear,
	Quadratic,
	ECameraShakeAttenuation_MAX,
};

// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t {
	CABM_Linear,
	CABM_Cubic,
	CABM_MAX,
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t {
	Perspective,
	Orthographic,
	ECameraProjectionMode_MAX,
};

// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t {
	CSD_KeyValueReadComplete,
	CSD_KeyValueWriteComplete,
	CSD_ValueChanged,
	CSD_DocumentQueryComplete,
	CSD_DocumentReadComplete,
	CSD_DocumentWriteComplete,
	CSD_DocumentConflictDetected,
	CSD_MAX,
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t {
	SLERP,
	TwistAndSwing,
	EAngularDriveMode_MAX,
};

// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t {
	LCM_Free,
	LCM_Limited,
	LCM_Locked,
	LCM_MAX,
};

// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t {
	Empty,
	SimpleCurves,
	RichCurves,
	ECurveTableMode_MAX,
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t {
	RowFound,
	RowNotFound,
	EEvaluateCurveTableResult_MAX,
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t {
	Singular,
	Plural,
	EGrammaticalNumber_MAX,
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t {
	Neuter,
	Masculine,
	Feminine,
	Mixed,
	EGrammaticalGender_MAX,
};

// Enum Engine.DistributionParamMode
enum class DistributionParamMode : uint8_t {
	DPM_Normal,
	DPM_Abs,
	DPM_Direct,
	DPM_MAX,
};

// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t {
	EDVMF_Same,
	EDVMF_Different,
	EDVMF_Mirror,
	EDVMF_MAX,
};

// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t {
	EDVLF_None,
	EDVLF_XY,
	EDVLF_XZ,
	EDVLF_YZ,
	EDVLF_XYZ,
	EDVLF_MAX,
};

// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t {
	Enabled,
	Disabled,
	DevelopmentOnly,
	ENodeEnabledState_MAX,
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t {
	NoPins,
	Shown,
	Hidden,
	ENodeAdvancedPins_MAX,
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t {
	FullTitle,
	ListView,
	EditableTitle,
	MenuTitle,
	MAX_TitleTypes,
	ENodeTitleType_MAX,
};

// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8_t {
	None,
	Array,
	Set,
	Map,
	EPinContainerType_MAX,
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t {
	EGPD_Input,
	EGPD_Output,
	EGPD_MAX,
};

// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t {
	BPST_Original,
	BPST_VariantA,
	BPST_MAX,
};

// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t {
	CONNECT_RESPONSE_MAKE,
	CONNECT_RESPONSE_DISALLOW,
	CONNECT_RESPONSE_BREAK_OTHERS_A,
	CONNECT_RESPONSE_BREAK_OTHERS_B,
	CONNECT_RESPONSE_BREAK_OTHERS_AB,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE,
	CONNECT_RESPONSE_MAX,
};

// Enum Engine.EGraphType
enum class EGraphType : uint8_t {
	GT_Function,
	GT_Ubergraph,
	GT_Macro,
	GT_Animation,
	GT_StateMachine,
	GT_MAX,
};

// Enum Engine.ETransitionType
enum class ETransitionType : uint8_t {
	None,
	Paused,
	Loading,
	Saving,
	Connecting,
	Precaching,
	WaitingToConnect,
	MAX,
};

// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t {
	FULLYLOAD_Map,
	FULLYLOAD_Game_PreLoadClass,
	FULLYLOAD_Game_PostLoadClass,
	FULLYLOAD_Always,
	FULLYLOAD_Mutator,
	FULLYLOAD_MAX,
};

// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t {
	VMI_BrushWireframe,
	VMI_Wireframe,
	VMI_Unlit,
	VMI_Lit,
	VMI_Lit_DetailLighting,
	VMI_LightingOnly,
	VMI_LightComplexity,
	VMI_ShaderComplexity,
	VMI_LightmapDensity,
	VMI_LitLightmapDensity,
	VMI_ReflectionOverride,
	VMI_VisualizeBuffer,
	VMI_StationaryLightOverlap,
	VMI_CollisionPawn,
	VMI_CollisionVisibility,
	VMI_LODColoration,
	VMI_QuadOverdraw,
	VMI_PrimitiveDistanceAccuracy,
	VMI_MeshUVDensityAccuracy,
	VMI_ShaderComplexityWithQuadOverdraw,
	VMI_HLODColoration,
	VMI_GroupLODColoration,
	VMI_MaterialTextureScaleAccuracy,
	VMI_RequiredTextureResolution,
	VMI_PathTracing,
	VMI_RayTracingDebug,
	VMI_Max,
	VMI_Unknown,
};

// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t {
	Generic,
	DemoNotFound,
	Corrupt,
	InvalidVersion,
	InitBase,
	GameSpecificHeader,
	ReplayStreamerInternal,
	LoadMap,
	Serialization,
	EDemoPlayFailure_MAX,
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t {
	NotLagging,
	Lagging,
	ENetworkLagState_MAX,
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t {
	NoCapture,
	CapturePermanently,
	CapturePermanently_IncludingInitialMouseDown,
	CaptureDuringMouseDown,
	CaptureDuringRightMouseDown,
	EMouseCaptureMode_MAX,
};

// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t {
	Closed,
	Error,
	Synchronized,
	Synchronizing,
	ECustomTimeStepSynchronizationState_MAX,
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t {
	Default,
	ForceCPUAndGPU,
	EMeshBufferAccess_MAX,
};

// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t {
	Frame1,
	Frame2,
	EConstraintFrame_MAX,
};

// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t {
	ACM_Free,
	ACM_Limited,
	ACM_Locked,
	ACM_MAX,
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t {
	Invalid,
	Bone,
	Socket,
	EComponentSocketType_MAX,
};

// Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8_t {
	Red,
	Green,
	Blue,
	Cyan,
	Magenta,
	Yellow,
	White,
	Black,
	MAX,
};

// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t {
	SurfaceType_Default,
	SurfaceType1,
	SurfaceType2,
	SurfaceType3,
	SurfaceType4,
	SurfaceType5,
	SurfaceType6,
	SurfaceType7,
	SurfaceType8,
	SurfaceType9,
	SurfaceType10,
	SurfaceType11,
	SurfaceType12,
	SurfaceType13,
	SurfaceType14,
	SurfaceType15,
	SurfaceType16,
	SurfaceType17,
	SurfaceType18,
	SurfaceType19,
	SurfaceType20,
	SurfaceType21,
	SurfaceType22,
	SurfaceType23,
	SurfaceType24,
	SurfaceType25,
	SurfaceType26,
	SurfaceType27,
	SurfaceType28,
	SurfaceType29,
	SurfaceType30,
	SurfaceType31,
	SurfaceType32,
	SurfaceType33,
	SurfaceType34,
	SurfaceType35,
	SurfaceType36,
	SurfaceType37,
	SurfaceType38,
	SurfaceType39,
	SurfaceType40,
	SurfaceType41,
	SurfaceType42,
	SurfaceType43,
	SurfaceType44,
	SurfaceType45,
	SurfaceType46,
	SurfaceType47,
	SurfaceType48,
	SurfaceType49,
	SurfaceType50,
	SurfaceType51,
	SurfaceType52,
	SurfaceType53,
	SurfaceType54,
	SurfaceType55,
	SurfaceType56,
	SurfaceType57,
	SurfaceType58,
	SurfaceType59,
	SurfaceType60,
	SurfaceType61,
	SurfaceType62,
	SurfaceType_Max,
	EPhysicalSurface_MAX,
};

// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t {
	ShiftBucket0,
	ShiftBucket1,
	ShiftBucket2,
	ShiftBucket3,
	ShiftBucket4,
	ShiftBucket5,
	ShiftBucketMax,
	EUpdateRateShiftBucket_MAX,
};

// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t {
	SMF_None,
	SMF_Streamed,
	SMF_MAX,
};

// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t {
	LMPT_NormalPadding,
	LMPT_PrePadding,
	LMPT_NoPadding,
	LMPT_MAX,
};

// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t {
	ETS_EventSignature,
	ETS_FloatSignature,
	ETS_VectorSignature,
	ETS_LinearColorSignature,
	ETS_InvalidSignature,
	ETS_MAX,
};

// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t {
	BSIT_Average,
	BSIT_Linear,
	BSIT_Cubic,
	BSIT_MAX,
};

// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t {
	OverlapFilter_All,
	OverlapFilter_DynamicOnly,
	OverlapFilter_StaticOnly,
	OverlapFilter_MAX,
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t {
	Disabled,
	Linear,
	Exponential,
	Replay,
	ENetworkSmoothingMode_MAX,
};

// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t {
	Quality_Preview,
	Quality_Medium,
	Quality_High,
	Quality_Production,
	Quality_MAX,
};

// Enum Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8_t {
	MSR_1x1,
	MSR_2x1,
	MSR_1x2,
	MSR_2x2,
	MSR_4x2,
	MSR_2x4,
	MSR_4x4,
	MSR_Count,
	MSR_MAX,
};

// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t {
	MSC_Less,
	MSC_LessEqual,
	MSC_Greater,
	MSC_GreaterEqual,
	MSC_Equal,
	MSC_NotEqual,
	MSC_Never,
	MSC_Always,
	MSC_Count,
	MSC_MAX,
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t {
	SAMPLERTYPE_Color,
	SAMPLERTYPE_Grayscale,
	SAMPLERTYPE_Alpha,
	SAMPLERTYPE_Normal,
	SAMPLERTYPE_Masks,
	SAMPLERTYPE_DistanceFieldFont,
	SAMPLERTYPE_LinearColor,
	SAMPLERTYPE_LinearGrayscale,
	SAMPLERTYPE_Data,
	SAMPLERTYPE_External,
	SAMPLERTYPE_VirtualColor,
	SAMPLERTYPE_VirtualGrayscale,
	SAMPLERTYPE_VirtualAlpha,
	SAMPLERTYPE_VirtualNormal,
	SAMPLERTYPE_VirtualMasks,
	SAMPLERTYPE_VirtualLinearColor,
	SAMPLERTYPE_VirtualLinearGrayscale,
	SAMPLERTYPE_MAX,
};

// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t {
	MTM_NoTessellation,
	MTM_FlatTessellation,
	MTM_PNTriangles,
	MTM_MAX,
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t {
	MSM_Unlit,
	MSM_DefaultLit,
	MSM_Subsurface,
	MSM_PreintegratedSkin,
	MSM_ClearCoat,
	MSM_SubsurfaceProfile,
	MSM_TwoSidedFoliage,
	MSM_Hair,
	MSM_Cloth,
	MSM_Eye,
	MSM_SingleLayerWater,
	MSM_ThinTranslucent,
	MSM_NUM,
	MSM_FromMaterialExpression,
	MSM_MAX,
};

// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t {
	SceneDepth,
	DistanceField,
	EParticleCollisionMode_MAX,
};

// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t {
	ETrailWidthMode_FromCentre,
	ETrailWidthMode_FromFirst,
	ETrailWidthMode_FromSecond,
	ETrailWidthMode_MAX,
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t {
	Force8BitsPerChannel,
	Default,
	HighPrecisionNormals,
	Force16BitsPerChannel,
	EGBufferFormat_MAX,
};

// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t {
	SCCM_Overwrite,
	SCCM_Additive,
	SCCM_Composite,
	SCCM_MAX,
};

// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t {
	SCS_SceneColorHDR,
	SCS_SceneColorHDRNoAlpha,
	SCS_FinalColorLDR,
	SCS_SceneColorSceneDepth,
	SCS_SceneDepth,
	SCS_DeviceDepth,
	SCS_Normal,
	SCS_BaseColor,
	SCS_FinalColorHDR,
	SCS_FinalToneCurveHDR,
	SCS_MAX,
};

// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t {
	SortByDistance,
	SortByProjectedZ,
	SortAlongAxis,
	ETranslucentSortPolicy_MAX,
};

// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t {
	RM_IndexOfRefraction,
	RM_PixelNormalOffset,
	RM_MAX,
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t {
	TLM_VolumetricNonDirectional,
	TLM_VolumetricDirectional,
	TLM_VolumetricPerVertexNonDirectional,
	TLM_VolumetricPerVertexDirectional,
	TLM_Surface,
	TLM_SurfacePerPixelLighting,
	TLM_MAX,
};

// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t {
	SSM_FromTextureAsset,
	SSM_Wrap_WorldGroupSettings,
	SSM_Clamp_WorldGroupSettings,
	SSM_MAX,
};

// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t {
	OCM_Minimum,
	OCM_Multiply,
	OCM_MAX,
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t {
	AspectRatio_MaintainYFOV,
	AspectRatio_MaintainXFOV,
	AspectRatio_MajorAxisFOV,
	AspectRatio_MAX,
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t {
	Offline,
	Runtime,
	EFontCacheType_MAX,
};

// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t {
	FontICS_Default,
	FontICS_Ansi,
	FontICS_Symbol,
	FontICS_MAX,
};

// Enum Engine.EStandbyType
enum class EStandbyType : uint8_t {
	STDBY_Rx,
	STDBY_Tx,
	STDBY_BadPing,
	STDBY_MAX,
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t {
	DoNotTrace,
	TraceFullPath,
	OnlyTraceWhileAscending,
	ESuggestProjVelocityTraceOption_MAX,
};

// Enum Engine.EWindowMode
enum class EWindowMode : uint8_t {
	Fullscreen,
	WindowedFullscreen,
	Windowed,
	EWindowMode_MAX,
};

// Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8_t {
	HPP_World,
	HPP_Wireframe,
	HPP_Foreground,
	HPP_UI,
	HPP_MAX,
};

// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t {
	Luminance,
	Red,
	Green,
	Blue,
	Alpha,
	EImportanceWeight_MAX,
};

// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t {
	AMD_ClickedBanner,
	AMD_UserClosedAd,
	AMD_MAX,
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t {
	Float,
	Bool,
	Curve,
	EAnimAlphaInputType_MAX,
};

// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t {
	ETAC_Always,
	ETAC_GoreEnabled,
	ETAC_GoreDisabled,
	ETAC_MAX,
};

// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t {
	IMR_Keyframed,
	IMR_LookAtGroup,
	IMR_Ignore,
	IMR_MAX,
};

// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t {
	AXIS_TranslationX,
	AXIS_TranslationY,
	AXIS_TranslationZ,
	AXIS_RotationX,
	AXIS_RotationY,
	AXIS_RotationZ,
	AXIS_MAX,
};

// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t {
	ETTA_Off,
	ETTA_On,
	ETTA_Toggle,
	ETTA_Trigger,
	ETTA_MAX,
};

// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t {
	EVTC_Always,
	EVTC_GoreEnabled,
	EVTC_GoreDisabled,
	EVTC_MAX,
};

// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t {
	EVTA_Hide,
	EVTA_Show,
	EVTA_Toggle,
	EVTA_MAX,
};

// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8_t {
	None,
	Scroll,
	Magnify,
	Swipe,
	Rotate,
	LongPress,
	ESlateGesture_MAX,
};

// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t {
	First,
	Second,
	Third,
	Fourth,
	EMatrixColumns_MAX,
};

// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t {
	QuatInterp,
	EulerInterp,
	DualQuatInterp,
	ELerpInterpolationMode_MAX,
};

// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t {
	HalfToEven,
	HalfFromZero,
	HalfToZero,
	FromZero,
	ToZero,
	ToNegativeInfinity,
	ToPositiveInfinity,
	ERoundingMode_MAX,
};

// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t {
	SVB_Loading,
	SVB_LoadingAndVisibility,
	SVB_VisibilityBlockingOnLoad,
	SVB_BlockingOnLoad,
	SVB_LoadingNotVisible,
	SVB_MAX,
};

// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t {
	MDR_None,
	MDR_ColorNormalRoughness,
	MDR_Color,
	MDR_ColorNormal,
	MDR_ColorRoughness,
	MDR_Normal,
	MDR_NormalRoughness,
	MDR_Roughness,
	MDR_MAX,
};

// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t {
	DBM_Translucent,
	DBM_Stain,
	DBM_Normal,
	DBM_Emissive,
	DBM_DBuffer_ColorNormalRoughness,
	DBM_DBuffer_Color,
	DBM_DBuffer_ColorNormal,
	DBM_DBuffer_ColorRoughness,
	DBM_DBuffer_Normal,
	DBM_DBuffer_NormalRoughness,
	DBM_DBuffer_Roughness,
	DBM_DBuffer_Emissive,
	DBM_DBuffer_AlphaComposite,
	DBM_DBuffer_EmissiveAlphaComposite,
	DBM_Volumetric_DistanceFunction,
	DBM_AlphaComposite,
	DBM_AmbientOcclusion,
	DBM_MAX,
};

// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t {
	TCC_Red,
	TCC_Green,
	TCC_Blue,
	TCC_Alpha,
	TCC_MAX,
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t {
	Blend,
	UseA,
	UseB,
	EMaterialAttributeBlend_MAX,
};

// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t {
	Red,
	Green,
	Blue,
	Alpha,
	EChannelMaskParameterColor_MAX,
};

// Enum Engine.EClampMode
enum class EClampMode : uint8_t {
	CMODE_Clamp,
	CMODE_ClampMin,
	CMODE_ClampMax,
	CMODE_MAX,
};

// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t {
	CMOT_Float1,
	CMOT_Float2,
	CMOT_Float3,
	CMOT_Float4,
	CMOT_MAX,
};

// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t {
	TDOF_NearAndFarMask,
	TDOF_NearMask,
	TDOF_FarMask,
	TDOF_CircleOfConfusionRadius,
	TDOF_MAX,
};

// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t {
	FunctionInput_Scalar,
	FunctionInput_Vector2,
	FunctionInput_Vector3,
	FunctionInput_Vector4,
	FunctionInput_Texture2D,
	FunctionInput_TextureCube,
	FunctionInput_Texture2DArray,
	FunctionInput_VolumeTexture,
	FunctionInput_StaticBool,
	FunctionInput_MaterialAttributes,
	FunctionInput_TextureExternal,
	FunctionInput_MAX,
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t {
	NOISEFUNCTION_SimplexTex,
	NOISEFUNCTION_GradientTex,
	NOISEFUNCTION_GradientTex3D,
	NOISEFUNCTION_GradientALU,
	NOISEFUNCTION_ValueALU,
	NOISEFUNCTION_VoronoiALU,
	NOISEFUNCTION_MAX,
};

// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t {
	RVTMVM_None,
	RVTMVM_MipLevel,
	RVTMVM_MipBias,
	RVTMVM_MAX,
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t {
	Coordinates,
	OffsetFraction,
	EMaterialSceneAttributeInputMode_MAX,
};

// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t {
	STLOD_Pop,
	STLOD_Smooth,
	STLOD_MAX,
};

// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t {
	STW_None,
	STW_Fastest,
	STW_Fast,
	STW_Better,
	STW_Best,
	STW_Palm,
	STW_BestPlus,
	STW_MAX,
};

// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t {
	STG_Branch,
	STG_Frond,
	STG_Leaf,
	STG_FacingLeaf,
	STG_Billboard,
	STG_MAX,
};

// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t {
	TMTM_TextureSize,
	TMTM_TexelSize,
	TMTM_MAX,
};

// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t {
	TMVM_None,
	TMVM_MipLevel,
	TMVM_MipBias,
	TMVM_Derivative,
	TMVM_MAX,
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t {
	TRANSFORM_Tangent,
	TRANSFORM_Local,
	TRANSFORM_World,
	TRANSFORM_View,
	TRANSFORM_Camera,
	TRANSFORM_ParticleWorld,
	TRANSFORM_MAX,
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t {
	TRANSFORMSOURCE_Tangent,
	TRANSFORMSOURCE_Local,
	TRANSFORMSOURCE_World,
	TRANSFORMSOURCE_View,
	TRANSFORMSOURCE_Camera,
	TRANSFORMSOURCE_ParticleWorld,
	TRANSFORMSOURCE_MAX,
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t {
	TRANSFORMPOSSOURCE_Local,
	TRANSFORMPOSSOURCE_World,
	TRANSFORMPOSSOURCE_TranslatedWorld,
	TRANSFORMPOSSOURCE_View,
	TRANSFORMPOSSOURCE_Camera,
	TRANSFORMPOSSOURCE_Particle,
	TRANSFORMPOSSOURCE_MAX,
};

// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t {
	VNF_CellnoiseALU,
	VNF_VectorALU,
	VNF_GradientALU,
	VNF_CurlALU,
	VNF_VoronoiALU,
	VNF_MAX,
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t {
	MEVP_BufferSize,
	MEVP_FieldOfView,
	MEVP_TanHalfFieldOfView,
	MEVP_ViewSize,
	MEVP_WorldSpaceViewPosition,
	MEVP_WorldSpaceCameraPosition,
	MEVP_ViewportOffset,
	MEVP_TemporalSampleCount,
	MEVP_TemporalSampleIndex,
	MEVP_TemporalSampleOffset,
	MEVP_RuntimeVirtualTextureOutputLevel,
	MEVP_RuntimeVirtualTextureOutputDerivative,
	MEVP_PreExposure,
	MEVP_MAX,
};

// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t {
	WPT_Default,
	WPT_ExcludeAllShaderOffsets,
	WPT_CameraRelative,
	WPT_CameraRelativeNoOffsets,
	WPT_MAX,
};

// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t {
	Default,
	MaterialLayer,
	MaterialLayerBlend,
	EMaterialFunctionUsage_MAX,
};

// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t {
	MATUSAGE_SkeletalMesh,
	MATUSAGE_ParticleSprites,
	MATUSAGE_BeamTrails,
	MATUSAGE_MeshParticles,
	MATUSAGE_StaticLighting,
	MATUSAGE_MorphTargets,
	MATUSAGE_SplineMesh,
	MATUSAGE_InstancedStaticMeshes,
	MATUSAGE_GeometryCollections,
	MATUSAGE_Clothing,
	MATUSAGE_NiagaraSprites,
	MATUSAGE_NiagaraRibbons,
	MATUSAGE_NiagaraMeshParticles,
	MATUSAGE_GeometryCache,
	MATUSAGE_Water,
	MATUSAGE_HairStrands,
	MATUSAGE_LidarPointCloud,
	MATUSAGE_MAX,
};

// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t {
	LayerParameter,
	BlendParameter,
	GlobalParameter,
	EMaterialParameterAssociation_MAX,
};

// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t {
	MaterialMergeType_Default,
	MaterialMergeType_Simplygon,
	MaterialMergeType_MAX,
};

// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t {
	TextureSizingType_UseSingleTextureSize,
	TextureSizingType_UseAutomaticBiasedSizes,
	TextureSizingType_UseManualOverrideTextureSize,
	TextureSizingType_UseSimplygonAutomaticSizing,
	TextureSizingType_MAX,
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t {
	PPI_SceneColor,
	PPI_SceneDepth,
	PPI_DiffuseColor,
	PPI_SpecularColor,
	PPI_SubsurfaceColor,
	PPI_BaseColor,
	PPI_Specular,
	PPI_Metallic,
	PPI_WorldNormal,
	PPI_SeparateTranslucency,
	PPI_Opacity,
	PPI_Roughness,
	PPI_MaterialAO,
	PPI_CustomDepth,
	PPI_PostProcessInput0,
	PPI_PostProcessInput1,
	PPI_PostProcessInput2,
	PPI_PostProcessInput3,
	PPI_PostProcessInput4,
	PPI_PostProcessInput5,
	PPI_PostProcessInput6,
	PPI_DecalMask,
	PPI_ShadingModelColor,
	PPI_ShadingModelID,
	PPI_AmbientOcclusion,
	PPI_CustomStencil,
	PPI_StoredBaseColor,
	PPI_StoredSpecular,
	PPI_Velocity,
	PPI_WorldTangent,
	PPI_Anisotropy,
	PPI_MAX,
};

// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t {
	MD_Surface,
	MD_DeferredDecal,
	MD_LightFunction,
	MD_Volume,
	MD_PostProcess,
	MD_UI,
	MD_RuntimeVirtualTexture,
	MD_MAX,
};

// Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8_t {
	RemoveOriginalActors,
	KeepOriginalActorsAsEditorOnly,
	EMeshInstancingReplacementMethod_MAX,
};

// Enum Engine.EUVOutput
enum class EUVOutput : uint8_t {
	DoNotOutputChannel,
	OutputChannel,
	EUVOutput_MAX,
};

// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t {
	MeshMergeType_Default,
	MeshMergeType_MergeActor,
	MeshMergeType_MAX,
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t {
	AllLODs,
	SpecificLOD,
	CalculateLOD,
	LowestDetailLOD,
	EMeshLODSelectionType_MAX,
};

// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t {
	AngleWeighted,
	AreaWeighted,
	EqualWeighted,
	EProxyNormalComputationMethod_MAX,
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t {
	High,
	Medium,
	Low,
	ELandscapeCullingPrecision_MAX,
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t {
	Triangles,
	Vertices,
	Any,
	EStaticMeshReductionTerimationCriterion_MAX,
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t {
	Off,
	Lowest,
	Low,
	Normal,
	High,
	Highest,
	EMeshFeatureImportance_MAX,
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t {
	X,
	Y,
	Z,
	EVertexPaintAxis_MAX,
};

// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t {
	MTR_Succeeded,
	MTR_Failed,
	MTR_Canceled,
	MTR_RestoredFromServer,
	MTR_MAX,
};

// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t {
	MTD_PurchaseQueryComplete,
	MTD_PurchaseComplete,
	MTD_MAX,
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8_t {
	InvalidMode,
	GameMode,
	EditorMode,
	SimulationMode,
	PIEMode,
	FNavigationSystemRunMode_MAX,
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t {
	Invalid,
	Error,
	Fail,
	Success,
	ENavigationQueryResult_MAX,
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t {
	Cleared,
	NewPath,
	UpdatedDueToGoalMoved,
	UpdatedDueToNavigationChanged,
	Invalidated,
	RePathFailed,
	MetaPathUpdate,
	Custom,
	ENavPathEvent_MAX,
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t {
	Invalid,
	Instant,
	Lazy,
	ENavDataGatheringModeConfig_MAX,
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t {
	Default,
	Instant,
	Lazy,
	ENavDataGatheringMode_MAX,
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t {
	Default,
	Enable,
	Disable,
	MAX,
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t {
	BothWays,
	LeftToRight,
	RightToLeft,
	ENavLinkDirection_MAX,
};

// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t {
	ERM_Normal,
	ERM_Point,
	ERM_Cross,
	ERM_LightsOnly,
	ERM_None,
	ERM_MAX,
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t {
	PSUVIM_None,
	PSUVIM_Linear,
	PSUVIM_Linear_Blend,
	PSUVIM_Random,
	PSUVIM_Random_Blend,
	PSUVIM_MAX,
};

// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t {
	EPBM_Instant,
	EPBM_Interpolated,
	EPBM_MAX,
};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t {
	Auto,
	Complete,
	DisableTick,
	DisableTickAndKill,
	Num,
	EParticleSystemInsignificanceReaction_MAX,
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t {
	Low,
	Medium,
	High,
	Critical,
	Num,
	EParticleSignificanceLevel_MAX,
};

// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t {
	PDM_Low,
	PDM_Medium,
	PDM_High,
	PDM_MAX,
};

// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t {
	EPSSM_Random,
	EPSSM_Sequential,
	EPSSM_MAX,
};

// Enum Engine.EModuleType
enum class EModuleType : uint8_t {
	EPMT_General,
	EPMT_TypeData,
	EPMT_Beam,
	EPMT_Trail,
	EPMT_Spawn,
	EPMT_Required,
	EPMT_Event,
	EPMT_Light,
	EPMT_SubUV,
	EPMT_MAX,
};

// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t {
	EAPSM_Random,
	EAPSM_Sequential,
	EAPSM_MAX,
};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8_t {
	PEB2STTM_Direct,
	PEB2STTM_UserSet,
	PEB2STTM_Distribution,
	PEB2STTM_Emitter,
	PEB2STTM_MAX,
};

// Enum Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8_t {
	PEB2STM_Default,
	PEB2STM_UserSet,
	PEB2STM_Emitter,
	PEB2STM_Particle,
	PEB2STM_Actor,
	PEB2STM_MAX,
};

// Enum Engine.BeamModifierType
enum class BeamModifierType : uint8_t {
	PEB2MT_Source,
	PEB2MT_Target,
	PEB2MT_MAX,
};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t {
	EPCOUM_DirectSet,
	EPCOUM_Additive,
	EPCOUM_Scalar,
	EPCOUM_MAX,
};

// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t {
	EPCC_Kill,
	EPCC_Freeze,
	EPCC_HaltCollisions,
	EPCC_FreezeTranslation,
	EPCC_FreezeRotation,
	EPCC_FreezeMovement,
	EPCC_MAX,
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t {
	Bounce,
	Stop,
	Kill,
	EParticleCollisionResponse_MAX,
};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t {
	BONESOCKETSEL_Sequential,
	BONESOCKETSEL_Random,
	BONESOCKETSEL_MAX,
};

// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t {
	BONESOCKETSOURCE_Bones,
	BONESOCKETSOURCE_Sockets,
	BONESOCKETSOURCE_MAX,
};

// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t {
	ELESM_Random,
	ELESM_Sequential,
	ELESM_MAX,
};

// Enum Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8_t {
	PMLPC_HEIGHTAXIS_X,
	PMLPC_HEIGHTAXIS_Y,
	PMLPC_HEIGHTAXIS_Z,
	PMLPC_HEIGHTAXIS_MAX,
};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t {
	VERTSURFACESOURCE_Vert,
	VERTSURFACESOURCE_Surface,
	VERTSURFACESOURCE_MAX,
};

// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t {
	EOChainMode_Add,
	EOChainMode_Scale,
	EOChainMode_Link,
	EOChainMode_MAX,
};

// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t {
	EPAL_NONE,
	EPAL_X,
	EPAL_Y,
	EPAL_Z,
	EPAL_NEGATIVE_X,
	EPAL_NEGATIVE_Y,
	EPAL_NEGATIVE_Z,
	EPAL_ROTATE_X,
	EPAL_ROTATE_Y,
	EPAL_ROTATE_Z,
	EPAL_MAX,
};

// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t {
	EDPV_UserSet,
	EDPV_AutoSet,
	EDPV_VelocityX,
	EDPV_VelocityY,
	EDPV_VelocityZ,
	EDPV_VelocityMag,
	EDPV_MAX,
};

// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t {
	ENM_CameraFacing,
	ENM_Spherical,
	ENM_Cylindrical,
	ENM_MAX,
};

// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t {
	PSORTMODE_None,
	PSORTMODE_ViewProjDepth,
	PSORTMODE_DistanceToView,
	PSORTMODE_Age_OldestFirst,
	PSORTMODE_Age_NewestFirst,
	PSORTMODE_MAX,
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t {
	None,
	FlipUV,
	FlipUOnly,
	FlipVOnly,
	RandomFlipUV,
	RandomFlipUOnly,
	RandomFlipVOnly,
	RandomFlipUVIndependent,
	EParticleUVFlipMode_MAX,
};

// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t {
	PET2SRCM_Default,
	PET2SRCM_Particle,
	PET2SRCM_Actor,
	PET2SRCM_MAX,
};

// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t {
	PEBTM_None,
	PEBTM_Full,
	PEBTM_Partial,
	PEBTM_MAX,
};

// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t {
	PEB2M_Distance,
	PEB2M_Target,
	PEB2M_Branch,
	PEB2M_MAX,
};

// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t {
	XAxisFacing_NoUp,
	XAxisFacing_ZUp,
	XAxisFacing_NegativeZUp,
	XAxisFacing_YUp,
	XAxisFacing_NegativeYUp,
	LockedAxis_ZAxisFacing,
	LockedAxis_NegativeZAxisFacing,
	LockedAxis_YAxisFacing,
	LockedAxis_NegativeYAxisFacing,
	VelocityAligned_ZAxisFacing,
	VelocityAligned_NegativeZAxisFacing,
	VelocityAligned_YAxisFacing,
	VelocityAligned_NegativeYAxisFacing,
	EMeshCameraFacingOptions_MAX,
};

// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t {
	CameraFacing_NoneUP,
	CameraFacing_ZUp,
	CameraFacing_NegativeZUp,
	CameraFacing_YUp,
	CameraFacing_NegativeYUp,
	CameraFacing_MAX,
};

// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t {
	PSMA_MeshFaceCameraWithRoll,
	PSMA_MeshFaceCameraWithSpin,
	PSMA_MeshFaceCameraWithLockedAxis,
	PSMA_MAX,
};

// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t {
	Trails_CameraUp,
	Trails_SourceUp,
	Trails_WorldUp,
	Trails_MAX,
};

// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t {
	PSA_FacingCameraPosition,
	PSA_Square,
	PSA_Rectangle,
	PSA_Velocity,
	PSA_AwayFromCenter,
	PSA_TypeSpecific,
	PSA_FacingCameraDistanceBlend,
	PSA_MAX,
};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t {
	EPSOBM_None,
	EPSOBM_ParticleBounds,
	EPSOBM_CustomBounds,
	EPSOBM_MAX,
};

// Enum Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8_t {
	PARTICLESYSTEMLODMETHOD_Automatic,
	PARTICLESYSTEMLODMETHOD_DirectSet,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic,
	PARTICLESYSTEMLODMETHOD_MAX,
};

// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t {
	EPSUM_RealTime,
	EPSUM_FixedTime,
	EPSUM_MAX,
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t {
	EPET_Any,
	EPET_Spawn,
	EPET_Death,
	EPET_Collision,
	EPET_Burst,
	EPET_Blueprint,
	EPET_MAX,
};

// Enum Engine.ParticleReplayState
enum class ParticleReplayState : uint8_t {
	PRS_Disabled,
	PRS_Capturing,
	PRS_Replaying,
	PRS_MAX,
};

// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t {
	PSPT_None,
	PSPT_Scalar,
	PSPT_ScalarRand,
	PSPT_Vector,
	PSPT_VectorRand,
	PSPT_Color,
	PSPT_Actor,
	PSPT_Material,
	PSPT_VectorUnitRand,
	PSPT_MAX,
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t {
	None,
	X,
	Y,
	Z,
	Invalid,
	ESettingsLockedAxis_MAX,
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t {
	Full3D,
	YZPlane,
	XZPlane,
	XYPlane,
	ESettingsDOF_MAX,
};

// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t {
	Average,
	Min,
	Multiply,
	Max,
};

// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t {
	RCCE_Cycle,
	RCCE_CycleWithOffset,
	RCCE_Oscillate,
	RCCE_Linear,
	RCCE_Constant,
	RCCE_None,
	RCCE_MAX,
};

// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t {
	RCIM_Linear,
	RCIM_Constant,
	RCIM_Cubic,
	RCIM_None,
	RCIM_MAX,
};

// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t {
	CapturedScene,
	SpecifiedCubemap,
	EReflectionSourceType_MAX,
};

// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t {
	DBBPF_B8G8R8A8,
	DBBPF_A16B16G16R16_DEPRECATED,
	DBBPF_FloatRGB_DEPRECATED,
	DBBPF_FloatRGBA,
	DBBPF_A2B10G10R10,
	DBBPF_MAX,
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t {
	AEM_Histogram,
	AEM_Basic,
	AEM_Manual,
	AEM_MAX,
};

// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t {
	Disabled,
	LinearColorSpaceOnly,
	AllowThroughTonemapper,
	EAlphaChannelMode_MAX,
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t {
	None,
	OpaqueOnly,
	OpaqueAndMasked,
	Auto,
	EEarlyZPass_MAX,
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t {
	Disabled,
	Enabled,
	EnabledOnDemand,
	EnabledWithStencil,
	ECustomDepthStencil_MAX,
};

// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t {
	One,
	Two,
	Four,
	Eight,
	EMobileMSAASampleCount_MAX,
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t {
	One,
	Two,
	Four,
	Eight,
	ECompositingSampleCount_MAX,
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t {
	NoClear,
	HardwareClear,
	QuadAtMaxZ,
	EClearSceneOptions_MAX,
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t {
	Line,
	Dash,
	EReporterLineStyle_MAX,
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t {
	Outside,
	Inside,
	ELegendPosition_MAX,
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t {
	Lines,
	Filled,
	EGraphDataStyle_MAX,
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t {
	Lines,
	Notches,
	Grid,
	EGraphAxisStyle_MAX,
};

// Enum Engine.ReverbPreset
enum class ReverbPreset : uint8_t {
	REVERB_Default,
	REVERB_Bathroom,
	REVERB_StoneRoom,
	REVERB_Auditorium,
	REVERB_ConcertHall,
	REVERB_Cave,
	REVERB_Hallway,
	REVERB_StoneCorridor,
	REVERB_Alley,
	REVERB_Forest,
	REVERB_City,
	REVERB_Mountains,
	REVERB_Quarry,
	REVERB_Plain,
	REVERB_ParkingLot,
	REVERB_SewerPipe,
	REVERB_Underwater,
	REVERB_SmallRoom,
	REVERB_MediumRoom,
	REVERB_LargeRoom,
	REVERB_MediumHall,
	REVERB_LargeHall,
	REVERB_Plate,
	REVERB_MAX,
};

// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t {
	RCKTCF_uint16,
	RCKTCF_float32,
	RCKTCF_MAX,
};

// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t {
	RCCF_Empty,
	RCCF_Constant,
	RCCF_Linear,
	RCCF_Cubic,
	RCCF_Mixed,
	RCCF_MAX,
};

// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t {
	RCTWM_WeightedNone,
	RCTWM_WeightedArrive,
	RCTWM_WeightedLeave,
	RCTWM_WeightedBoth,
	RCTWM_MAX,
};

// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t {
	RCTM_Auto,
	RCTM_User,
	RCTM_Break,
	RCTM_None,
	RCTM_MAX,
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t {
	Absolute,
	Relative,
	EConstraintTransform_MAX,
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t {
	Orientation,
	Translation,
	MAX,
};

// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t {
	MaintainLastRootMotionVelocity,
	SetVelocity,
	ClampVelocity,
	ERootMotionFinishVelocityMode_MAX,
};

// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t {
	UseSensitiveLiftoffCheck,
	DisablePartialEndTick,
	IgnoreZAccumulate,
	ERootMotionSourceSettingsFlags_MAX,
};

// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t {
	Prepared,
	Finished,
	MarkedForRemoval,
	ERootMotionSourceStatusFlags_MAX,
};

// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t {
	Override,
	Additive,
	ERootMotionAccumulateMode_MAX,
};

// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t {
	BaseColor,
	BaseColor_Normal_DEPRECATED,
	BaseColor_Normal_Specular,
	BaseColor_Normal_Specular_YCoCg,
	BaseColor_Normal_Specular_Mask_YCoCg,
	WorldHeight,
	Count,
	ERuntimeVirtualTextureMaterialType_MAX,
};

// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t {
	Disabled,
	Hard_shadows,
	Area_shadows,
	EReflectedAndRefractedRayTracedShadows_MAX,
};

// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8_t {
	Disabled,
	BruteForce,
	FinalGather,
	ERayTracingGlobalIlluminationType_MAX,
};

// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t {
	Raster,
	RayTracing,
	ETranslucencyType_MAX,
};

// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8_t {
	ScreenSpace,
	RayTracing,
	EReflectionsType_MAX,
};

// Enum Engine.ELightUnits
enum class ELightUnits : uint8_t {
	Unitless,
	Candelas,
	Lumens,
	ELightUnits_MAX,
};

// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t {
	BM_SOG,
	BM_FFT,
	BM_MAX,
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t {
	AEM_Histogram,
	AEM_Basic,
	AEM_Manual,
	AEM_MAX,
};

// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t {
	AAM_None,
	AAM_FXAA,
	AAM_TemporalAA,
	AAM_MSAA,
	AAM_MAX,
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t {
	DOFM_BokehDOF,
	DOFM_Gaussian,
	DOFM_CircleDOF,
	DOFM_MAX,
};

// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t {
	PRM_LegacySceneCapture,
	PRM_RenderScenePrimitives,
	PRM_UseShowOnlyList,
	PRM_MAX,
};

// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t {
	MP_EmissiveColor,
	MP_Opacity,
	MP_OpacityMask,
	MP_DiffuseColor,
	MP_SpecularColor,
	MP_BaseColor,
	MP_Metallic,
	MP_Specular,
	MP_Roughness,
	MP_Anisotropy,
	MP_Normal,
	MP_Tangent,
	MP_WorldPositionOffset,
	MP_WorldDisplacement,
	MP_TessellationMultiplier,
	MP_SubsurfaceColor,
	MP_CustomData0,
	MP_CustomData1,
	MP_AmbientOcclusion,
	MP_Refraction,
	MP_CustomizedUVs0,
	MP_CustomizedUVs1,
	MP_CustomizedUVs2,
	MP_CustomizedUVs3,
	MP_CustomizedUVs4,
	MP_CustomizedUVs5,
	MP_CustomizedUVs6,
	MP_CustomizedUVs7,
	MP_PixelDepthOffset,
	MP_ShadingModel,
	MP_MaterialAttributes,
	MP_CustomOutput,
	MP_MAX,
};

// Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8_t {
	Exclusive,
	Inclusive,
	ESkinCacheDefaultBehavior_MAX,
};

// Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8_t {
	Auto,
	Disabled,
	Enabled,
	ESkinCacheUsage_MAX,
};

// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t {
	SimulationUpatesComponentTransform,
	ComponentTransformIsKinematic,
	EPhysicsTransformUpdateMode_MAX,
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t {
	AnimationBlueprint,
	AnimationSingleNode,
	AnimationCustomMode,
	EAnimationMode_MAX,
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t {
	SkipSimulatingBones,
	SkipAllBones,
	EKinematicBonesUpdateToPhysics_MAX,
};

// Enum Engine.EClothMassMode
enum class EClothMassMode : uint8_t {
	UniformMass,
	TotalMass,
	Density,
	MaxClothMassMode,
	EClothMassMode_MAX,
};

// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t {
	AttributeCurve,
	MaterialCurve,
	MorphTargetCurve,
	MaxAnimCurveType,
	EAnimCurveType_MAX,
};

// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8_t {
	Before_Versionning,
	SkeletalMeshBuildRefactor,
	VersionPlusOne,
	LatestVersion,
	ESkeletalMeshSkinningImportVersions_MAX,
};

// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8_t {
	Before_Versionning,
	SkeletalMeshBuildRefactor,
	VersionPlusOne,
	LatestVersion,
	ESkeletalMeshGeoImportVersions_MAX,
};

// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t {
	Remove,
	Keep,
	Invalid,
	EBoneFilterActionOption_MAX,
};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8_t {
	SMOI_Off,
	SMOI_Lowest,
	SMOI_Low,
	SMOI_Normal,
	SMOI_High,
	SMOI_Highest,
	SMOI_MAX,
};

// Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8_t {
	SMOT_NumOfTriangles,
	SMOT_MaxDeviation,
	SMOT_TriangleOrDeviation,
	SMOT_MAX,
};

// Enum Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8_t {
	SMTC_NumOfTriangles,
	SMTC_NumOfVerts,
	SMTC_TriangleOrVert,
	SMTC_AbsNumOfTriangles,
	SMTC_AbsNumOfVerts,
	SMTC_AbsTriangleOrVert,
	SMTC_MAX,
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t {
	Animation,
	Skeleton,
	AnimationScaled,
	AnimationRelative,
	OrientAndScale,
	EBoneTranslationRetargetingMode_MAX,
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t {
	WorldSpace,
	ComponentSpace,
	EBoneSpaces_MAX,
};

// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t {
	AlwaysTickPoseAndRefreshBones,
	AlwaysTickPose,
	OnlyTickMontagesWhenNotRendered,
	OnlyTickPoseWhenRendered,
	EVisibilityBasedAnimTickOption_MAX,
};

// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t {
	PBO_None,
	PBO_Term,
	PBO_MAX,
};

// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t {
	BVS_HiddenByParent,
	BVS_Visible,
	BVS_ExplicitlyHidden,
	BVS_MAX,
};

// Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8_t {
	PlanetTopAtAbsoluteWorldOrigin,
	PlanetTopAtComponentTransform,
	PlanetCenterAtComponentTransform,
	ESkyAtmosphereTransformMode_MAX,
};

// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t {
	SLS_CapturedScene,
	SLS_SpecifiedCubemap,
	SLS_MAX,
};

// Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8_t {
	Linear,
	CustomCurve,
	Manual,
	EPriorityAttenuationMethod_MAX,
};

// Enum Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8_t {
	Linear,
	CustomCurve,
	Manual,
	ESubmixSendMethod_MAX,
};

// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t {
	Linear,
	CustomCurve,
	Manual,
	EReverbSendMethod_MAX,
};

// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t {
	Linear,
	CustomCurve,
	EAirAbsorptionMethod_MAX,
};

// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t {
	SPATIALIZATION_Default,
	SPATIALIZATION_HRTF,
	SPATIALIZATION_MAX,
};

// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t {
	SOUNDDISTANCE_Normal,
	SOUNDDISTANCE_InfiniteXYPlane,
	SOUNDDISTANCE_InfiniteXZPlane,
	SOUNDDISTANCE_InfiniteYZPlane,
	SOUNDDISTANCE_MAX,
};

// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t {
	Disabled,
	PlayWhenSilent,
	Restart,
	EVirtualizationMode_MAX,
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t {
	PreventNew,
	StopOldest,
	StopFarthestThenPreventNew,
	StopFarthestThenOldest,
	StopLowestPriority,
	StopQuietest,
	StopLowestPriorityThenPreventNew,
	Count,
	EMaxConcurrentResolutionRule_MAX,
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t {
	SOUNDGROUP_Default,
	SOUNDGROUP_Effects,
	SOUNDGROUP_UI,
	SOUNDGROUP_Music,
	SOUNDGROUP_Voice,
	SOUNDGROUP_GameSoundGroup1,
	SOUNDGROUP_GameSoundGroup2,
	SOUNDGROUP_GameSoundGroup3,
	SOUNDGROUP_GameSoundGroup4,
	SOUNDGROUP_GameSoundGroup5,
	SOUNDGROUP_GameSoundGroup6,
	SOUNDGROUP_GameSoundGroup7,
	SOUNDGROUP_GameSoundGroup8,
	SOUNDGROUP_GameSoundGroup9,
	SOUNDGROUP_GameSoundGroup10,
	SOUNDGROUP_GameSoundGroup11,
	SOUNDGROUP_GameSoundGroup12,
	SOUNDGROUP_GameSoundGroup13,
	SOUNDGROUP_GameSoundGroup14,
	SOUNDGROUP_GameSoundGroup15,
	SOUNDGROUP_GameSoundGroup16,
	SOUNDGROUP_GameSoundGroup17,
	SOUNDGROUP_GameSoundGroup18,
	SOUNDGROUP_GameSoundGroup19,
	SOUNDGROUP_GameSoundGroup20,
	SOUNDGROUP_MAX,
};

// Enum Engine.ModulationParamMode
enum class ModulationParamMode : uint8_t {
	MPM_Normal,
	MPM_Abs,
	MPM_Direct,
	MPM_MAX,
};

// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t {
	Mono,
	Stereo,
	ESourceBusChannels_MAX,
};

// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t {
	Linear,
	CustomCurve,
	Manual,
	ESourceBusSendLevelControlMethod_MAX,
};

// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t {
	Linear,
	CustomCurve,
	Manual,
	ESendLevelControlMethod_MAX,
};

// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t {
	SoundWave,
	WavFile,
	EAudioRecordingExportType_MAX,
};

// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t {
	VerySmall_65,
	Small_257,
	Medium_513,
	Large_1025,
	VeryLarge_2049,
	ESoundWaveFFTSize_MAX,
};

// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t {
	DTYPE_Setup,
	DTYPE_Invalid,
	DTYPE_Preview,
	DTYPE_Native,
	DTYPE_RealTime,
	DTYPE_Procedural,
	DTYPE_Xenon,
	DTYPE_Streaming,
	DTYPE_MAX,
};

// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8_t {
	Inherited,
	RetainOnLoad,
	PrimeOnLoad,
	LoadOnDemand,
	ForceInline,
	Uninitialized,
	ESoundWaveLoadingBehavior_MAX,
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t {
	Local,
	World,
	ESplineCoordinateSpace_MAX,
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t {
	Linear,
	Curve,
	Constant,
	CurveClamped,
	CurveCustomTangent,
	ESplinePointType_MAX,
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t {
	X,
	Y,
	Z,
	ESplineMeshAxis_MAX,
};

// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t {
	OT_NumOfTriangles,
	OT_MaxDeviation,
	OT_MAX,
};

// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t {
	IL_Off,
	IL_Lowest,
	IL_Low,
	IL_Normal,
	IL_High,
	IL_Highest,
	TEMP_BROKEN2,
	EImportanceLevel_MAX,
};

// Enum Engine.ENormalMode
enum class ENormalMode : uint8_t {
	NM_PreserveSmoothingGroups,
	NM_RecalculateNormals,
	NM_RecalculateNormalsSmooth,
	NM_RecalculateNormalsHard,
	TEMP_BROKEN,
	ENormalMode_MAX,
};

// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t {
	SLSH_QuadLayer,
	SLSH_CylinderLayer,
	SLSH_CubemapLayer,
	SLSH_EquirectLayer,
	SLSH_MAX,
};

// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t {
	SLT_WorldLocked,
	SLT_TrackerLocked,
	SLT_FaceLocked,
	SLT_MAX,
};

// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t {
	OSM_Alpha,
	OSM_ColorBrightness,
	OSM_RedChannel,
	OSM_GreenChannel,
	OSM_BlueChannel,
	OSM_MAX,
};

// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t {
	BVC_FourVertices,
	BVC_EightVertices,
	BVC_MAX,
};

// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t {
	EVRTA_TextTop,
	EVRTA_TextCenter,
	EVRTA_TextBottom,
	EVRTA_QuadTop,
	EVRTA_MAX,
};

// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t {
	EHTA_Left,
	EHTA_Center,
	EHTA_Right,
	EHTA_MAX,
};

// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t {
	TLCA_Default,
	TLCA_None,
	TLCA_Lowest,
	TLCA_Low,
	TLCA_Medium,
	TLCA_High,
	TLCA_Highest,
	TLCA_MAX,
};

// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t {
	TCQ_Default,
	TCQ_Lowest,
	TCQ_Low,
	TCQ_Medium,
	TCQ_High,
	TCQ_Highest,
	TCQ_MAX,
};

// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t {
	TSF_Invalid,
	TSF_G8,
	TSF_BGRA8,
	TSF_BGRE8,
	TSF_RGBA16,
	TSF_RGBA16F,
	TSF_RGBA8,
	TSF_RGBE8,
	TSF_G16,
	TSF_MAX,
};

// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t {
	TSAT_Uncompressed,
	TSAT_PNGCompressed,
	TSAT_DDSFile,
	TSAT_MAX,
};

// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t {
	TMC_ResidentMips,
	TMC_AllMips,
	TMC_AllMipsBiased,
	TMC_MAX,
};

// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t {
	CTM_Disabled,
	CTM_NormalRoughnessToRed,
	CTM_NormalRoughnessToGreen,
	CTM_NormalRoughnessToBlue,
	CTM_NormalRoughnessToAlpha,
	CTM_MAX,
};

// Enum Engine.TextureAddress
enum class TextureAddress : uint8_t {
	TA_Wrap,
	TA_Clamp,
	TA_Mirror,
	TA_MAX,
};

// Enum Engine.TextureFilter
enum class TextureFilter : uint8_t {
	TF_Nearest,
	TF_Bilinear,
	TF_Trilinear,
	TF_Default,
	TF_MAX,
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8_t {
	TC_Default,
	TC_Normalmap,
	TC_Masks,
	TC_Grayscale,
	TC_Displacementmap,
	TC_VectorDisplacementmap,
	TC_HDR,
	TC_EditorIcon,
	TC_Alpha,
	TC_DistanceFieldFont,
	TC_HDR_Compressed,
	TC_BC7,
	TC_MAX,
};

// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t {
	Default,
	AllMips,
	OnlyFirstMip,
	ETextureMipLoadOptions_MAX,
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t {
	Point,
	Bilinear,
	Trilinear,
	AnisotropicPoint,
	AnisotropicLinear,
	ETextureSamplerFilter_MAX,
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t {
	None,
	PadToPowerOfTwo,
	PadToSquarePowerOfTwo,
	ETexturePowerOfTwoSetting_MAX,
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8_t {
	TMGS_FromTextureGroup,
	TMGS_SimpleAverage,
	TMGS_Sharpen0,
	TMGS_Sharpen1,
	TMGS_Sharpen2,
	TMGS_Sharpen3,
	TMGS_Sharpen4,
	TMGS_Sharpen5,
	TMGS_Sharpen6,
	TMGS_Sharpen7,
	TMGS_Sharpen8,
	TMGS_Sharpen9,
	TMGS_Sharpen10,
	TMGS_NoMipmaps,
	TMGS_LeaveExistingMips,
	TMGS_Blur1,
	TMGS_Blur2,
	TMGS_Blur3,
	TMGS_Blur4,
	TMGS_Blur5,
	TMGS_Unfiltered,
	TMGS_MAX,
};

// Enum Engine.TextureGroup
enum class TextureGroup : uint8_t {
	TEXTUREGROUP_World,
	TEXTUREGROUP_WorldNormalMap,
	TEXTUREGROUP_WorldSpecular,
	TEXTUREGROUP_Character,
	TEXTUREGROUP_CharacterNormalMap,
	TEXTUREGROUP_CharacterSpecular,
	TEXTUREGROUP_Weapon,
	TEXTUREGROUP_WeaponNormalMap,
	TEXTUREGROUP_WeaponSpecular,
	TEXTUREGROUP_Vehicle,
	TEXTUREGROUP_VehicleNormalMap,
	TEXTUREGROUP_VehicleSpecular,
	TEXTUREGROUP_Cinematic,
	TEXTUREGROUP_Effects,
	TEXTUREGROUP_EffectsNotFiltered,
	TEXTUREGROUP_Skybox,
	TEXTUREGROUP_UI,
	TEXTUREGROUP_Lightmap,
	TEXTUREGROUP_RenderTarget,
	TEXTUREGROUP_MobileFlattened,
	TEXTUREGROUP_ProcBuilding_Face,
	TEXTUREGROUP_ProcBuilding_LightMap,
	TEXTUREGROUP_Shadowmap,
	TEXTUREGROUP_ColorLookupTable,
	TEXTUREGROUP_Terrain_Heightmap,
	TEXTUREGROUP_Terrain_Weightmap,
	TEXTUREGROUP_Bokeh,
	TEXTUREGROUP_IESLightProfile,
	TEXTUREGROUP_Pixels2D,
	TEXTUREGROUP_HierarchicalLOD,
	TEXTUREGROUP_Impostor,
	TEXTUREGROUP_ImpostorNormalDepth,
	TEXTUREGROUP_8BitData,
	TEXTUREGROUP_16BitData,
	TEXTUREGROUP_Project01,
	TEXTUREGROUP_Project02,
	TEXTUREGROUP_Project03,
	TEXTUREGROUP_Project04,
	TEXTUREGROUP_Project05,
	TEXTUREGROUP_Project06,
	TEXTUREGROUP_Project07,
	TEXTUREGROUP_Project08,
	TEXTUREGROUP_Project09,
	TEXTUREGROUP_Project10,
	TEXTUREGROUP_Project11,
	TEXTUREGROUP_Project12,
	TEXTUREGROUP_Project13,
	TEXTUREGROUP_Project14,
	TEXTUREGROUP_Project15,
	TEXTUREGROUP_MAX,
};

// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t {
	RTF_R8,
	RTF_RG8,
	RTF_RGBA8,
	RTF_RGBA8_SRGB,
	RTF_R16f,
	RTF_RG16f,
	RTF_RGBA16f,
	RTF_R32f,
	RTF_RG32f,
	RTF_RGBA32f,
	RTF_RGB10A2,
	RTF_MAX,
};

// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t {
	Closed,
	Error,
	Synchronized,
	Synchronizing,
	ETimecodeProviderSynchronizationState_MAX,
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t {
	Forward,
	Backward,
	ETimelineDirection_MAX,
};

// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t {
	TL_TimelineLength,
	TL_LastKeyFrame,
	TL_MAX,
};

// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t {
	T_Original,
	T_TargetMin,
	T_TargetMax,
	MAX,
};

// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t {
	TID_AuthorizeComplete,
	TID_TweetUIComplete,
	TID_RequestComplete,
	TID_MAX,
};

// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t {
	TRM_Get,
	TRM_Post,
	TRM_Delete,
	TRM_MAX,
};

// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t {
	UDSS_UpToDate,
	UDSS_Dirty,
	UDSS_Error,
	UDSS_Duplicate,
	UDSS_MAX,
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t {
	ShortestSide,
	LongestSide,
	Horizontal,
	Vertical,
	Custom,
	EUIScalingRule_MAX,
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t {
	Always,
	NonPointer,
	NavigationOnly,
	Never,
	ERenderFocusRule_MAX,
};

// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t {
	VFCO_Extrude,
	VFCO_Revolve,
	VFCO_MAX,
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t {
	Directional,
	Point,
	EWindSourceType_MAX,
};

// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t {
	None,
	AutoRelease,
	ManualRelease,
	ManualRelease_OnComplete,
	FreeInPool,
	EPSCPoolMethod_MAX,
};

// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t {
	VLM_VolumetricLightmap,
	VLM_SparseVolumeLightingSamples,
	VLM_MAX,
};

// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t {
	VIS_LeastAggressive,
	VIS_ModeratelyAggressive,
	VIS_MostAggressive,
	VIS_Max,
};

// ScriptStruct Engine.DistributionLookupTable
// Size: 0x20 (Inherited: 0x00)
struct FDistributionLookupTable {
	float TimeScale; // 0x00(0x04)
	float TimeBias; // 0x04(0x04)
	struct TArray<float> Values; // 0x08(0x10)
	char Op; // 0x18(0x01)
	char EntryCount; // 0x19(0x01)
	char EntryStride; // 0x1a(0x01)
	char SubEntryStride; // 0x1b(0x01)
	char LockFlag; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.RawDistribution
// Size: 0x20 (Inherited: 0x00)
struct FRawDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.FloatDistribution
// Size: 0x20 (Inherited: 0x00)
struct FFloatDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.VectorDistribution
// Size: 0x20 (Inherited: 0x00)
struct FVectorDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.Vector4Distribution
// Size: 0x20 (Inherited: 0x00)
struct FVector4Distribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.FormatArgumentData
// Size: 0x40 (Inherited: 0x00)
struct FFormatArgumentData {
	struct FString ArgumentName; // 0x00(0x10)
	char ArgumentValueType; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct FText ArgumentValue; // 0x18(0x18)
	int32_t ArgumentValueInt; // 0x30(0x04)
	float ArgumentValueFloat; // 0x34(0x04)
	enum class ETextGender ArgumentValueGender; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.ExpressionInput
// Size: 0x0c (Inherited: 0x00)
struct FExpressionInput {
	int32_t OutputIndex; // 0x00(0x04)
	struct FName ExpressionName; // 0x04(0x08)
};

// ScriptStruct Engine.MaterialAttributesInput
// Size: 0x10 (Inherited: 0x0c)
struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0x0c(0x04)
};

// ScriptStruct Engine.ExpressionOutput
// Size: 0x08 (Inherited: 0x00)
struct FExpressionOutput {
	struct FName OutputName; // 0x00(0x08)
};

// ScriptStruct Engine.MaterialInput
// Size: 0x0c (Inherited: 0x00)
struct FMaterialInput {
	int32_t OutputIndex; // 0x00(0x04)
	struct FName ExpressionName; // 0x04(0x08)
};

// ScriptStruct Engine.ColorMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FColorMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.ScalarMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FScalarMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.ShadingModelMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FShadingModelMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.VectorMaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FVectorMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.Vector2MaterialInput
// Size: 0x0c (Inherited: 0x0c)
struct FVector2MaterialInput : FMaterialInput {
};

// ScriptStruct Engine.HitResult
// Size: 0x88 (Inherited: 0x00)
struct FHitResult {
	char bBlockingHit : 1; // 0x00(0x01)
	char bStartPenetrating : 1; // 0x00(0x01)
	char UnknownData_0_2 : 6; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t FaceIndex; // 0x04(0x04)
	float Time; // 0x08(0x04)
	float Distance; // 0x0c(0x04)
	struct FVector_NetQuantize Location; // 0x10(0x0c)
	struct FVector_NetQuantize ImpactPoint; // 0x1c(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x28(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0x0c)
	struct FVector_NetQuantize TraceStart; // 0x40(0x0c)
	struct FVector_NetQuantize TraceEnd; // 0x4c(0x0c)
	float PenetrationDepth; // 0x58(0x04)
	int32_t Item; // 0x5c(0x04)
	struct FWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; // 0x60(0x08)
	struct FWeakObjectPtr<struct AActor> Actor; // 0x68(0x08)
	struct FWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x70(0x08)
	struct FName BoneName; // 0x78(0x08)
	struct FName MyBoneName; // 0x80(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize : FVector {
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantizeNormal : FVector {
};

// ScriptStruct Engine.BranchingPointNotifyPayload
// Size: 0x20 (Inherited: 0x00)
struct FBranchingPointNotifyPayload {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x00)
struct FSimpleMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FName MemberName; // 0x08(0x08)
	struct FGuid MemberGuid; // 0x10(0x10)
};

// ScriptStruct Engine.TickFunction
// Size: 0x28 (Inherited: 0x00)
struct FTickFunction {
	char UnknownData_0[0x8]; // 0x00(0x08)
	char TickGroup; // 0x08(0x01)
	char EndTickGroup; // 0x09(0x01)
	char bTickEvenWhenPaused : 1; // 0x0a(0x01)
	char bCanEverTick : 1; // 0x0a(0x01)
	char bStartWithTickEnabled : 1; // 0x0a(0x01)
	char bAllowTickOnDedicatedServer : 1; // 0x0a(0x01)
	char UnknownData_A_4 : 4; // 0x0a(0x01)
	char UnknownData_B[0x1]; // 0x0b(0x01)
	float TickInterval; // 0x0c(0x04)
	char UnknownData_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Engine.ActorComponentTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorComponentTickFunction : FTickFunction {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.SubtitleCue
// Size: 0x20 (Inherited: 0x00)
struct FSubtitleCue {
	struct FText Text; // 0x00(0x18)
	float Time; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InterpControlPoint
// Size: 0x1c (Inherited: 0x00)
struct FInterpControlPoint {
	struct FVector PositionControlPoint; // 0x00(0x0c)
	bool bPositionIsRelative; // 0x0c(0x01)
	char UnknownData_D[0xf]; // 0x0d(0x0f)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// Size: 0x38 (Inherited: 0x00)
struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FPlatformInterfaceData Data; // 0x08(0x30)
};

// ScriptStruct Engine.PlatformInterfaceData
// Size: 0x30 (Inherited: 0x00)
struct FPlatformInterfaceData {
	struct FName DataName; // 0x00(0x08)
	char Type; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t IntValue; // 0x0c(0x04)
	float FloatValue; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* ObjectValue; // 0x28(0x08)
};

// ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x00)
struct FDebugFloatHistory {
	struct TArray<float> Samples; // 0x00(0x10)
	float MaxSamples; // 0x10(0x04)
	float MinValue; // 0x14(0x04)
	float MaxValue; // 0x18(0x04)
	bool bAutoAdjustMinMax; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.LatentActionInfo
// Size: 0x18 (Inherited: 0x00)
struct FLatentActionInfo {
	int32_t Linkage; // 0x00(0x04)
	int32_t UUID; // 0x04(0x04)
	struct FName ExecutionFunction; // 0x08(0x08)
	struct UObject* CallbackTarget; // 0x10(0x08)
};

// ScriptStruct Engine.TimerHandle
// Size: 0x08 (Inherited: 0x00)
struct FTimerHandle {
	uint64_t Handle; // 0x00(0x08)
};

// ScriptStruct Engine.CollisionProfileName
// Size: 0x08 (Inherited: 0x00)
struct FCollisionProfileName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Engine.GenericStruct
// Size: 0x04 (Inherited: 0x00)
struct FGenericStruct {
	int32_t Data; // 0x00(0x04)
};

// ScriptStruct Engine.UserActivity
// Size: 0x18 (Inherited: 0x00)
struct FUserActivity {
	struct FString ActionName; // 0x00(0x10)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.RepAttachment
// Size: 0x40 (Inherited: 0x00)
struct FRepAttachment {
	struct AActor* AttachParent; // 0x00(0x08)
	struct FVector_NetQuantize100 LocationOffset; // 0x08(0x0c)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0x0c)
	struct FRotator RotationOffset; // 0x20(0x0c)
	struct FName AttachSocket; // 0x2c(0x08)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct USceneComponent* AttachComponent; // 0x38(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize100 : FVector {
};

// ScriptStruct Engine.RepMovement
// Size: 0x34 (Inherited: 0x00)
struct FRepMovement {
	struct FVector LinearVelocity; // 0x00(0x0c)
	struct FVector AngularVelocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	char bSimulatedPhysicSleep : 1; // 0x30(0x01)
	char bRepPhysics : 1; // 0x30(0x01)
	char UnknownData_30_2 : 6; // 0x30(0x01)
	enum class EVectorQuantization LocationQuantizationLevel; // 0x31(0x01)
	enum class EVectorQuantization VelocityQuantizationLevel; // 0x32(0x01)
	enum class ERotatorQuantization RotationQuantizationLevel; // 0x33(0x01)
};

// ScriptStruct Engine.ActorTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorTickFunction : FTickFunction {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x38 (Inherited: 0x00)
struct FRootMotionSourceGroup {
	char UnknownData_0[0x28]; // 0x00(0x28)
	char bHasAdditiveSources : 1; // 0x28(0x01)
	char bHasOverrideSources : 1; // 0x28(0x01)
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28(0x01)
	char bIsAdditiveVelocityApplied : 1; // 0x28(0x01)
	char UnknownData_28_4 : 4; // 0x28(0x01)
	struct FRootMotionSourceSettings LastAccumulatedSettings; // 0x29(0x01)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	struct FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c(0x0c)
};

// ScriptStruct Engine.Vector_NetQuantize10
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize10 : FVector {
};

// ScriptStruct Engine.RootMotionSourceSettings
// Size: 0x01 (Inherited: 0x00)
struct FRootMotionSourceSettings {
	char Flags; // 0x00(0x01)
};

// ScriptStruct Engine.RepRootMotionMontage
// Size: 0x98 (Inherited: 0x00)
struct FRepRootMotionMontage {
	bool bIsActive; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
	float Position; // 0x10(0x04)
	struct FVector_NetQuantize100 Location; // 0x14(0x0c)
	struct FRotator Rotation; // 0x20(0x0c)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UPrimitiveComponent* MovementBase; // 0x30(0x08)
	struct FName MovementBaseBoneName; // 0x38(0x08)
	bool bRelativePosition; // 0x40(0x01)
	bool bRelativeRotation; // 0x41(0x01)
	char UnknownData_42[0x6]; // 0x42(0x06)
	struct FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48(0x38)
	struct FVector_NetQuantize10 Acceleration; // 0x80(0x0c)
	struct FVector_NetQuantize10 LinearVelocity; // 0x8c(0x0c)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// Size: 0xa0 (Inherited: 0x00)
struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FRepRootMotionMontage RootMotion; // 0x08(0x98)
};

// ScriptStruct Engine.RootMotionMovementParams
// Size: 0x40 (Inherited: 0x00)
struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float BlendWeight; // 0x04(0x04)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform RootMotionTransform; // 0x10(0x30)
};

// ScriptStruct Engine.BasedMovementInfo
// Size: 0x30 (Inherited: 0x00)
struct FBasedMovementInfo {
	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector_NetQuantize100 Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	bool bServerHasBaseComponent; // 0x28(0x01)
	bool bRelativeRotation; // 0x29(0x01)
	bool bServerHasVelocity; // 0x2a(0x01)
	char UnknownData_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x28 (Inherited: 0x01)
struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	char UnknownData_1[0x17]; // 0x01(0x17)
	struct TArray<char> ReplicationBytes; // 0x18(0x10)
};

// ScriptStruct Engine.ForceFeedbackParameters
// Size: 0x0c (Inherited: 0x00)
struct FForceFeedbackParameters {
	struct FName Tag; // 0x00(0x08)
	bool bLooping; // 0x08(0x01)
	bool bIgnoreTimeDilation; // 0x09(0x01)
	bool bPlayWhilePaused; // 0x0a(0x01)
	char UnknownData_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct Engine.ViewTargetTransitionParams
// Size: 0x10 (Inherited: 0x00)
struct FViewTargetTransitionParams {
	float BlendTime; // 0x00(0x04)
	char BlendFunction; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	float BlendExp; // 0x08(0x04)
	char bLockOutgoing : 1; // 0x0c(0x01)
	char UnknownData_C_1 : 7; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// Size: 0x10 (Inherited: 0x00)
struct FUpdateLevelStreamingLevelStatus {
	struct FName PackageName; // 0x00(0x08)
	int32_t LODIndex; // 0x08(0x04)
	char bNewShouldBeLoaded : 1; // 0x0c(0x01)
	char bNewShouldBeVisible : 1; // 0x0c(0x01)
	char bNewShouldBlockOnLoad : 1; // 0x0c(0x01)
	char UnknownData_C_3 : 5; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// Size: 0x14 (Inherited: 0x00)
struct FUpdateLevelVisibilityLevelInfo {
	struct FName PackageName; // 0x00(0x08)
	struct FName Filename; // 0x08(0x08)
	char bIsVisible : 1; // 0x10(0x01)
	char UnknownData_10_1 : 7; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// Size: 0x18 (Inherited: 0x00)
struct FActiveForceFeedbackEffect {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.WalkableSlopeOverride
// Size: 0x10 (Inherited: 0x00)
struct FWalkableSlopeOverride {
	char WalkableSlopeBehavior; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float WalkableSlopeAngle; // 0x04(0x04)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.BodyInstance
// Size: 0x110 (Inherited: 0x00)
struct FBodyInstance {
	char UnknownData_0[0x6]; // 0x00(0x06)
	char ObjectType; // 0x06(0x01)
	char UnknownData_7[0x1]; // 0x07(0x01)
	char CollisionEnabled; // 0x08(0x01)
	char UnknownData_9[0x1]; // 0x09(0x01)
	enum class ESleepFamily SleepFamily; // 0x0a(0x01)
	char DOFMode; // 0x0b(0x01)
	char bUseCCD : 1; // 0x0c(0x01)
	char bIgnoreAnalyticCollisions : 1; // 0x0c(0x01)
	char bNotifyRigidBodyCollision : 1; // 0x0c(0x01)
	char UnknownData_C_3 : 1; // 0x0c(0x01)
	char bSimulatePhysics : 1; // 0x0c(0x01)
	char bOverrideMass : 1; // 0x0c(0x01)
	char bEnableGravity : 1; // 0x0c(0x01)
	char bAutoWeld : 1; // 0x0c(0x01)
	char bStartAwake : 1; // 0x0d(0x01)
	char bGenerateWakeEvents : 1; // 0x0d(0x01)
	char bUpdateMassWhenScaleChanges : 1; // 0x0d(0x01)
	char bLockTranslation : 1; // 0x0d(0x01)
	char bLockRotation : 1; // 0x0d(0x01)
	char bLockXTranslation : 1; // 0x0d(0x01)
	char bLockYTranslation : 1; // 0x0d(0x01)
	char bLockZTranslation : 1; // 0x0d(0x01)
	char bLockXRotation : 1; // 0x0e(0x01)
	char bLockYRotation : 1; // 0x0e(0x01)
	char bLockZRotation : 1; // 0x0e(0x01)
	char bOverrideMaxAngularVelocity : 1; // 0x0e(0x01)
	char UnknownData_E_4 : 2; // 0x0e(0x01)
	char bOverrideMaxDepenetrationVelocity : 1; // 0x0e(0x01)
	char bOverrideWalkableSlopeOnInstance : 1; // 0x0e(0x01)
	char bInterpolateWhenSubStepping : 1; // 0x0f(0x01)
	char UnknownData_F_1 : 7; // 0x0f(0x01)
	char UnknownData_10[0xc]; // 0x10(0x0c)
	struct FName CollisionProfileName; // 0x1c(0x08)
	char PositionSolverIterationCount; // 0x24(0x01)
	char VelocitySolverIterationCount; // 0x25(0x01)
	char UnknownData_26[0x2]; // 0x26(0x02)
	struct FCollisionResponse CollisionResponses; // 0x28(0x30)
	float MaxDepenetrationVelocity; // 0x58(0x04)
	float MassInKgOverride; // 0x5c(0x04)
	char UnknownData_60[0x8]; // 0x60(0x08)
	float LinearDamping; // 0x68(0x04)
	float AngularDamping; // 0x6c(0x04)
	struct FVector CustomDOFPlaneNormal; // 0x70(0x0c)
	struct FVector COMNudge; // 0x7c(0x0c)
	float MassScale; // 0x88(0x04)
	struct FVector InertiaTensorScale; // 0x8c(0x0c)
	char UnknownData_98[0x10]; // 0x98(0x10)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0xa8(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0xb8(0x08)
	float MaxAngularVelocity; // 0xc0(0x04)
	float CustomSleepThresholdMultiplier; // 0xc4(0x04)
	float StabilizationThresholdMultiplier; // 0xc8(0x04)
	float PhysicsBlendWeight; // 0xcc(0x04)
	char UnknownData_D0[0x40]; // 0xd0(0x40)
};

// ScriptStruct Engine.CollisionResponse
// Size: 0x30 (Inherited: 0x00)
struct FCollisionResponse {
	struct FCollisionResponseContainer ResponseToChannels; // 0x00(0x20)
	struct TArray<struct FResponseChannel> ResponseArray; // 0x20(0x10)
};

// ScriptStruct Engine.ResponseChannel
// Size: 0x0c (Inherited: 0x00)
struct FResponseChannel {
	struct FName Channel; // 0x00(0x08)
	char Response; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x00)
struct FCollisionResponseContainer {
	char WorldStatic; // 0x00(0x01)
	char WorldDynamic; // 0x01(0x01)
	char Pawn; // 0x02(0x01)
	char Visibility; // 0x03(0x01)
	char Camera; // 0x04(0x01)
	char PhysicsBody; // 0x05(0x01)
	char Vehicle; // 0x06(0x01)
	char Destructible; // 0x07(0x01)
	char EngineTraceChannel1; // 0x08(0x01)
	char EngineTraceChannel2; // 0x09(0x01)
	char EngineTraceChannel3; // 0x0a(0x01)
	char EngineTraceChannel4; // 0x0b(0x01)
	char EngineTraceChannel5; // 0x0c(0x01)
	char EngineTraceChannel6; // 0x0d(0x01)
	char GameTraceChannel1; // 0x0e(0x01)
	char GameTraceChannel2; // 0x0f(0x01)
	char GameTraceChannel3; // 0x10(0x01)
	char GameTraceChannel4; // 0x11(0x01)
	char GameTraceChannel5; // 0x12(0x01)
	char GameTraceChannel6; // 0x13(0x01)
	char GameTraceChannel7; // 0x14(0x01)
	char GameTraceChannel8; // 0x15(0x01)
	char GameTraceChannel9; // 0x16(0x01)
	char GameTraceChannel10; // 0x17(0x01)
	char GameTraceChannel11; // 0x18(0x01)
	char GameTraceChannel12; // 0x19(0x01)
	char GameTraceChannel13; // 0x1a(0x01)
	char GameTraceChannel14; // 0x1b(0x01)
	char GameTraceChannel15; // 0x1c(0x01)
	char GameTraceChannel16; // 0x1d(0x01)
	char GameTraceChannel17; // 0x1e(0x01)
	char GameTraceChannel18; // 0x1f(0x01)
};

// ScriptStruct Engine.CustomPrimitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomPrimitiveData {
	struct TArray<float> Data; // 0x00(0x10)
};

// ScriptStruct Engine.LightingChannels
// Size: 0x01 (Inherited: 0x00)
struct FLightingChannels {
	char bChannel0 : 1; // 0x00(0x01)
	char bChannel1 : 1; // 0x00(0x01)
	char bChannel2 : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
};

// ScriptStruct Engine.FastArraySerializer
// Size: 0x108 (Inherited: 0x00)
struct FFastArraySerializer {
	char UnknownData_0[0x54]; // 0x00(0x54)
	int32_t ArrayReplicationKey; // 0x54(0x04)
	char UnknownData_58[0xa8]; // 0x58(0xa8)
	enum class EFastArraySerializerDeltaFlags DeltaFlags; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)
};

// ScriptStruct Engine.FastArraySerializerItem
// Size: 0x0c (Inherited: 0x00)
struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x00(0x04)
	int32_t ReplicationKey; // 0x04(0x04)
	int32_t MostRecentArrayReplicationKey; // 0x08(0x04)
};

// ScriptStruct Engine.DebugTextInfo
// Size: 0x60 (Inherited: 0x00)
struct FDebugTextInfo {
	struct AActor* SrcActor; // 0x00(0x08)
	struct FVector SrcActorOffset; // 0x08(0x0c)
	struct FVector SrcActorDesiredOffset; // 0x14(0x0c)
	struct FString DebugText; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x04)
	float Duration; // 0x34(0x04)
	struct FColor TextColor; // 0x38(0x04)
	char bAbsoluteLocation : 1; // 0x3c(0x01)
	char bKeepAttachedToActor : 1; // 0x3c(0x01)
	char bDrawShadow : 1; // 0x3c(0x01)
	char UnknownData_3C_3 : 5; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	struct FVector OrigActorLocation; // 0x40(0x0c)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct UFont* Font; // 0x50(0x08)
	float FontScale; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Engine.OverlapResult
// Size: 0x18 (Inherited: 0x00)
struct FOverlapResult {
	struct FWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct FWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x08(0x08)
	char UnknownData_10[0x4]; // 0x10(0x04)
	char bBlockingHit : 1; // 0x14(0x01)
	char UnknownData_14_1 : 7; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Engine.TableRowBase
// Size: 0x08 (Inherited: 0x00)
struct FTableRowBase {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.KeyHandleLookupTable
// Size: 0x60 (Inherited: 0x00)
struct FKeyHandleLookupTable {
	char UnknownData_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.PerPlatformFloat
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformFloat {
	float Default; // 0x00(0x04)
};

// ScriptStruct Engine.PerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformInt {
	int32_t Default; // 0x00(0x04)
};

// ScriptStruct Engine.PerPlatformBool
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformBool {
	bool Default; // 0x00(0x01)
};

// ScriptStruct Engine.AnimInstanceProxy
// Size: 0x6e0 (Inherited: 0x00)
struct FAnimInstanceProxy {
	char UnknownData_0[0x6e0]; // 0x00(0x6e0)
};

// ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x88 (Inherited: 0x00)
struct FRuntimeFloatCurve {
	struct FRichCurve EditorCurveData; // 0x00(0x80)
	struct UCurveFloat* ExternalCurve; // 0x80(0x08)
};

// ScriptStruct Engine.IndexedCurve
// Size: 0x68 (Inherited: 0x00)
struct FIndexedCurve {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x08(0x60)
};

// ScriptStruct Engine.KeyHandleMap
// Size: 0x60 (Inherited: 0x00)
struct FKeyHandleMap {
	char UnknownData_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.RealCurve
// Size: 0x70 (Inherited: 0x68)
struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68(0x04)
	char PreInfinityExtrap; // 0x6c(0x01)
	char PostInfinityExtrap; // 0x6d(0x01)
	char UnknownData_6E[0x2]; // 0x6e(0x02)
};

// ScriptStruct Engine.RichCurve
// Size: 0x80 (Inherited: 0x70)
struct FRichCurve : FRealCurve {
	struct TArray<struct FRichCurveKey> Keys; // 0x70(0x10)
};

// ScriptStruct Engine.RichCurveKey
// Size: 0x1c (Inherited: 0x00)
struct FRichCurveKey {
	char InterpMode; // 0x00(0x01)
	char TangentMode; // 0x01(0x01)
	char TangentWeightMode; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
	float ArriveTangent; // 0x0c(0x04)
	float ArriveTangentWeight; // 0x10(0x04)
	float LeaveTangent; // 0x14(0x04)
	float LeaveTangentWeight; // 0x18(0x04)
};

// ScriptStruct Engine.AnimNode_Base
// Size: 0x10 (Inherited: 0x00)
struct FAnimNode_Base {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	int32_t GroupIndex; // 0x10(0x04)
	char GroupRole; // 0x14(0x01)
	bool bIgnoreForRelevancyTest; // 0x15(0x01)
	char UnknownData_16[0x2]; // 0x16(0x02)
	float BlendWeight; // 0x18(0x04)
	float InternalTimeAccumulator; // 0x1c(0x04)
	char UnknownData_20[0x10]; // 0x20(0x10)
};

// ScriptStruct Engine.PoseLinkBase
// Size: 0x10 (Inherited: 0x00)
struct FPoseLinkBase {
	int32_t LinkID; // 0x00(0x04)
	char UnknownData_4[0xc]; // 0x04(0x0c)
};

// ScriptStruct Engine.PoseLink
// Size: 0x10 (Inherited: 0x10)
struct FPoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.InputScaleBiasClamp
// Size: 0x30 (Inherited: 0x00)
struct FInputScaleBiasClamp {
	bool bMapRange; // 0x00(0x01)
	bool bClampResult; // 0x01(0x01)
	bool bInterpResult; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	struct FInputRange InRange; // 0x04(0x08)
	struct FInputRange OutRange; // 0x0c(0x08)
	float Scale; // 0x14(0x04)
	float Bias; // 0x18(0x04)
	float ClampMin; // 0x1c(0x04)
	float ClampMax; // 0x20(0x04)
	float InterpSpeedIncreasing; // 0x24(0x04)
	float InterpSpeedDecreasing; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.InputRange
// Size: 0x08 (Inherited: 0x00)
struct FInputRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Engine.InputAlphaBoolBlend
// Size: 0x48 (Inherited: 0x00)
struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x00(0x04)
	float BlendOutTime; // 0x04(0x04)
	enum class EAlphaBlendOption BlendOption; // 0x08(0x01)
	bool bInitialized; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
	struct UCurveFloat* CustomCurve; // 0x10(0x08)
	struct FAlphaBlend AlphaBlend; // 0x18(0x30)
};

// ScriptStruct Engine.AlphaBlend
// Size: 0x30 (Inherited: 0x00)
struct FAlphaBlend {
	struct UCurveFloat* CustomCurve; // 0x00(0x08)
	float BlendTime; // 0x08(0x04)
	char UnknownData_C[0x18]; // 0x0c(0x18)
	enum class EAlphaBlendOption BlendOption; // 0x24(0x01)
	char UnknownData_25[0xb]; // 0x25(0x0b)
};

// ScriptStruct Engine.InputScaleBias
// Size: 0x08 (Inherited: 0x00)
struct FInputScaleBias {
	float Scale; // 0x00(0x04)
	float Bias; // 0x04(0x04)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x10 (Inherited: 0x10)
struct FComponentSpacePoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.BoneReference
// Size: 0x10 (Inherited: 0x00)
struct FBoneReference {
	struct FName BoneName; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x08 (Inherited: 0x00)
struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x00(0x04)
	float BlendWeight; // 0x04(0x04)
};

// ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x00)
struct FInputBlendPose {
	struct TArray<struct FBranchFilter> BranchFilters; // 0x00(0x10)
};

// ScriptStruct Engine.BranchFilter
// Size: 0x0c (Inherited: 0x00)
struct FBranchFilter {
	struct FName BoneName; // 0x00(0x08)
	int32_t BlendDepth; // 0x08(0x04)
};

// ScriptStruct Engine.PoseSnapshot
// Size: 0x38 (Inherited: 0x00)
struct FPoseSnapshot {
	struct TArray<struct FTransform> LocalTransforms; // 0x00(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x08)
	struct FName SnapshotName; // 0x28(0x08)
	bool bIsValid; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Engine.SolverIterations
// Size: 0x18 (Inherited: 0x00)
struct FSolverIterations {
	int32_t SolverIterations; // 0x00(0x04)
	int32_t JointIterations; // 0x04(0x04)
	int32_t CollisionIterations; // 0x08(0x04)
	int32_t SolverPushOutIterations; // 0x0c(0x04)
	int32_t JointPushOutIterations; // 0x10(0x04)
	int32_t CollisionPushOutIterations; // 0x14(0x04)
};

// ScriptStruct Engine.AnimNode_Root
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_Root : FAnimNode_Base {
	struct FPoseLink Result; // 0x10(0x10)
	struct FName Name; // 0x20(0x08)
	struct FName Group; // 0x28(0x08)
};

// ScriptStruct Engine.AnimCurveParam
// Size: 0x0c (Inherited: 0x00)
struct FAnimCurveParam {
	struct FName Name; // 0x00(0x08)
	char UnknownData_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Engine.ActorComponentInstanceData
// Size: 0x58 (Inherited: 0x00)
struct FActorComponentInstanceData {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UObject* SourceComponentTemplate; // 0x08(0x08)
	enum class EComponentCreationMethod SourceComponentCreationMethod; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	int32_t SourceComponentTypeSerializedIndex; // 0x14(0x04)
	struct TArray<char> SavedProperties; // 0x18(0x10)
	struct TArray<struct FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28(0x10)
	struct TArray<struct UObject*> ReferencedObjects; // 0x38(0x10)
	struct TArray<struct FName> ReferencedNames; // 0x48(0x10)
};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
// Size: 0x10 (Inherited: 0x00)
struct FActorComponentDuplicatedObjectData {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.SceneComponentInstanceData
// Size: 0xa8 (Inherited: 0x58)
struct FSceneComponentInstanceData : FActorComponentInstanceData {
	struct TMap<struct USceneComponent*, struct FTransform> AttachedInstanceComponents; // 0x58(0x50)
};

// ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FDirectoryPath {
	struct FString Path; // 0x00(0x10)
};

// ScriptStruct Engine.KAggregateGeom
// Size: 0x58 (Inherited: 0x00)
struct FKAggregateGeom {
	struct TArray<struct FKSphereElem> SphereElems; // 0x00(0x10)
	struct TArray<struct FKBoxElem> BoxElems; // 0x10(0x10)
	struct TArray<struct FKSphylElem> SphylElems; // 0x20(0x10)
	struct TArray<struct FKConvexElem> ConvexElems; // 0x30(0x10)
	struct TArray<struct FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40(0x10)
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.KShapeElem
// Size: 0x30 (Inherited: 0x00)
struct FKShapeElem {
	char UnknownData_0[0x8]; // 0x00(0x08)
	float RestOffset; // 0x08(0x04)
	struct FName Name; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
	char bContributeToMass : 1; // 0x18(0x01)
	char UnknownData_18_1 : 7; // 0x18(0x01)
	char UnknownData_19[0x17]; // 0x19(0x17)
};

// ScriptStruct Engine.KTaperedCapsuleElem
// Size: 0x58 (Inherited: 0x30)
struct FKTaperedCapsuleElem : FKShapeElem {
	struct FVector Center; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Radius0; // 0x48(0x04)
	float Radius1; // 0x4c(0x04)
	float Length; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Engine.KConvexElem
// Size: 0xb0 (Inherited: 0x30)
struct FKConvexElem : FKShapeElem {
	struct TArray<struct FVector> VertexData; // 0x30(0x10)
	struct TArray<int32_t> IndexData; // 0x40(0x10)
	struct FBox ElemBox; // 0x50(0x1c)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct FTransform Transform; // 0x70(0x30)
	char UnknownData_A0[0x10]; // 0xa0(0x10)
};

// ScriptStruct Engine.KSphylElem
// Size: 0x50 (Inherited: 0x30)
struct FKSphylElem : FKShapeElem {
	struct FVector Center; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Radius; // 0x48(0x04)
	float Length; // 0x4c(0x04)
};

// ScriptStruct Engine.KBoxElem
// Size: 0x58 (Inherited: 0x30)
struct FKBoxElem : FKShapeElem {
	struct FVector Center; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float X; // 0x48(0x04)
	float Y; // 0x4c(0x04)
	float Z; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Engine.KSphereElem
// Size: 0x40 (Inherited: 0x30)
struct FKSphereElem : FKShapeElem {
	struct FVector Center; // 0x30(0x0c)
	float Radius; // 0x3c(0x04)
};

// ScriptStruct Engine.AnimationGroupReference
// Size: 0x0c (Inherited: 0x00)
struct FAnimationGroupReference {
	struct FName GroupName; // 0x00(0x08)
	char GroupRole; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.AnimGroupInstance
// Size: 0x70 (Inherited: 0x00)
struct FAnimGroupInstance {
	char UnknownData_0[0x70]; // 0x00(0x70)
};

// ScriptStruct Engine.AnimTickRecord
// Size: 0x48 (Inherited: 0x00)
struct FAnimTickRecord {
	struct UAnimationAsset* SourceAsset; // 0x00(0x08)
	char UnknownData_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// Size: 0x14 (Inherited: 0x00)
struct FMarkerSyncAnimPosition {
	struct FName PreviousMarkerName; // 0x00(0x08)
	struct FName NextMarkerName; // 0x08(0x08)
	float PositionBetweenMarkers; // 0x10(0x04)
};

// ScriptStruct Engine.BlendFilter
// Size: 0x78 (Inherited: 0x00)
struct FBlendFilter {
	char UnknownData_0[0x78]; // 0x00(0x78)
};

// ScriptStruct Engine.BlendSampleData
// Size: 0x40 (Inherited: 0x00)
struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* Animation; // 0x08(0x08)
	float TotalWeight; // 0x10(0x04)
	float Time; // 0x14(0x04)
	float PreviousTime; // 0x18(0x04)
	float SamplePlayRate; // 0x1c(0x04)
	char UnknownData_20[0x20]; // 0x20(0x20)
};

// ScriptStruct Engine.AnimationRecordingSettings
// Size: 0x10 (Inherited: 0x00)
struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x00(0x01)
	bool bRemoveRootAnimation; // 0x01(0x01)
	bool bAutoSaveAsset; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	float SampleRate; // 0x04(0x04)
	float Length; // 0x08(0x04)
	char InterpMode; // 0x0c(0x01)
	char TangentMode; // 0x0d(0x01)
	char UnknownData_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct Engine.ComponentSpacePose
// Size: 0x20 (Inherited: 0x00)
struct FComponentSpacePose {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.LocalSpacePose
// Size: 0x20 (Inherited: 0x00)
struct FLocalSpacePose {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.NamedTransform
// Size: 0x40 (Inherited: 0x00)
struct FNamedTransform {
	struct FTransform Value; // 0x00(0x30)
	struct FName Name; // 0x30(0x08)
	char UnknownData_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Engine.NamedColor
// Size: 0x0c (Inherited: 0x00)
struct FNamedColor {
	struct FColor Value; // 0x00(0x04)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct Engine.NamedVector
// Size: 0x14 (Inherited: 0x00)
struct FNamedVector {
	struct FVector Value; // 0x00(0x0c)
	struct FName Name; // 0x0c(0x08)
};

// ScriptStruct Engine.NamedFloat
// Size: 0x0c (Inherited: 0x00)
struct FNamedFloat {
	float Value; // 0x00(0x04)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// Size: 0x18 (Inherited: 0x00)
struct FAnimParentNodeAssetOverride {
	struct UAnimationAsset* NewAsset; // 0x00(0x08)
	struct FGuid ParentNodeGuid; // 0x08(0x10)
};

// ScriptStruct Engine.AnimGroupInfo
// Size: 0x18 (Inherited: 0x00)
struct FAnimGroupInfo {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintDebugData {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.AnimationFrameSnapshot
// Size: 0x01 (Inherited: 0x00)
struct FAnimationFrameSnapshot {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.StateMachineDebugData
// Size: 0xb0 (Inherited: 0x00)
struct FStateMachineDebugData {
	char UnknownData_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.StateMachineStateDebugData
// Size: 0x10 (Inherited: 0x00)
struct FStateMachineStateDebugData {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.AnimBlueprintFunctionData
// Size: 0x40 (Inherited: 0x00)
struct FAnimBlueprintFunctionData {
	FieldPathProperty OutputPoseNodeProperty; // 0x00(0x20)
	struct TArray<FieldPathProperty> InputPoseNodeProperties; // 0x20(0x10)
	struct TArray<FieldPathProperty> InputProperties; // 0x30(0x10)
};

// ScriptStruct Engine.AnimGraphBlendOptions
// Size: 0x08 (Inherited: 0x00)
struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x00(0x04)
	float BlendOutTime; // 0x04(0x04)
};

// ScriptStruct Engine.GraphAssetPlayerInformation
// Size: 0x10 (Inherited: 0x00)
struct FGraphAssetPlayerInformation {
	struct TArray<int32_t> PlayerNodeIndices; // 0x00(0x10)
};

// ScriptStruct Engine.CachedPoseIndices
// Size: 0x10 (Inherited: 0x00)
struct FCachedPoseIndices {
	struct TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x00(0x10)
};

// ScriptStruct Engine.AnimBlueprintFunction
// Size: 0x68 (Inherited: 0x00)
struct FAnimBlueprintFunction {
	struct FName Name; // 0x00(0x08)
	struct FName Group; // 0x08(0x08)
	int32_t OutputPoseNodeIndex; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FName> InputPoseNames; // 0x18(0x10)
	struct TArray<int32_t> InputPoseNodeIndices; // 0x28(0x10)
	char UnknownData_38[0x28]; // 0x38(0x28)
	bool bImplemented; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Engine.AnimTrack
// Size: 0x10 (Inherited: 0x00)
struct FAnimTrack {
	struct TArray<struct FAnimSegment> AnimSegments; // 0x00(0x10)
};

// ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x00)
struct FAnimSegment {
	struct UAnimSequenceBase* AnimReference; // 0x00(0x08)
	float StartPos; // 0x08(0x04)
	float AnimStartTime; // 0x0c(0x04)
	float AnimEndTime; // 0x10(0x04)
	float AnimPlayRate; // 0x14(0x04)
	int32_t LoopingCount; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.RootMotionExtractionStep
// Size: 0x10 (Inherited: 0x00)
struct FRootMotionExtractionStep {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float StartPosition; // 0x08(0x04)
	float EndPosition; // 0x0c(0x04)
};

// ScriptStruct Engine.AnimationErrorStats
// Size: 0x10 (Inherited: 0x00)
struct FAnimationErrorStats {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.RawCurveTracks
// Size: 0x10 (Inherited: 0x00)
struct FRawCurveTracks {
	struct TArray<struct FFloatCurve> FloatCurves; // 0x00(0x10)
};

// ScriptStruct Engine.AnimCurveBase
// Size: 0x18 (Inherited: 0x00)
struct FAnimCurveBase {
	struct FName LastObservedName; // 0x00(0x08)
	struct FSmartName Name; // 0x08(0x0c)
	int32_t CurveTypeFlags; // 0x14(0x04)
};

// ScriptStruct Engine.SmartName
// Size: 0x0c (Inherited: 0x00)
struct FSmartName {
	struct FName DisplayName; // 0x00(0x08)
	char UnknownData_8[0x4]; // 0x08(0x04)
};

// ScriptStruct Engine.FloatCurve
// Size: 0x98 (Inherited: 0x18)
struct FFloatCurve : FAnimCurveBase {
	struct FRichCurve FloatCurve; // 0x18(0x80)
};

// ScriptStruct Engine.TransformCurve
// Size: 0x4e0 (Inherited: 0x18)
struct FTransformCurve : FAnimCurveBase {
	struct FVectorCurve TranslationCurve; // 0x18(0x198)
	struct FVectorCurve RotationCurve; // 0x1b0(0x198)
	struct FVectorCurve ScaleCurve; // 0x348(0x198)
};

// ScriptStruct Engine.VectorCurve
// Size: 0x198 (Inherited: 0x18)
struct FVectorCurve : FAnimCurveBase {
	struct FRichCurve FloatCurves[0x3]; // 0x18(0x180)
};

// ScriptStruct Engine.SlotEvaluationPose
// Size: 0x40 (Inherited: 0x00)
struct FSlotEvaluationPose {
	char AdditiveType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
	char UnknownData_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Engine.A2Pose
// Size: 0x10 (Inherited: 0x00)
struct FA2Pose {
	struct TArray<struct FTransform> Bones; // 0x00(0x10)
};

// ScriptStruct Engine.A2CSPose
// Size: 0x28 (Inherited: 0x10)
struct FA2CSPose : FA2Pose {
	char UnknownData_10[0x8]; // 0x10(0x08)
	struct TArray<char> ComponentSpaceFlags; // 0x18(0x10)
};

// ScriptStruct Engine.QueuedDrawDebugItem
// Size: 0x68 (Inherited: 0x00)
struct FQueuedDrawDebugItem {
	char ItemType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FVector StartLoc; // 0x04(0x0c)
	struct FVector EndLoc; // 0x10(0x0c)
	struct FVector Center; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	float Radius; // 0x34(0x04)
	float Size; // 0x38(0x04)
	int32_t Segments; // 0x3c(0x04)
	struct FColor Color; // 0x40(0x04)
	bool bPersistentLines; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	float LifeTime; // 0x48(0x04)
	float Thickness; // 0x4c(0x04)
	struct FString Message; // 0x50(0x10)
	struct FVector2D TextScale; // 0x60(0x08)
};

// ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x00)
struct FAnimLinkableElement {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UAnimMontage* LinkedMontage; // 0x08(0x08)
	int32_t SlotIndex; // 0x10(0x04)
	int32_t SegmentIndex; // 0x14(0x04)
	char LinkMethod; // 0x18(0x01)
	char CachedLinkMethod; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
	float SegmentBeginTime; // 0x1c(0x04)
	float SegmentLength; // 0x20(0x04)
	float LinkValue; // 0x24(0x04)
	struct UAnimSequenceBase* LinkedSequence; // 0x28(0x08)
};

// ScriptStruct Engine.AnimMontageInstance
// Size: 0x1b0 (Inherited: 0x00)
struct FAnimMontageInstance {
	struct UAnimMontage* Montage; // 0x00(0x08)
	char UnknownData_8[0x20]; // 0x08(0x20)
	bool bPlaying; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float DefaultBlendTimeMultiplier; // 0x2c(0x04)
	char UnknownData_30[0xb8]; // 0x30(0xb8)
	struct TArray<int32_t> NextSections; // 0xe8(0x10)
	struct TArray<int32_t> PrevSections; // 0xf8(0x10)
	char UnknownData_108[0x10]; // 0x108(0x10)
	struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118(0x10)
	float Position; // 0x128(0x04)
	float PlayRate; // 0x12c(0x04)
	struct FAlphaBlend Blend; // 0x130(0x30)
	char UnknownData_160[0x28]; // 0x160(0x28)
	int32_t DisableRootMotionCount; // 0x188(0x04)
	char UnknownData_18C[0x24]; // 0x18c(0x24)
};

// ScriptStruct Engine.AnimNotifyEvent
// Size: 0xb8 (Inherited: 0x30)
struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30(0x04)
	float TriggerTimeOffset; // 0x34(0x04)
	float EndTriggerTimeOffset; // 0x38(0x04)
	float TriggerWeightThreshold; // 0x3c(0x04)
	struct FName NotifyName; // 0x40(0x08)
	struct UAnimNotify* Notify; // 0x48(0x08)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x08)
	float Duration; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool bConvertedFromBranchingPoint; // 0x90(0x01)
	char MontageTickType; // 0x91(0x01)
	char UnknownData_92[0x2]; // 0x92(0x02)
	float NotifyTriggerChance; // 0x94(0x04)
	char NotifyFilterType; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	int32_t NotifyFilterLOD; // 0x9c(0x04)
	bool bTriggerOnDedicatedServer; // 0xa0(0x01)
	bool bTriggerOnFollower; // 0xa1(0x01)
	char UnknownData_A2[0x2]; // 0xa2(0x02)
	int32_t TrackIndex; // 0xa4(0x04)
	char UnknownData_A8[0x10]; // 0xa8(0x10)
};

// ScriptStruct Engine.BranchingPointMarker
// Size: 0x0c (Inherited: 0x00)
struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x00(0x04)
	float TriggerTime; // 0x04(0x04)
	char NotifyEventType; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : FAnimLinkableElement {
	struct FName EventName; // 0x30(0x08)
	float DisplayTime; // 0x38(0x04)
	float TriggerTimeOffset; // 0x3c(0x04)
};

// ScriptStruct Engine.SlotAnimationTrack
// Size: 0x18 (Inherited: 0x00)
struct FSlotAnimationTrack {
	struct FName slotName; // 0x00(0x08)
	struct FAnimTrack AnimTrack; // 0x08(0x10)
};

// ScriptStruct Engine.CompositeSection
// Size: 0x58 (Inherited: 0x30)
struct FCompositeSection : FAnimLinkableElement {
	struct FName SectionName; // 0x30(0x08)
	float StartTime; // 0x38(0x04)
	struct FName NextSectionName; // 0x3c(0x08)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x48(0x10)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0xd0 (Inherited: 0x10)
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float alpha; // 0x34(0x04)
	char bAlphaBoolEnabled : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x08)
	struct FInputScaleBias AlphaScaleBias; // 0x90(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98(0x30)
	int32_t LODThreshold; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct Engine.AnimNode_CustomProperty
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_CustomProperty : FAnimNode_Base {
	struct TArray<struct FName> SourcePropertyNames; // 0x10(0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x20(0x10)
	struct UObject* TargetInstance; // 0x30(0x08)
	char UnknownData_38[0x20]; // 0x38(0x20)
};

// ScriptStruct Engine.AnimNode_Inertialization
// Size: 0x70 (Inherited: 0x10)
struct FAnimNode_Inertialization : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	char UnknownData_20[0x50]; // 0x20(0x50)
};

// ScriptStruct Engine.InertializationPoseDiff
// Size: 0x28 (Inherited: 0x00)
struct FInertializationPoseDiff {
	char UnknownData_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Engine.InertializationCurveDiff
// Size: 0x08 (Inherited: 0x00)
struct FInertializationCurveDiff {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.InertializationBoneDiff
// Size: 0x3c (Inherited: 0x00)
struct FInertializationBoneDiff {
	char UnknownData_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct Engine.InertializationPose
// Size: 0x90 (Inherited: 0x00)
struct FInertializationPose {
	char UnknownData_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.AnimNode_LinkedAnimGraph
// Size: 0xa0 (Inherited: 0x58)
struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	struct TArray<struct FPoseLink> InputPoses; // 0x58(0x10)
	struct TArray<struct FName> InputPoseNames; // 0x68(0x10)
	struct UAnimInstance* InstanceClass; // 0x78(0x08)
	struct FName Tag; // 0x80(0x08)
	char UnknownData_88[0x10]; // 0x88(0x10)
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x98(0x01)
	char bPropagateNotifiesToLinkedInstances : 1; // 0x98(0x01)
	char UnknownData_98_2 : 6; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// ScriptStruct Engine.AnimNode_LinkedAnimLayer
// Size: 0xb0 (Inherited: 0xa0)
struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	struct UAnimLayerInterface* Interface; // 0xa0(0x08)
	struct FName Layer; // 0xa8(0x08)
};

// ScriptStruct Engine.AnimNode_LinkedInputPose
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	struct FName Name; // 0x10(0x08)
	struct FName Graph; // 0x18(0x08)
	struct FPoseLink InputPose; // 0x20(0x10)
	char UnknownData_30[0x48]; // 0x30(0x48)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0xb8 (Inherited: 0x10)
struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	struct FPoseLink pose; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x08)
	char UnknownData_28[0x90]; // 0x28(0x90)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x78 (Inherited: 0x30)
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x30(0x08)
	float PlayRateBasis; // 0x38(0x04)
	float PlayRate; // 0x3c(0x04)
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x40(0x30)
	float StartPosition; // 0x70(0x04)
	bool bLoopAnimation; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
};

// ScriptStruct Engine.AnimNode_StateMachine
// Size: 0xb0 (Inherited: 0x10)
struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10(0x04)
	int32_t MaxTransitionsPerFrame; // 0x14(0x04)
	bool bSkipFirstUpdateTransition; // 0x18(0x01)
	bool bReinitializeOnBecomingRelevant; // 0x19(0x01)
	char UnknownData_1A[0x96]; // 0x1a(0x96)
};

// ScriptStruct Engine.AnimationPotentialTransition
// Size: 0x30 (Inherited: 0x00)
struct FAnimationPotentialTransition {
	char UnknownData_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// Size: 0xc8 (Inherited: 0x00)
struct FAnimationActiveTransitionEntry {
	char UnknownData_0[0xb8]; // 0x00(0xb8)
	struct UBlendProfile* BlendProfile; // 0xb8(0x08)
	char UnknownData_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	char UnknownData_10[0x38]; // 0x10(0x38)
	int32_t FramesToCachePose; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	char DataSource; // 0x50(0x01)
	char EvaluatorMode; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10(0x01)
	char UnknownData_11[0x17]; // 0x11(0x17)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_UseCachedPose : FAnimNode_Base {
	struct FPoseLink LinkToCachingNode; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x08)
};

// ScriptStruct Engine.ExposedValueHandler
// Size: 0x48 (Inherited: 0x00)
struct FExposedValueHandler {
	struct FName BoundFunction; // 0x00(0x08)
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x08(0x10)
	struct UFunction* Function; // 0x18(0x08)
	FieldPathProperty ValueHandlerNodeProperty; // 0x20(0x20)
	char UnknownData_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x80 (Inherited: 0x00)
struct FExposedValueCopyRecord {
	struct FName SourcePropertyName; // 0x00(0x08)
	struct FName SourceSubPropertyName; // 0x08(0x08)
	int32_t SourceArrayIndex; // 0x10(0x04)
	bool bInstanceIsTarget; // 0x14(0x01)
	enum class EPostCopyOperation PostCopyOperation; // 0x15(0x01)
	enum class ECopyType CopyType; // 0x16(0x01)
	char UnknownData_17[0x1]; // 0x17(0x01)
	FieldPathProperty DestProperty; // 0x18(0x20)
	int32_t DestArrayIndex; // 0x38(0x04)
	int32_t Size; // 0x3c(0x04)
	FieldPathProperty CachedSourceProperty; // 0x40(0x20)
	FieldPathProperty CachedSourceStructSubProperty; // 0x60(0x20)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	struct FPoseLink LocalPose; // 0x10(0x10)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
};

// ScriptStruct Engine.AnimNotifyQueue
// Size: 0x70 (Inherited: 0x00)
struct FAnimNotifyQueue {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct TArray<struct FAnimNotifyEventReference> AnimNotifies; // 0x10(0x10)
	struct TMap<struct FName, struct FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20(0x50)
};

// ScriptStruct Engine.AnimNotifyArray
// Size: 0x10 (Inherited: 0x00)
struct FAnimNotifyArray {
	struct TArray<struct FAnimNotifyEventReference> Notifies; // 0x00(0x10)
};

// ScriptStruct Engine.AnimNotifyEventReference
// Size: 0x10 (Inherited: 0x00)
struct FAnimNotifyEventReference {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UObject* NotifySource; // 0x08(0x08)
};

// ScriptStruct Engine.CompressedTrack
// Size: 0x38 (Inherited: 0x00)
struct FCompressedTrack {
	struct TArray<char> ByteStream; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float Mins[0x3]; // 0x20(0x0c)
	float Ranges[0x3]; // 0x2c(0x0c)
};

// ScriptStruct Engine.CurveTrack
// Size: 0x18 (Inherited: 0x00)
struct FCurveTrack {
	struct FName CurveName; // 0x00(0x08)
	struct TArray<float> CurveWeights; // 0x08(0x10)
};

// ScriptStruct Engine.ScaleTrack
// Size: 0x20 (Inherited: 0x00)
struct FScaleTrack {
	struct TArray<struct FVector> ScaleKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.RotationTrack
// Size: 0x20 (Inherited: 0x00)
struct FRotationTrack {
	struct TArray<struct FQuat> RotKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.TranslationTrack
// Size: 0x20 (Inherited: 0x00)
struct FTranslationTrack {
	struct TArray<struct FVector> PosKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// Size: 0x20 (Inherited: 0x00)
struct FAnimSequenceTrackContainer {
	struct TArray<struct FRawAnimSequenceTrack> AnimationTracks; // 0x00(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// Size: 0x30 (Inherited: 0x00)
struct FRawAnimSequenceTrack {
	struct TArray<struct FVector> PosKeys; // 0x00(0x10)
	struct TArray<struct FQuat> RotKeys; // 0x10(0x10)
	struct TArray<struct FVector> ScaleKeys; // 0x20(0x10)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// Size: 0x10 (Inherited: 0x00)
struct FAnimSetMeshLinkup {
	struct TArray<int32_t> BoneToTrackTable; // 0x00(0x10)
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// Size: 0x830 (Inherited: 0x6e0)
struct FAnimSingleNodeInstanceProxy : FAnimInstanceProxy {
	char UnknownData_6E0[0x150]; // 0x6e0(0x150)
};

// ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_SingleNode : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	char UnknownData_20[0x10]; // 0x20(0x10)
};

// ScriptStruct Engine.BakedAnimationStateMachine
// Size: 0x30 (Inherited: 0x00)
struct FBakedAnimationStateMachine {
	struct FName MachineName; // 0x00(0x08)
	int32_t InitialState; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FBakedAnimationState> States; // 0x10(0x10)
	struct TArray<struct FAnimationTransitionBetweenStates> Transitions; // 0x20(0x10)
};

// ScriptStruct Engine.AnimationStateBase
// Size: 0x08 (Inherited: 0x00)
struct FAnimationStateBase {
	struct FName StateName; // 0x00(0x08)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// Size: 0x40 (Inherited: 0x08)
struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	int32_t PreviousState; // 0x08(0x04)
	int32_t NextState; // 0x0c(0x04)
	float CrossfadeDuration; // 0x10(0x04)
	int32_t StartNotify; // 0x14(0x04)
	int32_t EndNotify; // 0x18(0x04)
	int32_t InterruptNotify; // 0x1c(0x04)
	enum class EAlphaBlendOption BlendMode; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct UCurveFloat* CustomCurve; // 0x28(0x08)
	struct UBlendProfile* BlendProfile; // 0x30(0x08)
	char LogicType; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.BakedAnimationState
// Size: 0x58 (Inherited: 0x00)
struct FBakedAnimationState {
	struct FName StateName; // 0x00(0x08)
	struct TArray<struct FBakedStateExitTransition> Transitions; // 0x08(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x04)
	int32_t StartNotify; // 0x1c(0x04)
	int32_t EndNotify; // 0x20(0x04)
	int32_t FullyBlendedNotify; // 0x24(0x04)
	bool bIsAConduit; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	int32_t EntryRuleNodeIndex; // 0x2c(0x04)
	struct TArray<int32_t> PlayerNodeIndices; // 0x30(0x10)
	struct TArray<int32_t> LayerNodeIndices; // 0x40(0x10)
	bool bAlwaysResetOnEntry; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Engine.BakedStateExitTransition
// Size: 0x20 (Inherited: 0x00)
struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x00(0x04)
	int32_t CustomResultNodeIndex; // 0x04(0x04)
	int32_t TransitionIndex; // 0x08(0x04)
	bool bDesiredTransitionReturnValue; // 0x0c(0x01)
	bool bAutomaticRemainingTimeRule; // 0x0d(0x01)
	char UnknownData_E[0x2]; // 0x0e(0x02)
	struct TArray<int32_t> PoseEvaluatorLinks; // 0x10(0x10)
};

// ScriptStruct Engine.AnimationState
// Size: 0x28 (Inherited: 0x08)
struct FAnimationState : FAnimationStateBase {
	struct TArray<struct FAnimationTransitionRule> Transitions; // 0x08(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x04)
	int32_t StartNotify; // 0x1c(0x04)
	int32_t EndNotify; // 0x20(0x04)
	int32_t FullyBlendedNotify; // 0x24(0x04)
};

// ScriptStruct Engine.AnimationTransitionRule
// Size: 0x10 (Inherited: 0x00)
struct FAnimationTransitionRule {
	struct FName RuleToExecute; // 0x00(0x08)
	bool TransitionReturnVal; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t TransitionIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.TrackToSkeletonMap
// Size: 0x04 (Inherited: 0x00)
struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x00(0x04)
};

// ScriptStruct Engine.MarkerSyncData
// Size: 0x20 (Inherited: 0x00)
struct FMarkerSyncData {
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; // 0x00(0x10)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.AnimSyncMarker
// Size: 0x0c (Inherited: 0x00)
struct FAnimSyncMarker {
	struct FName MarkerName; // 0x00(0x08)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 (Inherited: 0x00)
struct FAnimNotifyTrack {
	struct FName TrackName; // 0x00(0x08)
	struct FLinearColor TrackColor; // 0x08(0x10)
	char UnknownData_18[0x20]; // 0x18(0x20)
};

// ScriptStruct Engine.PerBoneBlendWeights
// Size: 0x10 (Inherited: 0x00)
struct FPerBoneBlendWeights {
	struct TArray<struct FPerBoneBlendWeight> BoneBlendWeights; // 0x00(0x10)
};

// ScriptStruct Engine.AssetImportInfo
// Size: 0x01 (Inherited: 0x00)
struct FAssetImportInfo {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// Size: 0x38 (Inherited: 0x00)
struct FPrimaryAssetRulesCustomOverride {
	struct FPrimaryAssetType PrimaryAssetType; // 0x00(0x08)
	struct FDirectoryPath FilterDirectory; // 0x08(0x10)
	struct FString FilterString; // 0x18(0x10)
	struct FPrimaryAssetRules Rules; // 0x28(0x0c)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.PrimaryAssetRules
// Size: 0x0c (Inherited: 0x00)
struct FPrimaryAssetRules {
	int32_t Priority; // 0x00(0x04)
	int32_t ChunkId; // 0x04(0x04)
	bool bApplyRecursively; // 0x08(0x01)
	enum class EPrimaryAssetCookRule CookRule; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// Size: 0x1c (Inherited: 0x00)
struct FPrimaryAssetRulesOverride {
	struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
	struct FPrimaryAssetRules Rules; // 0x10(0x0c)
};

// ScriptStruct Engine.AssetManagerRedirect
// Size: 0x20 (Inherited: 0x00)
struct FAssetManagerRedirect {
	struct FString Old; // 0x00(0x10)
	struct FString New; // 0x10(0x10)
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// Size: 0x88 (Inherited: 0x00)
struct FPrimaryAssetTypeInfo {
	struct FName PrimaryAssetType; // 0x00(0x08)
	SoftClassProperty AssetBaseClass; // 0x08(0x28)
	struct UObject* AssetBaseClassLoaded; // 0x30(0x08)
	bool bHasBlueprintClasses; // 0x38(0x01)
	bool bIsEditorOnly; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
	struct TArray<struct FDirectoryPath> Directories; // 0x40(0x10)
	struct TArray<struct FSoftObjectPath> SpecificAssets; // 0x50(0x10)
	struct FPrimaryAssetRules Rules; // 0x60(0x0c)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FString> AssetScanPaths; // 0x70(0x10)
	bool bIsDynamicAsset; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	int32_t NumberOfAssets; // 0x84(0x04)
};

// ScriptStruct Engine.AssetMapping
// Size: 0x10 (Inherited: 0x00)
struct FAssetMapping {
	struct UAnimationAsset* SourceAsset; // 0x00(0x08)
	struct UAnimationAsset* TargetAsset; // 0x08(0x08)
};

// ScriptStruct Engine.AtmospherePrecomputeInstanceData
// Size: 0x150 (Inherited: 0xa8)
struct FAtmospherePrecomputeInstanceData : FSceneComponentInstanceData {
	char UnknownData_A8[0xa8]; // 0xa8(0xa8)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// Size: 0x2c (Inherited: 0x00)
struct FAtmospherePrecomputeParameters {
	float DensityHeight; // 0x00(0x04)
	float DecayHeight; // 0x04(0x04)
	int32_t MaxScatteringOrder; // 0x08(0x04)
	int32_t TransmittanceTexWidth; // 0x0c(0x04)
	int32_t TransmittanceTexHeight; // 0x10(0x04)
	int32_t IrradianceTexWidth; // 0x14(0x04)
	int32_t IrradianceTexHeight; // 0x18(0x04)
	int32_t InscatterAltitudeSampleNum; // 0x1c(0x04)
	int32_t InscatterMuNum; // 0x20(0x04)
	int32_t InscatterMuSNum; // 0x24(0x04)
	int32_t InscatterNuNum; // 0x28(0x04)
};

// ScriptStruct Engine.BaseAttenuationSettings
// Size: 0xb0 (Inherited: 0x00)
struct FBaseAttenuationSettings {
	char UnknownData_0[0x8]; // 0x00(0x08)
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x08(0x01)
	char AttenuationShape; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	float dBAttenuationAtMax; // 0x0c(0x04)
	enum class ENaturalSoundFalloffMode FalloffMode; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	struct FVector AttenuationShapeExtents; // 0x14(0x0c)
	float ConeOffset; // 0x20(0x04)
	float FalloffDistance; // 0x24(0x04)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x28(0x88)
};

// ScriptStruct Engine.AudioComponentParam
// Size: 0x20 (Inherited: 0x00)
struct FAudioComponentParam {
	struct FName ParamName; // 0x00(0x08)
	float FloatParam; // 0x08(0x04)
	bool BoolParam; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	int32_t IntParam; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWaveParam; // 0x18(0x08)
};

// ScriptStruct Engine.AudioEffectParameters
// Size: 0x08 (Inherited: 0x00)
struct FAudioEffectParameters {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.AudioReverbEffect
// Size: 0x48 (Inherited: 0x08)
struct FAudioReverbEffect : FAudioEffectParameters {
	char UnknownData_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.AudioQualitySettings
// Size: 0x20 (Inherited: 0x00)
struct FAudioQualitySettings {
	struct FText DisplayName; // 0x00(0x18)
	int32_t MaxChannels; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InteriorSettings
// Size: 0x24 (Inherited: 0x00)
struct FInteriorSettings {
	bool bIsWorldSettings; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float ExteriorVolume; // 0x04(0x04)
	float ExteriorTime; // 0x08(0x04)
	float ExteriorLPF; // 0x0c(0x04)
	float ExteriorLPFTime; // 0x10(0x04)
	float InteriorVolume; // 0x14(0x04)
	float InteriorTime; // 0x18(0x04)
	float InteriorLPF; // 0x1c(0x04)
	float InteriorLPFTime; // 0x20(0x04)
};

// ScriptStruct Engine.LaunchOnTestSettings
// Size: 0x20 (Inherited: 0x00)
struct FLaunchOnTestSettings {
	struct FFilePath LaunchOnTestmap; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// ScriptStruct Engine.FilePath
// Size: 0x10 (Inherited: 0x00)
struct FFilePath {
	struct FString FilePath; // 0x00(0x10)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// Size: 0x20 (Inherited: 0x00)
struct FEditorMapPerformanceTestDefinition {
	struct FSoftObjectPath PerformanceTestmap; // 0x00(0x18)
	int32_t TestTimer; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// Size: 0x1f0 (Inherited: 0x00)
struct FBuildPromotionTestSettings {
	struct FFilePath DefaultStaticMeshAsset; // 0x00(0x10)
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10(0x150)
	struct FBuildPromotionOpenAssetSettings OpenAssets; // 0x160(0x60)
	struct FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0(0x20)
	struct FFilePath SourceControlMaterial; // 0x1e0(0x10)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// Size: 0x20 (Inherited: 0x00)
struct FBuildPromotionNewProjectSettings {
	struct FDirectoryPath NewProjectFolderOverride; // 0x00(0x10)
	struct FString NewProjectNameOverride; // 0x10(0x10)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// Size: 0x60 (Inherited: 0x00)
struct FBuildPromotionOpenAssetSettings {
	struct FFilePath BlueprintAsset; // 0x00(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// Size: 0x150 (Inherited: 0x00)
struct FBuildPromotionImportWorkflowSettings {
	struct FEditorImportWorkflowDefinition Diffuse; // 0x00(0x20)
	struct FEditorImportWorkflowDefinition Normal; // 0x20(0x20)
	struct FEditorImportWorkflowDefinition StaticMesh; // 0x40(0x20)
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60(0x20)
	struct FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80(0x20)
	struct FEditorImportWorkflowDefinition MorphMesh; // 0xa0(0x20)
	struct FEditorImportWorkflowDefinition SkeletalMesh; // 0xc0(0x20)
	struct FEditorImportWorkflowDefinition Animation; // 0xe0(0x20)
	struct FEditorImportWorkflowDefinition Sound; // 0x100(0x20)
	struct FEditorImportWorkflowDefinition SurroundSound; // 0x120(0x20)
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140(0x10)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// Size: 0x20 (Inherited: 0x00)
struct FEditorImportWorkflowDefinition {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x10(0x10)
};

// ScriptStruct Engine.ImportFactorySettingValues
// Size: 0x20 (Inherited: 0x00)
struct FImportFactorySettingValues {
	struct FString SettingName; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)
struct FBlueprintEditorPromotionSettings {
	struct FFilePath FirstMeshPath; // 0x00(0x10)
	struct FFilePath SecondMeshPath; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// Size: 0x10 (Inherited: 0x00)
struct FParticleEditorPromotionSettings {
	struct FFilePath DefaultParticleAsset; // 0x00(0x10)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)
struct FMaterialEditorPromotionSettings {
	struct FFilePath DefaultMaterialAsset; // 0x00(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// Size: 0x38 (Inherited: 0x00)
struct FEditorImportExportTestDefinition {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x28(0x10)
};

// ScriptStruct Engine.ExternalToolDefinition
// Size: 0x60 (Inherited: 0x00)
struct FExternalToolDefinition {
	struct FString ToolName; // 0x00(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// ScriptStruct Engine.NavAvoidanceData
// Size: 0x3c (Inherited: 0x00)
struct FNavAvoidanceData {
	char UnknownData_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct Engine.BandwidthTestGenerator
// Size: 0x20 (Inherited: 0x00)
struct FBandwidthTestGenerator {
	struct TArray<struct FBandwidthTestItem> ReplicatedBuffers; // 0x00(0x10)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.BandwidthTestItem
// Size: 0x10 (Inherited: 0x00)
struct FBandwidthTestItem {
	struct TArray<char> Kilobyte; // 0x00(0x10)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// Size: 0x14 (Inherited: 0x00)
struct FBlendProfileBoneEntry {
	struct FBoneReference BoneReference; // 0x00(0x10)
	float BlendScale; // 0x10(0x04)
};

// ScriptStruct Engine.PerBoneInterpolation
// Size: 0x14 (Inherited: 0x00)
struct FPerBoneInterpolation {
	struct FBoneReference BoneReference; // 0x00(0x10)
	float InterpolationSpeedPerSec; // 0x10(0x04)
};

// ScriptStruct Engine.GridBlendSample
// Size: 0x1c (Inherited: 0x00)
struct FGridBlendSample {
	struct FEditorElement GridElement; // 0x00(0x18)
	float BlendWeight; // 0x18(0x04)
};

// ScriptStruct Engine.EditorElement
// Size: 0x18 (Inherited: 0x00)
struct FEditorElement {
	int32_t Indices[0x3]; // 0x00(0x0c)
	float Weights[0x3]; // 0x0c(0x0c)
};

// ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x00)
struct FBlendSample {
	struct UAnimSequence* Animation; // 0x00(0x08)
	struct FVector SampleValue; // 0x08(0x0c)
	float RateScale; // 0x14(0x04)
};

// ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x00)
struct FBlendParameter {
	struct FString DisplayName; // 0x00(0x10)
	float Min; // 0x10(0x04)
	float Max; // 0x14(0x04)
	int32_t GridNum; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InterpolationParameter
// Size: 0x08 (Inherited: 0x00)
struct FInterpolationParameter {
	float InterpolationTime; // 0x00(0x04)
	char InterpolationType; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.BPEditorBookmarkNode
// Size: 0x38 (Inherited: 0x00)
struct FBPEditorBookmarkNode {
	struct FGuid NodeGuid; // 0x00(0x10)
	struct FGuid ParentGuid; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
};

// ScriptStruct Engine.EditedDocumentInfo
// Size: 0x30 (Inherited: 0x00)
struct FEditedDocumentInfo {
	struct FSoftObjectPath EditedObjectPath; // 0x00(0x18)
	struct FVector2D SavedViewOffset; // 0x18(0x08)
	float SavedZoomAmount; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct UObject* EditedObject; // 0x28(0x08)
};

// ScriptStruct Engine.BPInterfaceDescription
// Size: 0x18 (Inherited: 0x00)
struct FBPInterfaceDescription {
	struct UInterface* Interface; // 0x00(0x08)
	struct TArray<struct UEdGraph*> Graphs; // 0x08(0x10)
};

// ScriptStruct Engine.BPVariableDescription
// Size: 0xd0 (Inherited: 0x00)
struct FBPVariableDescription {
	struct FName VarName; // 0x00(0x08)
	struct FGuid VarGuid; // 0x08(0x10)
	struct FEdGraphPinType VarType; // 0x18(0x58)
	struct FString FriendlyName; // 0x70(0x10)
	struct FText Category; // 0x80(0x18)
	uint64_t PropertyFlags; // 0x98(0x08)
	struct FName RepNotifyFunc; // 0xa0(0x08)
	char ReplicationCondition; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xb0(0x10)
	struct FString DefaultValue; // 0xc0(0x10)
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// Size: 0x18 (Inherited: 0x00)
struct FBPVariableMetaDataEntry {
	struct FName DataKey; // 0x00(0x08)
	struct FString DataValue; // 0x08(0x10)
};

// ScriptStruct Engine.EdGraphPinType
// Size: 0x58 (Inherited: 0x00)
struct FEdGraphPinType {
	struct FName PinCategory; // 0x00(0x08)
	struct FName PinSubCategory; // 0x08(0x08)
	struct FWeakObjectPtr<struct UObject> PinSubCategoryObject; // 0x10(0x08)
	struct FSimpleMemberReference PinSubCategoryMemberReference; // 0x18(0x20)
	struct FEdGraphTerminalType PinValueType; // 0x38(0x1c)
	enum class EPinContainerType ContainerType; // 0x54(0x01)
	char bIsArray : 1; // 0x55(0x01)
	char bIsReference : 1; // 0x55(0x01)
	char bIsConst : 1; // 0x55(0x01)
	char bIsWeakPointer : 1; // 0x55(0x01)
	char UnknownData_55_4 : 4; // 0x55(0x01)
	char UnknownData_56[0x2]; // 0x56(0x02)
};

// ScriptStruct Engine.EdGraphTerminalType
// Size: 0x1c (Inherited: 0x00)
struct FEdGraphTerminalType {
	struct FName TerminalCategory; // 0x00(0x08)
	struct FName TerminalSubCategory; // 0x08(0x08)
	struct FWeakObjectPtr<struct UObject> TerminalSubCategoryObject; // 0x10(0x08)
	bool bTerminalIsConst; // 0x18(0x01)
	bool bTerminalIsWeakPointer; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// Size: 0x01 (Inherited: 0x00)
struct FBlueprintMacroCosmeticInfo {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.CompilerNativizationOptions
// Size: 0x80 (Inherited: 0x00)
struct FCompilerNativizationOptions {
	struct FName PlatformName; // 0x00(0x08)
	bool ServerOnlyPlatform; // 0x08(0x01)
	bool ClientOnlyPlatform; // 0x09(0x01)
	bool bExcludeMonolithicHeaders; // 0x0a(0x01)
	char UnknownData_B[0x5]; // 0x0b(0x05)
	struct TArray<struct FName> ExcludedModules; // 0x10(0x10)
	struct TSet<struct FSoftObjectPath> ExcludedAssets; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)
};

// ScriptStruct Engine.BPComponentClassOverride
// Size: 0x10 (Inherited: 0x00)
struct FBPComponentClassOverride {
	struct FName ComponentName; // 0x00(0x08)
	struct UObject* ComponentClass; // 0x08(0x08)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// Size: 0x48 (Inherited: 0x00)
struct FBlueprintCookedComponentInstancingData {
	struct TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x00(0x10)
	char UnknownData_10[0x11]; // 0x10(0x11)
	bool bHasValidCookedData; // 0x21(0x01)
	char UnknownData_22[0x26]; // 0x22(0x26)
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintComponentChangedPropertyInfo {
	struct FName PropertyName; // 0x00(0x08)
	int32_t ArrayIndex; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UStruct* PropertyScope; // 0x10(0x08)
};

// ScriptStruct Engine.EventGraphFastCallPair
// Size: 0x10 (Inherited: 0x00)
struct FEventGraphFastCallPair {
	struct UFunction* FunctionToPatch; // 0x00(0x08)
	int32_t EventGraphCallOffset; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.BlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FBlueprintDebugData {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.PointerToUberGraphFrame
// Size: 0x08 (Inherited: 0x00)
struct FPointerToUberGraphFrame {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// Size: 0x190 (Inherited: 0x00)
struct FDebuggingInfoForSingleFunction {
	char UnknownData_0[0x190]; // 0x00(0x190)
};

// ScriptStruct Engine.NodeToCodeAssociation
// Size: 0x14 (Inherited: 0x00)
struct FNodeToCodeAssociation {
	char UnknownData_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Engine.AnimCurveType
// Size: 0x02 (Inherited: 0x00)
struct FAnimCurveType {
	char UnknownData_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// Size: 0x01 (Inherited: 0x00)
struct FBookmarkBaseJumpToSettings {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.BookmarkJumpToSettings
// Size: 0x01 (Inherited: 0x01)
struct FBookmarkJumpToSettings : FBookmarkBaseJumpToSettings {
};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// Size: 0x01 (Inherited: 0x00)
struct FBookmark2DJumpToSettings {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.GeomSelection
// Size: 0x0c (Inherited: 0x00)
struct FGeomSelection {
	int32_t Type; // 0x00(0x04)
	int32_t Index; // 0x04(0x04)
	int32_t SelectionIndex; // 0x08(0x04)
};

// ScriptStruct Engine.BuilderPoly
// Size: 0x20 (Inherited: 0x00)
struct FBuilderPoly {
	struct TArray<int32_t> VertexIndices; // 0x00(0x10)
	int32_t Direction; // 0x10(0x04)
	struct FName ItemName; // 0x14(0x08)
	int32_t PolyFlags; // 0x1c(0x04)
};

// ScriptStruct Engine.CachedAnimTransitionData
// Size: 0x24 (Inherited: 0x00)
struct FCachedAnimTransitionData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName FromStateName; // 0x08(0x08)
	struct FName ToStateName; // 0x10(0x08)
	char UnknownData_18[0xc]; // 0x18(0x0c)
};

// ScriptStruct Engine.CachedAnimRelevancyData
// Size: 0x1c (Inherited: 0x00)
struct FCachedAnimRelevancyData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char UnknownData_10[0xc]; // 0x10(0x0c)
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// Size: 0x18 (Inherited: 0x00)
struct FCachedAnimAssetPlayerData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.CachedAnimStateArray
// Size: 0x18 (Inherited: 0x00)
struct FCachedAnimStateArray {
	struct TArray<struct FCachedAnimStateData> States; // 0x00(0x10)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.CachedAnimStateData
// Size: 0x1c (Inherited: 0x00)
struct FCachedAnimStateData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char UnknownData_10[0xc]; // 0x10(0x0c)
};

// ScriptStruct Engine.ActiveCameraShakeInfo
// Size: 0x10 (Inherited: 0x00)
struct FActiveCameraShakeInfo {
	struct UCameraShake* ShakeInstance; // 0x00(0x08)
	struct FWeakObjectPtr<struct UCameraShakeSourceComponent> ShakeSource; // 0x08(0x08)
};

// ScriptStruct Engine.PooledCameraShakes
// Size: 0x10 (Inherited: 0x00)
struct FPooledCameraShakes {
	struct TArray<struct UCameraShake*> PooledShakes; // 0x00(0x10)
};

// ScriptStruct Engine.VOscillator
// Size: 0x24 (Inherited: 0x00)
struct FVOscillator {
	struct FFOscillator X; // 0x00(0x0c)
	struct FFOscillator Y; // 0x0c(0x0c)
	struct FFOscillator Z; // 0x18(0x0c)
};

// ScriptStruct Engine.FOscillator
// Size: 0x0c (Inherited: 0x00)
struct FFOscillator {
	float Amplitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	char InitialOffset; // 0x08(0x01)
	enum class EOscillatorWaveform Waveform; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Engine.ROscillator
// Size: 0x24 (Inherited: 0x00)
struct FROscillator {
	struct FFOscillator Pitch; // 0x00(0x0c)
	struct FFOscillator Yaw; // 0x0c(0x0c)
	struct FFOscillator Roll; // 0x18(0x0c)
};

// ScriptStruct Engine.DummySpacerCameraTypes
// Size: 0x01 (Inherited: 0x00)
struct FDummySpacerCameraTypes {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.MinimalViewInfo
// Size: 0x5d0 (Inherited: 0x00)
struct FMinimalViewInfo {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
	float DesiredFOV; // 0x1c(0x04)
	float OrthoWidth; // 0x20(0x04)
	float OrthoNearClipPlane; // 0x24(0x04)
	float OrthoFarClipPlane; // 0x28(0x04)
	float AspectRatio; // 0x2c(0x04)
	char bConstrainAspectRatio : 1; // 0x30(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x30(0x01)
	char UnknownData_30_2 : 6; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	char ProjectionMode; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	float PostProcessBlendWeight; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x540)
	struct FVector2D OffCenterProjectionOffset; // 0x580(0x08)
	char UnknownData_588[0x48]; // 0x588(0x48)
};

// ScriptStruct Engine.PostProcessSettings
// Size: 0x540 (Inherited: 0x00)
struct FPostProcessSettings {
	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_WhiteTint : 1; // 0x00(0x01)
	char bOverride_ColorSaturation : 1; // 0x00(0x01)
	char bOverride_ColorContrast : 1; // 0x00(0x01)
	char bOverride_ColorGamma : 1; // 0x00(0x01)
	char bOverride_ColorGain : 1; // 0x00(0x01)
	char bOverride_ColorOffset : 1; // 0x00(0x01)
	char bOverride_ColorSaturationShadows : 1; // 0x00(0x01)
	char bOverride_ColorContrastShadows : 1; // 0x01(0x01)
	char bOverride_ColorGammaShadows : 1; // 0x01(0x01)
	char bOverride_ColorGainShadows : 1; // 0x01(0x01)
	char bOverride_ColorOffsetShadows : 1; // 0x01(0x01)
	char bOverride_ColorSaturationMidtones : 1; // 0x01(0x01)
	char bOverride_ColorContrastMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGammaMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGainMidtones : 1; // 0x01(0x01)
	char bOverride_ColorOffsetMidtones : 1; // 0x02(0x01)
	char bOverride_ColorSaturationHighlights : 1; // 0x02(0x01)
	char bOverride_ColorContrastHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGammaHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGainHighlights : 1; // 0x02(0x01)
	char bOverride_ColorOffsetHighlights : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x02(0x01)
	char bOverride_BlueCorrection : 1; // 0x03(0x01)
	char bOverride_ExpandGamut : 1; // 0x03(0x01)
	char bOverride_FilmWhitePoint : 1; // 0x03(0x01)
	char bOverride_FilmSaturation : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerRed : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerGreen : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerBlue : 1; // 0x03(0x01)
	char bOverride_FilmContrast : 1; // 0x03(0x01)
	char bOverride_FilmDynamicRange : 1; // 0x04(0x01)
	char bOverride_FilmHealAmount : 1; // 0x04(0x01)
	char bOverride_FilmToeAmount : 1; // 0x04(0x01)
	char bOverride_FilmShadowTint : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintBlend : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintAmount : 1; // 0x04(0x01)
	char bOverride_FilmSlope : 1; // 0x04(0x01)
	char bOverride_FilmToe : 1; // 0x04(0x01)
	char bOverride_FilmShoulder : 1; // 0x05(0x01)
	char bOverride_FilmBlackClip : 1; // 0x05(0x01)
	char bOverride_FilmWhiteClip : 1; // 0x05(0x01)
	char bOverride_SceneColorTint : 1; // 0x05(0x01)
	char bOverride_SceneFringeIntensity : 1; // 0x05(0x01)
	char bOverride_ChromaticAberrationStartOffset : 1; // 0x05(0x01)
	char bOverride_AmbientCubemapTint : 1; // 0x05(0x01)
	char bOverride_AmbientCubemapIntensity : 1; // 0x05(0x01)
	char bOverride_BloomMethod : 1; // 0x06(0x01)
	char bOverride_BloomIntensity : 1; // 0x06(0x01)
	char bOverride_BloomThreshold : 1; // 0x06(0x01)
	char bOverride_Bloom1Tint : 1; // 0x06(0x01)
	char bOverride_Bloom1Size : 1; // 0x06(0x01)
	char bOverride_Bloom2Size : 1; // 0x06(0x01)
	char bOverride_Bloom2Tint : 1; // 0x06(0x01)
	char bOverride_Bloom3Tint : 1; // 0x06(0x01)
	char bOverride_Bloom3Size : 1; // 0x07(0x01)
	char bOverride_Bloom4Tint : 1; // 0x07(0x01)
	char bOverride_Bloom4Size : 1; // 0x07(0x01)
	char bOverride_Bloom5Tint : 1; // 0x07(0x01)
	char bOverride_Bloom5Size : 1; // 0x07(0x01)
	char bOverride_Bloom6Tint : 1; // 0x07(0x01)
	char bOverride_Bloom6Size : 1; // 0x07(0x01)
	char bOverride_BloomSizeScale : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionTexture : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionSize : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionCenterUV : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilter : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionBufferScale : 1; // 0x08(0x01)
	char bOverride_BloomDirtMaskIntensity : 1; // 0x09(0x01)
	char bOverride_BloomDirtMaskTint : 1; // 0x09(0x01)
	char bOverride_BloomDirtMask : 1; // 0x09(0x01)
	char bOverride_CameraShutterSpeed : 1; // 0x09(0x01)
	char bOverride_CameraISO : 1; // 0x09(0x01)
	char bOverride_AutoExposureMethod : 1; // 0x09(0x01)
	char bOverride_AutoExposureLowPercent : 1; // 0x09(0x01)
	char bOverride_AutoExposureHighPercent : 1; // 0x09(0x01)
	char bOverride_AutoExposureMinBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMaxBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureCalibrationConstant : 1; // 0x0a(0x01)
	char bOverride_AutoExposureSpeedUp : 1; // 0x0a(0x01)
	char bOverride_AutoExposureSpeedDown : 1; // 0x0a(0x01)
	char bOverride_AutoExposureBias : 1; // 0x0a(0x01)
	char bOverride_AutoExposureBiasCurve : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMeterMask : 1; // 0x0a(0x01)
	char bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMin : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMax : 1; // 0x0b(0x01)
	char bOverride_LensFlareIntensity : 1; // 0x0b(0x01)
	char bOverride_LensFlareTint : 1; // 0x0b(0x01)
	char bOverride_LensFlareTints : 1; // 0x0b(0x01)
	char bOverride_LensFlareBokehSize : 1; // 0x0b(0x01)
	char bOverride_LensFlareBokehShape : 1; // 0x0b(0x01)
	char bOverride_LensFlareThreshold : 1; // 0x0c(0x01)
	char bOverride_VignetteIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainJitter : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionIntensity : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionDistance : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionTemporalBlendWeight : 1; // 0x0e(0x01)
	char UnknownData_E_2 : 6; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
	char bOverride_RayTracingAO : 1; // 0x10(0x01)
	char bOverride_RayTracingAOSamplesPerPixel : 1; // 0x10(0x01)
	char UnknownData_10_2 : 6; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	char bOverride_LPVIntensity : 1; // 0x14(0x01)
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x14(0x01)
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x14(0x01)
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x14(0x01)
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x14(0x01)
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x14(0x01)
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x14(0x01)
	char bOverride_LPVSize : 1; // 0x14(0x01)
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x15(0x01)
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x15(0x01)
	char bOverride_LPVGeometryVolumeBias : 1; // 0x15(0x01)
	char bOverride_LPVVplInjectionBias : 1; // 0x15(0x01)
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x15(0x01)
	char bOverride_LPVFadeRange : 1; // 0x15(0x01)
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x15(0x01)
	char bOverride_IndirectLightingColor : 1; // 0x15(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x16(0x01)
	char bOverride_ColorGradingIntensity : 1; // 0x16(0x01)
	char bOverride_ColorGradingLUT : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldFstop : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldMinFstop : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldBladeCount : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldSensorWidth : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldScale : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x17(0x01)
	char bOverride_MobileHQGaussian : 1; // 0x18(0x01)
	char bOverride_DepthOfFieldOcclusion : 1; // 0x18(0x01)
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x18(0x01)
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x18(0x01)
	char bOverride_MotionBlurAmount : 1; // 0x18(0x01)
	char bOverride_MotionBlurMax : 1; // 0x18(0x01)
	char bOverride_MotionBlurTargetFPS : 1; // 0x18(0x01)
	char bOverride_MotionBlurPerObjectSize : 1; // 0x18(0x01)
	char bOverride_ScreenPercentage : 1; // 0x19(0x01)
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x19(0x01)
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x19(0x01)
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x19(0x01)
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x19(0x01)
	char UnknownData_19_5 : 3; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
	char bOverride_ReflectionsType : 1; // 0x1c(0x01)
	char bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x1c(0x01)
	char bOverride_RayTracingReflectionsMaxBounces : 1; // 0x1c(0x01)
	char bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x1c(0x01)
	char bOverride_RayTracingReflectionsShadows : 1; // 0x1c(0x01)
	char bOverride_RayTracingReflectionsTranslucency : 1; // 0x1c(0x01)
	char bOverride_TranslucencyType : 1; // 0x1c(0x01)
	char bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x1c(0x01)
	char bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x1d(0x01)
	char bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x1d(0x01)
	char bOverride_RayTracingTranslucencyShadows : 1; // 0x1d(0x01)
	char bOverride_RayTracingTranslucencyRefraction : 1; // 0x1d(0x01)
	char bOverride_RayTracingGI : 1; // 0x1d(0x01)
	char bOverride_RayTracingGIMaxBounces : 1; // 0x1d(0x01)
	char bOverride_RayTracingGISamplesPerPixel : 1; // 0x1d(0x01)
	char bOverride_PathTracingMaxBounces : 1; // 0x1d(0x01)
	char bOverride_PathTracingSamplesPerPixel : 1; // 0x1e(0x01)
	char UnknownData_1E_1 : 7; // 0x1e(0x01)
	char UnknownData_1F[0x1]; // 0x1f(0x01)
	char bMobileHQGaussian : 1; // 0x20(0x01)
	char UnknownData_20_1 : 7; // 0x20(0x01)
	char BloomMethod; // 0x21(0x01)
	char AutoExposureMethod; // 0x22(0x01)
	char UnknownData_23[0x1]; // 0x23(0x01)
	float WhiteTemp; // 0x24(0x04)
	float WhiteTint; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FVector4 ColorSaturation; // 0x30(0x10)
	struct FVector4 ColorContrast; // 0x40(0x10)
	struct FVector4 ColorGamma; // 0x50(0x10)
	struct FVector4 ColorGain; // 0x60(0x10)
	struct FVector4 ColorOffset; // 0x70(0x10)
	struct FVector4 ColorSaturationShadows; // 0x80(0x10)
	struct FVector4 ColorContrastShadows; // 0x90(0x10)
	struct FVector4 ColorGammaShadows; // 0xa0(0x10)
	struct FVector4 ColorGainShadows; // 0xb0(0x10)
	struct FVector4 ColorOffsetShadows; // 0xc0(0x10)
	struct FVector4 ColorSaturationMidtones; // 0xd0(0x10)
	struct FVector4 ColorContrastMidtones; // 0xe0(0x10)
	struct FVector4 ColorGammaMidtones; // 0xf0(0x10)
	struct FVector4 ColorGainMidtones; // 0x100(0x10)
	struct FVector4 ColorOffsetMidtones; // 0x110(0x10)
	struct FVector4 ColorSaturationHighlights; // 0x120(0x10)
	struct FVector4 ColorContrastHighlights; // 0x130(0x10)
	struct FVector4 ColorGammaHighlights; // 0x140(0x10)
	struct FVector4 ColorGainHighlights; // 0x150(0x10)
	struct FVector4 ColorOffsetHighlights; // 0x160(0x10)
	float ColorCorrectionHighlightsMin; // 0x170(0x04)
	float ColorCorrectionShadowsMax; // 0x174(0x04)
	float BlueCorrection; // 0x178(0x04)
	float ExpandGamut; // 0x17c(0x04)
	float FilmSlope; // 0x180(0x04)
	float FilmToe; // 0x184(0x04)
	float FilmShoulder; // 0x188(0x04)
	float FilmBlackClip; // 0x18c(0x04)
	float FilmWhiteClip; // 0x190(0x04)
	struct FLinearColor FilmWhitePoint; // 0x194(0x10)
	struct FLinearColor FilmShadowTint; // 0x1a4(0x10)
	float FilmShadowTintBlend; // 0x1b4(0x04)
	float FilmShadowTintAmount; // 0x1b8(0x04)
	float FilmSaturation; // 0x1bc(0x04)
	struct FLinearColor FilmChannelMixerRed; // 0x1c0(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x1d0(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x1e0(0x10)
	float FilmContrast; // 0x1f0(0x04)
	float FilmToeAmount; // 0x1f4(0x04)
	float FilmHealAmount; // 0x1f8(0x04)
	float FilmDynamicRange; // 0x1fc(0x04)
	struct FLinearColor SceneColorTint; // 0x200(0x10)
	float SceneFringeIntensity; // 0x210(0x04)
	float ChromaticAberrationStartOffset; // 0x214(0x04)
	float BloomIntensity; // 0x218(0x04)
	float BloomThreshold; // 0x21c(0x04)
	float BloomSizeScale; // 0x220(0x04)
	float Bloom1Size; // 0x224(0x04)
	float Bloom2Size; // 0x228(0x04)
	float Bloom3Size; // 0x22c(0x04)
	float Bloom4Size; // 0x230(0x04)
	float Bloom5Size; // 0x234(0x04)
	float Bloom6Size; // 0x238(0x04)
	struct FLinearColor Bloom1Tint; // 0x23c(0x10)
	struct FLinearColor Bloom2Tint; // 0x24c(0x10)
	struct FLinearColor Bloom3Tint; // 0x25c(0x10)
	struct FLinearColor Bloom4Tint; // 0x26c(0x10)
	struct FLinearColor Bloom5Tint; // 0x27c(0x10)
	struct FLinearColor Bloom6Tint; // 0x28c(0x10)
	float BloomConvolutionSize; // 0x29c(0x04)
	struct UTexture2D* BloomConvolutionTexture; // 0x2a0(0x08)
	struct FVector2D BloomConvolutionCenterUV; // 0x2a8(0x08)
	float BloomConvolutionPreFilterMin; // 0x2b0(0x04)
	float BloomConvolutionPreFilterMax; // 0x2b4(0x04)
	float BloomConvolutionPreFilterMult; // 0x2b8(0x04)
	float BloomConvolutionBufferScale; // 0x2bc(0x04)
	struct UTexture* BloomDirtMask; // 0x2c0(0x08)
	float BloomDirtMaskIntensity; // 0x2c8(0x04)
	struct FLinearColor BloomDirtMaskTint; // 0x2cc(0x10)
	struct FLinearColor AmbientCubemapTint; // 0x2dc(0x10)
	float AmbientCubemapIntensity; // 0x2ec(0x04)
	struct UTextureCube* AmbientCubemap; // 0x2f0(0x08)
	float CameraShutterSpeed; // 0x2f8(0x04)
	float CameraISO; // 0x2fc(0x04)
	float DepthOfFieldFstop; // 0x300(0x04)
	float DepthOfFieldMinFstop; // 0x304(0x04)
	int32_t DepthOfFieldBladeCount; // 0x308(0x04)
	float AutoExposureBias; // 0x30c(0x04)
	float AutoExposureBiasBackup; // 0x310(0x04)
	char bOverride_AutoExposureBiasBackup : 1; // 0x314(0x01)
	char UnknownData_314_1 : 7; // 0x314(0x01)
	char UnknownData_315[0x3]; // 0x315(0x03)
	char AutoExposureApplyPhysicalCameraExposure : 1; // 0x318(0x01)
	char UnknownData_318_1 : 7; // 0x318(0x01)
	char UnknownData_319[0x7]; // 0x319(0x07)
	struct UCurveFloat* AutoExposureBiasCurve; // 0x320(0x08)
	struct UTexture* AutoExposureMeterMask; // 0x328(0x08)
	float AutoExposureLowPercent; // 0x330(0x04)
	float AutoExposureHighPercent; // 0x334(0x04)
	float AutoExposureMinBrightness; // 0x338(0x04)
	float AutoExposureMaxBrightness; // 0x33c(0x04)
	float AutoExposureSpeedUp; // 0x340(0x04)
	float AutoExposureSpeedDown; // 0x344(0x04)
	float HistogramLogMin; // 0x348(0x04)
	float HistogramLogMax; // 0x34c(0x04)
	float AutoExposureCalibrationConstant; // 0x350(0x04)
	float LensFlareIntensity; // 0x354(0x04)
	struct FLinearColor LensFlareTint; // 0x358(0x10)
	float LensFlareBokehSize; // 0x368(0x04)
	float LensFlareThreshold; // 0x36c(0x04)
	struct UTexture* LensFlareBokehShape; // 0x370(0x08)
	struct FLinearColor LensFlareTints[0x8]; // 0x378(0x80)
	float VignetteIntensity; // 0x3f8(0x04)
	float GrainJitter; // 0x3fc(0x04)
	float GrainIntensity; // 0x400(0x04)
	float AmbientOcclusionIntensity; // 0x404(0x04)
	float AmbientOcclusionStaticFraction; // 0x408(0x04)
	float AmbientOcclusionRadius; // 0x40c(0x04)
	char AmbientOcclusionRadiusInWS : 1; // 0x410(0x01)
	char UnknownData_410_1 : 7; // 0x410(0x01)
	char UnknownData_411[0x3]; // 0x411(0x03)
	float AmbientOcclusionFadeDistance; // 0x414(0x04)
	float AmbientOcclusionFadeRadius; // 0x418(0x04)
	float AmbientOcclusionDistance; // 0x41c(0x04)
	float AmbientOcclusionPower; // 0x420(0x04)
	float AmbientOcclusionBias; // 0x424(0x04)
	float AmbientOcclusionQuality; // 0x428(0x04)
	float AmbientOcclusionMipBlend; // 0x42c(0x04)
	float AmbientOcclusionMipScale; // 0x430(0x04)
	float AmbientOcclusionMipThreshold; // 0x434(0x04)
	float AmbientOcclusionTemporalBlendWeight; // 0x438(0x04)
	char RayTracingAO : 1; // 0x43c(0x01)
	char UnknownData_43C_1 : 7; // 0x43c(0x01)
	char UnknownData_43D[0x3]; // 0x43d(0x03)
	int32_t RayTracingAOSamplesPerPixel; // 0x440(0x04)
	struct FLinearColor IndirectLightingColor; // 0x444(0x10)
	float IndirectLightingIntensity; // 0x454(0x04)
	enum class ERayTracingGlobalIlluminationType RayTracingGIType; // 0x458(0x01)
	char UnknownData_459[0x3]; // 0x459(0x03)
	int32_t RayTracingGIMaxBounces; // 0x45c(0x04)
	int32_t RayTracingGISamplesPerPixel; // 0x460(0x04)
	float ColorGradingIntensity; // 0x464(0x04)
	struct UTexture* ColorGradingLUT; // 0x468(0x08)
	float DepthOfFieldSensorWidth; // 0x470(0x04)
	float DepthOfFieldFocalDistance; // 0x474(0x04)
	float DepthOfFieldDepthBlurAmount; // 0x478(0x04)
	float DepthOfFieldDepthBlurRadius; // 0x47c(0x04)
	float DepthOfFieldFocalRegion; // 0x480(0x04)
	float DepthOfFieldNearTransitionRegion; // 0x484(0x04)
	float DepthOfFieldFarTransitionRegion; // 0x488(0x04)
	float DepthOfFieldScale; // 0x48c(0x04)
	float DepthOfFieldNearBlurSize; // 0x490(0x04)
	float DepthOfFieldFarBlurSize; // 0x494(0x04)
	float DepthOfFieldOcclusion; // 0x498(0x04)
	float DepthOfFieldSkyFocusDistance; // 0x49c(0x04)
	float DepthOfFieldVignetteSize; // 0x4a0(0x04)
	float MotionBlurAmount; // 0x4a4(0x04)
	float MotionBlurMax; // 0x4a8(0x04)
	int32_t MotionBlurTargetFPS; // 0x4ac(0x04)
	float MotionBlurPerObjectSize; // 0x4b0(0x04)
	float LPVIntensity; // 0x4b4(0x04)
	float LPVVplInjectionBias; // 0x4b8(0x04)
	float LPVSize; // 0x4bc(0x04)
	float LPVSecondaryOcclusionIntensity; // 0x4c0(0x04)
	float LPVSecondaryBounceIntensity; // 0x4c4(0x04)
	float LPVGeometryVolumeBias; // 0x4c8(0x04)
	float LPVEmissiveInjectionIntensity; // 0x4cc(0x04)
	float LPVDirectionalOcclusionIntensity; // 0x4d0(0x04)
	float LPVDirectionalOcclusionRadius; // 0x4d4(0x04)
	float LPVDiffuseOcclusionExponent; // 0x4d8(0x04)
	float LPVSpecularOcclusionExponent; // 0x4dc(0x04)
	float LPVDiffuseOcclusionIntensity; // 0x4e0(0x04)
	float LPVSpecularOcclusionIntensity; // 0x4e4(0x04)
	enum class EReflectionsType ReflectionsType; // 0x4e8(0x01)
	char UnknownData_4E9[0x3]; // 0x4e9(0x03)
	float ScreenSpaceReflectionIntensity; // 0x4ec(0x04)
	float ScreenSpaceReflectionQuality; // 0x4f0(0x04)
	float ScreenSpaceReflectionMaxRoughness; // 0x4f4(0x04)
	float RayTracingReflectionsMaxRoughness; // 0x4f8(0x04)
	int32_t RayTracingReflectionsMaxBounces; // 0x4fc(0x04)
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x500(0x04)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x504(0x01)
	char RayTracingReflectionsTranslucency : 1; // 0x505(0x01)
	char UnknownData_505_1 : 7; // 0x505(0x01)
	enum class ETranslucencyType TranslucencyType; // 0x506(0x01)
	char UnknownData_507[0x1]; // 0x507(0x01)
	float RayTracingTranslucencyMaxRoughness; // 0x508(0x04)
	int32_t RayTracingTranslucencyRefractionRays; // 0x50c(0x04)
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x510(0x04)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x514(0x01)
	char RayTracingTranslucencyRefraction : 1; // 0x515(0x01)
	char UnknownData_515_1 : 7; // 0x515(0x01)
	char UnknownData_516[0x2]; // 0x516(0x02)
	int32_t PathTracingMaxBounces; // 0x518(0x04)
	int32_t PathTracingSamplesPerPixel; // 0x51c(0x04)
	float LPVFadeRange; // 0x520(0x04)
	float LPVDirectionalOcclusionFadeRange; // 0x524(0x04)
	float ScreenPercentage; // 0x528(0x04)
	char UnknownData_52C[0x4]; // 0x52c(0x04)
	struct FWeightedBlendables WeightedBlendables; // 0x530(0x10)
};

// ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendables {
	struct TArray<struct FWeightedBlendable> Array; // 0x00(0x10)
};

// ScriptStruct Engine.WeightedBlendable
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendable {
	float Weight; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UObject* Object; // 0x08(0x08)
};

// ScriptStruct Engine.CanvasIcon
// Size: 0x18 (Inherited: 0x00)
struct FCanvasIcon {
	struct UTexture* Texture; // 0x00(0x08)
	float U; // 0x08(0x04)
	float V; // 0x0c(0x04)
	float UL; // 0x10(0x04)
	float VL; // 0x14(0x04)
};

// ScriptStruct Engine.WrappedStringElement
// Size: 0x18 (Inherited: 0x00)
struct FWrappedStringElement {
	struct FString Value; // 0x00(0x10)
	struct FVector2D LineExtent; // 0x10(0x08)
};

// ScriptStruct Engine.TextSizingParameters
// Size: 0x28 (Inherited: 0x00)
struct FTextSizingParameters {
	float DrawX; // 0x00(0x04)
	float DrawY; // 0x04(0x04)
	float DrawXL; // 0x08(0x04)
	float DrawYL; // 0x0c(0x04)
	struct FVector2D Scaling; // 0x10(0x08)
	struct UFont* DrawFont; // 0x18(0x08)
	struct FVector2D SpacingAdjust; // 0x20(0x08)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.FindFloorResult
// Size: 0x94 (Inherited: 0x00)
struct FFindFloorResult {
	char bBlockingHit : 1; // 0x00(0x01)
	char bWalkableFloor : 1; // 0x00(0x01)
	char bLineTrace : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float FloorDist; // 0x04(0x04)
	float LineDist; // 0x08(0x04)
	struct FHitResult HitResult; // 0x0c(0x88)
};

// ScriptStruct Engine.ChildActorComponentInstanceData
// Size: 0xd8 (Inherited: 0xa8)
struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	struct AActor* ChildActorClass; // 0xa8(0x08)
	struct FName ChildActorName; // 0xb0(0x08)
	struct TArray<struct FChildActorAttachedActorInfo> AttachedActors; // 0xb8(0x10)
	char UnknownData_C8[0x10]; // 0xc8(0x10)
};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// Size: 0x40 (Inherited: 0x00)
struct FChildActorAttachedActorInfo {
	struct FWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// ScriptStruct Engine.CustomProfile
// Size: 0x18 (Inherited: 0x00)
struct FCustomProfile {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x08(0x10)
};

// ScriptStruct Engine.CustomChannelSetup
// Size: 0x0c (Inherited: 0x00)
struct FCustomChannelSetup {
	char Channel; // 0x00(0x01)
	char DefaultResponse; // 0x01(0x01)
	bool bTraceType; // 0x02(0x01)
	bool bStaticObject; // 0x03(0x01)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct Engine.CollisionResponseTemplate
// Size: 0x48 (Inherited: 0x00)
struct FCollisionResponseTemplate {
	struct FName Name; // 0x00(0x08)
	char CollisionEnabled; // 0x08(0x01)
	char UnknownData_9[0x1]; // 0x09(0x01)
	bool bCanModify; // 0x0a(0x01)
	char UnknownData_B[0x21]; // 0x0b(0x21)
	struct FName ObjectTypeName; // 0x2c(0x08)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x38(0x10)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintComponentDelegateBinding {
	struct FName ComponentPropertyName; // 0x00(0x08)
	struct FName DelegatePropertyName; // 0x08(0x08)
	struct FName FunctionNameToBind; // 0x10(0x08)
};

// ScriptStruct Engine.MeshUVChannelInfo
// Size: 0x14 (Inherited: 0x00)
struct FMeshUVChannelInfo {
	bool bInitialized; // 0x00(0x01)
	bool bOverrideDensities; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float LocalUVDensities[0x4]; // 0x04(0x10)
};

// ScriptStruct Engine.AutoCompleteNode
// Size: 0x28 (Inherited: 0x00)
struct FAutoCompleteNode {
	int32_t IndexChar; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> AutoCompleteListIndices; // 0x08(0x10)
	char UnknownData_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Engine.AngularDriveConstraint
// Size: 0x4c (Inherited: 0x00)
struct FAngularDriveConstraint {
	struct FConstraintDrive TwistDrive; // 0x00(0x10)
	struct FConstraintDrive SwingDrive; // 0x10(0x10)
	struct FConstraintDrive SlerpDrive; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0x0c)
	struct FVector AngularVelocityTarget; // 0x3c(0x0c)
	char AngularDriveMode; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.ConstraintDrive
// Size: 0x10 (Inherited: 0x00)
struct FConstraintDrive {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float MaxForce; // 0x08(0x04)
	char bEnablePositionDrive : 1; // 0x0c(0x01)
	char bEnableVelocityDrive : 1; // 0x0c(0x01)
	char UnknownData_C_2 : 6; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.LinearDriveConstraint
// Size: 0x4c (Inherited: 0x00)
struct FLinearDriveConstraint {
	struct FVector PositionTarget; // 0x00(0x0c)
	struct FVector VelocityTarget; // 0x0c(0x0c)
	struct FConstraintDrive XDrive; // 0x18(0x10)
	struct FConstraintDrive YDrive; // 0x28(0x10)
	struct FConstraintDrive ZDrive; // 0x38(0x10)
	char bEnablePositionDrive : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.ConstraintInstance
// Size: 0x1b8 (Inherited: 0x00)
struct FConstraintInstance {
	char UnknownData_0[0x18]; // 0x00(0x18)
	struct FName JointName; // 0x18(0x08)
	struct FName ConstraintBone1; // 0x20(0x08)
	struct FName ConstraintBone2; // 0x28(0x08)
	struct FVector Pos1; // 0x30(0x0c)
	struct FVector PriAxis1; // 0x3c(0x0c)
	struct FVector SecAxis1; // 0x48(0x0c)
	struct FVector Pos2; // 0x54(0x0c)
	struct FVector PriAxis2; // 0x60(0x0c)
	struct FVector SecAxis2; // 0x6c(0x0c)
	struct FRotator AngularRotationOffset; // 0x78(0x0c)
	char bScaleLinearLimits : 1; // 0x84(0x01)
	char UnknownData_84_1 : 7; // 0x84(0x01)
	char UnknownData_85[0x7]; // 0x85(0x07)
	struct FConstraintProfileProperties ProfileInstance; // 0x8c(0x104)
	char UnknownData_190[0x28]; // 0x190(0x28)
};

// ScriptStruct Engine.ConstraintProfileProperties
// Size: 0x104 (Inherited: 0x00)
struct FConstraintProfileProperties {
	float ProjectionLinearTolerance; // 0x00(0x04)
	float ProjectionAngularTolerance; // 0x04(0x04)
	float LinearBreakThreshold; // 0x08(0x04)
	float AngularBreakThreshold; // 0x0c(0x04)
	struct FLinearConstraint LinearLimit; // 0x10(0x1c)
	struct FConeConstraint ConeLimit; // 0x2c(0x20)
	struct FTwistConstraint TwistLimit; // 0x4c(0x1c)
	struct FLinearDriveConstraint LinearDrive; // 0x68(0x4c)
	struct FAngularDriveConstraint AngularDrive; // 0xb4(0x4c)
	char bDisableCollision : 1; // 0x100(0x01)
	char bParentDominates : 1; // 0x100(0x01)
	char bEnableProjection : 1; // 0x100(0x01)
	char bAngularBreakable : 1; // 0x100(0x01)
	char bLinearBreakable : 1; // 0x100(0x01)
	char UnknownData_100_5 : 3; // 0x100(0x01)
	char UnknownData_101[0x3]; // 0x101(0x03)
};

// ScriptStruct Engine.ConstraintBaseParams
// Size: 0x14 (Inherited: 0x00)
struct FConstraintBaseParams {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float Restitution; // 0x08(0x04)
	float ContactDistance; // 0x0c(0x04)
	char bSoftConstraint : 1; // 0x10(0x01)
	char UnknownData_10_1 : 7; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.TwistConstraint
// Size: 0x1c (Inherited: 0x14)
struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14(0x04)
	char TwistMotion; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.ConeConstraint
// Size: 0x20 (Inherited: 0x14)
struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14(0x04)
	float Swing2LimitDegrees; // 0x18(0x04)
	char Swing1Motion; // 0x1c(0x01)
	char Swing2Motion; // 0x1d(0x01)
	char UnknownData_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Engine.LinearConstraint
// Size: 0x1c (Inherited: 0x14)
struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14(0x04)
	char XMotion; // 0x18(0x01)
	char YMotion; // 0x19(0x01)
	char ZMotion; // 0x1a(0x01)
	char UnknownData_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.CullDistanceSizePair
// Size: 0x08 (Inherited: 0x00)
struct FCullDistanceSizePair {
	float Size; // 0x00(0x04)
	float CullDistance; // 0x04(0x04)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x208 (Inherited: 0x00)
struct FRuntimeCurveLinearColor {
	struct FRichCurve ColorCurves[0x4]; // 0x00(0x200)
	struct UCurveLinearColor* ExternalCurve; // 0x200(0x08)
};

// ScriptStruct Engine.NamedCurveValue
// Size: 0x0c (Inherited: 0x00)
struct FNamedCurveValue {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FCurveTableRowHandle {
	struct UCurveTable* CurveTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 (Inherited: 0x00)
struct FDataTableCategoryHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName ColumnName; // 0x08(0x08)
	struct FName RowContents; // 0x10(0x08)
};

// ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FDataTableRowHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// Size: 0x10 (Inherited: 0x00)
struct FDebugCameraControllerSettingsViewModeIndex {
	char UnknownData_0[0x8]; // 0x00(0x08)
	char ViewModeIndex; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.DebugDisplayProperty
// Size: 0x20 (Inherited: 0x00)
struct FDebugDisplayProperty {
	struct UObject* obj; // 0x00(0x08)
	struct UObject* WithinClass; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.MulticastRecordOptions
// Size: 0x18 (Inherited: 0x00)
struct FMulticastRecordOptions {
	struct FString FuncPathName; // 0x00(0x10)
	bool bServerSkip; // 0x10(0x01)
	bool bClientSkip; // 0x11(0x01)
	char UnknownData_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// Size: 0xb0 (Inherited: 0x00)
struct FRollbackNetStartupActorInfo {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UObject* Archetype; // 0x08(0x08)
	char UnknownData_10[0x28]; // 0x10(0x28)
	struct ULevel* Level; // 0x38(0x08)
	char UnknownData_40[0x60]; // 0x40(0x60)
	struct TArray<struct UObject*> ObjReferences; // 0xa0(0x10)
};

// ScriptStruct Engine.LevelNameAndTime
// Size: 0x18 (Inherited: 0x00)
struct FLevelNameAndTime {
	struct FString LevelName; // 0x00(0x10)
	uint32_t LevelChangeTimeInMS; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x00)
struct FDialogueWaveParameter {
	struct UDialogueWave* DialogueWave; // 0x00(0x08)
	struct FDialogueContext Context; // 0x08(0x18)
};

// ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x00)
struct FDialogueContext {
	struct UDialogueVoice* Speaker; // 0x00(0x08)
	struct TArray<struct UDialogueVoice*> Targets; // 0x08(0x10)
};

// ScriptStruct Engine.DialogueContextMapping
// Size: 0x38 (Inherited: 0x00)
struct FDialogueContextMapping {
	struct FDialogueContext Context; // 0x00(0x18)
	struct USoundWave* SoundWave; // 0x18(0x08)
	struct FString LocalizationKeyFormat; // 0x20(0x10)
	struct UDialogueSoundWaveProxy* Proxy; // 0x30(0x08)
};

// ScriptStruct Engine.RawDistributionFloat
// Size: 0x30 (Inherited: 0x20)
struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
	struct UDistributionFloat* Distribution; // 0x28(0x08)
};

// ScriptStruct Engine.RawDistributionVector
// Size: 0x48 (Inherited: 0x20)
struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
	struct FVector MinValueVec; // 0x28(0x0c)
	struct FVector MaxValueVec; // 0x34(0x0c)
	struct UDistributionVector* Distribution; // 0x40(0x08)
};

// ScriptStruct Engine.GraphReference
// Size: 0x20 (Inherited: 0x00)
struct FGraphReference {
	struct UEdGraph* MacroGraph; // 0x00(0x08)
	struct UBlueprint* GraphBlueprint; // 0x08(0x08)
	struct FGuid GraphGuid; // 0x10(0x10)
};

// ScriptStruct Engine.EdGraphPinReference
// Size: 0x18 (Inherited: 0x00)
struct FEdGraphPinReference {
	struct FWeakObjectPtr<struct UEdGraphNode> OwningNode; // 0x00(0x08)
	struct FGuid PinID; // 0x08(0x10)
};

// ScriptStruct Engine.EdGraphSchemaAction
// Size: 0x100 (Inherited: 0x00)
struct FEdGraphSchemaAction {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FText MenuDescription; // 0x08(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32_t Grouping; // 0x68(0x04)
	int32_t SectionID; // 0x6c(0x04)
	struct TArray<struct FString> MenuDescriptionArray; // 0x70(0x10)
	struct TArray<struct FString> FullSearchTitlesArray; // 0x80(0x10)
	struct TArray<struct FString> FullSearchKeywordsArray; // 0x90(0x10)
	struct TArray<struct FString> FullSearchCategoryArray; // 0xa0(0x10)
	struct TArray<struct FString> LocalizedMenuDescriptionArray; // 0xb0(0x10)
	struct TArray<struct FString> LocalizedFullSearchTitlesArray; // 0xc0(0x10)
	struct TArray<struct FString> LocalizedFullSearchKeywordsArray; // 0xd0(0x10)
	struct TArray<struct FString> LocalizedFullSearchCategoryArray; // 0xe0(0x10)
	struct FString SearchText; // 0xf0(0x10)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// Size: 0x108 (Inherited: 0x100)
struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	struct UEdGraphNode* NodeTemplate; // 0x100(0x08)
};

// ScriptStruct Engine.PluginRedirect
// Size: 0x20 (Inherited: 0x00)
struct FPluginRedirect {
	struct FString OldPluginName; // 0x00(0x10)
	struct FString NewPluginName; // 0x10(0x10)
};

// ScriptStruct Engine.StructRedirect
// Size: 0x10 (Inherited: 0x00)
struct FStructRedirect {
	struct FName OldStructName; // 0x00(0x08)
	struct FName NewStructName; // 0x08(0x08)
};

// ScriptStruct Engine.ClassRedirect
// Size: 0x3c (Inherited: 0x00)
struct FClassRedirect {
	struct FName ObjectName; // 0x00(0x08)
	struct FName OldClassName; // 0x08(0x08)
	struct FName NewClassName; // 0x10(0x08)
	struct FName OldSubobjName; // 0x18(0x08)
	struct FName NewSubobjName; // 0x20(0x08)
	struct FName NewClassClass; // 0x28(0x08)
	struct FName NewClassPackage; // 0x30(0x08)
	bool InstanceOnly; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
};

// ScriptStruct Engine.GameNameRedirect
// Size: 0x10 (Inherited: 0x00)
struct FGameNameRedirect {
	struct FName OldGameName; // 0x00(0x08)
	struct FName NewGameName; // 0x08(0x08)
};

// ScriptStruct Engine.ScreenMessageString
// Size: 0x30 (Inherited: 0x00)
struct FScreenMessageString {
	uint64_t Key; // 0x00(0x08)
	struct FString ScreenMessage; // 0x08(0x10)
	struct FColor DisplayColor; // 0x18(0x04)
	float TimeToDisplay; // 0x1c(0x04)
	float CurrentTimeDisplayed; // 0x20(0x04)
	struct FVector2D TextScale; // 0x24(0x08)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.DropNoteInfo
// Size: 0x28 (Inherited: 0x00)
struct FDropNoteInfo {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FString Comment; // 0x18(0x10)
};

// ScriptStruct Engine.StatColorMapping
// Size: 0x28 (Inherited: 0x00)
struct FStatColorMapping {
	struct FString StatName; // 0x00(0x10)
	struct TArray<struct FStatColorMapEntry> ColorMap; // 0x10(0x10)
	char DisableBlend : 1; // 0x20(0x01)
	char UnknownData_20_1 : 7; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.StatColorMapEntry
// Size: 0x08 (Inherited: 0x00)
struct FStatColorMapEntry {
	float In; // 0x00(0x04)
	struct FColor Out; // 0x04(0x04)
};

// ScriptStruct Engine.WorldContext
// Size: 0x280 (Inherited: 0x00)
struct FWorldContext {
	char UnknownData_0[0xd0]; // 0x00(0xd0)
	struct FURL LastURL; // 0xd0(0x68)
	struct FURL LastRemoteURL; // 0x138(0x68)
	struct UPendingNetGame* PendingNetGame; // 0x1a0(0x08)
	struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1a8(0x10)
	char UnknownData_1B8[0x10]; // 0x1b8(0x10)
	struct TArray<struct ULevel*> LoadedLevelsForPendingMapChange; // 0x1c8(0x10)
	char UnknownData_1D8[0x18]; // 0x1d8(0x18)
	struct TArray<struct UObjectReferencer*> ObjectReferencers; // 0x1f0(0x10)
	struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x200(0x10)
	struct UGameViewportClient* GameViewport; // 0x210(0x08)
	struct UGameInstance* OwningGameInstance; // 0x218(0x08)
	struct TArray<struct FNamedNetDriver> ActiveNetDrivers; // 0x220(0x10)
	char UnknownData_230[0x50]; // 0x230(0x50)
};

// ScriptStruct Engine.NamedNetDriver
// Size: 0x10 (Inherited: 0x00)
struct FNamedNetDriver {
	struct UNetDriver* NetDriver; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.LevelStreamingStatus
// Size: 0x10 (Inherited: 0x00)
struct FLevelStreamingStatus {
	struct FName PackageName; // 0x00(0x08)
	char bShouldBeLoaded : 1; // 0x08(0x01)
	char bShouldBeVisible : 1; // 0x08(0x01)
	char UnknownData_8_2 : 6; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	uint32_t LODIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// Size: 0x38 (Inherited: 0x00)
struct FFullyLoadedPackagesInfo {
	char FullyLoadType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FString Tag; // 0x08(0x10)
	struct TArray<struct FName> PackagesToLoad; // 0x18(0x10)
	struct TArray<struct UObject*> LoadedObjects; // 0x28(0x10)
};

// ScriptStruct Engine.URL
// Size: 0x68 (Inherited: 0x00)
struct FURL {
	struct FString Protocol; // 0x00(0x10)
	struct FString Host; // 0x10(0x10)
	int32_t Port; // 0x20(0x04)
	int32_t Valid; // 0x24(0x04)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)
};

// ScriptStruct Engine.NetDriverDefinition
// Size: 0x18 (Inherited: 0x00)
struct FNetDriverDefinition {
	struct FName DefName; // 0x00(0x08)
	struct FName DriverClassName; // 0x08(0x08)
	struct FName DriverClassNameFallback; // 0x10(0x08)
};

// ScriptStruct Engine.ExposureSettings
// Size: 0x08 (Inherited: 0x00)
struct FExposureSettings {
	float FixedEV100; // 0x00(0x04)
	bool bFixed; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.TickPrerequisite
// Size: 0x10 (Inherited: 0x00)
struct FTickPrerequisite {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.CanvasUVTri
// Size: 0x60 (Inherited: 0x00)
struct FCanvasUVTri {
	struct FVector2D V0_Pos; // 0x00(0x08)
	struct FVector2D V0_UV; // 0x08(0x08)
	struct FLinearColor V0_Color; // 0x10(0x10)
	struct FVector2D V1_Pos; // 0x20(0x08)
	struct FVector2D V1_UV; // 0x28(0x08)
	struct FLinearColor V1_Color; // 0x30(0x10)
	struct FVector2D V2_Pos; // 0x40(0x08)
	struct FVector2D V2_UV; // 0x48(0x08)
	struct FLinearColor V2_Color; // 0x50(0x10)
};

// ScriptStruct Engine.FontRenderInfo
// Size: 0x28 (Inherited: 0x00)
struct FFontRenderInfo {
	char bClipText : 1; // 0x00(0x01)
	char bEnableShadow : 1; // 0x00(0x01)
	char UnknownData_0_2 : 6; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FDepthFieldGlowInfo GlowInfo; // 0x04(0x24)
};

// ScriptStruct Engine.DepthFieldGlowInfo
// Size: 0x24 (Inherited: 0x00)
struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x00(0x01)
	char UnknownData_0_1 : 7; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FLinearColor GlowColor; // 0x04(0x10)
	struct FVector2D GlowOuterRadius; // 0x14(0x08)
	struct FVector2D GlowInnerRadius; // 0x1c(0x08)
};

// ScriptStruct Engine.Redirector
// Size: 0x10 (Inherited: 0x00)
struct FRedirector {
	struct FName OldName; // 0x00(0x08)
	struct FName NewName; // 0x08(0x08)
};

// ScriptStruct Engine.CollectionReference
// Size: 0x08 (Inherited: 0x00)
struct FCollectionReference {
	struct FName CollectionName; // 0x00(0x08)
};

// ScriptStruct Engine.ComponentReference
// Size: 0x28 (Inherited: 0x00)
struct FComponentReference {
	struct AActor* OtherActor; // 0x00(0x08)
	struct FName ComponentProperty; // 0x08(0x08)
	struct FString PathToComponent; // 0x10(0x10)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Engine.ConstrainComponentPropName
// Size: 0x08 (Inherited: 0x00)
struct FConstrainComponentPropName {
	struct FName ComponentName; // 0x00(0x08)
};

// ScriptStruct Engine.DamageEvent
// Size: 0x10 (Inherited: 0x00)
struct FDamageEvent {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UDamageType* DamageTypeClass; // 0x08(0x08)
};

// ScriptStruct Engine.RadialDamageEvent
// Size: 0x40 (Inherited: 0x10)
struct FRadialDamageEvent : FDamageEvent {
	struct FRadialDamageParams Params; // 0x10(0x14)
	struct FVector Origin; // 0x24(0x0c)
	struct TArray<struct FHitResult> ComponentHits; // 0x30(0x10)
};

// ScriptStruct Engine.RadialDamageParams
// Size: 0x14 (Inherited: 0x00)
struct FRadialDamageParams {
	float BaseDamage; // 0x00(0x04)
	float MinimumDamage; // 0x04(0x04)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float DamageFalloff; // 0x10(0x04)
};

// ScriptStruct Engine.PointDamageEvent
// Size: 0xa8 (Inherited: 0x10)
struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10(0x04)
	struct FVector_NetQuantizeNormal ShotDirection; // 0x14(0x0c)
	struct FHitResult HitInfo; // 0x20(0x88)
};

// ScriptStruct Engine.SkeletalMeshBuildSettings
// Size: 0x14 (Inherited: 0x00)
struct FSkeletalMeshBuildSettings {
	char bRecomputeNormals : 1; // 0x00(0x01)
	char bRecomputeTangents : 1; // 0x00(0x01)
	char bUseMikkTSpace : 1; // 0x00(0x01)
	char bComputeWeightedNormals : 1; // 0x00(0x01)
	char bRemoveDegenerates : 1; // 0x00(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x00(0x01)
	char bUseFullPrecisionUVs : 1; // 0x00(0x01)
	char bBuildAdjacencyBuffer : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float ThresholdPosition; // 0x04(0x04)
	float ThresholdTangentNormal; // 0x08(0x04)
	float ThresholdUV; // 0x0c(0x04)
	float MorphThresholdPosition; // 0x10(0x04)
};

// ScriptStruct Engine.MeshBuildSettings
// Size: 0x30 (Inherited: 0x00)
struct FMeshBuildSettings {
	char bUseMikkTSpace : 1; // 0x00(0x01)
	char bRecomputeNormals : 1; // 0x00(0x01)
	char bRecomputeTangents : 1; // 0x00(0x01)
	char bComputeWeightedNormals : 1; // 0x00(0x01)
	char bRemoveDegenerates : 1; // 0x00(0x01)
	char bBuildAdjacencyBuffer : 1; // 0x00(0x01)
	char bBuildReversedIndexBuffer : 1; // 0x00(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x00(0x01)
	char bUseFullPrecisionUVs : 1; // 0x01(0x01)
	char bGenerateLightmapUVs : 1; // 0x01(0x01)
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x01(0x01)
	char bSupportFaceRemap : 1; // 0x01(0x01)
	char UnknownData_1_4 : 4; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	int32_t MinLightmapResolution; // 0x04(0x04)
	int32_t SrcLightmapIndex; // 0x08(0x04)
	int32_t DstLightmapIndex; // 0x0c(0x04)
	float BuildScale; // 0x10(0x04)
	struct FVector BuildScale3D; // 0x14(0x0c)
	float DistanceFieldResolutionScale; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x28(0x08)
};

// ScriptStruct Engine.POV
// Size: 0x1c (Inherited: 0x00)
struct FPOV {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// Size: 0x88 (Inherited: 0x00)
struct FAnimUpdateRateParameters {
	char UnknownData_0[0x1]; // 0x00(0x01)
	enum class EUpdateRateShiftBucket ShiftBucket; // 0x01(0x01)
	char bInterpolateSkippedFrames : 1; // 0x02(0x01)
	char bShouldUseLodMap : 1; // 0x02(0x01)
	char bShouldUseMinLod : 1; // 0x02(0x01)
	char bSkipUpdate : 1; // 0x02(0x01)
	char bSkipEvaluation : 1; // 0x02(0x01)
	char UnknownData_2_5 : 3; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	int32_t UpdateRate; // 0x04(0x04)
	int32_t EvaluationRate; // 0x08(0x04)
	float TickedPoseOffestTime; // 0x0c(0x04)
	float AdditionalTime; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	int32_t BaseNonRenderedUpdateRate; // 0x18(0x04)
	int32_t MaxEvalRateForInterpolation; // 0x1c(0x04)
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20(0x10)
	struct TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x30(0x50)
	int32_t SkippedUpdateFrames; // 0x80(0x04)
	int32_t SkippedEvalFrames; // 0x84(0x04)
};

// ScriptStruct Engine.AnimSlotDesc
// Size: 0x0c (Inherited: 0x00)
struct FAnimSlotDesc {
	struct FName slotName; // 0x00(0x08)
	int32_t NumChannels; // 0x08(0x04)
};

// ScriptStruct Engine.AnimSlotInfo
// Size: 0x18 (Inherited: 0x00)
struct FAnimSlotInfo {
	struct FName slotName; // 0x00(0x08)
	struct TArray<float> ChannelWeights; // 0x08(0x10)
};

// ScriptStruct Engine.MTDResult
// Size: 0x10 (Inherited: 0x00)
struct FMTDResult {
	struct FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// Size: 0x18 (Inherited: 0x00)
struct FPrimitiveMaterialRef {
	struct UPrimitiveComponent* Primitive; // 0x00(0x08)
	struct UDecalComponent* Decal; // 0x08(0x08)
	int32_t ElementIndex; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.SwarmDebugOptions
// Size: 0x04 (Inherited: 0x00)
struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x00(0x01)
	char bForceContentExport : 1; // 0x00(0x01)
	char bInitialized : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.LightmassDebugOptions
// Size: 0x10 (Inherited: 0x00)
struct FLightmassDebugOptions {
	char bDebugMode : 1; // 0x00(0x01)
	char bStatsEnabled : 1; // 0x00(0x01)
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float CoplanarTolerance; // 0x04(0x04)
	char bUseImmediateImport : 1; // 0x08(0x01)
	char bImmediateProcessMappings : 1; // 0x08(0x01)
	char bSortMappings : 1; // 0x08(0x01)
	char bDumpBinaryFiles : 1; // 0x08(0x01)
	char bDebugMaterials : 1; // 0x08(0x01)
	char bPadMappings : 1; // 0x08(0x01)
	char bDebugPaddings : 1; // 0x08(0x01)
	char bOnlyCalcDebugTexelMappings : 1; // 0x08(0x01)
	char bUseRandomColors : 1; // 0x09(0x01)
	char bColorBordersGreen : 1; // 0x09(0x01)
	char bColorByExecutionTime : 1; // 0x09(0x01)
	char UnknownData_9_3 : 5; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	float ExecutionTimeDivisor; // 0x0c(0x04)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// Size: 0x18 (Inherited: 0x00)
struct FLightmassPrimitiveSettings {
	char bUseTwoSidedLighting : 1; // 0x00(0x01)
	char bShadowIndirectOnly : 1; // 0x00(0x01)
	char bUseEmissiveForStaticLighting : 1; // 0x00(0x01)
	char bUseVertexNormalForHemisphereGather : 1; // 0x00(0x01)
	char UnknownData_0_4 : 4; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float EmissiveLightFalloffExponent; // 0x04(0x04)
	float EmissiveLightExplicitInfluenceRadius; // 0x08(0x04)
	float EmissiveBoost; // 0x0c(0x04)
	float DiffuseBoost; // 0x10(0x04)
	float FullyOccludedSamplesFraction; // 0x14(0x04)
};

// ScriptStruct Engine.LightmassLightSettings
// Size: 0x0c (Inherited: 0x00)
struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// Size: 0x10 (Inherited: 0x0c)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0x0c(0x04)
};

// ScriptStruct Engine.LightmassPointLightSettings
// Size: 0x0c (Inherited: 0x0c)
struct FLightmassPointLightSettings : FLightmassLightSettings {
};

// ScriptStruct Engine.BasedPosition
// Size: 0x38 (Inherited: 0x00)
struct FBasedPosition {
	struct AActor* Base; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	struct FVector CachedBaseLocation; // 0x14(0x0c)
	struct FRotator CachedBaseRotation; // 0x20(0x0c)
	struct FVector CachedTransPosition; // 0x2c(0x0c)
};

// ScriptStruct Engine.FractureEffect
// Size: 0x10 (Inherited: 0x00)
struct FFractureEffect {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct USoundBase* Sound; // 0x08(0x08)
};

// ScriptStruct Engine.CollisionImpactData
// Size: 0x28 (Inherited: 0x00)
struct FCollisionImpactData {
	struct TArray<struct FRigidBodyContactInfo> ContactInfos; // 0x00(0x10)
	struct FVector TotalNormalImpulse; // 0x10(0x0c)
	struct FVector TotalFrictionImpulse; // 0x1c(0x0c)
};

// ScriptStruct Engine.RigidBodyContactInfo
// Size: 0x30 (Inherited: 0x00)
struct FRigidBodyContactInfo {
	struct FVector ContactPosition; // 0x00(0x0c)
	struct FVector ContactNormal; // 0x0c(0x0c)
	float ContactPenetration; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UPhysicalMaterial* PhysMaterial[0x2]; // 0x20(0x10)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// Size: 0x34 (Inherited: 0x00)
struct FRigidBodyErrorCorrection {
	float PingExtrapolation; // 0x00(0x04)
	float PingLimit; // 0x04(0x04)
	float ErrorPerLinearDifference; // 0x08(0x04)
	float ErrorPerAngularDifference; // 0x0c(0x04)
	float MaxRestoredStateError; // 0x10(0x04)
	float MaxLinearHardSnapDistance; // 0x14(0x04)
	float PositionLerp; // 0x18(0x04)
	float AngleLerp; // 0x1c(0x04)
	float LinearVelocityCoefficient; // 0x20(0x04)
	float AngularVelocityCoefficient; // 0x24(0x04)
	float ErrorAccumulationSeconds; // 0x28(0x04)
	float ErrorAccumulationDistanceSq; // 0x2c(0x04)
	float ErrorAccumulationSimilarity; // 0x30(0x04)
};

// ScriptStruct Engine.RigidBodyState
// Size: 0x40 (Inherited: 0x00)
struct FRigidBodyState {
	struct FVector_NetQuantize100 Position; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 LinVel; // 0x20(0x0c)
	struct FVector_NetQuantize100 AngVel; // 0x2c(0x0c)
	char Flags; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.MaterialShadingModelField
// Size: 0x02 (Inherited: 0x00)
struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x00(0x02)
};

// ScriptStruct Engine.ExponentialHeightFogData
// Size: 0x0c (Inherited: 0x00)
struct FExponentialHeightFogData {
	float FogDensity; // 0x00(0x04)
	float FogHeightFalloff; // 0x04(0x04)
	float FogHeightOffset; // 0x08(0x04)
};

// ScriptStruct Engine.FontCharacter
// Size: 0x18 (Inherited: 0x00)
struct FFontCharacter {
	int32_t StartU; // 0x00(0x04)
	int32_t StartV; // 0x04(0x04)
	int32_t USize; // 0x08(0x04)
	int32_t VSize; // 0x0c(0x04)
	char TextureIndex; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	int32_t VerticalOffset; // 0x14(0x04)
};

// ScriptStruct Engine.FontImportOptionsData
// Size: 0xb0 (Inherited: 0x00)
struct FFontImportOptionsData {
	struct FString FontName; // 0x00(0x10)
	float Height; // 0x10(0x04)
	char bEnableAntialiasing : 1; // 0x14(0x01)
	char bEnableBold : 1; // 0x14(0x01)
	char bEnableItalic : 1; // 0x14(0x01)
	char bEnableUnderline : 1; // 0x14(0x01)
	char bAlphaOnly : 1; // 0x14(0x01)
	char UnknownData_14_5 : 3; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	char CharacterSet; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString Chars; // 0x20(0x10)
	struct FString UnicodeRange; // 0x30(0x10)
	struct FString CharsFilePath; // 0x40(0x10)
	struct FString CharsFileWildcard; // 0x50(0x10)
	char bCreatePrintableOnly : 1; // 0x60(0x01)
	char bIncludeASCIIRange : 1; // 0x60(0x01)
	char UnknownData_60_2 : 6; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	struct FLinearColor ForegroundColor; // 0x64(0x10)
	char bEnableDropShadow : 1; // 0x74(0x01)
	char UnknownData_74_1 : 7; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
	int32_t TexturePageWidth; // 0x78(0x04)
	int32_t TexturePageMaxHeight; // 0x7c(0x04)
	int32_t XPadding; // 0x80(0x04)
	int32_t YPadding; // 0x84(0x04)
	int32_t ExtendBoxTop; // 0x88(0x04)
	int32_t ExtendBoxBottom; // 0x8c(0x04)
	int32_t ExtendBoxRight; // 0x90(0x04)
	int32_t ExtendBoxLeft; // 0x94(0x04)
	char bEnableLegacyMode : 1; // 0x98(0x01)
	char UnknownData_98_1 : 7; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	int32_t Kerning; // 0x9c(0x04)
	char bUseDistanceFieldAlpha : 1; // 0xa0(0x01)
	char UnknownData_A0_1 : 7; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	int32_t DistanceFieldScaleFactor; // 0xa4(0x04)
	float DistanceFieldScanRadiusScale; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xb0 (Inherited: 0xb0)
struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings {
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// Size: 0x90 (Inherited: 0x00)
struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x00(0x01)
	char bAffectsLeftSmall : 1; // 0x00(0x01)
	char bAffectsRightLarge : 1; // 0x00(0x01)
	char bAffectsRightSmall : 1; // 0x00(0x01)
	char UnknownData_0_4 : 4; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve Curve; // 0x08(0x88)
};

// ScriptStruct Engine.PredictProjectilePathResult
// Size: 0xb8 (Inherited: 0x00)
struct FPredictProjectilePathResult {
	struct TArray<struct FPredictProjectilePathPointData> PathData; // 0x00(0x10)
	struct FPredictProjectilePathPointData LastTraceDestination; // 0x10(0x1c)
	struct FHitResult HitResult; // 0x2c(0x88)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct Engine.PredictProjectilePathPointData
// Size: 0x1c (Inherited: 0x00)
struct FPredictProjectilePathPointData {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Time; // 0x18(0x04)
};

// ScriptStruct Engine.PredictProjectilePathParams
// Size: 0x60 (Inherited: 0x00)
struct FPredictProjectilePathParams {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector LaunchVelocity; // 0x0c(0x0c)
	bool bTraceWithCollision; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	float ProjectileRadius; // 0x1c(0x04)
	float MaxSimTime; // 0x20(0x04)
	bool bTraceWithChannel; // 0x24(0x01)
	char TraceChannel; // 0x25(0x01)
	char UnknownData_26[0x2]; // 0x26(0x02)
	struct TArray<char> ObjectTypes; // 0x28(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
	float SimFrequency; // 0x48(0x04)
	float OverrideGravityZ; // 0x4c(0x04)
	char DrawDebugType; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float DrawDebugTime; // 0x54(0x04)
	bool bTraceComplex; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// Size: 0x18 (Inherited: 0x00)
struct FActiveHapticFeedbackEffect {
	struct UHapticFeedbackEffect_Base* HapticEffect; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0x110 (Inherited: 0x00)
struct FHapticFeedbackDetails_Curve {
	struct FRuntimeFloatCurve Frequency; // 0x00(0x88)
	struct FRuntimeFloatCurve Amplitude; // 0x88(0x88)
};

// ScriptStruct Engine.ClusterNode
// Size: 0x40 (Inherited: 0x00)
struct FClusterNode {
	struct FVector BoundMin; // 0x00(0x0c)
	int32_t FirstChild; // 0x0c(0x04)
	struct FVector BoundMax; // 0x10(0x0c)
	int32_t LastChild; // 0x1c(0x04)
	int32_t FirstInstance; // 0x20(0x04)
	int32_t LastInstance; // 0x24(0x04)
	struct FVector MinInstanceScale; // 0x28(0x0c)
	struct FVector MaxInstanceScale; // 0x34(0x0c)
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// Size: 0x28 (Inherited: 0x00)
struct FClusterNode_DEPRECATED {
	struct FVector BoundMin; // 0x00(0x0c)
	int32_t FirstChild; // 0x0c(0x04)
	struct FVector BoundMax; // 0x10(0x0c)
	int32_t LastChild; // 0x1c(0x04)
	int32_t FirstInstance; // 0x20(0x04)
	int32_t LastInstance; // 0x24(0x04)
};

// ScriptStruct Engine.HLODProxyMesh
// Size: 0x30 (Inherited: 0x00)
struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x00(0x1c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UStaticMesh* StaticMesh; // 0x20(0x08)
	struct FName Key; // 0x28(0x08)
};

// ScriptStruct Engine.ImportanceTexture
// Size: 0x50 (Inherited: 0x00)
struct FImportanceTexture {
	struct FIntPoint Size; // 0x00(0x08)
	int32_t NumMips; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<float> MarginalCDF; // 0x10(0x10)
	struct TArray<float> ConditionalCDF; // 0x20(0x10)
	struct TArray<struct FColor> TextureData; // 0x30(0x10)
	struct FWeakObjectPtr<struct UTexture2D> Texture; // 0x40(0x08)
	char Weighting; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Engine.ComponentOverrideRecord
// Size: 0x78 (Inherited: 0x00)
struct FComponentOverrideRecord {
	struct UObject* ComponentClass; // 0x00(0x08)
	struct UActorComponent* ComponentTemplate; // 0x08(0x08)
	struct FComponentKey ComponentKey; // 0x10(0x20)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30(0x48)
};

// ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x00)
struct FComponentKey {
	struct UObject* OwnerClass; // 0x00(0x08)
	struct FName SCSVariableName; // 0x08(0x08)
	struct FGuid AssociatedGuid; // 0x10(0x10)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// Size: 0x04 (Inherited: 0x00)
struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x00(0x01)
	char bExecuteWhenPaused : 1; // 0x00(0x01)
	char bOverrideParentBinding : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// Size: 0x18 (Inherited: 0x04)
struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputActionName; // 0x04(0x08)
	char InputKeyEvent; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct FName FunctionNameToBind; // 0x10(0x08)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// Size: 0x14 (Inherited: 0x04)
struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputAxisName; // 0x04(0x08)
	struct FName FunctionNameToBind; // 0x0c(0x08)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// Size: 0x28 (Inherited: 0x04)
struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FKey AxisKey; // 0x08(0x18)
	struct FName FunctionNameToBind; // 0x20(0x08)
};

// ScriptStruct Engine.CachedKeyToActionInfo
// Size: 0x70 (Inherited: 0x00)
struct FCachedKeyToActionInfo {
	struct UPlayerInput* PlayerInput; // 0x00(0x08)
	char UnknownData_8[0x68]; // 0x08(0x68)
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// Size: 0x38 (Inherited: 0x04)
struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FInputChord InputChord; // 0x08(0x20)
	char InputKeyEvent; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	struct FName FunctionNameToBind; // 0x2c(0x08)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// Size: 0x10 (Inherited: 0x04)
struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	char InputKeyEvent; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FName FunctionNameToBind; // 0x08(0x08)
};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// Size: 0x140 (Inherited: 0xa8)
struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	struct UStaticMesh* StaticMesh; // 0xa8(0x08)
	struct FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xb0(0x40)
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xf0(0x10)
	struct TArray<float> PerInstanceSMCustomData; // 0x100(0x10)
	char UnknownData_110[0x20]; // 0x110(0x20)
	int32_t InstancingRandomSeed; // 0x130(0x04)
	char UnknownData_134[0xc]; // 0x134(0x0c)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// Size: 0x40 (Inherited: 0x00)
struct FInstancedStaticMeshInstanceData {
	struct FMatrix Transform; // 0x00(0x40)
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// Size: 0x40 (Inherited: 0x00)
struct FInstancedStaticMeshLightMapInstanceData {
	struct FTransform Transform; // 0x00(0x30)
	struct TArray<struct FGuid> MapBuildDataIds; // 0x30(0x10)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// Size: 0x08 (Inherited: 0x00)
struct FInstancedStaticMeshMappingInfo {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.IntegralCurve
// Size: 0x80 (Inherited: 0x68)
struct FIntegralCurve : FIndexedCurve {
	struct TArray<struct FIntegralKey> Keys; // 0x68(0x10)
	int32_t DefaultValue; // 0x78(0x04)
	bool bUseDefaultValueBeforeFirstKey; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
};

// ScriptStruct Engine.IntegralKey
// Size: 0x08 (Inherited: 0x00)
struct FIntegralKey {
	float Time; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct Engine.CurveEdTab
// Size: 0x30 (Inherited: 0x00)
struct FCurveEdTab {
	struct FString TabName; // 0x00(0x10)
	struct TArray<struct FCurveEdEntry> Curves; // 0x10(0x10)
	float ViewStartInput; // 0x20(0x04)
	float ViewEndInput; // 0x24(0x04)
	float ViewStartOutput; // 0x28(0x04)
	float ViewEndOutput; // 0x2c(0x04)
};

// ScriptStruct Engine.CurveEdEntry
// Size: 0x38 (Inherited: 0x00)
struct FCurveEdEntry {
	struct UObject* CurveObject; // 0x00(0x08)
	struct FColor CurveColor; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString CurveName; // 0x10(0x10)
	int32_t bHideCurve; // 0x20(0x04)
	int32_t bColorCurve; // 0x24(0x04)
	int32_t bFloatingPointColorCurve; // 0x28(0x04)
	int32_t bClamp; // 0x2c(0x04)
	float ClampLow; // 0x30(0x04)
	float ClampHigh; // 0x34(0x04)
};

// ScriptStruct Engine.InterpEdSelKey
// Size: 0x18 (Inherited: 0x00)
struct FInterpEdSelKey {
	struct UInterpGroup* Group; // 0x00(0x08)
	struct UInterpTrack* Track; // 0x08(0x08)
	int32_t KeyIndex; // 0x10(0x04)
	float UnsnappedPosition; // 0x14(0x04)
};

// ScriptStruct Engine.CameraPreviewInfo
// Size: 0x30 (Inherited: 0x00)
struct FCameraPreviewInfo {
	struct APawn* PawnClass; // 0x00(0x08)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct APawn* PawnInst; // 0x28(0x08)
};

// ScriptStruct Engine.SubTrackGroup
// Size: 0x28 (Inherited: 0x00)
struct FSubTrackGroup {
	struct FString GroupName; // 0x00(0x10)
	struct TArray<int32_t> TrackIndices; // 0x10(0x10)
	char bIsCollapsed : 1; // 0x20(0x01)
	char bIsSelected : 1; // 0x20(0x01)
	char UnknownData_20_2 : 6; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.SupportedSubTrackInfo
// Size: 0x20 (Inherited: 0x00)
struct FSupportedSubTrackInfo {
	struct UInterpTrack* SupportedClass; // 0x00(0x08)
	struct FString SubTrackName; // 0x08(0x10)
	int32_t GroupIndex; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.AnimControlTrackKey
// Size: 0x20 (Inherited: 0x00)
struct FAnimControlTrackKey {
	float StartTime; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	float AnimStartOffset; // 0x10(0x04)
	float AnimEndOffset; // 0x14(0x04)
	float AnimPlayRate; // 0x18(0x04)
	char bLooping : 1; // 0x1c(0x01)
	char bReverse : 1; // 0x1c(0x01)
	char UnknownData_1C_2 : 6; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.BoolTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FBoolTrackKey {
	float Time; // 0x00(0x04)
	char Value : 1; // 0x04(0x01)
	char UnknownData_4_1 : 7; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.DirectorTrackCut
// Size: 0x14 (Inherited: 0x00)
struct FDirectorTrackCut {
	float Time; // 0x00(0x04)
	float TransitionTime; // 0x04(0x04)
	struct FName TargetCamGroup; // 0x08(0x08)
	int32_t ShotNumber; // 0x10(0x04)
};

// ScriptStruct Engine.EventTrackKey
// Size: 0x0c (Inherited: 0x00)
struct FEventTrackKey {
	float Time; // 0x00(0x04)
	struct FName EventName; // 0x04(0x08)
};

// ScriptStruct Engine.InterpLookupTrack
// Size: 0x10 (Inherited: 0x00)
struct FInterpLookupTrack {
	struct TArray<struct FInterpLookupPoint> Points; // 0x00(0x10)
};

// ScriptStruct Engine.InterpLookupPoint
// Size: 0x0c (Inherited: 0x00)
struct FInterpLookupPoint {
	struct FName GroupName; // 0x00(0x08)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// Size: 0x0c (Inherited: 0x00)
struct FParticleReplayTrackKey {
	float Time; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	int32_t ClipIDNumber; // 0x08(0x04)
};

// ScriptStruct Engine.SoundTrackKey
// Size: 0x18 (Inherited: 0x00)
struct FSoundTrackKey {
	float Time; // 0x00(0x04)
	float Volume; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct USoundBase* Sound; // 0x10(0x08)
};

// ScriptStruct Engine.ToggleTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FToggleTrackKey {
	float Time; // 0x00(0x04)
	char ToggleAction; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.VisibilityTrackKey
// Size: 0x08 (Inherited: 0x00)
struct FVisibilityTrackKey {
	float Time; // 0x00(0x04)
	char Action; // 0x04(0x01)
	char ActiveCondition; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Engine.VectorSpringState
// Size: 0x18 (Inherited: 0x00)
struct FVectorSpringState {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.FloatSpringState
// Size: 0x08 (Inherited: 0x00)
struct FFloatSpringState {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.DrawToRenderTargetContext
// Size: 0x10 (Inherited: 0x00)
struct FDrawToRenderTargetContext {
	struct UTextureRenderTarget2D* RenderTarget; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.LatentActionManager
// Size: 0x60 (Inherited: 0x00)
struct FLatentActionManager {
	char UnknownData_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.LayerActorStats
// Size: 0x10 (Inherited: 0x00)
struct FLayerActorStats {
	struct UObject* Type; // 0x00(0x08)
	int32_t Total; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// Size: 0x38 (Inherited: 0x00)
struct FReplicatedStaticActorDestructionInfo {
	char UnknownData_0[0x30]; // 0x00(0x30)
	struct UObject* ObjClass; // 0x30(0x08)
};

// ScriptStruct Engine.LevelSimplificationDetails
// Size: 0x12c (Inherited: 0x00)
struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float DetailsPercentage; // 0x04(0x04)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x08(0x88)
	bool bOverrideLandscapeExportLOD; // 0x90(0x01)
	char UnknownData_91[0x3]; // 0x91(0x03)
	int32_t LandscapeExportLOD; // 0x94(0x04)
	struct FMaterialProxySettings LandscapeMaterialSettings; // 0x98(0x88)
	bool bBakeFoliageToLandscape; // 0x120(0x01)
	bool bBakeGrassToLandscape; // 0x121(0x01)
	bool bGenerateMeshNormalMap; // 0x122(0x01)
	bool bGenerateMeshMetallicMap; // 0x123(0x01)
	bool bGenerateMeshRoughnessMap; // 0x124(0x01)
	bool bGenerateMeshSpecularMap; // 0x125(0x01)
	bool bGenerateLandscapeNormalMap; // 0x126(0x01)
	bool bGenerateLandscapeMetallicMap; // 0x127(0x01)
	bool bGenerateLandscapeRoughnessMap; // 0x128(0x01)
	bool bGenerateLandscapeSpecularMap; // 0x129(0x01)
	char UnknownData_12A[0x2]; // 0x12a(0x02)
};

// ScriptStruct Engine.MaterialProxySettings
// Size: 0x88 (Inherited: 0x00)
struct FMaterialProxySettings {
	struct FIntPoint TextureSize; // 0x00(0x08)
	float GutterSpace; // 0x08(0x04)
	float MetallicConstant; // 0x0c(0x04)
	float RoughnessConstant; // 0x10(0x04)
	float AnisotropyConstant; // 0x14(0x04)
	float SpecularConstant; // 0x18(0x04)
	float OpacityConstant; // 0x1c(0x04)
	float OpacityMaskConstant; // 0x20(0x04)
	float AmbientOcclusionConstant; // 0x24(0x04)
	char TextureSizingType; // 0x28(0x01)
	char MaterialMergeType; // 0x29(0x01)
	char BlendMode; // 0x2a(0x01)
	char bAllowTwoSidedMaterial : 1; // 0x2b(0x01)
	char bNormalMap : 1; // 0x2b(0x01)
	char bTangentMap : 1; // 0x2b(0x01)
	char bMetallicMap : 1; // 0x2b(0x01)
	char bRoughnessMap : 1; // 0x2b(0x01)
	char bAnisotropyMap : 1; // 0x2b(0x01)
	char bSpecularMap : 1; // 0x2b(0x01)
	char bEmissiveMap : 1; // 0x2b(0x01)
	char bOpacityMap : 1; // 0x2c(0x01)
	char bOpacityMaskMap : 1; // 0x2c(0x01)
	char bAmbientOcclusionMap : 1; // 0x2c(0x01)
	char UnknownData_2C_3 : 5; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	struct FIntPoint DiffuseTextureSize; // 0x30(0x08)
	struct FIntPoint NormalTextureSize; // 0x38(0x08)
	struct FIntPoint TangentTextureSize; // 0x40(0x08)
	struct FIntPoint MetallicTextureSize; // 0x48(0x08)
	struct FIntPoint RoughnessTextureSize; // 0x50(0x08)
	struct FIntPoint AnisotropyTextureSize; // 0x58(0x08)
	struct FIntPoint SpecularTextureSize; // 0x60(0x08)
	struct FIntPoint EmissiveTextureSize; // 0x68(0x08)
	struct FIntPoint OpacityTextureSize; // 0x70(0x08)
	struct FIntPoint OpacityMaskTextureSize; // 0x78(0x08)
	struct FIntPoint AmbientOcclusionTextureSize; // 0x80(0x08)
};

// ScriptStruct Engine.StreamableTextureInstance
// Size: 0x28 (Inherited: 0x00)
struct FStreamableTextureInstance {
	char UnknownData_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Engine.DynamicTextureInstance
// Size: 0x38 (Inherited: 0x28)
struct FDynamicTextureInstance : FStreamableTextureInstance {
	struct UTexture2D* Texture; // 0x28(0x08)
	bool bAttached; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float OriginalRadius; // 0x34(0x04)
};

// ScriptStruct Engine.PrecomputedLightInstanceData
// Size: 0x100 (Inherited: 0xa8)
struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	char UnknownData_A8[0x8]; // 0xa8(0x08)
	struct FTransform Transform; // 0xb0(0x30)
	struct FGuid LightGuid; // 0xe0(0x10)
	int32_t PreviewShadowMapChannel; // 0xf0(0x04)
	char UnknownData_F4[0xc]; // 0xf4(0x0c)
};

// ScriptStruct Engine.BatchedPoint
// Size: 0x28 (Inherited: 0x00)
struct FBatchedPoint {
	struct FVector Position; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	float PointSize; // 0x1c(0x04)
	float RemainingLifeTime; // 0x20(0x04)
	char DepthPriority; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.BatchedLine
// Size: 0x34 (Inherited: 0x00)
struct FBatchedLine {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	float RemainingLifeTime; // 0x2c(0x04)
	char DepthPriority; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Engine.ClientReceiveData
// Size: 0x40 (Inherited: 0x00)
struct FClientReceiveData {
	struct APlayerController* LocalPC; // 0x00(0x08)
	struct FName MessageType; // 0x08(0x08)
	int32_t MessageIndex; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString MessageString; // 0x18(0x10)
	struct APlayerState* RelatedPlayerState_2; // 0x28(0x08)
	struct APlayerState* RelatedPlayerState_3; // 0x30(0x08)
	struct UObject* OptionalObject; // 0x38(0x08)
};

// ScriptStruct Engine.ParameterGroupData
// Size: 0x18 (Inherited: 0x00)
struct FParameterGroupData {
	struct FString GroupName; // 0x00(0x10)
	int32_t GroupSortPriority; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.MaterialSpriteElement
// Size: 0x28 (Inherited: 0x00)
struct FMaterialSpriteElement {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x08(0x08)
	char bSizeIsInScreenSpace : 1; // 0x10(0x01)
	char UnknownData_10_1 : 7; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float BaseSizeX; // 0x14(0x04)
	float BaseSizeY; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x08)
};

// ScriptStruct Engine.MaterialCachedExpressionData
// Size: 0x228 (Inherited: 0x00)
struct FMaterialCachedExpressionData {
	struct FMaterialCachedParameters Parameters; // 0x00(0x1a0)
	struct TArray<struct UObject*> ReferencedTextures; // 0x1a0(0x10)
	struct TArray<struct FMaterialFunctionInfo> FunctionInfos; // 0x1b0(0x10)
	struct TArray<struct FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x1c0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayers; // 0x1d0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayerBlends; // 0x1e0(0x10)
	struct TArray<struct ULandscapeGrassType*> GrassTypes; // 0x1f0(0x10)
	struct TArray<struct FName> DynamicParameterNames; // 0x200(0x10)
	struct TArray<bool> QualityLevelsUsed; // 0x210(0x10)
	char bHasRuntimeVirtualTextureOutput : 1; // 0x220(0x01)
	char bHasSceneColor : 1; // 0x220(0x01)
	char UnknownData_220_2 : 6; // 0x220(0x01)
	char UnknownData_221[0x7]; // 0x221(0x07)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialParameterCollectionInfo {
	struct FGuid StateId; // 0x00(0x10)
	struct UMaterialParameterCollection* ParameterCollection; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialFunctionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialFunctionInfo {
	struct FGuid StateId; // 0x00(0x10)
	struct UMaterialFunctionInterface* Function; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialCachedParameters
// Size: 0x1a0 (Inherited: 0x00)
struct FMaterialCachedParameters {
	struct FMaterialCachedParameterEntry Entries[0x5]; // 0x00(0x140)
	struct TArray<float> ScalarValues; // 0x140(0x10)
	struct TArray<struct FLinearColor> VectorValues; // 0x150(0x10)
	struct TArray<struct UTexture*> TextureValues; // 0x160(0x10)
	struct TArray<struct UFont*> FontValues; // 0x170(0x10)
	struct TArray<int32_t> FontPageValues; // 0x180(0x10)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190(0x10)
};

// ScriptStruct Engine.MaterialCachedParameterEntry
// Size: 0x40 (Inherited: 0x00)
struct FMaterialCachedParameterEntry {
	struct TArray<uint64_t> NameHashes; // 0x00(0x10)
	struct TArray<struct FMaterialParameterInfo> ParameterInfos; // 0x10(0x10)
	struct TArray<struct FGuid> ExpressionGuids; // 0x20(0x10)
	struct TArray<bool> Overrides; // 0x30(0x10)
};

// ScriptStruct Engine.MaterialParameterInfo
// Size: 0x10 (Inherited: 0x00)
struct FMaterialParameterInfo {
	struct FName Name; // 0x00(0x08)
	char Association; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t Index; // 0x0c(0x04)
};

// ScriptStruct Engine.ParameterChannelNames
// Size: 0x60 (Inherited: 0x00)
struct FParameterChannelNames {
	struct FText R; // 0x00(0x18)
	struct FText G; // 0x18(0x18)
	struct FText B; // 0x30(0x18)
	struct FText A; // 0x48(0x18)
};

// ScriptStruct Engine.CustomDefine
// Size: 0x20 (Inherited: 0x00)
struct FCustomDefine {
	struct FString DefineName; // 0x00(0x10)
	struct FString DefineValue; // 0x10(0x10)
};

// ScriptStruct Engine.CustomInput
// Size: 0x1c (Inherited: 0x00)
struct FCustomInput {
	struct FName InputName; // 0x00(0x08)
	struct FExpressionInput Input; // 0x08(0x0c)
	char UnknownData_14[0x8]; // 0x14(0x08)
};

// ScriptStruct Engine.FunctionExpressionOutput
// Size: 0x20 (Inherited: 0x00)
struct FFunctionExpressionOutput {
	struct UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x00(0x08)
	struct FGuid ExpressionOutputId; // 0x08(0x10)
	struct FExpressionOutput Output; // 0x18(0x08)
};

// ScriptStruct Engine.FunctionExpressionInput
// Size: 0x30 (Inherited: 0x00)
struct FFunctionExpressionInput {
	struct UMaterialExpressionFunctionInput* ExpressionInput; // 0x00(0x08)
	struct FGuid ExpressionInputId; // 0x08(0x10)
	struct FExpressionInput Input; // 0x18(0x0c)
	char UnknownData_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct Engine.FontParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FFontParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct UFont* FontValue; // 0x10(0x08)
	int32_t FontPage; // 0x18(0x04)
	struct FGuid ExpressionGUID; // 0x1c(0x10)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FRuntimeVirtualTextureParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct URuntimeVirtualTexture* ParameterValue; // 0x10(0x08)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// ScriptStruct Engine.TextureParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FTextureParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct UTexture* ParameterValue; // 0x10(0x08)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// ScriptStruct Engine.VectorParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FVectorParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FGuid ExpressionGUID; // 0x20(0x10)
};

// ScriptStruct Engine.ScalarParameterValue
// Size: 0x24 (Inherited: 0x00)
struct FScalarParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	float ParameterValue; // 0x10(0x04)
	struct FGuid ExpressionGUID; // 0x14(0x10)
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// Size: 0x58 (Inherited: 0x00)
struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<struct UCurveLinearColor> Curve; // 0x08(0x28)
	struct TSoftObjectPtr<struct UCurveLinearColorAtlas> Atlas; // 0x30(0x28)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x08 (Inherited: 0x00)
struct FMaterialInstanceBasePropertyOverrides {
	char bOverride_OpacityMaskClipValue : 1; // 0x00(0x01)
	char bOverride_BlendMode : 1; // 0x00(0x01)
	char bOverride_ShadingModel : 1; // 0x00(0x01)
	char bOverride_DitheredLODTransition : 1; // 0x00(0x01)
	char bOverride_CastDynamicShadowAsMasked : 1; // 0x00(0x01)
	char bOverride_TwoSided : 1; // 0x00(0x01)
	char TwoSided : 1; // 0x00(0x01)
	char DitheredLODTransition : 1; // 0x00(0x01)
	char bCastDynamicShadowAsMasked : 1; // 0x01(0x01)
	char UnknownData_1_1 : 7; // 0x01(0x01)
	char BlendMode; // 0x02(0x01)
	char ShadingModel; // 0x03(0x01)
	float OpacityMaskClipValue; // 0x04(0x04)
};

// ScriptStruct Engine.MaterialTextureInfo
// Size: 0x10 (Inherited: 0x00)
struct FMaterialTextureInfo {
	float SamplingScale; // 0x00(0x04)
	int32_t UVChannelIndex; // 0x04(0x04)
	struct FName TextureName; // 0x08(0x08)
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// Size: 0x10 (Inherited: 0x00)
struct FLightmassMaterialInterfaceSettings {
	float EmissiveBoost; // 0x00(0x04)
	float DiffuseBoost; // 0x04(0x04)
	float ExportResolutionScale; // 0x08(0x04)
	char bCastShadowAsMasked : 1; // 0x0c(0x01)
	char bOverrideCastShadowAsMasked : 1; // 0x0c(0x01)
	char bOverrideEmissiveBoost : 1; // 0x0c(0x01)
	char bOverrideDiffuseBoost : 1; // 0x0c(0x01)
	char bOverrideExportResolutionScale : 1; // 0x0c(0x01)
	char UnknownData_C_5 : 3; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.MaterialLayersFunctions
// Size: 0x40 (Inherited: 0x00)
struct FMaterialLayersFunctions {
	struct TArray<struct UMaterialFunctionInterface*> Layers; // 0x00(0x10)
	struct TArray<struct UMaterialFunctionInterface*> Blends; // 0x10(0x10)
	struct TArray<bool> LayerStates; // 0x20(0x10)
	struct FString KeyString; // 0x30(0x10)
};

// ScriptStruct Engine.CollectionParameterBase
// Size: 0x18 (Inherited: 0x00)
struct FCollectionParameterBase {
	struct FName ParameterName; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
};

// ScriptStruct Engine.CollectionVectorParameter
// Size: 0x28 (Inherited: 0x18)
struct FCollectionVectorParameter : FCollectionParameterBase {
	struct FLinearColor DefaultValue; // 0x18(0x10)
};

// ScriptStruct Engine.CollectionScalarParameter
// Size: 0x1c (Inherited: 0x18)
struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18(0x04)
};

// ScriptStruct Engine.InterpGroupActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FInterpGroupActorInfo {
	struct FName ObjectName; // 0x00(0x08)
	struct TArray<struct AActor*> Actors; // 0x08(0x10)
};

// ScriptStruct Engine.CameraCutInfo
// Size: 0x10 (Inherited: 0x00)
struct FCameraCutInfo {
	struct FVector Location; // 0x00(0x0c)
	float Timestamp; // 0x0c(0x04)
};

// ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x00)
struct FMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FString MemberScope; // 0x08(0x10)
	struct FName MemberName; // 0x18(0x08)
	struct FGuid MemberGuid; // 0x20(0x10)
	bool bSelfContext; // 0x30(0x01)
	bool bWasDeprecated; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Engine.MeshInstancingSettings
// Size: 0x18 (Inherited: 0x00)
struct FMeshInstancingSettings {
	struct AActor* ActorClassToUse; // 0x00(0x08)
	int32_t InstanceReplacementThreshold; // 0x08(0x04)
	enum class EMeshInstancingReplacementMethod MeshReplacementMethod; // 0x0c(0x01)
	bool bSkipMeshesWithVertexColors; // 0x0d(0x01)
	bool bUseHLODVolumes; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
	struct UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10(0x08)
};

// ScriptStruct Engine.MeshMergingSettings
// Size: 0xa0 (Inherited: 0x00)
struct FMeshMergingSettings {
	int32_t TargetLightMapResolution; // 0x00(0x04)
	enum class EUVOutput OutputUVs[0x8]; // 0x04(0x08)
	struct FMaterialProxySettings MaterialSettings; // 0x0c(0x88)
	int32_t GutterSize; // 0x94(0x04)
	int32_t SpecificLOD; // 0x98(0x04)
	enum class EMeshLODSelectionType LODSelectionType; // 0x9c(0x01)
	char bGenerateLightMapUV : 1; // 0x9d(0x01)
	char bComputedLightMapResolution : 1; // 0x9d(0x01)
	char bPivotPointAtZero : 1; // 0x9d(0x01)
	char bMergePhysicsData : 1; // 0x9d(0x01)
	char bMergeMaterials : 1; // 0x9d(0x01)
	char bCreateMergedMaterial : 1; // 0x9d(0x01)
	char bBakeVertexDataToMesh : 1; // 0x9d(0x01)
	char bUseVertexDataForBakingMaterial : 1; // 0x9d(0x01)
	char bUseTextureBinning : 1; // 0x9e(0x01)
	char bReuseMeshLightmapUVs : 1; // 0x9e(0x01)
	char bMergeEquivalentMaterials : 1; // 0x9e(0x01)
	char bUseLandscapeCulling : 1; // 0x9e(0x01)
	char bIncludeImposters : 1; // 0x9e(0x01)
	char bAllowDistanceField : 1; // 0x9e(0x01)
	char UnknownData_9E_6 : 2; // 0x9e(0x01)
	char UnknownData_9F[0x1]; // 0x9f(0x01)
};

// ScriptStruct Engine.MeshProxySettings
// Size: 0xa8 (Inherited: 0x00)
struct FMeshProxySettings {
	int32_t ScreenSize; // 0x00(0x04)
	float VoxelSize; // 0x04(0x04)
	struct FMaterialProxySettings MaterialSettings; // 0x08(0x88)
	float MergeDistance; // 0x90(0x04)
	struct FColor UnresolvedGeometryColor; // 0x94(0x04)
	float MaxRayCastDist; // 0x98(0x04)
	float HardAngleThreshold; // 0x9c(0x04)
	int32_t LightMapResolution; // 0xa0(0x04)
	char NormalCalculationMethod; // 0xa4(0x01)
	char LandscapeCullingPrecision; // 0xa5(0x01)
	char bCalculateCorrectLODModel : 1; // 0xa6(0x01)
	char bOverrideVoxelSize : 1; // 0xa6(0x01)
	char bOverrideTransferDistance : 1; // 0xa6(0x01)
	char bUseHardAngleThreshold : 1; // 0xa6(0x01)
	char bComputeLightMapResolution : 1; // 0xa6(0x01)
	char bRecalculateNormals : 1; // 0xa6(0x01)
	char bUseLandscapeCulling : 1; // 0xa6(0x01)
	char bAllowAdjacency : 1; // 0xa6(0x01)
	char bAllowDistanceField : 1; // 0xa7(0x01)
	char bReuseMeshLightmapUVs : 1; // 0xa7(0x01)
	char bCreateCollision : 1; // 0xa7(0x01)
	char bAllowVertexColors : 1; // 0xa7(0x01)
	char bGenerateLightmapUVs : 1; // 0xa7(0x01)
	char UnknownData_A7_5 : 3; // 0xa7(0x01)
};

// ScriptStruct Engine.MeshReductionSettings
// Size: 0x24 (Inherited: 0x00)
struct FMeshReductionSettings {
	float PercentTriangles; // 0x00(0x04)
	float PercentVertices; // 0x04(0x04)
	float MaxDeviation; // 0x08(0x04)
	float PixelError; // 0x0c(0x04)
	float WeldingThreshold; // 0x10(0x04)
	float HardAngleThreshold; // 0x14(0x04)
	int32_t BaseLODModel; // 0x18(0x04)
	char SilhouetteImportance; // 0x1c(0x01)
	char TextureImportance; // 0x1d(0x01)
	char ShadingImportance; // 0x1e(0x01)
	char bRecalculateNormals : 1; // 0x1f(0x01)
	char bGenerateUniqueLightmapUVs : 1; // 0x1f(0x01)
	char bKeepSymmetry : 1; // 0x1f(0x01)
	char bVisibilityAided : 1; // 0x1f(0x01)
	char bCullOccluded : 1; // 0x1f(0x01)
	char UnknownData_1F_5 : 3; // 0x1f(0x01)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x20(0x01)
	char VisibilityAggressiveness; // 0x21(0x01)
	char VertexColorImportance; // 0x22(0x01)
	char UnknownData_23[0x1]; // 0x23(0x01)
};

// ScriptStruct Engine.PurchaseInfo
// Size: 0x40 (Inherited: 0x00)
struct FPurchaseInfo {
	struct FString Identifier; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString DisplayDescription; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// ScriptStruct Engine.NameCurve
// Size: 0x78 (Inherited: 0x68)
struct FNameCurve : FIndexedCurve {
	struct TArray<struct FNameCurveKey> Keys; // 0x68(0x10)
};

// ScriptStruct Engine.NameCurveKey
// Size: 0x0c (Inherited: 0x00)
struct FNameCurveKey {
	float Time; // 0x00(0x04)
	struct FName Value; // 0x04(0x08)
};

// ScriptStruct Engine.NavAvoidanceMask
// Size: 0x04 (Inherited: 0x00)
struct FNavAvoidanceMask {
	char bGroup0 : 1; // 0x00(0x01)
	char bGroup1 : 1; // 0x00(0x01)
	char bGroup2 : 1; // 0x00(0x01)
	char bGroup3 : 1; // 0x00(0x01)
	char bGroup4 : 1; // 0x00(0x01)
	char bGroup5 : 1; // 0x00(0x01)
	char bGroup6 : 1; // 0x00(0x01)
	char bGroup7 : 1; // 0x00(0x01)
	char bGroup8 : 1; // 0x01(0x01)
	char bGroup9 : 1; // 0x01(0x01)
	char bGroup10 : 1; // 0x01(0x01)
	char bGroup11 : 1; // 0x01(0x01)
	char bGroup12 : 1; // 0x01(0x01)
	char bGroup13 : 1; // 0x01(0x01)
	char bGroup14 : 1; // 0x01(0x01)
	char bGroup15 : 1; // 0x01(0x01)
	char bGroup16 : 1; // 0x02(0x01)
	char bGroup17 : 1; // 0x02(0x01)
	char bGroup18 : 1; // 0x02(0x01)
	char bGroup19 : 1; // 0x02(0x01)
	char bGroup20 : 1; // 0x02(0x01)
	char bGroup21 : 1; // 0x02(0x01)
	char bGroup22 : 1; // 0x02(0x01)
	char bGroup23 : 1; // 0x02(0x01)
	char bGroup24 : 1; // 0x03(0x01)
	char bGroup25 : 1; // 0x03(0x01)
	char bGroup26 : 1; // 0x03(0x01)
	char bGroup27 : 1; // 0x03(0x01)
	char bGroup28 : 1; // 0x03(0x01)
	char bGroup29 : 1; // 0x03(0x01)
	char bGroup30 : 1; // 0x03(0x01)
	char bGroup31 : 1; // 0x03(0x01)
};

// ScriptStruct Engine.MovementProperties
// Size: 0x01 (Inherited: 0x00)
struct FMovementProperties {
	char bCanCrouch : 1; // 0x00(0x01)
	char bCanJump : 1; // 0x00(0x01)
	char bCanWalk : 1; // 0x00(0x01)
	char bCanSwim : 1; // 0x00(0x01)
	char bCanFly : 1; // 0x00(0x01)
	char UnknownData_0_5 : 3; // 0x00(0x01)
};

// ScriptStruct Engine.NavAgentProperties
// Size: 0x30 (Inherited: 0x01)
struct FNavAgentProperties : FMovementProperties {
	char UnknownData_1[0x3]; // 0x01(0x03)
	float AgentRadius; // 0x04(0x04)
	float AgentHeight; // 0x08(0x04)
	float AgentStepHeight; // 0x0c(0x04)
	float NavWalkingSearchHeightScale; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FSoftClassPath PreferredNavData; // 0x18(0x18)
};

// ScriptStruct Engine.NavDataConfig
// Size: 0x78 (Inherited: 0x30)
struct FNavDataConfig : FNavAgentProperties {
	struct FName Name; // 0x30(0x08)
	struct FColor Color; // 0x38(0x04)
	struct FVector DefaultQueryExtent; // 0x3c(0x0c)
	struct AActor* NavigationDataClass; // 0x48(0x08)
	SoftClassProperty NavDataClass; // 0x50(0x28)
};

// ScriptStruct Engine.NavAgentSelector
// Size: 0x04 (Inherited: 0x00)
struct FNavAgentSelector {
	char bSupportsAgent0 : 1; // 0x00(0x01)
	char bSupportsAgent1 : 1; // 0x00(0x01)
	char bSupportsAgent2 : 1; // 0x00(0x01)
	char bSupportsAgent3 : 1; // 0x00(0x01)
	char bSupportsAgent4 : 1; // 0x00(0x01)
	char bSupportsAgent5 : 1; // 0x00(0x01)
	char bSupportsAgent6 : 1; // 0x00(0x01)
	char bSupportsAgent7 : 1; // 0x00(0x01)
	char bSupportsAgent8 : 1; // 0x01(0x01)
	char bSupportsAgent9 : 1; // 0x01(0x01)
	char bSupportsAgent10 : 1; // 0x01(0x01)
	char bSupportsAgent11 : 1; // 0x01(0x01)
	char bSupportsAgent12 : 1; // 0x01(0x01)
	char bSupportsAgent13 : 1; // 0x01(0x01)
	char bSupportsAgent14 : 1; // 0x01(0x01)
	char bSupportsAgent15 : 1; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.NavigationLinkBase
// Size: 0x30 (Inherited: 0x00)
struct FNavigationLinkBase {
	float LeftProjectHeight; // 0x00(0x04)
	float MaxFallDownLength; // 0x04(0x04)
	char UnknownData_8[0x4]; // 0x08(0x04)
	float SnapRadius; // 0x0c(0x04)
	float SnapHeight; // 0x10(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x14(0x04)
	char bSupportsAgent0 : 1; // 0x18(0x01)
	char bSupportsAgent1 : 1; // 0x18(0x01)
	char bSupportsAgent2 : 1; // 0x18(0x01)
	char bSupportsAgent3 : 1; // 0x18(0x01)
	char bSupportsAgent4 : 1; // 0x18(0x01)
	char bSupportsAgent5 : 1; // 0x18(0x01)
	char bSupportsAgent6 : 1; // 0x18(0x01)
	char bSupportsAgent7 : 1; // 0x18(0x01)
	char bSupportsAgent8 : 1; // 0x19(0x01)
	char bSupportsAgent9 : 1; // 0x19(0x01)
	char bSupportsAgent10 : 1; // 0x19(0x01)
	char bSupportsAgent11 : 1; // 0x19(0x01)
	char bSupportsAgent12 : 1; // 0x19(0x01)
	char bSupportsAgent13 : 1; // 0x19(0x01)
	char bSupportsAgent14 : 1; // 0x19(0x01)
	char bSupportsAgent15 : 1; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
	char Direction; // 0x1c(0x01)
	char bUseSnapHeight : 1; // 0x1d(0x01)
	char bSnapToCheapestArea : 1; // 0x1d(0x01)
	char bCustomFlag0 : 1; // 0x1d(0x01)
	char bCustomFlag1 : 1; // 0x1d(0x01)
	char bCustomFlag2 : 1; // 0x1d(0x01)
	char bCustomFlag3 : 1; // 0x1d(0x01)
	char bCustomFlag4 : 1; // 0x1d(0x01)
	char bCustomFlag5 : 1; // 0x1d(0x01)
	char bCustomFlag6 : 1; // 0x1e(0x01)
	char bCustomFlag7 : 1; // 0x1e(0x01)
	char UnknownData_1E_2 : 6; // 0x1e(0x01)
	char UnknownData_1F[0x1]; // 0x1f(0x01)
	struct UNavAreaBase* AreaClass; // 0x20(0x08)
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.NavigationSegmentLink
// Size: 0x60 (Inherited: 0x30)
struct FNavigationSegmentLink : FNavigationLinkBase {
	struct FVector LeftStart; // 0x30(0x0c)
	struct FVector LeftEnd; // 0x3c(0x0c)
	struct FVector RightStart; // 0x48(0x0c)
	struct FVector RightEnd; // 0x54(0x0c)
};

// ScriptStruct Engine.NavigationLink
// Size: 0x48 (Inherited: 0x30)
struct FNavigationLink : FNavigationLinkBase {
	struct FVector Left; // 0x30(0x0c)
	struct FVector Right; // 0x3c(0x0c)
};

// ScriptStruct Engine.ChannelDefinition
// Size: 0x28 (Inherited: 0x00)
struct FChannelDefinition {
	struct FName ChannelName; // 0x00(0x08)
	struct FName ClassName; // 0x08(0x08)
	struct UObject* ChannelClass; // 0x10(0x08)
	int32_t StaticChannelIndex; // 0x18(0x04)
	bool bTickOnCreate; // 0x1c(0x01)
	bool bServerOpen; // 0x1d(0x01)
	bool bClientOpen; // 0x1e(0x01)
	bool bInitialServer; // 0x1f(0x01)
	bool bInitialClient; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.PacketSimulationSettings
// Size: 0x34 (Inherited: 0x00)
struct FPacketSimulationSettings {
	int32_t PktLoss; // 0x00(0x04)
	int32_t PktLossMaxSize; // 0x04(0x04)
	int32_t PktLossMinSize; // 0x08(0x04)
	int32_t PktOrder; // 0x0c(0x04)
	int32_t PktDup; // 0x10(0x04)
	int32_t PktLag; // 0x14(0x04)
	int32_t PktLagVariance; // 0x18(0x04)
	int32_t PktLagMin; // 0x1c(0x04)
	int32_t PktLagMax; // 0x20(0x04)
	int32_t PktIncomingLagMin; // 0x24(0x04)
	int32_t PktIncomingLagMax; // 0x28(0x04)
	int32_t PktIncomingLoss; // 0x2c(0x04)
	int32_t PktJitter; // 0x30(0x04)
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
// Size: 0x20 (Inherited: 0x00)
struct FNetworkEmulationProfileDescription {
	struct FString ProfileName; // 0x00(0x10)
	struct FString ToolTip; // 0x10(0x10)
};

// ScriptStruct Engine.NodeItem
// Size: 0x40 (Inherited: 0x00)
struct FNodeItem {
	struct FName ParentName; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.ParticleBurst
// Size: 0x0c (Inherited: 0x00)
struct FParticleBurst {
	int32_t count; // 0x00(0x04)
	int32_t CountLow; // 0x04(0x04)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// Size: 0x20 (Inherited: 0x00)
struct FParticleRandomSeedInfo {
	struct FName ParameterName; // 0x00(0x08)
	char bGetSeedFromInstance : 1; // 0x08(0x01)
	char bInstanceSeedIsIndex : 1; // 0x08(0x01)
	char bResetSeedOnEmitterLooping : 1; // 0x08(0x01)
	char bRandomlySelectSeedArray : 1; // 0x08(0x01)
	char UnknownData_8_4 : 4; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TArray<int32_t> RandomSeeds; // 0x10(0x10)
};

// ScriptStruct Engine.ParticleCurvePair
// Size: 0x18 (Inherited: 0x00)
struct FParticleCurvePair {
	struct FString CurveName; // 0x00(0x10)
	struct UObject* CurveObject; // 0x10(0x08)
};

// ScriptStruct Engine.BeamModifierOptions
// Size: 0x04 (Inherited: 0x00)
struct FBeamModifierOptions {
	char bModify : 1; // 0x00(0x01)
	char bScale : 1; // 0x00(0x01)
	char bLock : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// Size: 0x28 (Inherited: 0x00)
struct FParticleEvent_GenerateInfo {
	char Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t Frequency; // 0x04(0x04)
	int32_t ParticleFrequency; // 0x08(0x04)
	char FirstTimeOnly : 1; // 0x0c(0x01)
	char LastTimeOnly : 1; // 0x0c(0x01)
	char UseReflectedImpactVector : 1; // 0x0c(0x01)
	char bUseOrbitOffset : 1; // 0x0c(0x01)
	char UnknownData_C_4 : 4; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct FName CustomName; // 0x10(0x08)
	struct TArray<struct UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18(0x10)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// Size: 0x14 (Inherited: 0x00)
struct FLocationBoneSocketInfo {
	struct FName BoneSocketName; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
};

// ScriptStruct Engine.OrbitOptions
// Size: 0x04 (Inherited: 0x00)
struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x00(0x01)
	char bProcessDuringUpdate : 1; // 0x00(0x01)
	char bUseEmitterTime : 1; // 0x00(0x01)
	char UnknownData_0_3 : 5; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.EmitterDynamicParameter
// Size: 0x48 (Inherited: 0x00)
struct FEmitterDynamicParameter {
	struct FName ParamName; // 0x00(0x08)
	char bUseEmitterTime : 1; // 0x08(0x01)
	char bSpawnTimeOnly : 1; // 0x08(0x01)
	char UnknownData_8_2 : 6; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	char ValueMethod; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	char bScaleVelocityByParamValue : 1; // 0x10(0x01)
	char UnknownData_10_1 : 7; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct FRawDistributionFloat ParamValue; // 0x18(0x30)
};

// ScriptStruct Engine.BeamTargetData
// Size: 0x0c (Inherited: 0x00)
struct FBeamTargetData {
	struct FName TargetName; // 0x00(0x08)
	float TargetPercentage; // 0x08(0x04)
};

// ScriptStruct Engine.GPUSpriteResourceData
// Size: 0x160 (Inherited: 0x00)
struct FGPUSpriteResourceData {
	struct TArray<struct FColor> QuantizedColorSamples; // 0x00(0x10)
	struct TArray<struct FColor> QuantizedMiscSamples; // 0x10(0x10)
	struct TArray<struct FColor> QuantizedSimulationAttrSamples; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x10)
	struct FVector4 ColorBias; // 0x40(0x10)
	struct FVector4 MiscScale; // 0x50(0x10)
	struct FVector4 MiscBias; // 0x60(0x10)
	struct FVector4 SimulationAttrCurveScale; // 0x70(0x10)
	struct FVector4 SimulationAttrCurveBias; // 0x80(0x10)
	struct FVector4 SubImageSize; // 0x90(0x10)
	struct FVector4 SizeBySpeed; // 0xa0(0x10)
	struct FVector ConstantAcceleration; // 0xb0(0x0c)
	struct FVector OrbitOffsetBase; // 0xbc(0x0c)
	struct FVector OrbitOffsetRange; // 0xc8(0x0c)
	struct FVector OrbitFrequencyBase; // 0xd4(0x0c)
	struct FVector OrbitFrequencyRange; // 0xe0(0x0c)
	struct FVector OrbitPhaseBase; // 0xec(0x0c)
	struct FVector OrbitPhaseRange; // 0xf8(0x0c)
	float GlobalVectorFieldScale; // 0x104(0x04)
	float GlobalVectorFieldTightness; // 0x108(0x04)
	float PerParticleVectorFieldScale; // 0x10c(0x04)
	float PerParticleVectorFieldBias; // 0x110(0x04)
	float DragCoefficientScale; // 0x114(0x04)
	float DragCoefficientBias; // 0x118(0x04)
	float ResilienceScale; // 0x11c(0x04)
	float ResilienceBias; // 0x120(0x04)
	float CollisionRadiusScale; // 0x124(0x04)
	float CollisionRadiusBias; // 0x128(0x04)
	float CollisionTimeBias; // 0x12c(0x04)
	float CollisionRandomSpread; // 0x130(0x04)
	float CollisionRandomDistribution; // 0x134(0x04)
	float OneMinusFriction; // 0x138(0x04)
	float RotationRateScale; // 0x13c(0x04)
	float CameraMotionBlurAmount; // 0x140(0x04)
	char ScreenAlignment; // 0x144(0x01)
	char LockAxisFlag; // 0x145(0x01)
	char UnknownData_146[0x2]; // 0x146(0x02)
	struct FVector2D PivotOffset; // 0x148(0x08)
	char bRemoveHMDRoll : 1; // 0x150(0x01)
	char UnknownData_150_1 : 7; // 0x150(0x01)
	char UnknownData_151[0x3]; // 0x151(0x03)
	float MinFacingCameraBlendDistance; // 0x154(0x04)
	float MaxFacingCameraBlendDistance; // 0x158(0x04)
	char UnknownData_15C[0x4]; // 0x15c(0x04)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// Size: 0x280 (Inherited: 0x00)
struct FGPUSpriteEmitterInfo {
	struct UParticleModuleRequired* RequiredModule; // 0x00(0x08)
	struct UParticleModuleSpawn* SpawnModule; // 0x08(0x08)
	struct UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10(0x08)
	struct TArray<struct UParticleModule*> SpawnModules; // 0x18(0x10)
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xa0(0x20)
	struct FFloatDistribution DragCoefficient; // 0xc0(0x20)
	struct FFloatDistribution PointAttractorStrength; // 0xe0(0x20)
	struct FFloatDistribution Resilience; // 0x100(0x20)
	struct FVector ConstantAcceleration; // 0x120(0x0c)
	struct FVector PointAttractorPosition; // 0x12c(0x0c)
	float PointAttractorRadiusSq; // 0x138(0x04)
	struct FVector OrbitOffsetBase; // 0x13c(0x0c)
	struct FVector OrbitOffsetRange; // 0x148(0x0c)
	struct FVector2D InvMaxSize; // 0x154(0x08)
	float InvRotationRateScale; // 0x15c(0x04)
	float MaxLifetime; // 0x160(0x04)
	int32_t MaxParticleCount; // 0x164(0x04)
	char ScreenAlignment; // 0x168(0x01)
	char LockAxisFlag; // 0x169(0x01)
	char UnknownData_16A[0x2]; // 0x16a(0x02)
	char bEnableCollision : 1; // 0x16c(0x01)
	char UnknownData_16C_1 : 7; // 0x16c(0x01)
	char UnknownData_16D[0x3]; // 0x16d(0x03)
	char CollisionMode; // 0x170(0x01)
	char UnknownData_171[0x3]; // 0x171(0x03)
	char bRemoveHMDRoll : 1; // 0x174(0x01)
	char UnknownData_174_1 : 7; // 0x174(0x01)
	char UnknownData_175[0x3]; // 0x175(0x03)
	float MinFacingCameraBlendDistance; // 0x178(0x04)
	float MaxFacingCameraBlendDistance; // 0x17c(0x04)
	struct FRawDistributionVector DynamicColor; // 0x180(0x48)
	struct FRawDistributionFloat DynamicAlpha; // 0x1c8(0x30)
	struct FRawDistributionVector DynamicColorScale; // 0x1f8(0x48)
	struct FRawDistributionFloat DynamicAlphaScale; // 0x240(0x30)
	char UnknownData_270[0x10]; // 0x270(0x10)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// Size: 0x70 (Inherited: 0x00)
struct FGPUSpriteLocalVectorFieldInfo {
	struct UVectorField* Field; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator MinInitialRotation; // 0x40(0x0c)
	struct FRotator MaxInitialRotation; // 0x4c(0x0c)
	struct FRotator RotationRate; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float Tightness; // 0x68(0x04)
	char bIgnoreComponentTransform : 1; // 0x6c(0x01)
	char bTileX : 1; // 0x6c(0x01)
	char bTileY : 1; // 0x6c(0x01)
	char bTileZ : 1; // 0x6c(0x01)
	char bUseFixDT : 1; // 0x6c(0x01)
	char UnknownData_6C_5 : 3; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.NamedEmitterMaterial
// Size: 0x10 (Inherited: 0x00)
struct FNamedEmitterMaterial {
	struct FName Name; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Engine.LODSoloTrack
// Size: 0x10 (Inherited: 0x00)
struct FLODSoloTrack {
	struct TArray<char> SoloEnableSetting; // 0x00(0x10)
};

// ScriptStruct Engine.ParticleSystemLOD
// Size: 0x01 (Inherited: 0x00)
struct FParticleSystemLOD {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.ParticleSysParam
// Size: 0x80 (Inherited: 0x00)
struct FParticleSysParam {
	struct FName Name; // 0x00(0x08)
	char ParamType; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float Scalar; // 0x0c(0x04)
	float Scalar_Low; // 0x10(0x04)
	struct FVector Vector; // 0x14(0x0c)
	struct FVector Vector_Low; // 0x20(0x0c)
	struct FColor Color; // 0x2c(0x04)
	struct AActor* Actor; // 0x30(0x08)
	struct UMaterialInterface* Material; // 0x38(0x08)
	char UnknownData_40[0x40]; // 0x40(0x40)
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FParticleSystemWorldManagerTickFunction : FTickFunction {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleSystemReplayFrame {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleEmitterReplayFrame {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.FreezablePerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FFreezablePerPlatformInt {
	char UnknownData_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Engine.PhysicalAnimationData
// Size: 0x24 (Inherited: 0x00)
struct FPhysicalAnimationData {
	struct FName BodyName; // 0x00(0x08)
	char bIsLocalSimulation : 1; // 0x08(0x01)
	char UnknownData_8_1 : 7; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float OrientationStrength; // 0x0c(0x04)
	float AngularVelocityStrength; // 0x10(0x04)
	float PositionStrength; // 0x14(0x04)
	float VelocityStrength; // 0x18(0x04)
	float MaxLinearForce; // 0x1c(0x04)
	float MaxAngularForce; // 0x20(0x04)
};

// ScriptStruct Engine.TireFrictionScalePair
// Size: 0x10 (Inherited: 0x00)
struct FTireFrictionScalePair {
	struct UTireType* TireType; // 0x00(0x08)
	float FrictionScale; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.PhysicalAnimationProfile
// Size: 0x2c (Inherited: 0x00)
struct FPhysicalAnimationProfile {
	struct FName ProfileName; // 0x00(0x08)
	struct FPhysicalAnimationData PhysicalAnimationData; // 0x08(0x24)
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// Size: 0x10c (Inherited: 0x00)
struct FPhysicsConstraintProfileHandle {
	struct FConstraintProfileProperties ProfileProperties; // 0x00(0x104)
	struct FName ProfileName; // 0x104(0x08)
};

// ScriptStruct Engine.ChaosPhysicsSettings
// Size: 0x03 (Inherited: 0x00)
struct FChaosPhysicsSettings {
	enum class EChaosThreadingMode DefaultThreadingModel; // 0x00(0x01)
	enum class EChaosSolverTickMode DedicatedThreadTickMode; // 0x01(0x01)
	enum class EChaosBufferMode DedicatedThreadBufferMode; // 0x02(0x01)
};

// ScriptStruct Engine.PhysicalSurfaceName
// Size: 0x0c (Inherited: 0x00)
struct FPhysicalSurfaceName {
	char Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x08)
};

// ScriptStruct Engine.DelegateArray
// Size: 0x10 (Inherited: 0x00)
struct FDelegateArray {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
};

// ScriptStruct Engine.TViewTarget
// Size: 0x5f0 (Inherited: 0x00)
struct FTViewTarget {
	struct AActor* Target; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FMinimalViewInfo POV; // 0x10(0x5d0)
	struct APlayerState* PlayerState; // 0x5e0(0x08)
	char UnknownData_5E8[0x8]; // 0x5e8(0x08)
};

// ScriptStruct Engine.CameraCacheEntry
// Size: 0x5e0 (Inherited: 0x00)
struct FCameraCacheEntry {
	float Timestamp; // 0x00(0x04)
	char UnknownData_4[0xc]; // 0x04(0x0c)
	struct FMinimalViewInfo POV; // 0x10(0x5d0)
};

// ScriptStruct Engine.InputActionSpeechMapping
// Size: 0x10 (Inherited: 0x00)
struct FInputActionSpeechMapping {
	struct FName ActionName; // 0x00(0x08)
	struct FName SpeechKeyword; // 0x08(0x08)
};

// ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputAxisKeyMapping {
	struct FName AxisName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FKey Key; // 0x10(0x18)
};

// ScriptStruct Engine.InputActionKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputActionKeyMapping {
	struct FName ActionName; // 0x00(0x08)
	char bShift : 1; // 0x08(0x01)
	char bCtrl : 1; // 0x08(0x01)
	char bAlt : 1; // 0x08(0x01)
	char bCmd : 1; // 0x08(0x01)
	char UnknownData_8_4 : 4; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FKey Key; // 0x10(0x18)
};

// ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x18 (Inherited: 0x00)
struct FInputAxisConfigEntry {
	struct FName AxisKeyName; // 0x00(0x08)
	struct FInputAxisProperties AxisProperties; // 0x08(0x10)
};

// ScriptStruct Engine.InputAxisProperties
// Size: 0x10 (Inherited: 0x00)
struct FInputAxisProperties {
	float DeadZone; // 0x00(0x04)
	float Sensitivity; // 0x04(0x04)
	float Exponent; // 0x08(0x04)
	char bInvert : 1; // 0x0c(0x01)
	char UnknownData_C_1 : 7; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.KeyBind
// Size: 0x30 (Inherited: 0x00)
struct FKeyBind {
	struct FKey Key; // 0x00(0x18)
	struct FString Command; // 0x18(0x10)
	char Control : 1; // 0x28(0x01)
	char Shift : 1; // 0x28(0x01)
	char Alt : 1; // 0x28(0x01)
	char Cmd : 1; // 0x28(0x01)
	char bIgnoreCtrl : 1; // 0x28(0x01)
	char bIgnoreShift : 1; // 0x28(0x01)
	char bIgnoreAlt : 1; // 0x28(0x01)
	char bIgnoreCmd : 1; // 0x28(0x01)
	char bDisabled : 1; // 0x29(0x01)
	char UnknownData_29_1 : 7; // 0x29(0x01)
	char UnknownData_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.PlayerMuteList
// Size: 0x38 (Inherited: 0x00)
struct FPlayerMuteList {
	char UnknownData_0[0x30]; // 0x00(0x30)
	bool bHasVoiceHandshakeCompleted; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	int32_t VoiceChannelIdx; // 0x34(0x04)
};

// ScriptStruct Engine.PoseDataContainer
// Size: 0x90 (Inherited: 0x00)
struct FPoseDataContainer {
	struct TArray<struct FSmartName> PoseNames; // 0x00(0x10)
	struct TArray<struct FName> Tracks; // 0x10(0x10)
	struct TMap<struct FName, int32_t> TrackMap; // 0x20(0x50)
	struct TArray<struct FPoseData> Poses; // 0x70(0x10)
	struct TArray<struct FAnimCurveBase> Curves; // 0x80(0x10)
};

// ScriptStruct Engine.PoseData
// Size: 0x70 (Inherited: 0x00)
struct FPoseData {
	struct TArray<struct FTransform> LocalSpacePose; // 0x00(0x10)
	struct TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10(0x50)
	struct TArray<float> CurveData; // 0x60(0x10)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// Size: 0x10 (Inherited: 0x00)
struct FPreviewAssetAttachContainer {
	struct TArray<struct FPreviewAttachedObjectPair> AttachedObjects; // 0x00(0x10)
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// Size: 0x38 (Inherited: 0x00)
struct FPreviewAttachedObjectPair {
	struct TSoftObjectPtr<struct UObject> AttachedObject; // 0x00(0x28)
	struct UObject* Object; // 0x28(0x08)
	struct FName AttachedTo; // 0x30(0x08)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x28 (Inherited: 0x00)
struct FPreviewMeshCollectionEntry {
	struct TSoftObjectPtr<struct USkeletalMesh> SkeletalMesh; // 0x00(0x28)
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// Size: 0xf0 (Inherited: 0xa8)
struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	char UnknownData_A8[0x8]; // 0xa8(0x08)
	struct FTransform ComponentTransform; // 0xb0(0x30)
	int32_t VisibilityId; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct UPrimitiveComponent* LODParent; // 0xe8(0x08)
};

// ScriptStruct Engine.SpriteCategoryInfo
// Size: 0x38 (Inherited: 0x00)
struct FSpriteCategoryInfo {
	struct FName Category; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
};

// ScriptStruct Engine.ReverbSettings
// Size: 0x20 (Inherited: 0x00)
struct FReverbSettings {
	bool bApplyReverb; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UReverbEffect* ReverbEffect; // 0x08(0x08)
	struct USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10(0x08)
	float Volume; // 0x18(0x04)
	float FadeTime; // 0x1c(0x04)
};

// ScriptStruct Engine.CompressedRichCurve
// Size: 0x18 (Inherited: 0x00)
struct FCompressedRichCurve {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.TransformBase
// Size: 0x28 (Inherited: 0x00)
struct FTransformBase {
	struct FName Node; // 0x00(0x08)
	struct FTransformBaseConstraint Constraints[0x2]; // 0x08(0x20)
};

// ScriptStruct Engine.TransformBaseConstraint
// Size: 0x10 (Inherited: 0x00)
struct FTransformBaseConstraint {
	struct TArray<struct FRigTransformConstraint> TransformConstraints; // 0x00(0x10)
};

// ScriptStruct Engine.RigTransformConstraint
// Size: 0x10 (Inherited: 0x00)
struct FRigTransformConstraint {
	char TranformType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName ParentSpace; // 0x04(0x08)
	float Weight; // 0x0c(0x04)
};

// ScriptStruct Engine.Node
// Size: 0x60 (Inherited: 0x00)
struct FNode {
	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	bool bAdvanced; // 0x50(0x01)
	char UnknownData_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct Engine.RootMotionSource
// Size: 0xa0 (Inherited: 0x00)
struct FRootMotionSource {
	char UnknownData_0[0x10]; // 0x00(0x10)
	uint16_t Priority; // 0x10(0x02)
	uint16_t LocalID; // 0x12(0x02)
	enum class ERootMotionAccumulateMode AccumulateMode; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	struct FName InstanceName; // 0x18(0x08)
	float StartTime; // 0x20(0x04)
	float CurrentTime; // 0x24(0x04)
	float PreviousTime; // 0x28(0x04)
	float Duration; // 0x2c(0x04)
	struct FRootMotionSourceStatus Status; // 0x30(0x01)
	struct FRootMotionSourceSettings Settings; // 0x31(0x01)
	bool bInLocalSpace; // 0x32(0x01)
	char UnknownData_33[0xd]; // 0x33(0x0d)
	struct FRootMotionMovementParams RootMotionParams; // 0x40(0x40)
	struct FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80(0x14)
	char UnknownData_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// Size: 0x14 (Inherited: 0x00)
struct FRootMotionFinishVelocitySettings {
	enum class ERootMotionFinishVelocityMode Mode; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FVector SetVelocity; // 0x04(0x0c)
	float ClampVelocity; // 0x10(0x04)
};

// ScriptStruct Engine.RootMotionSourceStatus
// Size: 0x01 (Inherited: 0x00)
struct FRootMotionSourceStatus {
	char Flags; // 0x00(0x01)
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// Size: 0xd0 (Inherited: 0xa0)
struct FRootMotionSource_JumpForce : FRootMotionSource {
	struct FRotator Rotation; // 0x98(0x0c)
	float Distance; // 0xa4(0x04)
	float Height; // 0xa8(0x04)
	bool bDisableTimeout; // 0xac(0x01)
	struct UCurveVector* PathOffsetCurve; // 0xb0(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0xb8(0x08)
	char UnknownData_C5[0xb]; // 0xc5(0x0b)
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// Size: 0xd0 (Inherited: 0xa0)
struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector InitialTargetLocation; // 0xa4(0x0c)
	struct FVector TargetLocation; // 0xb0(0x0c)
	bool bRestrictSpeedToExpected; // 0xbc(0x01)
	struct UCurveVector* PathOffsetCurve; // 0xc0(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0xc8(0x08)
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// Size: 0xc0 (Inherited: 0xa0)
struct FRootMotionSource_MoveToForce : FRootMotionSource {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector TargetLocation; // 0xa4(0x0c)
	bool bRestrictSpeedToExpected; // 0xb0(0x01)
	struct UCurveVector* PathOffsetCurve; // 0xb8(0x08)
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// Size: 0xe0 (Inherited: 0xa0)
struct FRootMotionSource_RadialForce : FRootMotionSource {
	struct FVector Location; // 0x98(0x0c)
	struct AActor* LocationActor; // 0xa8(0x08)
	float Radius; // 0xb0(0x04)
	float Strength; // 0xb4(0x04)
	bool bIsPush; // 0xb8(0x01)
	bool bNoZForce; // 0xb9(0x01)
	char UnknownData_BE[0x2]; // 0xbe(0x02)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xc0(0x08)
	struct UCurveFloat* StrengthOverTime; // 0xc8(0x08)
	bool bUseFixedWorldDirection; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	struct FRotator FixedWorldDirection; // 0xd4(0x0c)
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// Size: 0xb0 (Inherited: 0xa0)
struct FRootMotionSource_ConstantForce : FRootMotionSource {
	struct FVector force; // 0x98(0x0c)
	struct UCurveFloat* StrengthOverTime; // 0xa8(0x08)
};

// ScriptStruct Engine.CameraExposureSettings
// Size: 0x40 (Inherited: 0x00)
struct FCameraExposureSettings {
	char Method; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float LowPercent; // 0x04(0x04)
	float HighPercent; // 0x08(0x04)
	float MinBrightness; // 0x0c(0x04)
	float MaxBrightness; // 0x10(0x04)
	float SpeedUp; // 0x14(0x04)
	float SpeedDown; // 0x18(0x04)
	float Bias; // 0x1c(0x04)
	struct UCurveFloat* BiasCurve; // 0x20(0x08)
	struct UTexture* MeterMask; // 0x28(0x08)
	float HistogramLogMin; // 0x30(0x04)
	float HistogramLogMax; // 0x34(0x04)
	float CalibrationConstant; // 0x38(0x04)
	char ApplyPhysicalCameraExposure : 1; // 0x3c(0x01)
	char UnknownData_3C_1 : 7; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Engine.LensSettings
// Size: 0xe0 (Inherited: 0x00)
struct FLensSettings {
	struct FLensBloomSettings Bloom; // 0x00(0xb8)
	struct FLensImperfectionSettings Imperfections; // 0xb8(0x20)
	float ChromaticAberration; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct Engine.LensImperfectionSettings
// Size: 0x20 (Inherited: 0x00)
struct FLensImperfectionSettings {
	struct UTexture* DirtMask; // 0x00(0x08)
	float DirtMaskIntensity; // 0x08(0x04)
	struct FLinearColor DirtMaskTint; // 0x0c(0x10)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.LensBloomSettings
// Size: 0xb8 (Inherited: 0x00)
struct FLensBloomSettings {
	struct FGaussianSumBloomSettings GaussianSum; // 0x00(0x84)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FConvolutionBloomSettings Convolution; // 0x88(0x28)
	char Method; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct Engine.ConvolutionBloomSettings
// Size: 0x28 (Inherited: 0x00)
struct FConvolutionBloomSettings {
	struct UTexture2D* Texture; // 0x00(0x08)
	float Size; // 0x08(0x04)
	struct FVector2D CenterUV; // 0x0c(0x08)
	float PreFilterMin; // 0x14(0x04)
	float PreFilterMax; // 0x18(0x04)
	float PreFilterMult; // 0x1c(0x04)
	float BufferScale; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.GaussianSumBloomSettings
// Size: 0x84 (Inherited: 0x00)
struct FGaussianSumBloomSettings {
	float Intensity; // 0x00(0x04)
	float Threshold; // 0x04(0x04)
	float SizeScale; // 0x08(0x04)
	float Filter1Size; // 0x0c(0x04)
	float Filter2Size; // 0x10(0x04)
	float Filter3Size; // 0x14(0x04)
	float Filter4Size; // 0x18(0x04)
	float Filter5Size; // 0x1c(0x04)
	float Filter6Size; // 0x20(0x04)
	struct FLinearColor Filter1Tint; // 0x24(0x10)
	struct FLinearColor Filter2Tint; // 0x34(0x10)
	struct FLinearColor Filter3Tint; // 0x44(0x10)
	struct FLinearColor Filter4Tint; // 0x54(0x10)
	struct FLinearColor Filter5Tint; // 0x64(0x10)
	struct FLinearColor Filter6Tint; // 0x74(0x10)
};

// ScriptStruct Engine.FilmStockSettings
// Size: 0x14 (Inherited: 0x00)
struct FFilmStockSettings {
	float Slope; // 0x00(0x04)
	float Toe; // 0x04(0x04)
	float Shoulder; // 0x08(0x04)
	float BlackClip; // 0x0c(0x04)
	float WhiteClip; // 0x10(0x04)
};

// ScriptStruct Engine.ColorGradingSettings
// Size: 0x150 (Inherited: 0x00)
struct FColorGradingSettings {
	struct FColorGradePerRangeSettings Global; // 0x00(0x50)
	struct FColorGradePerRangeSettings Shadows; // 0x50(0x50)
	struct FColorGradePerRangeSettings Midtones; // 0xa0(0x50)
	struct FColorGradePerRangeSettings Highlights; // 0xf0(0x50)
	float ShadowsMax; // 0x140(0x04)
	float HighlightsMin; // 0x144(0x04)
	char UnknownData_148[0x8]; // 0x148(0x08)
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// Size: 0x50 (Inherited: 0x00)
struct FColorGradePerRangeSettings {
	struct FVector4 Saturation; // 0x00(0x10)
	struct FVector4 Contrast; // 0x10(0x10)
	struct FVector4 Gamma; // 0x20(0x10)
	struct FVector4 Gain; // 0x30(0x10)
	struct FVector4 Offset; // 0x40(0x10)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// Size: 0x18 (Inherited: 0x00)
struct FEngineShowFlagsSetting {
	struct FString ShowFlagName; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.SimpleCurve
// Size: 0x88 (Inherited: 0x70)
struct FSimpleCurve : FRealCurve {
	char InterpMode; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct TArray<struct FSimpleCurveKey> Keys; // 0x78(0x10)
};

// ScriptStruct Engine.SimpleCurveKey
// Size: 0x08 (Inherited: 0x00)
struct FSimpleCurveKey {
	float Time; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct Engine.SingleAnimationPlayData
// Size: 0x18 (Inherited: 0x00)
struct FSingleAnimationPlayData {
	struct UAnimationAsset* AnimToPlay; // 0x00(0x08)
	char bSavedLooping : 1; // 0x08(0x01)
	char bSavedPlaying : 1; // 0x08(0x01)
	char UnknownData_8_2 : 6; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float SavedPosition; // 0x0c(0x04)
	float SavedPlayRate; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.SkeletalMaterial
// Size: 0x28 (Inherited: 0x00)
struct FSkeletalMaterial {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct FMeshUVChannelInfo UVChannelData; // 0x10(0x14)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x78 (Inherited: 0x00)
struct FClothingAssetData_Legacy {
	struct FName AssetName; // 0x00(0x08)
	struct FString ApexFileName; // 0x08(0x10)
	bool bClothPropertiesChanged; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	struct FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c(0x50)
	char UnknownData_6C[0xc]; // 0x6c(0x0c)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x00)
struct FClothPhysicsProperties_Legacy {
	float VerticalResistance; // 0x00(0x04)
	float HorizontalResistance; // 0x04(0x04)
	float BendResistance; // 0x08(0x04)
	float ShearResistance; // 0x0c(0x04)
	float Friction; // 0x10(0x04)
	float Damping; // 0x14(0x04)
	float TetherStiffness; // 0x18(0x04)
	float TetherLimit; // 0x1c(0x04)
	float Drag; // 0x20(0x04)
	float StiffnessFrequency; // 0x24(0x04)
	float GravityScale; // 0x28(0x04)
	float MassScale; // 0x2c(0x04)
	float InertiaBlend; // 0x30(0x04)
	float SelfCollisionThickness; // 0x34(0x04)
	float SelfCollisionSquashScale; // 0x38(0x04)
	float SelfCollisionStiffness; // 0x3c(0x04)
	float SolverFrequency; // 0x40(0x04)
	float FiberCompression; // 0x44(0x04)
	float FiberExpansion; // 0x48(0x04)
	float FiberResistance; // 0x4c(0x04)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0xb8 (Inherited: 0x00)
struct FSkeletalMeshLODInfo {
	struct FPerPlatformFloat ScreenSize; // 0x00(0x04)
	float LODHysteresis; // 0x04(0x04)
	struct TArray<int32_t> LODMaterialMap; // 0x08(0x10)
	struct FSkeletalMeshBuildSettings BuildSettings; // 0x18(0x14)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x2c(0x3c)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x68(0x10)
	struct TArray<struct FBoneReference> BonesToPrioritize; // 0x78(0x10)
	float WeightOfPrioritization; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
	struct UAnimSequence* BakePose; // 0x90(0x08)
	struct UAnimSequence* BakePoseOverride; // 0x98(0x08)
	struct FString SourceImportFilename; // 0xa0(0x10)
	enum class ESkinCacheUsage SkinCacheUsage; // 0xb0(0x01)
	char bHasBeenSimplified : 1; // 0xb1(0x01)
	char bHasPerLODVertexColors : 1; // 0xb1(0x01)
	char bAllowCPUAccess : 1; // 0xb1(0x01)
	char bSupportUniformlyDistributedSampling : 1; // 0xb1(0x01)
	char UnknownData_B1_4 : 4; // 0xb1(0x01)
	char UnknownData_B2[0x6]; // 0xb2(0x06)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x3c (Inherited: 0x00)
struct FSkeletalMeshOptimizationSettings {
	char TerminationCriterion; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float NumOfVertPercentage; // 0x08(0x04)
	uint32_t MaxNumOfTriangles; // 0x0c(0x04)
	uint32_t MaxNumOfVerts; // 0x10(0x04)
	float MaxDeviationPercentage; // 0x14(0x04)
	char ReductionMethod; // 0x18(0x01)
	char SilhouetteImportance; // 0x19(0x01)
	char TextureImportance; // 0x1a(0x01)
	char ShadingImportance; // 0x1b(0x01)
	char SkinningImportance; // 0x1c(0x01)
	char bRemapMorphTargets : 1; // 0x1d(0x01)
	char bRecalcNormals : 1; // 0x1d(0x01)
	char UnknownData_1D_2 : 6; // 0x1d(0x01)
	char UnknownData_1E[0x2]; // 0x1e(0x02)
	float WeldingThreshold; // 0x20(0x04)
	float NormalsThreshold; // 0x24(0x04)
	int32_t MaxBonesPerVertex; // 0x28(0x04)
	char bEnforceBoneBoundaries : 1; // 0x2c(0x01)
	char UnknownData_2C_1 : 7; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	float VolumeImportance; // 0x30(0x04)
	char bLockEdges : 1; // 0x34(0x01)
	char bLockColorBounaries : 1; // 0x34(0x01)
	char UnknownData_34_2 : 6; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	int32_t BaseLOD; // 0x38(0x04)
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// Size: 0x58 (Inherited: 0x00)
struct FSkeletalMeshClothBuildParams {
	struct FWeakObjectPtr<struct UClothingAssetBase> TargetAsset; // 0x00(0x08)
	int32_t TargetLod; // 0x08(0x04)
	bool bRemapParameters; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct FString AssetName; // 0x10(0x10)
	int32_t LODIndex; // 0x20(0x04)
	int32_t SourceSection; // 0x24(0x04)
	bool bRemoveFromMesh; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct TSoftObjectPtr<struct UPhysicsAsset> PhysicsAsset; // 0x30(0x28)
};

// ScriptStruct Engine.BoneMirrorExport
// Size: 0x14 (Inherited: 0x00)
struct FBoneMirrorExport {
	struct FName BoneName; // 0x00(0x08)
	struct FName SourceBoneName; // 0x08(0x08)
	char BoneFlipAxis; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.BoneMirrorInfo
// Size: 0x08 (Inherited: 0x00)
struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x00(0x04)
	char BoneFlipAxis; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentClothTickFunction : FTickFunction {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// Size: 0x80 (Inherited: 0x00)
struct FSkeletalMeshLODGroupSettings {
	struct FPerPlatformFloat ScreenSize; // 0x00(0x04)
	float LODHysteresis; // 0x04(0x04)
	enum class EBoneFilterActionOption BoneFilterActionOption; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TArray<struct FBoneFilter> BoneList; // 0x10(0x10)
	struct TArray<struct FName> BonesToPrioritize; // 0x20(0x10)
	float WeightOfPrioritization; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct UAnimSequence* BakePose; // 0x38(0x08)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40(0x3c)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Engine.BoneFilter
// Size: 0x0c (Inherited: 0x00)
struct FBoneFilter {
	bool bExcludeSelf; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName BoneName; // 0x04(0x08)
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// Size: 0x30 (Inherited: 0x00)
struct FSkeletalMeshSamplingInfo {
	struct TArray<struct FSkeletalMeshSamplingRegion> Regions; // 0x00(0x10)
	struct FSkeletalMeshSamplingBuiltData BuiltData; // 0x10(0x20)
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// Size: 0x20 (Inherited: 0x00)
struct FSkeletalMeshSamplingBuiltData {
	struct TArray<struct FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x00(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10(0x10)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// Size: 0x78 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionBuiltData {
	char UnknownData_0[0x78]; // 0x00(0x78)
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// Size: 0x48 (Inherited: 0x00)
struct FSkeletalMeshSamplingLODBuiltData {
	char UnknownData_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// Size: 0x30 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegion {
	struct FName Name; // 0x00(0x08)
	int32_t LODIndex; // 0x08(0x04)
	char bSupportUniformlyDistributedSampling : 1; // 0x0c(0x01)
	char UnknownData_C_1 : 7; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20(0x10)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// Size: 0x0c (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionBoneFilter {
	struct FName BoneName; // 0x00(0x08)
	char bIncludeOrExclude : 1; // 0x08(0x01)
	char bApplyToChildren : 1; // 0x08(0x01)
	char UnknownData_8_2 : 6; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// Size: 0x08 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionMaterialFilter {
	struct FName MaterialName; // 0x00(0x08)
};

// ScriptStruct Engine.VirtualBone
// Size: 0x18 (Inherited: 0x00)
struct FVirtualBone {
	struct FName SourceBoneName; // 0x00(0x08)
	struct FName TargetBoneName; // 0x08(0x08)
	struct FName VirtualBoneName; // 0x10(0x08)
};

// ScriptStruct Engine.AnimSlotGroup
// Size: 0x18 (Inherited: 0x00)
struct FAnimSlotGroup {
	struct FName GroupName; // 0x00(0x08)
	struct TArray<struct FName> SlotNames; // 0x08(0x10)
};

// ScriptStruct Engine.RigConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FRigConfiguration {
	struct URig* Rig; // 0x00(0x08)
	struct TArray<struct FNameMapping> BoneMappingTable; // 0x08(0x10)
};

// ScriptStruct Engine.NameMapping
// Size: 0x10 (Inherited: 0x00)
struct FNameMapping {
	struct FName NodeName; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
};

// ScriptStruct Engine.BoneReductionSetting
// Size: 0x10 (Inherited: 0x00)
struct FBoneReductionSetting {
	struct TArray<struct FName> BonesToRemove; // 0x00(0x10)
};

// ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x00)
struct FReferencePose {
	struct FName PoseName; // 0x00(0x08)
	struct TArray<struct FTransform> ReferencePose; // 0x08(0x10)
};

// ScriptStruct Engine.BoneNode
// Size: 0x10 (Inherited: 0x00)
struct FBoneNode {
	struct FName Name; // 0x00(0x08)
	int32_t ParentIndex; // 0x08(0x04)
	char TranslationRetargetingMode; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// Size: 0x20 (Inherited: 0x00)
struct FSkeletonToMeshLinkup {
	struct TArray<int32_t> SkeletonToMeshTable; // 0x00(0x10)
	struct TArray<int32_t> MeshToSkeletonTable; // 0x10(0x10)
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// Size: 0x28 (Inherited: 0x00)
struct FSkelMeshComponentLODInfo {
	struct TArray<bool> HiddenMaterials; // 0x00(0x10)
	char UnknownData_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// Size: 0x3c (Inherited: 0x00)
struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x00(0x30)
	char Weights[0xc]; // 0x30(0x0c)
};

// ScriptStruct Engine.SkinWeightProfileInfo
// Size: 0x10 (Inherited: 0x00)
struct FSkinWeightProfileInfo {
	struct FName Name; // 0x00(0x08)
	struct FPerPlatformBool DefaultProfile; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FPerPlatformInt DefaultProfileFromLODIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.TentDistribution
// Size: 0x0c (Inherited: 0x00)
struct FTentDistribution {
	float TipAltitude; // 0x00(0x04)
	float TipValue; // 0x04(0x04)
	float Width; // 0x08(0x04)
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// Size: 0x160 (Inherited: 0xa8)
struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	struct FGuid LightGuid; // 0xa8(0x10)
	float AverageBrightness; // 0xb8(0x04)
	char UnknownData_BC[0xa4]; // 0xbc(0xa4)
};

// ScriptStruct Engine.SmartNameContainer
// Size: 0x50 (Inherited: 0x00)
struct FSmartNameContainer {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.SmartNameMapping
// Size: 0x70 (Inherited: 0x00)
struct FSmartNameMapping {
	char UnknownData_0[0x70]; // 0x00(0x70)
};

// ScriptStruct Engine.CurveMetaData
// Size: 0x20 (Inherited: 0x00)
struct FCurveMetaData {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x3a0 (Inherited: 0xb0)
struct FSoundAttenuationSettings : FBaseAttenuationSettings {
	char bAttenuate : 1; // 0xb0(0x01)
	char bSpatialize : 1; // 0xb0(0x01)
	char bAttenuateWithLPF : 1; // 0xb0(0x01)
	char bEnableListenerFocus : 1; // 0xb0(0x01)
	char bEnableFocusInterpolation : 1; // 0xb0(0x01)
	char bEnableOcclusion : 1; // 0xb0(0x01)
	char bUseComplexCollisionForOcclusion : 1; // 0xb0(0x01)
	char bEnableReverbSend : 1; // 0xb0(0x01)
	char bEnablePriorityAttenuation : 1; // 0xb1(0x01)
	char bApplyNormalizationToStereoSounds : 1; // 0xb1(0x01)
	char bEnableLogFrequencyScaling : 1; // 0xb1(0x01)
	char bEnableSubmixSends : 1; // 0xb1(0x01)
	char UnknownData_B1_4 : 4; // 0xb1(0x01)
	char SpatializationAlgorithm; // 0xb2(0x01)
	char UnknownData_B3[0x1]; // 0xb3(0x01)
	float BinauralRadius; // 0xb4(0x04)
	enum class EAirAbsorptionMethod AbsorptionMethod; // 0xb8(0x01)
	char OcclusionTraceChannel; // 0xb9(0x01)
	enum class EReverbSendMethod ReverbSendMethod; // 0xba(0x01)
	enum class EPriorityAttenuationMethod PriorityAttenuationMethod; // 0xbb(0x01)
	float OmniRadius; // 0xbc(0x04)
	float StereoSpread; // 0xc0(0x04)
	float LPFRadiusMin; // 0xc4(0x04)
	float LPFRadiusMax; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xd0(0x88)
	struct FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x158(0x88)
	float LPFFrequencyAtMin; // 0x1e0(0x04)
	float LPFFrequencyAtMax; // 0x1e4(0x04)
	float HPFFrequencyAtMin; // 0x1e8(0x04)
	float HPFFrequencyAtMax; // 0x1ec(0x04)
	float FocusAzimuth; // 0x1f0(0x04)
	float NonFocusAzimuth; // 0x1f4(0x04)
	float FocusDistanceScale; // 0x1f8(0x04)
	float NonFocusDistanceScale; // 0x1fc(0x04)
	float FocusPriorityScale; // 0x200(0x04)
	float NonFocusPriorityScale; // 0x204(0x04)
	float FocusVolumeAttenuation; // 0x208(0x04)
	float NonFocusVolumeAttenuation; // 0x20c(0x04)
	float FocusAttackInterpSpeed; // 0x210(0x04)
	float FocusReleaseInterpSpeed; // 0x214(0x04)
	float OcclusionLowPassFilterFrequency; // 0x218(0x04)
	float OcclusionVolumeAttenuation; // 0x21c(0x04)
	float OcclusionInterpolationTime; // 0x220(0x04)
	float ReverbWetLevelMin; // 0x224(0x04)
	float ReverbWetLevelMax; // 0x228(0x04)
	float ReverbDistanceMin; // 0x22c(0x04)
	float ReverbDistanceMax; // 0x230(0x04)
	float ManualReverbSendLevel; // 0x234(0x04)
	struct FRuntimeFloatCurve CustomReverbSendCurve; // 0x238(0x88)
	struct TArray<struct FAttenuationSubmixSendSettings> SubmixSendSettings; // 0x2c0(0x10)
	float PriorityAttenuationMin; // 0x2d0(0x04)
	float PriorityAttenuationMax; // 0x2d4(0x04)
	float PriorityAttenuationDistanceMin; // 0x2d8(0x04)
	float PriorityAttenuationDistanceMax; // 0x2dc(0x04)
	float ManualPriorityAttenuation; // 0x2e0(0x04)
	char UnknownData_2E4[0x4]; // 0x2e4(0x04)
	struct FRuntimeFloatCurve CustomPriorityAttenuationCurve; // 0x2e8(0x88)
	struct FSoundAttenuationPluginSettings PluginSettings; // 0x370(0x30)
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// Size: 0x30 (Inherited: 0x00)
struct FSoundAttenuationPluginSettings {
	struct TArray<struct USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x00(0x10)
	struct TArray<struct UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10(0x10)
	struct TArray<struct UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20(0x10)
};

// ScriptStruct Engine.AttenuationSubmixSendSettings
// Size: 0xa8 (Inherited: 0x00)
struct FAttenuationSubmixSendSettings {
	struct USoundSubmixBase* Submix; // 0x00(0x08)
	enum class ESubmixSendMethod SubmixSendMethod; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float SubmixSendLevelMin; // 0x0c(0x04)
	float SubmixSendLevelMax; // 0x10(0x04)
	float SubmixSendDistanceMin; // 0x14(0x04)
	float SubmixSendDistanceMax; // 0x18(0x04)
	float ManualSubmixSendLevel; // 0x1c(0x04)
	struct FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20(0x88)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x00)
struct FPassiveSoundMixModifier {
	struct USoundMix* SoundMix; // 0x00(0x08)
	float MinVolumeThreshold; // 0x08(0x04)
	float MaxVolumeThreshold; // 0x0c(0x04)
};

// ScriptStruct Engine.SoundClassProperties
// Size: 0x58 (Inherited: 0x00)
struct FSoundClassProperties {
	float Volume; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
	float LowPassFilterFrequency; // 0x08(0x04)
	float AttenuationDistanceScale; // 0x0c(0x04)
	float StereoBleed; // 0x10(0x04)
	float LFEBleed; // 0x14(0x04)
	float VoiceCenterChannelVolume; // 0x18(0x04)
	float RadioFilterVolume; // 0x1c(0x04)
	float RadioFilterVolumeThreshold; // 0x20(0x04)
	char bApplyEffects : 1; // 0x24(0x01)
	char bAlwaysPlay : 1; // 0x24(0x01)
	char bIsUISound : 1; // 0x24(0x01)
	char bIsMusic : 1; // 0x24(0x01)
	char bCenterChannelOnly : 1; // 0x24(0x01)
	char bApplyAmbientVolumes : 1; // 0x24(0x01)
	char bReverb : 1; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
	float Default2DReverbSendAmount; // 0x28(0x04)
	char OutputTarget; // 0x2c(0x01)
	enum class ESoundWaveLoadingBehavior LoadingBehavior; // 0x2d(0x01)
	char UnknownData_2E[0x2]; // 0x2e(0x02)
	struct USoundSubmix* DefaultSubmix; // 0x30(0x08)
	char UnknownData_38[0x20]; // 0x38(0x20)
};

// ScriptStruct Engine.SoundClassEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundClassEditorData {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.SoundConcurrencySettings
// Size: 0x20 (Inherited: 0x00)
struct FSoundConcurrencySettings {
	int32_t MaxCount; // 0x00(0x04)
	char bLimitToOwner : 1; // 0x04(0x01)
	char UnknownData_4_1 : 7; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	char ResolutionRule; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float VolumeScale; // 0x0c(0x04)
	float VolumeScaleAttackTime; // 0x10(0x04)
	char bVolumeScaleCanRelease : 1; // 0x14(0x01)
	char UnknownData_14_1 : 7; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	float VolumeScaleReleaseTime; // 0x18(0x04)
	float VoiceStealReleaseTime; // 0x1c(0x04)
};

// ScriptStruct Engine.SoundNodeEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundNodeEditorData {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.SourceEffectChainEntry
// Size: 0x10 (Inherited: 0x00)
struct FSourceEffectChainEntry {
	struct USoundEffectSourcePreset* Preset; // 0x00(0x08)
	char bBypass : 1; // 0x08(0x01)
	char UnknownData_8_1 : 7; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x00)
struct FSoundGroup {
	char SoundGroup; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FString DisplayName; // 0x08(0x10)
	char bAlwaysDecompressOnLoad : 1; // 0x18(0x01)
	char UnknownData_18_1 : 7; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	float DecompressedDuration; // 0x1c(0x04)
};

// ScriptStruct Engine.SoundClassAdjuster
// Size: 0x20 (Inherited: 0x00)
struct FSoundClassAdjuster {
	struct USoundClass* SoundClassObject; // 0x00(0x08)
	float VolumeAdjuster; // 0x08(0x04)
	float PitchAdjuster; // 0x0c(0x04)
	float LowPassFilterFrequency; // 0x10(0x04)
	char bApplyToChildren : 1; // 0x14(0x01)
	char UnknownData_14_1 : 7; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	float VoiceCenterChannelVolumeAdjuster; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.AudioEQEffect
// Size: 0x40 (Inherited: 0x08)
struct FAudioEQEffect : FAudioEffectParameters {
	char UnknownData_8[0x8]; // 0x08(0x08)
	float FrequencyCenter0; // 0x10(0x04)
	float Gain0; // 0x14(0x04)
	float Bandwidth0; // 0x18(0x04)
	float FrequencyCenter1; // 0x1c(0x04)
	float Gain1; // 0x20(0x04)
	float Bandwidth1; // 0x24(0x04)
	float FrequencyCenter2; // 0x28(0x04)
	float Gain2; // 0x2c(0x04)
	float Bandwidth2; // 0x30(0x04)
	float FrequencyCenter3; // 0x34(0x04)
	float Gain3; // 0x38(0x04)
	float Bandwidth3; // 0x3c(0x04)
};

// ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x00)
struct FDistanceDatum {
	float FadeInDistanceStart; // 0x00(0x04)
	float FadeInDistanceEnd; // 0x04(0x04)
	float FadeOutDistanceStart; // 0x08(0x04)
	float FadeOutDistanceEnd; // 0x0c(0x04)
	float Volume; // 0x10(0x04)
};

// ScriptStruct Engine.ModulatorContinuousParams
// Size: 0x20 (Inherited: 0x00)
struct FModulatorContinuousParams {
	struct FName ParameterName; // 0x00(0x08)
	float Default; // 0x08(0x04)
	float MinInput; // 0x0c(0x04)
	float MaxInput; // 0x10(0x04)
	float MinOutput; // 0x14(0x04)
	float MaxOutput; // 0x18(0x04)
	char ParamMode; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// Size: 0xb0 (Inherited: 0x00)
struct FSoundSourceBusSendInfo {
	enum class ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct USoundSourceBus* SoundSourceBus; // 0x08(0x08)
	float SendLevel; // 0x10(0x04)
	float MinSendLevel; // 0x14(0x04)
	float MaxSendLevel; // 0x18(0x04)
	float MinSendDistance; // 0x1c(0x04)
	float MaxSendDistance; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0x88)
};

// ScriptStruct Engine.SoundSubmixSendInfo
// Size: 0xb0 (Inherited: 0x00)
struct FSoundSubmixSendInfo {
	enum class ESendLevelControlMethod SendLevelControlMethod; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct USoundSubmixBase* SoundSubmix; // 0x08(0x08)
	float SendLevel; // 0x10(0x04)
	float MinSendLevel; // 0x14(0x04)
	float MaxSendLevel; // 0x18(0x04)
	float MinSendDistance; // 0x1c(0x04)
	float MaxSendDistance; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0x88)
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// Size: 0x08 (Inherited: 0x00)
struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x00(0x04)
	float TimeSec; // 0x04(0x04)
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// Size: 0x18 (Inherited: 0x00)
struct FSoundWaveSpectralTimeData {
	struct TArray<struct FSoundWaveSpectralDataEntry> Data; // 0x00(0x10)
	float TimeSec; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// Size: 0x08 (Inherited: 0x00)
struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x00(0x04)
	float NormalizedMagnitude; // 0x04(0x04)
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// Size: 0x10 (Inherited: 0x00)
struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x00(0x04)
	float PlaybackTime; // 0x04(0x04)
	struct USoundWave* SoundWave; // 0x08(0x08)
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// Size: 0x20 (Inherited: 0x00)
struct FSoundWaveSpectralDataPerSound {
	struct TArray<struct FSoundWaveSpectralData> SpectralData; // 0x00(0x10)
	float PlaybackTime; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWave; // 0x18(0x08)
};

// ScriptStruct Engine.SoundWaveSpectralData
// Size: 0x0c (Inherited: 0x00)
struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x00(0x04)
	float Magnitude; // 0x04(0x04)
	float NormalizedMagnitude; // 0x08(0x04)
};

// ScriptStruct Engine.StreamedAudioPlatformData
// Size: 0x20 (Inherited: 0x00)
struct FStreamedAudioPlatformData {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SplineInstanceData
// Size: 0x180 (Inherited: 0xa8)
struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
	struct FSplineCurves SplineCurves; // 0xb0(0x68)
	struct FSplineCurves SplineCurvesPreUCS; // 0x118(0x68)
};

// ScriptStruct Engine.SplineCurves
// Size: 0x68 (Inherited: 0x00)
struct FSplineCurves {
	struct FInterpCurveVector Position; // 0x00(0x18)
	struct FInterpCurveQuat Rotation; // 0x18(0x18)
	struct FInterpCurveVector Scale; // 0x30(0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48(0x18)
	struct USplineMetadata* MetaData; // 0x60(0x08)
};

// ScriptStruct Engine.SplinePoint
// Size: 0x44 (Inherited: 0x00)
struct FSplinePoint {
	float InputKey; // 0x00(0x04)
	struct FVector Position; // 0x04(0x0c)
	struct FVector ArriveTangent; // 0x10(0x0c)
	struct FVector LeaveTangent; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	struct FVector Scale; // 0x34(0x0c)
	char Type; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.SplineMeshInstanceData
// Size: 0xd8 (Inherited: 0xa8)
struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	struct FVector StartPos; // 0xa8(0x0c)
	struct FVector EndPos; // 0xb4(0x0c)
	struct FVector StartTangent; // 0xc0(0x0c)
	struct FVector EndTangent; // 0xcc(0x0c)
};

// ScriptStruct Engine.SplineMeshParams
// Size: 0x58 (Inherited: 0x00)
struct FSplineMeshParams {
	struct FVector StartPos; // 0x00(0x0c)
	struct FVector StartTangent; // 0x0c(0x0c)
	struct FVector2D StartScale; // 0x18(0x08)
	float StartRoll; // 0x20(0x04)
	struct FVector2D StartOffset; // 0x24(0x08)
	struct FVector EndPos; // 0x2c(0x0c)
	struct FVector2D EndScale; // 0x38(0x08)
	struct FVector EndTangent; // 0x40(0x0c)
	float EndRoll; // 0x4c(0x04)
	struct FVector2D EndOffset; // 0x50(0x08)
};

// ScriptStruct Engine.MaterialRemapIndex
// Size: 0x18 (Inherited: 0x00)
struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> MaterialRemap; // 0x08(0x10)
};

// ScriptStruct Engine.StaticMaterial
// Size: 0x30 (Inherited: 0x00)
struct FStaticMaterial {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct FName ImportedMaterialSlotName; // 0x10(0x08)
	struct FMeshUVChannelInfo UVChannelData; // 0x18(0x14)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// Size: 0x28 (Inherited: 0x00)
struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FVector CamOrbitPoint; // 0x04(0x0c)
	struct FVector CamOrbitZoom; // 0x10(0x0c)
	struct FRotator CamOrbitRotation; // 0x1c(0x0c)
};

// ScriptStruct Engine.MeshSectionInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FMeshSectionInfoMap {
	struct TMap<uint32_t, struct FMeshSectionInfo> Map; // 0x00(0x50)
};

// ScriptStruct Engine.MeshSectionInfo
// Size: 0x08 (Inherited: 0x00)
struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x00(0x04)
	bool bEnableCollision; // 0x04(0x01)
	bool bCastShadow; // 0x05(0x01)
	bool bForceOpaque; // 0x06(0x01)
	char UnknownData_7[0x1]; // 0x07(0x01)
};

// ScriptStruct Engine.StaticMeshSourceModel
// Size: 0x70 (Inherited: 0x00)
struct FStaticMeshSourceModel {
	struct FMeshBuildSettings BuildSettings; // 0x00(0x30)
	struct FMeshReductionSettings ReductionSettings; // 0x30(0x24)
	float LODDistance; // 0x54(0x04)
	struct FPerPlatformFloat ScreenSize; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FString SourceImportFilename; // 0x60(0x10)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// Size: 0x1c (Inherited: 0x00)
struct FStaticMeshOptimizationSettings {
	char ReductionMethod; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float MaxDeviationPercentage; // 0x08(0x04)
	float WeldingThreshold; // 0x0c(0x04)
	bool bRecalcNormals; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float NormalsThreshold; // 0x14(0x04)
	char SilhouetteImportance; // 0x18(0x01)
	char TextureImportance; // 0x19(0x01)
	char ShadingImportance; // 0x1a(0x01)
	char UnknownData_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// Size: 0x130 (Inherited: 0xf0)
struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	struct UStaticMesh* StaticMesh; // 0xf0(0x08)
	struct TArray<struct FStaticMeshVertexColorLODData> VertexColorLODs; // 0xf8(0x10)
	struct TArray<struct FGuid> CachedStaticLighting; // 0x108(0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x118(0x10)
	char UnknownData_128[0x8]; // 0x128(0x08)
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// Size: 0x0c (Inherited: 0x00)
struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x00(0x04)
	int32_t TextureLevelIndex; // 0x04(0x04)
	float TexelFactor; // 0x08(0x04)
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// Size: 0x28 (Inherited: 0x00)
struct FStaticMeshVertexColorLODData {
	struct TArray<struct FPaintedVertex> PaintedVertices; // 0x00(0x10)
	struct TArray<struct FColor> VertexBufferColors; // 0x10(0x10)
	uint32_t LODIndex; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.PaintedVertex
// Size: 0x20 (Inherited: 0x00)
struct FPaintedVertex {
	struct FVector Position; // 0x00(0x0c)
	struct FColor Color; // 0x0c(0x04)
	struct FVector4 Normal; // 0x10(0x10)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// Size: 0x90 (Inherited: 0x00)
struct FStaticMeshComponentLODInfo {
	char UnknownData_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.StaticParameterSet
// Size: 0x40 (Inherited: 0x00)
struct FStaticParameterSet {
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameters; // 0x00(0x10)
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10(0x10)
	struct TArray<struct FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20(0x10)
	struct TArray<struct FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30(0x10)
};

// ScriptStruct Engine.StaticParameterBase
// Size: 0x24 (Inherited: 0x00)
struct FStaticParameterBase {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x10)
	bool bOverride; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	struct FGuid ExpressionGUID; // 0x14(0x10)
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// Size: 0x68 (Inherited: 0x24)
struct FStaticMaterialLayersParameter : FStaticParameterBase {
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FMaterialLayersFunctions Value; // 0x28(0x40)
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// Size: 0x2c (Inherited: 0x24)
struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24(0x04)
	bool bWeightBasedBlend; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
};

// ScriptStruct Engine.StaticComponentMaskParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24(0x01)
	bool G; // 0x25(0x01)
	bool B; // 0x26(0x01)
	bool A; // 0x27(0x01)
};

// ScriptStruct Engine.StaticSwitchParameter
// Size: 0x28 (Inherited: 0x24)
struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.EquirectProps
// Size: 0x48 (Inherited: 0x00)
struct FEquirectProps {
	struct FBox2D LeftUVRect; // 0x00(0x14)
	struct FBox2D RightUVRect; // 0x14(0x14)
	struct FVector2D LeftScale; // 0x28(0x08)
	struct FVector2D RightScale; // 0x30(0x08)
	struct FVector2D LeftBias; // 0x38(0x08)
	struct FVector2D RightBias; // 0x40(0x08)
};

// ScriptStruct Engine.StringCurve
// Size: 0x88 (Inherited: 0x68)
struct FStringCurve : FIndexedCurve {
	struct FString DefaultValue; // 0x68(0x10)
	struct TArray<struct FStringCurveKey> Keys; // 0x78(0x10)
};

// ScriptStruct Engine.StringCurveKey
// Size: 0x18 (Inherited: 0x00)
struct FStringCurveKey {
	float Time; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x8c (Inherited: 0x00)
struct FSubsurfaceProfileStruct {
	struct FLinearColor SurfaceAlbedo; // 0x00(0x10)
	struct FLinearColor MeanFreePathColor; // 0x10(0x10)
	float MeanFreePathDistance; // 0x20(0x04)
	float WorldUnitScale; // 0x24(0x04)
	bool bEnableBurley; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float ScatterRadius; // 0x2c(0x04)
	struct FLinearColor SubsurfaceColor; // 0x30(0x10)
	struct FLinearColor FalloffColor; // 0x40(0x10)
	struct FLinearColor BoundaryColorBleed; // 0x50(0x10)
	float ExtinctionScale; // 0x60(0x04)
	float NormalScale; // 0x64(0x04)
	float ScatteringDistribution; // 0x68(0x04)
	float IOR; // 0x6c(0x04)
	float Roughness0; // 0x70(0x04)
	float Roughness1; // 0x74(0x04)
	float LobeMix; // 0x78(0x04)
	struct FLinearColor TransmissionTintColor; // 0x7c(0x10)
};

// ScriptStruct Engine.TextureFormatSettings
// Size: 0x02 (Inherited: 0x00)
struct FTextureFormatSettings {
	char CompressionSettings; // 0x00(0x01)
	char CompressionNoAlpha : 1; // 0x01(0x01)
	char CompressionNone : 1; // 0x01(0x01)
	char CompressionYCoCg : 1; // 0x01(0x01)
	char SRGB : 1; // 0x01(0x01)
	char UnknownData_1_4 : 4; // 0x01(0x01)
};

// ScriptStruct Engine.TexturePlatformData
// Size: 0x30 (Inherited: 0x00)
struct FTexturePlatformData {
	char UnknownData_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.TextureSource
// Size: 0x38 (Inherited: 0x00)
struct FTextureSource {
	char UnknownData_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Engine.TextureSourceBlock
// Size: 0x18 (Inherited: 0x00)
struct FTextureSourceBlock {
	int32_t BlockX; // 0x00(0x04)
	int32_t BlockY; // 0x04(0x04)
	int32_t SizeX; // 0x08(0x04)
	int32_t SizeY; // 0x0c(0x04)
	int32_t NumSlices; // 0x10(0x04)
	int32_t NumMips; // 0x14(0x04)
};

// ScriptStruct Engine.TextureLODGroup
// Size: 0x54 (Inherited: 0x00)
struct FTextureLODGroup {
	char Group; // 0x00(0x01)
	char UnknownData_1[0xb]; // 0x01(0x0b)
	int32_t LODBias; // 0x0c(0x04)
	int32_t LODBias_Smaller; // 0x10(0x04)
	int32_t LODBias_Smallest; // 0x14(0x04)
	char UnknownData_18[0x4]; // 0x18(0x04)
	int32_t NumStreamedMips; // 0x1c(0x04)
	char MipGenSettings; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	int32_t MinLODSize; // 0x24(0x04)
	int32_t MaxLODSize; // 0x28(0x04)
	int32_t MaxLODSize_Smaller; // 0x2c(0x04)
	int32_t MaxLODSize_Smallest; // 0x30(0x04)
	int32_t OptionalLODBias; // 0x34(0x04)
	int32_t OptionalMaxLODSize; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FName MinMagFilter; // 0x40(0x08)
	struct FName MipFilter; // 0x48(0x08)
	enum class ETextureMipLoadOptions MipLoadOptions; // 0x50(0x01)
	bool DuplicateNonOptionalMips; // 0x51(0x01)
	char UnknownData_52[0x2]; // 0x52(0x02)
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// Size: 0x30 (Inherited: 0x00)
struct FStreamingRenderAssetPrimitiveInfo {
	struct UStreamableRenderAsset* RenderAsset; // 0x00(0x08)
	struct FBoxSphereBounds Bounds; // 0x08(0x1c)
	float TexelFactor; // 0x24(0x04)
	uint32_t PackedRelativeBox; // 0x28(0x04)
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c(0x01)
	char UnknownData_2C_1 : 7; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Engine.Timeline
// Size: 0x98 (Inherited: 0x00)
struct FTimeline {
	char LengthMode; // 0x00(0x01)
	char bLooping : 1; // 0x01(0x01)
	char bReversePlayback : 1; // 0x01(0x01)
	char bPlaying : 1; // 0x01(0x01)
	char UnknownData_1_3 : 5; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float Length; // 0x04(0x04)
	float PlayRate; // 0x08(0x04)
	float Position; // 0x0c(0x04)
	struct TArray<struct FTimelineEventEntry> Events; // 0x10(0x10)
	struct TArray<struct FTimelineVectorTrack> InterpVectors; // 0x20(0x10)
	struct TArray<struct FTimelineFloatTrack> InterpFloats; // 0x30(0x10)
	struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; // 0x40(0x10)
	struct FDelegate TimelinePostUpdateFunc; // 0x50(0x10)
	struct FDelegate TimelineFinishedFunc; // 0x60(0x10)
	struct FWeakObjectPtr<struct UObject> PropertySetObject; // 0x70(0x08)
	struct FName DirectionPropertyName; // 0x78(0x08)
	char UnknownData_80[0x18]; // 0x80(0x18)
};

// ScriptStruct Engine.TimelineLinearColorTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineLinearColorTrack {
	struct UCurveLinearColor* LinearColorCurve; // 0x00(0x08)
	struct FDelegate InterpFunc; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName LinearColorPropertyName; // 0x20(0x08)
	char UnknownData_28[0x18]; // 0x28(0x18)
};

// ScriptStruct Engine.TimelineFloatTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineFloatTrack {
	struct UCurveFloat* FloatCurve; // 0x00(0x08)
	struct FDelegate InterpFunc; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName FloatPropertyName; // 0x20(0x08)
	char UnknownData_28[0x18]; // 0x28(0x18)
};

// ScriptStruct Engine.TimelineVectorTrack
// Size: 0x40 (Inherited: 0x00)
struct FTimelineVectorTrack {
	struct UCurveVector* VectorCurve; // 0x00(0x08)
	struct FDelegate InterpFunc; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName VectorPropertyName; // 0x20(0x08)
	char UnknownData_28[0x18]; // 0x28(0x18)
};

// ScriptStruct Engine.TimelineEventEntry
// Size: 0x14 (Inherited: 0x00)
struct FTimelineEventEntry {
	float Time; // 0x00(0x04)
	struct FDelegate EventFunc; // 0x04(0x10)
};

// ScriptStruct Engine.TTTrackBase
// Size: 0x18 (Inherited: 0x00)
struct FTTTrackBase {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FName TrackName; // 0x08(0x08)
	bool bIsExternalCurve; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.TTPropertyTrack
// Size: 0x20 (Inherited: 0x18)
struct FTTPropertyTrack : FTTTrackBase {
	struct FName PropertyName; // 0x18(0x08)
};

// ScriptStruct Engine.TTLinearColorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTLinearColorTrack : FTTPropertyTrack {
	struct UCurveLinearColor* CurveLinearColor; // 0x20(0x08)
};

// ScriptStruct Engine.TTVectorTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTVectorTrack : FTTPropertyTrack {
	struct UCurveVector* CurveVector; // 0x20(0x08)
};

// ScriptStruct Engine.TTFloatTrack
// Size: 0x28 (Inherited: 0x20)
struct FTTFloatTrack : FTTPropertyTrack {
	struct UCurveFloat* CurveFloat; // 0x20(0x08)
};

// ScriptStruct Engine.TTEventTrack
// Size: 0x28 (Inherited: 0x18)
struct FTTEventTrack : FTTTrackBase {
	struct FName FunctionName; // 0x18(0x08)
	struct UCurveFloat* CurveKeys; // 0x20(0x08)
};

// ScriptStruct Engine.TimeStretchCurveInstance
// Size: 0x30 (Inherited: 0x00)
struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x00(0x01)
	char UnknownData_1[0x2f]; // 0x01(0x2f)
};

// ScriptStruct Engine.TimeStretchCurve
// Size: 0x28 (Inherited: 0x00)
struct FTimeStretchCurve {
	float SamplingRate; // 0x00(0x04)
	float CurveValueMinPrecision; // 0x04(0x04)
	struct TArray<struct FTimeStretchCurveMarker> Markers; // 0x08(0x10)
	float Sum_dT_i_by_C_i[0x3]; // 0x18(0x0c)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.TimeStretchCurveMarker
// Size: 0x10 (Inherited: 0x00)
struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x00(0x0c)
	float alpha; // 0x0c(0x04)
};

// ScriptStruct Engine.TouchInputControl
// Size: 0x68 (Inherited: 0x00)
struct FTouchInputControl {
	struct UTexture2D* Image1; // 0x00(0x08)
	struct UTexture2D* Image2; // 0x08(0x08)
	struct FVector2D Center; // 0x10(0x08)
	struct FVector2D VisualSize; // 0x18(0x08)
	struct FVector2D ThumbSize; // 0x20(0x08)
	struct FVector2D InteractionSize; // 0x28(0x08)
	struct FVector2D InputScale; // 0x30(0x08)
	struct FKey MainInputKey; // 0x38(0x18)
	struct FKey AltInputKey; // 0x50(0x18)
};

// ScriptStruct Engine.HardwareCursorReference
// Size: 0x10 (Inherited: 0x00)
struct FHardwareCursorReference {
	struct FName CursorPath; // 0x00(0x08)
	struct FVector2D HotSpot; // 0x08(0x08)
};

// ScriptStruct Engine.VirtualTextureBuildSettings
// Size: 0x0c (Inherited: 0x00)
struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x00(0x04)
	int32_t TileBorderSize; // 0x04(0x04)
	bool bEnableCompressCrunch; // 0x08(0x01)
	bool bEnableCompressZlib; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Engine.VirtualTextureSpacePoolConfig
// Size: 0x20 (Inherited: 0x00)
struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x00(0x04)
	int32_t MaxTileSize; // 0x04(0x04)
	struct TArray<char> Formats; // 0x08(0x10)
	int32_t SizeInMegabyte; // 0x18(0x04)
	bool bAllowSizeScale; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.VoiceSettings
// Size: 0x18 (Inherited: 0x00)
struct FVoiceSettings {
	struct USceneComponent* ComponentToAttachTo; // 0x00(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x08(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x10(0x08)
};

// ScriptStruct Engine.StreamingLevelsToConsider
// Size: 0x28 (Inherited: 0x00)
struct FStreamingLevelsToConsider {
	struct TArray<struct FLevelStreamingWrapper> StreamingLevels; // 0x00(0x10)
	char UnknownData_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Engine.LevelStreamingWrapper
// Size: 0x08 (Inherited: 0x00)
struct FLevelStreamingWrapper {
	struct ULevelStreaming* StreamingLevel; // 0x00(0x08)
};

// ScriptStruct Engine.LevelCollection
// Size: 0x78 (Inherited: 0x00)
struct FLevelCollection {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct AGameStateBase* GameState; // 0x08(0x08)
	struct UNetDriver* NetDriver; // 0x10(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x08)
	struct ULevel* PersistentLevel; // 0x20(0x08)
	struct TSet<struct ULevel*> Levels; // 0x28(0x50)
};

// ScriptStruct Engine.EndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FEndPhysicsTickFunction : FTickFunction {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.StartPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FStartPhysicsTickFunction : FTickFunction {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.LevelViewportInfo
// Size: 0x20 (Inherited: 0x00)
struct FLevelViewportInfo {
	struct FVector CamPosition; // 0x00(0x0c)
	struct FRotator CamRotation; // 0x0c(0x0c)
	float CamOrthoZoom; // 0x18(0x04)
	bool CamUpdated; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.WorldPSCPool
// Size: 0x58 (Inherited: 0x00)
struct FWorldPSCPool {
	struct TMap<struct UParticleSystem*, struct FPSCPool> WorldParticleSystemPools; // 0x00(0x50)
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.PSCPool
// Size: 0x38 (Inherited: 0x00)
struct FPSCPool {
	struct TArray<struct FPSCPoolElem> FreeElements; // 0x00(0x10)
	struct TArray<struct UParticleSystemComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UParticleSystemComponent*> InUseComponents_Manual; // 0x20(0x10)
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Engine.PSCPoolElem
// Size: 0x10 (Inherited: 0x00)
struct FPSCPoolElem {
	struct UParticleSystemComponent* PSC; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.BroadphaseSettings
// Size: 0x40 (Inherited: 0x00)
struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x00(0x01)
	bool bUseMBPOnServer; // 0x01(0x01)
	bool bUseMBPOuterBounds; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	struct FBox MBPBounds; // 0x04(0x1c)
	struct FBox MBPOuterBounds; // 0x20(0x1c)
	uint32_t MBPNumSubdivs; // 0x3c(0x04)
};

// ScriptStruct Engine.HierarchicalSimplification
// Size: 0x160 (Inherited: 0x00)
struct FHierarchicalSimplification {
	float TransitionScreenSize; // 0x00(0x04)
	float OverrideDrawDistance; // 0x04(0x04)
	char bUseOverrideDrawDistance : 1; // 0x08(0x01)
	char bAllowSpecificExclusion : 1; // 0x08(0x01)
	char bSimplifyMesh : 1; // 0x08(0x01)
	char bOnlyGenerateClustersForVolumes : 1; // 0x08(0x01)
	char bReusePreviousLevelClusters : 1; // 0x08(0x01)
	char UnknownData_8_5 : 3; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FMeshProxySettings ProxySetting; // 0x0c(0xa8)
	struct FMeshMergingSettings MergeSetting; // 0xb4(0xa0)
	float DesiredBoundRadius; // 0x154(0x04)
	float DesiredFillingPercentage; // 0x158(0x04)
	int32_t MinNumberOfActorsToBuild; // 0x15c(0x04)
};

// ScriptStruct Engine.NetViewer
// Size: 0x30 (Inherited: 0x00)
struct FNetViewer {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* InViewer; // 0x08(0x08)
	struct AActor* ViewTarget; // 0x10(0x08)
	struct FVector ViewLocation; // 0x18(0x0c)
	struct FVector ViewDir; // 0x24(0x0c)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x4c (Inherited: 0x00)
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x00(0x04)
	int32_t NumIndirectLightingBounces; // 0x04(0x04)
	int32_t NumSkyLightingBounces; // 0x08(0x04)
	float IndirectLightingQuality; // 0x0c(0x04)
	float IndirectLightingSmoothness; // 0x10(0x04)
	struct FColor EnvironmentColor; // 0x14(0x04)
	float EnvironmentIntensity; // 0x18(0x04)
	float EmissiveBoost; // 0x1c(0x04)
	float DiffuseBoost; // 0x20(0x04)
	char VolumeLightingMethod; // 0x24(0x01)
	char bUseAmbientOcclusion : 1; // 0x25(0x01)
	char bGenerateAmbientOcclusionMaterialMask : 1; // 0x25(0x01)
	char bVisualizeMaterialDiffuse : 1; // 0x25(0x01)
	char bVisualizeAmbientOcclusion : 1; // 0x25(0x01)
	char bCompressLightmaps : 1; // 0x25(0x01)
	char UnknownData_25_5 : 3; // 0x25(0x01)
	char UnknownData_26[0x2]; // 0x26(0x02)
	float VolumetricLightmapDetailCellSize; // 0x28(0x04)
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x2c(0x04)
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x30(0x04)
	float VolumeLightSamplePlacementScale; // 0x34(0x04)
	float DirectIlluminationOcclusionFraction; // 0x38(0x04)
	float IndirectIlluminationOcclusionFraction; // 0x3c(0x04)
	float OcclusionExponent; // 0x40(0x04)
	float FullyOccludedSamplesFraction; // 0x44(0x04)
	float MaxOcclusionDistance; // 0x48(0x04)
};

