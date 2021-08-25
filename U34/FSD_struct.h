// Enum FSD.EDrinkableAlcoholStrength
enum class EDrinkableAlcoholStrength : uint8_t {
	NonAlcoholic,
	Light,
	Regular,
	Strong,
	VeryStrong,
	InstantPassout,
	EDrinkableAlcoholStrength_MAX,
};

// Enum FSD.EIntoxicationState
enum class EIntoxicationState : uint8_t {
	NotIntoxicated,
	Intoxicated,
	PassOut,
	EIntoxicationState_MAX,
};

// Enum FSD.ECharacterState
enum class ECharacterState : uint8_t {
	Walking,
	Downed,
	Dead,
	Falling,
	Paralyzed,
	Using,
	ZipLine,
	NoMovement,
	Grabbed,
	Flying,
	Frozen,
	PassedOut,
	Photography,
	Piloting,
	Attached,
	Pushing,
	TrackMovement,
	EnemyControl,
	Invalid,
	ECharacterState_MAX,
};

// Enum FSD.ECharacterCameraMode
enum class ECharacterCameraMode : uint8_t {
	FirstPerson,
	ThirdPerson,
	Follow,
	DownCamera,
	TerrainScanner,
	PhotographyMode,
	FirstPersonHeadOnly,
	ECharacterCameraMode_MAX,
};

// Enum FSD.EOutline
enum class EOutline : uint8_t {
	OL_NONE,
	OL_FRIENDLY,
	OL_NEUTRAL,
	OL_ENEMY,
	OL_ITEM,
	EOutline_MAX,
};

// Enum FSD.EPlayerTemperatureState
enum class EPlayerTemperatureState : uint8_t {
	Normal,
	Frozen,
	Overheated,
	EPlayerTemperatureState_MAX,
};

// Enum FSD.EGroundLeechState
enum class EGroundLeechState : uint8_t {
	Idle,
	Tracking,
	Pulling,
	Retracting,
	Dying,
	Dead,
	EGroundLeechState_MAX,
};

// Enum FSD.ECharselectionCameraLocation
enum class ECharselectionCameraLocation : uint8_t {
	Selection,
	Customization,
	Crafting,
	ViewWeapon,
	EndScreen,
	Forge,
	Pickaxe,
	ECharselectionCameraLocation_MAX,
};

// Enum FSD.EMinersManualSection
enum class EMinersManualSection : uint8_t {
	FrontPage,
	Hints,
	Combat,
	Creatures,
	Biomes,
	Missions,
	Resources,
	EMinersManualSection_MAX,
};

// Enum FSD.ECharacterSelectorItemStatus
enum class ECharacterSelectorItemStatus : uint8_t {
	LeaveAsIs,
	SwitchToDefault,
	NoItemEquipped,
	ECharacterSelectorItemStatus_MAX,
};

// Enum FSD.ESteamSearchRegion
enum class ESteamSearchRegion : uint8_t {
	Close,
	Medium,
	Far,
	World,
	ESteamSearchRegion_MAX,
};

// Enum FSD.ESteamServerJoinStatus
enum class ESteamServerJoinStatus : uint8_t {
	Open,
	PasswordRequired,
	ESteamServerJoinStatus_MAX,
};

// Enum FSD.EAlwaysLoadedWorlds
enum class EAlwaysLoadedWorlds : uint8_t {
	CharacterViewer,
	LoaderNormal,
	LoaderDeepDive,
	EAlwaysLoadedWorlds_MAX,
};

// Enum FSD.EDisconnectReason
enum class EDisconnectReason : uint8_t {
	None,
	Kicked_HaveMyReasons,
	Kicked_ShouldBePrivate,
	Kicked_AFK,
	Banned,
	ServerQuit,
	Disconnected,
	SignInChange,
	JoinSessionFail_SessionIsFull,
	JoinSessionFail_SessionDoesNotExist,
	JoinSessionFail_Other,
	JoinSessionFail_Privilege,
	NetworkError,
	SignOutComplete,
	WrongPassword,
	DeepDiveLateJoin,
	MissionStarting,
	LatejoinNotAllowed,
	EDisconnectReason_MAX,
};

// Enum FSD.EChatSenderType
enum class EChatSenderType : uint8_t {
	NormalUser,
	DeluxUser,
	Developer,
	Streamer,
	Modder,
	EChatSenderType_MAX,
};

// Enum FSD.EChatMessageType
enum class EChatMessageType : uint8_t {
	ES_Chat,
	ES_Game,
	ES_MAX,
};

// Enum FSD.EFSDInputSource
enum class EFSDInputSource : uint8_t {
	None,
	MouseAndKeyboard,
	Controller,
	EFSDInputSource_MAX,
};

// Enum FSD.EKeyboardLayout
enum class EKeyboardLayout : uint8_t {
	QWERTY,
	AZERTY,
	QWERTZ,
	EKeyboardLayout_MAX,
};

// Enum FSD.EHUDVisibilityReason
enum class EHUDVisibilityReason : uint8_t {
	Invalid,
	UserChoice,
	StandDown,
	MenuActive,
	Photography,
	EHUDVisibilityReason_MAX,
};

// Enum FSD.ESpacerigStartType
enum class ESpacerigStartType : uint8_t {
	PlayerHub,
	Medbay,
	ESpacerigStartType_MAX,
};

// Enum FSD.EItemCategory
enum class EItemCategory : uint8_t {
	PrimaryWeapon,
	SecondaryWeapon,
	TraversalTool,
	ClassTool,
	Grenade,
	Flare,
	MiningTool,
	Armor,
	EItemCategory_MAX,
};

// Enum FSD.EFSDFaction
enum class EFSDFaction : uint8_t {
	NoFaction,
	CaveCrawlers,
	MightyMiners,
	DirtDiggers,
	EFSDFaction_MAX,
};

// Enum FSD.EHUDVisibilityMode
enum class EHUDVisibilityMode : uint8_t {
	Visible,
	Dynamic,
	Hidden,
	EHUDVisibilityMode_MAX,
};

// Enum FSD.EVanitySlot
enum class EVanitySlot : uint8_t {
	Head,
	Beard,
	Armor,
	BeardColor,
	SkinColor,
	Moustache,
	Eyebrows,
	Sideburns,
	ArmorMaterial,
	Count,
	EVanitySlot_MAX,
};

// Enum FSD.ECampaignType
enum class ECampaignType : uint8_t {
	Normal,
	Weekly,
	MatrixCoreHunt,
	ECampaignType_MAX,
};

// Enum FSD.EItemPreviewStatus
enum class EItemPreviewStatus : uint8_t {
	Normal,
	Upgraded,
	Previewed,
	PreviewReduced,
	UpgradedAndPreviewReduced,
	EItemPreviewStatus_MAX,
};

// Enum FSD.EUpgradeCalucationType
enum class EUpgradeCalucationType : uint8_t {
	Additive,
	Multiplicative,
	EUpgradeCalucationType_MAX,
};

// Enum FSD.EUpgradeClass
enum class EUpgradeClass : uint8_t {
	Class_A,
	Class_B,
	Gear_A,
	Gear_B,
	Armor,
	Pickaxe,
	Class_Bosco,
	EUpgradeClass_MAX,
};

// Enum FSD.EUpgradeTiers
enum class EUpgradeTiers : uint8_t {
	Tier_2,
	Tier_3,
	Tier_4,
	Tier_5,
	Tier_6,
	Tier_MAX,
};

// Enum FSD.EDroneAIState
enum class EDroneAIState : uint8_t {
	Follow,
	Mine,
	Fight,
	Revive,
	Light,
	GoToPlayer,
	Salute,
	CarryGem,
	UseAbillity,
	Repairing,
	EDroneAIState_MAX,
};

// Enum FSD.ERessuplyPodState
enum class ERessuplyPodState : uint8_t {
	ReadyToDrop,
	Dropping,
	Landed,
	Idle,
	ERessuplyPodState_MAX,
};

// Enum FSD.EUseRestriction
enum class EUseRestriction : uint8_t {
	Free,
	DepositOnly,
	Repair,
	Zipline,
	BlockAll,
	PickupItem,
	EUseRestriction_MAX,
};

// Enum FSD.EEnemyHealthScaling
enum class EEnemyHealthScaling : uint8_t {
	SmallEnemy,
	LargeEnemy,
	ExtraLargeEnemy,
	ExtraLargeEnemyB,
	ExtraLargeEnemyC,
	ExtraLargeEnemyD,
	NoScaling,
	EEnemyHealthScaling_MAX,
};

// Enum FSD.EHealthbarType
enum class EHealthbarType : uint8_t {
	None,
	MainLife,
	Shield,
	EHealthbarType_MAX,
};

// Enum FSD.EMissionStatType
enum class EMissionStatType : uint8_t {
	Float,
	Integer,
	Time,
	Distance,
	EMissionStatType_MAX,
};

// Enum FSD.ERefineryState
enum class ERefineryState : uint8_t {
	Landing,
	ConnectingPipes,
	PipesConnected,
	Refining,
	RefiningStalled,
	RefiningComplete,
	RocketLaunched,
	ERefineryState_MAX,
};

// Enum FSD.EFrozenBitsSize
enum class EFrozenBitsSize : uint8_t {
	Tiny,
	Small,
	Medium,
	Large,
	Huge,
	EFrozenBitsSize_MAX,
};

// Enum FSD.EDropPodState
enum class EDropPodState : uint8_t {
	WaitingToDrop,
	Drilling,
	Landed,
	PrepTakeoff,
	Departing,
	EDropPodState_MAX,
};

// Enum FSD.EPipelineBuildState
enum class EPipelineBuildState : uint8_t {
	NotStarted,
	BeginBuilt,
	Completed,
	Broken,
	EPipelineBuildState_MAX,
};

// Enum FSD.ETrackBuildPlacementState
enum class ETrackBuildPlacementState : uint8_t {
	NotBeingPlaced,
	BeingPlaced,
	Finished,
	ETrackBuildPlacementState_MAX,
};

// Enum FSD.ESchematicState
enum class ESchematicState : uint8_t {
	NotOwned,
	OwnedCannotBuild,
	OwnedCanBuild,
	OwnedBuilt,
	ESchematicState_MAX,
};

// Enum FSD.ESchematicType
enum class ESchematicType : uint8_t {
	Overclock,
	Vanity,
	Resource,
	Blank,
	ESchematicType_MAX,
};

// Enum FSD.EHUDVisibilityPresets
enum class EHUDVisibilityPresets : uint8_t {
	AllVisible,
	Recommended,
	Minimal,
	AllHidden,
	EHUDVisibilityPresets_MAX,
};

// Enum FSD.EHUDVisibilityGroups
enum class EHUDVisibilityGroups : uint8_t {
	OnScreenHelp,
	EnemyHealth,
	RadarAndDepth,
	PlayerHealthShield,
	PlayerNameClassIcon,
	PlayerItems,
	PlayerResources,
	WeaponInfo,
	Grenades,
	FlashLight,
	Flares,
	Crosshair,
	Objectives,
	TeamDisplay,
	SentryGunDisplay,
	EHUDVisibilityGroups_MAX,
};

// Enum FSD.ELaserPointerTargetType
enum class ELaserPointerTargetType : uint8_t {
	Chunkable,
	Dirt,
	Player,
	Enemy,
	EmbeddedGem,
	Other,
	ELaserPointerTargetType_MAX,
};

// Enum FSD.EOnProjectileImpactBehaviourEnum
enum class EOnProjectileImpactBehaviourEnum : uint8_t {
	CallOnPredict,
	CallOnConfirmed,
	CallOnPredictAndConfirmed,
	EOnProjectileImpactBehaviourEnum_MAX,
};

// Enum FSD.ELineRotation
enum class ELineRotation : uint8_t {
	None,
	Yaw,
	Pitch,
	Roll,
	ELineRotation_MAX,
};

// Enum FSD.EImpactDecalSize
enum class EImpactDecalSize : uint8_t {
	Small,
	Medium,
	Large,
	None,
	EImpactDecalSize_MAX,
};

// Enum FSD.EPawnAttitude
enum class EPawnAttitude : uint8_t {
	Friendly,
	Neutral,
	Hostile,
	EPawnAttitude_MAX,
};

// Enum FSD.ERecallableActorState
enum class ERecallableActorState : uint8_t {
	Idle,
	RelocateRequested,
	Relocating,
	ReturnRequested,
	Returning,
	Home,
	ERecallableActorState_MAX,
};

// Enum FSD.ERedeployableSentryGunState
enum class ERedeployableSentryGunState : uint8_t {
	Deploying,
	Deployed,
	Dismantling,
	Dismantled,
	ERedeployableSentryGunState_MAX,
};

// Enum FSD.EItemSkinType
enum class EItemSkinType : uint8_t {
	Color,
	Mesh,
	EItemSkinType_MAX,
};

// Enum FSD.EThrownGrenadeItemState
enum class EThrownGrenadeItemState : uint8_t {
	NotEquipped,
	Cooking,
	Throwing,
	EThrownGrenadeItemState_MAX,
};

// Enum FSD.EFriendOnlineStatusEnum
enum class EFriendOnlineStatusEnum : uint8_t {
	Online,
	Offline,
	Away,
	EFriendOnlineStatusEnum_MAX,
};

// Enum FSD.EBlueprintablePrivilegeResults
enum class EBlueprintablePrivilegeResults : uint8_t {
	NoFailures,
	RequiredPatchAvailable,
	RequiredSystemUpdate,
	AgeRestrictionFailure,
	AccountTypeFailure,
	UserNotFound,
	UserNotLoggedIn,
	ChatRestriction,
	UGCRestriction,
	GenericFailure,
	OnlinePlayRestricted,
	NetworkConnectionUnavailable,
	EBlueprintablePrivilegeResults_MAX,
};

// Enum FSD.EBlueprintableUserPrivileges
enum class EBlueprintableUserPrivileges : uint8_t {
	CanPlay,
	CanPlayOnline,
	CanCommunicateOnline,
	CanUseUserGeneratedContent,
	CanUserCrossPlay,
	EBlueprintableUserPrivileges_MAX,
};

// Enum FSD.EDeepMovementState
enum class EDeepMovementState : uint8_t {
	Stationary,
	Controlled,
	Moving,
	WaitingForPath,
	AttackStance,
	FakePhysics,
	EDeepMovementState_MAX,
};

// Enum FSD.EFSDTargetPlatform
enum class EFSDTargetPlatform : uint8_t {
	Steam,
	XboxOne,
	Win10,
	PS4,
	PS5,
	EFSDTargetPlatform_MAX,
};

// Enum FSD.ECreatureSize
enum class ECreatureSize : uint8_t {
	Tiny,
	Small,
	Medium,
	Large,
	Huge,
	ECreatureSize_MAX,
};

// Enum FSD.EAmmoWeaponState
enum class EAmmoWeaponState : uint8_t {
	Equipping,
	Ready,
	Cycling,
	Reloading,
	BurstCycling,
	EAmmoWeaponState_MAX,
};

// Enum FSD.EAsyncLoadPriority
enum class EAsyncLoadPriority : uint8_t {
	Normal,
	High,
	Low,
	EAsyncLoadPriority_MAX,
};

// Enum FSD.EAsyncPersistence
enum class EAsyncPersistence : uint8_t {
	Manual,
	Level,
	Permanent,
	EAsyncPersistence_MAX,
};

// Enum FSD.EPlatformRestriction
enum class EPlatformRestriction : uint8_t {
	Editor,
	Steam,
	Oddish,
	UniversalWindowsPlatform,
	XBoxOne,
	PS4,
	EPlatformRestriction_MAX,
};

// Enum FSD.EBuildTypeRestriction
enum class EBuildTypeRestriction : uint8_t {
	Development,
	Shipping,
	EBuildTypeRestriction_MAX,
};

// Enum FSD.ECampaignMutators
enum class ECampaignMutators : uint8_t {
	NotAllowed,
	Allowed,
	Preffered,
	ECampaignMutators_MAX,
};

// Enum FSD.ECellCategory
enum class ECellCategory : uint8_t {
	Cave,
	Tunnel,
	ECellCategory_MAX,
};

// Enum FSD.ECaveLeechState
enum class ECaveLeechState : uint8_t {
	Idle,
	Tracking,
	Pulling,
	Retracting,
	Dying,
	Dead,
	Frozen,
	ECaveLeechState_MAX,
};

// Enum FSD.ECustomUsableType
enum class ECustomUsableType : uint8_t {
	ClearOnFrameEnd,
	ClearOnUseReleased,
	ECustomUsableType_MAX,
};

// Enum FSD.EFSDChromaEffect
enum class EFSDChromaEffect : uint8_t {
	HealthDamage,
	ShieldDamage,
	Flare,
	MissionSuccess,
	None,
	EFSDChromaEffect_MAX,
};

// Enum FSD.EExampleEnum
enum class EExampleEnum : uint8_t {
	FirstName,
	SecondName,
	EExampleEnum_MAX,
};

// Enum FSD.EShoutType
enum class EShoutType : uint8_t {
	Attention,
	Follow,
	StandingDown,
	Downed,
	RequestRevive,
	Revived,
	Resupply,
	FriendlyFire,
	KillCry,
	Dead,
	Cheating,
	ResourceFull,
	ResourceFullNoDonkey,
	CallDonkey,
	Depositing,
	DepositingNoDonkey,
	OutOfAmmo,
	Reloading,
	CharacterSelected,
	UpgradeBought,
	WaitingInDropPod,
	Carrying,
	EShoutType_MAX,
};

// Enum FSD.ECommunityGoalTier
enum class ECommunityGoalTier : uint8_t {
	Bronze,
	Silver,
	Gold,
	ECommunityGoalTier_MAX,
};

// Enum FSD.ECommunityGoalType
enum class ECommunityGoalType : uint8_t {
	Float,
	Integer,
	Time,
	Distance,
	ECommunityGoalType_MAX,
};

// Enum FSD.ECommunityUIState
enum class ECommunityUIState : uint8_t {
	Loading,
	SelectFaction,
	Progress,
	Recruitment,
	Reward,
	Invalid,
	ECommunityUIState_MAX,
};

// Enum FSD.ERobotState
enum class ERobotState : uint8_t {
	Enemy,
	Friendly,
	PoweredDown,
	ERobotState_MAX,
};

// Enum FSD.EKeyBindingAxis
enum class EKeyBindingAxis : uint8_t {
	None,
	Positive,
	Negative,
	EKeyBindingAxis_MAX,
};

// Enum FSD.EDealType
enum class EDealType : uint8_t {
	Buy,
	Sell,
	EDealType_MAX,
};

// Enum FSD.EDamageComponentType
enum class EDamageComponentType : uint8_t {
	Primary,
	Secondary,
	EDamageComponentType_MAX,
};

// Enum FSD.EDashPointsGenerationMode
enum class EDashPointsGenerationMode : uint8_t {
	Surround,
	Forward,
	EDashPointsGenerationMode_MAX,
};

// Enum FSD.EDebrisOrientation
enum class EDebrisOrientation : uint8_t {
	Random,
	RandomXY,
	AlignToSurfaceNormal,
	Fixed,
	EDebrisOrientation_MAX,
};

// Enum FSD.EDebrisMeshShadows
enum class EDebrisMeshShadows : uint8_t {
	Never,
	High,
	Always,
	EDebrisMeshShadows_MAX,
};

// Enum FSD.EDebrisMeshCollisionProfile
enum class EDebrisMeshCollisionProfile : uint8_t {
	NoCollision,
	HitOnly,
	HitAndCollide,
	EDebrisMeshCollisionProfile_MAX,
};

// Enum FSD.EDebrisColliderType
enum class EDebrisColliderType : uint8_t {
	Object,
	AirParticles,
	ObjectB,
	ObjectC,
	EDebrisColliderType_MAX,
};

// Enum FSD.EDebrisCarvedType
enum class EDebrisCarvedType : uint8_t {
	Large,
	Small,
	LevelGeneration,
	Resources,
	EDebrisCarvedType_MAX,
};

// Enum FSD.EDebrisItemPass
enum class EDebrisItemPass : uint8_t {
	PrePlacement,
	Main,
	EDebrisItemPass_MAX,
};

// Enum FSD.EDecalImportance
enum class EDecalImportance : uint8_t {
	High,
	Normal,
	Low,
	EDecalImportance_MAX,
};

// Enum FSD.ELandscapeCellFilter
enum class ELandscapeCellFilter : uint8_t {
	Any,
	Empty,
	Filled,
	Diggable,
	NotDiggable,
	Collidable,
	NotCollidable,
	Rubble,
	NotRubble,
	ELandscapeCellFilter_MAX,
};

// Enum FSD.EOffsetFrom
enum class EOffsetFrom : uint8_t {
	None,
	Floor,
	Ceiling,
	EOffsetFrom_MAX,
};

// Enum FSD.EDeepMovementMode
enum class EDeepMovementMode : uint8_t {
	Normal,
	Flee,
	Fly,
	BackOff,
	EDeepMovementMode_MAX,
};

// Enum FSD.EDefendPointState
enum class EDefendPointState : uint8_t {
	Idle,
	Started,
	Completed,
	Failed,
	EDefendPointState_MAX,
};

// Enum FSD.EDialogRestriction
enum class EDialogRestriction : uint8_t {
	None,
	SinglePlayerOnly,
	MultiPlayerOnly,
	EDialogRestriction_MAX,
};

// Enum FSD.EVeteranScaling
enum class EVeteranScaling : uint8_t {
	NormalEnemy,
	LargeEnemy,
	EVeteranScaling_MAX,
};

// Enum FSD.EEnemySignificance
enum class EEnemySignificance : uint8_t {
	Swarmer,
	Normal,
	Critical,
	Critter,
	EEnemySignificance_MAX,
};

// Enum FSD.EDiscordBiomeType
enum class EDiscordBiomeType : uint8_t {
	CrystallineCaverns,
	FungusBogs,
	GlacialStrata,
	DenseBiozone,
	MagmaCore,
	Radioactive,
	SaltPits,
	Sandblasted,
	CausticMire,
	AzureWeald,
	HollowBough,
	Spacerig,
	EDiscordBiomeType_MAX,
};

// Enum FSD.EDiscordMissionType
enum class EDiscordMissionType : uint8_t {
	MiningExpedition,
	EggHunt,
	Escort,
	Elimination,
	PointExtraction,
	Salvage,
	Refinery,
	None,
	EDiscordMissionType_MAX,
};

// Enum FSD.EDoubleDrillState
enum class EDoubleDrillState : uint8_t {
	Equipping,
	Idle,
	Mining,
	Overheated,
	EDoubleDrillState_MAX,
};

// Enum FSD.EBoscoAbillityTargetPreference
enum class EBoscoAbillityTargetPreference : uint8_t {
	Self,
	SelectedTarget,
	ClosestPlayer,
	ClosestEnemy,
	TargetLocation,
	EBoscoAbillityTargetPreference_MAX,
};

// Enum FSD.EDroneActions
enum class EDroneActions : uint8_t {
	Wandering,
	Mining,
	Fighting,
	Lighting,
	Reviving,
	EDroneActions_MAX,
};

// Enum FSD.EDynamicReverbSetting
enum class EDynamicReverbSetting : uint8_t {
	None,
	Small,
	Medium,
	Large,
	EDynamicReverbSetting_MAX,
};

// Enum FSD.EEnemyControlState
enum class EEnemyControlState : uint8_t {
	Connecting,
	Connected,
	ThrowingOff,
	Disconnecting,
	Disconneced,
	EEnemyControlState_MAX,
};

// Enum FSD.EEnemyFamily
enum class EEnemyFamily : uint8_t {
	Glyphid,
	Mactera,
	Naedocyte,
	Qronar,
	Xynarch,
	Nayaka,
	Deeptora,
	Korlok,
	Automaton,
	Unknown,
	EEnemyFamily_MAX,
};

// Enum FSD.EEnemyType
enum class EEnemyType : uint8_t {
	Ground,
	Flying,
	Stationary,
	EEnemyType_MAX,
};

// Enum FSD.EEscortExtractorState
enum class EEscortExtractorState : uint8_t {
	ReadyToGrab,
	Taken,
	Full,
	EEscortExtractorState_MAX,
};

// Enum FSD.EEscortMissionState
enum class EEscortMissionState : uint8_t {
	Stationary,
	Moving,
	WaitingForFuel,
	FinalEvent,
	Finished,
	ShellCracked,
	VehicleDead,
	InGarage,
	EEscortMissionState_MAX,
};

// Enum FSD.EExtractorState
enum class EExtractorState : uint8_t {
	Attached,
	OnGround,
	Equipping,
	Idle,
	Mining,
	EExtractorState_MAX,
};

// Enum FSD.EFacilityDroneState
enum class EFacilityDroneState : uint8_t {
	Idle,
	Rolling,
	Flying,
	EFacilityDroneState_MAX,
};

// Enum FSD.EFSDAchievementType
enum class EFSDAchievementType : uint8_t {
	NoStatUsed,
	IncrementStatPerCall,
	SetStatIfHighscore,
	ForceNewStatEachCall,
	EFSDAchievementType_MAX,
};

// Enum FSD.ETargetStateDamageBonusType
enum class ETargetStateDamageBonusType : uint8_t {
	Frozen,
	OnFire,
	Fleeing,
	Staggered,
	ETargetStateDamageBonusType_MAX,
};

// Enum FSD.EPauseReason
enum class EPauseReason : uint8_t {
	Invalid,
	MenuActive,
	ReconnectController,
	EPauseReason_MAX,
};

// Enum FSD.ESaveSlotChangeProcedure
enum class ESaveSlotChangeProcedure : uint8_t {
	NewSave,
	Load,
	Save,
	NewModdedSave,
	ESaveSlotChangeProcedure_MAX,
};

// Enum FSD.EInputInteraction
enum class EInputInteraction : uint8_t {
	Press,
	Hold,
	EInputInteraction_MAX,
};

// Enum FSD.EVolumeType
enum class EVolumeType : uint8_t {
	CharacterVoices,
	Master,
	SFX,
	Music,
	VoiceChat,
	MissionControl,
	EVolumeType_MAX,
};

// Enum FSD.EPostProcessingType
enum class EPostProcessingType : uint8_t {
	GameWorld,
	CharacterSelector,
	EPostProcessingType_MAX,
};

// Enum FSD.EItemNotificationType
enum class EItemNotificationType : uint8_t {
	NewOverclock,
	EItemNotificationType_MAX,
};

// Enum FSD.ESteamBranch
enum class ESteamBranch : uint8_t {
	Main,
	Experimental,
	Internal_Testing,
	Other,
	ESteamBranch_MAX,
};

// Enum FSD.EMoveType
enum class EMoveType : uint8_t {
	EaseIn,
	EaseOut,
	EMoveType_MAX,
};

// Enum FSD.EPingType
enum class EPingType : uint8_t {
	EaseOut,
	Bounce,
	EPingType_MAX,
};

// Enum FSD.ECommunityGoalIndex
enum class ECommunityGoalIndex : uint8_t {
	KillBroodNexus,
	KillBulkDetonators,
	KillCaveLeeches,
	KillJellyBreeders,
	KillPretorians,
	KillShellbacks,
	KillSpitballers,
	CollectBittergem,
	CollectCompressedGold,
	CollectGold,
	CollectCraftingMaterials,
	GainXP,
	TestGoal,
	Count,
	ECommunityGoalIndex_MAX,
};

// Enum FSD.EFSDGoogleAnalyticsProperties
enum class EFSDGoogleAnalyticsProperties : uint8_t {
	DRG,
	Discord,
	CommunityGoals,
	DRG_Discord,
	All,
	Other,
	EFSDGoogleAnalyticsProperties_MAX,
};

// Enum FSD.EGrabberState
enum class EGrabberState : uint8_t {
	StandBy,
	Chase,
	Wander,
	Carry,
	Flee,
	EGrabberState_MAX,
};

// Enum FSD.EGrabbedStateCameraMode
enum class EGrabbedStateCameraMode : uint8_t {
	FirstPerson,
	ThirdPerson,
	EGrabbedStateCameraMode_MAX,
};

// Enum FSD.ERicochetBehavior
enum class ERicochetBehavior : uint8_t {
	All,
	PawnsOnly,
	NotPawns,
	ERicochetBehavior_MAX,
};

// Enum FSD.EKeyBindingSlot
enum class EKeyBindingSlot : uint8_t {
	Primary,
	Secondary,
	EKeyBindingSlot_MAX,
};

// Enum FSD.ECharacterAnimSet
enum class ECharacterAnimSet : uint8_t {
	Pistol,
	Rifle,
	HeavyLow,
	NoHands,
	HeavyDual,
	DualPistol,
	HeavyFront,
	ECharacterAnimSet_MAX,
};

// Enum FSD.EItemSkinCollectionType
enum class EItemSkinCollectionType : uint8_t {
	PerCharacter,
	PerItem,
	EItemSkinCollectionType_MAX,
};

// Enum FSD.EProjectileLauncherBaseUpgradeType
enum class EProjectileLauncherBaseUpgradeType : uint8_t {
	VerticalSpread,
	HorizontalSpread,
	TransferVelocityFromCharacter,
	EProjectileLauncherBaseUpgradeType_MAX,
};

// Enum FSD.EDetPackUpgrades
enum class EDetPackUpgrades : uint8_t {
	CanPickUp,
	CarveDiameter,
	ExplodeOnDeath,
	ExtraFearRadius,
	ExtraStaggerRadius,
	EDetPackUpgrades_MAX,
};

// Enum FSD.EPlatformGunUpgrades
enum class EPlatformGunUpgrades : uint8_t {
	BiggerPlatform,
	LessFallDamage,
	BugRepellant,
	CubePlatform,
	EPlatformGunUpgrades_MAX,
};

// Enum FSD.EBoscoUpgrades
enum class EBoscoUpgrades : uint8_t {
	MiningSpeedUpgrade,
	ExtraRevive,
	ActiveLightRadius,
	Missile,
	CryoGrenade,
	SACooldownReduction,
	ExtraAbillityCharge,
	EBoscoUpgrades_MAX,
};

// Enum FSD.EArmorUpgradeType
enum class EArmorUpgradeType : uint8_t {
	RegenDelay,
	RegenRate,
	ReviveInvulnerability,
	EArmorUpgradeType_MAX,
};

// Enum FSD.ETriggeredStatusEffectType
enum class ETriggeredStatusEffectType : uint8_t {
	ShieldDestroyed,
	GrapplingHookReleased,
	NONE,
	ETriggeredStatusEffectType_MAX,
};

// Enum FSD.EArmorRegeneratorUpgrades
enum class EArmorRegeneratorUpgrades : uint8_t {
	Radius,
	Duration,
	DeployTime,
	RechargeTime,
	RechargeCount,
	PushStatusEffect,
	EArmorRegeneratorUpgrades_MAX,
};

// Enum FSD.ESentryGunUpgradeType
enum class ESentryGunUpgradeType : uint8_t {
	MaxAmmo,
	ReloadSpeed,
	ExtraSentry,
	AngleRestriction,
	ManualTargeting,
	MaxRange,
	RotationSpeed,
	BurstCooldown,
	ESentryGunUpgradeType_MAX,
};

// Enum FSD.EGrapplingHookUpgrade
enum class EGrapplingHookUpgrade : uint8_t {
	MaxDistance,
	MaxSpeed,
	WindUpTime,
	EGrapplingHookUpgrade_MAX,
};

// Enum FSD.EZiplineGunUpgrades
enum class EZiplineGunUpgrades : uint8_t {
	MaxAngle,
	MaxDistance,
	MovementSpeed,
	FallDamageReduction,
	EZiplineGunUpgrades_MAX,
};

// Enum FSD.EElectricalSMGUpgrades
enum class EElectricalSMGUpgrades : uint8_t {
	AoEChance,
	PlasmaBeam,
	TurretEMPDischarge,
	EElectricalSMGUpgrades_MAX,
};

// Enum FSD.EChargedProjectileUpgrades
enum class EChargedProjectileUpgrades : uint8_t {
	ExplodesOnDamage,
	AoEDamageInFlight,
	PersistentExplosion,
	EChargedProjectileUpgrades_MAX,
};

// Enum FSD.EFlaregunProjectileUpgrades
enum class EFlaregunProjectileUpgrades : uint8_t {
	Duration,
	EFlaregunProjectileUpgrades_MAX,
};

// Enum FSD.EFlaregunUpgrades
enum class EFlaregunUpgrades : uint8_t {
	AutoReload,
	EFlaregunUpgrades_MAX,
};

// Enum FSD.EProjectileUpgrade
enum class EProjectileUpgrade : uint8_t {
	Velocity,
	Bouncy,
	Lifetime,
	DoOnImpact,
	DoOnImpact2,
	DoOnImpact3,
	DoOnSpawn,
	EProjectileUpgrade_MAX,
};

// Enum FSD.ELineCutterProjectileUpgradeType
enum class ELineCutterProjectileUpgradeType : uint8_t {
	LineSize,
	LineSizeMultiplier,
	ExplosiveRound,
	SetDeployDelay,
	AddDeployTime,
	ExplodeOnNextProjectile,
	DoubleLine,
	LineSizeAdd,
	SetDeployTime,
	RollUntilStop,
	Yawing,
	PlasmaTrail,
	ELineCutterProjectileUpgradeType_MAX,
};

// Enum FSD.ELineCutterUpgradeType
enum class ELineCutterUpgradeType : uint8_t {
	ReverseDirection,
	ExplodeLastProjectile,
	ELineCutterUpgradeType_MAX,
};

// Enum FSD.EGrenadeUpgradeType
enum class EGrenadeUpgradeType : uint8_t {
	MaxGrenades,
	FuseTime,
	EGrenadeUpgradeType_MAX,
};

// Enum FSD.EFlareUpgradeType
enum class EFlareUpgradeType : uint8_t {
	Duration,
	MaxFlares,
	ProductionTime,
	EFlareUpgradeType_MAX,
};

// Enum FSD.ESingleUsableUpgradeType
enum class ESingleUsableUpgradeType : uint8_t {
	UseDuration,
	ESingleUsableUpgradeType_MAX,
};

// Enum FSD.EExplosionUpgrade
enum class EExplosionUpgrade : uint8_t {
	NOTUSED,
	EExplosionUpgrade_MAX,
};

// Enum FSD.EDamageUpgrade
enum class EDamageUpgrade : uint8_t {
	Damage,
	WeakpointDamageMultiplier,
	StaggerChance,
	StaggerDuration,
	RadialDamage,
	RadialRange,
	ArmorDamageMultiplier,
	FearFactor,
	RadialRangeMultiplier,
	StaggerOnWeakpointOnly,
	FriendlyFireModifier,
	EDamageUpgrade_MAX,
};

// Enum FSD.EHitScanBaseUpgradeType
enum class EHitScanBaseUpgradeType : uint8_t {
	MaxVerticalSpread,
	MaxHorizontalSpread,
	MaxPenetrations,
	WeaponAccuracySpreadMultiplier,
	SpreadPerShot,
	MinSpreadWhileMoving,
	SpreadRecoveryMultiplier,
	MinSpreadWhileSprinting,
	MaxSpread,
	RicochetChance,
	RicochetOnWeakspotOnly,
	RicochetBehaviourAll,
	RicochetBehaviourPawnsOnly,
	RicochetBehaviourNotPawns,
	EHitScanBaseUpgradeType_MAX,
};

// Enum FSD.EMultiHitscanUpgradeType
enum class EMultiHitscanUpgradeType : uint8_t {
	BulletsPerShot,
	EMultiHitscanUpgradeType_MAX,
};

// Enum FSD.EInventoryItemUpgradeType
enum class EInventoryItemUpgradeType : uint8_t {
	MovementSpeedWhileUsing,
	CooldownRate,
	UnJamDuration,
	ManualCooldownDelay,
	EInventoryItemUpgradeType_MAX,
};

// Enum FSD.EDoubleDrillUpgradeType
enum class EDoubleDrillUpgradeType : uint8_t {
	MiningRate,
	MaxFuel,
	HeatRemovalOnKill,
	HeatRemovalOnDamage,
	MovementPenalty,
	EDoubleDrillUpgradeType_MAX,
};

// Enum FSD.EFlameThrowerUpgradeType
enum class EFlameThrowerUpgradeType : uint8_t {
	StickyFlameDuration,
	LongReach,
	AoEHeat,
	KilledTargetsExplodeChance,
	EFlameThrowerUpgradeType_MAX,
};

// Enum FSD.EPickaxeUpgradeType
enum class EPickaxeUpgradeType : uint8_t {
	RockMining,
	OneHitMineralMining,
	ReceiveBonusMineralNitra,
	ReceiveBonusMineralGold,
	EnablePowerAttack,
	PowerAttackCoolDown,
	EPickaxeUpgradeType_MAX,
};

// Enum FSD.ECryoSprayUpgrades
enum class ECryoSprayUpgrades : uint8_t {
	PressureDropMultiplier,
	PressureGainMultiplier,
	ChargeupTime,
	RePressurisationTime,
	FrozenTargetsCanShatter,
	AoECold,
	LongReach,
	ECryoSprayUpgrades_MAX,
};

// Enum FSD.ERevolerUpgrades
enum class ERevolerUpgrades : uint8_t {
	OnKillFearFactor,
	ERevolerUpgrades_MAX,
};

// Enum FSD.EBasicPistol
enum class EBasicPistol : uint8_t {
	ConsecutiveHitsDamageBonus,
	EBasicPistol_MAX,
};

// Enum FSD.EAutoShotgunUpgrades
enum class EAutoShotgunUpgrades : uint8_t {
	TurretSpecialAttackEnabled,
	RateOfFireAndAutoMatic,
	EAutoShotgunUpgrades_MAX,
};

// Enum FSD.EBurstWeaponUpgrades
enum class EBurstWeaponUpgrades : uint8_t {
	FullBurstHitBonusDamage,
	FullBurstStaggerDuraion,
	EBurstWeaponUpgrades_MAX,
};

// Enum FSD.ESawedOffShotgunUpgrades
enum class ESawedOffShotgunUpgrades : uint8_t {
	FearOnShoot,
	ShockWave,
	ShotgunJump,
	ESawedOffShotgunUpgrades_MAX,
};

// Enum FSD.EAutoCannonUpgrades
enum class EAutoCannonUpgrades : uint8_t {
	FireTimeIncreaseScaleMultiplier,
	DamageBonusAtFullROF,
	StatusEffectAtFullROF,
	StartingFireRate,
	MaxFireRate,
	EAutoCannonUpgrades_MAX,
};

// Enum FSD.EChargedWeaponUpgrades
enum class EChargedWeaponUpgrades : uint8_t {
	ShotCostAtFullCharge,
	ChargeSpeed,
	CoolingRate,
	HeatPerSecondCharging,
	HeatPerSecondCharged,
	HeatPerChargedShot,
	HeatPerNormalShot,
	EChargedWeaponUpgrades_MAX,
};

// Enum FSD.EDualMachinePistolsUpgrades
enum class EDualMachinePistolsUpgrades : uint8_t {
	TriggerStatusEffectOnEmptyClip,
	EDualMachinePistolsUpgrades_MAX,
};

// Enum FSD.EBoltActionRifleUpgrades
enum class EBoltActionRifleUpgrades : uint8_t {
	FocusSpeed,
	AimedShotStagger,
	AimedWeakShotKillFearFactor,
	FocusDamageBonus,
	UnZoomedAccuracySpread,
	FocusedWeakspotHitStatusEffect,
	NoGravityOnFocus,
	KillReloadTimeBoost,
	EBoltActionRifleUpgrades_MAX,
};

// Enum FSD.EAssaultRifleUpgrade
enum class EAssaultRifleUpgrade : uint8_t {
	KillResetsSpread,
	KillTriggerStatusEffect,
	EAssaultRifleUpgrade_MAX,
};

// Enum FSD.EGatlingGunUpgrade
enum class EGatlingGunUpgrade : uint8_t {
	DamageMultiplierAtMaxStabilization,
	HeatRemovedOnKill,
	CriticalOverheat,
	BarrelProximityDamage,
	EGatlingGunUpgrade_MAX,
};

// Enum FSD.EBeltDrivenWeaponUpgrade
enum class EBeltDrivenWeaponUpgrade : uint8_t {
	BarrelSpinupTime,
	BarrelSpinDownTime,
	EBeltDrivenWeaponUpgrade_MAX,
};

// Enum FSD.EAmmoDrivenWeapnUpgradeType
enum class EAmmoDrivenWeapnUpgradeType : uint8_t {
	MaxAmmo,
	ClipSize,
	RateOfFire,
	ReloadSpeed,
	RecoilMultiplier,
	BurstCount,
	BurstRateOfFire,
	ActivateBurstFireMode,
	ActivateAutomaticFireMode,
	HeatUpRateModifier,
	AutoReloadDuration,
	RecoilMass,
	CustomEvent1,
	EAmmoDrivenWeapnUpgradeType_MAX,
};

// Enum FSD.EMinersManualSinglePage
enum class EMinersManualSinglePage : uint8_t {
	Mutators,
	Warnings,
	DamageTypes,
	Weakpoints,
	Armor,
	Light,
	Ammo,
	Traversal,
	Spacerig,
	Upgrades,
	Perks,
	Bosco,
	Assignments,
	Navigation,
	EMinersManualSinglePage_MAX,
};

// Enum FSD.EArmorType
enum class EArmorType : uint8_t {
	Light,
	Heavy,
	Unbreakable,
	EArmorType_MAX,
};

// Enum FSD.EDamageType
enum class EDamageType : uint8_t {
	Fire,
	Cold,
	Melee,
	Kinetic,
	Explosive,
	Stun,
	Electrocution,
	Fear,
	Radiation,
	Pheromone,
	Poison,
	ArmorBreaking,
	Push,
	Grab,
	None,
	Slow,
	Defense,
	TemperatureShock,
	EDamageType_MAX,
};

// Enum FSD.EEnemyAttackType
enum class EEnemyAttackType : uint8_t {
	Melee,
	Ranged,
	Grab,
	Area,
	Move,
	EEnemyAttackType_MAX,
};

// Enum FSD.EMiningPodMission
enum class EMiningPodMission : uint8_t {
	DropAndReturn,
	Extraction,
	DropFromSpacerig,
	EMiningPodMission_MAX,
};

// Enum FSD.EMiningPodRampState
enum class EMiningPodRampState : uint8_t {
	Closed,
	Opening,
	Open,
	Closing,
	EMiningPodRampState_MAX,
};

// Enum FSD.EMiningPodState
enum class EMiningPodState : uint8_t {
	Dropping,
	Drilling,
	Landed,
	PrepTakeoff,
	Departing,
	WaitingForGameStart,
	InSpace,
	Destroy,
	WaitOnSpacerig,
	ExitSpacerig,
	Damaged,
	PoweringUp,
	PoweredUp,
	DeepDiveDeparture,
	EMiningPodState_MAX,
};

// Enum FSD.EMissionStructure
enum class EMissionStructure : uint8_t {
	SingleMission,
	DeepDive_Normal,
	DeepDive_Elite,
	EMissionStructure_MAX,
};

// Enum FSD.EAfflictionSocket
enum class EAfflictionSocket : uint8_t {
	CenterMass,
	Feet,
	Camera,
	EAfflictionSocket_MAX,
};

// Enum FSD.EPawnStatType
enum class EPawnStatType : uint8_t {
	Multiplicative,
	Additive,
	EPawnStatType_MAX,
};

// Enum FSD.EPerkSlotType
enum class EPerkSlotType : uint8_t {
	Available,
	LockedByPerk,
	LockedByPromotion,
	EPerkSlotType_MAX,
};

// Enum FSD.EPerkUsageType
enum class EPerkUsageType : uint8_t {
	Passive,
	Active,
	EPerkUsageType_MAX,
};

// Enum FSD.EPerkHUDActivationLocation
enum class EPerkHUDActivationLocation : uint8_t {
	Main,
	Down,
	EPerkHUDActivationLocation_MAX,
};

// Enum FSD.EPerkTierState
enum class EPerkTierState : uint8_t {
	Claimable,
	Claimed,
	Locked,
	Unaffordable,
	NotAvailable,
	EPerkTierState_MAX,
};

// Enum FSD.EPickaxeState
enum class EPickaxeState : uint8_t {
	Equipping,
	Mining,
	PowerAttack,
	End,
	EPickaxeState_MAX,
};

// Enum FSD.EPickaxePartLocation
enum class EPickaxePartLocation : uint8_t {
	Head,
	FrontBlade,
	BackBlade,
	Shaft,
	Handle,
	Pommel,
	Material,
	Count,
	EPickaxePartLocation_MAX,
};

// Enum FSD.EPickaxePart
enum class EPickaxePart : uint8_t {
	Head,
	Blade,
	Shaft,
	Handle,
	Pommel,
	Material,
	EPickaxePart_MAX,
};

// Enum FSD.EPipelineExtractorPodAnimState
enum class EPipelineExtractorPodAnimState : uint8_t {
	Folded,
	Idle,
	Running,
	Broken,
	EPipelineExtractorPodAnimState_MAX,
};

// Enum FSD.EPlaceableObstructionType
enum class EPlaceableObstructionType : uint8_t {
	Valid,
	GroundTooSteep,
	TooShort,
	TooLong,
	TurnTooSharp,
	Blocked,
	NotEnoughRoom,
	TooSteep,
	Other,
	EPlaceableObstructionType_MAX,
};

// Enum FSD.ECharacterMoveDirection
enum class ECharacterMoveDirection : uint8_t {
	None,
	Forward,
	Left,
	Right,
	Back,
	ECharacterMoveDirection_MAX,
};

// Enum FSD.EGameOwnerStatus
enum class EGameOwnerStatus : uint8_t {
	Supporter,
	ContentCreator,
	Developer,
	Modder,
	EGameOwnerStatus_Max,
};

// Enum FSD.EMovementCustomMode
enum class EMovementCustomMode : uint8_t {
	MOVE_Custom_None,
	MOVE_Custom_Track,
	MOVE_Custom_CharacterStateControlled,
	MOVE_Custom_MAX,
};

// Enum FSD.ESpawnSettings
enum class ESpawnSettings : uint8_t {
	Normal,
	NoSpawning,
	SpawnAll,
	ESpawnSettings_MAX,
};

// Enum FSD.ETerrainPlacementBoxType
enum class ETerrainPlacementBoxType : uint8_t {
	NoTerrain,
	Terrain,
	ETerrainPlacementBoxType_MAX,
};

// Enum FSD.ERoomMirror
enum class ERoomMirror : uint8_t {
	None,
	MirrorX,
	MirrorY,
	ERoomMirror_MAX,
};

// Enum FSD.ERoomMirroringSupport
enum class ERoomMirroringSupport : uint8_t {
	NotAllowed,
	MirrorAroundX,
	MirrorAroundY,
	MirrorBoth,
	ERoomMirroringSupport_MAX,
};

// Enum FSD.EItemAdjustmentType
enum class EItemAdjustmentType : uint8_t {
	None,
	Cieling,
	Wall,
	Floor,
	EItemAdjustmentType_MAX,
};

// Enum FSD.ECaveEntranceType
enum class ECaveEntranceType : uint8_t {
	EntranceAndExit,
	Entrance,
	Exit,
	TreassureRoom,
	ECaveEntranceType_MAX,
};

// Enum FSD.ERoomType
enum class ERoomType : uint8_t {
	Start,
	End,
	MainPath,
	Gold,
	ERoomType_MAX,
};

// Enum FSD.EEnemyPlacementMask
enum class EEnemyPlacementMask : uint8_t {
	Ground,
	Spawner,
	Cieling,
	EEnemyPlacementMask_MAX,
};

// Enum FSD.ERoomPieceSide
enum class ERoomPieceSide : uint8_t {
	Up,
	Down,
	Forward,
	Backward,
	Right,
	Left,
	ERoomPieceSide_MAX,
};

// Enum FSD.EServerSortOrder
enum class EServerSortOrder : uint8_t {
	Mission,
	Players,
	Length,
	Complexity,
	Distance,
	Time,
	Difficulty,
	EServerSortOrder_MAX,
};

// Enum FSD.EServerDistance
enum class EServerDistance : uint8_t {
	Close,
	Medium,
	Far,
	World,
	EServerDistance_MAX,
};

// Enum FSD.EFSDNATType
enum class EFSDNATType : uint8_t {
	Open,
	Moderate,
	Strict,
	Unknown,
	EFSDNATType_MAX,
};

// Enum FSD.EFSDMissionStatus
enum class EFSDMissionStatus : uint8_t {
	SpaceRig,
	InGame,
	Starting,
	EscapeSequence,
	FinalBattle,
	EFSDMissionStatus_MAX,
};

// Enum FSD.ESharkEnemyState
enum class ESharkEnemyState : uint8_t {
	Idle,
	Circling,
	Attacking,
	Vulnerable,
	Dive,
	ESharkEnemyState_MAX,
};

// Enum FSD.EShowroomScaling
enum class EShowroomScaling : uint8_t {
	NoScaling,
	EnemySmall,
	EnemyMedium,
	EnemyBig,
	EnemyHuge,
	EShowroomScaling_MAX,
};

// Enum FSD.EPiplelineConnectorAnimationState
enum class EPiplelineConnectorAnimationState : uint8_t {
	Unassembled,
	Assembling,
	Assembled,
	EPiplelineConnectorAnimationState_MAX,
};

// Enum FSD.EMaggotAnimationState
enum class EMaggotAnimationState : uint8_t {
	Idle,
	Moving,
	EMaggotAnimationState_MAX,
};

// Enum FSD.EMoveDirection
enum class EMoveDirection : uint8_t {
	None,
	Forward,
	Left,
	Right,
	Back,
	EMoveDirection_MAX,
};

// Enum FSD.EFSDSteelSeriesEffect
enum class EFSDSteelSeriesEffect : uint8_t {
	HealthDamage,
	ShieldDamage,
	Flare,
	MissionSuccess,
	None,
	EFSDSteelSeriesEffect_MAX,
};

// Enum FSD.ETemperatureIntensity
enum class ETemperatureIntensity : uint8_t {
	Cold3,
	Cold2,
	Cold1,
	Heat1,
	Heat2,
	Heat3,
	ETemperatureIntensity_MAX,
};

// Enum FSD.ETetherConnectionMode
enum class ETetherConnectionMode : uint8_t {
	Both,
	FrontOnly,
	BackOnly,
	None,
	ETetherConnectionMode_MAX,
};

// Enum FSD.EThrowableInput
enum class EThrowableInput : uint8_t {
	LeftButton,
	RightButton,
	EThrowableInput_MAX,
};

// Enum FSD.EExitTrackMode
enum class EExitTrackMode : uint8_t {
	None,
	StopInPlace,
	JumpInPlace,
	JumpInCamDir,
	JumpInTrackDir,
	EExitTrackMode_MAX,
};

// Enum FSD.ETreasureType
enum class ETreasureType : uint8_t {
	WeaponSkin,
	VictoryPose,
	PickaxePart,
	VanityItem,
	ETreasureType_MAX,
};

// Enum FSD.EItemUpgradeStatus
enum class EItemUpgradeStatus : uint8_t {
	Locked,
	AvailableCannotAfford,
	AvailableCanAfford,
	Owned,
	Equipped,
	EItemUpgradeStatus_MAX,
};

// Enum FSD.EGeneratorIconType
enum class EGeneratorIconType : uint8_t {
	Vanity,
	PickaxePart,
	EGeneratorIconType_MAX,
};

// Enum FSD.ECharacterHeadMesh
enum class ECharacterHeadMesh : uint8_t {
	Full,
	ThichNeckOnly,
	ThinNeckOnly,
	None,
	ECharacterHeadMesh_MAX,
};

// Enum FSD.EHeadVanityType
enum class EHeadVanityType : uint8_t {
	HairOnly,
	HeadGearOnly,
	HeadGearOnly_UseArmorMaterial,
	HairAndHeadGear,
	HairAndHeadGear_UseArmorMaterial,
	EHeadVanityType_MAX,
};

// Enum FSD.EArmorSetLegs
enum class EArmorSetLegs : uint8_t {
	Invalid,
	LeftUpperLeg,
	LeftLowerLeg,
	LeftFoot,
	LeftToe,
	RightUpperLeg,
	RightLowerLeg,
	RightFoot,
	RightToe,
	EArmorSetLegs_MAX,
};

// Enum FSD.EArmorSetTorso
enum class EArmorSetTorso : uint8_t {
	Invalid,
	UpperTorso,
	MiddleTorso,
	LowerTorso,
	UpperBack,
	MiddleBack,
	LowerBack,
	LeftHip,
	RightHip,
	FrontHip,
	LeftUpperLeg,
	LeftLowerLeg,
	LeftFoot,
	LeftToe,
	RightUpperLeg,
	RightLowerLeg,
	RightFoot,
	RightToe,
	EArmorSetTorso_MAX,
};

// Enum FSD.EArmorSetArms
enum class EArmorSetArms : uint8_t {
	Invalid,
	LeftShoulder,
	RightShoulder,
	LeftUpperArm,
	LeftLowerArm1,
	LeftLowerArm2,
	LeftHand,
	LeftHandAttach,
	RightUpperArm,
	RightLowerArm1,
	RightLowerArm2,
	RightHand,
	RightHandAttach,
	EArmorSetArms_MAX,
};

// Enum FSD.EVanityAquisitionType
enum class EVanityAquisitionType : uint8_t {
	UnlockedFromStart,
	Purchased,
	Schematic,
	Treasure,
	EVanityAquisitionType_MAX,
};

// Enum FSD.EWoodLouseState
enum class EWoodLouseState : uint8_t {
	Unfolded,
	Folded,
	Size,
	EWoodLouseState_MAX,
};

// ScriptStruct FSD.CountDownFloat
// Size: 0x0c (Inherited: 0x00)
struct FCountDownFloat {
	float CountDownDuration; // 0x00(0x04)
	char UnknownData_4[0x8]; // 0x04(0x08)
};

// ScriptStruct FSD.LerpingPercent
// Size: 0x08 (Inherited: 0x00)
struct FLerpingPercent {
	char TargetPercent; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
};

// ScriptStruct FSD.ReplicatedCharacterData
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedCharacterData {
	struct FWeakObjectPtr<struct AActor> Target; // 0x00(0x08)
	float TemperatureEffect; // 0x08(0x04)
	bool bCanTakeDamage; // 0x0c(0x01)
	char UnknownData_D[0xb]; // 0x0d(0x0b)
};

// ScriptStruct FSD.LaserPointerTarget
// Size: 0xb0 (Inherited: 0x00)
struct FLaserPointerTarget {
	struct FHitResult HitInfo; // 0x00(0x88)
	char UnknownData_88[0x10]; // 0x88(0x10)
	struct AActor* Target; // 0x98(0x08)
	struct AActor* ExtraTarget; // 0xa0(0x08)
	char UnknownData_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct FSD.CoolDownProgressStyle
// Size: 0x40 (Inherited: 0x00)
struct FCoolDownProgressStyle {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct FLinearColor IconTint; // 0x08(0x10)
	struct FText Name; // 0x18(0x18)
	struct UCoolDownProgressWidget* WidgetOverride; // 0x30(0x08)
	struct USoundCue* AudioCoolDownFinished; // 0x38(0x08)
};

// ScriptStruct FSD.CameraSpringSettings
// Size: 0x3c (Inherited: 0x00)
struct FCameraSpringSettings {
	bool SpringEnabled; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float StepThreshold; // 0x04(0x04)
	struct FVector2D SpringExtend; // 0x08(0x08)
	float RetractStrength; // 0x10(0x04)
	float RetractDownReduction; // 0x14(0x04)
	bool ShowDebug; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	float LastSpeedZ; // 0x1c(0x04)
	struct FVector LastLocation; // 0x20(0x0c)
	struct FVector StartSpringLocation; // 0x2c(0x0c)
	bool bSpringInitialized; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
};

// ScriptStruct FSD.HeroInfo
// Size: 0x88 (Inherited: 0x00)
struct FHeroInfo {
	struct FText HeroName; // 0x00(0x18)
	struct UTexture2D* HeroIcon; // 0x18(0x08)
	struct UTexture2D* SmallHeroIcon; // 0x20(0x08)
	struct UTexture2D* HeroFullSizeImage; // 0x28(0x08)
	struct FLinearColor HeroColor; // 0x30(0x10)
	struct FText HeroShortDescription; // 0x40(0x18)
	struct FText HeroLongDescription; // 0x58(0x18)
	struct FText SwitchToMessage; // 0x70(0x18)
};

// ScriptStruct FSD.AnalogAimSettings
// Size: 0x40 (Inherited: 0x00)
struct FAnalogAimSettings {
	bool ShowDebugOutput; // 0x00(0x01)
	char UnknownData_1[0x13]; // 0x01(0x13)
	struct FVector2D AimRate; // 0x14(0x08)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* SensitivityCurve; // 0x20(0x08)
	float LookAtStickyness; // 0x28(0x04)
	float StickynessRecoverySpeed; // 0x2c(0x04)
	float StickynessMaxSensitivity; // 0x30(0x04)
	struct FVector2D ThirdPersonLookRate; // 0x34(0x08)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct FSD.HoldButton
// Size: 0x28 (Inherited: 0x00)
struct FHoldButton {
	struct FText HoldingText; // 0x00(0x18)
	float HoldStartTime; // 0x18(0x04)
	float HoldDuration; // 0x1c(0x04)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct FSD.DownCameraSettings
// Size: 0x18 (Inherited: 0x00)
struct FDownCameraSettings {
	struct FWeakObjectPtr<struct APlayerCharacter> Target; // 0x00(0x08)
	int32_t TargetIndex; // 0x08(0x04)
	float MinPitch; // 0x0c(0x04)
	float MaxPitch; // 0x10(0x04)
	float SmoothSpeed; // 0x14(0x04)
};

// ScriptStruct FSD.DiscordServerData
// Size: 0x08 (Inherited: 0x00)
struct FDiscordServerData {
	int32_t presenceCount; // 0x00(0x04)
	int32_t memberCount; // 0x04(0x04)
};

// ScriptStruct FSD.ClaimableRewardEntry
// Size: 0x58 (Inherited: 0x00)
struct FClaimableRewardEntry {
	struct FText Title; // 0x00(0x18)
	struct FText Text; // 0x18(0x18)
	struct UObject* Image; // 0x30(0x08)
	struct TArray<struct UReward*> Rewards; // 0x38(0x10)
	struct FGuid SavegameID; // 0x48(0x10)
};

// ScriptStruct FSD.CharacterViewScene
// Size: 0x18 (Inherited: 0x00)
struct FCharacterViewScene {
	struct TArray<struct FCharacterViewInfo> Characters; // 0x00(0x10)
	bool MissionSuccess; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FSD.CharacterViewInfo
// Size: 0x28 (Inherited: 0x00)
struct FCharacterViewInfo {
	struct APlayerCharacter* CharacterClass; // 0x00(0x08)
	struct TArray<struct UVanityItem*> EquippedVanity; // 0x08(0x10)
	bool SurvivedInPod; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct UVictoryPose* VictoryPose; // 0x20(0x08)
};

// ScriptStruct FSD.SpaceRigNotification
// Size: 0x40 (Inherited: 0x00)
struct FSpaceRigNotification {
	struct FText Text; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct FLinearColor IconColor; // 0x20(0x10)
	char UnknownData_30[0x10]; // 0x30(0x10)
};

// ScriptStruct FSD.PendingRewards
// Size: 0x190 (Inherited: 0x00)
struct FPendingRewards {
	struct FPendingRewardsStats StartStats; // 0x00(0xb0)
	struct FPendingRewardsStats EndStats; // 0xb0(0xb0)
	struct TArray<struct FCreditsReward> CreditsRewardEntries; // 0x160(0x10)
	int32_t CreditsReward; // 0x170(0x04)
	char UnknownData_174[0x4]; // 0x174(0x04)
	struct TArray<struct FXPReward> XPRewardEntries; // 0x178(0x10)
	int32_t XPReward; // 0x188(0x04)
	bool bHasData; // 0x18c(0x01)
	bool bIsRecording; // 0x18d(0x01)
	bool bWasRewarded; // 0x18e(0x01)
	char UnknownData_18F[0x1]; // 0x18f(0x01)
};

// ScriptStruct FSD.XPReward
// Size: 0x20 (Inherited: 0x00)
struct FXPReward {
	struct FText Description; // 0x00(0x18)
	int32_t XP; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.CreditsReward
// Size: 0x20 (Inherited: 0x00)
struct FCreditsReward {
	struct FText Description; // 0x00(0x18)
	int32_t amount; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.PendingRewardsStats
// Size: 0xb0 (Inherited: 0x00)
struct FPendingRewardsStats {
	struct TMap<struct UResourceData*, float> AllResources; // 0x00(0x50)
	struct TMap<struct UResourceData*, float> CollectedResources; // 0x50(0x50)
	bool PrimaryObjectiveCompleted; // 0xa0(0x01)
	bool SecondaryObjectiveCompleted; // 0xa1(0x01)
	char UnknownData_A2[0x2]; // 0xa2(0x02)
	float TimePlayed; // 0xa4(0x04)
	int32_t EnemiesKilled; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct FSD.FSDServerSearchOptions
// Size: 0x40 (Inherited: 0x00)
struct FFSDServerSearchOptions {
	enum class ESteamServerJoinStatus JoinStatus; // 0x00(0x01)
	enum class ESteamSearchRegion SearchRegion; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct TArray<struct UDifficultySetting*> Difficulties; // 0x08(0x10)
	bool DeepDive; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FString SearchString; // 0x20(0x10)
	int32_t MissionSeed; // 0x30(0x04)
	int32_t GlobalMissionSeed; // 0x34(0x04)
	char UnknownData_38[0x8]; // 0x38(0x08)
};

// ScriptStruct FSD.FadeData
// Size: 0x48 (Inherited: 0x00)
struct FFadeData {
	bool bEnabled; // 0x00(0x01)
	bool bShowDebugOutput; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct UFSDLevelLoadingPersistentWidget* WidgetType; // 0x08(0x08)
	struct UFSDLevelLoadingPersistentWidget* Widget; // 0x10(0x08)
	float CurrentFade; // 0x18(0x04)
	float TargetFade; // 0x1c(0x04)
	float FadeSpeed; // 0x20(0x04)
	float Delay; // 0x24(0x04)
	bool bFadeWorldOnly; // 0x28(0x01)
	bool bCapFramerate; // 0x29(0x01)
	bool bToSpaceRig; // 0x2a(0x01)
	char UnknownData_2B[0x5]; // 0x2b(0x05)
	struct UTexture* loadingImage; // 0x30(0x08)
	struct FString DebugMsg; // 0x38(0x10)
};

// ScriptStruct FSD.GameStateSeamlessTravelStorage
// Size: 0x150 (Inherited: 0x00)
struct FGameStateSeamlessTravelStorage {
	struct UDifficultySetting* ChosenDifficulty; // 0x00(0x08)
	struct TMap<struct UPlayer*, bool> PlayerShouldStartInMedbay; // 0x08(0x50)
	struct TMap<struct UResourceData*, float> Resources; // 0x58(0x50)
	float MissionTime; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
	struct TMap<struct FName, float> StoredFloatValues; // 0xb0(0x50)
	struct TMap<struct FName, int32_t> StoredIntValues; // 0x100(0x50)
};

// ScriptStruct FSD.FSDChatMessage
// Size: 0x60 (Inherited: 0x00)
struct FFSDChatMessage {
	char UnknownData_0[0x8]; // 0x00(0x08)
	enum class EChatMessageType MsgType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString Sender; // 0x10(0x10)
	enum class EChatSenderType SenderType; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FString Msg; // 0x28(0x10)
	struct FUniqueNetIdRepl SenderNetID; // 0x38(0x28)
};

// ScriptStruct FSD.SplineSegmentCarveOperationData
// Size: 0x28 (Inherited: 0x00)
struct FSplineSegmentCarveOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCarveSplineSegment> Segments; // 0x08(0x10)
	struct UTerrainMaterial* Material; // 0x18(0x08)
	enum class ECarveFilterType CarveFilter; // 0x20(0x01)
	enum class EPreciousMaterialOptions Precious; // 0x21(0x01)
	char UnknownData_22[0x6]; // 0x22(0x06)
};

// ScriptStruct FSD.MeltOperationData
// Size: 0x20 (Inherited: 0x00)
struct FMeltOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector> Points; // 0x08(0x10)
	float Radius; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.DrillOperationData
// Size: 0x2c (Inherited: 0x00)
struct FDrillOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	struct FVector HitPos; // 0x04(0x0c)
	struct FVector Dir; // 0x10(0x0c)
	struct FVector CarveSize; // 0x1c(0x0c)
	float CarveNoise; // 0x28(0x04)
};

// ScriptStruct FSD.RemoveFloatingIslandOperationData
// Size: 0x04 (Inherited: 0x00)
struct FRemoveFloatingIslandOperationData {
	int32_t OperationNumber; // 0x00(0x04)
};

// ScriptStruct FSD.PickaxeDigOperationData
// Size: 0x28 (Inherited: 0x00)
struct FPickaxeDigOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	struct FVector HitPos; // 0x04(0x0c)
	struct FVector Dir; // 0x10(0x0c)
	float DigSize; // 0x1c(0x04)
	struct AActor* Miner; // 0x20(0x08)
};

// ScriptStruct FSD.CarveWithSTLMeshOperationData
// Size: 0x68 (Inherited: 0x00)
struct FCarveWithSTLMeshOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct USTLMeshCarver* STLMeshCarver; // 0x08(0x08)
	struct UStaticMeshCarver* StaticMeshCarver; // 0x10(0x08)
	struct UTerrainMaterial* Material; // 0x18(0x08)
	enum class ECarveFilterType CarveFilter; // 0x20(0x01)
	enum class EPreciousMaterialOptions Precious; // 0x21(0x01)
	char UnknownData_22[0x2]; // 0x22(0x02)
	struct FMatrixWithExactSync Transform; // 0x24(0x40)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// ScriptStruct FSD.CarveWithColliderOperationData
// Size: 0x68 (Inherited: 0x00)
struct FCarveWithColliderOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
	struct UTerrainMaterial* Material; // 0x10(0x08)
	enum class ECarveFilterType CarveFilter; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	struct FMatrixWithExactSync Transform; // 0x1c(0x40)
	float ExpensiveNoise; // 0x5c(0x04)
	enum class EPreciousMaterialOptions Precious; // 0x60(0x01)
	enum class CarveOptionsCellSize CarveCellSize; // 0x61(0x01)
	char UnknownData_62[0x6]; // 0x62(0x06)
};

// ScriptStruct FSD.GrenadeExplodeOperationData
// Size: 0x38 (Inherited: 0x00)
struct FGrenadeExplodeOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	struct FVector HitPos; // 0x04(0x0c)
	struct FVector Normal; // 0x10(0x0c)
	float NormalOffset; // 0x1c(0x04)
	float NormalSqueeze; // 0x20(0x04)
	float Radius; // 0x24(0x04)
	float Noise; // 0x28(0x04)
	float BurnThickness; // 0x2c(0x04)
	bool UseBulletBurntMaterial; // 0x30(0x01)
	bool DissolvePlatforms; // 0x31(0x01)
	char UnknownData_32[0x2]; // 0x32(0x02)
	uint32_t OverrideBurntMaterialHandle; // 0x34(0x04)
};

// ScriptStruct FSD.OptionsInSaveGame
// Size: 0x08 (Inherited: 0x00)
struct FOptionsInSaveGame {
	bool SaveGameOptionsValid; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t ScreenMode; // 0x04(0x04)
};

// ScriptStruct FSD.GDKWinOptionsInSaveGame
// Size: 0x70 (Inherited: 0x00)
struct FGDKWinOptionsInSaveGame {
	bool SaveGameOptionsValid; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t ScreenMode; // 0x04(0x04)
	uint32_t ResolutionSizeX; // 0x08(0x04)
	uint32_t ResolutionSizeY; // 0x0c(0x04)
	bool bUseVSync; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float FrameRateLimit; // 0x14(0x04)
	float Sharpening; // 0x18(0x04)
	int32_t AntiAliasingType; // 0x1c(0x04)
	float Gamma; // 0x20(0x04)
	int32_t OverallQuality; // 0x24(0x04)
	float ResolutionScale; // 0x28(0x04)
	int32_t TextureQuality; // 0x2c(0x04)
	int32_t ShadowQuality; // 0x30(0x04)
	int32_t AntiAliasingQuality; // 0x34(0x04)
	int32_t PostProcessingQuality; // 0x38(0x04)
	int32_t EffectsQuality; // 0x3c(0x04)
	int32_t ViewDistanceQuality; // 0x40(0x04)
	bool PreventLatejoinCharacterDuplication; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	struct FString LocalGameServerName; // 0x48(0x10)
	struct FString CurrentAudioOutputDeviceId; // 0x58(0x10)
	bool UseDefaultAudioOutputDevice; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// ScriptStruct FSD.ConsoleOptionsInSaveGame
// Size: 0x110 (Inherited: 0x00)
struct FConsoleOptionsInSaveGame {
	struct FControllerSettings ControllerSettings; // 0x00(0x0c)
	struct FHUDElements HUDElements; // 0x0c(0x78)
	bool SaveGameOptionsValid; // 0x84(0x01)
	bool bTutorialHintsEnabled; // 0x85(0x01)
	bool bShowFPS; // 0x86(0x01)
	bool bShowNetInfo; // 0x87(0x01)
	float FOV; // 0x88(0x04)
	float HeadbobbingScale; // 0x8c(0x04)
	float CameraShakeScale; // 0x90(0x04)
	float UIDPIScale; // 0x94(0x04)
	float volumeCharacterVoice; // 0x98(0x04)
	float volumeMaster; // 0x9c(0x04)
	float volumeMissionControl; // 0xa0(0x04)
	float volumeSFX; // 0xa4(0x04)
	float volumeMusic; // 0xa8(0x04)
	bool bShowSubtitles; // 0xac(0x01)
	bool InvertMouse; // 0xad(0x01)
	bool PhotosensitiveMode; // 0xae(0x01)
	bool bHoldToSprint; // 0xaf(0x01)
	bool bToggleLaserPointer; // 0xb0(0x01)
	bool bToggleTerrainScanner; // 0xb1(0x01)
	bool bUseMouseSmoothing; // 0xb2(0x01)
	char UnknownData_B3[0x1]; // 0xb3(0x01)
	float MouseXSensitivity; // 0xb4(0x04)
	float MouseYSensitivity; // 0xb8(0x04)
	bool bUseSeperateSensitivity; // 0xbc(0x01)
	bool bInvertMouseWheel; // 0xbd(0x01)
	bool bInvertIncapacitatedX_Mouse; // 0xbe(0x01)
	bool bInvertIncapacitatedX_Controller; // 0xbf(0x01)
	bool bInvertFlightControls; // 0xc0(0x01)
	bool bShowUIAnimations; // 0xc1(0x01)
	bool bPlaySoundOnChatMessage; // 0xc2(0x01)
	char UnknownData_C3[0x1]; // 0xc3(0x01)
	float ChatFadeTime; // 0xc4(0x04)
	float ForceFeedbackScale; // 0xc8(0x04)
	int32_t ChatFontSize; // 0xcc(0x04)
	struct FString Language; // 0xd0(0x10)
	struct FCharacterOptions CharacterOptions; // 0xe0(0x02)
	char UnknownData_E2[0x6]; // 0xe2(0x06)
	struct TArray<struct FCustomKeyBinding> CustomKeyBindings; // 0xe8(0x10)
	struct TArray<struct FCustomKeyBinding> CustomControllerBindings; // 0xf8(0x10)
	bool SwapControllerThumbsticks; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
};

// ScriptStruct FSD.CustomKeyBinding
// Size: 0x28 (Inherited: 0x00)
struct FCustomKeyBinding {
	struct FName ActionName; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FKey Key; // 0x10(0x18)
};

// ScriptStruct FSD.CharacterOptions
// Size: 0x02 (Inherited: 0x00)
struct FCharacterOptions {
	bool GrapplingHookAutoSwitch; // 0x00(0x01)
	bool ZiplineGunAutoSwitch; // 0x01(0x01)
};

// ScriptStruct FSD.HUDElements
// Size: 0x78 (Inherited: 0x00)
struct FHUDElements {
	struct FHUDElementData OnScreenHelp; // 0x00(0x08)
	struct FHUDElementData EnemyHealth; // 0x08(0x08)
	struct FHUDElementData RadarDepth; // 0x10(0x08)
	struct FHUDElementData PlayerHealthShield; // 0x18(0x08)
	struct FHUDElementData PlayerNameClassIcon; // 0x20(0x08)
	struct FHUDElementData PlayerItems; // 0x28(0x08)
	struct FHUDElementData PlayerResources; // 0x30(0x08)
	struct FHUDElementData WeaponInfo; // 0x38(0x08)
	struct FHUDElementData Grenades; // 0x40(0x08)
	struct FHUDElementData FlashLight; // 0x48(0x08)
	struct FHUDElementData Flares; // 0x50(0x08)
	struct FHUDElementData Crosshair; // 0x58(0x08)
	struct FHUDElementData Objectives; // 0x60(0x08)
	struct FHUDElementData TeamDisplay; // 0x68(0x08)
	struct FHUDElementData SentryGunDisplay; // 0x70(0x08)
};

// ScriptStruct FSD.HUDElementData
// Size: 0x08 (Inherited: 0x00)
struct FHUDElementData {
	enum class EHUDVisibilityMode Mode; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t Version; // 0x04(0x04)
};

// ScriptStruct FSD.ControllerSettings
// Size: 0x0c (Inherited: 0x00)
struct FControllerSettings {
	float AimInnerDeadZone; // 0x00(0x04)
	float AimSensitivity; // 0x04(0x04)
	float AimOuterAcceleration; // 0x08(0x04)
};

// ScriptStruct FSD.WatchedTutorial
// Size: 0x18 (Inherited: 0x00)
struct FWatchedTutorial {
	struct FString TutorialName; // 0x00(0x10)
	int32_t count; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FSD.ResourcesSave
// Size: 0xa0 (Inherited: 0x00)
struct FResourcesSave {
	struct TMap<struct FGuid, float> OwnedResources; // 0x00(0x50)
	struct TMap<struct UResourceData*, float> Resources; // 0x50(0x50)
};

// ScriptStruct FSD.ItemUINotifications
// Size: 0x68 (Inherited: 0x00)
struct FItemUINotifications {
	struct TArray<struct FUINotificationItem> UINotifications; // 0x00(0x10)
	struct TSet<struct FGuid> UINotificationSet; // 0x10(0x50)
	struct UFSDSaveGame* SaveGame; // 0x60(0x08)
};

// ScriptStruct FSD.UINotificationItem
// Size: 0x10 (Inherited: 0x00)
struct FUINotificationItem {
	struct TArray<struct FGuid> NotificationIDs; // 0x00(0x10)
};

// ScriptStruct FSD.EventRewardSave
// Size: 0x50 (Inherited: 0x00)
struct FEventRewardSave {
	struct TMap<struct FGuid, struct FEventRewardSaveItem> PendingRewards; // 0x00(0x50)
};

// ScriptStruct FSD.EventRewardSaveItem
// Size: 0x20 (Inherited: 0x00)
struct FEventRewardSaveItem {
	struct FGuid CategoryID; // 0x00(0x10)
	struct TArray<struct FGuid> ClassOptions; // 0x10(0x10)
};

// ScriptStruct FSD.SkinList
// Size: 0x50 (Inherited: 0x00)
struct FSkinList {
	struct TSet<struct FGuid> Skins; // 0x00(0x50)
};

// ScriptStruct FSD.ItemNotificationInfo
// Size: 0x04 (Inherited: 0x00)
struct FItemNotificationInfo {
	int32_t NotificationFlags; // 0x00(0x04)
};

// ScriptStruct FSD.UpgradeLoadout
// Size: 0x50 (Inherited: 0x00)
struct FUpgradeLoadout {
	struct TMap<struct FGuid, struct FItemUpgradeSelection> Loadout; // 0x00(0x50)
};

// ScriptStruct FSD.ItemUpgradeSelection
// Size: 0x78 (Inherited: 0x00)
struct FItemUpgradeSelection {
	struct FGuid WeaponID; // 0x00(0x10)
	struct TArray<struct FGuid> EquippedUpgrades; // 0x10(0x10)
	struct TArray<struct FGuid> PermanentUpgrades; // 0x20(0x10)
	struct FGuid EquippedOverclock; // 0x30(0x10)
	struct TArray<struct FGuid> EquippedSkins; // 0x40(0x10)
	bool OverclockingUnlocked; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FGuid EquippedSkinColor; // 0x54(0x10)
	struct FGuid EquippedSkinMesh; // 0x64(0x10)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// ScriptStruct FSD.DrinkSave
// Size: 0x58 (Inherited: 0x00)
struct FDrinkSave {
	struct TSet<struct FGuid> UnlockedDrinks; // 0x00(0x50)
	bool HasUnlockedSpecial; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// ScriptStruct FSD.ForgingSave
// Size: 0x08 (Inherited: 0x00)
struct FForgingSave {
	int32_t XP; // 0x00(0x04)
	int32_t AwardsGiven; // 0x04(0x04)
};

// ScriptStruct FSD.CharacterSave
// Size: 0x208 (Inherited: 0x00)
struct FCharacterSave {
	struct FGuid SavegameID; // 0x00(0x10)
	int32_t XP; // 0x10(0x04)
	bool HasCompletedRetirementCampaign; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	int32_t TimesRetired; // 0x18(0x04)
	int32_t RetiredCharacterLevels; // 0x1c(0x04)
	bool HasSeenRetirementRewardScreen; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct APlayerCharacter* CharacterClass; // 0x28(0x08)
	struct FCharacterVanitySave Vanity; // 0x30(0x110)
	int32_t SelectedLoadout; // 0x140(0x04)
	struct FItemLoadout Loadout; // 0x144(0x84)
	struct TArray<struct FItemLoadout> Loadouts; // 0x1c8(0x10)
	struct FVictoryPoseSave VictoryPose; // 0x1d8(0x30)
};

// ScriptStruct FSD.VictoryPoseSave
// Size: 0x30 (Inherited: 0x00)
struct FVictoryPoseSave {
	struct FGuid EquippedVictoryPose; // 0x00(0x10)
	struct TArray<struct FGuid> UnlockedVictoryPoses; // 0x10(0x10)
	struct TArray<struct FGuid> EquippedVictoryPoses; // 0x20(0x10)
};

// ScriptStruct FSD.ItemLoadout
// Size: 0x84 (Inherited: 0x00)
struct FItemLoadout {
	struct FGuid PrimaryWeapon; // 0x00(0x10)
	struct FGuid SecondaryWeapon; // 0x10(0x10)
	struct FGuid TraversalTool; // 0x20(0x10)
	struct FGuid ClassTool; // 0x30(0x10)
	struct FGuid Armor; // 0x40(0x10)
	struct FGuid Flare; // 0x50(0x10)
	struct FGuid MiningTool; // 0x60(0x10)
	struct FGuid Grenade; // 0x70(0x10)
	int32_t IconIndex; // 0x80(0x04)
};

// ScriptStruct FSD.CharacterVanitySave
// Size: 0x110 (Inherited: 0x00)
struct FCharacterVanitySave {
	struct TArray<struct FCharacterVanityLoadout> Loadouts; // 0x00(0x10)
	struct TArray<struct FGuid> UnLockedVanityItemIDs; // 0x10(0x10)
	struct FGuid EquippedHeadItemID; // 0x20(0x10)
	struct FGuid EquippedBeardItemID; // 0x30(0x10)
	struct FGuid EquippedArmorItemID; // 0x40(0x10)
	struct FGuid EquippedArmorMaterialItemID; // 0x50(0x10)
	struct FGuid EquippedBeardColorItemID; // 0x60(0x10)
	struct FGuid EquippedSkinColorItemID; // 0x70(0x10)
	struct FGuid EquippedEyebrowsItemID; // 0x80(0x10)
	struct FGuid EquippedMoustacheItemID; // 0x90(0x10)
	struct FGuid EquippedSideburnsItemID; // 0xa0(0x10)
	struct TArray<struct UVanityItem*> UnLockedVanityItems; // 0xb0(0x10)
	struct TMap<enum class EVanitySlot, struct FGuid> NewVanityItems; // 0xc0(0x50)
};

// ScriptStruct FSD.CharacterVanityLoadout
// Size: 0x90 (Inherited: 0x00)
struct FCharacterVanityLoadout {
	struct FGuid EquippedHeadItemID; // 0x00(0x10)
	struct FGuid EquippedBeardItemID; // 0x10(0x10)
	struct FGuid EquippedArmorItemID; // 0x20(0x10)
	struct FGuid EquippedArmorMaterialID; // 0x30(0x10)
	struct FGuid EquippedBeardColorItemID; // 0x40(0x10)
	struct FGuid EquippedSkinColorItemID; // 0x50(0x10)
	struct FGuid EquippedEyebrowsItemID; // 0x60(0x10)
	struct FGuid EquippedMoustacheItemID; // 0x70(0x10)
	struct FGuid EquippedSideburnsItemID; // 0x80(0x10)
};

// ScriptStruct FSD.DeepDiveSave
// Size: 0x70 (Inherited: 0x00)
struct FDeepDiveSave {
	struct FDeepDiveItem NormalSave; // 0x00(0x38)
	struct FDeepDiveItem EliteSave; // 0x38(0x38)
};

// ScriptStruct FSD.DeepDiveItem
// Size: 0x38 (Inherited: 0x00)
struct FDeepDiveItem {
	int32_t Progress; // 0x00(0x04)
	int32_t Seed; // 0x04(0x04)
	int32_t BestTime; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FDeepDiveSaveRewardItem> Rewards; // 0x10(0x10)
	bool HasEverCompleted; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct FGuid> RewardsGiven; // 0x28(0x10)
};

// ScriptStruct FSD.DeepDiveSaveRewardItem
// Size: 0x14 (Inherited: 0x00)
struct FDeepDiveSaveRewardItem {
	struct FGuid RewardID; // 0x00(0x10)
	int32_t Stage; // 0x10(0x04)
};

// ScriptStruct FSD.CampaignSave
// Size: 0x48 (Inherited: 0x00)
struct FCampaignSave {
	struct FActiveCampaignItem ActiveCampaign; // 0x00(0x14)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FGuid> CompletedCampaigns; // 0x18(0x10)
	int32_t ActiveCampaignWeek; // 0x28(0x04)
	struct FWeeklyCampaignItem WeeklySave; // 0x2c(0x0c)
	struct FWeeklyCampaignItem MaxtrixCoreHuntSave; // 0x38(0x0c)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct FSD.WeeklyCampaignItem
// Size: 0x0c (Inherited: 0x00)
struct FWeeklyCampaignItem {
	int32_t LastCompletedWeek; // 0x00(0x04)
	int32_t LastStartedWeek; // 0x04(0x04)
	int32_t RewardedProgress; // 0x08(0x04)
};

// ScriptStruct FSD.ActiveCampaignItem
// Size: 0x14 (Inherited: 0x00)
struct FActiveCampaignItem {
	struct FGuid CampaignID; // 0x00(0x10)
	int32_t Progress; // 0x10(0x04)
};

// ScriptStruct FSD.UnLockedMissionParameters
// Size: 0x20 (Inherited: 0x00)
struct FUnLockedMissionParameters {
	struct TArray<struct FGuid> UnLockedComplexities; // 0x00(0x10)
	struct TArray<struct FGuid> UnLockedDurations; // 0x10(0x10)
};

// ScriptStruct FSD.GameDLCSave
// Size: 0x50 (Inherited: 0x00)
struct FGameDLCSave {
	struct TSet<struct FGuid> AnnouncedIDs; // 0x00(0x50)
};

// ScriptStruct FSD.FSDEventRewardsSave
// Size: 0x50 (Inherited: 0x00)
struct FFSDEventRewardsSave {
	struct TSet<struct FGuid> EventsSeen; // 0x00(0x50)
};

// ScriptStruct FSD.PromotionRewardsSave
// Size: 0x50 (Inherited: 0x00)
struct FPromotionRewardsSave {
	struct TSet<struct FGuid> ClaimedRewards; // 0x00(0x50)
};

// ScriptStruct FSD.SchematicSave
// Size: 0x38 (Inherited: 0x00)
struct FSchematicSave {
	struct TArray<struct FGuid> ForgedSchematics; // 0x00(0x10)
	struct FGuid PendingReward; // 0x10(0x10)
	struct TArray<struct FGuid> OwnedSchematics; // 0x20(0x10)
	bool bFirstSchematicMessageShown; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct FSD.CharacterPerksSave
// Size: 0x10 (Inherited: 0x00)
struct FCharacterPerksSave {
	struct TArray<struct FPerkEquipEntry> CharacterPerks; // 0x00(0x10)
};

// ScriptStruct FSD.PerkEquipEntry
// Size: 0x20 (Inherited: 0x00)
struct FPerkEquipEntry {
	struct FGuid characterID; // 0x00(0x10)
	struct TArray<struct FGuid> PerkIDs; // 0x10(0x10)
};

// ScriptStruct FSD.AchievementSave
// Size: 0x20 (Inherited: 0x00)
struct FAchievementSave {
	struct TArray<struct FString> OfflineAchievedAchievements; // 0x00(0x10)
	struct TArray<struct FAchievementSaveEntry> AchievementEntries; // 0x10(0x10)
};

// ScriptStruct FSD.AchievementSaveEntry
// Size: 0x18 (Inherited: 0x00)
struct FAchievementSaveEntry {
	struct FGuid AchievementSaveID; // 0x00(0x10)
	float HighestSavedProgress; // 0x10(0x04)
	float CurrentProgress; // 0x14(0x04)
};

// ScriptStruct FSD.PerkClaimsSave
// Size: 0x18 (Inherited: 0x00)
struct FPerkClaimsSave {
	struct TArray<struct FPerkClaimEntry> PerkEntries; // 0x00(0x10)
	bool HasResetPerks2; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FSD.PerkClaimEntry
// Size: 0x14 (Inherited: 0x00)
struct FPerkClaimEntry {
	struct FGuid PerkID; // 0x00(0x10)
	int32_t currentRank; // 0x10(0x04)
};

// ScriptStruct FSD.MilestoneSave
// Size: 0x10 (Inherited: 0x00)
struct FMilestoneSave {
	struct TArray<struct FMilestoneCounter> ClaimedKPIRewards; // 0x00(0x10)
};

// ScriptStruct FSD.MilestoneCounter
// Size: 0x14 (Inherited: 0x00)
struct FMilestoneCounter {
	struct FGuid KPIGuid; // 0x00(0x10)
	int32_t Tier; // 0x10(0x04)
};

// ScriptStruct FSD.MissionStatSave
// Size: 0x18 (Inherited: 0x00)
struct FMissionStatSave {
	struct TArray<struct FMissionStatCounter> Counters; // 0x00(0x10)
	bool bCharacterLevelUpFixed; // 0x10(0x01)
	bool bBoughtVanityItemsFixed; // 0x11(0x01)
	bool bBoughtEquipmentUpgradesFixed; // 0x12(0x01)
	bool bCampaignsCompletedFixed; // 0x13(0x01)
	bool WeaponUpgradesFixed; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct FSD.MissionStatCounter
// Size: 0x24 (Inherited: 0x00)
struct FMissionStatCounter {
	struct FGuid PlayerClassID; // 0x00(0x10)
	struct FGuid MissionStatID; // 0x10(0x10)
	float Value; // 0x20(0x04)
};

// ScriptStruct FSD.EndMissionResult
// Size: 0x60 (Inherited: 0x00)
struct FEndMissionResult {
	struct FPlayerProgress PreviousPlayerProgress; // 0x00(0x08)
	struct FPlayerProgress PlayerProgress; // 0x08(0x08)
	struct FCharacterProgress PreviousCharacterProgress; // 0x10(0x20)
	struct FCharacterProgress CharacterProgress; // 0x30(0x20)
	struct USchematic* RewardedSchematic; // 0x50(0x08)
	bool bReadyForUse; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
};

// ScriptStruct FSD.CharacterProgress
// Size: 0x20 (Inherited: 0x00)
struct FCharacterProgress {
	struct UPlayerCharacterID* characterID; // 0x00(0x08)
	int32_t Level; // 0x08(0x04)
	float Progress; // 0x0c(0x04)
	int32_t CurrentXP; // 0x10(0x04)
	int32_t NextLevelXP; // 0x14(0x04)
	int32_t TimesRetired; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.PlayerProgress
// Size: 0x08 (Inherited: 0x00)
struct FPlayerProgress {
	int32_t PlayerRank; // 0x00(0x04)
	int32_t PlayerStars; // 0x04(0x04)
};

// ScriptStruct FSD.ActiveCampaingMission
// Size: 0x0c (Inherited: 0x00)
struct FActiveCampaingMission {
	bool HasMission; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t GlobalSeed; // 0x04(0x04)
	int32_t MissionSeed; // 0x08(0x04)
};

// ScriptStruct FSD.SaveGameStatePerkItem
// Size: 0x10 (Inherited: 0x00)
struct FSaveGameStatePerkItem {
	char Rank; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UPerkAsset* Perk; // 0x08(0x08)
};

// ScriptStruct FSD.DrinkableBarSlot
// Size: 0x14 (Inherited: 0x00)
struct FDrinkableBarSlot {
	struct FVector WorldLocation; // 0x00(0x0c)
	struct FWeakObjectPtr<struct ADrinkableActor> DrinkableActor; // 0x0c(0x08)
};

// ScriptStruct FSD.UpgradeValues
// Size: 0x1c (Inherited: 0x00)
struct FUpgradeValues {
	float BaseValue; // 0x00(0x04)
	float UpgradedValue; // 0x04(0x04)
	float UpgradedPercentageValue; // 0x08(0x04)
	float OldUpgradedValue; // 0x0c(0x04)
	float OldUpgradedPercentageValue; // 0x10(0x04)
	float CurrentValue; // 0x14(0x04)
	enum class EUpgradeCalucationType CalculationType; // 0x18(0x01)
	enum class EItemPreviewStatus PreviewStatus; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct FSD.CraftingCost
// Size: 0x10 (Inherited: 0x00)
struct FCraftingCost {
	struct UResourceData* Resource; // 0x00(0x08)
	float amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ItemUpgradeStatText
// Size: 0x20 (Inherited: 0x00)
struct FItemUpgradeStatText {
	struct FText StatText; // 0x00(0x18)
	bool IsAdventageous; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct FSD.DeepDiveBank
// Size: 0x10 (Inherited: 0x00)
struct FDeepDiveBank {
	struct UDeepDive* NormalDeepDive; // 0x00(0x08)
	struct UDeepDive* HardDeepDive; // 0x08(0x08)
};

// ScriptStruct FSD.ObjectiveMissionIcon
// Size: 0x18 (Inherited: 0x00)
struct FObjectiveMissionIcon {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FLinearColor Tint; // 0x08(0x10)
};

// ScriptStruct FSD.MissionShouts
// Size: 0x38 (Inherited: 0x00)
struct FMissionShouts {
	struct UDialogDataAsset* AfterDropPodExit; // 0x00(0x08)
	struct UDialogDataAsset* OnExitPodDescending; // 0x08(0x08)
	struct UDialogDataAsset* OnExitPodArrived; // 0x10(0x08)
	struct UDialogDataAsset* OnCompletion; // 0x18(0x08)
	struct UDialogDataAsset* OnDeepDiveExitPodDescending; // 0x20(0x08)
	struct UDialogDataAsset* OnDeepDiveObjectiveCompletion; // 0x28(0x08)
	struct UDialogDataAsset* OnDeepDiveAllReturnObjectivesCompleted; // 0x30(0x08)
};

// ScriptStruct FSD.AfflictionEntriesArray
// Size: 0x120 (Inherited: 0x108)
struct FAfflictionEntriesArray : FFastArraySerializer {
	struct TArray<struct FAfflictionEntry> Items; // 0x108(0x10)
	struct UPawnAfflictionComponent* Owner; // 0x118(0x08)
};

// ScriptStruct FSD.AfflictionEntry
// Size: 0x18 (Inherited: 0x0c)
struct FAfflictionEntry : FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UPawnAffliction* affliction; // 0x10(0x08)
};

// ScriptStruct FSD.PawnAfflictionItem
// Size: 0x18 (Inherited: 0x00)
struct FPawnAfflictionItem {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct TArray<struct UAfflictionEffect*> Afflictions; // 0x08(0x10)
};

// ScriptStruct FSD.TrackBuilderPoint
// Size: 0x28 (Inherited: 0x00)
struct FTrackBuilderPoint {
	enum class ETrackBuildPlacementState PlacementState; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FVector_NetQuantize Location; // 0x04(0x0c)
	struct FVector_NetQuantize EulerRotation; // 0x10(0x0c)
	bool bPointValid; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	struct FWeakObjectPtr<struct UTrackBuilderConnectPoint> ConnectPoint; // 0x20(0x08)
};

// ScriptStruct FSD.MixerAnnouncement
// Size: 0x28 (Inherited: 0x00)
struct FMixerAnnouncement {
	struct FString Username; // 0x00(0x10)
	struct FText Text; // 0x10(0x18)
};

// ScriptStruct FSD.HUDVisibilityRegisteredWidget
// Size: 0x0c (Inherited: 0x00)
struct FHUDVisibilityRegisteredWidget {
	struct FWeakObjectPtr<struct UWidget> Widget; // 0x00(0x08)
	char UnknownData_8[0x4]; // 0x08(0x04)
};

// ScriptStruct FSD.YesNoPromptSettings
// Size: 0x40 (Inherited: 0x00)
struct FYesNoPromptSettings {
	struct UYesNoPromptWidget* WidgetClass; // 0x00(0x08)
	int32_t ZOrder; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FText Title; // 0x10(0x18)
	struct FText Message; // 0x28(0x18)
};

// ScriptStruct FSD.ProjectileImpact
// Size: 0x30 (Inherited: 0x00)
struct FProjectileImpact {
	struct FVector_NetQuantize Location; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x0c(0x0c)
	struct FWeakObjectPtr<struct AActor> Actor; // 0x18(0x08)
	struct UPhysicalMaterial* PhysMat; // 0x20(0x08)
	int32_t BoneIndex; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FSD.ProjectileState
// Size: 0x28 (Inherited: 0x00)
struct FProjectileState {
	struct FVector_NetQuantize Velocity; // 0x00(0x0c)
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	struct USceneComponent* HomingTargetComponent; // 0x18(0x08)
	char IsSimulating : 1; // 0x20(0x01)
	char IsBouncy : 1; // 0x20(0x01)
	char UnknownData_20_2 : 6; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct FSD.ScaledEffect
// Size: 0x10 (Inherited: 0x00)
struct FScaledEffect {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.TracerData
// Size: 0x30 (Inherited: 0x00)
struct FTracerData {
	struct UFXSystemAsset* MainParticle; // 0x00(0x08)
	struct UFXSystemAsset* TrailParticle; // 0x08(0x08)
	float Speed; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct USoundCue* WhizbySound; // 0x18(0x08)
	float WhizBySoundCooldown; // 0x20(0x04)
	float Offset; // 0x24(0x04)
	float MinDistance; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FSD.SentryGunMuzzleSetup
// Size: 0x10 (Inherited: 0x00)
struct FSentryGunMuzzleSetup {
	struct FName SocketName; // 0x00(0x08)
	struct UAnimMontage* FireMontage; // 0x08(0x08)
};

// ScriptStruct FSD.ItemLoadoutAnimations
// Size: 0x18 (Inherited: 0x00)
struct FItemLoadoutAnimations {
	struct UAnimMontage* Loadout; // 0x00(0x08)
	struct TArray<struct UAnimSequence*> Loadout_IdleBreaks; // 0x08(0x10)
};

// ScriptStruct FSD.BlueprintFriend
// Size: 0x38 (Inherited: 0x00)
struct FBlueprintFriend {
	struct FString DisplayName; // 0x00(0x10)
	struct FString RealName; // 0x10(0x10)
	enum class EFriendOnlineStatusEnum OnlineStatus; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FString UniqueNetId; // 0x28(0x10)
};

// ScriptStruct FSD.TextCounterEntry
// Size: 0x28 (Inherited: 0x00)
struct FTextCounterEntry {
	struct UTextBlock* TextBlock; // 0x00(0x08)
	struct FText Format; // 0x08(0x18)
	int32_t Value; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct FSD.FrozenAfflictionItem
// Size: 0x18 (Inherited: 0x00)
struct FFrozenAfflictionItem {
	struct FName BoneName; // 0x00(0x08)
	struct FRandRange MeshScale; // 0x08(0x08)
	enum class EFrozenBitsSize FrozenBitsSize; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float ChanceToSpawn; // 0x14(0x04)
};

// ScriptStruct FSD.RandRange
// Size: 0x08 (Inherited: 0x00)
struct FRandRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct FSD.AttachMeshesAfflictionItem
// Size: 0x18 (Inherited: 0x00)
struct FAttachMeshesAfflictionItem {
	struct FName BoneName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UStaticMesh* Mesh; // 0x10(0x08)
};

// ScriptStruct FSD.PushPoint
// Size: 0x10 (Inherited: 0x00)
struct FPushPoint {
	struct USphereComponent* Collider; // 0x00(0x08)
	struct APlayerCharacter* Character; // 0x08(0x08)
};

// ScriptStruct FSD.CompositeArmorItem
// Size: 0x10 (Inherited: 0x00)
struct FCompositeArmorItem {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	float Health; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
};

// ScriptStruct FSD.ArmorHealthItem
// Size: 0x18 (Inherited: 0x00)
struct FArmorHealthItem {
	char MaterialIndex; // 0x00(0x01)
	bool HealthIsBreakPercentage; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct TArray<struct FArmorHealthSubItem> ArmorBones; // 0x08(0x10)
};

// ScriptStruct FSD.ArmorHealthSubItem
// Size: 0x28 (Inherited: 0x00)
struct FArmorHealthSubItem {
	float Health; // 0x00(0x04)
	struct FName BoneName; // 0x04(0x08)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> AdditionalBones; // 0x10(0x10)
	struct FName OptionalFXSocket; // 0x20(0x08)
};

// ScriptStruct FSD.DestructableBodypartItem
// Size: 0x18 (Inherited: 0x00)
struct FDestructableBodypartItem {
	char MaterialIndex; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> ArmorBones; // 0x08(0x10)
};

// ScriptStruct FSD.AttackCooldown
// Size: 0x10 (Inherited: 0x00)
struct FAttackCooldown {
	struct FName AttackName; // 0x00(0x08)
	float Cooldown; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.AttackerInfo
// Size: 0x10 (Inherited: 0x00)
struct FAttackerInfo {
	struct FWeakObjectPtr<struct AActor> Attacker; // 0x00(0x08)
	int32_t PositionIndex; // 0x08(0x04)
	float AttackerRadius; // 0x0c(0x04)
};

// ScriptStruct FSD.AudioWithCooldown
// Size: 0x10 (Inherited: 0x00)
struct FAudioWithCooldown {
	struct USoundCue* Audio; // 0x00(0x08)
	float Cooldown; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.BiomeEnemyEntry
// Size: 0x10 (Inherited: 0x00)
struct FBiomeEnemyEntry {
	struct UEnemyDescriptor* enemy; // 0x00(0x08)
	bool IsDistruptive; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct FSD.BiomeNoiseItem
// Size: 0x38 (Inherited: 0x00)
struct FBiomeNoiseItem {
	struct UFloodFillSettings* CeilingNoise; // 0x00(0x08)
	struct UDetailNoise* CeilingDetailNoise; // 0x08(0x08)
	struct UFloodFillSettings* WallNoise; // 0x10(0x08)
	struct UDetailNoise* WallDetailNoise; // 0x18(0x08)
	struct UFloodFillSettings* FloorNoise; // 0x20(0x08)
	struct UDetailNoise* FloorDetailNoise; // 0x28(0x08)
	float Weight; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct FSD.BiomeDebrisInfluencerVariant
// Size: 0x10 (Inherited: 0x00)
struct FBiomeDebrisInfluencerVariant {
	struct UCaveInfluencer* Influencer; // 0x00(0x08)
	float RandomWeight; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.BoscoLightSetting
// Size: 0x0c (Inherited: 0x00)
struct FBoscoLightSetting {
	struct FColor Color; // 0x00(0x04)
	float Intensity; // 0x04(0x04)
	float Radius; // 0x08(0x04)
};

// ScriptStruct FSD.BoscoJobBase
// Size: 0x18 (Inherited: 0x00)
struct FBoscoJobBase {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct ABosco* OwningDrone; // 0x08(0x08)
	struct ABoscoController* OnwingController; // 0x10(0x08)
};

// ScriptStruct FSD.BoscoMiningJob
// Size: 0x20 (Inherited: 0x18)
struct FBoscoMiningJob : FBoscoJobBase {
	struct AGem* EmbeddedGem; // 0x18(0x08)
};

// ScriptStruct FSD.BossFight
// Size: 0x18 (Inherited: 0x00)
struct FBossFight {
	struct FWeakObjectPtr<struct AActor> BossActor; // 0x00(0x08)
	struct FWeakObjectPtr<struct UEnemyComponent> EnemyComponent; // 0x08(0x08)
	struct FWeakObjectPtr<struct UEnemyHealthComponent> HealthComponent; // 0x10(0x08)
};

// ScriptStruct FSD.LevelGenerationCarver
// Size: 0x70 (Inherited: 0x00)
struct FLevelGenerationCarver {
	struct FMatrixWithExactSync Transform; // 0x00(0x40)
	struct USTLMeshCarver* MeshCarver; // 0x40(0x08)
	struct UStaticMesh* ConvexCarver; // 0x48(0x08)
	struct UStaticMeshCarver* StaticMeshCarver; // 0x50(0x08)
	float ConvexExpensiveNoise; // 0x58(0x04)
	enum class CarveOptionsCellSize CarveCellSize; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
	struct UTerrainMaterial* TerrainMaterial; // 0x60(0x08)
	enum class ECarveFilterType Filter; // 0x68(0x01)
	bool ToBeDiscarded; // 0x69(0x01)
	char UnknownData_6A[0x6]; // 0x6a(0x06)
};

// ScriptStruct FSD.CustomUsable
// Size: 0x10 (Inherited: 0x00)
struct FCustomUsable {
	struct UUsableComponentBase* Usable; // 0x00(0x08)
	enum class ECustomUsableType TerminationType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct FSD.ClaimableRewardView
// Size: 0x70 (Inherited: 0x00)
struct FClaimableRewardView {
	struct UDialogDataAsset* MissionControlSpeak; // 0x00(0x08)
	SoftClassProperty BackgroundWidgetClass; // 0x08(0x28)
	struct TSoftObjectPtr<struct USoundCue> FanfareAudio; // 0x30(0x28)
	float MoveInRewardsDelay; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FClaimableRewardEntry> RewardDisplays; // 0x60(0x10)
};

// ScriptStruct FSD.ClaimableRewardArray
// Size: 0x10 (Inherited: 0x00)
struct FClaimableRewardArray {
	struct TArray<struct FClaimableRewardEntry> Entries; // 0x00(0x10)
};

// ScriptStruct FSD.ExampleStruct
// Size: 0x04 (Inherited: 0x00)
struct FExampleStruct {
	float Field; // 0x00(0x04)
};

// ScriptStruct FSD.MissionShoutQueueItem
// Size: 0x48 (Inherited: 0x00)
struct FMissionShoutQueueItem {
	struct TSoftObjectPtr<struct USoundBase> AudioPtr; // 0x00(0x28)
	struct FText Text; // 0x28(0x18)
	struct USoundBase* LoadedAudio; // 0x40(0x08)
};

// ScriptStruct FSD.ActiveOutline
// Size: 0x0c (Inherited: 0x00)
struct FActiveOutline {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct FSD.CharacterShouts
// Size: 0xb0 (Inherited: 0x00)
struct FCharacterShouts {
	struct UDialogDataAsset* Attention; // 0x00(0x08)
	struct UDialogDataAsset* Follow; // 0x08(0x08)
	struct UDialogDataAsset* standingDown; // 0x10(0x08)
	struct UDialogDataAsset* Downed; // 0x18(0x08)
	struct UDialogDataAsset* RequestRevive; // 0x20(0x08)
	struct UDialogDataAsset* Revived; // 0x28(0x08)
	struct UDialogDataAsset* Resupply; // 0x30(0x08)
	struct UDialogDataAsset* FriendlyFire; // 0x38(0x08)
	struct UDialogDataAsset* KillCry; // 0x40(0x08)
	struct UDialogDataAsset* Dead; // 0x48(0x08)
	struct UDialogDataAsset* Cheating; // 0x50(0x08)
	struct UDialogDataAsset* ResourceFull; // 0x58(0x08)
	struct UDialogDataAsset* ResourceFullNoDonkey; // 0x60(0x08)
	struct UDialogDataAsset* CallDonkey; // 0x68(0x08)
	struct UDialogDataAsset* Depositing; // 0x70(0x08)
	struct UDialogDataAsset* DepositingNoDonkey; // 0x78(0x08)
	struct UDialogDataAsset* OutOfAmmo; // 0x80(0x08)
	struct UDialogDataAsset* Reloading; // 0x88(0x08)
	struct UDialogDataAsset* CharacterSelected; // 0x90(0x08)
	struct UDialogDataAsset* UpgradeBought; // 0x98(0x08)
	struct UDialogDataAsset* WaitingInDropPod; // 0xa0(0x08)
	struct UDialogDataAsset* Carrying; // 0xa8(0x08)
};

// ScriptStruct FSD.CommunityReward
// Size: 0x10 (Inherited: 0x00)
struct FCommunityReward {
	struct UResourceData* Resource; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.CommunityFactionData
// Size: 0x38 (Inherited: 0x00)
struct FCommunityFactionData {
	bool IsValid; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> Goals; // 0x08(0x10)
	struct TArray<float> Values; // 0x18(0x10)
	struct TArray<int32_t> Members; // 0x28(0x10)
};

// ScriptStruct FSD.CommunityGoalStateData
// Size: 0x10 (Inherited: 0x00)
struct FCommunityGoalStateData {
	bool isGoal; // 0x00(0x01)
	bool isRecruitment; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float TimeLeftSeconds; // 0x04(0x04)
	int32_t CurrentGoalPeriodID; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.CommunityRewardNotification
// Size: 0x40 (Inherited: 0x00)
struct FCommunityRewardNotification {
	struct FText Text; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct FLinearColor IconColor; // 0x20(0x10)
	struct FString ID; // 0x30(0x10)
};

// ScriptStruct FSD.ActionIconMapping
// Size: 0x28 (Inherited: 0x00)
struct FActionIconMapping {
	struct FKey ActionKey; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	bool DoNotTint; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct FSD.PricingTierEntry
// Size: 0x28 (Inherited: 0x08)
struct FPricingTierEntry : FTableRowBase {
	struct FIRandRange CreditCost; // 0x08(0x08)
	struct FIRandRange Material1; // 0x10(0x08)
	struct FIRandRange Material2; // 0x18(0x08)
	struct FIRandRange Material3; // 0x20(0x08)
};

// ScriptStruct FSD.IRandRange
// Size: 0x08 (Inherited: 0x00)
struct FIRandRange {
	int32_t Min; // 0x00(0x04)
	int32_t Max; // 0x04(0x04)
};

// ScriptStruct FSD.CustomKeySetting
// Size: 0x38 (Inherited: 0x00)
struct FCustomKeySetting {
	struct FName SaveID; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
	struct TArray<struct FName> ActionNames; // 0x20(0x10)
	enum class EKeyBindingAxis ActionAxis; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct FSD.DailyDeal
// Size: 0x18 (Inherited: 0x00)
struct FDailyDeal {
	struct UResourceData* Resource; // 0x00(0x08)
	enum class EDealType DealType; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t ResourceAmount; // 0x0c(0x04)
	int32_t Credits; // 0x10(0x04)
	float ChangePercent; // 0x14(0x04)
};

// ScriptStruct FSD.DailyDealSetup
// Size: 0x28 (Inherited: 0x00)
struct FDailyDealSetup {
	struct UResourceData* Resource; // 0x00(0x08)
	enum class EDealType DealType; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FIntPoint UnitsRange; // 0x0c(0x08)
	struct FVector2D DiscountRangePercent; // 0x14(0x08)
	struct FVector2D ExtraValueRangePercent; // 0x1c(0x08)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct FSD.DamageSubsystemItem
// Size: 0x18 (Inherited: 0x00)
struct FDamageSubsystemItem {
	struct UDamageComponent* DamageComponent; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FSD.DanceItem
// Size: 0x10 (Inherited: 0x00)
struct FDanceItem {
	struct UAnimSequence* DanceMove; // 0x00(0x08)
	struct UAnimSequence* DanceMoveWithBeer; // 0x08(0x08)
};

// ScriptStruct FSD.CellNoise
// Size: 0x2c (Inherited: 0x00)
struct FCellNoise {
	int32_t Seed; // 0x00(0x04)
	struct FVector CellSize; // 0x04(0x0c)
	int32_t NumValues; // 0x10(0x04)
	int32_t MinCellValue; // 0x14(0x04)
	int32_t MaxCellValue; // 0x18(0x04)
	char UnknownData_1C[0x10]; // 0x1c(0x10)
};

// ScriptStruct FSD.DebrisCellNoiseParameters
// Size: 0x10 (Inherited: 0x00)
struct FDebrisCellNoiseParameters {
	struct UDebrisCellNoise* Noise; // 0x00(0x08)
	int32_t MinCellValue; // 0x08(0x04)
	int32_t MaxCellValue; // 0x0c(0x04)
};

// ScriptStruct FSD.UDebrisCarveMesh
// Size: 0x10 (Inherited: 0x00)
struct FUDebrisCarveMesh {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	float Probablity; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.DebrisItemActorItem
// Size: 0x10 (Inherited: 0x00)
struct FDebrisItemActorItem {
	struct AActor* Actor; // 0x00(0x08)
	float Probability; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.DebrisStaticMesh
// Size: 0x48 (Inherited: 0x00)
struct FDebrisStaticMesh {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
	enum class EDebrisMeshCollisionProfile CollisionProfile; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float Probablity; // 0x14(0x04)
	struct USoundCue* DestroyedSound; // 0x18(0x08)
	struct UParticleSystem* DestroyedParticles; // 0x20(0x08)
	struct FDecalData Decal; // 0x28(0x18)
	bool Fragile; // 0x40(0x01)
	enum class EDebrisMeshShadows CastShadows; // 0x41(0x01)
	bool Durable; // 0x42(0x01)
	bool SpawnWhenCarving; // 0x43(0x01)
	bool OnlySpawnWhenCarving; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
};

// ScriptStruct FSD.DecalData
// Size: 0x18 (Inherited: 0x00)
struct FDecalData {
	struct UMaterialInterface* DecalMaterial; // 0x00(0x08)
	float DecalSize; // 0x08(0x04)
	float DecalDepth; // 0x0c(0x04)
	float LifeSpan; // 0x10(0x04)
	float FadeDuration; // 0x14(0x04)
};

// ScriptStruct FSD.UDebrisStaticCarveMesh
// Size: 0x10 (Inherited: 0x00)
struct FUDebrisStaticCarveMesh {
	struct UStaticMeshCarver* Mesh; // 0x00(0x08)
	float Probablity; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.DebrisCapsule
// Size: 0x20 (Inherited: 0x00)
struct FDebrisCapsule {
	int32_t ID; // 0x00(0x04)
	struct FVector Start; // 0x04(0x0c)
	struct FVector End; // 0x10(0x0c)
	float Radius; // 0x1c(0x04)
};

// ScriptStruct FSD.DebrisInfluence
// Size: 0x10 (Inherited: 0x00)
struct FDebrisInfluence {
	struct UObject* CaveInfluencer; // 0x00(0x08)
	float Radius; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.DebrisWhenCarving
// Size: 0x30 (Inherited: 0x00)
struct FDebrisWhenCarving {
	char UnknownData_0[0x28]; // 0x00(0x28)
	struct UDebrisInstances* Debris; // 0x28(0x08)
};

// ScriptStruct FSD.CSGRaycastHitInfo
// Size: 0x1c (Inherited: 0x00)
struct FCSGRaycastHitInfo {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
	int32_t Material; // 0x18(0x04)
};

// ScriptStruct FSD.DeepDiveLoaderSequence
// Size: 0x28 (Inherited: 0x00)
struct FDeepDiveLoaderSequence {
	struct TSoftObjectPtr<struct ULevelSequence> LevelSequence; // 0x00(0x28)
};

// ScriptStruct FSD.DeepDiveTemplateItem
// Size: 0x18 (Inherited: 0x00)
struct FDeepDiveTemplateItem {
	struct UMissionTemplate* mission; // 0x00(0x08)
	struct TArray<struct UMissionDuration*> AllowedDurations; // 0x08(0x10)
};

// ScriptStruct FSD.DeepDiveRewardItem
// Size: 0x10 (Inherited: 0x00)
struct FDeepDiveRewardItem {
	struct USchematic* Schematic; // 0x00(0x08)
	int32_t Stage; // 0x08(0x04)
	bool WasAlreadyGiven; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct FSD.HandleRotationOptions
// Size: 0x01 (Inherited: 0x00)
struct FHandleRotationOptions {
	bool HandlePitch; // 0x00(0x01)
};

// ScriptStruct FSD.DeepRepPath
// Size: 0xd0 (Inherited: 0x00)
struct FDeepRepPath {
	struct FVector PathBase; // 0x00(0x0c)
	char PathLength; // 0x0c(0x01)
	enum class EDeepMovementState State; // 0x0d(0x01)
	char StateBits; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
	struct FVector PathOffsets[0x10]; // 0x10(0xc0)
};

// ScriptStruct FSD.TerrainLateJoinIteration
// Size: 0x2c (Inherited: 0x00)
struct FTerrainLateJoinIteration {
	int32_t DrillsIndex; // 0x00(0x04)
	int32_t MeltsIndex; // 0x04(0x04)
	int32_t PickAxeIndex; // 0x08(0x04)
	int32_t FloatingIndex; // 0x0c(0x04)
	int32_t ColliderCarvesIndex; // 0x10(0x04)
	int32_t MeshCarvesIndex; // 0x14(0x04)
	int32_t ExplosionsIndex; // 0x18(0x04)
	int32_t SplineIndex; // 0x1c(0x04)
	int32_t LateJoinIndex; // 0x20(0x04)
	int32_t DebrisIndex; // 0x24(0x04)
	int32_t ChunkVisibilityIndex; // 0x28(0x04)
};

// ScriptStruct FSD.TerrainLateJoinData
// Size: 0xa8 (Inherited: 0x00)
struct FTerrainLateJoinData {
	struct TArray<struct FGrenadeExplodeOperationData> explosions; // 0x00(0x10)
	struct TArray<struct FCarveWithColliderOperationData> colliderCarves; // 0x10(0x10)
	struct TArray<struct FCarveWithSTLMeshOperationData> meshCarves; // 0x20(0x10)
	struct TArray<struct FPickaxeDigOperationData> pickAxe; // 0x30(0x10)
	struct TArray<struct FRemoveFloatingIslandOperationData> RemoveFloating; // 0x40(0x10)
	struct TArray<struct FDrillOperationData> drills; // 0x50(0x10)
	struct TArray<struct FMeltOperationData> melts; // 0x60(0x10)
	struct TArray<struct FSplineSegmentCarveOperationData> splines; // 0x70(0x10)
	struct TArray<int32_t> DebrisInstanceComponentPairs; // 0x80(0x10)
	struct TArray<uint32_t> visibleChunks; // 0x90(0x10)
	int32_t OperationCount; // 0xa0(0x04)
	char UnknownData_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct FSD.DialogStruct
// Size: 0x50 (Inherited: 0x00)
struct FDialogStruct {
	bool Enabled; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FText Text; // 0x08(0x18)
	struct TSoftObjectPtr<struct USoundBase> Audio; // 0x20(0x28)
	enum class EDialogRestriction Restriction; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct FSD.VeteranComposition
// Size: 0x20 (Inherited: 0x00)
struct FVeteranComposition {
	struct FRandFloatInterval Normal; // 0x00(0x10)
	struct FRandFloatInterval Large; // 0x10(0x10)
};

// ScriptStruct FSD.RandFloatInterval
// Size: 0x10 (Inherited: 0x00)
struct FRandFloatInterval {
	struct TArray<struct FRandFloatIntervalItem> Intervals; // 0x00(0x10)
};

// ScriptStruct FSD.RandFloatIntervalItem
// Size: 0x0c (Inherited: 0x00)
struct FRandFloatIntervalItem {
	float Weight; // 0x00(0x04)
	struct FRandRange Range; // 0x04(0x08)
};

// ScriptStruct FSD.DiscordFSDRichPresence
// Size: 0x80 (Inherited: 0x00)
struct FDiscordFSDRichPresence {
	struct FString State; // 0x00(0x10)
	struct FString details; // 0x10(0x10)
	struct FString matchSecret; // 0x20(0x10)
	struct FString joinSecret; // 0x30(0x10)
	struct FString partyId; // 0x40(0x10)
	struct FString smallImageText; // 0x50(0x10)
	struct FString LargeImageText; // 0x60(0x10)
	int32_t startTimestamp; // 0x70(0x04)
	int32_t partySize; // 0x74(0x04)
	enum class EDiscordBiomeType BiomeType; // 0x78(0x01)
	enum class EDiscordMissionType MissionType; // 0x79(0x01)
	bool bIsPureSolo; // 0x7a(0x01)
	char UnknownData_7B[0x5]; // 0x7b(0x05)
};

// ScriptStruct FSD.DiscordEoMData
// Size: 0x20 (Inherited: 0x00)
struct FDiscordEoMData {
	struct FString nick; // 0x00(0x10)
	struct FString userId; // 0x10(0x10)
};

// ScriptStruct FSD.DiscordServerInviteData
// Size: 0x78 (Inherited: 0x00)
struct FDiscordServerInviteData {
	struct FString code; // 0x00(0x10)
	struct FString serverID; // 0x10(0x10)
	struct FString serverDescription; // 0x20(0x10)
	struct FString serverName; // 0x30(0x10)
	int32_t presenceCount; // 0x40(0x04)
	int32_t memberCount; // 0x44(0x04)
	struct FString iconKey; // 0x48(0x10)
	struct FString bannerKey; // 0x58(0x10)
	struct FString splashKey; // 0x68(0x10)
};

// ScriptStruct FSD.DiscordRewardNotification
// Size: 0x40 (Inherited: 0x00)
struct FDiscordRewardNotification {
	struct FText Text; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct FLinearColor IconColor; // 0x20(0x10)
	struct FString ID; // 0x30(0x10)
};

// ScriptStruct FSD.DoubleDrillDamageItem
// Size: 0x38 (Inherited: 0x00)
struct FDoubleDrillDamageItem {
	struct FWeakObjectPtr<struct UPrimitiveComponent> Target; // 0x00(0x08)
	struct FVector_NetQuantize Location; // 0x08(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x14(0x0c)
	struct UFSDPhysicalMaterial* Material; // 0x20(0x08)
	struct FName BoneName; // 0x28(0x08)
	char BoneIndex; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct FSD.DeathIntroSettings
// Size: 0x24 (Inherited: 0x00)
struct FDeathIntroSettings {
	char UnknownData_0[0x4]; // 0x00(0x04)
	float FirstPersonDuration; // 0x04(0x04)
	float FadeToBlackDelay; // 0x08(0x04)
	float FadeToBlackDuration; // 0x0c(0x04)
	float FadeFromBlackDelay; // 0x10(0x04)
	float FadeFromBlackDuration; // 0x14(0x04)
	float ZoomOutDuration; // 0x18(0x04)
	float ZoomOutStartDistance; // 0x1c(0x04)
	char UnknownData_20[0x4]; // 0x20(0x04)
};

// ScriptStruct FSD.BarleySpawnItem
// Size: 0x10 (Inherited: 0x00)
struct FBarleySpawnItem {
	struct UResourceData* Resource; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.EliminationDescriptors
// Size: 0x10 (Inherited: 0x00)
struct FEliminationDescriptors {
	struct TArray<struct UEnemyDescriptor*> Descriptors; // 0x00(0x10)
};

// ScriptStruct FSD.EliminationTarget
// Size: 0x10 (Inherited: 0x00)
struct FEliminationTarget {
	struct TArray<struct AFSDPawn*> Targets; // 0x00(0x10)
};

// ScriptStruct FSD.EncounterManagerItem
// Size: 0x40 (Inherited: 0x00)
struct FEncounterManagerItem {
	struct TArray<struct FManagedEncounterItem> ManagedEcnounterItems; // 0x00(0x10)
	struct TArray<struct FPrePlacedEncounterItem> PrePlacedEncounterItems; // 0x10(0x10)
	int32_t ID; // 0x20(0x04)
	bool IsRoom; // 0x24(0x01)
	char UnknownData_25[0x7]; // 0x25(0x07)
	struct FDelegate Callback; // 0x2c(0x10)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct FSD.PrePlacedEncounterItem
// Size: 0x50 (Inherited: 0x00)
struct FPrePlacedEncounterItem {
	struct UEnemyDescriptor* descriptor; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform Location; // 0x10(0x30)
	struct AEncounterActor* EncounterActor; // 0x40(0x08)
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct FSD.ManagedEncounterItem
// Size: 0x10 (Inherited: 0x00)
struct FManagedEncounterItem {
	struct UEnemyDescriptor* descriptor; // 0x00(0x08)
	int32_t amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.EncounterSpecialItem
// Size: 0x10 (Inherited: 0x00)
struct FEncounterSpecialItem {
	struct UEnemyDescriptor* enemy; // 0x00(0x08)
	float BaseChance; // 0x08(0x04)
	bool CanSpawnInDeepDive; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct FSD.EncounterRareCritterItem
// Size: 0x10 (Inherited: 0x00)
struct FEncounterRareCritterItem {
	struct URareCritterDescriptor* Critter; // 0x00(0x08)
	float Chance; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.GliderAnimSync
// Size: 0x20 (Inherited: 0x00)
struct FGliderAnimSync {
	float Time; // 0x00(0x04)
	float AnimAlphaSync; // 0x04(0x04)
	struct FVector VelocityPercent; // 0x08(0x0c)
	bool DownUpBlendBool; // 0x14(0x01)
	bool RightLeftBlendBool; // 0x15(0x01)
	char UnknownData_16[0x2]; // 0x16(0x02)
	float VerticalAddBlend; // 0x18(0x04)
	float HorizontalAddBlend; // 0x1c(0x04)
};

// ScriptStruct FSD.TestAnimInstanceProxy
// Size: 0x700 (Inherited: 0x6e0)
struct FTestAnimInstanceProxy : FAnimInstanceProxy {
	bool IsAlive; // 0x6e0(0x01)
	char UnknownData_6E1[0x3]; // 0x6e1(0x03)
	float RandomStartPosition; // 0x6e4(0x04)
	float Speed; // 0x6e8(0x04)
	bool IsMoving; // 0x6ec(0x01)
	char UnknownData_6ED[0x3]; // 0x6ed(0x03)
	float WalkCyclePlayRate; // 0x6f0(0x04)
	char UnknownData_6F4[0xc]; // 0x6f4(0x0c)
};

// ScriptStruct FSD.ControlEnemyState
// Size: 0x60 (Inherited: 0x00)
struct FControlEnemyState {
	struct ADeepPathfinderCharacter* ControlledEnemy; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform InitialTargetTransform; // 0x10(0x30)
	float InitialTargetBlendTotalTime; // 0x40(0x04)
	struct FVector InitialCharacterVelocity; // 0x44(0x0c)
	struct FVector InitialEnemyVelocity; // 0x50(0x0c)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct FSD.EnemyAttackDescription
// Size: 0x20 (Inherited: 0x00)
struct FEnemyAttackDescription {
	struct FText Name; // 0x00(0x18)
	enum class EEnemyAttackType Range; // 0x18(0x01)
	enum class EDamageType DamageType; // 0x19(0x01)
	char UnknownData_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct FSD.EnemyMinersManualStats
// Size: 0x0c (Inherited: 0x00)
struct FEnemyMinersManualStats {
	int32_t Health; // 0x00(0x04)
	int32_t Damage; // 0x04(0x04)
	int32_t Speed; // 0x08(0x04)
};

// ScriptStruct FSD.EnemyGroupDescriptorItem
// Size: 0x08 (Inherited: 0x00)
struct FEnemyGroupDescriptorItem {
	struct UEnemyDescriptor* EnemyDescriptor; // 0x00(0x08)
};

// ScriptStruct FSD.EnemyGroupDescriptorSpawnItem
// Size: 0x10 (Inherited: 0x00)
struct FEnemyGroupDescriptorSpawnItem {
	struct UEnemyDescriptor* enemy; // 0x00(0x08)
	int32_t count; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.EnemyDebris
// Size: 0x18 (Inherited: 0x00)
struct FEnemyDebris {
	float InfluenceRange; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct UDebrisBase*> Debris; // 0x08(0x10)
};

// ScriptStruct FSD.EnemySpawnParamsEntry
// Size: 0x30 (Inherited: 0x08)
struct FEnemySpawnParamsEntry : FTableRowBase {
	struct FString ItemName; // 0x08(0x10)
	float DifficultyRating; // 0x18(0x04)
	int32_t MinSpawnCount; // 0x1c(0x04)
	int32_t MaxSpawnCount; // 0x20(0x04)
	float Rarity; // 0x24(0x04)
	float SpawnAmountModifier; // 0x28(0x04)
	int32_t RequiredMainCampaignProgress; // 0x2c(0x04)
};

// ScriptStruct FSD.SpawnRarityItem
// Size: 0x08 (Inherited: 0x00)
struct FSpawnRarityItem {
	float Duration; // 0x00(0x04)
	float Rarity; // 0x04(0x04)
};

// ScriptStruct FSD.SpawnEffectsArray
// Size: 0x120 (Inherited: 0x108)
struct FSpawnEffectsArray : FFastArraySerializer {
	struct TArray<struct FSpawnEffectItem> Items; // 0x108(0x10)
	char UnknownData_118[0x8]; // 0x118(0x08)
};

// ScriptStruct FSD.SpawnEffectItem
// Size: 0x3c (Inherited: 0x0c)
struct FSpawnEffectItem : FFastArraySerializerItem {
	enum class ECreatureSize CreatureSize; // 0x0c(0x04)
	struct FVector_NetQuantize Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	char UnknownData_28[0x14]; // 0x28(0x14)
};

// ScriptStruct FSD.SpawnQueueItem
// Size: 0x80 (Inherited: 0x00)
struct FSpawnQueueItem {
	SoftClassProperty EnemyClass; // 0x00(0x28)
	struct UEnemyDescriptor* enemy; // 0x28(0x08)
	struct FDelegate Callback; // 0x30(0x10)
	char UnknownData_40[0x40]; // 0x40(0x40)
};

// ScriptStruct FSD.SpawnRarityModifierItem
// Size: 0x08 (Inherited: 0x00)
struct FSpawnRarityModifierItem {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FSD.EnemySpawnItem
// Size: 0x10 (Inherited: 0x00)
struct FEnemySpawnItem {
	struct UEnemyDescriptor* enemy; // 0x00(0x08)
	int32_t count; // 0x08(0x04)
	float VeteranComposition; // 0x0c(0x04)
};

// ScriptStruct FSD.MUSTBEHERETOCOMPILE
// Size: 0x01 (Inherited: 0x00)
struct FMUSTBEHERETOCOMPILE {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FSD.WaveEntry
// Size: 0x38 (Inherited: 0x00)
struct FWaveEntry {
	struct UEnemyWaveController* WaveControllerLoaded; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	SoftClassProperty WaveController; // 0x10(0x28)
};

// ScriptStruct FSD.EscortMulePath
// Size: 0x18 (Inherited: 0x00)
struct FEscortMulePath {
	struct TArray<struct FVector> Path; // 0x00(0x10)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FSD.EscortMuleMovementState
// Size: 0x50 (Inherited: 0x00)
struct FEscortMuleMovementState {
	struct FTransform TargetTransform; // 0x00(0x30)
	struct FVector Velocity; // 0x30(0x0c)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FQuat AngularVelocity; // 0x40(0x10)
};

// ScriptStruct FSD.EscortMuleExtractorSlot
// Size: 0x20 (Inherited: 0x00)
struct FEscortMuleExtractorSlot {
	enum class EEscortExtractorState ExtractorState; // 0x00(0x01)
	enum class EEscortExtractorState LastState; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct USceneComponent* AttachPoint; // 0x08(0x08)
	struct UInstantUsable* Usable; // 0x10(0x08)
	struct UWidgetComponent* Widget; // 0x18(0x08)
};

// ScriptStruct FSD.SmartSpawnEntry
// Size: 0x18 (Inherited: 0x00)
struct FSmartSpawnEntry {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct FSD.FacilityGeneratorEnounter
// Size: 0x30 (Inherited: 0x00)
struct FFacilityGeneratorEnounter {
	struct TArray<struct UEnemyDescriptor*> Enemies; // 0x00(0x10)
	float Difficulty; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FRandInterval Diversity; // 0x18(0x10)
	struct FIRandRange EncountersPerRoom; // 0x28(0x08)
};

// ScriptStruct FSD.RandInterval
// Size: 0x10 (Inherited: 0x00)
struct FRandInterval {
	struct TArray<struct FRandIntervalItem> Intervals; // 0x00(0x10)
};

// ScriptStruct FSD.RandIntervalItem
// Size: 0x0c (Inherited: 0x00)
struct FRandIntervalItem {
	float Weight; // 0x00(0x04)
	struct FIRandRange Range; // 0x04(0x08)
};

// ScriptStruct FSD.FakeMoveState
// Size: 0x24 (Inherited: 0x00)
struct FFakeMoveState {
	struct FVector Pos1; // 0x00(0x0c)
	struct FVector Pos2; // 0x0c(0x0c)
	struct FVector Vel; // 0x18(0x0c)
};

// ScriptStruct FSD.FakeMoverState
// Size: 0x60 (Inherited: 0x00)
struct FFakeMoverState {
	float TickRate; // 0x00(0x04)
	float TickTime; // 0x04(0x04)
	struct FVector PrevPos; // 0x08(0x0c)
	struct FVector NextPos; // 0x14(0x0c)
	struct FVector PrevSurfaceNormal; // 0x20(0x0c)
	struct FVector NextSurfaceNormal; // 0x2c(0x0c)
	float AccumulatedTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct AActor* Target; // 0x40(0x08)
	struct FVector Velocity; // 0x48(0x0c)
	bool NearSurface; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	float SignedDistToSurface; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct FSD.FakeMoverTarget
// Size: 0x1c (Inherited: 0x00)
struct FFakeMoverTarget {
	float InfluenceDistance; // 0x00(0x04)
	float TargetDistance; // 0x04(0x04)
	float GetCloserAirAcceleration; // 0x08(0x04)
	float GetAwayAirAcceleration; // 0x0c(0x04)
	float GetCloserGroundAcceleration; // 0x10(0x04)
	float GetAwayGroundAcceleration; // 0x14(0x04)
	float MinDistance; // 0x18(0x04)
};

// ScriptStruct FSD.FakeMoverPropulsion
// Size: 0x14 (Inherited: 0x00)
struct FFakeMoverPropulsion {
	float Speed; // 0x00(0x04)
	float AirAcceleration; // 0x04(0x04)
	float AirDeceleration; // 0x08(0x04)
	float GroundAcceleration; // 0x0c(0x04)
	float GroundDeceleration; // 0x10(0x04)
};

// ScriptStruct FSD.FlareMeta
// Size: 0x24 (Inherited: 0x00)
struct FFlareMeta {
	struct FWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	float Inhibit; // 0x08(0x04)
	float Radius; // 0x0c(0x04)
	float InvRadius; // 0x10(0x04)
	struct FVector Pos; // 0x14(0x0c)
	bool Moving; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
};

// ScriptStruct FSD.FloatPerkEffect
// Size: 0x30 (Inherited: 0x00)
struct FFloatPerkEffect {
	struct UFloatPerkActivation* PerkActivation; // 0x00(0x08)
	struct FText FormattedDescription; // 0x08(0x18)
	struct TArray<struct FFloatPerkRankValue> RankValues; // 0x20(0x10)
};

// ScriptStruct FSD.FloatPerkRankValue
// Size: 0x08 (Inherited: 0x00)
struct FFloatPerkRankValue {
	int32_t RankIndex; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct FSD.FloatPerkRank
// Size: 0x08 (Inherited: 0x00)
struct FFloatPerkRank {
	int32_t Tier; // 0x00(0x04)
	int32_t Cost; // 0x04(0x04)
};

// ScriptStruct FSD.PathObstacle
// Size: 0x10 (Inherited: 0x00)
struct FPathObstacle {
	struct FVector Position; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
};

// ScriptStruct FSD.LayeredNoise
// Size: 0x10 (Inherited: 0x00)
struct FLayeredNoise {
	struct UFloodFillSettings* Noise; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.FormationDataItem
// Size: 0x10 (Inherited: 0x00)
struct FFormationDataItem {
	struct FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct FSD.Formation
// Size: 0x20 (Inherited: 0x00)
struct FFormation {
	char UnknownData_0[0x18]; // 0x00(0x18)
	struct UFormationData* FormationData; // 0x18(0x08)
};

// ScriptStruct FSD.FormationID
// Size: 0x08 (Inherited: 0x00)
struct FFormationID {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FSD.DamageData
// Size: 0x18 (Inherited: 0x00)
struct FDamageData {
	struct UFSDPhysicalMaterial* Bodypart; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FSD.DelegateStruct
// Size: 0x01 (Inherited: 0x00)
struct FDelegateStruct {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FSD.GeneratedMissionGroup
// Size: 0x10 (Inherited: 0x00)
struct FGeneratedMissionGroup {
	struct TArray<struct UGeneratedMission*> AvailableMissions; // 0x00(0x10)
};

// ScriptStruct FSD.FSDTagsRoot
// Size: 0x18 (Inherited: 0x00)
struct FFSDTagsRoot {
	struct FFSDTagsAttitude Attitude; // 0x00(0x18)
};

// ScriptStruct FSD.FSDTagsAttitude
// Size: 0x18 (Inherited: 0x00)
struct FFSDTagsAttitude {
	struct FGameplayTag Friendly; // 0x00(0x08)
	struct FGameplayTag Neutral; // 0x08(0x08)
	struct FGameplayTag Hostile; // 0x10(0x08)
};

// ScriptStruct FSD.GeneratedMissionSeed
// Size: 0x58 (Inherited: 0x00)
struct FGeneratedMissionSeed {
	int32_t Seed; // 0x00(0x04)
	int32_t GlobalSeed; // 0x04(0x04)
	struct UBiome* Biome; // 0x08(0x08)
	struct UMissionTemplate* Template; // 0x10(0x08)
	struct UMissionComplexity* ComplexityLimit; // 0x18(0x08)
	struct UMissionDuration* DurationLimit; // 0x20(0x08)
	struct UMissionMutator* Mutator; // 0x28(0x08)
	struct TArray<struct UMissionWarning*> Warnings; // 0x30(0x10)
	struct TArray<struct UFSDEvent*> ActiveEvents; // 0x40(0x10)
	enum class EMissionStructure MissionStructure; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// ScriptStruct FSD.ReplicatedObjectives
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedObjectives {
	bool HasReplicated; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct UObjective*> Objectives; // 0x08(0x10)
};

// ScriptStruct FSD.InputDisplay
// Size: 0x40 (Inherited: 0x00)
struct FInputDisplay {
	enum class EInputInteraction Interaction; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FText InputText; // 0x08(0x18)
	struct FLinearColor TextTint; // 0x20(0x10)
	struct UTexture2D* Icon; // 0x30(0x08)
	bool IconTintable; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct FSD.ItemRefundListItem
// Size: 0x68 (Inherited: 0x00)
struct FItemRefundListItem {
	struct FString Name; // 0x00(0x10)
	struct TMap<struct FGuid, struct FItemRefundResourceItem> Resources; // 0x10(0x50)
	float CreditCost; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// ScriptStruct FSD.ItemRefundResourceItem
// Size: 0x18 (Inherited: 0x00)
struct FItemRefundResourceItem {
	struct FString Name; // 0x00(0x10)
	float amount; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FSD.SplineSegment
// Size: 0x30 (Inherited: 0x00)
struct FSplineSegment {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector StartTangent; // 0x0c(0x0c)
	struct FVector EndLocation; // 0x18(0x0c)
	struct FVector EndTangent; // 0x24(0x0c)
};

// ScriptStruct FSD.NewPlayerMutator
// Size: 0x18 (Inherited: 0x00)
struct FNewPlayerMutator {
	int32_t MinCampaignProgress; // 0x00(0x04)
	int32_t MaxCampaignProgress; // 0x04(0x04)
	struct TArray<struct UMutator*> Mutators; // 0x08(0x10)
};

// ScriptStruct FSD.WidgetMover
// Size: 0x28 (Inherited: 0x00)
struct FWidgetMover {
	struct FWeakObjectPtr<struct UWidget> Widget; // 0x00(0x08)
	char UnknownData_8[0x20]; // 0x08(0x20)
};

// ScriptStruct FSD.CustomCounter
// Size: 0x28 (Inherited: 0x00)
struct FCustomCounter {
	struct FDelegate OnCount; // 0x00(0x10)
	struct FWeakObjectPtr<struct UObject> Owner; // 0x10(0x08)
	char UnknownData_18[0x10]; // 0x18(0x10)
};

// ScriptStruct FSD.WidgetTextCounter
// Size: 0x1c (Inherited: 0x00)
struct FWidgetTextCounter {
	struct FWeakObjectPtr<struct UTextBlock> Widget; // 0x00(0x08)
	char UnknownData_8[0x14]; // 0x08(0x14)
};

// ScriptStruct FSD.WidgetFade
// Size: 0x1c (Inherited: 0x00)
struct FWidgetFade {
	struct FWeakObjectPtr<struct UUserWidget> Widget; // 0x00(0x08)
	char UnknownData_8[0x14]; // 0x08(0x14)
};

// ScriptStruct FSD.WidgetPing
// Size: 0x20 (Inherited: 0x00)
struct FWidgetPing {
	struct FWeakObjectPtr<struct UWidget> Widget; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct FSD.TesterName
// Size: 0x28 (Inherited: 0x08)
struct FTesterName : FTableRowBase {
	struct FString SteamID; // 0x08(0x10)
	struct FString SteamProfileName; // 0x18(0x10)
};

// ScriptStruct FSD.TipsTableRow
// Size: 0x70 (Inherited: 0x08)
struct FTipsTableRow : FTableRowBase {
	struct FText Header; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FText InputText; // 0x38(0x18)
	struct FText InputTextControllerOverride; // 0x50(0x18)
	float TimeToDisplay; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct FSD.GVisibilityGroups
// Size: 0x58 (Inherited: 0x00)
struct FGVisibilityGroups {
	struct TSet<struct UHUDVisibilityGroup*> AllGroups; // 0x00(0x50)
	struct UHUDVisibilityGroup* EnemyHealth; // 0x50(0x08)
};

// ScriptStruct FSD.GDItemCategoryIDs
// Size: 0x38 (Inherited: 0x00)
struct FGDItemCategoryIDs {
	struct UCategoryID* OverclockID; // 0x00(0x08)
	struct UCategoryID* ItemSkinID; // 0x08(0x08)
	struct UCategoryID* VanityID; // 0x10(0x08)
	struct UCategoryID* PickaxePartID; // 0x18(0x08)
	struct UCategoryID* WeaponID; // 0x20(0x08)
	struct UCategoryID* CraftingID; // 0x28(0x08)
	struct UCategoryID* ForgeID; // 0x30(0x08)
};

// ScriptStruct FSD.GDPerks
// Size: 0x90 (Inherited: 0x00)
struct FGDPerks {
	struct TArray<struct UPerkAsset*> PerkAssets; // 0x00(0x10)
	struct TArray<int32_t> RequiredClaimsPerTier; // 0x10(0x10)
	struct UFloatPerkAsset* IronWill; // 0x20(0x08)
	struct UFloatPerkAsset* DashPerk; // 0x28(0x08)
	struct UFloatPerkAsset* MarathonPerk; // 0x30(0x08)
	struct UFloatPerkAsset* ShieldLink; // 0x38(0x08)
	struct UFloatPerkAsset* Bezerk; // 0x40(0x08)
	struct UFloatPerkAsset* JumpBoots; // 0x48(0x08)
	struct UFloatPerkAsset* ImpactCompensators; // 0x50(0x08)
	struct UFloatPerkAsset* BeastMaster; // 0x58(0x08)
	struct UFloatPerkAsset* DownedBomb; // 0x60(0x08)
	struct UFloatPerkAsset* FieldMedic; // 0x68(0x08)
	struct UFloatPerkAsset* HeightenedSenses; // 0x70(0x08)
	struct UFloatPerkAsset* HoverBoots; // 0x78(0x08)
	struct UFloatPerkAsset* ActivePerkSlots; // 0x80(0x08)
	struct UFloatPerkAsset* PassivePerkSlots; // 0x88(0x08)
};

// ScriptStruct FSD.GDPlayerAndCharacterProgression
// Size: 0xa0 (Inherited: 0x00)
struct FGDPlayerAndCharacterProgression {
	struct TArray<SoftClassProperty> RankedHeroClasses; // 0x00(0x10)
	struct TArray<SoftClassProperty> TestHeroClasses; // 0x10(0x10)
	struct TArray<struct APlayerCharacter*> LoadedClasses; // 0x20(0x10)
	struct TArray<struct FText> PlayerRankNames; // 0x30(0x10)
	struct TArray<int32_t> CharacterXPLevels; // 0x40(0x10)
	struct TMap<struct FGuid, struct UPlayerCharacterID*> PlayerCharacterIDs; // 0x50(0x50)
};

// ScriptStruct FSD.GDMilestones
// Size: 0x10 (Inherited: 0x00)
struct FGDMilestones {
	struct TArray<struct UMilestoneAsset*> Milestones; // 0x00(0x10)
};

// ScriptStruct FSD.GDGameStatsTracking
// Size: 0x20 (Inherited: 0x00)
struct FGDGameStatsTracking {
	struct FGameplayTagContainer TotalEnemyKillsFilter; // 0x00(0x20)
};

// ScriptStruct FSD.GDTerrainTypes
// Size: 0x10 (Inherited: 0x00)
struct FGDTerrainTypes {
	struct UTerrainType* Rock; // 0x00(0x08)
	struct UTerrainType* Dirt; // 0x08(0x08)
};

// ScriptStruct FSD.GDDifficulty
// Size: 0x10 (Inherited: 0x00)
struct FGDDifficulty {
	struct TArray<struct UDifficultySetting*> DifficultySettings; // 0x00(0x10)
};

// ScriptStruct FSD.GDResources
// Size: 0xe0 (Inherited: 0x00)
struct FGDResources {
	struct UResourceData* CreditsResource; // 0x00(0x08)
	struct UResourceData* MOMResource; // 0x08(0x08)
	struct UResourceData* GoldResource; // 0x10(0x08)
	struct UResourceData* NitraResource; // 0x18(0x08)
	struct UResourceData* HollomiteResource; // 0x20(0x08)
	struct UResourceData* MagniteResource; // 0x28(0x08)
	struct UResourceData* NeromiteResource; // 0x30(0x08)
	struct UResourceData* QuantriteResource; // 0x38(0x08)
	struct UResourceData* UmaniteResource; // 0x40(0x08)
	struct UResourceData* CropaniteResource; // 0x48(0x08)
	struct UResourceData* DystrumResource; // 0x50(0x08)
	struct UResourceData* IronResource; // 0x58(0x08)
	struct UResourceData* EnorResource; // 0x60(0x08)
	struct UResourceData* BismorResource; // 0x68(0x08)
	struct UResourceData* OilShaleResource; // 0x70(0x08)
	struct UResourceData* Barly1; // 0x78(0x08)
	struct UResourceData* Barly2; // 0x80(0x08)
	struct UResourceData* Barly3; // 0x88(0x08)
	struct UResourceData* Barly4; // 0x90(0x08)
	struct UGemResourceData* JadizResource; // 0x98(0x08)
	struct UGemResourceData* BittergemResource; // 0xa0(0x08)
	struct UGemResourceData* MotherlodeGemResource; // 0xa8(0x08)
	struct UResourceData* RedSugarResource; // 0xb0(0x08)
	struct UResourceData* BlankSchematics; // 0xb8(0x08)
	struct TArray<struct UResourceData*> CraftingResources; // 0xc0(0x10)
	struct TArray<struct UResourceData*> AllResources; // 0xd0(0x10)
};

// ScriptStruct FSD.GDCharacterRetirement
// Size: 0xc0 (Inherited: 0x00)
struct FGDCharacterRetirement {
	struct TMap<struct UPlayerCharacterID*, struct UCampaign*> Campaigns; // 0x00(0x50)
	struct TMap<struct UPlayerCharacterID*, struct FRetirementCostItem> RetirementCost; // 0x50(0x50)
	struct TArray<float> CreditsCostMultipliers; // 0xa0(0x10)
	struct TArray<float> ResourceCostMultipliers; // 0xb0(0x10)
};

// ScriptStruct FSD.RetirementCostItem
// Size: 0x50 (Inherited: 0x00)
struct FRetirementCostItem {
	struct TMap<struct UResourceData*, int32_t> RetirementCost; // 0x00(0x50)
};

// ScriptStruct FSD.UpgradeCostItem
// Size: 0x10 (Inherited: 0x00)
struct FUpgradeCostItem {
	struct TArray<int32_t> Amounts; // 0x00(0x10)
};

// ScriptStruct FSD.GDStats
// Size: 0x128 (Inherited: 0x00)
struct FGDStats {
	struct UPawnStat* MaxAmmo; // 0x00(0x08)
	struct UPawnStat* MaxShields; // 0x08(0x08)
	struct UPawnStat* ShieldRegenerationRate; // 0x10(0x08)
	struct UPawnStat* MaxHealth; // 0x18(0x08)
	struct UPawnStat* DamageResistance; // 0x20(0x08)
	struct UPawnStat* FireResistance; // 0x28(0x08)
	struct UPawnStat* ColdResistance; // 0x30(0x08)
	struct UPawnStat* MeleeAttackDamage; // 0x38(0x08)
	struct UPawnStat* MovementSpeed; // 0x40(0x08)
	struct UPawnStat* SprintSpeed; // 0x48(0x08)
	struct UPawnStat* CarryingSpeedModifier; // 0x50(0x08)
	struct UPawnStat* ReviveSpeed; // 0x58(0x08)
	struct UPawnStat* DepositSpeed; // 0x60(0x08)
	struct UPawnStat* RessuplySpeed; // 0x68(0x08)
	struct UPawnStat* RedSugarHeal; // 0x70(0x08)
	struct UPawnStat* CarryingCapacity; // 0x78(0x08)
	struct UPawnStat* ZiplineSpeed; // 0x80(0x08)
	struct UPawnStat* ZiplineDownwardsBoost; // 0x88(0x08)
	struct UPawnStat* SlideDownIce; // 0x90(0x08)
	struct UPawnStat* FriendlyFire; // 0x98(0x08)
	struct UPawnStat* DamageFromPlayers; // 0xa0(0x08)
	struct UPawnStat* DamageBonus; // 0xa8(0x08)
	struct UPawnStat* FlareThrowingStrength; // 0xb0(0x08)
	struct UPawnStat* CaveLeechSense; // 0xb8(0x08)
	struct UPawnStat* MorkiteMining; // 0xc0(0x08)
	struct UPawnStat* GoldMining; // 0xc8(0x08)
	struct UPawnStat* RockMiningStrength; // 0xd0(0x08)
	struct UPawnStat* DirtMiningStrength; // 0xd8(0x08)
	struct UPawnStat* ResourceMiningStrength; // 0xe0(0x08)
	struct UPawnStat* PowerAttackCooldownRate; // 0xe8(0x08)
	struct UPawnStat* ImpactCompensation; // 0xf0(0x08)
	struct UPawnStat* MovementSpeedPenalty; // 0xf8(0x08)
	struct UPawnStat* MovementSpeedPenaltyReduction; // 0x100(0x08)
	struct UPawnStat* MovementSpeedEnvironmentalPenalty; // 0x108(0x08)
	struct UPawnStat* MovementSpeedEnvironmentalPenaltyReduction; // 0x110(0x08)
	struct UPawnStat* CarriableThrowing; // 0x118(0x08)
	struct UPawnStat* HoverBootsDuration; // 0x120(0x08)
};

// ScriptStruct FSD.GDDamageClasses
// Size: 0x40 (Inherited: 0x00)
struct FGDDamageClasses {
	struct UDamageClass* Falling; // 0x00(0x08)
	struct UDamageClass* Fire; // 0x08(0x08)
	struct UDamageClass* Heat; // 0x10(0x08)
	struct UDamageClass* Physical; // 0x18(0x08)
	struct UDamageClass* Kinetic; // 0x20(0x08)
	struct UDamageClass* Explosive; // 0x28(0x08)
	struct UDamageClass* Cold; // 0x30(0x08)
	struct UDamageClass* Ice; // 0x38(0x08)
};

// ScriptStruct FSD.GDAudio
// Size: 0x50 (Inherited: 0x00)
struct FGDAudio {
	struct TSoftObjectPtr<struct USoundAttenuation> FirstPersonHitscanAttenuationOverride; // 0x00(0x28)
	struct AFSDReverbVolume* ReverbActor; // 0x28(0x08)
	struct UDynamicReverbComponent* DynamicReverbClass; // 0x30(0x08)
	float SmallCaveRadius; // 0x38(0x04)
	float MediumCaveRadius; // 0x3c(0x04)
	float LargeCaveRadius; // 0x40(0x04)
	float FirstPersonPriority; // 0x44(0x04)
	float ThirdPersonPriority; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct FSD.ResourcePouchItem
// Size: 0x10 (Inherited: 0x00)
struct FResourcePouchItem {
	struct UResourceData* Resource; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct FSD.TrackPositionList
// Size: 0x38 (Inherited: 0x00)
struct FTrackPositionList {
	struct FName TrackName; // 0x00(0x08)
	struct TArray<struct FVector> Positions; // 0x08(0x10)
	struct TArray<struct FWeakObjectPtr<struct UGemTracker>> Trackers; // 0x18(0x10)
	struct TArray<struct FWeakObjectPtr<struct UMaterialInstanceDynamic>> DynamicMaterials; // 0x28(0x10)
};

// ScriptStruct FSD.GMMutatorItem
// Size: 0x10 (Inherited: 0x00)
struct FGMMutatorItem {
	struct TArray<struct UMutator*> Mutators; // 0x00(0x10)
};

// ScriptStruct FSD.DeepDiveAnalyticsInformation
// Size: 0x0c (Inherited: 0x00)
struct FDeepDiveAnalyticsInformation {
	bool WasDeepDive; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t LastDeepDiveStage; // 0x04(0x04)
	bool EliteDeepDive; // 0x08(0x01)
	bool IsReplay; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct FSD.PartyAnalyticsInformation
// Size: 0x14 (Inherited: 0x00)
struct FPartyAnalyticsInformation {
	char UnknownData_0[0x14]; // 0x00(0x14)
};

// ScriptStruct FSD.AvoidActorEntry
// Size: 0x10 (Inherited: 0x00)
struct FAvoidActorEntry {
	struct AActor* Actor; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct FSD.GrabAvoidClassEntry
// Size: 0x10 (Inherited: 0x00)
struct FGrabAvoidClassEntry {
	struct AActor* ActorClass; // 0x00(0x08)
	float DistanceToKeep; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.StateStats
// Size: 0x14 (Inherited: 0x00)
struct FStateStats {
	float MaxAcceleration; // 0x00(0x04)
	float MaxPawnSpeed; // 0x04(0x04)
	float MinSlowdownAngle; // 0x08(0x04)
	float MaxSlowdownAngle; // 0x0c(0x04)
	float MaxBreakingDeceleration; // 0x10(0x04)
};

// ScriptStruct FSD.EliteEnemyEntry
// Size: 0x40 (Inherited: 0x00)
struct FEliteEnemyEntry {
	float HeroChance; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UStatusEffect* StatusEffect; // 0x08(0x08)
	struct TArray<struct UActorComponent*> ComponentsToAdd; // 0x10(0x10)
	bool OverrideHealthScaling; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct FEliteEnemyBan> Bans; // 0x28(0x10)
	enum class EEnemyHealthScaling HealthScalingOverride; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct FSD.EliteEnemyBan
// Size: 0x10 (Inherited: 0x00)
struct FEliteEnemyBan {
	struct FInt32Interval AffectedPlayerCount; // 0x00(0x08)
	struct UMissionTemplate* Template; // 0x08(0x08)
};

// ScriptStruct FSD.HealthBarLooks
// Size: 0x20 (Inherited: 0x00)
struct FHealthBarLooks {
	struct FLinearColor HealthColor; // 0x00(0x10)
	struct FLinearColor DamageColor; // 0x10(0x10)
};

// ScriptStruct FSD.HydraHeadTarget
// Size: 0x18 (Inherited: 0x00)
struct FHydraHeadTarget {
	struct FVector_NetQuantize Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct FSD.QueuedMontage
// Size: 0x10 (Inherited: 0x00)
struct FQueuedMontage {
	struct UAnimMontage* Montage; // 0x00(0x08)
	bool ForceUpdate; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct FSD.InputTranslationTable
// Size: 0x50 (Inherited: 0x00)
struct FInputTranslationTable {
	struct TMap<struct FName, struct FInputTranslation> Entries; // 0x00(0x50)
};

// ScriptStruct FSD.InputTranslation
// Size: 0x24 (Inherited: 0x00)
struct FInputTranslation {
	struct FInputTranslationEntry Default; // 0x00(0x10)
	bool bControllerOverride; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	struct FInputTranslationEntry ControllerOverride; // 0x14(0x10)
};

// ScriptStruct FSD.InputTranslationEntry
// Size: 0x10 (Inherited: 0x00)
struct FInputTranslationEntry {
	enum class EInputInteraction Interaction; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName InputName; // 0x04(0x08)
	int32_t Axis; // 0x0c(0x04)
};

// ScriptStruct FSD.CarriedItemState
// Size: 0x10 (Inherited: 0x00)
struct FCarriedItemState {
	struct AActor* Item; // 0x00(0x08)
	char PlayThrowMontage : 1; // 0x08(0x01)
	char UnknownData_8_1 : 7; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct FSD.ItemAnimationItem
// Size: 0x18 (Inherited: 0x00)
struct FItemAnimationItem {
	struct UAnimMontage* FP_CharacterMontage; // 0x00(0x08)
	struct UAnimMontage* TP_CharacterMontage; // 0x08(0x08)
	struct UAnimMontage* ItemMontage; // 0x10(0x08)
};

// ScriptStruct FSD.ItemSkinOwners
// Size: 0x10 (Inherited: 0x00)
struct FItemSkinOwners {
	struct TArray<struct UItemID*> Items; // 0x00(0x10)
};

// ScriptStruct FSD.GearStatEntry
// Size: 0x68 (Inherited: 0x00)
struct FGearStatEntry {
	struct FText Text; // 0x00(0x18)
	struct FText Value; // 0x18(0x18)
	struct FText BaseValue; // 0x30(0x18)
	struct FText UpgradeValue; // 0x48(0x18)
	enum class EItemPreviewStatus PreviewStatus; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// ScriptStruct FSD.BumpPlayerHit
// Size: 0x18 (Inherited: 0x00)
struct FBumpPlayerHit {
	struct FVector_NetQuantize force; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct APlayerCharacter* Player; // 0x10(0x08)
};

// ScriptStruct FSD.LineSegmentCarverPoint
// Size: 0x24 (Inherited: 0x00)
struct FLineSegmentCarverPoint {
	struct FVector Position; // 0x00(0x0c)
	float HRange; // 0x0c(0x04)
	float VRange; // 0x10(0x04)
	float FloorAngle; // 0x14(0x04)
	float CielingNoiseRange; // 0x18(0x04)
	float WallNoiseRange; // 0x1c(0x04)
	float FloorNoiseRange; // 0x20(0x04)
};

// ScriptStruct FSD.LineSegmentFillerPoint
// Size: 0x24 (Inherited: 0x00)
struct FLineSegmentFillerPoint {
	struct FVector Position; // 0x00(0x0c)
	struct FRandRange RandomRange; // 0x0c(0x08)
	struct FRandRange RandomNoiseRange; // 0x14(0x08)
	struct FRandRange FillAmount; // 0x1c(0x08)
};

// ScriptStruct FSD.FSDTranslationProgress
// Size: 0x18 (Inherited: 0x00)
struct FFSDTranslationProgress {
	struct FString CodeName; // 0x00(0x10)
	int32_t TranslatedPercent; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FSD.LocalizedLanguageInfo
// Size: 0x38 (Inherited: 0x00)
struct FLocalizedLanguageInfo {
	struct FString EnglishName; // 0x00(0x10)
	struct FString NativeName; // 0x10(0x10)
	struct FString CodeName; // 0x20(0x10)
	bool CommunityTranslated; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	int32_t TranslatedPercent; // 0x34(0x04)
};

// ScriptStruct FSD.FSDLocalizedChatMessage
// Size: 0x48 (Inherited: 0x00)
struct FFSDLocalizedChatMessage {
	char UnknownData_0[0x8]; // 0x00(0x08)
	enum class EChatMessageType MsgType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString Sender; // 0x10(0x10)
	struct FText Msg; // 0x20(0x18)
	struct TArray<struct FText> Arguments; // 0x38(0x10)
};

// ScriptStruct FSD.MilestoneTier
// Size: 0x08 (Inherited: 0x00)
struct FMilestoneTier {
	float CompletionCount; // 0x00(0x04)
	int32_t PerkPoints; // 0x04(0x04)
};

// ScriptStruct FSD.BiomeFeatures
// Size: 0x10 (Inherited: 0x00)
struct FBiomeFeatures {
	struct UMinersManualData* Descriptions[0x2]; // 0x00(0x10)
};

// ScriptStruct FSD.MissionTypeDescription
// Size: 0x28 (Inherited: 0x00)
struct FMissionTypeDescription {
	struct FText InfoHeadline; // 0x00(0x18)
	struct TArray<struct FSoftMissionStepDescription> Steps; // 0x18(0x10)
};

// ScriptStruct FSD.SoftMissionStepDescription
// Size: 0x58 (Inherited: 0x00)
struct FSoftMissionStepDescription {
	struct FText Headline; // 0x00(0x18)
	struct FText RichDescription; // 0x18(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x30(0x28)
};

// ScriptStruct FSD.MissionStepDescription
// Size: 0x38 (Inherited: 0x00)
struct FMissionStepDescription {
	struct FText Headline; // 0x00(0x18)
	struct FText RichDescription; // 0x18(0x18)
	struct UTexture2D* Image; // 0x30(0x08)
};

// ScriptStruct FSD.MinersManualDescription
// Size: 0x40 (Inherited: 0x00)
struct FMinersManualDescription {
	struct FText Headline; // 0x00(0x18)
	struct FText RichDescription; // 0x18(0x18)
	struct UTexture2D* ImageFront; // 0x30(0x08)
	struct UTexture2D* ImageBackground; // 0x38(0x08)
};

// ScriptStruct FSD.SoftMinersManualDescription
// Size: 0x80 (Inherited: 0x00)
struct FSoftMinersManualDescription {
	struct FText Headline; // 0x00(0x18)
	struct FText RichDescription; // 0x18(0x18)
	struct TSoftObjectPtr<struct UTexture2D> ImageFront; // 0x30(0x28)
	struct TSoftObjectPtr<struct UTexture2D> ImageBackground; // 0x58(0x28)
};

// ScriptStruct FSD.DamageTypeDescription
// Size: 0x78 (Inherited: 0x00)
struct FDamageTypeDescription {
	enum class EDamageType Type; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FText Name; // 0x08(0x18)
	struct FText RichDescription; // 0x20(0x18)
	struct FSoftIconWithColor Icon; // 0x38(0x38)
	float IconScale; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// ScriptStruct FSD.SoftIconWithColor
// Size: 0x38 (Inherited: 0x00)
struct FSoftIconWithColor {
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x00(0x28)
	struct FLinearColor Tint; // 0x28(0x10)
};

// ScriptStruct FSD.MiningPodDialogs
// Size: 0x50 (Inherited: 0x00)
struct FMiningPodDialogs {
	struct UDialogDataAsset* DepartingIn5Min; // 0x00(0x08)
	struct UDialogDataAsset* DepartingIn4Min; // 0x08(0x08)
	struct UDialogDataAsset* DepartingIn3Min; // 0x10(0x08)
	struct UDialogDataAsset* DepartingIn2Min; // 0x18(0x08)
	struct UDialogDataAsset* DepartingIn1Min; // 0x20(0x08)
	struct UDialogDataAsset* DepartingIn30Sec; // 0x28(0x08)
	struct UDialogDataAsset* DepartingIn10Sec; // 0x30(0x08)
	struct UDialogDataAsset* DepartingIn123Sec; // 0x38(0x08)
	struct UDialogDataAsset* Departed; // 0x40(0x08)
	struct UDialogDataAsset* DeepDiveDeparted; // 0x48(0x08)
};

// ScriptStruct FSD.MissionHazardSetting
// Size: 0x20 (Inherited: 0x00)
struct FMissionHazardSetting {
	struct FText Name; // 0x00(0x18)
	float HazardBonus; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.GDMissionStats
// Size: 0xf8 (Inherited: 0x00)
struct FGDMissionStats {
	struct UMissionStat* TimePlayed; // 0x00(0x08)
	struct UMissionStat* DistanceTravelled; // 0x08(0x08)
	struct UMissionStat* EnemiesKilled; // 0x10(0x08)
	struct UMissionStat* MineralsMined; // 0x18(0x08)
	struct UMissionStat* MissionCompleted; // 0x20(0x08)
	struct UMissionStat* SoloMissionCompleted; // 0x28(0x08)
	struct UMissionStat* SecondaryMissionCompleted; // 0x30(0x08)
	struct UMissionStat* CharacterLevelUp; // 0x38(0x08)
	struct UMissionStat* VanityItemsBought; // 0x40(0x08)
	struct UMissionStat* ItemUpgradesBought; // 0x48(0x08)
	struct UMissionStat* DrinkablesConsumed; // 0x50(0x08)
	struct UMissionStat* DrinkableRoundsOrdered; // 0x58(0x08)
	struct UMissionStat* BartenderCreditsTipped; // 0x60(0x08)
	struct UMissionStat* CampaignMissionsCompleted; // 0x68(0x08)
	struct UMissionStat* CampaignsCompleted; // 0x70(0x08)
	struct UMissionStat* TimesDowned; // 0x78(0x08)
	struct UMissionStat* TimesPassedOut; // 0x80(0x08)
	struct UMissionStat* WeaponsUnlockedStat; // 0x88(0x08)
	struct UMissionStat* DeepDivesCompleted; // 0x90(0x08)
	struct UMissionStat* EliteDeepDivesCompleted; // 0x98(0x08)
	struct UMissionStat* CosmeticsCrafted; // 0xa0(0x08)
	struct UMissionStat* WeaponSkinsCrafted; // 0xa8(0x08)
	struct UMissionStat* WeaponOverclocksCrafted; // 0xb0(0x08)
	struct UMissionStat* CraftingMasteryLevel; // 0xb8(0x08)
	struct UMissionStat* DefendBlackBoxObjectivesCompleted; // 0xc0(0x08)
	struct UMissionStat* RepairMiniMuleObjectivesCompleted; // 0xc8(0x08)
	struct UMissionStat* DeepDiveCompletedBestTime; // 0xd0(0x08)
	struct UMissionStat* EliteDeepDiveCompletedBestTime; // 0xd8(0x08)
	struct UMissionStat* SpecialBeersUnlocked; // 0xe0(0x08)
	struct TArray<struct UMissionStat*> AllMissionStats; // 0xe8(0x10)
};

// ScriptStruct FSD.PlanetZoneItem
// Size: 0x28 (Inherited: 0x00)
struct FPlanetZoneItem {
	struct TArray<struct UBiome*> Biomes; // 0x00(0x10)
	char UnknownData_10[0x18]; // 0x10(0x18)
};

// ScriptStruct FSD.MissionBiomeItem
// Size: 0x10 (Inherited: 0x00)
struct FMissionBiomeItem {
	struct UBiome* Biome; // 0x00(0x08)
	float Rarity; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.MissionTemplateItem
// Size: 0x10 (Inherited: 0x00)
struct FMissionTemplateItem {
	struct UMissionTemplate* Template; // 0x00(0x08)
	float Rarity; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.RequiredMissionItem
// Size: 0x18 (Inherited: 0x00)
struct FRequiredMissionItem {
	struct UMissionTemplate* MissionTemplate; // 0x00(0x08)
	struct UMissionComplexity* Complexity; // 0x08(0x08)
	struct UMissionDuration* Duration; // 0x10(0x08)
};

// ScriptStruct FSD.MultiHitscanHit
// Size: 0x30 (Inherited: 0x00)
struct FMultiHitscanHit {
	struct UPrimitiveComponent* TargetCompoenent; // 0x00(0x08)
	struct FWeakObjectPtr<struct UFSDPhysicalMaterial> PhysicalMaterial; // 0x08(0x08)
	struct FVector_NetQuantize HitLocation; // 0x10(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x1c(0x0c)
	char BoneIndex; // 0x28(0x01)
	bool PlayImpactSound; // 0x29(0x01)
	bool SpawnDecal; // 0x2a(0x01)
	char UnknownData_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct FSD.ProjectileSpawnData
// Size: 0x28 (Inherited: 0x00)
struct FProjectileSpawnData {
	struct AProjectile* projectileClass; // 0x00(0x08)
	struct FFloatInterval HorizontalAngleOffset; // 0x08(0x08)
	struct FFloatInterval VerticalAngleOffset; // 0x10(0x08)
	struct FFloatInterval Delay; // 0x18(0x08)
	bool IsBallistic; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct FSD.ActiveAudioItem
// Size: 0x10 (Inherited: 0x00)
struct FActiveAudioItem {
	struct UAudioComponent* Audio; // 0x00(0x08)
	float FadeoutDuration; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ActiveMusicItem
// Size: 0x20 (Inherited: 0x00)
struct FActiveMusicItem {
	struct USoundBase* Sound; // 0x00(0x08)
	float StartingTime; // 0x08(0x04)
	float FadeDuration; // 0x0c(0x04)
	bool Looping; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	struct FMusicHandle Handle; // 0x14(0x04)
	struct UMusicCategory* Category; // 0x18(0x08)
};

// ScriptStruct FSD.MusicHandle
// Size: 0x04 (Inherited: 0x00)
struct FMusicHandle {
	int32_t MusicHandle; // 0x00(0x04)
};

// ScriptStruct FSD.PathCell
// Size: 0x10 (Inherited: 0x00)
struct FPathCell {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FSD.PathDebugNode
// Size: 0x20 (Inherited: 0x00)
struct FPathDebugNode {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct FSD.OxygenCallback
// Size: 0x18 (Inherited: 0x00)
struct FOxygenCallback {
	struct FDelegate Delegate; // 0x00(0x10)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FSD.SimpleObjectInfoData
// Size: 0x40 (Inherited: 0x00)
struct FSimpleObjectInfoData {
	struct FText InGameName; // 0x00(0x18)
	struct FText InGameDescription; // 0x18(0x18)
	struct UDialogDataAsset* LookAtShout; // 0x30(0x08)
	struct UTexture2D* Icon; // 0x38(0x08)
};

// ScriptStruct FSD.PawnStatEntriesArray
// Size: 0x120 (Inherited: 0x108)
struct FPawnStatEntriesArray : FFastArraySerializer {
	struct TArray<struct FPawnStatEntry> Items; // 0x108(0x10)
	struct UPawnStatsComponent* Owner; // 0x118(0x08)
};

// ScriptStruct FSD.PawnStatEntry
// Size: 0x30 (Inherited: 0x0c)
struct FPawnStatEntry : FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UPawnStat* PawnStat; // 0x10(0x08)
	char UnknownData_18[0x10]; // 0x18(0x10)
	float Value; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FSD.PerkUsage
// Size: 0x18 (Inherited: 0x00)
struct FPerkUsage {
	struct UPerkAsset* Perk; // 0x00(0x08)
	int32_t UsedCount; // 0x08(0x04)
	char UnknownData_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct FSD.PickaxeMeshInstance
// Size: 0x10 (Inherited: 0x00)
struct FPickaxeMeshInstance {
	struct UMeshComponent* FP_Mesh; // 0x00(0x08)
	struct UMeshComponent* TP_Mesh; // 0x08(0x08)
};

// ScriptStruct FSD.DefaultPickaxeParts
// Size: 0x50 (Inherited: 0x00)
struct FDefaultPickaxeParts {
	struct TMap<enum class EPickaxePartLocation, struct UPickaxePart*> parts; // 0x00(0x50)
};

// ScriptStruct FSD.PillarSegment
// Size: 0x08 (Inherited: 0x00)
struct FPillarSegment {
	float Scale; // 0x00(0x04)
	float HeightOffset; // 0x04(0x04)
};

// ScriptStruct FSD.HealthRegenerationParams
// Size: 0x10 (Inherited: 0x00)
struct FHealthRegenerationParams {
	bool bIsRegenerating; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float DelayAfterDamage; // 0x04(0x04)
	float HealthPerSecond; // 0x08(0x04)
	float TargetHealthRatio; // 0x0c(0x04)
};

// ScriptStruct FSD.PlayerSphere
// Size: 0x20 (Inherited: 0x00)
struct FPlayerSphere {
	struct FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	struct TArray<struct FWeakObjectPtr<struct APlayerCharacter>> Players; // 0x10(0x10)
};

// ScriptStruct FSD.ProximityTriggerItem
// Size: 0x28 (Inherited: 0x00)
struct FProximityTriggerItem {
	char UnknownData_0[0x18]; // 0x00(0x18)
	struct FDelegate Callback; // 0x18(0x10)
};

// ScriptStruct FSD.RejoinFloat
// Size: 0x1c (Inherited: 0x00)
struct FRejoinFloat {
	struct FGuid ItemKey; // 0x00(0x10)
	struct FName ValueKey; // 0x10(0x08)
	float Value; // 0x18(0x04)
};

// ScriptStruct FSD.RejoinInt
// Size: 0x1c (Inherited: 0x00)
struct FRejoinInt {
	struct FGuid ItemKey; // 0x00(0x10)
	struct FName ValueKey; // 0x10(0x08)
	int32_t Value; // 0x18(0x04)
};

// ScriptStruct FSD.PostProcessingBlendable
// Size: 0x20 (Inherited: 0x00)
struct FPostProcessingBlendable {
	struct TScriptInterface<None> Blendable; // 0x00(0x10)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct FSD.InfluenceMap
// Size: 0x50 (Inherited: 0x00)
struct FInfluenceMap {
	struct TMap<struct UObject*, struct FCaveInfluenceSet> CaveInfluences; // 0x00(0x50)
};

// ScriptStruct FSD.CaveInfluenceSet
// Size: 0x10 (Inherited: 0x00)
struct FCaveInfluenceSet {
	struct TArray<struct FCaveInfluence> CaveInfluences; // 0x00(0x10)
};

// ScriptStruct FSD.CaveInfluence
// Size: 0x10 (Inherited: 0x00)
struct FCaveInfluence {
	struct FVector Center; // 0x00(0x0c)
	float Range; // 0x0c(0x04)
};

// ScriptStruct FSD.GemResourceAmount
// Size: 0x10 (Inherited: 0x00)
struct FGemResourceAmount {
	struct UGemResourceCreator* GemCreator; // 0x00(0x08)
	int32_t amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.CarvedResource
// Size: 0x20 (Inherited: 0x00)
struct FCarvedResource {
	struct UCarvedResourceCreator* ResourceCreator; // 0x00(0x08)
	struct TArray<int32_t> PredeterminedRooms; // 0x08(0x10)
	int32_t amount; // 0x18(0x04)
	float Overflow; // 0x1c(0x04)
};

// ScriptStruct FSD.DebrisPatchResource
// Size: 0x18 (Inherited: 0x00)
struct FDebrisPatchResource {
	struct UDebrisPatchComponent* Debris; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FSD.DebrisVeinResource
// Size: 0x18 (Inherited: 0x00)
struct FDebrisVeinResource {
	struct UDebrisVeinComponent* Debris; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FSD.VeinResource
// Size: 0x28 (Inherited: 0x00)
struct FVeinResource {
	struct UVeinResourceCreator* ResourceCreator; // 0x00(0x08)
	float VeinLengthToGenerate; // 0x08(0x04)
	char UnknownData_C[0x1c]; // 0x0c(0x1c)
};

// ScriptStruct FSD.GeneratedInstantCarvers
// Size: 0x10 (Inherited: 0x00)
struct FGeneratedInstantCarvers {
	struct TArray<struct FLevelCarverPass> LevelCarverPasses; // 0x00(0x10)
};

// ScriptStruct FSD.LevelCarverPass
// Size: 0x18 (Inherited: 0x00)
struct FLevelCarverPass {
	struct TArray<struct FLevelGenerationCarverLists> Lists; // 0x00(0x10)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FSD.LevelGenerationCarverLists
// Size: 0x10 (Inherited: 0x00)
struct FLevelGenerationCarverLists {
	struct TArray<struct FLevelGenerationCarver> Carvers; // 0x00(0x10)
};

// ScriptStruct FSD.TerrainPlacementDebugItem
// Size: 0x70 (Inherited: 0x00)
struct FTerrainPlacementDebugItem {
	struct TArray<struct FTerrainPlacementBox> TerrainCheckers; // 0x00(0x10)
	bool BoxGood; // 0x10(0x01)
	bool CapsuleGood; // 0x11(0x01)
	enum class EDebrisColliderType CapsuleType; // 0x12(0x01)
	char UnknownData_13[0x1]; // 0x13(0x01)
	struct FDebrisCapsule Capsule; // 0x14(0x20)
	char UnknownData_34[0xc]; // 0x34(0x0c)
	struct FTransform Transform; // 0x40(0x30)
};

// ScriptStruct FSD.TerrainPlacementBox
// Size: 0x1c (Inherited: 0x00)
struct FTerrainPlacementBox {
	struct FVector Min; // 0x00(0x0c)
	struct FVector Max; // 0x0c(0x0c)
	enum class ETerrainPlacementBoxType PlacementType; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct FSD.GeneratedDebris
// Size: 0x58 (Inherited: 0x00)
struct FGeneratedDebris {
	struct TMap<struct UDebrisBase*, struct UObject*> Debris; // 0x00(0x50)
	bool IsValid; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// ScriptStruct FSD.GeneratedDebrisItem
// Size: 0x10 (Inherited: 0x00)
struct FGeneratedDebrisItem {
	struct UDebrisBase* Debris; // 0x00(0x08)
	struct UObject* Influencer; // 0x08(0x08)
};

// ScriptStruct FSD.GeneratedInfluenceSets
// Size: 0x18 (Inherited: 0x00)
struct FGeneratedInfluenceSets {
	struct TArray<struct FGeneratedInfluenceSet> InfluenceSets; // 0x00(0x10)
	bool IsValid; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FSD.GeneratedInfluenceSet
// Size: 0x20 (Inherited: 0x00)
struct FGeneratedInfluenceSet {
	struct UObject* CaveInfluencer; // 0x00(0x08)
	int32_t NetworkID; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FCaveInfluence> CaveInfluences; // 0x10(0x10)
};

// ScriptStruct FSD.CollectableSpawnableItem
// Size: 0x10 (Inherited: 0x00)
struct FCollectableSpawnableItem {
	struct UCollectableResourceData* Resource; // 0x00(0x08)
	int32_t amount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ResourceSpawner
// Size: 0x18 (Inherited: 0x00)
struct FResourceSpawner {
	struct UResourceData* Resource; // 0x00(0x08)
	struct FRandFloatInterval AmountToSpawn; // 0x08(0x10)
};

// ScriptStruct FSD.PLSResource
// Size: 0x10 (Inherited: 0x00)
struct FPLSResource {
	struct UResourceData* Resource; // 0x00(0x08)
	float AmountToGenerate; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.TunnelPath
// Size: 0x10 (Inherited: 0x00)
struct FTunnelPath {
	struct TArray<struct FVector> Path; // 0x00(0x10)
};

// ScriptStruct FSD.InfluenceSphere
// Size: 0x10 (Inherited: 0x00)
struct FInfluenceSphere {
	struct UCaveInfluencer* Influencer; // 0x00(0x08)
	float Radius; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ProfileCategoryTiming
// Size: 0x18 (Inherited: 0x00)
struct FProfileCategoryTiming {
	struct FString CategoryName; // 0x00(0x10)
	float CategoryTime; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FSD.ProfileEntry
// Size: 0x20 (Inherited: 0x00)
struct FProfileEntry {
	struct FWeakObjectPtr<struct UObject> Context; // 0x00(0x08)
	struct FString Category; // 0x08(0x10)
	float TimeSpent; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.DormantComponentState
// Size: 0x18 (Inherited: 0x00)
struct FDormantComponentState {
	struct FWeakObjectPtr<struct UActorComponent> Component; // 0x00(0x08)
	char Collision; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FName CollisionProfileName; // 0x0c(0x08)
	char Active : 1; // 0x14(0x01)
	char Visible : 1; // 0x14(0x01)
	char UnknownData_14_2 : 6; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct FSD.PromotionRewardsRank
// Size: 0x60 (Inherited: 0x00)
struct FPromotionRewardsRank {
	struct TArray<struct FClaimableRewardEntry> RewardsAllClasses; // 0x00(0x10)
	struct TMap<struct UPlayerCharacterID*, struct FClaimableRewardArray> RewardsCharacterSpecific; // 0x10(0x50)
};

// ScriptStruct FSD.RagdollItem
// Size: 0x28 (Inherited: 0x00)
struct FRagdollItem {
	struct AActor* Actor; // 0x00(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x08(0x10)
	struct UMaterialInstanceDynamic* DropshadowMaterial; // 0x18(0x08)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct FSD.ExposedProperty
// Size: 0x01 (Inherited: 0x00)
struct FExposedProperty {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FSD.ExposedFloat
// Size: 0x28 (Inherited: 0x01)
struct FExposedFloat : FExposedProperty {
	struct FName PropertyName; // 0x00(0x08)
	struct FText Description; // 0x08(0x18)
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
};

// ScriptStruct FSD.ExposableFloat
// Size: 0x28 (Inherited: 0x00)
struct FExposableFloat {
	float Value; // 0x00(0x04)
	bool Exposed; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FText Description; // 0x08(0x18)
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
};

// ScriptStruct FSD.RecoilSettings
// Size: 0x28 (Inherited: 0x00)
struct FRecoilSettings {
	struct FRandRange RecoilRoll; // 0x00(0x08)
	struct FRandRange RecoilPitch; // 0x08(0x08)
	struct FRandRange RecoilYaw; // 0x10(0x08)
	bool CanRecoilDown; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	float SpringStiffness; // 0x1c(0x04)
	float CriticalDampening; // 0x20(0x04)
	float Mass; // 0x24(0x04)
};

// ScriptStruct FSD.RecoilImpulse
// Size: 0x0c (Inherited: 0x00)
struct FRecoilImpulse {
	float Rotation; // 0x00(0x04)
	struct FVector2D Impulse; // 0x04(0x08)
};

// ScriptStruct FSD.ResourceInitalizer
// Size: 0x10 (Inherited: 0x00)
struct FResourceInitalizer {
	struct UResourceData* Resource; // 0x00(0x08)
	float MaxAmount; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ResourceDebris
// Size: 0x10 (Inherited: 0x00)
struct FResourceDebris {
	float InfluencerRange; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UDebrisBase* Debris; // 0x08(0x08)
};

// ScriptStruct FSD.TextStyleOverride
// Size: 0x90 (Inherited: 0x00)
struct FTextStyleOverride {
	bool bOverrideFont; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FSlateFontInfo Font; // 0x08(0x50)
	bool bOverrideColor; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
	struct FSlateColor Color; // 0x60(0x28)
	bool bOverrideSize; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	float SizeScale; // 0x8c(0x04)
};

// ScriptStruct FSD.RoomGeneratorGroupInstance
// Size: 0x10 (Inherited: 0x00)
struct FRoomGeneratorGroupInstance {
	struct TArray<struct URoomGenerator*> Rooms; // 0x00(0x10)
};

// ScriptStruct FSD.RoomNodeBase
// Size: 0x01 (Inherited: 0x00)
struct FRoomNodeBase {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct FSD.RoomNode
// Size: 0xe0 (Inherited: 0x01)
struct FRoomNode : FRoomNodeBase {
	int32_t ID; // 0x00(0x04)
	enum class ERoomType RoomType; // 0x04(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
	int32_t CarvePass; // 0x08(0x04)
	struct FVector Position; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> EntranceIDs; // 0x20(0x10)
	struct TArray<int32_t> ExitIDs; // 0x30(0x10)
	struct TArray<struct FRoomEntrance> RoomEntrances; // 0x40(0x10)
	bool CanHaveEnemies; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct TArray<struct FGeneratedRoom> Rooms; // 0x58(0x10)
	float ResourceMultiplier; // 0x68(0x04)
	float WeightedResourceAmount; // 0x6c(0x04)
	struct TArray<struct FRoomGeneratorItem> RoomGenerators; // 0x70(0x10)
	char UnknownData_80[0x60]; // 0x80(0x60)
};

// ScriptStruct FSD.RoomGeneratorItem
// Size: 0x18 (Inherited: 0x00)
struct FRoomGeneratorItem {
	struct URoomGeneratorBase* RoomGenerator; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	float Rotation; // 0x14(0x04)
};

// ScriptStruct FSD.GeneratedRoom
// Size: 0x88 (Inherited: 0x00)
struct FGeneratedRoom {
	struct UTerrainMaterial* Material; // 0x00(0x08)
	struct TArray<struct FRoomLine> Lines; // 0x08(0x10)
	struct TArray<struct FPillar> Pillars; // 0x18(0x10)
	struct TArray<struct FRoomBox> BoxCarvers; // 0x28(0x10)
	struct TArray<struct FRoomBox> BoxFillers; // 0x38(0x10)
	struct TArray<struct FResourceLocation> ResourceLocations; // 0x48(0x10)
	struct TArray<struct FRoomEntrance> Entrances; // 0x58(0x10)
	struct TArray<struct FRoomItem> RoomItems; // 0x68(0x10)
	struct TArray<struct FTriggerItem> TriggerItems; // 0x78(0x10)
};

// ScriptStruct FSD.TriggerItem
// Size: 0x50 (Inherited: 0x00)
struct FTriggerItem {
	struct ASpawnTrigger* TriggerClass; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FName Message; // 0x40(0x08)
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct FSD.RoomItem
// Size: 0x20 (Inherited: 0x00)
struct FRoomItem {
	struct AActor* Spawnable; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator_NoQuantize Rotation; // 0x14(0x0c)
};

// ScriptStruct FSD.Rotator_NoQuantize
// Size: 0x0c (Inherited: 0x0c)
struct FRotator_NoQuantize : FRotator {
};

// ScriptStruct FSD.RoomEntrance
// Size: 0x20 (Inherited: 0x00)
struct FRoomEntrance {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	bool IsBLocked; // 0x18(0x01)
	enum class ECaveEntranceType EntranceType; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
	int32_t PathObstacleID; // 0x1c(0x04)
};

// ScriptStruct FSD.ResourceLocation
// Size: 0x20 (Inherited: 0x00)
struct FResourceLocation {
	struct FVector Location; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UResourceData* Resource; // 0x10(0x08)
	float BaseAmount; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct FSD.RoomBox
// Size: 0x30 (Inherited: 0x00)
struct FRoomBox {
	struct FVector Position; // 0x00(0x0c)
	struct FRotator_NoQuantize Rotation; // 0x0c(0x0c)
	struct FVector Extends; // 0x18(0x0c)
	float NoiseRange; // 0x24(0x04)
	struct UFloodFillSettings* Noise; // 0x28(0x08)
};

// ScriptStruct FSD.Pillar
// Size: 0x20 (Inherited: 0x00)
struct FPillar {
	struct UFloodFillSettings* NoiseOverride; // 0x00(0x08)
	struct TArray<struct FWeightedLinePoint> Points; // 0x08(0x10)
	float NoiseScale; // 0x18(0x04)
	float EndcapScale; // 0x1c(0x04)
};

// ScriptStruct FSD.WeightedLinePoint
// Size: 0x1c (Inherited: 0x00)
struct FWeightedLinePoint {
	struct FVector Location; // 0x00(0x0c)
	float Range; // 0x0c(0x04)
	float NoiseRange; // 0x10(0x04)
	float SkewFactor; // 0x14(0x04)
	float FillAmount; // 0x18(0x04)
};

// ScriptStruct FSD.RoomLine
// Size: 0x40 (Inherited: 0x00)
struct FRoomLine {
	struct UFloodFillSettings* WallNoiseOverride; // 0x00(0x08)
	struct UFloodFillSettings* CeilingNoiseOverride; // 0x08(0x08)
	struct UFloodFillSettings* FloorNoiseOverride; // 0x10(0x08)
	bool UseDetailNoise; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct TArray<struct FRoomLinePoint> Points; // 0x20(0x10)
	struct TArray<struct FVector> RightVectors; // 0x30(0x10)
};

// ScriptStruct FSD.RoomLinePoint
// Size: 0x30 (Inherited: 0x00)
struct FRoomLinePoint {
	struct FVector Location; // 0x00(0x0c)
	float HRange; // 0x0c(0x04)
	float VRange; // 0x10(0x04)
	float CielingNoiseRange; // 0x14(0x04)
	float WallNoiseRange; // 0x18(0x04)
	float FloorNoiseRange; // 0x1c(0x04)
	float Cielingheight; // 0x20(0x04)
	float HeightScale; // 0x24(0x04)
	float FloorDepth; // 0x28(0x04)
	float FloorAngle; // 0x2c(0x04)
};

// ScriptStruct FSD.TunnelNode
// Size: 0xd8 (Inherited: 0x01)
struct FTunnelNode : FRoomNodeBase {
	int32_t EntranceRoomID; // 0x00(0x04)
	int32_t ExitRoomID; // 0x04(0x04)
	struct FRoomEntrance Entrance; // 0x08(0x20)
	struct FRoomEntrance Exit; // 0x28(0x20)
	struct UTunnelParameters* ParametersOverride; // 0x48(0x08)
	struct FTunnelPath Path; // 0x50(0x10)
	int32_t ID; // 0x60(0x04)
	struct FVector DirtStartLocation; // 0x64(0x0c)
	bool AddDirt; // 0x70(0x01)
	char UnknownData_72[0x2]; // 0x72(0x02)
	float WeightedResourceAmount; // 0x74(0x04)
	char UnknownData_78[0x60]; // 0x78(0x60)
};

// ScriptStruct FSD.RandLinePoint
// Size: 0x2c (Inherited: 0x00)
struct FRandLinePoint {
	struct FVector Location; // 0x00(0x0c)
	struct FRandRange Range; // 0x0c(0x08)
	struct FRandRange NoiseRange; // 0x14(0x08)
	struct FRandRange SkewFactor; // 0x1c(0x08)
	struct FRandRange FillAmount; // 0x24(0x08)
};

// ScriptStruct FSD.SaveGameSnapShot
// Size: 0xc8 (Inherited: 0x00)
struct FSaveGameSnapShot {
	struct FWeakObjectPtr<struct UFSDSaveGame> SaveGame; // 0x00(0x08)
	struct FString Filename; // 0x08(0x10)
	bool IsObsolete; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	int32_t VersionNumber; // 0x1c(0x04)
	int32_t Credits; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct TMap<struct APlayerCharacter*, int32_t> CharacterLevels; // 0x28(0x50)
	struct TMap<struct UResourceData*, int32_t> Resources; // 0x78(0x50)
};

// ScriptStruct FSD.SchematicGADataEntry
// Size: 0x30 (Inherited: 0x08)
struct FSchematicGADataEntry : FTableRowBase {
	char UnknownData_8[0x10]; // 0x08(0x10)
	int32_t SchematicGAID; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString SchematicName; // 0x20(0x10)
};

// ScriptStruct FSD.SchematicBankItem
// Size: 0x20 (Inherited: 0x00)
struct FSchematicBankItem {
	struct USchematicPricingTier* PricingTier; // 0x00(0x08)
	struct USchematicRarity* Rarity; // 0x08(0x08)
	struct TArray<struct USchematic*> Schematics; // 0x10(0x10)
};

// ScriptStruct FSD.SchematicType
// Size: 0x70 (Inherited: 0x00)
struct FSchematicType {
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x00(0x28)
	struct FLinearColor IconTint; // 0x28(0x10)
	struct TSoftObjectPtr<struct UTexture2D> Frame; // 0x38(0x28)
	struct FLinearColor FrameTint; // 0x60(0x10)
};

// ScriptStruct FSD.FriendInfo
// Size: 0x50 (Inherited: 0x00)
struct FFriendInfo {
	struct FString DisplayName; // 0x00(0x10)
	struct FString RealName; // 0x10(0x10)
	bool IsOnline; // 0x20(0x01)
	bool IsPlaying; // 0x21(0x01)
	bool IsPlayingThisGame; // 0x22(0x01)
	bool IsJoinable; // 0x23(0x01)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FString sessionId; // 0x28(0x10)
	bool HasVoiceSupport; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct FString PresenceStatus; // 0x40(0x10)
};

// ScriptStruct FSD.SoundClassManagerItem
// Size: 0x0c (Inherited: 0x00)
struct FSoundClassManagerItem {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct FSD.SoundMixManagerItem
// Size: 0x10 (Inherited: 0x00)
struct FSoundMixManagerItem {
	struct USoundMix* mix; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct FSD.SpiderAnimInstanceProxy
// Size: 0x6e0 (Inherited: 0x6e0)
struct FSpiderAnimInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct FSD.RandomWalkCycleEntry
// Size: 0x14 (Inherited: 0x00)
struct FRandomWalkCycleEntry {
	float RandomSelectionWeight; // 0x00(0x04)
	struct FRandRange Duration; // 0x04(0x08)
	float Cooldown; // 0x0c(0x04)
	float LastTimePlayed; // 0x10(0x04)
};

// ScriptStruct FSD.StabberVineAnimInstanceProxy
// Size: 0x8b0 (Inherited: 0x6e0)
struct FStabberVineAnimInstanceProxy : FAnimInstanceProxy {
	char UnknownData_6E0[0xc0]; // 0x6e0(0xc0)
	struct FVector SplineLocation01; // 0x7a0(0x0c)
	struct FVector SplineLocation02; // 0x7ac(0x0c)
	struct FVector SplineLocation03; // 0x7b8(0x0c)
	struct FVector SplineLocation04; // 0x7c4(0x0c)
	struct FVector SplineLocation05; // 0x7d0(0x0c)
	struct FVector SplineLocation06; // 0x7dc(0x0c)
	struct FVector SplineLocation07; // 0x7e8(0x0c)
	struct FVector SplineLocation08; // 0x7f4(0x0c)
	struct FVector SplineLocation09; // 0x800(0x0c)
	struct FVector SplineLocation10; // 0x80c(0x0c)
	struct FVector SplineLocation11; // 0x818(0x0c)
	struct FRotator SplineRotation01; // 0x824(0x0c)
	struct FRotator SplineRotation02; // 0x830(0x0c)
	struct FRotator SplineRotation03; // 0x83c(0x0c)
	struct FRotator SplineRotation04; // 0x848(0x0c)
	struct FRotator SplineRotation05; // 0x854(0x0c)
	struct FRotator SplineRotation06; // 0x860(0x0c)
	struct FRotator SplineRotation07; // 0x86c(0x0c)
	struct FRotator SplineRotation08; // 0x878(0x0c)
	struct FRotator SplineRotation09; // 0x884(0x0c)
	struct FRotator SplineRotation10; // 0x890(0x0c)
	struct FRotator SplineRotation11; // 0x89c(0x0c)
	char UnknownData_8A8[0x8]; // 0x8a8(0x08)
};

// ScriptStruct FSD.StabberVineTarget
// Size: 0x18 (Inherited: 0x00)
struct FStabberVineTarget {
	struct FVector_NetQuantize Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct FSD.ActiveStatusEffectBank
// Size: 0x40 (Inherited: 0x00)
struct FActiveStatusEffectBank {
	struct UStatusEffect* Key; // 0x00(0x08)
	struct UStatusEffect* ActiveEffect; // 0x08(0x08)
	char UnknownData_10[0x20]; // 0x10(0x20)
	struct TArray<struct FActiveStatusEffect> Effects; // 0x30(0x10)
};

// ScriptStruct FSD.ActiveStatusEffect
// Size: 0x08 (Inherited: 0x00)
struct FActiveStatusEffect {
	struct AActor* Owner; // 0x00(0x08)
};

// ScriptStruct FSD.SteelSeriesLinearColor
// Size: 0x03 (Inherited: 0x00)
struct FSteelSeriesLinearColor {
	char UnknownData_0[0x3]; // 0x00(0x03)
};

// ScriptStruct FSD.HeatSource
// Size: 0x08 (Inherited: 0x00)
struct FHeatSource {
	float Temperature; // 0x00(0x04)
	int32_t Intensity; // 0x04(0x04)
};

// ScriptStruct FSD.TetherMessageSettings
// Size: 0x10 (Inherited: 0x00)
struct FTetherMessageSettings {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FSD.TrackMovement
// Size: 0x0c (Inherited: 0x00)
struct FTrackMovement {
	int32_t Direction; // 0x00(0x04)
	float Distance; // 0x04(0x04)
	float Speed; // 0x08(0x04)
};

// ScriptStruct FSD.PipelineMovementData
// Size: 0x1c (Inherited: 0x00)
struct FPipelineMovementData {
	int32_t Direction; // 0x00(0x04)
	float Distance; // 0x04(0x04)
	float Speed; // 0x08(0x04)
	bool UpToSpeed; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	float Acceleration; // 0x10(0x04)
	struct FWeakObjectPtr<struct APipelineSegment> PipelineSegment; // 0x14(0x08)
};

// ScriptStruct FSD.TreasureWeight
// Size: 0x10 (Inherited: 0x00)
struct FTreasureWeight {
	float Weight; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UTreasureRewarder* RewarderClass; // 0x08(0x08)
};

// ScriptStruct FSD.TunnelSettingItem
// Size: 0x10 (Inherited: 0x00)
struct FTunnelSettingItem {
	struct UTunnelSegmentSetting* SegmentSetting; // 0x00(0x08)
	struct FInt32Interval SegmentSize; // 0x08(0x08)
};

// ScriptStruct FSD.TutorialHint
// Size: 0x70 (Inherited: 0x00)
struct FTutorialHint {
	struct FText Text; // 0x00(0x18)
	struct FText TaskText; // 0x18(0x18)
	struct FText Title; // 0x30(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x48(0x28)
};

// ScriptStruct FSD.HeightenedSenseTracker
// Size: 0x20 (Inherited: 0x00)
struct FHeightenedSenseTracker {
	struct FWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct FWeakObjectPtr<struct UHealthComponentBase> HealthComponent; // 0x08(0x08)
	struct TScriptInterface<None> AttackingPoint; // 0x10(0x10)
};

// ScriptStruct FSD.MasteryItem
// Size: 0x18 (Inherited: 0x00)
struct FMasteryItem {
	int32_t NeededMastery; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct UUnlockReward*> Unlocks; // 0x08(0x10)
};

// ScriptStruct FSD.UpgradeTier
// Size: 0x18 (Inherited: 0x00)
struct FUpgradeTier {
	struct TArray<struct UItemUpgrade*> Upgrades; // 0x00(0x10)
	int32_t RequiredCharacterLevel; // 0x10(0x04)
	int32_t RequiredPlayerRank; // 0x14(0x04)
};

// ScriptStruct FSD.VanityTestCharacterItem
// Size: 0x10 (Inherited: 0x00)
struct FVanityTestCharacterItem {
	struct USkeletalMesh* Mesh; // 0x00(0x08)
	struct UVanityAnimInstance* AnimBP; // 0x08(0x08)
};

// ScriptStruct FSD.GenerateIconInfo
// Size: 0x28 (Inherited: 0x00)
struct FGenerateIconInfo {
	enum class EGeneratorIconType IconType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UPickaxePart* PickaxePart; // 0x08(0x08)
	enum class EPickaxePartLocation PickaxePartLocation; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct UVanityItem* Item; // 0x18(0x08)
	struct UPlayerCharacterID* Character; // 0x20(0x08)
};

// ScriptStruct FSD.TattooArmorItem
// Size: 0x10 (Inherited: 0x00)
struct FTattooArmorItem {
	struct UVanityTattoo* Tattoo; // 0x00(0x08)
	bool IsLeftArm; // 0x08(0x01)
	bool FlipTexture; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct FSD.WeakpointChannel
// Size: 0x28 (Inherited: 0x00)
struct FWeakpointChannel {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct UFSDPhysicalMaterial* WeakPointMaterial; // 0x10(0x08)
	struct UMaterialInstanceDynamic* Mid; // 0x18(0x08)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct FSD.WeakpointTask
// Size: 0x120 (Inherited: 0x00)
struct FWeakpointTask {
	struct FRuntimeFloatCurve GrowCurve; // 0x00(0x88)
	struct FRuntimeFloatCurve FadeCurve; // 0x88(0x88)
	char UnknownData_110[0x10]; // 0x110(0x10)
};

// ScriptStruct FSD.WeaponHitCounterEffectItem
// Size: 0x08 (Inherited: 0x00)
struct FWeaponHitCounterEffectItem {
	struct FWeakObjectPtr<struct AActor> Target; // 0x00(0x08)
};

// ScriptStruct FSD.WeightedRoomSelector
// Size: 0x10 (Inherited: 0x00)
struct FWeightedRoomSelector {
	struct TArray<struct FWeightedRoomSelectorItem> Items; // 0x00(0x10)
};

// ScriptStruct FSD.WeightedRoomSelectorItem
// Size: 0x10 (Inherited: 0x00)
struct FWeightedRoomSelectorItem {
	struct URoomGenerator* Room; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.XPSettings
// Size: 0x0c (Inherited: 0x00)
struct FXPSettings {
	float XP_PerGold; // 0x00(0x04)
	float XP_PerKill; // 0x04(0x04)
	float XP_OnSurvivedLevel; // 0x08(0x04)
};

// ScriptStruct FSD.ZapperTarget
// Size: 0x10 (Inherited: 0x00)
struct FZapperTarget {
	struct AActor* Target; // 0x00(0x08)
	float Timestamp; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FSD.ZipLineConnectorHandler
// Size: 0x30 (Inherited: 0x00)
struct FZipLineConnectorHandler {
	SoftClassProperty ConnectorClass; // 0x00(0x28)
	struct AZipLineConnector* Connector; // 0x28(0x08)
};

// ScriptStruct FSD.ZipLine
// Size: 0x38 (Inherited: 0x00)
struct FZipLine {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	char UnknownData_18[0x20]; // 0x18(0x20)
};

