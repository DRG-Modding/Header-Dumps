// Enum FSD.EDrinkableAlcoholStrength
enum class EDrinkableAlcoholStrength : uint8 {
	NonAlcoholic = 0,
	Light = 1,
	Regular = 2,
	Strong = 3,
	VeryStrong = 4,
	InstantPassout = 5,
	EDrinkableAlcoholStrength_MAX = 6
};

// Enum FSD.EIntoxicationState
enum class EIntoxicationState : uint8 {
	NotIntoxicated = 0,
	Intoxicated = 1,
	PassOut = 2,
	EIntoxicationState_MAX = 3
};

// Enum FSD.ECharacterState
enum class ECharacterState : uint8 {
	Walking = 0,
	Downed = 1,
	Dead = 2,
	Falling = 3,
	Paralyzed = 4,
	Using = 5,
	ZipLine = 6,
	NoMovement = 7,
	Grabbed = 8,
	Flying = 9,
	Frozen = 10,
	PassedOut = 11,
	Photography = 12,
	Piloting = 13,
	Attached = 14,
	Pushing = 15,
	TrackMovement = 16,
	EnemyControl = 17,
	Invalid = 18,
	ECharacterState_MAX = 19
};

// Enum FSD.ECharacterCameraMode
enum class ECharacterCameraMode : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	Follow = 2,
	DownCamera = 3,
	TerrainScanner = 4,
	PhotographyMode = 5,
	FirstPersonHeadOnly = 6,
	ECharacterCameraMode_MAX = 7
};

// Enum FSD.EOutline
enum class EOutline : uint8 {
	OL_NONE = 0,
	OL_FRIENDLY = 251,
	OL_NEUTRAL = 252,
	OL_ENEMY = 253,
	OL_ITEM = 254,
	EOutline_MAX = 255
};

// Enum FSD.EPlayerTemperatureState
enum class EPlayerTemperatureState : uint8 {
	Normal = 0,
	Frozen = 1,
	Overheated = 2,
	EPlayerTemperatureState_MAX = 3
};

// Enum FSD.EGroundLeechState
enum class EGroundLeechState : uint8 {
	Idle = 0,
	Tracking = 1,
	Pulling = 2,
	Retracting = 3,
	Dying = 4,
	Dead = 5,
	EGroundLeechState_MAX = 6
};

// Enum FSD.ECharselectionCameraLocation
enum class ECharselectionCameraLocation : uint8 {
	Selection = 0,
	Customization = 1,
	Crafting = 2,
	ViewWeapon = 3,
	EndScreen = 4,
	Forge = 5,
	Pickaxe = 6,
	ECharselectionCameraLocation_MAX = 7
};

// Enum FSD.EMinersManualSection
enum class EMinersManualSection : uint8 {
	FrontPage = 0,
	Hints = 1,
	Combat = 2,
	Creatures = 3,
	Biomes = 4,
	Missions = 5,
	Resources = 6,
	EMinersManualSection_MAX = 7
};

// Enum FSD.ECharacterSelectorItemStatus
enum class ECharacterSelectorItemStatus : uint8 {
	LeaveAsIs = 0,
	SwitchToDefault = 1,
	NoItemEquipped = 2,
	ECharacterSelectorItemStatus_MAX = 3
};

// Enum FSD.EGameType
enum class EGameType : uint8 {
	Fully = 0,
	Progression = 1,
	Sandbox = 2,
	Vanilla = 99,
	EGameType_MAX = 100
};

// Enum FSD.ESteamSearchRegion
enum class ESteamSearchRegion : uint8 {
	Close = 0,
	Medium = 1,
	Far = 2,
	World = 3,
	ESteamSearchRegion_MAX = 4
};

// Enum FSD.ESteamServerJoinStatus
enum class ESteamServerJoinStatus : uint8 {
	Open = 0,
	PasswordRequired = 1,
	ESteamServerJoinStatus_MAX = 2
};

// Enum FSD.EAlwaysLoadedWorlds
enum class EAlwaysLoadedWorlds : uint8 {
	CharacterViewer = 0,
	LoaderNormal = 1,
	LoaderDeepDive = 2,
	EAlwaysLoadedWorlds_MAX = 3
};

// Enum FSD.EDisconnectReason
enum class EDisconnectReason : uint8 {
	None = 0,
	Kicked_HaveMyReasons = 1,
	Kicked_ShouldBePrivate = 2,
	Kicked_AFK = 3,
	Banned = 4,
	ServerQuit = 5,
	Disconnected = 6,
	SignInChange = 7,
	JoinSessionFail_SessionIsFull = 8,
	JoinSessionFail_SessionDoesNotExist = 9,
	JoinSessionFail_Other = 10,
	JoinSessionFail_Privilege = 11,
	NetworkError = 12,
	SignOutComplete = 13,
	WrongPassword = 14,
	DeepDiveLateJoin = 15,
	MissionStarting = 16,
	LatejoinNotAllowed = 17,
	EDisconnectReason_MAX = 18
};

// Enum FSD.EChatSenderType
enum class EChatSenderType : uint8 {
	NormalUser = 0,
	DeluxUser = 1,
	Developer = 2,
	Streamer = 3,
	Modder = 4,
	EChatSenderType_MAX = 5
};

// Enum FSD.EChatMessageType
enum class EChatMessageType : uint8 {
	ES_Chat = 0,
	ES_Game = 1,
	ES_MAX = 2
};

// Enum FSD.EFSDInputSource
enum class EFSDInputSource : uint8 {
	None = 0,
	MouseAndKeyboard = 1,
	Controller = 2,
	EFSDInputSource_MAX = 3
};

// Enum FSD.EKeyboardLayout
enum class EKeyboardLayout : uint8 {
	QWERTY = 0,
	AZERTY = 1,
	QWERTZ = 2,
	EKeyboardLayout_MAX = 3
};

// Enum FSD.EHUDVisibilityReason
enum class EHUDVisibilityReason : uint8 {
	Invalid = 0,
	UserChoice = 1,
	StandDown = 2,
	MenuActive = 4,
	Photography = 8,
	EHUDVisibilityReason_MAX = 9
};

// Enum FSD.ESpacerigStartType
enum class ESpacerigStartType : uint8 {
	PlayerHub = 0,
	Medbay = 1,
	ESpacerigStartType_MAX = 2
};

// Enum FSD.EItemCategory
enum class EItemCategory : uint8 {
	PrimaryWeapon = 0,
	SecondaryWeapon = 1,
	TraversalTool = 2,
	ClassTool = 3,
	Grenade = 4,
	Flare = 5,
	MiningTool = 6,
	Armor = 7,
	EItemCategory_MAX = 8
};

// Enum FSD.EFSDFaction
enum class EFSDFaction : uint8 {
	NoFaction = 0,
	CaveCrawlers = 1,
	MightyMiners = 2,
	DirtDiggers = 3,
	EFSDFaction_MAX = 4
};

// Enum FSD.EHUDVisibilityMode
enum class EHUDVisibilityMode : uint8 {
	Visible = 0,
	Dynamic = 1,
	Hidden = 2,
	EHUDVisibilityMode_MAX = 3
};

// Enum FSD.EVanitySlot
enum class EVanitySlot : uint8 {
	Head = 0,
	Beard = 1,
	Armor = 2,
	BeardColor = 3,
	SkinColor = 4,
	Moustache = 5,
	Eyebrows = 6,
	Sideburns = 7,
	ArmorMaterial = 8,
	Count = 9,
	EVanitySlot_MAX = 10
};

// Enum FSD.ECampaignType
enum class ECampaignType : uint8 {
	Normal = 0,
	Weekly = 1,
	MatrixCoreHunt = 2,
	ECampaignType_MAX = 3
};

// Enum FSD.EItemPreviewStatus
enum class EItemPreviewStatus : uint8 {
	Normal = 0,
	Upgraded = 1,
	Previewed = 2,
	PreviewReduced = 3,
	UpgradedAndPreviewReduced = 4,
	EItemPreviewStatus_MAX = 5
};

// Enum FSD.EUpgradeCalucationType
enum class EUpgradeCalucationType : uint8 {
	Additive = 0,
	Multiplicative = 1,
	EUpgradeCalucationType_MAX = 2
};

// Enum FSD.EUpgradeClass
enum class EUpgradeClass : uint8 {
	Class_A = 0,
	Class_B = 1,
	Gear_A = 2,
	Gear_B = 3,
	Armor = 4,
	Pickaxe = 5,
	Class_Bosco = 10,
	EUpgradeClass_MAX = 11
};

// Enum FSD.EUpgradeTiers
enum class EUpgradeTiers : uint8 {
	Tier_2 = 0,
	Tier_3 = 1,
	Tier_4 = 2,
	Tier_5 = 3,
	Tier_6 = 4,
	Tier_MAX = 5
};

// Enum FSD.EDroneAIState
enum class EDroneAIState : uint8 {
	Follow = 0,
	Mine = 1,
	Fight = 2,
	Revive = 3,
	Light = 4,
	GoToPlayer = 5,
	Salute = 6,
	CarryGem = 7,
	UseAbillity = 8,
	Repairing = 9,
	EDroneAIState_MAX = 10
};

// Enum FSD.ERessuplyPodState
enum class ERessuplyPodState : uint8 {
	ReadyToDrop = 0,
	Dropping = 1,
	Landed = 2,
	Idle = 3,
	ERessuplyPodState_MAX = 4
};

// Enum FSD.EUseRestriction
enum class EUseRestriction : uint8 {
	Free = 0,
	DepositOnly = 1,
	Repair = 2,
	Zipline = 3,
	BlockAll = 4,
	PickupItem = 5,
	EUseRestriction_MAX = 6
};

// Enum FSD.EEnemyHealthScaling
enum class EEnemyHealthScaling : uint8 {
	SmallEnemy = 0,
	LargeEnemy = 1,
	ExtraLargeEnemy = 2,
	ExtraLargeEnemyB = 4,
	ExtraLargeEnemyC = 5,
	ExtraLargeEnemyD = 6,
	NoScaling = 3,
	EEnemyHealthScaling_MAX = 7
};

// Enum FSD.EHealthbarType
enum class EHealthbarType : uint8 {
	None = 0,
	MainLife = 1,
	Shield = 2,
	EHealthbarType_MAX = 3
};

// Enum FSD.EMissionStatType
enum class EMissionStatType : uint8 {
	Float = 0,
	Integer = 1,
	Time = 2,
	Distance = 3,
	EMissionStatType_MAX = 4
};

// Enum FSD.ERefineryState
enum class ERefineryState : uint8 {
	Landing = 0,
	ConnectingPipes = 1,
	PipesConnected = 2,
	Refining = 3,
	RefiningStalled = 4,
	RefiningComplete = 5,
	RocketLaunched = 6,
	ERefineryState_MAX = 7
};

// Enum FSD.EFrozenBitsSize
enum class EFrozenBitsSize : uint8 {
	Tiny = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	Huge = 4,
	EFrozenBitsSize_MAX = 5
};

// Enum FSD.EDropPodState
enum class EDropPodState : uint8 {
	WaitingToDrop = 0,
	Drilling = 1,
	Landed = 2,
	PrepTakeoff = 3,
	Departing = 4,
	EDropPodState_MAX = 5
};

// Enum FSD.EPipelineBuildState
enum class EPipelineBuildState : uint8 {
	NotStarted = 0,
	BeginBuilt = 1,
	Completed = 2,
	Broken = 3,
	EPipelineBuildState_MAX = 4
};

// Enum FSD.ETrackBuildPlacementState
enum class ETrackBuildPlacementState : uint8 {
	NotBeingPlaced = 0,
	BeingPlaced = 1,
	Finished = 2,
	ETrackBuildPlacementState_MAX = 3
};

// Enum FSD.ESchematicState
enum class ESchematicState : uint8 {
	NotOwned = 0,
	OwnedCannotBuild = 1,
	OwnedCanBuild = 2,
	OwnedBuilt = 3,
	ESchematicState_MAX = 4
};

// Enum FSD.ESchematicType
enum class ESchematicType : uint8 {
	Overclock = 0,
	Vanity = 1,
	Resource = 2,
	Blank = 3,
	ESchematicType_MAX = 4
};

// Enum FSD.EHUDVisibilityPresets
enum class EHUDVisibilityPresets : uint8 {
	AllVisible = 0,
	Recommended = 1,
	Minimal = 2,
	AllHidden = 3,
	EHUDVisibilityPresets_MAX = 4
};

// Enum FSD.EHUDVisibilityGroups
enum class EHUDVisibilityGroups : uint8 {
	OnScreenHelp = 0,
	EnemyHealth = 1,
	RadarAndDepth = 2,
	PlayerHealthShield = 3,
	PlayerNameClassIcon = 4,
	PlayerItems = 5,
	PlayerResources = 6,
	WeaponInfo = 7,
	Grenades = 8,
	FlashLight = 9,
	Flares = 10,
	Crosshair = 11,
	Objectives = 12,
	TeamDisplay = 13,
	SentryGunDisplay = 14,
	EHUDVisibilityGroups_MAX = 15
};

// Enum FSD.ELaserPointerTargetType
enum class ELaserPointerTargetType : uint8 {
	Chunkable = 0,
	Dirt = 1,
	Player = 2,
	Enemy = 3,
	EmbeddedGem = 4,
	Other = 5,
	ELaserPointerTargetType_MAX = 6
};

// Enum FSD.EOnProjectileImpactBehaviourEnum
enum class EOnProjectileImpactBehaviourEnum : uint8 {
	CallOnPredict = 0,
	CallOnConfirmed = 1,
	CallOnPredictAndConfirmed = 2,
	EOnProjectileImpactBehaviourEnum_MAX = 3
};

// Enum FSD.ELineRotation
enum class ELineRotation : uint8 {
	None = 0,
	Yaw = 1,
	Pitch = 2,
	Roll = 3,
	ELineRotation_MAX = 4
};

// Enum FSD.EImpactDecalSize
enum class EImpactDecalSize : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	None = 3,
	EImpactDecalSize_MAX = 4
};

// Enum FSD.EPawnAttitude
enum class EPawnAttitude : uint8 {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	EPawnAttitude_MAX = 3
};

// Enum FSD.ERecallableActorState
enum class ERecallableActorState : uint8 {
	Idle = 0,
	RelocateRequested = 1,
	Relocating = 2,
	ReturnRequested = 3,
	Returning = 4,
	Home = 5,
	ERecallableActorState_MAX = 6
};

// Enum FSD.ERedeployableSentryGunState
enum class ERedeployableSentryGunState : uint8 {
	Deploying = 0,
	Deployed = 1,
	Dismantling = 2,
	Dismantled = 3,
	ERedeployableSentryGunState_MAX = 4
};

// Enum FSD.EItemSkinType
enum class EItemSkinType : uint8 {
	Color = 0,
	Mesh = 1,
	EItemSkinType_MAX = 2
};

// Enum FSD.EThrownGrenadeItemState
enum class EThrownGrenadeItemState : uint8 {
	NotEquipped = 0,
	Cooking = 1,
	Throwing = 2,
	EThrownGrenadeItemState_MAX = 3
};

// Enum FSD.EFriendOnlineStatusEnum
enum class EFriendOnlineStatusEnum : uint8 {
	Online = 0,
	Offline = 1,
	Away = 2,
	EFriendOnlineStatusEnum_MAX = 3
};

// Enum FSD.EBlueprintablePrivilegeResults
enum class EBlueprintablePrivilegeResults : uint8 {
	NoFailures = 0,
	RequiredPatchAvailable = 1,
	RequiredSystemUpdate = 2,
	AgeRestrictionFailure = 3,
	AccountTypeFailure = 4,
	UserNotFound = 5,
	UserNotLoggedIn = 6,
	ChatRestriction = 7,
	UGCRestriction = 8,
	GenericFailure = 9,
	OnlinePlayRestricted = 10,
	NetworkConnectionUnavailable = 11,
	EBlueprintablePrivilegeResults_MAX = 12
};

// Enum FSD.EBlueprintableUserPrivileges
enum class EBlueprintableUserPrivileges : uint8 {
	CanPlay = 0,
	CanPlayOnline = 1,
	CanCommunicateOnline = 2,
	CanUseUserGeneratedContent = 3,
	CanUserCrossPlay = 4,
	EBlueprintableUserPrivileges_MAX = 5
};

// Enum FSD.EDeepMovementState
enum class EDeepMovementState : uint8 {
	Stationary = 0,
	Controlled = 1,
	Moving = 2,
	WaitingForPath = 3,
	AttackStance = 4,
	FakePhysics = 5,
	EDeepMovementState_MAX = 6
};

// Enum FSD.EFSDTargetPlatform
enum class EFSDTargetPlatform : uint8 {
	Steam = 0,
	XboxOne = 1,
	Win10 = 2,
	PS4 = 3,
	PS5 = 4,
	EFSDTargetPlatform_MAX = 5
};

// Enum FSD.ECreatureSize
enum class ECreatureSize : uint8 {
	Tiny = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	Huge = 4,
	ECreatureSize_MAX = 5
};

// Enum FSD.EAmmoWeaponState
enum class EAmmoWeaponState : uint8 {
	Equipping = 0,
	Ready = 1,
	Cycling = 2,
	Reloading = 3,
	BurstCycling = 4,
	EAmmoWeaponState_MAX = 5
};

// Enum FSD.EAsyncLoadPriority
enum class EAsyncLoadPriority : uint8 {
	Normal = 0,
	High = 100,
	Low = 255,
	EAsyncLoadPriority_MAX = 256
};

// Enum FSD.EAsyncPersistence
enum class EAsyncPersistence : uint8 {
	Manual = 0,
	Level = 1,
	Permanent = 2,
	EAsyncPersistence_MAX = 3
};

// Enum FSD.EPlatformRestriction
enum class EPlatformRestriction : uint8 {
	Editor = 0,
	Steam = 1,
	Oddish = 2,
	UniversalWindowsPlatform = 3,
	XBoxOne = 4,
	PS4 = 5,
	EPlatformRestriction_MAX = 6
};

// Enum FSD.EBuildTypeRestriction
enum class EBuildTypeRestriction : uint8 {
	Development = 0,
	Shipping = 1,
	EBuildTypeRestriction_MAX = 2
};

// Enum FSD.ECampaignMutators
enum class ECampaignMutators : uint8 {
	NotAllowed = 0,
	Allowed = 1,
	Preffered = 2,
	ECampaignMutators_MAX = 3
};

// Enum FSD.ECellCategory
enum class ECellCategory : uint8 {
	Cave = 0,
	Tunnel = 1,
	ECellCategory_MAX = 255
};

// Enum FSD.ECaveLeechState
enum class ECaveLeechState : uint8 {
	Idle = 0,
	Tracking = 1,
	Pulling = 2,
	Retracting = 3,
	Dying = 4,
	Dead = 5,
	Frozen = 6,
	ECaveLeechState_MAX = 7
};

// Enum FSD.ECustomUsableType
enum class ECustomUsableType : uint8 {
	ClearOnFrameEnd = 0,
	ClearOnUseReleased = 1,
	ECustomUsableType_MAX = 2
};

// Enum FSD.EFSDChromaEffect
enum class EFSDChromaEffect : uint8 {
	HealthDamage = 0,
	ShieldDamage = 1,
	Flare = 2,
	MissionSuccess = 3,
	None = 4,
	EFSDChromaEffect_MAX = 5
};

// Enum FSD.EExampleEnum
enum class EExampleEnum : uint8 {
	FirstName = 0,
	SecondName = 1,
	EExampleEnum_MAX = 2
};

// Enum FSD.EShoutType
enum class EShoutType : uint8 {
	Attention = 0,
	Follow = 1,
	StandingDown = 2,
	Downed = 3,
	RequestRevive = 4,
	Revived = 5,
	Resupply = 6,
	FriendlyFire = 7,
	KillCry = 8,
	Dead = 9,
	Cheating = 10,
	ResourceFull = 11,
	ResourceFullNoDonkey = 12,
	CallDonkey = 13,
	Depositing = 14,
	DepositingNoDonkey = 15,
	OutOfAmmo = 16,
	Reloading = 17,
	CharacterSelected = 18,
	UpgradeBought = 19,
	WaitingInDropPod = 20,
	Carrying = 21,
	EShoutType_MAX = 22
};

// Enum FSD.ECommunityGoalTier
enum class ECommunityGoalTier : uint8 {
	Bronze = 0,
	Silver = 1,
	Gold = 2,
	ECommunityGoalTier_MAX = 3
};

// Enum FSD.ECommunityGoalType
enum class ECommunityGoalType : uint8 {
	Float = 0,
	Integer = 1,
	Time = 2,
	Distance = 3,
	ECommunityGoalType_MAX = 4
};

// Enum FSD.ECommunityUIState
enum class ECommunityUIState : uint8 {
	Loading = 0,
	SelectFaction = 1,
	Progress = 2,
	Recruitment = 3,
	Reward = 4,
	Invalid = 5,
	ECommunityUIState_MAX = 6
};

// Enum FSD.ERobotState
enum class ERobotState : uint8 {
	Enemy = 0,
	Friendly = 1,
	PoweredDown = 2,
	ERobotState_MAX = 3
};

// Enum FSD.EKeyBindingAxis
enum class EKeyBindingAxis : uint8 {
	None = 0,
	Positive = 1,
	Negative = 2,
	EKeyBindingAxis_MAX = 3
};

// Enum FSD.EDealType
enum class EDealType : uint8 {
	Buy = 0,
	Sell = 1,
	EDealType_MAX = 2
};

// Enum FSD.EDamageComponentType
enum class EDamageComponentType : uint8 {
	Primary = 0,
	Secondary = 1,
	EDamageComponentType_MAX = 2
};

// Enum FSD.EDashPointsGenerationMode
enum class EDashPointsGenerationMode : uint8 {
	Surround = 0,
	Forward = 1,
	EDashPointsGenerationMode_MAX = 2
};

// Enum FSD.EDebrisOrientation
enum class EDebrisOrientation : uint8 {
	Random = 0,
	RandomXY = 1,
	AlignToSurfaceNormal = 2,
	Fixed = 3,
	EDebrisOrientation_MAX = 4
};

// Enum FSD.EDebrisMeshShadows
enum class EDebrisMeshShadows : uint8 {
	Never = 0,
	High = 1,
	Always = 2,
	EDebrisMeshShadows_MAX = 3
};

// Enum FSD.EDebrisMeshCollisionProfile
enum class EDebrisMeshCollisionProfile : uint8 {
	NoCollision = 0,
	HitOnly = 1,
	HitAndCollide = 2,
	EDebrisMeshCollisionProfile_MAX = 3
};

// Enum FSD.EDebrisColliderType
enum class EDebrisColliderType : uint8 {
	Object = 0,
	AirParticles = 1,
	ObjectB = 2,
	ObjectC = 3,
	EDebrisColliderType_MAX = 4
};

// Enum FSD.EDebrisCarvedType
enum class EDebrisCarvedType : uint8 {
	Large = 0,
	Small = 1,
	LevelGeneration = 2,
	Resources = 3,
	EDebrisCarvedType_MAX = 4
};

// Enum FSD.EDebrisItemPass
enum class EDebrisItemPass : uint8 {
	PrePlacement = 0,
	Main = 1,
	EDebrisItemPass_MAX = 2
};

// Enum FSD.EDecalImportance
enum class EDecalImportance : uint8 {
	High = 0,
	Normal = 1,
	Low = 2,
	EDecalImportance_MAX = 3
};

// Enum FSD.ELandscapeCellFilter
enum class ELandscapeCellFilter : uint8 {
	Any = 0,
	Empty = 1,
	Filled = 2,
	Diggable = 3,
	NotDiggable = 4,
	Collidable = 5,
	NotCollidable = 6,
	Rubble = 7,
	NotRubble = 8,
	ELandscapeCellFilter_MAX = 9
};

// Enum FSD.EOffsetFrom
enum class EOffsetFrom : uint8 {
	None = 0,
	Floor = 1,
	Ceiling = 2,
	EOffsetFrom_MAX = 3
};

// Enum FSD.EDeepMovementMode
enum class EDeepMovementMode : uint8 {
	Normal = 0,
	Flee = 1,
	Fly = 2,
	BackOff = 3,
	EDeepMovementMode_MAX = 4
};

// Enum FSD.EDefendPointState
enum class EDefendPointState : uint8 {
	Idle = 0,
	Started = 1,
	Completed = 2,
	Failed = 3,
	EDefendPointState_MAX = 4
};

// Enum FSD.EDialogRestriction
enum class EDialogRestriction : uint8 {
	None = 0,
	SinglePlayerOnly = 1,
	MultiPlayerOnly = 2,
	EDialogRestriction_MAX = 3
};

// Enum FSD.EVeteranScaling
enum class EVeteranScaling : uint8 {
	NormalEnemy = 0,
	LargeEnemy = 1,
	EVeteranScaling_MAX = 2
};

// Enum FSD.EEnemySignificance
enum class EEnemySignificance : uint8 {
	Swarmer = 0,
	Normal = 1,
	Critical = 2,
	Critter = 3,
	EEnemySignificance_MAX = 4
};

// Enum FSD.EDiscordBiomeType
enum class EDiscordBiomeType : uint8 {
	CrystallineCaverns = 0,
	FungusBogs = 1,
	GlacialStrata = 2,
	DenseBiozone = 3,
	MagmaCore = 4,
	Radioactive = 5,
	SaltPits = 6,
	Sandblasted = 7,
	CausticMire = 8,
	AzureWeald = 9,
	HollowBough = 10,
	Spacerig = 11,
	EDiscordBiomeType_MAX = 12
};

// Enum FSD.EDiscordMissionType
enum class EDiscordMissionType : uint8 {
	MiningExpedition = 0,
	EggHunt = 1,
	Escort = 2,
	Elimination = 3,
	PointExtraction = 4,
	Salvage = 5,
	Refinery = 6,
	None = 7,
	EDiscordMissionType_MAX = 8
};

// Enum FSD.EDoubleDrillState
enum class EDoubleDrillState : uint8 {
	Equipping = 0,
	Idle = 1,
	Mining = 2,
	Overheated = 3,
	EDoubleDrillState_MAX = 4
};

// Enum FSD.EBoscoAbillityTargetPreference
enum class EBoscoAbillityTargetPreference : uint8 {
	Self = 0,
	SelectedTarget = 1,
	ClosestPlayer = 2,
	ClosestEnemy = 3,
	TargetLocation = 4,
	EBoscoAbillityTargetPreference_MAX = 5
};

// Enum FSD.EDroneActions
enum class EDroneActions : uint8 {
	Wandering = 0,
	Mining = 1,
	Fighting = 2,
	Lighting = 3,
	Reviving = 4,
	EDroneActions_MAX = 5
};

// Enum FSD.EDynamicReverbSetting
enum class EDynamicReverbSetting : uint8 {
	None = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	EDynamicReverbSetting_MAX = 4
};

// Enum FSD.EEnemyControlState
enum class EEnemyControlState : uint8 {
	Connecting = 0,
	Connected = 1,
	ThrowingOff = 2,
	Disconnecting = 3,
	Disconneced = 4,
	EEnemyControlState_MAX = 5
};

// Enum FSD.EEnemyFamily
enum class EEnemyFamily : uint8 {
	Glyphid = 0,
	Mactera = 1,
	Naedocyte = 2,
	Qronar = 3,
	Xynarch = 4,
	Nayaka = 5,
	Deeptora = 6,
	Korlok = 7,
	Automaton = 8,
	Unknown = 9,
	EEnemyFamily_MAX = 10
};

// Enum FSD.EEnemyType
enum class EEnemyType : uint8 {
	Ground = 0,
	Flying = 1,
	Stationary = 2,
	EEnemyType_MAX = 3
};

// Enum FSD.EEscortExtractorState
enum class EEscortExtractorState : uint8 {
	ReadyToGrab = 0,
	Taken = 1,
	Full = 2,
	EEscortExtractorState_MAX = 3
};

// Enum FSD.EEscortMissionState
enum class EEscortMissionState : uint8 {
	Stationary = 0,
	Moving = 1,
	WaitingForFuel = 2,
	FinalEvent = 3,
	Finished = 4,
	ShellCracked = 5,
	VehicleDead = 6,
	InGarage = 7,
	EEscortMissionState_MAX = 8
};

// Enum FSD.EExtractorState
enum class EExtractorState : uint8 {
	Attached = 0,
	OnGround = 1,
	Equipping = 2,
	Idle = 3,
	Mining = 4,
	EExtractorState_MAX = 5
};

// Enum FSD.EFacilityDroneState
enum class EFacilityDroneState : uint8 {
	Idle = 0,
	Rolling = 1,
	Flying = 2,
	EFacilityDroneState_MAX = 3
};

// Enum FSD.EFSDAchievementType
enum class EFSDAchievementType : uint8 {
	NoStatUsed = 0,
	IncrementStatPerCall = 1,
	SetStatIfHighscore = 2,
	ForceNewStatEachCall = 3,
	EFSDAchievementType_MAX = 4
};

// Enum FSD.ETargetStateDamageBonusType
enum class ETargetStateDamageBonusType : uint8 {
	Frozen = 0,
	OnFire = 1,
	Fleeing = 2,
	Staggered = 3,
	ETargetStateDamageBonusType_MAX = 4
};

// Enum FSD.EPauseReason
enum class EPauseReason : uint8 {
	Invalid = 0,
	MenuActive = 1,
	ReconnectController = 2,
	EPauseReason_MAX = 3
};

// Enum FSD.ESaveSlotChangeProcedure
enum class ESaveSlotChangeProcedure : uint8 {
	NewSave = 0,
	Load = 1,
	Save = 2,
	NewModdedSave = 3,
	ESaveSlotChangeProcedure_MAX = 4
};

// Enum FSD.EInputInteraction
enum class EInputInteraction : uint8 {
	Press = 0,
	Hold = 1,
	EInputInteraction_MAX = 2
};

// Enum FSD.EVolumeType
enum class EVolumeType : uint8 {
	CharacterVoices = 0,
	Master = 1,
	SFX = 2,
	Music = 3,
	VoiceChat = 4,
	MissionControl = 5,
	EVolumeType_MAX = 6
};

// Enum FSD.EPostProcessingType
enum class EPostProcessingType : uint8 {
	GameWorld = 0,
	CharacterSelector = 1,
	EPostProcessingType_MAX = 2
};

// Enum FSD.EItemNotificationType
enum class EItemNotificationType : uint8 {
	NewOverclock = 0,
	EItemNotificationType_MAX = 1
};

// Enum FSD.ESteamBranch
enum class ESteamBranch : uint8 {
	Main = 0,
	Experimental = 1,
	Internal_Testing = 2,
	Other = 3,
	ESteamBranch_MAX = 4
};

// Enum FSD.EMoveType
enum class EMoveType : uint8 {
	EaseIn = 0,
	EaseOut = 1,
	EMoveType_MAX = 2
};

// Enum FSD.EPingType
enum class EPingType : uint8 {
	EaseOut = 0,
	Bounce = 1,
	EPingType_MAX = 2
};

// Enum FSD.ECommunityGoalIndex
enum class ECommunityGoalIndex : uint8 {
	KillBroodNexus = 0,
	KillBulkDetonators = 1,
	KillCaveLeeches = 2,
	KillJellyBreeders = 3,
	KillPretorians = 4,
	KillShellbacks = 5,
	KillSpitballers = 6,
	CollectBittergem = 7,
	CollectCompressedGold = 8,
	CollectGold = 9,
	CollectCraftingMaterials = 10,
	GainXP = 11,
	TestGoal = 12,
	Count = 13,
	ECommunityGoalIndex_MAX = 14
};

// Enum FSD.EFSDGoogleAnalyticsProperties
enum class EFSDGoogleAnalyticsProperties : uint8 {
	DRG = 0,
	Discord = 1,
	CommunityGoals = 2,
	DRG_Discord = 3,
	All = 4,
	Other = 5,
	EFSDGoogleAnalyticsProperties_MAX = 6
};

// Enum FSD.EGrabberState
enum class EGrabberState : uint8 {
	StandBy = 0,
	Chase = 1,
	Wander = 2,
	Carry = 3,
	Flee = 4,
	EGrabberState_MAX = 5
};

// Enum FSD.EGrabbedStateCameraMode
enum class EGrabbedStateCameraMode : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	EGrabbedStateCameraMode_MAX = 2
};

// Enum FSD.ERicochetBehavior
enum class ERicochetBehavior : uint8 {
	All = 0,
	PawnsOnly = 1,
	NotPawns = 2,
	ERicochetBehavior_MAX = 3
};

// Enum FSD.EKeyBindingSlot
enum class EKeyBindingSlot : uint8 {
	Primary = 0,
	Secondary = 1,
	EKeyBindingSlot_MAX = 2
};

// Enum FSD.ECharacterAnimSet
enum class ECharacterAnimSet : uint8 {
	Pistol = 0,
	Rifle = 1,
	HeavyLow = 2,
	NoHands = 3,
	HeavyDual = 4,
	DualPistol = 5,
	HeavyFront = 6,
	ECharacterAnimSet_MAX = 7
};

// Enum FSD.EItemSkinCollectionType
enum class EItemSkinCollectionType : uint8 {
	PerCharacter = 0,
	PerItem = 1,
	EItemSkinCollectionType_MAX = 2
};

// Enum FSD.EProjectileLauncherBaseUpgradeType
enum class EProjectileLauncherBaseUpgradeType : uint8 {
	VerticalSpread = 0,
	HorizontalSpread = 1,
	TransferVelocityFromCharacter = 2,
	EProjectileLauncherBaseUpgradeType_MAX = 3
};

// Enum FSD.EDetPackUpgrades
enum class EDetPackUpgrades : uint8 {
	CanPickUp = 0,
	CarveDiameter = 1,
	ExplodeOnDeath = 2,
	ExtraFearRadius = 3,
	ExtraStaggerRadius = 4,
	EDetPackUpgrades_MAX = 5
};

// Enum FSD.EPlatformGunUpgrades
enum class EPlatformGunUpgrades : uint8 {
	BiggerPlatform = 0,
	LessFallDamage = 1,
	BugRepellant = 2,
	CubePlatform = 3,
	EPlatformGunUpgrades_MAX = 4
};

// Enum FSD.EBoscoUpgrades
enum class EBoscoUpgrades : uint8 {
	MiningSpeedUpgrade = 0,
	ExtraRevive = 1,
	ActiveLightRadius = 2,
	Missile = 3,
	CryoGrenade = 4,
	SACooldownReduction = 5,
	ExtraAbillityCharge = 6,
	EBoscoUpgrades_MAX = 7
};

// Enum FSD.EArmorUpgradeType
enum class EArmorUpgradeType : uint8 {
	RegenDelay = 0,
	RegenRate = 1,
	ReviveInvulnerability = 2,
	EArmorUpgradeType_MAX = 3
};

// Enum FSD.ETriggeredStatusEffectType
enum class ETriggeredStatusEffectType : uint8 {
	ShieldDestroyed = 0,
	GrapplingHookReleased = 1,
	NONE = 2,
	ETriggeredStatusEffectType_MAX = 3
};

// Enum FSD.EArmorRegeneratorUpgrades
enum class EArmorRegeneratorUpgrades : uint8 {
	Radius = 0,
	Duration = 1,
	DeployTime = 2,
	RechargeTime = 3,
	RechargeCount = 4,
	PushStatusEffect = 5,
	EArmorRegeneratorUpgrades_MAX = 6
};

// Enum FSD.ESentryGunUpgradeType
enum class ESentryGunUpgradeType : uint8 {
	MaxAmmo = 0,
	ReloadSpeed = 1,
	ExtraSentry = 2,
	AngleRestriction = 3,
	ManualTargeting = 4,
	MaxRange = 5,
	RotationSpeed = 6,
	BurstCooldown = 7,
	ESentryGunUpgradeType_MAX = 8
};

// Enum FSD.EGrapplingHookUpgrade
enum class EGrapplingHookUpgrade : uint8 {
	MaxDistance = 0,
	MaxSpeed = 1,
	WindUpTime = 2,
	EGrapplingHookUpgrade_MAX = 3
};

// Enum FSD.EZiplineGunUpgrades
enum class EZiplineGunUpgrades : uint8 {
	MaxAngle = 0,
	MaxDistance = 1,
	MovementSpeed = 2,
	FallDamageReduction = 3,
	EZiplineGunUpgrades_MAX = 4
};

// Enum FSD.EElectricalSMGUpgrades
enum class EElectricalSMGUpgrades : uint8 {
	AoEChance = 0,
	PlasmaBeam = 1,
	TurretEMPDischarge = 2,
	EElectricalSMGUpgrades_MAX = 3
};

// Enum FSD.EChargedProjectileUpgrades
enum class EChargedProjectileUpgrades : uint8 {
	ExplodesOnDamage = 0,
	AoEDamageInFlight = 1,
	PersistentExplosion = 2,
	EChargedProjectileUpgrades_MAX = 3
};

// Enum FSD.EFlaregunProjectileUpgrades
enum class EFlaregunProjectileUpgrades : uint8 {
	Duration = 0,
	EFlaregunProjectileUpgrades_MAX = 1
};

// Enum FSD.EFlaregunUpgrades
enum class EFlaregunUpgrades : uint8 {
	AutoReload = 0,
	EFlaregunUpgrades_MAX = 1
};

// Enum FSD.EProjectileUpgrade
enum class EProjectileUpgrade : uint8 {
	Velocity = 0,
	Bouncy = 1,
	Lifetime = 2,
	DoOnImpact = 3,
	DoOnImpact2 = 4,
	DoOnImpact3 = 5,
	DoOnSpawn = 6,
	EProjectileUpgrade_MAX = 7
};

// Enum FSD.ELineCutterProjectileUpgradeType
enum class ELineCutterProjectileUpgradeType : uint8 {
	LineSize = 0,
	LineSizeMultiplier = 1,
	ExplosiveRound = 2,
	SetDeployDelay = 3,
	AddDeployTime = 4,
	ExplodeOnNextProjectile = 5,
	DoubleLine = 6,
	LineSizeAdd = 7,
	SetDeployTime = 8,
	RollUntilStop = 9,
	Yawing = 10,
	PlasmaTrail = 11,
	ELineCutterProjectileUpgradeType_MAX = 12
};

// Enum FSD.ELineCutterUpgradeType
enum class ELineCutterUpgradeType : uint8 {
	ReverseDirection = 0,
	ExplodeLastProjectile = 1,
	ELineCutterUpgradeType_MAX = 2
};

// Enum FSD.EGrenadeUpgradeType
enum class EGrenadeUpgradeType : uint8 {
	MaxGrenades = 0,
	FuseTime = 1,
	EGrenadeUpgradeType_MAX = 2
};

// Enum FSD.EFlareUpgradeType
enum class EFlareUpgradeType : uint8 {
	Duration = 0,
	MaxFlares = 1,
	ProductionTime = 2,
	EFlareUpgradeType_MAX = 3
};

// Enum FSD.ESingleUsableUpgradeType
enum class ESingleUsableUpgradeType : uint8 {
	UseDuration = 0,
	ESingleUsableUpgradeType_MAX = 1
};

// Enum FSD.EExplosionUpgrade
enum class EExplosionUpgrade : uint8 {
	NOTUSED = 0,
	EExplosionUpgrade_MAX = 1
};

// Enum FSD.EDamageUpgrade
enum class EDamageUpgrade : uint8 {
	Damage = 0,
	WeakpointDamageMultiplier = 1,
	StaggerChance = 2,
	StaggerDuration = 3,
	RadialDamage = 4,
	RadialRange = 5,
	ArmorDamageMultiplier = 6,
	FearFactor = 7,
	RadialRangeMultiplier = 8,
	StaggerOnWeakpointOnly = 9,
	FriendlyFireModifier = 10,
	EDamageUpgrade_MAX = 11
};

// Enum FSD.EHitScanBaseUpgradeType
enum class EHitScanBaseUpgradeType : uint8 {
	MaxVerticalSpread = 0,
	MaxHorizontalSpread = 1,
	MaxPenetrations = 2,
	WeaponAccuracySpreadMultiplier = 3,
	SpreadPerShot = 4,
	MinSpreadWhileMoving = 5,
	SpreadRecoveryMultiplier = 6,
	MinSpreadWhileSprinting = 7,
	MaxSpread = 8,
	RicochetChance = 9,
	RicochetOnWeakspotOnly = 10,
	RicochetBehaviourAll = 11,
	RicochetBehaviourPawnsOnly = 12,
	RicochetBehaviourNotPawns = 13,
	EHitScanBaseUpgradeType_MAX = 14
};

// Enum FSD.EMultiHitscanUpgradeType
enum class EMultiHitscanUpgradeType : uint8 {
	BulletsPerShot = 0,
	EMultiHitscanUpgradeType_MAX = 1
};

// Enum FSD.EInventoryItemUpgradeType
enum class EInventoryItemUpgradeType : uint8 {
	MovementSpeedWhileUsing = 0,
	CooldownRate = 1,
	UnJamDuration = 2,
	ManualCooldownDelay = 3,
	EInventoryItemUpgradeType_MAX = 4
};

// Enum FSD.EDoubleDrillUpgradeType
enum class EDoubleDrillUpgradeType : uint8 {
	MiningRate = 0,
	MaxFuel = 1,
	HeatRemovalOnKill = 2,
	HeatRemovalOnDamage = 3,
	MovementPenalty = 4,
	EDoubleDrillUpgradeType_MAX = 5
};

// Enum FSD.EFlameThrowerUpgradeType
enum class EFlameThrowerUpgradeType : uint8 {
	StickyFlameDuration = 0,
	LongReach = 1,
	AoEHeat = 2,
	KilledTargetsExplodeChance = 3,
	EFlameThrowerUpgradeType_MAX = 4
};

// Enum FSD.EPickaxeUpgradeType
enum class EPickaxeUpgradeType : uint8 {
	RockMining = 0,
	OneHitMineralMining = 1,
	ReceiveBonusMineralNitra = 2,
	ReceiveBonusMineralGold = 3,
	EnablePowerAttack = 4,
	PowerAttackCoolDown = 5,
	EPickaxeUpgradeType_MAX = 6
};

// Enum FSD.ECryoSprayUpgrades
enum class ECryoSprayUpgrades : uint8 {
	PressureDropMultiplier = 0,
	PressureGainMultiplier = 1,
	ChargeupTime = 2,
	RePressurisationTime = 3,
	FrozenTargetsCanShatter = 4,
	AoECold = 5,
	LongReach = 6,
	ECryoSprayUpgrades_MAX = 7
};

// Enum FSD.ERevolerUpgrades
enum class ERevolerUpgrades : uint8 {
	OnKillFearFactor = 0,
	ERevolerUpgrades_MAX = 1
};

// Enum FSD.EBasicPistol
enum class EBasicPistol : uint8 {
	ConsecutiveHitsDamageBonus = 0,
	EBasicPistol_MAX = 1
};

// Enum FSD.EAutoShotgunUpgrades
enum class EAutoShotgunUpgrades : uint8 {
	TurretSpecialAttackEnabled = 0,
	RateOfFireAndAutoMatic = 1,
	EAutoShotgunUpgrades_MAX = 2
};

// Enum FSD.EBurstWeaponUpgrades
enum class EBurstWeaponUpgrades : uint8 {
	FullBurstHitBonusDamage = 0,
	FullBurstStaggerDuraion = 1,
	EBurstWeaponUpgrades_MAX = 2
};

// Enum FSD.ESawedOffShotgunUpgrades
enum class ESawedOffShotgunUpgrades : uint8 {
	FearOnShoot = 0,
	ShockWave = 2,
	ShotgunJump = 3,
	ESawedOffShotgunUpgrades_MAX = 4
};

// Enum FSD.EAutoCannonUpgrades
enum class EAutoCannonUpgrades : uint8 {
	FireTimeIncreaseScaleMultiplier = 0,
	DamageBonusAtFullROF = 1,
	StatusEffectAtFullROF = 2,
	StartingFireRate = 3,
	MaxFireRate = 4,
	EAutoCannonUpgrades_MAX = 5
};

// Enum FSD.EChargedWeaponUpgrades
enum class EChargedWeaponUpgrades : uint8 {
	ShotCostAtFullCharge = 0,
	ChargeSpeed = 1,
	CoolingRate = 2,
	HeatPerSecondCharging = 3,
	HeatPerSecondCharged = 4,
	HeatPerChargedShot = 5,
	HeatPerNormalShot = 6,
	EChargedWeaponUpgrades_MAX = 7
};

// Enum FSD.EDualMachinePistolsUpgrades
enum class EDualMachinePistolsUpgrades : uint8 {
	TriggerStatusEffectOnEmptyClip = 0,
	EDualMachinePistolsUpgrades_MAX = 1
};

// Enum FSD.EBoltActionRifleUpgrades
enum class EBoltActionRifleUpgrades : uint8 {
	FocusSpeed = 0,
	AimedShotStagger = 1,
	AimedWeakShotKillFearFactor = 2,
	FocusDamageBonus = 3,
	UnZoomedAccuracySpread = 4,
	FocusedWeakspotHitStatusEffect = 5,
	NoGravityOnFocus = 6,
	KillReloadTimeBoost = 7,
	EBoltActionRifleUpgrades_MAX = 8
};

// Enum FSD.EAssaultRifleUpgrade
enum class EAssaultRifleUpgrade : uint8 {
	KillResetsSpread = 0,
	KillTriggerStatusEffect = 1,
	EAssaultRifleUpgrade_MAX = 2
};

// Enum FSD.EGatlingGunUpgrade
enum class EGatlingGunUpgrade : uint8 {
	DamageMultiplierAtMaxStabilization = 0,
	HeatRemovedOnKill = 1,
	CriticalOverheat = 2,
	BarrelProximityDamage = 3,
	EGatlingGunUpgrade_MAX = 4
};

// Enum FSD.EBeltDrivenWeaponUpgrade
enum class EBeltDrivenWeaponUpgrade : uint8 {
	BarrelSpinupTime = 0,
	BarrelSpinDownTime = 1,
	EBeltDrivenWeaponUpgrade_MAX = 2
};

// Enum FSD.EAmmoDrivenWeapnUpgradeType
enum class EAmmoDrivenWeapnUpgradeType : uint8 {
	MaxAmmo = 0,
	ClipSize = 1,
	RateOfFire = 2,
	ReloadSpeed = 3,
	RecoilMultiplier = 4,
	BurstCount = 5,
	BurstRateOfFire = 6,
	ActivateBurstFireMode = 7,
	ActivateAutomaticFireMode = 8,
	HeatUpRateModifier = 9,
	AutoReloadDuration = 10,
	RecoilMass = 11,
	CustomEvent1 = 12,
	EAmmoDrivenWeapnUpgradeType_MAX = 13
};

// Enum FSD.EMinersManualSinglePage
enum class EMinersManualSinglePage : uint8 {
	Mutators = 0,
	Warnings = 1,
	DamageTypes = 2,
	Weakpoints = 3,
	Armor = 4,
	Light = 5,
	Ammo = 6,
	Traversal = 7,
	Spacerig = 8,
	Upgrades = 9,
	Perks = 10,
	Bosco = 11,
	Assignments = 12,
	Navigation = 13,
	EMinersManualSinglePage_MAX = 14
};

// Enum FSD.EArmorType
enum class EArmorType : uint8 {
	Light = 0,
	Heavy = 1,
	Unbreakable = 2,
	EArmorType_MAX = 3
};

// Enum FSD.EDamageType
enum class EDamageType : uint8 {
	Fire = 0,
	Cold = 1,
	Melee = 2,
	Kinetic = 3,
	Explosive = 4,
	Stun = 5,
	Electrocution = 6,
	Fear = 7,
	Radiation = 8,
	Pheromone = 9,
	Poison = 10,
	ArmorBreaking = 11,
	Push = 12,
	Grab = 13,
	None = 14,
	Slow = 15,
	Defense = 16,
	TemperatureShock = 17,
	EDamageType_MAX = 18
};

// Enum FSD.EEnemyAttackType
enum class EEnemyAttackType : uint8 {
	Melee = 0,
	Ranged = 1,
	Grab = 2,
	Area = 3,
	Move = 4,
	EEnemyAttackType_MAX = 5
};

// Enum FSD.EMiningPodMission
enum class EMiningPodMission : uint8 {
	DropAndReturn = 0,
	Extraction = 1,
	DropFromSpacerig = 2,
	EMiningPodMission_MAX = 3
};

// Enum FSD.EMiningPodRampState
enum class EMiningPodRampState : uint8 {
	Closed = 0,
	Opening = 1,
	Open = 2,
	Closing = 3,
	EMiningPodRampState_MAX = 4
};

// Enum FSD.EMiningPodState
enum class EMiningPodState : uint8 {
	Dropping = 0,
	Drilling = 1,
	Landed = 2,
	PrepTakeoff = 3,
	Departing = 4,
	WaitingForGameStart = 5,
	InSpace = 6,
	Destroy = 7,
	WaitOnSpacerig = 8,
	ExitSpacerig = 9,
	Damaged = 10,
	PoweringUp = 11,
	PoweredUp = 12,
	DeepDiveDeparture = 13,
	EMiningPodState_MAX = 14
};

// Enum FSD.EMissionStructure
enum class EMissionStructure : uint8 {
	SingleMission = 0,
	DeepDive_Normal = 1,
	DeepDive_Elite = 2,
	EMissionStructure_MAX = 3
};

// Enum FSD.EAfflictionSocket
enum class EAfflictionSocket : uint8 {
	CenterMass = 0,
	Feet = 1,
	Camera = 2,
	EAfflictionSocket_MAX = 3
};

// Enum FSD.EPawnStatType
enum class EPawnStatType : uint8 {
	Multiplicative = 0,
	Additive = 1,
	EPawnStatType_MAX = 2
};

// Enum FSD.EPerkSlotType
enum class EPerkSlotType : uint8 {
	Available = 0,
	LockedByPerk = 1,
	LockedByPromotion = 2,
	EPerkSlotType_MAX = 3
};

// Enum FSD.EPerkUsageType
enum class EPerkUsageType : uint8 {
	Passive = 0,
	Active = 1,
	EPerkUsageType_MAX = 2
};

// Enum FSD.EPerkHUDActivationLocation
enum class EPerkHUDActivationLocation : uint8 {
	Main = 0,
	Down = 1,
	EPerkHUDActivationLocation_MAX = 2
};

// Enum FSD.EPerkTierState
enum class EPerkTierState : uint8 {
	Claimable = 0,
	Claimed = 1,
	Locked = 2,
	Unaffordable = 3,
	NotAvailable = 4,
	EPerkTierState_MAX = 5
};

// Enum FSD.EPickaxeState
enum class EPickaxeState : uint8 {
	Equipping = 0,
	Mining = 1,
	PowerAttack = 2,
	End = 3,
	EPickaxeState_MAX = 4
};

// Enum FSD.EPickaxePartLocation
enum class EPickaxePartLocation : uint8 {
	Head = 0,
	FrontBlade = 1,
	BackBlade = 2,
	Shaft = 3,
	Handle = 4,
	Pommel = 5,
	Material = 6,
	Count = 7,
	EPickaxePartLocation_MAX = 8
};

// Enum FSD.EPickaxePart
enum class EPickaxePart : uint8 {
	Head = 0,
	Blade = 1,
	Shaft = 2,
	Handle = 3,
	Pommel = 4,
	Material = 5,
	EPickaxePart_MAX = 6
};

// Enum FSD.EPipelineExtractorPodAnimState
enum class EPipelineExtractorPodAnimState : uint8 {
	Folded = 0,
	Idle = 1,
	Running = 2,
	Broken = 3,
	EPipelineExtractorPodAnimState_MAX = 4
};

// Enum FSD.EPlaceableObstructionType
enum class EPlaceableObstructionType : uint8 {
	Valid = 0,
	GroundTooSteep = 1,
	TooShort = 2,
	TooLong = 3,
	TurnTooSharp = 4,
	Blocked = 5,
	NotEnoughRoom = 6,
	TooSteep = 7,
	Other = 8,
	EPlaceableObstructionType_MAX = 9
};

// Enum FSD.ECharacterMoveDirection
enum class ECharacterMoveDirection : uint8 {
	None = 0,
	Forward = 1,
	Left = 2,
	Right = 3,
	Back = 4,
	ECharacterMoveDirection_MAX = 5
};

// Enum FSD.EGameOwnerStatus
enum class EGameOwnerStatus : uint8 {
	Supporter = 0,
	ContentCreator = 1,
	Developer = 2,
	Modder = 3,
	EGameOwnerStatus_Max = 255
};

// Enum FSD.EMovementCustomMode
enum class EMovementCustomMode : uint8 {
	MOVE_Custom_None = 0,
	MOVE_Custom_Track = 1,
	MOVE_Custom_CharacterStateControlled = 2,
	MOVE_Custom_MAX = 3
};

// Enum FSD.ESpawnSettings
enum class ESpawnSettings : uint8 {
	Normal = 0,
	NoSpawning = 1,
	SpawnAll = 2,
	ESpawnSettings_MAX = 3
};

// Enum FSD.ETerrainPlacementBoxType
enum class ETerrainPlacementBoxType : uint8 {
	NoTerrain = 0,
	Terrain = 1,
	ETerrainPlacementBoxType_MAX = 2
};

// Enum FSD.ERoomMirror
enum class ERoomMirror : uint8 {
	None = 0,
	MirrorX = 1,
	MirrorY = 2,
	ERoomMirror_MAX = 3
};

// Enum FSD.ERoomMirroringSupport
enum class ERoomMirroringSupport : uint8 {
	NotAllowed = 0,
	MirrorAroundX = 1,
	MirrorAroundY = 2,
	MirrorBoth = 3,
	ERoomMirroringSupport_MAX = 4
};

// Enum FSD.EItemAdjustmentType
enum class EItemAdjustmentType : uint8 {
	None = 0,
	Cieling = 1,
	Wall = 2,
	Floor = 3,
	EItemAdjustmentType_MAX = 4
};

// Enum FSD.ECaveEntranceType
enum class ECaveEntranceType : uint8 {
	EntranceAndExit = 0,
	Entrance = 1,
	Exit = 2,
	TreassureRoom = 3,
	ECaveEntranceType_MAX = 4
};

// Enum FSD.ERoomType
enum class ERoomType : uint8 {
	Start = 0,
	End = 1,
	MainPath = 2,
	Gold = 3,
	ERoomType_MAX = 4
};

// Enum FSD.EEnemyPlacementMask
enum class EEnemyPlacementMask : uint8 {
	Ground = 0,
	Spawner = 1,
	Cieling = 2,
	EEnemyPlacementMask_MAX = 3
};

// Enum FSD.ERoomPieceSide
enum class ERoomPieceSide : uint8 {
	Up = 0,
	Down = 1,
	Forward = 2,
	Backward = 3,
	Right = 4,
	Left = 5,
	ERoomPieceSide_MAX = 6
};

// Enum FSD.EServerSortOrder
enum class EServerSortOrder : uint8 {
	Mission = 0,
	Players = 1,
	Length = 2,
	Complexity = 3,
	Distance = 4,
	Time = 5,
	Difficulty = 6,
	EServerSortOrder_MAX = 7
};

// Enum FSD.EServerDistance
enum class EServerDistance : uint8 {
	Close = 0,
	Medium = 1,
	Far = 2,
	World = 3,
	EServerDistance_MAX = 4
};

// Enum FSD.EFSDNATType
enum class EFSDNATType : uint8 {
	Open = 0,
	Moderate = 1,
	Strict = 2,
	Unknown = 3,
	EFSDNATType_MAX = 4
};

// Enum FSD.EFSDMissionStatus
enum class EFSDMissionStatus : uint8 {
	SpaceRig = 0,
	InGame = 1,
	Starting = 2,
	EscapeSequence = 3,
	FinalBattle = 4,
	EFSDMissionStatus_MAX = 5
};

// Enum FSD.ESharkEnemyState
enum class ESharkEnemyState : uint8 {
	Idle = 0,
	Circling = 1,
	Attacking = 2,
	Vulnerable = 3,
	Dive = 4,
	ESharkEnemyState_MAX = 5
};

// Enum FSD.EShowroomScaling
enum class EShowroomScaling : uint8 {
	NoScaling = 0,
	EnemySmall = 1,
	EnemyMedium = 2,
	EnemyBig = 3,
	EnemyHuge = 4,
	EShowroomScaling_MAX = 5
};

// Enum FSD.EPiplelineConnectorAnimationState
enum class EPiplelineConnectorAnimationState : uint8 {
	Unassembled = 0,
	Assembling = 1,
	Assembled = 2,
	EPiplelineConnectorAnimationState_MAX = 3
};

// Enum FSD.EMaggotAnimationState
enum class EMaggotAnimationState : uint8 {
	Idle = 0,
	Moving = 1,
	EMaggotAnimationState_MAX = 2
};

// Enum FSD.EMoveDirection
enum class EMoveDirection : uint8 {
	None = 0,
	Forward = 1,
	Left = 2,
	Right = 3,
	Back = 4,
	EMoveDirection_MAX = 5
};

// Enum FSD.EFSDSteelSeriesEffect
enum class EFSDSteelSeriesEffect : uint8 {
	HealthDamage = 0,
	ShieldDamage = 1,
	Flare = 2,
	MissionSuccess = 3,
	None = 4,
	EFSDSteelSeriesEffect_MAX = 5
};

// Enum FSD.ETemperatureIntensity
enum class ETemperatureIntensity : uint8 {
	Cold3 = 0,
	Cold2 = 1,
	Cold1 = 2,
	Heat1 = 3,
	Heat2 = 4,
	Heat3 = 5,
	ETemperatureIntensity_MAX = 6
};

// Enum FSD.ETetherConnectionMode
enum class ETetherConnectionMode : uint8 {
	Both = 0,
	FrontOnly = 1,
	BackOnly = 2,
	None = 3,
	ETetherConnectionMode_MAX = 4
};

// Enum FSD.EThrowableInput
enum class EThrowableInput : uint8 {
	LeftButton = 0,
	RightButton = 1,
	EThrowableInput_MAX = 2
};

// Enum FSD.EExitTrackMode
enum class EExitTrackMode : uint8 {
	None = 0,
	StopInPlace = 1,
	JumpInPlace = 2,
	JumpInCamDir = 3,
	JumpInTrackDir = 4,
	EExitTrackMode_MAX = 5
};

// Enum FSD.ETreasureType
enum class ETreasureType : uint8 {
	WeaponSkin = 0,
	VictoryPose = 1,
	PickaxePart = 2,
	VanityItem = 3,
	ETreasureType_MAX = 4
};

// Enum FSD.EItemUpgradeStatus
enum class EItemUpgradeStatus : uint8 {
	Locked = 0,
	AvailableCannotAfford = 1,
	AvailableCanAfford = 2,
	Owned = 3,
	Equipped = 4,
	EItemUpgradeStatus_MAX = 5
};

// Enum FSD.EGeneratorIconType
enum class EGeneratorIconType : uint8 {
	Vanity = 0,
	PickaxePart = 1,
	EGeneratorIconType_MAX = 2
};

// Enum FSD.ECharacterHeadMesh
enum class ECharacterHeadMesh : uint8 {
	Full = 0,
	ThichNeckOnly = 1,
	ThinNeckOnly = 2,
	None = 3,
	ECharacterHeadMesh_MAX = 4
};

// Enum FSD.EHeadVanityType
enum class EHeadVanityType : uint8 {
	HairOnly = 0,
	HeadGearOnly = 1,
	HeadGearOnly_UseArmorMaterial = 2,
	HairAndHeadGear = 3,
	HairAndHeadGear_UseArmorMaterial = 4,
	EHeadVanityType_MAX = 5
};

// Enum FSD.EArmorSetLegs
enum class EArmorSetLegs : uint8 {
	Invalid = 0,
	LeftUpperLeg = 1,
	LeftLowerLeg = 2,
	LeftFoot = 3,
	LeftToe = 4,
	RightUpperLeg = 5,
	RightLowerLeg = 6,
	RightFoot = 7,
	RightToe = 8,
	EArmorSetLegs_MAX = 9
};

// Enum FSD.EArmorSetTorso
enum class EArmorSetTorso : uint8 {
	Invalid = 0,
	UpperTorso = 1,
	MiddleTorso = 2,
	LowerTorso = 3,
	UpperBack = 4,
	MiddleBack = 5,
	LowerBack = 6,
	LeftHip = 7,
	RightHip = 8,
	FrontHip = 9,
	LeftUpperLeg = 10,
	LeftLowerLeg = 11,
	LeftFoot = 12,
	LeftToe = 13,
	RightUpperLeg = 14,
	RightLowerLeg = 15,
	RightFoot = 16,
	RightToe = 17,
	EArmorSetTorso_MAX = 18
};

// Enum FSD.EArmorSetArms
enum class EArmorSetArms : uint8 {
	Invalid = 0,
	LeftShoulder = 1,
	RightShoulder = 2,
	LeftUpperArm = 3,
	LeftLowerArm1 = 4,
	LeftLowerArm2 = 5,
	LeftHand = 6,
	LeftHandAttach = 7,
	RightUpperArm = 8,
	RightLowerArm1 = 9,
	RightLowerArm2 = 10,
	RightHand = 11,
	RightHandAttach = 12,
	EArmorSetArms_MAX = 13
};

// Enum FSD.EVanityAquisitionType
enum class EVanityAquisitionType : uint8 {
	UnlockedFromStart = 0,
	Purchased = 1,
	Schematic = 2,
	Treasure = 3,
	EVanityAquisitionType_MAX = 4
};

// Enum FSD.EWoodLouseState
enum class EWoodLouseState : uint8 {
	Unfolded = 0,
	Folded = 1,
	Size = 2,
	EWoodLouseState_MAX = 3
};

// ScriptStruct FSD.CountDownFloat
// Size: 0x0c (Inherited: 0x00)
struct FCountDownFloat {
	float CountDownDuration; // 0x00(0x04)
};

// ScriptStruct FSD.LerpingPercent
// Size: 0x08 (Inherited: 0x00)
struct FLerpingPercent {
	char TargetPercent; // 0x00(0x01)
};

// ScriptStruct FSD.ReplicatedCharacterData
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedCharacterData {
	TWeakObjectPtr<AActor> Target; // 0x00(0x08)
	float TemperatureEffect; // 0x08(0x04)
	bool bCanTakeDamage; // 0x0c(0x01)
};

// ScriptStruct FSD.LaserPointerTarget
// Size: 0xb0 (Inherited: 0x00)
struct FLaserPointerTarget {
	FHitResult HitInfo; // 0x00(0x88)
	AActor* Target; // 0x98(0x08)
	AActor* ExtraTarget; // 0xa0(0x08)
};

// ScriptStruct FSD.CoolDownProgressStyle
// Size: 0x40 (Inherited: 0x00)
struct FCoolDownProgressStyle {
	UTexture2D* Icon; // 0x00(0x08)
	FLinearColor IconTint; // 0x08(0x10)
	FText Name; // 0x18(0x18)
	UCoolDownProgressWidget* WidgetOverride; // 0x30(0x08)
	USoundCue* AudioCoolDownFinished; // 0x38(0x08)
};

// ScriptStruct FSD.CameraSpringSettings
// Size: 0x3c (Inherited: 0x00)
struct FCameraSpringSettings {
	bool SpringEnabled; // 0x00(0x01)
	float StepThreshold; // 0x04(0x04)
	FVector2D SpringExtend; // 0x08(0x08)
	float RetractStrength; // 0x10(0x04)
	float RetractDownReduction; // 0x14(0x04)
	bool ShowDebug; // 0x18(0x01)
	float LastSpeedZ; // 0x1c(0x04)
	FVector LastLocation; // 0x20(0x0c)
	FVector StartSpringLocation; // 0x2c(0x0c)
	bool bSpringInitialized; // 0x38(0x01)
};

// ScriptStruct FSD.HeroInfo
// Size: 0x88 (Inherited: 0x00)
struct FHeroInfo {
	FText HeroName; // 0x00(0x18)
	UTexture2D* HeroIcon; // 0x18(0x08)
	UTexture2D* SmallHeroIcon; // 0x20(0x08)
	UTexture2D* HeroFullSizeImage; // 0x28(0x08)
	FLinearColor HeroColor; // 0x30(0x10)
	FText HeroShortDescription; // 0x40(0x18)
	FText HeroLongDescription; // 0x58(0x18)
	FText SwitchToMessage; // 0x70(0x18)
};

// ScriptStruct FSD.AnalogAimSettings
// Size: 0x40 (Inherited: 0x00)
struct FAnalogAimSettings {
	bool ShowDebugOutput; // 0x00(0x01)
	FVector2D AimRate; // 0x14(0x08)
	UCurveFloat* SensitivityCurve; // 0x20(0x08)
	float LookAtStickyness; // 0x28(0x04)
	float StickynessRecoverySpeed; // 0x2c(0x04)
	float StickynessMaxSensitivity; // 0x30(0x04)
	FVector2D ThirdPersonLookRate; // 0x34(0x08)
};

// ScriptStruct FSD.HoldButton
// Size: 0x28 (Inherited: 0x00)
struct FHoldButton {
	FText HoldingText; // 0x00(0x18)
	float HoldStartTime; // 0x18(0x04)
	float HoldDuration; // 0x1c(0x04)
};

// ScriptStruct FSD.DownCameraSettings
// Size: 0x18 (Inherited: 0x00)
struct FDownCameraSettings {
	TWeakObjectPtr<APlayerCharacter> Target; // 0x00(0x08)
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
	FText Title; // 0x00(0x18)
	FText Text; // 0x18(0x18)
	UObject* Image; // 0x30(0x08)
	TArray<UReward*> Rewards; // 0x38(0x10)
	FGuid SavegameID; // 0x48(0x10)
};

// ScriptStruct FSD.CharacterViewScene
// Size: 0x18 (Inherited: 0x00)
struct FCharacterViewScene {
	TArray<FCharacterViewInfo> Characters; // 0x00(0x10)
	bool MissionSuccess; // 0x10(0x01)
};

// ScriptStruct FSD.CharacterViewInfo
// Size: 0x28 (Inherited: 0x00)
struct FCharacterViewInfo {
	APlayerCharacter* CharacterClass; // 0x00(0x08)
	TArray<UVanityItem*> EquippedVanity; // 0x08(0x10)
	bool SurvivedInPod; // 0x18(0x01)
	UVictoryPose* VictoryPose; // 0x20(0x08)
};

// ScriptStruct FSD.SpaceRigNotification
// Size: 0x40 (Inherited: 0x00)
struct FSpaceRigNotification {
	FText Text; // 0x00(0x18)
	UTexture2D* Icon; // 0x18(0x08)
	FLinearColor IconColor; // 0x20(0x10)
};

// ScriptStruct FSD.PendingRewards
// Size: 0x190 (Inherited: 0x00)
struct FPendingRewards {
	FPendingRewardsStats StartStats; // 0x00(0xb0)
	FPendingRewardsStats EndStats; // 0xb0(0xb0)
	TArray<FCreditsReward> CreditsRewardEntries; // 0x160(0x10)
	int32_t CreditsReward; // 0x170(0x04)
	TArray<FXPReward> XPRewardEntries; // 0x178(0x10)
	int32_t XPReward; // 0x188(0x04)
	bool bHasData; // 0x18c(0x01)
	bool bIsRecording; // 0x18d(0x01)
	bool bWasRewarded; // 0x18e(0x01)
};

// ScriptStruct FSD.XPReward
// Size: 0x20 (Inherited: 0x00)
struct FXPReward {
	FText Description; // 0x00(0x18)
	int32_t XP; // 0x18(0x04)
};

// ScriptStruct FSD.CreditsReward
// Size: 0x20 (Inherited: 0x00)
struct FCreditsReward {
	FText Description; // 0x00(0x18)
	int32_t amount; // 0x18(0x04)
};

// ScriptStruct FSD.PendingRewardsStats
// Size: 0xb0 (Inherited: 0x00)
struct FPendingRewardsStats {
	TMap<UResourceData*, float> AllResources; // 0x00(0x50)
	TMap<UResourceData*, float> CollectedResources; // 0x50(0x50)
	bool PrimaryObjectiveCompleted; // 0xa0(0x01)
	bool SecondaryObjectiveCompleted; // 0xa1(0x01)
	float TimePlayed; // 0xa4(0x04)
	int32_t EnemiesKilled; // 0xa8(0x04)
};

// ScriptStruct FSD.FSDServerSearchOptions
// Size: 0x50 (Inherited: 0x00)
struct FFSDServerSearchOptions {
	enum class ESteamServerJoinStatus JoinStatus; // 0x00(0x01)
	enum class ESteamSearchRegion SearchRegion; // 0x01(0x01)
	TArray<UDifficultySetting*> Difficulties; // 0x08(0x10)
	bool DeepDive; // 0x18(0x01)
	FString SearchString; // 0x20(0x10)
	int32_t MissionSeed; // 0x30(0x04)
	int32_t GlobalMissionSeed; // 0x34(0x04)
	TArray<enum class EGameType> GameTypes; // 0x40(0x10)
};

// ScriptStruct FSD.FadeData
// Size: 0x48 (Inherited: 0x00)
struct FFadeData {
	bool bEnabled; // 0x00(0x01)
	bool bShowDebugOutput; // 0x01(0x01)
	UFSDLevelLoadingPersistentWidget* WidgetType; // 0x08(0x08)
	UFSDLevelLoadingPersistentWidget* Widget; // 0x10(0x08)
	float CurrentFade; // 0x18(0x04)
	float TargetFade; // 0x1c(0x04)
	float FadeSpeed; // 0x20(0x04)
	float Delay; // 0x24(0x04)
	bool bFadeWorldOnly; // 0x28(0x01)
	bool bCapFramerate; // 0x29(0x01)
	bool bToSpaceRig; // 0x2a(0x01)
	UTexture* loadingImage; // 0x30(0x08)
	FString DebugMsg; // 0x38(0x10)
};

// ScriptStruct FSD.GameStateSeamlessTravelStorage
// Size: 0x150 (Inherited: 0x00)
struct FGameStateSeamlessTravelStorage {
	UDifficultySetting* ChosenDifficulty; // 0x00(0x08)
	TMap<UPlayer*, bool> PlayerShouldStartInMedbay; // 0x08(0x50)
	TMap<UResourceData*, float> Resources; // 0x58(0x50)
	float MissionTime; // 0xa8(0x04)
	TMap<FName, float> StoredFloatValues; // 0xb0(0x50)
	TMap<FName, int32_t> StoredIntValues; // 0x100(0x50)
};

// ScriptStruct FSD.FSDChatMessage
// Size: 0x60 (Inherited: 0x00)
struct FFSDChatMessage {
	enum class EChatMessageType MsgType; // 0x08(0x01)
	FString Sender; // 0x10(0x10)
	enum class EChatSenderType SenderType; // 0x20(0x01)
	FString Msg; // 0x28(0x10)
	FUniqueNetIdRepl SenderNetID; // 0x38(0x28)
};

// ScriptStruct FSD.SplineSegmentCarveOperationData
// Size: 0x28 (Inherited: 0x00)
struct FSplineSegmentCarveOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	TArray<FCarveSplineSegment> Segments; // 0x08(0x10)
	UTerrainMaterial* Material; // 0x18(0x08)
	enum class ECarveFilterType CarveFilter; // 0x20(0x01)
	enum class EPreciousMaterialOptions Precious; // 0x21(0x01)
};

// ScriptStruct FSD.MeltOperationData
// Size: 0x20 (Inherited: 0x00)
struct FMeltOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	TArray<FVector> Points; // 0x08(0x10)
	float Radius; // 0x18(0x04)
};

// ScriptStruct FSD.DrillOperationData
// Size: 0x2c (Inherited: 0x00)
struct FDrillOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	FVector HitPos; // 0x04(0x0c)
	FVector Dir; // 0x10(0x0c)
	FVector CarveSize; // 0x1c(0x0c)
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
	FVector HitPos; // 0x04(0x0c)
	FVector Dir; // 0x10(0x0c)
	float DigSize; // 0x1c(0x04)
	AActor* Miner; // 0x20(0x08)
};

// ScriptStruct FSD.CarveWithSTLMeshOperationData
// Size: 0x68 (Inherited: 0x00)
struct FCarveWithSTLMeshOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	USTLMeshCarver* STLMeshCarver; // 0x08(0x08)
	UStaticMeshCarver* StaticMeshCarver; // 0x10(0x08)
	UTerrainMaterial* Material; // 0x18(0x08)
	enum class ECarveFilterType CarveFilter; // 0x20(0x01)
	enum class EPreciousMaterialOptions Precious; // 0x21(0x01)
	FMatrixWithExactSync Transform; // 0x24(0x40)
};

// ScriptStruct FSD.CarveWithColliderOperationData
// Size: 0x68 (Inherited: 0x00)
struct FCarveWithColliderOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	UStaticMesh* StaticMesh; // 0x08(0x08)
	UTerrainMaterial* Material; // 0x10(0x08)
	enum class ECarveFilterType CarveFilter; // 0x18(0x01)
	FMatrixWithExactSync Transform; // 0x1c(0x40)
	float ExpensiveNoise; // 0x5c(0x04)
	enum class EPreciousMaterialOptions Precious; // 0x60(0x01)
	enum class CarveOptionsCellSize CarveCellSize; // 0x61(0x01)
};

// ScriptStruct FSD.GrenadeExplodeOperationData
// Size: 0x38 (Inherited: 0x00)
struct FGrenadeExplodeOperationData {
	int32_t OperationNumber; // 0x00(0x04)
	FVector HitPos; // 0x04(0x0c)
	FVector Normal; // 0x10(0x0c)
	float NormalOffset; // 0x1c(0x04)
	float NormalSqueeze; // 0x20(0x04)
	float Radius; // 0x24(0x04)
	float Noise; // 0x28(0x04)
	float BurnThickness; // 0x2c(0x04)
	bool UseBulletBurntMaterial; // 0x30(0x01)
	bool DissolvePlatforms; // 0x31(0x01)
	uint32_t OverrideBurntMaterialHandle; // 0x34(0x04)
};

// ScriptStruct FSD.OptionsInSaveGame
// Size: 0x08 (Inherited: 0x00)
struct FOptionsInSaveGame {
	bool SaveGameOptionsValid; // 0x00(0x01)
	int32_t ScreenMode; // 0x04(0x04)
};

// ScriptStruct FSD.GDKWinOptionsInSaveGame
// Size: 0x70 (Inherited: 0x00)
struct FGDKWinOptionsInSaveGame {
	bool SaveGameOptionsValid; // 0x00(0x01)
	int32_t ScreenMode; // 0x04(0x04)
	uint32_t ResolutionSizeX; // 0x08(0x04)
	uint32_t ResolutionSizeY; // 0x0c(0x04)
	bool bUseVSync; // 0x10(0x01)
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
	FString LocalGameServerName; // 0x48(0x10)
	FString CurrentAudioOutputDeviceId; // 0x58(0x10)
	bool UseDefaultAudioOutputDevice; // 0x68(0x01)
};

// ScriptStruct FSD.ConsoleOptionsInSaveGame
// Size: 0x118 (Inherited: 0x00)
struct FConsoleOptionsInSaveGame {
	FControllerSettings ControllerSettings; // 0x00(0x0c)
	FHUDElements HUDElements; // 0x0c(0x78)
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
	float MouseXSensitivity; // 0xb4(0x04)
	float MouseYSensitivity; // 0xb8(0x04)
	bool bUseSeperateSensitivity; // 0xbc(0x01)
	bool bInvertMouseWheel; // 0xbd(0x01)
	bool bInvertIncapacitatedX_Mouse; // 0xbe(0x01)
	bool bInvertIncapacitatedX_Controller; // 0xbf(0x01)
	bool bInvertFlightControls; // 0xc0(0x01)
	bool bShowUIAnimations; // 0xc1(0x01)
	bool bPlaySoundOnChatMessage; // 0xc2(0x01)
	float ChatFadeTime; // 0xc4(0x04)
	float ForceFeedbackScale; // 0xc8(0x04)
	int32_t ChatFontSize; // 0xcc(0x04)
	float HDRColorGamma; // 0xd0(0x04)
	FString Language; // 0xd8(0x10)
	FCharacterOptions CharacterOptions; // 0xe8(0x02)
	TArray<FCustomKeyBinding> CustomKeyBindings; // 0xf0(0x10)
	TArray<FCustomKeyBinding> CustomControllerBindings; // 0x100(0x10)
	bool SwapControllerThumbsticks; // 0x110(0x01)
};

// ScriptStruct FSD.CustomKeyBinding
// Size: 0x28 (Inherited: 0x00)
struct FCustomKeyBinding {
	FName ActionName; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	FKey Key; // 0x10(0x18)
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
	FHUDElementData OnScreenHelp; // 0x00(0x08)
	FHUDElementData EnemyHealth; // 0x08(0x08)
	FHUDElementData RadarDepth; // 0x10(0x08)
	FHUDElementData PlayerHealthShield; // 0x18(0x08)
	FHUDElementData PlayerNameClassIcon; // 0x20(0x08)
	FHUDElementData PlayerItems; // 0x28(0x08)
	FHUDElementData PlayerResources; // 0x30(0x08)
	FHUDElementData WeaponInfo; // 0x38(0x08)
	FHUDElementData Grenades; // 0x40(0x08)
	FHUDElementData FlashLight; // 0x48(0x08)
	FHUDElementData Flares; // 0x50(0x08)
	FHUDElementData Crosshair; // 0x58(0x08)
	FHUDElementData Objectives; // 0x60(0x08)
	FHUDElementData TeamDisplay; // 0x68(0x08)
	FHUDElementData SentryGunDisplay; // 0x70(0x08)
};

// ScriptStruct FSD.HUDElementData
// Size: 0x08 (Inherited: 0x00)
struct FHUDElementData {
	enum class EHUDVisibilityMode Mode; // 0x00(0x01)
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
	FString TutorialName; // 0x00(0x10)
	int32_t count; // 0x10(0x04)
};

// ScriptStruct FSD.ResourcesSave
// Size: 0xa0 (Inherited: 0x00)
struct FResourcesSave {
	TMap<FGuid, float> OwnedResources; // 0x00(0x50)
	TMap<UResourceData*, float> Resources; // 0x50(0x50)
};

// ScriptStruct FSD.ItemUINotifications
// Size: 0x68 (Inherited: 0x00)
struct FItemUINotifications {
	TArray<FUINotificationItem> UINotifications; // 0x00(0x10)
	TSet<FGuid> UINotificationSet; // 0x10(0x50)
	UFSDSaveGame* SaveGame; // 0x60(0x08)
};

// ScriptStruct FSD.UINotificationItem
// Size: 0x10 (Inherited: 0x00)
struct FUINotificationItem {
	TArray<FGuid> NotificationIDs; // 0x00(0x10)
};

// ScriptStruct FSD.EventRewardSave
// Size: 0x50 (Inherited: 0x00)
struct FEventRewardSave {
	TMap<FGuid, FEventRewardSaveItem> PendingRewards; // 0x00(0x50)
};

// ScriptStruct FSD.EventRewardSaveItem
// Size: 0x20 (Inherited: 0x00)
struct FEventRewardSaveItem {
	FGuid CategoryID; // 0x00(0x10)
	TArray<FGuid> ClassOptions; // 0x10(0x10)
};

// ScriptStruct FSD.SkinList
// Size: 0x50 (Inherited: 0x00)
struct FSkinList {
	TSet<FGuid> Skins; // 0x00(0x50)
};

// ScriptStruct FSD.ItemNotificationInfo
// Size: 0x04 (Inherited: 0x00)
struct FItemNotificationInfo {
	int32_t NotificationFlags; // 0x00(0x04)
};

// ScriptStruct FSD.UpgradeLoadout
// Size: 0x50 (Inherited: 0x00)
struct FUpgradeLoadout {
	TMap<FGuid, FItemUpgradeSelection> Loadout; // 0x00(0x50)
};

// ScriptStruct FSD.ItemUpgradeSelection
// Size: 0x78 (Inherited: 0x00)
struct FItemUpgradeSelection {
	FGuid WeaponID; // 0x00(0x10)
	TArray<FGuid> EquippedUpgrades; // 0x10(0x10)
	TArray<FGuid> PermanentUpgrades; // 0x20(0x10)
	FGuid EquippedOverclock; // 0x30(0x10)
	TArray<FGuid> EquippedSkins; // 0x40(0x10)
	bool OverclockingUnlocked; // 0x50(0x01)
	FGuid EquippedSkinColor; // 0x54(0x10)
	FGuid EquippedSkinMesh; // 0x64(0x10)
};

// ScriptStruct FSD.DrinkSave
// Size: 0x58 (Inherited: 0x00)
struct FDrinkSave {
	TSet<FGuid> UnlockedDrinks; // 0x00(0x50)
	bool HasUnlockedSpecial; // 0x50(0x01)
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
	FGuid SavegameID; // 0x00(0x10)
	int32_t XP; // 0x10(0x04)
	bool HasCompletedRetirementCampaign; // 0x14(0x01)
	int32_t TimesRetired; // 0x18(0x04)
	int32_t RetiredCharacterLevels; // 0x1c(0x04)
	bool HasSeenRetirementRewardScreen; // 0x20(0x01)
	APlayerCharacter* CharacterClass; // 0x28(0x08)
	FCharacterVanitySave Vanity; // 0x30(0x110)
	int32_t SelectedLoadout; // 0x140(0x04)
	FItemLoadout Loadout; // 0x144(0x84)
	TArray<FItemLoadout> Loadouts; // 0x1c8(0x10)
	FVictoryPoseSave VictoryPose; // 0x1d8(0x30)
};

// ScriptStruct FSD.VictoryPoseSave
// Size: 0x30 (Inherited: 0x00)
struct FVictoryPoseSave {
	FGuid EquippedVictoryPose; // 0x00(0x10)
	TArray<FGuid> UnlockedVictoryPoses; // 0x10(0x10)
	TArray<FGuid> EquippedVictoryPoses; // 0x20(0x10)
};

// ScriptStruct FSD.ItemLoadout
// Size: 0x84 (Inherited: 0x00)
struct FItemLoadout {
	FGuid PrimaryWeapon; // 0x00(0x10)
	FGuid SecondaryWeapon; // 0x10(0x10)
	FGuid TraversalTool; // 0x20(0x10)
	FGuid ClassTool; // 0x30(0x10)
	FGuid Armor; // 0x40(0x10)
	FGuid Flare; // 0x50(0x10)
	FGuid MiningTool; // 0x60(0x10)
	FGuid Grenade; // 0x70(0x10)
	int32_t IconIndex; // 0x80(0x04)
};

// ScriptStruct FSD.CharacterVanitySave
// Size: 0x110 (Inherited: 0x00)
struct FCharacterVanitySave {
	TArray<FCharacterVanityLoadout> Loadouts; // 0x00(0x10)
	TArray<FGuid> UnLockedVanityItemIDs; // 0x10(0x10)
	FGuid EquippedHeadItemID; // 0x20(0x10)
	FGuid EquippedBeardItemID; // 0x30(0x10)
	FGuid EquippedArmorItemID; // 0x40(0x10)
	FGuid EquippedArmorMaterialItemID; // 0x50(0x10)
	FGuid EquippedBeardColorItemID; // 0x60(0x10)
	FGuid EquippedSkinColorItemID; // 0x70(0x10)
	FGuid EquippedEyebrowsItemID; // 0x80(0x10)
	FGuid EquippedMoustacheItemID; // 0x90(0x10)
	FGuid EquippedSideburnsItemID; // 0xa0(0x10)
	TArray<UVanityItem*> UnLockedVanityItems; // 0xb0(0x10)
	TMap<enum class EVanitySlot, FGuid> NewVanityItems; // 0xc0(0x50)
};

// ScriptStruct FSD.CharacterVanityLoadout
// Size: 0x90 (Inherited: 0x00)
struct FCharacterVanityLoadout {
	FGuid EquippedHeadItemID; // 0x00(0x10)
	FGuid EquippedBeardItemID; // 0x10(0x10)
	FGuid EquippedArmorItemID; // 0x20(0x10)
	FGuid EquippedArmorMaterialID; // 0x30(0x10)
	FGuid EquippedBeardColorItemID; // 0x40(0x10)
	FGuid EquippedSkinColorItemID; // 0x50(0x10)
	FGuid EquippedEyebrowsItemID; // 0x60(0x10)
	FGuid EquippedMoustacheItemID; // 0x70(0x10)
	FGuid EquippedSideburnsItemID; // 0x80(0x10)
};

// ScriptStruct FSD.DeepDiveSave
// Size: 0x70 (Inherited: 0x00)
struct FDeepDiveSave {
	FDeepDiveItem NormalSave; // 0x00(0x38)
	FDeepDiveItem EliteSave; // 0x38(0x38)
};

// ScriptStruct FSD.DeepDiveItem
// Size: 0x38 (Inherited: 0x00)
struct FDeepDiveItem {
	int32_t Progress; // 0x00(0x04)
	int32_t Seed; // 0x04(0x04)
	int32_t BestTime; // 0x08(0x04)
	TArray<FDeepDiveSaveRewardItem> Rewards; // 0x10(0x10)
	bool HasEverCompleted; // 0x20(0x01)
	TArray<FGuid> RewardsGiven; // 0x28(0x10)
};

// ScriptStruct FSD.DeepDiveSaveRewardItem
// Size: 0x14 (Inherited: 0x00)
struct FDeepDiveSaveRewardItem {
	FGuid RewardID; // 0x00(0x10)
	int32_t Stage; // 0x10(0x04)
};

// ScriptStruct FSD.CampaignSave
// Size: 0x48 (Inherited: 0x00)
struct FCampaignSave {
	FActiveCampaignItem ActiveCampaign; // 0x00(0x14)
	TArray<FGuid> CompletedCampaigns; // 0x18(0x10)
	int32_t ActiveCampaignWeek; // 0x28(0x04)
	FWeeklyCampaignItem WeeklySave; // 0x2c(0x0c)
	FWeeklyCampaignItem MaxtrixCoreHuntSave; // 0x38(0x0c)
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
	FGuid CampaignID; // 0x00(0x10)
	int32_t Progress; // 0x10(0x04)
};

// ScriptStruct FSD.UnLockedMissionParameters
// Size: 0x20 (Inherited: 0x00)
struct FUnLockedMissionParameters {
	TArray<FGuid> UnLockedComplexities; // 0x00(0x10)
	TArray<FGuid> UnLockedDurations; // 0x10(0x10)
};

// ScriptStruct FSD.GameDLCSave
// Size: 0x50 (Inherited: 0x00)
struct FGameDLCSave {
	TSet<FGuid> AnnouncedIDs; // 0x00(0x50)
};

// ScriptStruct FSD.FSDEventRewardsSave
// Size: 0x50 (Inherited: 0x00)
struct FFSDEventRewardsSave {
	TSet<FGuid> EventsSeen; // 0x00(0x50)
};

// ScriptStruct FSD.PromotionRewardsSave
// Size: 0x50 (Inherited: 0x00)
struct FPromotionRewardsSave {
	TSet<FGuid> ClaimedRewards; // 0x00(0x50)
};

// ScriptStruct FSD.SchematicSave
// Size: 0x38 (Inherited: 0x00)
struct FSchematicSave {
	TArray<FGuid> ForgedSchematics; // 0x00(0x10)
	FGuid PendingReward; // 0x10(0x10)
	TArray<FGuid> OwnedSchematics; // 0x20(0x10)
	bool bFirstSchematicMessageShown; // 0x30(0x01)
};

// ScriptStruct FSD.CharacterPerksSave
// Size: 0x10 (Inherited: 0x00)
struct FCharacterPerksSave {
	TArray<FPerkEquipEntry> CharacterPerks; // 0x00(0x10)
};

// ScriptStruct FSD.PerkEquipEntry
// Size: 0x20 (Inherited: 0x00)
struct FPerkEquipEntry {
	FGuid characterID; // 0x00(0x10)
	TArray<FGuid> PerkIDs; // 0x10(0x10)
};

// ScriptStruct FSD.AchievementSave
// Size: 0x20 (Inherited: 0x00)
struct FAchievementSave {
	TArray<FString> OfflineAchievedAchievements; // 0x00(0x10)
	TArray<FAchievementSaveEntry> AchievementEntries; // 0x10(0x10)
};

// ScriptStruct FSD.AchievementSaveEntry
// Size: 0x18 (Inherited: 0x00)
struct FAchievementSaveEntry {
	FGuid AchievementSaveID; // 0x00(0x10)
	float HighestSavedProgress; // 0x10(0x04)
	float CurrentProgress; // 0x14(0x04)
};

// ScriptStruct FSD.PerkClaimsSave
// Size: 0x18 (Inherited: 0x00)
struct FPerkClaimsSave {
	TArray<FPerkClaimEntry> PerkEntries; // 0x00(0x10)
	bool HasResetPerks2; // 0x10(0x01)
};

// ScriptStruct FSD.PerkClaimEntry
// Size: 0x14 (Inherited: 0x00)
struct FPerkClaimEntry {
	FGuid PerkID; // 0x00(0x10)
	int32_t currentRank; // 0x10(0x04)
};

// ScriptStruct FSD.MilestoneSave
// Size: 0x10 (Inherited: 0x00)
struct FMilestoneSave {
	TArray<FMilestoneCounter> ClaimedKPIRewards; // 0x00(0x10)
};

// ScriptStruct FSD.MilestoneCounter
// Size: 0x14 (Inherited: 0x00)
struct FMilestoneCounter {
	FGuid KPIGuid; // 0x00(0x10)
	int32_t Tier; // 0x10(0x04)
};

// ScriptStruct FSD.MissionStatSave
// Size: 0x18 (Inherited: 0x00)
struct FMissionStatSave {
	TArray<FMissionStatCounter> Counters; // 0x00(0x10)
	bool bCharacterLevelUpFixed; // 0x10(0x01)
	bool bBoughtVanityItemsFixed; // 0x11(0x01)
	bool bBoughtEquipmentUpgradesFixed; // 0x12(0x01)
	bool bCampaignsCompletedFixed; // 0x13(0x01)
	bool WeaponUpgradesFixed; // 0x14(0x01)
};

// ScriptStruct FSD.MissionStatCounter
// Size: 0x24 (Inherited: 0x00)
struct FMissionStatCounter {
	FGuid PlayerClassID; // 0x00(0x10)
	FGuid MissionStatID; // 0x10(0x10)
	float Value; // 0x20(0x04)
};

// ScriptStruct FSD.EndMissionResult
// Size: 0x60 (Inherited: 0x00)
struct FEndMissionResult {
	FPlayerProgress PreviousPlayerProgress; // 0x00(0x08)
	FPlayerProgress PlayerProgress; // 0x08(0x08)
	FCharacterProgress PreviousCharacterProgress; // 0x10(0x20)
	FCharacterProgress CharacterProgress; // 0x30(0x20)
	USchematic* RewardedSchematic; // 0x50(0x08)
	bool bReadyForUse; // 0x58(0x01)
};

// ScriptStruct FSD.CharacterProgress
// Size: 0x20 (Inherited: 0x00)
struct FCharacterProgress {
	UPlayerCharacterID* characterID; // 0x00(0x08)
	int32_t Level; // 0x08(0x04)
	float Progress; // 0x0c(0x04)
	int32_t CurrentXP; // 0x10(0x04)
	int32_t NextLevelXP; // 0x14(0x04)
	int32_t TimesRetired; // 0x18(0x04)
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
	int32_t GlobalSeed; // 0x04(0x04)
	int32_t MissionSeed; // 0x08(0x04)
};

// ScriptStruct FSD.SaveGameStatePerkItem
// Size: 0x10 (Inherited: 0x00)
struct FSaveGameStatePerkItem {
	char Rank; // 0x00(0x01)
	UPerkAsset* Perk; // 0x08(0x08)
};

// ScriptStruct FSD.DrinkableBarSlot
// Size: 0x14 (Inherited: 0x00)
struct FDrinkableBarSlot {
	FVector WorldLocation; // 0x00(0x0c)
	TWeakObjectPtr<ADrinkableActor> DrinkableActor; // 0x0c(0x08)
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
};

// ScriptStruct FSD.CraftingCost
// Size: 0x10 (Inherited: 0x00)
struct FCraftingCost {
	UResourceData* Resource; // 0x00(0x08)
	float amount; // 0x08(0x04)
};

// ScriptStruct FSD.ItemUpgradeStatText
// Size: 0x20 (Inherited: 0x00)
struct FItemUpgradeStatText {
	FText StatText; // 0x00(0x18)
	bool IsAdventageous; // 0x18(0x01)
};

// ScriptStruct FSD.DeepDiveBank
// Size: 0x10 (Inherited: 0x00)
struct FDeepDiveBank {
	UDeepDive* NormalDeepDive; // 0x00(0x08)
	UDeepDive* HardDeepDive; // 0x08(0x08)
};

// ScriptStruct FSD.ObjectiveMissionIcon
// Size: 0x18 (Inherited: 0x00)
struct FObjectiveMissionIcon {
	UTexture2D* Texture; // 0x00(0x08)
	FLinearColor Tint; // 0x08(0x10)
};

// ScriptStruct FSD.MissionShouts
// Size: 0x38 (Inherited: 0x00)
struct FMissionShouts {
	UDialogDataAsset* AfterDropPodExit; // 0x00(0x08)
	UDialogDataAsset* OnExitPodDescending; // 0x08(0x08)
	UDialogDataAsset* OnExitPodArrived; // 0x10(0x08)
	UDialogDataAsset* OnCompletion; // 0x18(0x08)
	UDialogDataAsset* OnDeepDiveExitPodDescending; // 0x20(0x08)
	UDialogDataAsset* OnDeepDiveObjectiveCompletion; // 0x28(0x08)
	UDialogDataAsset* OnDeepDiveAllReturnObjectivesCompleted; // 0x30(0x08)
};

// ScriptStruct FSD.AfflictionEntriesArray
// Size: 0x120 (Inherited: 0x108)
struct FAfflictionEntriesArray : FFastArraySerializer {
	TArray<FAfflictionEntry> Items; // 0x108(0x10)
	UPawnAfflictionComponent* Owner; // 0x118(0x08)
};

// ScriptStruct FSD.AfflictionEntry
// Size: 0x18 (Inherited: 0x0c)
struct FAfflictionEntry : FFastArraySerializerItem {
	UPawnAffliction* affliction; // 0x10(0x08)
};

// ScriptStruct FSD.PawnAfflictionItem
// Size: 0x18 (Inherited: 0x00)
struct FPawnAfflictionItem {
	TArray<UAfflictionEffect*> Afflictions; // 0x08(0x10)
};

// ScriptStruct FSD.TrackBuilderPoint
// Size: 0x28 (Inherited: 0x00)
struct FTrackBuilderPoint {
	enum class ETrackBuildPlacementState PlacementState; // 0x00(0x01)
	FVector_NetQuantize Location; // 0x04(0x0c)
	FVector_NetQuantize EulerRotation; // 0x10(0x0c)
	bool bPointValid; // 0x1c(0x01)
	TWeakObjectPtr<UTrackBuilderConnectPoint> ConnectPoint; // 0x20(0x08)
};

// ScriptStruct FSD.MixerAnnouncement
// Size: 0x28 (Inherited: 0x00)
struct FMixerAnnouncement {
	FString Username; // 0x00(0x10)
	FText Text; // 0x10(0x18)
};

// ScriptStruct FSD.HUDVisibilityRegisteredWidget
// Size: 0x0c (Inherited: 0x00)
struct FHUDVisibilityRegisteredWidget {
	TWeakObjectPtr<UWidget> Widget; // 0x00(0x08)
};

// ScriptStruct FSD.YesNoPromptSettings
// Size: 0x40 (Inherited: 0x00)
struct FYesNoPromptSettings {
	UYesNoPromptWidget* WidgetClass; // 0x00(0x08)
	int32_t ZOrder; // 0x08(0x04)
	FText Title; // 0x10(0x18)
	FText Message; // 0x28(0x18)
};

// ScriptStruct FSD.ProjectileImpact
// Size: 0x30 (Inherited: 0x00)
struct FProjectileImpact {
	FVector_NetQuantize Location; // 0x00(0x0c)
	FVector_NetQuantizeNormal Normal; // 0x0c(0x0c)
	TWeakObjectPtr<AActor> Actor; // 0x18(0x08)
	UPhysicalMaterial* PhysMat; // 0x20(0x08)
	int32_t BoneIndex; // 0x28(0x04)
};

// ScriptStruct FSD.ProjectileState
// Size: 0x28 (Inherited: 0x00)
struct FProjectileState {
	FVector_NetQuantize Velocity; // 0x00(0x0c)
	FVector_NetQuantize Location; // 0x0c(0x0c)
	USceneComponent* HomingTargetComponent; // 0x18(0x08)
	char IsSimulating : 1; // 0x20(0x01)
	char IsBouncy : 1; // 0x20(0x01)
};

// ScriptStruct FSD.ScaledEffect
// Size: 0x10 (Inherited: 0x00)
struct FScaledEffect {
	UParticleSystem* ParticleSystem; // 0x00(0x08)
	float Scale; // 0x08(0x04)
};

// ScriptStruct FSD.TracerData
// Size: 0x30 (Inherited: 0x00)
struct FTracerData {
	UFXSystemAsset* MainParticle; // 0x00(0x08)
	UFXSystemAsset* TrailParticle; // 0x08(0x08)
	float Speed; // 0x10(0x04)
	USoundCue* WhizbySound; // 0x18(0x08)
	float WhizBySoundCooldown; // 0x20(0x04)
	float Offset; // 0x24(0x04)
	float MinDistance; // 0x28(0x04)
};

// ScriptStruct FSD.SentryGunMuzzleSetup
// Size: 0x10 (Inherited: 0x00)
struct FSentryGunMuzzleSetup {
	FName SocketName; // 0x00(0x08)
	UAnimMontage* FireMontage; // 0x08(0x08)
};

// ScriptStruct FSD.ItemLoadoutAnimations
// Size: 0x18 (Inherited: 0x00)
struct FItemLoadoutAnimations {
	UAnimMontage* Loadout; // 0x00(0x08)
	TArray<UAnimSequence*> Loadout_IdleBreaks; // 0x08(0x10)
};

// ScriptStruct FSD.BlueprintFriend
// Size: 0x38 (Inherited: 0x00)
struct FBlueprintFriend {
	FString DisplayName; // 0x00(0x10)
	FString RealName; // 0x10(0x10)
	enum class EFriendOnlineStatusEnum OnlineStatus; // 0x20(0x01)
	FString UniqueNetId; // 0x28(0x10)
};

// ScriptStruct FSD.SizeBoxSettings
// Size: 0x20 (Inherited: 0x00)
struct FSizeBoxSettings {
	float WidthOverride; // 0x00(0x04)
	float HeightOverride; // 0x04(0x04)
	float MinDesiredWidth; // 0x08(0x04)
	float MinDesiredHeight; // 0x0c(0x04)
	float MaxDesiredWidth; // 0x10(0x04)
	float MaxDesiredHeight; // 0x14(0x04)
	float MinAspectRatio; // 0x18(0x04)
	float MaxAspectRatio; // 0x1c(0x04)
};

// ScriptStruct FSD.TextCounterEntry
// Size: 0x28 (Inherited: 0x00)
struct FTextCounterEntry {
	UTextBlock* TextBlock; // 0x00(0x08)
	FText Format; // 0x08(0x18)
	int32_t Value; // 0x20(0x04)
};

// ScriptStruct FSD.FrozenAfflictionItem
// Size: 0x18 (Inherited: 0x00)
struct FFrozenAfflictionItem {
	FName BoneName; // 0x00(0x08)
	FRandRange MeshScale; // 0x08(0x08)
	enum class EFrozenBitsSize FrozenBitsSize; // 0x10(0x01)
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
	FName BoneName; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	UStaticMesh* Mesh; // 0x10(0x08)
};

// ScriptStruct FSD.PushPoint
// Size: 0x10 (Inherited: 0x00)
struct FPushPoint {
	USphereComponent* Collider; // 0x00(0x08)
	APlayerCharacter* Character; // 0x08(0x08)
};

// ScriptStruct FSD.CompositeArmorItem
// Size: 0x10 (Inherited: 0x00)
struct FCompositeArmorItem {
	UPrimitiveComponent* Component; // 0x00(0x08)
	float Health; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
};

// ScriptStruct FSD.ArmorHealthItem
// Size: 0x18 (Inherited: 0x00)
struct FArmorHealthItem {
	char MaterialIndex; // 0x00(0x01)
	bool HealthIsBreakPercentage; // 0x01(0x01)
	TArray<FArmorHealthSubItem> ArmorBones; // 0x08(0x10)
};

// ScriptStruct FSD.ArmorHealthSubItem
// Size: 0x28 (Inherited: 0x00)
struct FArmorHealthSubItem {
	float Health; // 0x00(0x04)
	FName BoneName; // 0x04(0x08)
	TArray<FName> AdditionalBones; // 0x10(0x10)
	FName OptionalFXSocket; // 0x20(0x08)
};

// ScriptStruct FSD.DestructableBodypartItem
// Size: 0x18 (Inherited: 0x00)
struct FDestructableBodypartItem {
	char MaterialIndex; // 0x00(0x01)
	TArray<FName> ArmorBones; // 0x08(0x10)
};

// ScriptStruct FSD.AttackCooldown
// Size: 0x10 (Inherited: 0x00)
struct FAttackCooldown {
	FName AttackName; // 0x00(0x08)
	float Cooldown; // 0x08(0x04)
};

// ScriptStruct FSD.AttackerInfo
// Size: 0x10 (Inherited: 0x00)
struct FAttackerInfo {
	TWeakObjectPtr<AActor> Attacker; // 0x00(0x08)
	int32_t PositionIndex; // 0x08(0x04)
	float AttackerRadius; // 0x0c(0x04)
};

// ScriptStruct FSD.AudioWithCooldown
// Size: 0x10 (Inherited: 0x00)
struct FAudioWithCooldown {
	USoundCue* Audio; // 0x00(0x08)
	float Cooldown; // 0x08(0x04)
};

// ScriptStruct FSD.BiomeEnemyEntry
// Size: 0x10 (Inherited: 0x00)
struct FBiomeEnemyEntry {
	UEnemyDescriptor* enemy; // 0x00(0x08)
	bool IsDistruptive; // 0x08(0x01)
};

// ScriptStruct FSD.BiomeNoiseItem
// Size: 0x38 (Inherited: 0x00)
struct FBiomeNoiseItem {
	UFloodFillSettings* CeilingNoise; // 0x00(0x08)
	UDetailNoise* CeilingDetailNoise; // 0x08(0x08)
	UFloodFillSettings* WallNoise; // 0x10(0x08)
	UDetailNoise* WallDetailNoise; // 0x18(0x08)
	UFloodFillSettings* FloorNoise; // 0x20(0x08)
	UDetailNoise* FloorDetailNoise; // 0x28(0x08)
	float Weight; // 0x30(0x04)
};

// ScriptStruct FSD.BiomeDebrisInfluencerVariant
// Size: 0x10 (Inherited: 0x00)
struct FBiomeDebrisInfluencerVariant {
	UCaveInfluencer* Influencer; // 0x00(0x08)
	float RandomWeight; // 0x08(0x04)
};

// ScriptStruct FSD.BoscoLightSetting
// Size: 0x0c (Inherited: 0x00)
struct FBoscoLightSetting {
	FColor Color; // 0x00(0x04)
	float Intensity; // 0x04(0x04)
	float Radius; // 0x08(0x04)
};

// ScriptStruct FSD.BoscoJobBase
// Size: 0x18 (Inherited: 0x00)
struct FBoscoJobBase {
	ABosco* OwningDrone; // 0x08(0x08)
	ABoscoController* OnwingController; // 0x10(0x08)
};

// ScriptStruct FSD.BoscoMiningJob
// Size: 0x20 (Inherited: 0x18)
struct FBoscoMiningJob : FBoscoJobBase {
	AGem* EmbeddedGem; // 0x18(0x08)
};

// ScriptStruct FSD.BossFight
// Size: 0x18 (Inherited: 0x00)
struct FBossFight {
	TWeakObjectPtr<AActor> BossActor; // 0x00(0x08)
	TWeakObjectPtr<UEnemyComponent> EnemyComponent; // 0x08(0x08)
	TWeakObjectPtr<UEnemyHealthComponent> HealthComponent; // 0x10(0x08)
};

// ScriptStruct FSD.LevelGenerationCarver
// Size: 0x70 (Inherited: 0x00)
struct FLevelGenerationCarver {
	FMatrixWithExactSync Transform; // 0x00(0x40)
	USTLMeshCarver* MeshCarver; // 0x40(0x08)
	UStaticMesh* ConvexCarver; // 0x48(0x08)
	UStaticMeshCarver* StaticMeshCarver; // 0x50(0x08)
	float ConvexExpensiveNoise; // 0x58(0x04)
	enum class CarveOptionsCellSize CarveCellSize; // 0x5c(0x01)
	UTerrainMaterial* TerrainMaterial; // 0x60(0x08)
	enum class ECarveFilterType Filter; // 0x68(0x01)
	bool ToBeDiscarded; // 0x69(0x01)
};

// ScriptStruct FSD.CustomUsable
// Size: 0x10 (Inherited: 0x00)
struct FCustomUsable {
	UUsableComponentBase* Usable; // 0x00(0x08)
	enum class ECustomUsableType TerminationType; // 0x08(0x01)
};

// ScriptStruct FSD.ClaimableRewardView
// Size: 0x70 (Inherited: 0x00)
struct FClaimableRewardView {
	UDialogDataAsset* MissionControlSpeak; // 0x00(0x08)
	TSoftClassPtr<UObject> BackgroundWidgetClass; // 0x08(0x28)
	TSoftObjectPtr<USoundCue> FanfareAudio; // 0x30(0x28)
	float MoveInRewardsDelay; // 0x58(0x04)
	TArray<FClaimableRewardEntry> RewardDisplays; // 0x60(0x10)
};

// ScriptStruct FSD.ClaimableRewardArray
// Size: 0x10 (Inherited: 0x00)
struct FClaimableRewardArray {
	TArray<FClaimableRewardEntry> Entries; // 0x00(0x10)
};

// ScriptStruct FSD.ExampleStruct
// Size: 0x04 (Inherited: 0x00)
struct FExampleStruct {
	float Field; // 0x00(0x04)
};

// ScriptStruct FSD.MissionShoutQueueItem
// Size: 0x48 (Inherited: 0x00)
struct FMissionShoutQueueItem {
	TSoftObjectPtr<USoundBase> AudioPtr; // 0x00(0x28)
	FText Text; // 0x28(0x18)
	USoundBase* LoadedAudio; // 0x40(0x08)
};

// ScriptStruct FSD.ActiveOutline
// Size: 0x0c (Inherited: 0x00)
struct FActiveOutline {
};

// ScriptStruct FSD.CharacterShouts
// Size: 0xb0 (Inherited: 0x00)
struct FCharacterShouts {
	UDialogDataAsset* Attention; // 0x00(0x08)
	UDialogDataAsset* Follow; // 0x08(0x08)
	UDialogDataAsset* standingDown; // 0x10(0x08)
	UDialogDataAsset* Downed; // 0x18(0x08)
	UDialogDataAsset* RequestRevive; // 0x20(0x08)
	UDialogDataAsset* Revived; // 0x28(0x08)
	UDialogDataAsset* Resupply; // 0x30(0x08)
	UDialogDataAsset* FriendlyFire; // 0x38(0x08)
	UDialogDataAsset* KillCry; // 0x40(0x08)
	UDialogDataAsset* Dead; // 0x48(0x08)
	UDialogDataAsset* Cheating; // 0x50(0x08)
	UDialogDataAsset* ResourceFull; // 0x58(0x08)
	UDialogDataAsset* ResourceFullNoDonkey; // 0x60(0x08)
	UDialogDataAsset* CallDonkey; // 0x68(0x08)
	UDialogDataAsset* Depositing; // 0x70(0x08)
	UDialogDataAsset* DepositingNoDonkey; // 0x78(0x08)
	UDialogDataAsset* OutOfAmmo; // 0x80(0x08)
	UDialogDataAsset* Reloading; // 0x88(0x08)
	UDialogDataAsset* CharacterSelected; // 0x90(0x08)
	UDialogDataAsset* UpgradeBought; // 0x98(0x08)
	UDialogDataAsset* WaitingInDropPod; // 0xa0(0x08)
	UDialogDataAsset* Carrying; // 0xa8(0x08)
};

// ScriptStruct FSD.CommunityReward
// Size: 0x10 (Inherited: 0x00)
struct FCommunityReward {
	UResourceData* Resource; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct FSD.CommunityFactionData
// Size: 0x38 (Inherited: 0x00)
struct FCommunityFactionData {
	bool IsValid; // 0x00(0x01)
	TArray<FString> Goals; // 0x08(0x10)
	TArray<float> Values; // 0x18(0x10)
	TArray<int32_t> Members; // 0x28(0x10)
};

// ScriptStruct FSD.CommunityGoalStateData
// Size: 0x10 (Inherited: 0x00)
struct FCommunityGoalStateData {
	bool isGoal; // 0x00(0x01)
	bool isRecruitment; // 0x01(0x01)
	float TimeLeftSeconds; // 0x04(0x04)
	int32_t CurrentGoalPeriodID; // 0x08(0x04)
};

// ScriptStruct FSD.CommunityRewardNotification
// Size: 0x40 (Inherited: 0x00)
struct FCommunityRewardNotification {
	FText Text; // 0x00(0x18)
	UTexture2D* Icon; // 0x18(0x08)
	FLinearColor IconColor; // 0x20(0x10)
	FString ID; // 0x30(0x10)
};

// ScriptStruct FSD.ActionIconMapping
// Size: 0x28 (Inherited: 0x00)
struct FActionIconMapping {
	FKey ActionKey; // 0x00(0x18)
	UTexture2D* Icon; // 0x18(0x08)
	bool DoNotTint; // 0x20(0x01)
};

// ScriptStruct FSD.PricingTierEntry
// Size: 0x28 (Inherited: 0x08)
struct FPricingTierEntry : FTableRowBase {
	FIRandRange CreditCost; // 0x08(0x08)
	FIRandRange Material1; // 0x10(0x08)
	FIRandRange Material2; // 0x18(0x08)
	FIRandRange Material3; // 0x20(0x08)
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
	FName SaveID; // 0x00(0x08)
	FText Description; // 0x08(0x18)
	TArray<FName> ActionNames; // 0x20(0x10)
	enum class EKeyBindingAxis ActionAxis; // 0x30(0x01)
};

// ScriptStruct FSD.DailyDeal
// Size: 0x18 (Inherited: 0x00)
struct FDailyDeal {
	UResourceData* Resource; // 0x00(0x08)
	enum class EDealType DealType; // 0x08(0x01)
	int32_t ResourceAmount; // 0x0c(0x04)
	int32_t Credits; // 0x10(0x04)
	float ChangePercent; // 0x14(0x04)
};

// ScriptStruct FSD.DailyDealSetup
// Size: 0x28 (Inherited: 0x00)
struct FDailyDealSetup {
	UResourceData* Resource; // 0x00(0x08)
	enum class EDealType DealType; // 0x08(0x01)
	FIntPoint UnitsRange; // 0x0c(0x08)
	FVector2D DiscountRangePercent; // 0x14(0x08)
	FVector2D ExtraValueRangePercent; // 0x1c(0x08)
};

// ScriptStruct FSD.DamageSubsystemItem
// Size: 0x18 (Inherited: 0x00)
struct FDamageSubsystemItem {
	UDamageComponent* DamageComponent; // 0x00(0x08)
};

// ScriptStruct FSD.DanceItem
// Size: 0x10 (Inherited: 0x00)
struct FDanceItem {
	UAnimSequence* DanceMove; // 0x00(0x08)
	UAnimSequence* DanceMoveWithBeer; // 0x08(0x08)
};

// ScriptStruct FSD.CellNoise
// Size: 0x2c (Inherited: 0x00)
struct FCellNoise {
	int32_t Seed; // 0x00(0x04)
	FVector CellSize; // 0x04(0x0c)
	int32_t NumValues; // 0x10(0x04)
	int32_t MinCellValue; // 0x14(0x04)
	int32_t MaxCellValue; // 0x18(0x04)
};

// ScriptStruct FSD.DebrisCellNoiseParameters
// Size: 0x10 (Inherited: 0x00)
struct FDebrisCellNoiseParameters {
	UDebrisCellNoise* Noise; // 0x00(0x08)
	int32_t MinCellValue; // 0x08(0x04)
	int32_t MaxCellValue; // 0x0c(0x04)
};

// ScriptStruct FSD.UDebrisCarveMesh
// Size: 0x10 (Inherited: 0x00)
struct FUDebrisCarveMesh {
	UStaticMesh* Mesh; // 0x00(0x08)
	float Probablity; // 0x08(0x04)
};

// ScriptStruct FSD.DebrisItemActorItem
// Size: 0x10 (Inherited: 0x00)
struct FDebrisItemActorItem {
	AActor* Actor; // 0x00(0x08)
	float Probability; // 0x08(0x04)
};

// ScriptStruct FSD.DebrisStaticMesh
// Size: 0x48 (Inherited: 0x00)
struct FDebrisStaticMesh {
	UStaticMesh* Mesh; // 0x00(0x08)
	UMaterialInterface* Material; // 0x08(0x08)
	enum class EDebrisMeshCollisionProfile CollisionProfile; // 0x10(0x01)
	float Probablity; // 0x14(0x04)
	USoundCue* DestroyedSound; // 0x18(0x08)
	UParticleSystem* DestroyedParticles; // 0x20(0x08)
	FDecalData Decal; // 0x28(0x18)
	bool Fragile; // 0x40(0x01)
	enum class EDebrisMeshShadows CastShadows; // 0x41(0x01)
	bool Durable; // 0x42(0x01)
	bool SpawnWhenCarving; // 0x43(0x01)
	bool OnlySpawnWhenCarving; // 0x44(0x01)
};

// ScriptStruct FSD.DecalData
// Size: 0x18 (Inherited: 0x00)
struct FDecalData {
	UMaterialInterface* DecalMaterial; // 0x00(0x08)
	float DecalSize; // 0x08(0x04)
	float DecalDepth; // 0x0c(0x04)
	float LifeSpan; // 0x10(0x04)
	float FadeDuration; // 0x14(0x04)
};

// ScriptStruct FSD.UDebrisStaticCarveMesh
// Size: 0x10 (Inherited: 0x00)
struct FUDebrisStaticCarveMesh {
	UStaticMeshCarver* Mesh; // 0x00(0x08)
	float Probablity; // 0x08(0x04)
};

// ScriptStruct FSD.DebrisCapsule
// Size: 0x20 (Inherited: 0x00)
struct FDebrisCapsule {
	int32_t ID; // 0x00(0x04)
	FVector Start; // 0x04(0x0c)
	FVector End; // 0x10(0x0c)
	float Radius; // 0x1c(0x04)
};

// ScriptStruct FSD.DebrisInfluence
// Size: 0x10 (Inherited: 0x00)
struct FDebrisInfluence {
	UObject* CaveInfluencer; // 0x00(0x08)
	float Radius; // 0x08(0x04)
};

// ScriptStruct FSD.DebrisWhenCarving
// Size: 0x30 (Inherited: 0x00)
struct FDebrisWhenCarving {
	UDebrisInstances* Debris; // 0x28(0x08)
};

// ScriptStruct FSD.CSGRaycastHitInfo
// Size: 0x1c (Inherited: 0x00)
struct FCSGRaycastHitInfo {
	FVector Position; // 0x00(0x0c)
	FVector Normal; // 0x0c(0x0c)
	int32_t Material; // 0x18(0x04)
};

// ScriptStruct FSD.DeepDiveLoaderSequence
// Size: 0x28 (Inherited: 0x00)
struct FDeepDiveLoaderSequence {
	TSoftObjectPtr<ULevelSequence> LevelSequence; // 0x00(0x28)
};

// ScriptStruct FSD.DeepDiveTemplateItem
// Size: 0x18 (Inherited: 0x00)
struct FDeepDiveTemplateItem {
	UMissionTemplate* mission; // 0x00(0x08)
	TArray<UMissionDuration*> AllowedDurations; // 0x08(0x10)
};

// ScriptStruct FSD.DeepDiveRewardItem
// Size: 0x10 (Inherited: 0x00)
struct FDeepDiveRewardItem {
	USchematic* Schematic; // 0x00(0x08)
	int32_t Stage; // 0x08(0x04)
	bool WasAlreadyGiven; // 0x0c(0x01)
};

// ScriptStruct FSD.HandleRotationOptions
// Size: 0x01 (Inherited: 0x00)
struct FHandleRotationOptions {
	bool HandlePitch; // 0x00(0x01)
};

// ScriptStruct FSD.DeepRepPath
// Size: 0xd0 (Inherited: 0x00)
struct FDeepRepPath {
	FVector PathBase; // 0x00(0x0c)
	char PathLength; // 0x0c(0x01)
	enum class EDeepMovementState State; // 0x0d(0x01)
	char StateBits; // 0x0e(0x01)
	FVector PathOffsets[0x10]; // 0x10(0xc0)
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
	TArray<FGrenadeExplodeOperationData> explosions; // 0x00(0x10)
	TArray<FCarveWithColliderOperationData> colliderCarves; // 0x10(0x10)
	TArray<FCarveWithSTLMeshOperationData> meshCarves; // 0x20(0x10)
	TArray<FPickaxeDigOperationData> pickAxe; // 0x30(0x10)
	TArray<FRemoveFloatingIslandOperationData> RemoveFloating; // 0x40(0x10)
	TArray<FDrillOperationData> drills; // 0x50(0x10)
	TArray<FMeltOperationData> melts; // 0x60(0x10)
	TArray<FSplineSegmentCarveOperationData> splines; // 0x70(0x10)
	TArray<int32_t> DebrisInstanceComponentPairs; // 0x80(0x10)
	TArray<uint32_t> visibleChunks; // 0x90(0x10)
	int32_t OperationCount; // 0xa0(0x04)
};

// ScriptStruct FSD.DialogStruct
// Size: 0x50 (Inherited: 0x00)
struct FDialogStruct {
	bool Enabled; // 0x00(0x01)
	FText Text; // 0x08(0x18)
	TSoftObjectPtr<USoundBase> Audio; // 0x20(0x28)
	enum class EDialogRestriction Restriction; // 0x48(0x01)
};

// ScriptStruct FSD.VeteranComposition
// Size: 0x20 (Inherited: 0x00)
struct FVeteranComposition {
	FRandFloatInterval Normal; // 0x00(0x10)
	FRandFloatInterval Large; // 0x10(0x10)
};

// ScriptStruct FSD.RandFloatInterval
// Size: 0x10 (Inherited: 0x00)
struct FRandFloatInterval {
	TArray<FRandFloatIntervalItem> Intervals; // 0x00(0x10)
};

// ScriptStruct FSD.RandFloatIntervalItem
// Size: 0x0c (Inherited: 0x00)
struct FRandFloatIntervalItem {
	float Weight; // 0x00(0x04)
	FRandRange Range; // 0x04(0x08)
};

// ScriptStruct FSD.DiscordFSDRichPresence
// Size: 0x80 (Inherited: 0x00)
struct FDiscordFSDRichPresence {
	FString State; // 0x00(0x10)
	FString details; // 0x10(0x10)
	FString matchSecret; // 0x20(0x10)
	FString joinSecret; // 0x30(0x10)
	FString partyId; // 0x40(0x10)
	FString smallImageText; // 0x50(0x10)
	FString LargeImageText; // 0x60(0x10)
	int32_t startTimestamp; // 0x70(0x04)
	int32_t partySize; // 0x74(0x04)
	enum class EDiscordBiomeType BiomeType; // 0x78(0x01)
	enum class EDiscordMissionType MissionType; // 0x79(0x01)
	bool bIsPureSolo; // 0x7a(0x01)
};

// ScriptStruct FSD.DiscordEoMData
// Size: 0x20 (Inherited: 0x00)
struct FDiscordEoMData {
	FString nick; // 0x00(0x10)
	FString UserId; // 0x10(0x10)
};

// ScriptStruct FSD.DiscordServerInviteData
// Size: 0x78 (Inherited: 0x00)
struct FDiscordServerInviteData {
	FString code; // 0x00(0x10)
	FString serverID; // 0x10(0x10)
	FString serverDescription; // 0x20(0x10)
	FString serverName; // 0x30(0x10)
	int32_t presenceCount; // 0x40(0x04)
	int32_t memberCount; // 0x44(0x04)
	FString iconKey; // 0x48(0x10)
	FString bannerKey; // 0x58(0x10)
	FString splashKey; // 0x68(0x10)
};

// ScriptStruct FSD.DiscordRewardNotification
// Size: 0x40 (Inherited: 0x00)
struct FDiscordRewardNotification {
	FText Text; // 0x00(0x18)
	UTexture2D* Icon; // 0x18(0x08)
	FLinearColor IconColor; // 0x20(0x10)
	FString ID; // 0x30(0x10)
};

// ScriptStruct FSD.DoubleDrillDamageItem
// Size: 0x38 (Inherited: 0x00)
struct FDoubleDrillDamageItem {
	TWeakObjectPtr<UPrimitiveComponent> Target; // 0x00(0x08)
	FVector_NetQuantize Location; // 0x08(0x0c)
	FVector_NetQuantizeNormal Normal; // 0x14(0x0c)
	UFSDPhysicalMaterial* Material; // 0x20(0x08)
	FName BoneName; // 0x28(0x08)
	char BoneIndex; // 0x30(0x01)
};

// ScriptStruct FSD.DeathIntroSettings
// Size: 0x24 (Inherited: 0x00)
struct FDeathIntroSettings {
	float FirstPersonDuration; // 0x04(0x04)
	float FadeToBlackDelay; // 0x08(0x04)
	float FadeToBlackDuration; // 0x0c(0x04)
	float FadeFromBlackDelay; // 0x10(0x04)
	float FadeFromBlackDuration; // 0x14(0x04)
	float ZoomOutDuration; // 0x18(0x04)
	float ZoomOutStartDistance; // 0x1c(0x04)
};

// ScriptStruct FSD.BarleySpawnItem
// Size: 0x10 (Inherited: 0x00)
struct FBarleySpawnItem {
	UResourceData* Resource; // 0x00(0x08)
	float Weight; // 0x08(0x04)
};

// ScriptStruct FSD.EliminationDescriptors
// Size: 0x10 (Inherited: 0x00)
struct FEliminationDescriptors {
	TArray<UEnemyDescriptor*> Descriptors; // 0x00(0x10)
};

// ScriptStruct FSD.EliminationTarget
// Size: 0x10 (Inherited: 0x00)
struct FEliminationTarget {
	TArray<AFSDPawn*> Targets; // 0x00(0x10)
};

// ScriptStruct FSD.EncounterManagerItem
// Size: 0x40 (Inherited: 0x00)
struct FEncounterManagerItem {
	TArray<FManagedEncounterItem> ManagedEcnounterItems; // 0x00(0x10)
	TArray<FPrePlacedEncounterItem> PrePlacedEncounterItems; // 0x10(0x10)
	int32_t ID; // 0x20(0x04)
	bool IsRoom; // 0x24(0x01)
	FDelegate Callback; // 0x2c(0x10)
};

// ScriptStruct FSD.PrePlacedEncounterItem
// Size: 0x50 (Inherited: 0x00)
struct FPrePlacedEncounterItem {
	UEnemyDescriptor* descriptor; // 0x00(0x08)
	FTransform Location; // 0x10(0x30)
	AEncounterActor* EncounterActor; // 0x40(0x08)
};

// ScriptStruct FSD.ManagedEncounterItem
// Size: 0x10 (Inherited: 0x00)
struct FManagedEncounterItem {
	UEnemyDescriptor* descriptor; // 0x00(0x08)
	int32_t amount; // 0x08(0x04)
};

// ScriptStruct FSD.EncounterSpecialItem
// Size: 0x10 (Inherited: 0x00)
struct FEncounterSpecialItem {
	UEnemyDescriptor* enemy; // 0x00(0x08)
	float BaseChance; // 0x08(0x04)
	bool CanSpawnInDeepDive; // 0x0c(0x01)
};

// ScriptStruct FSD.EncounterRareCritterItem
// Size: 0x10 (Inherited: 0x00)
struct FEncounterRareCritterItem {
	URareCritterDescriptor* Critter; // 0x00(0x08)
	float Chance; // 0x08(0x04)
};

// ScriptStruct FSD.GliderAnimSync
// Size: 0x20 (Inherited: 0x00)
struct FGliderAnimSync {
	float Time; // 0x00(0x04)
	float AnimAlphaSync; // 0x04(0x04)
	FVector VelocityPercent; // 0x08(0x0c)
	bool DownUpBlendBool; // 0x14(0x01)
	bool RightLeftBlendBool; // 0x15(0x01)
	float VerticalAddBlend; // 0x18(0x04)
	float HorizontalAddBlend; // 0x1c(0x04)
};

// ScriptStruct FSD.TestAnimInstanceProxy
// Size: 0x700 (Inherited: 0x6e0)
struct FTestAnimInstanceProxy : FAnimInstanceProxy {
	bool IsAlive; // 0x6e0(0x01)
	float RandomStartPosition; // 0x6e4(0x04)
	float Speed; // 0x6e8(0x04)
	bool IsMoving; // 0x6ec(0x01)
	float WalkCyclePlayRate; // 0x6f0(0x04)
};

// ScriptStruct FSD.ControlEnemyState
// Size: 0x60 (Inherited: 0x00)
struct FControlEnemyState {
	ADeepPathfinderCharacter* ControlledEnemy; // 0x00(0x08)
	FTransform InitialTargetTransform; // 0x10(0x30)
	float InitialTargetBlendTotalTime; // 0x40(0x04)
	FVector InitialCharacterVelocity; // 0x44(0x0c)
	FVector InitialEnemyVelocity; // 0x50(0x0c)
};

// ScriptStruct FSD.EnemyAttackDescription
// Size: 0x20 (Inherited: 0x00)
struct FEnemyAttackDescription {
	FText Name; // 0x00(0x18)
	enum class EEnemyAttackType Range; // 0x18(0x01)
	enum class EDamageType DamageType; // 0x19(0x01)
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
	UEnemyDescriptor* EnemyDescriptor; // 0x00(0x08)
};

// ScriptStruct FSD.EnemyGroupDescriptorSpawnItem
// Size: 0x10 (Inherited: 0x00)
struct FEnemyGroupDescriptorSpawnItem {
	UEnemyDescriptor* enemy; // 0x00(0x08)
	int32_t count; // 0x08(0x04)
};

// ScriptStruct FSD.EnemyDebris
// Size: 0x18 (Inherited: 0x00)
struct FEnemyDebris {
	float InfluenceRange; // 0x00(0x04)
	TArray<UDebrisBase*> Debris; // 0x08(0x10)
};

// ScriptStruct FSD.EnemySpawnParamsEntry
// Size: 0x30 (Inherited: 0x08)
struct FEnemySpawnParamsEntry : FTableRowBase {
	FString ItemName; // 0x08(0x10)
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
	TArray<FSpawnEffectItem> Items; // 0x108(0x10)
};

// ScriptStruct FSD.SpawnEffectItem
// Size: 0x3c (Inherited: 0x0c)
struct FSpawnEffectItem : FFastArraySerializerItem {
	enum class ECreatureSize CreatureSize; // 0x0c(0x04)
	FVector_NetQuantize Location; // 0x10(0x0c)
	FRotator Rotation; // 0x1c(0x0c)
};

// ScriptStruct FSD.SpawnQueueItem
// Size: 0x80 (Inherited: 0x00)
struct FSpawnQueueItem {
	TSoftClassPtr<UObject> EnemyClass; // 0x00(0x28)
	UEnemyDescriptor* enemy; // 0x28(0x08)
	FDelegate Callback; // 0x30(0x10)
};

// ScriptStruct FSD.SpawnRarityModifierItem
// Size: 0x08 (Inherited: 0x00)
struct FSpawnRarityModifierItem {
};

// ScriptStruct FSD.EnemySpawnItem
// Size: 0x10 (Inherited: 0x00)
struct FEnemySpawnItem {
	UEnemyDescriptor* enemy; // 0x00(0x08)
	int32_t count; // 0x08(0x04)
	float VeteranComposition; // 0x0c(0x04)
};

// ScriptStruct FSD.MUSTBEHERETOCOMPILE
// Size: 0x01 (Inherited: 0x00)
struct FMUSTBEHERETOCOMPILE {
};

// ScriptStruct FSD.WaveEntry
// Size: 0x38 (Inherited: 0x00)
struct FWaveEntry {
	UEnemyWaveController* WaveControllerLoaded; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	TSoftClassPtr<UObject> WaveController; // 0x10(0x28)
};

// ScriptStruct FSD.EscortMulePath
// Size: 0x18 (Inherited: 0x00)
struct FEscortMulePath {
	TArray<FVector> Path; // 0x00(0x10)
};

// ScriptStruct FSD.EscortMuleMovementState
// Size: 0x50 (Inherited: 0x00)
struct FEscortMuleMovementState {
	FTransform TargetTransform; // 0x00(0x30)
	FVector Velocity; // 0x30(0x0c)
	FQuat AngularVelocity; // 0x40(0x10)
};

// ScriptStruct FSD.EscortMuleExtractorSlot
// Size: 0x20 (Inherited: 0x00)
struct FEscortMuleExtractorSlot {
	enum class EEscortExtractorState ExtractorState; // 0x00(0x01)
	enum class EEscortExtractorState LastState; // 0x01(0x01)
	USceneComponent* AttachPoint; // 0x08(0x08)
	UInstantUsable* Usable; // 0x10(0x08)
	UWidgetComponent* Widget; // 0x18(0x08)
};

// ScriptStruct FSD.SmartSpawnEntry
// Size: 0x18 (Inherited: 0x00)
struct FSmartSpawnEntry {
};

// ScriptStruct FSD.FacilityGeneratorEnounter
// Size: 0x30 (Inherited: 0x00)
struct FFacilityGeneratorEnounter {
	TArray<UEnemyDescriptor*> Enemies; // 0x00(0x10)
	float Difficulty; // 0x10(0x04)
	FRandInterval Diversity; // 0x18(0x10)
	FIRandRange EncountersPerRoom; // 0x28(0x08)
};

// ScriptStruct FSD.RandInterval
// Size: 0x10 (Inherited: 0x00)
struct FRandInterval {
	TArray<FRandIntervalItem> Intervals; // 0x00(0x10)
};

// ScriptStruct FSD.RandIntervalItem
// Size: 0x0c (Inherited: 0x00)
struct FRandIntervalItem {
	float Weight; // 0x00(0x04)
	FIRandRange Range; // 0x04(0x08)
};

// ScriptStruct FSD.FakeMoveState
// Size: 0x24 (Inherited: 0x00)
struct FFakeMoveState {
	FVector Pos1; // 0x00(0x0c)
	FVector Pos2; // 0x0c(0x0c)
	FVector Vel; // 0x18(0x0c)
};

// ScriptStruct FSD.FakeMoverState
// Size: 0x60 (Inherited: 0x00)
struct FFakeMoverState {
	float TickRate; // 0x00(0x04)
	float TickTime; // 0x04(0x04)
	FVector PrevPos; // 0x08(0x0c)
	FVector NextPos; // 0x14(0x0c)
	FVector PrevSurfaceNormal; // 0x20(0x0c)
	FVector NextSurfaceNormal; // 0x2c(0x0c)
	float AccumulatedTime; // 0x38(0x04)
	AActor* Target; // 0x40(0x08)
	FVector Velocity; // 0x48(0x0c)
	bool NearSurface; // 0x54(0x01)
	float SignedDistToSurface; // 0x58(0x04)
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
	TWeakObjectPtr<AActor> Actor; // 0x00(0x08)
	float Inhibit; // 0x08(0x04)
	float Radius; // 0x0c(0x04)
	float InvRadius; // 0x10(0x04)
	FVector Pos; // 0x14(0x0c)
	bool Moving; // 0x20(0x01)
};

// ScriptStruct FSD.FloatPerkEffect
// Size: 0x30 (Inherited: 0x00)
struct FFloatPerkEffect {
	UFloatPerkActivation* PerkActivation; // 0x00(0x08)
	FText FormattedDescription; // 0x08(0x18)
	TArray<FFloatPerkRankValue> RankValues; // 0x20(0x10)
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
	FVector Position; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
};

// ScriptStruct FSD.LayeredNoise
// Size: 0x10 (Inherited: 0x00)
struct FLayeredNoise {
	UFloodFillSettings* Noise; // 0x00(0x08)
	float Scale; // 0x08(0x04)
};

// ScriptStruct FSD.FormationDataItem
// Size: 0x10 (Inherited: 0x00)
struct FFormationDataItem {
	FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct FSD.Formation
// Size: 0x20 (Inherited: 0x00)
struct FFormation {
	UFormationData* FormationData; // 0x18(0x08)
};

// ScriptStruct FSD.FormationID
// Size: 0x08 (Inherited: 0x00)
struct FFormationID {
};

// ScriptStruct FSD.DamageData
// Size: 0x18 (Inherited: 0x00)
struct FDamageData {
	UFSDPhysicalMaterial* Bodypart; // 0x00(0x08)
};

// ScriptStruct FSD.DelegateStruct
// Size: 0x01 (Inherited: 0x00)
struct FDelegateStruct {
};

// ScriptStruct FSD.GeneratedMissionGroup
// Size: 0x10 (Inherited: 0x00)
struct FGeneratedMissionGroup {
	TArray<UGeneratedMission*> AvailableMissions; // 0x00(0x10)
};

// ScriptStruct FSD.FSDTagsRoot
// Size: 0x18 (Inherited: 0x00)
struct FFSDTagsRoot {
	FFSDTagsAttitude Attitude; // 0x00(0x18)
};

// ScriptStruct FSD.FSDTagsAttitude
// Size: 0x18 (Inherited: 0x00)
struct FFSDTagsAttitude {
	FGameplayTag Friendly; // 0x00(0x08)
	FGameplayTag Neutral; // 0x08(0x08)
	FGameplayTag Hostile; // 0x10(0x08)
};

// ScriptStruct FSD.GeneratedMissionSeed
// Size: 0x58 (Inherited: 0x00)
struct FGeneratedMissionSeed {
	int32_t Seed; // 0x00(0x04)
	int32_t GlobalSeed; // 0x04(0x04)
	UBiome* Biome; // 0x08(0x08)
	UMissionTemplate* Template; // 0x10(0x08)
	UMissionComplexity* ComplexityLimit; // 0x18(0x08)
	UMissionDuration* DurationLimit; // 0x20(0x08)
	UMissionMutator* Mutator; // 0x28(0x08)
	TArray<UMissionWarning*> Warnings; // 0x30(0x10)
	TArray<UFSDEvent*> ActiveEvents; // 0x40(0x10)
	enum class EMissionStructure MissionStructure; // 0x50(0x01)
};

// ScriptStruct FSD.ReplicatedObjectives
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedObjectives {
	bool HasReplicated; // 0x00(0x01)
	TArray<UObjective*> Objectives; // 0x08(0x10)
};

// ScriptStruct FSD.InputDisplay
// Size: 0x40 (Inherited: 0x00)
struct FInputDisplay {
	enum class EInputInteraction Interaction; // 0x00(0x01)
	FText InputText; // 0x08(0x18)
	FLinearColor TextTint; // 0x20(0x10)
	UTexture2D* Icon; // 0x30(0x08)
	bool IconTintable; // 0x38(0x01)
};

// ScriptStruct FSD.ItemRefundListItem
// Size: 0x68 (Inherited: 0x00)
struct FItemRefundListItem {
	FString Name; // 0x00(0x10)
	TMap<FGuid, FItemRefundResourceItem> Resources; // 0x10(0x50)
	float CreditCost; // 0x60(0x04)
};

// ScriptStruct FSD.ItemRefundResourceItem
// Size: 0x18 (Inherited: 0x00)
struct FItemRefundResourceItem {
	FString Name; // 0x00(0x10)
	float amount; // 0x10(0x04)
};

// ScriptStruct FSD.SplineSegment
// Size: 0x30 (Inherited: 0x00)
struct FSplineSegment {
	FVector StartLocation; // 0x00(0x0c)
	FVector StartTangent; // 0x0c(0x0c)
	FVector EndLocation; // 0x18(0x0c)
	FVector EndTangent; // 0x24(0x0c)
};

// ScriptStruct FSD.NewPlayerMutator
// Size: 0x18 (Inherited: 0x00)
struct FNewPlayerMutator {
	int32_t MinCampaignProgress; // 0x00(0x04)
	int32_t MaxCampaignProgress; // 0x04(0x04)
	TArray<UMutator*> Mutators; // 0x08(0x10)
};

// ScriptStruct FSD.WidgetMover
// Size: 0x28 (Inherited: 0x00)
struct FWidgetMover {
	TWeakObjectPtr<UWidget> Widget; // 0x00(0x08)
};

// ScriptStruct FSD.CustomCounter
// Size: 0x28 (Inherited: 0x00)
struct FCustomCounter {
	FDelegate OnCount; // 0x00(0x10)
	TWeakObjectPtr<UObject> Owner; // 0x10(0x08)
};

// ScriptStruct FSD.WidgetTextCounter
// Size: 0x1c (Inherited: 0x00)
struct FWidgetTextCounter {
	TWeakObjectPtr<UTextBlock> Widget; // 0x00(0x08)
};

// ScriptStruct FSD.WidgetFade
// Size: 0x1c (Inherited: 0x00)
struct FWidgetFade {
	TWeakObjectPtr<UUserWidget> Widget; // 0x00(0x08)
};

// ScriptStruct FSD.WidgetPing
// Size: 0x20 (Inherited: 0x00)
struct FWidgetPing {
	TWeakObjectPtr<UWidget> Widget; // 0x00(0x08)
};

// ScriptStruct FSD.TesterName
// Size: 0x28 (Inherited: 0x08)
struct FTesterName : FTableRowBase {
	FString SteamID; // 0x08(0x10)
	FString SteamProfileName; // 0x18(0x10)
};

// ScriptStruct FSD.TipsTableRow
// Size: 0x70 (Inherited: 0x08)
struct FTipsTableRow : FTableRowBase {
	FText Header; // 0x08(0x18)
	FText Description; // 0x20(0x18)
	FText InputText; // 0x38(0x18)
	FText InputTextControllerOverride; // 0x50(0x18)
	float TimeToDisplay; // 0x68(0x04)
};

// ScriptStruct FSD.GVisibilityGroups
// Size: 0x58 (Inherited: 0x00)
struct FGVisibilityGroups {
	TSet<UHUDVisibilityGroup*> AllGroups; // 0x00(0x50)
	UHUDVisibilityGroup* EnemyHealth; // 0x50(0x08)
};

// ScriptStruct FSD.GDItemCategoryIDs
// Size: 0x38 (Inherited: 0x00)
struct FGDItemCategoryIDs {
	UCategoryID* OverclockID; // 0x00(0x08)
	UCategoryID* ItemSkinID; // 0x08(0x08)
	UCategoryID* VanityID; // 0x10(0x08)
	UCategoryID* PickaxePartID; // 0x18(0x08)
	UCategoryID* WeaponID; // 0x20(0x08)
	UCategoryID* CraftingID; // 0x28(0x08)
	UCategoryID* ForgeID; // 0x30(0x08)
};

// ScriptStruct FSD.GDPerks
// Size: 0x90 (Inherited: 0x00)
struct FGDPerks {
	TArray<UPerkAsset*> PerkAssets; // 0x00(0x10)
	TArray<int32_t> RequiredClaimsPerTier; // 0x10(0x10)
	UFloatPerkAsset* IronWill; // 0x20(0x08)
	UFloatPerkAsset* DashPerk; // 0x28(0x08)
	UFloatPerkAsset* MarathonPerk; // 0x30(0x08)
	UFloatPerkAsset* ShieldLink; // 0x38(0x08)
	UFloatPerkAsset* Bezerk; // 0x40(0x08)
	UFloatPerkAsset* JumpBoots; // 0x48(0x08)
	UFloatPerkAsset* ImpactCompensators; // 0x50(0x08)
	UFloatPerkAsset* BeastMaster; // 0x58(0x08)
	UFloatPerkAsset* DownedBomb; // 0x60(0x08)
	UFloatPerkAsset* FieldMedic; // 0x68(0x08)
	UFloatPerkAsset* HeightenedSenses; // 0x70(0x08)
	UFloatPerkAsset* HoverBoots; // 0x78(0x08)
	UFloatPerkAsset* ActivePerkSlots; // 0x80(0x08)
	UFloatPerkAsset* PassivePerkSlots; // 0x88(0x08)
};

// ScriptStruct FSD.GDPlayerAndCharacterProgression
// Size: 0xa0 (Inherited: 0x00)
struct FGDPlayerAndCharacterProgression {
	TArray<TSoftClassPtr<UObject>> RankedHeroClasses; // 0x00(0x10)
	TArray<TSoftClassPtr<UObject>> TestHeroClasses; // 0x10(0x10)
	TArray<APlayerCharacter*> LoadedClasses; // 0x20(0x10)
	TArray<FText> PlayerRankNames; // 0x30(0x10)
	TArray<int32_t> CharacterXPLevels; // 0x40(0x10)
	TMap<FGuid, UPlayerCharacterID*> PlayerCharacterIDs; // 0x50(0x50)
};

// ScriptStruct FSD.GDMilestones
// Size: 0x10 (Inherited: 0x00)
struct FGDMilestones {
	TArray<UMilestoneAsset*> Milestones; // 0x00(0x10)
};

// ScriptStruct FSD.GDGameStatsTracking
// Size: 0x20 (Inherited: 0x00)
struct FGDGameStatsTracking {
	FGameplayTagContainer TotalEnemyKillsFilter; // 0x00(0x20)
};

// ScriptStruct FSD.GDTerrainTypes
// Size: 0x10 (Inherited: 0x00)
struct FGDTerrainTypes {
	UTerrainType* Rock; // 0x00(0x08)
	UTerrainType* Dirt; // 0x08(0x08)
};

// ScriptStruct FSD.GDDifficulty
// Size: 0x10 (Inherited: 0x00)
struct FGDDifficulty {
	TArray<UDifficultySetting*> DifficultySettings; // 0x00(0x10)
};

// ScriptStruct FSD.GDResources
// Size: 0xe0 (Inherited: 0x00)
struct FGDResources {
	UResourceData* CreditsResource; // 0x00(0x08)
	UResourceData* MOMResource; // 0x08(0x08)
	UResourceData* GoldResource; // 0x10(0x08)
	UResourceData* NitraResource; // 0x18(0x08)
	UResourceData* HollomiteResource; // 0x20(0x08)
	UResourceData* MagniteResource; // 0x28(0x08)
	UResourceData* NeromiteResource; // 0x30(0x08)
	UResourceData* QuantriteResource; // 0x38(0x08)
	UResourceData* UmaniteResource; // 0x40(0x08)
	UResourceData* CropaniteResource; // 0x48(0x08)
	UResourceData* DystrumResource; // 0x50(0x08)
	UResourceData* IronResource; // 0x58(0x08)
	UResourceData* EnorResource; // 0x60(0x08)
	UResourceData* BismorResource; // 0x68(0x08)
	UResourceData* OilShaleResource; // 0x70(0x08)
	UResourceData* Barly1; // 0x78(0x08)
	UResourceData* Barly2; // 0x80(0x08)
	UResourceData* Barly3; // 0x88(0x08)
	UResourceData* Barly4; // 0x90(0x08)
	UGemResourceData* JadizResource; // 0x98(0x08)
	UGemResourceData* BittergemResource; // 0xa0(0x08)
	UGemResourceData* MotherlodeGemResource; // 0xa8(0x08)
	UResourceData* RedSugarResource; // 0xb0(0x08)
	UResourceData* BlankSchematics; // 0xb8(0x08)
	TArray<UResourceData*> CraftingResources; // 0xc0(0x10)
	TArray<UResourceData*> AllResources; // 0xd0(0x10)
};

// ScriptStruct FSD.GDCharacterRetirement
// Size: 0xc0 (Inherited: 0x00)
struct FGDCharacterRetirement {
	TMap<UPlayerCharacterID*, UCampaign*> Campaigns; // 0x00(0x50)
	TMap<UPlayerCharacterID*, FRetirementCostItem> RetirementCost; // 0x50(0x50)
	TArray<float> CreditsCostMultipliers; // 0xa0(0x10)
	TArray<float> ResourceCostMultipliers; // 0xb0(0x10)
};

// ScriptStruct FSD.RetirementCostItem
// Size: 0x50 (Inherited: 0x00)
struct FRetirementCostItem {
	TMap<UResourceData*, int32_t> RetirementCost; // 0x00(0x50)
};

// ScriptStruct FSD.UpgradeCostItem
// Size: 0x10 (Inherited: 0x00)
struct FUpgradeCostItem {
	TArray<int32_t> Amounts; // 0x00(0x10)
};

// ScriptStruct FSD.GDStats
// Size: 0x128 (Inherited: 0x00)
struct FGDStats {
	UPawnStat* MaxAmmo; // 0x00(0x08)
	UPawnStat* MaxShields; // 0x08(0x08)
	UPawnStat* ShieldRegenerationRate; // 0x10(0x08)
	UPawnStat* MaxHealth; // 0x18(0x08)
	UPawnStat* DamageResistance; // 0x20(0x08)
	UPawnStat* FireResistance; // 0x28(0x08)
	UPawnStat* ColdResistance; // 0x30(0x08)
	UPawnStat* MeleeAttackDamage; // 0x38(0x08)
	UPawnStat* MovementSpeed; // 0x40(0x08)
	UPawnStat* SprintSpeed; // 0x48(0x08)
	UPawnStat* CarryingSpeedModifier; // 0x50(0x08)
	UPawnStat* ReviveSpeed; // 0x58(0x08)
	UPawnStat* DepositSpeed; // 0x60(0x08)
	UPawnStat* RessuplySpeed; // 0x68(0x08)
	UPawnStat* RedSugarHeal; // 0x70(0x08)
	UPawnStat* CarryingCapacity; // 0x78(0x08)
	UPawnStat* ZiplineSpeed; // 0x80(0x08)
	UPawnStat* ZiplineDownwardsBoost; // 0x88(0x08)
	UPawnStat* SlideDownIce; // 0x90(0x08)
	UPawnStat* FriendlyFire; // 0x98(0x08)
	UPawnStat* DamageFromPlayers; // 0xa0(0x08)
	UPawnStat* DamageBonus; // 0xa8(0x08)
	UPawnStat* FlareThrowingStrength; // 0xb0(0x08)
	UPawnStat* CaveLeechSense; // 0xb8(0x08)
	UPawnStat* MorkiteMining; // 0xc0(0x08)
	UPawnStat* GoldMining; // 0xc8(0x08)
	UPawnStat* RockMiningStrength; // 0xd0(0x08)
	UPawnStat* DirtMiningStrength; // 0xd8(0x08)
	UPawnStat* ResourceMiningStrength; // 0xe0(0x08)
	UPawnStat* PowerAttackCooldownRate; // 0xe8(0x08)
	UPawnStat* ImpactCompensation; // 0xf0(0x08)
	UPawnStat* MovementSpeedPenalty; // 0xf8(0x08)
	UPawnStat* MovementSpeedPenaltyReduction; // 0x100(0x08)
	UPawnStat* MovementSpeedEnvironmentalPenalty; // 0x108(0x08)
	UPawnStat* MovementSpeedEnvironmentalPenaltyReduction; // 0x110(0x08)
	UPawnStat* CarriableThrowing; // 0x118(0x08)
	UPawnStat* HoverBootsDuration; // 0x120(0x08)
};

// ScriptStruct FSD.GDDamageClasses
// Size: 0x40 (Inherited: 0x00)
struct FGDDamageClasses {
	UDamageClass* Falling; // 0x00(0x08)
	UDamageClass* Fire; // 0x08(0x08)
	UDamageClass* Heat; // 0x10(0x08)
	UDamageClass* Physical; // 0x18(0x08)
	UDamageClass* Kinetic; // 0x20(0x08)
	UDamageClass* Explosive; // 0x28(0x08)
	UDamageClass* Cold; // 0x30(0x08)
	UDamageClass* Ice; // 0x38(0x08)
};

// ScriptStruct FSD.GDAudio
// Size: 0x50 (Inherited: 0x00)
struct FGDAudio {
	TSoftObjectPtr<USoundAttenuation> FirstPersonHitscanAttenuationOverride; // 0x00(0x28)
	AFSDReverbVolume* ReverbActor; // 0x28(0x08)
	UDynamicReverbComponent* DynamicReverbClass; // 0x30(0x08)
	float SmallCaveRadius; // 0x38(0x04)
	float MediumCaveRadius; // 0x3c(0x04)
	float LargeCaveRadius; // 0x40(0x04)
	float FirstPersonPriority; // 0x44(0x04)
	float ThirdPersonPriority; // 0x48(0x04)
};

// ScriptStruct FSD.ResourcePouchItem
// Size: 0x10 (Inherited: 0x00)
struct FResourcePouchItem {
	UResourceData* Resource; // 0x00(0x08)
};

// ScriptStruct FSD.TrackPositionList
// Size: 0x38 (Inherited: 0x00)
struct FTrackPositionList {
	FName TrackName; // 0x00(0x08)
	TArray<FVector> Positions; // 0x08(0x10)
	TArray<TWeakObjectPtr<UGemTracker>> Trackers; // 0x18(0x10)
	TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> DynamicMaterials; // 0x28(0x10)
};

// ScriptStruct FSD.GMMutatorItem
// Size: 0x10 (Inherited: 0x00)
struct FGMMutatorItem {
	TArray<UMutator*> Mutators; // 0x00(0x10)
};

// ScriptStruct FSD.DeepDiveAnalyticsInformation
// Size: 0x0c (Inherited: 0x00)
struct FDeepDiveAnalyticsInformation {
	bool WasDeepDive; // 0x00(0x01)
	int32_t LastDeepDiveStage; // 0x04(0x04)
	bool EliteDeepDive; // 0x08(0x01)
	bool IsReplay; // 0x09(0x01)
};

// ScriptStruct FSD.PartyAnalyticsInformation
// Size: 0x14 (Inherited: 0x00)
struct FPartyAnalyticsInformation {
};

// ScriptStruct FSD.AvoidActorEntry
// Size: 0x10 (Inherited: 0x00)
struct FAvoidActorEntry {
	AActor* Actor; // 0x00(0x08)
};

// ScriptStruct FSD.GrabAvoidClassEntry
// Size: 0x10 (Inherited: 0x00)
struct FGrabAvoidClassEntry {
	AActor* ActorClass; // 0x00(0x08)
	float DistanceToKeep; // 0x08(0x04)
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
	UStatusEffect* StatusEffect; // 0x08(0x08)
	TArray<UActorComponent*> ComponentsToAdd; // 0x10(0x10)
	bool OverrideHealthScaling; // 0x20(0x01)
	TArray<FEliteEnemyBan> Bans; // 0x28(0x10)
	enum class EEnemyHealthScaling HealthScalingOverride; // 0x38(0x01)
};

// ScriptStruct FSD.EliteEnemyBan
// Size: 0x10 (Inherited: 0x00)
struct FEliteEnemyBan {
	FInt32Interval AffectedPlayerCount; // 0x00(0x08)
	UMissionTemplate* Template; // 0x08(0x08)
};

// ScriptStruct FSD.HealthBarLooks
// Size: 0x20 (Inherited: 0x00)
struct FHealthBarLooks {
	FLinearColor HealthColor; // 0x00(0x10)
	FLinearColor DamageColor; // 0x10(0x10)
};

// ScriptStruct FSD.HydraHeadTarget
// Size: 0x18 (Inherited: 0x00)
struct FHydraHeadTarget {
	FVector_NetQuantize Location; // 0x00(0x0c)
	FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct FSD.QueuedMontage
// Size: 0x10 (Inherited: 0x00)
struct FQueuedMontage {
	UAnimMontage* Montage; // 0x00(0x08)
	bool ForceUpdate; // 0x08(0x01)
};

// ScriptStruct FSD.InputTranslationTable
// Size: 0x50 (Inherited: 0x00)
struct FInputTranslationTable {
	TMap<FName, FInputTranslation> Entries; // 0x00(0x50)
};

// ScriptStruct FSD.InputTranslation
// Size: 0x24 (Inherited: 0x00)
struct FInputTranslation {
	FInputTranslationEntry Default; // 0x00(0x10)
	bool bControllerOverride; // 0x10(0x01)
	FInputTranslationEntry ControllerOverride; // 0x14(0x10)
};

// ScriptStruct FSD.InputTranslationEntry
// Size: 0x10 (Inherited: 0x00)
struct FInputTranslationEntry {
	enum class EInputInteraction Interaction; // 0x00(0x01)
	FName InputName; // 0x04(0x08)
	int32_t Axis; // 0x0c(0x04)
};

// ScriptStruct FSD.CarriedItemState
// Size: 0x10 (Inherited: 0x00)
struct FCarriedItemState {
	AActor* Item; // 0x00(0x08)
	char PlayThrowMontage : 1; // 0x08(0x01)
};

// ScriptStruct FSD.ItemAnimationItem
// Size: 0x18 (Inherited: 0x00)
struct FItemAnimationItem {
	UAnimMontage* FP_CharacterMontage; // 0x00(0x08)
	UAnimMontage* TP_CharacterMontage; // 0x08(0x08)
	UAnimMontage* ItemMontage; // 0x10(0x08)
};

// ScriptStruct FSD.ItemSkinOwners
// Size: 0x10 (Inherited: 0x00)
struct FItemSkinOwners {
	TArray<UItemID*> Items; // 0x00(0x10)
};

// ScriptStruct FSD.GearStatEntry
// Size: 0x68 (Inherited: 0x00)
struct FGearStatEntry {
	FText Text; // 0x00(0x18)
	FText Value; // 0x18(0x18)
	FText BaseValue; // 0x30(0x18)
	FText UpgradeValue; // 0x48(0x18)
	enum class EItemPreviewStatus PreviewStatus; // 0x60(0x01)
};

// ScriptStruct FSD.BumpPlayerHit
// Size: 0x18 (Inherited: 0x00)
struct FBumpPlayerHit {
	FVector_NetQuantize force; // 0x00(0x0c)
	APlayerCharacter* Player; // 0x10(0x08)
};

// ScriptStruct FSD.LineSegmentCarverPoint
// Size: 0x24 (Inherited: 0x00)
struct FLineSegmentCarverPoint {
	FVector Position; // 0x00(0x0c)
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
	FVector Position; // 0x00(0x0c)
	FRandRange RandomRange; // 0x0c(0x08)
	FRandRange RandomNoiseRange; // 0x14(0x08)
	FRandRange FillAmount; // 0x1c(0x08)
};

// ScriptStruct FSD.FSDTranslationProgress
// Size: 0x18 (Inherited: 0x00)
struct FFSDTranslationProgress {
	FString CodeName; // 0x00(0x10)
	int32_t TranslatedPercent; // 0x10(0x04)
};

// ScriptStruct FSD.LocalizedLanguageInfo
// Size: 0x38 (Inherited: 0x00)
struct FLocalizedLanguageInfo {
	FString EnglishName; // 0x00(0x10)
	FString NativeName; // 0x10(0x10)
	FString CodeName; // 0x20(0x10)
	bool CommunityTranslated; // 0x30(0x01)
	int32_t TranslatedPercent; // 0x34(0x04)
};

// ScriptStruct FSD.FSDLocalizedChatMessage
// Size: 0x48 (Inherited: 0x00)
struct FFSDLocalizedChatMessage {
	enum class EChatMessageType MsgType; // 0x08(0x01)
	FString Sender; // 0x10(0x10)
	FText Msg; // 0x20(0x18)
	TArray<FText> Arguments; // 0x38(0x10)
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
	UMinersManualData* Descriptions[0x2]; // 0x00(0x10)
};

// ScriptStruct FSD.MissionTypeDescription
// Size: 0x28 (Inherited: 0x00)
struct FMissionTypeDescription {
	FText InfoHeadline; // 0x00(0x18)
	TArray<FSoftMissionStepDescription> Steps; // 0x18(0x10)
};

// ScriptStruct FSD.SoftMissionStepDescription
// Size: 0x58 (Inherited: 0x00)
struct FSoftMissionStepDescription {
	FText Headline; // 0x00(0x18)
	FText RichDescription; // 0x18(0x18)
	TSoftObjectPtr<UTexture2D> Image; // 0x30(0x28)
};

// ScriptStruct FSD.MissionStepDescription
// Size: 0x38 (Inherited: 0x00)
struct FMissionStepDescription {
	FText Headline; // 0x00(0x18)
	FText RichDescription; // 0x18(0x18)
	UTexture2D* Image; // 0x30(0x08)
};

// ScriptStruct FSD.MinersManualDescription
// Size: 0x40 (Inherited: 0x00)
struct FMinersManualDescription {
	FText Headline; // 0x00(0x18)
	FText RichDescription; // 0x18(0x18)
	UTexture2D* ImageFront; // 0x30(0x08)
	UTexture2D* ImageBackground; // 0x38(0x08)
};

// ScriptStruct FSD.SoftMinersManualDescription
// Size: 0x80 (Inherited: 0x00)
struct FSoftMinersManualDescription {
	FText Headline; // 0x00(0x18)
	FText RichDescription; // 0x18(0x18)
	TSoftObjectPtr<UTexture2D> ImageFront; // 0x30(0x28)
	TSoftObjectPtr<UTexture2D> ImageBackground; // 0x58(0x28)
};

// ScriptStruct FSD.DamageTypeDescription
// Size: 0x78 (Inherited: 0x00)
struct FDamageTypeDescription {
	enum class EDamageType Type; // 0x00(0x01)
	FText Name; // 0x08(0x18)
	FText RichDescription; // 0x20(0x18)
	FSoftIconWithColor Icon; // 0x38(0x38)
	float IconScale; // 0x70(0x04)
};

// ScriptStruct FSD.SoftIconWithColor
// Size: 0x38 (Inherited: 0x00)
struct FSoftIconWithColor {
	TSoftObjectPtr<UTexture2D> Icon; // 0x00(0x28)
	FLinearColor Tint; // 0x28(0x10)
};

// ScriptStruct FSD.MiningPodDialogs
// Size: 0x50 (Inherited: 0x00)
struct FMiningPodDialogs {
	UDialogDataAsset* DepartingIn5Min; // 0x00(0x08)
	UDialogDataAsset* DepartingIn4Min; // 0x08(0x08)
	UDialogDataAsset* DepartingIn3Min; // 0x10(0x08)
	UDialogDataAsset* DepartingIn2Min; // 0x18(0x08)
	UDialogDataAsset* DepartingIn1Min; // 0x20(0x08)
	UDialogDataAsset* DepartingIn30Sec; // 0x28(0x08)
	UDialogDataAsset* DepartingIn10Sec; // 0x30(0x08)
	UDialogDataAsset* DepartingIn123Sec; // 0x38(0x08)
	UDialogDataAsset* Departed; // 0x40(0x08)
	UDialogDataAsset* DeepDiveDeparted; // 0x48(0x08)
};

// ScriptStruct FSD.MissionHazardSetting
// Size: 0x20 (Inherited: 0x00)
struct FMissionHazardSetting {
	FText Name; // 0x00(0x18)
	float HazardBonus; // 0x18(0x04)
};

// ScriptStruct FSD.GDMissionStats
// Size: 0xf8 (Inherited: 0x00)
struct FGDMissionStats {
	UMissionStat* TimePlayed; // 0x00(0x08)
	UMissionStat* DistanceTravelled; // 0x08(0x08)
	UMissionStat* EnemiesKilled; // 0x10(0x08)
	UMissionStat* MineralsMined; // 0x18(0x08)
	UMissionStat* MissionCompleted; // 0x20(0x08)
	UMissionStat* SoloMissionCompleted; // 0x28(0x08)
	UMissionStat* SecondaryMissionCompleted; // 0x30(0x08)
	UMissionStat* CharacterLevelUp; // 0x38(0x08)
	UMissionStat* VanityItemsBought; // 0x40(0x08)
	UMissionStat* ItemUpgradesBought; // 0x48(0x08)
	UMissionStat* DrinkablesConsumed; // 0x50(0x08)
	UMissionStat* DrinkableRoundsOrdered; // 0x58(0x08)
	UMissionStat* BartenderCreditsTipped; // 0x60(0x08)
	UMissionStat* CampaignMissionsCompleted; // 0x68(0x08)
	UMissionStat* CampaignsCompleted; // 0x70(0x08)
	UMissionStat* TimesDowned; // 0x78(0x08)
	UMissionStat* TimesPassedOut; // 0x80(0x08)
	UMissionStat* WeaponsUnlockedStat; // 0x88(0x08)
	UMissionStat* DeepDivesCompleted; // 0x90(0x08)
	UMissionStat* EliteDeepDivesCompleted; // 0x98(0x08)
	UMissionStat* CosmeticsCrafted; // 0xa0(0x08)
	UMissionStat* WeaponSkinsCrafted; // 0xa8(0x08)
	UMissionStat* WeaponOverclocksCrafted; // 0xb0(0x08)
	UMissionStat* CraftingMasteryLevel; // 0xb8(0x08)
	UMissionStat* DefendBlackBoxObjectivesCompleted; // 0xc0(0x08)
	UMissionStat* RepairMiniMuleObjectivesCompleted; // 0xc8(0x08)
	UMissionStat* DeepDiveCompletedBestTime; // 0xd0(0x08)
	UMissionStat* EliteDeepDiveCompletedBestTime; // 0xd8(0x08)
	UMissionStat* SpecialBeersUnlocked; // 0xe0(0x08)
	TArray<UMissionStat*> AllMissionStats; // 0xe8(0x10)
};

// ScriptStruct FSD.PlanetZoneItem
// Size: 0x28 (Inherited: 0x00)
struct FPlanetZoneItem {
	TArray<UBiome*> Biomes; // 0x00(0x10)
};

// ScriptStruct FSD.MissionBiomeItem
// Size: 0x10 (Inherited: 0x00)
struct FMissionBiomeItem {
	UBiome* Biome; // 0x00(0x08)
	float Rarity; // 0x08(0x04)
};

// ScriptStruct FSD.MissionTemplateItem
// Size: 0x10 (Inherited: 0x00)
struct FMissionTemplateItem {
	UMissionTemplate* Template; // 0x00(0x08)
	float Rarity; // 0x08(0x04)
};

// ScriptStruct FSD.RequiredMissionItem
// Size: 0x18 (Inherited: 0x00)
struct FRequiredMissionItem {
	UMissionTemplate* MissionTemplate; // 0x00(0x08)
	UMissionComplexity* Complexity; // 0x08(0x08)
	UMissionDuration* Duration; // 0x10(0x08)
};

// ScriptStruct FSD.MultiHitscanHit
// Size: 0x30 (Inherited: 0x00)
struct FMultiHitscanHit {
	UPrimitiveComponent* TargetCompoenent; // 0x00(0x08)
	TWeakObjectPtr<UFSDPhysicalMaterial> PhysicalMaterial; // 0x08(0x08)
	FVector_NetQuantize HitLocation; // 0x10(0x0c)
	FVector_NetQuantizeNormal ImpactNormal; // 0x1c(0x0c)
	char BoneIndex; // 0x28(0x01)
	bool PlayImpactSound; // 0x29(0x01)
	bool SpawnDecal; // 0x2a(0x01)
};

// ScriptStruct FSD.ProjectileSpawnData
// Size: 0x28 (Inherited: 0x00)
struct FProjectileSpawnData {
	AProjectile* projectileClass; // 0x00(0x08)
	FFloatInterval HorizontalAngleOffset; // 0x08(0x08)
	FFloatInterval VerticalAngleOffset; // 0x10(0x08)
	FFloatInterval Delay; // 0x18(0x08)
	bool IsBallistic; // 0x20(0x01)
};

// ScriptStruct FSD.ActiveAudioItem
// Size: 0x10 (Inherited: 0x00)
struct FActiveAudioItem {
	UAudioComponent* Audio; // 0x00(0x08)
	float FadeoutDuration; // 0x08(0x04)
};

// ScriptStruct FSD.ActiveMusicItem
// Size: 0x20 (Inherited: 0x00)
struct FActiveMusicItem {
	USoundBase* Sound; // 0x00(0x08)
	float StartingTime; // 0x08(0x04)
	float FadeDuration; // 0x0c(0x04)
	bool Looping; // 0x10(0x01)
	FMusicHandle Handle; // 0x14(0x04)
	UMusicCategory* Category; // 0x18(0x08)
};

// ScriptStruct FSD.MusicHandle
// Size: 0x04 (Inherited: 0x00)
struct FMusicHandle {
	int32_t MusicHandle; // 0x00(0x04)
};

// ScriptStruct FSD.PathCell
// Size: 0x10 (Inherited: 0x00)
struct FPathCell {
};

// ScriptStruct FSD.PathDebugNode
// Size: 0x20 (Inherited: 0x00)
struct FPathDebugNode {
};

// ScriptStruct FSD.OxygenCallback
// Size: 0x18 (Inherited: 0x00)
struct FOxygenCallback {
	FDelegate Delegate; // 0x00(0x10)
};

// ScriptStruct FSD.SimpleObjectInfoData
// Size: 0x40 (Inherited: 0x00)
struct FSimpleObjectInfoData {
	FText InGameName; // 0x00(0x18)
	FText InGameDescription; // 0x18(0x18)
	UDialogDataAsset* LookAtShout; // 0x30(0x08)
	UTexture2D* Icon; // 0x38(0x08)
};

// ScriptStruct FSD.PawnStatEntriesArray
// Size: 0x120 (Inherited: 0x108)
struct FPawnStatEntriesArray : FFastArraySerializer {
	TArray<FPawnStatEntry> Items; // 0x108(0x10)
	UPawnStatsComponent* Owner; // 0x118(0x08)
};

// ScriptStruct FSD.PawnStatEntry
// Size: 0x30 (Inherited: 0x0c)
struct FPawnStatEntry : FFastArraySerializerItem {
	UPawnStat* PawnStat; // 0x10(0x08)
	float Value; // 0x28(0x04)
};

// ScriptStruct FSD.PerkUsage
// Size: 0x18 (Inherited: 0x00)
struct FPerkUsage {
	UPerkAsset* Perk; // 0x00(0x08)
	int32_t UsedCount; // 0x08(0x04)
};

// ScriptStruct FSD.PickaxeMeshInstance
// Size: 0x10 (Inherited: 0x00)
struct FPickaxeMeshInstance {
	UMeshComponent* FP_Mesh; // 0x00(0x08)
	UMeshComponent* TP_Mesh; // 0x08(0x08)
};

// ScriptStruct FSD.DefaultPickaxeParts
// Size: 0x50 (Inherited: 0x00)
struct FDefaultPickaxeParts {
	TMap<enum class EPickaxePartLocation, UPickaxePart*> parts; // 0x00(0x50)
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
	float DelayAfterDamage; // 0x04(0x04)
	float HealthPerSecond; // 0x08(0x04)
	float TargetHealthRatio; // 0x0c(0x04)
};

// ScriptStruct FSD.PlayerSphere
// Size: 0x20 (Inherited: 0x00)
struct FPlayerSphere {
	FVector Center; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	TArray<TWeakObjectPtr<APlayerCharacter>> Players; // 0x10(0x10)
};

// ScriptStruct FSD.ProximityTriggerItem
// Size: 0x28 (Inherited: 0x00)
struct FProximityTriggerItem {
	FDelegate Callback; // 0x18(0x10)
};

// ScriptStruct FSD.RejoinFloat
// Size: 0x1c (Inherited: 0x00)
struct FRejoinFloat {
	FGuid ItemKey; // 0x00(0x10)
	FName ValueKey; // 0x10(0x08)
	float Value; // 0x18(0x04)
};

// ScriptStruct FSD.RejoinInt
// Size: 0x1c (Inherited: 0x00)
struct FRejoinInt {
	FGuid ItemKey; // 0x00(0x10)
	FName ValueKey; // 0x10(0x08)
	int32_t Value; // 0x18(0x04)
};

// ScriptStruct FSD.PostProcessingBlendable
// Size: 0x20 (Inherited: 0x00)
struct FPostProcessingBlendable {
	TScriptInterface<IBlendableInterface> Blendable; // 0x00(0x10)
};

// ScriptStruct FSD.InfluenceMap
// Size: 0x50 (Inherited: 0x00)
struct FInfluenceMap {
	TMap<UObject*, FCaveInfluenceSet> CaveInfluences; // 0x00(0x50)
};

// ScriptStruct FSD.CaveInfluenceSet
// Size: 0x10 (Inherited: 0x00)
struct FCaveInfluenceSet {
	TArray<FCaveInfluence> CaveInfluences; // 0x00(0x10)
};

// ScriptStruct FSD.CaveInfluence
// Size: 0x10 (Inherited: 0x00)
struct FCaveInfluence {
	FVector Center; // 0x00(0x0c)
	float Range; // 0x0c(0x04)
};

// ScriptStruct FSD.GemResourceAmount
// Size: 0x10 (Inherited: 0x00)
struct FGemResourceAmount {
	UGemResourceCreator* GemCreator; // 0x00(0x08)
	int32_t amount; // 0x08(0x04)
};

// ScriptStruct FSD.CarvedResource
// Size: 0x20 (Inherited: 0x00)
struct FCarvedResource {
	UCarvedResourceCreator* ResourceCreator; // 0x00(0x08)
	TArray<int32_t> PredeterminedRooms; // 0x08(0x10)
	int32_t amount; // 0x18(0x04)
	float Overflow; // 0x1c(0x04)
};

// ScriptStruct FSD.DebrisPatchResource
// Size: 0x18 (Inherited: 0x00)
struct FDebrisPatchResource {
	UDebrisPatchComponent* Debris; // 0x00(0x08)
};

// ScriptStruct FSD.DebrisVeinResource
// Size: 0x18 (Inherited: 0x00)
struct FDebrisVeinResource {
	UDebrisVeinComponent* Debris; // 0x00(0x08)
};

// ScriptStruct FSD.VeinResource
// Size: 0x28 (Inherited: 0x00)
struct FVeinResource {
	UVeinResourceCreator* ResourceCreator; // 0x00(0x08)
	float VeinLengthToGenerate; // 0x08(0x04)
};

// ScriptStruct FSD.GeneratedInstantCarvers
// Size: 0x10 (Inherited: 0x00)
struct FGeneratedInstantCarvers {
	TArray<FLevelCarverPass> LevelCarverPasses; // 0x00(0x10)
};

// ScriptStruct FSD.LevelCarverPass
// Size: 0x18 (Inherited: 0x00)
struct FLevelCarverPass {
	TArray<FLevelGenerationCarverLists> Lists; // 0x00(0x10)
};

// ScriptStruct FSD.LevelGenerationCarverLists
// Size: 0x10 (Inherited: 0x00)
struct FLevelGenerationCarverLists {
	TArray<FLevelGenerationCarver> Carvers; // 0x00(0x10)
};

// ScriptStruct FSD.TerrainPlacementDebugItem
// Size: 0x70 (Inherited: 0x00)
struct FTerrainPlacementDebugItem {
	TArray<FTerrainPlacementBox> TerrainCheckers; // 0x00(0x10)
	bool BoxGood; // 0x10(0x01)
	bool CapsuleGood; // 0x11(0x01)
	enum class EDebrisColliderType CapsuleType; // 0x12(0x01)
	FDebrisCapsule Capsule; // 0x14(0x20)
	FTransform Transform; // 0x40(0x30)
};

// ScriptStruct FSD.TerrainPlacementBox
// Size: 0x1c (Inherited: 0x00)
struct FTerrainPlacementBox {
	FVector Min; // 0x00(0x0c)
	FVector Max; // 0x0c(0x0c)
	enum class ETerrainPlacementBoxType PlacementType; // 0x18(0x01)
};

// ScriptStruct FSD.GeneratedDebris
// Size: 0x58 (Inherited: 0x00)
struct FGeneratedDebris {
	TMap<UDebrisBase*, UObject*> Debris; // 0x00(0x50)
	bool IsValid; // 0x50(0x01)
};

// ScriptStruct FSD.GeneratedDebrisItem
// Size: 0x10 (Inherited: 0x00)
struct FGeneratedDebrisItem {
	UDebrisBase* Debris; // 0x00(0x08)
	UObject* Influencer; // 0x08(0x08)
};

// ScriptStruct FSD.GeneratedInfluenceSets
// Size: 0x18 (Inherited: 0x00)
struct FGeneratedInfluenceSets {
	TArray<FGeneratedInfluenceSet> InfluenceSets; // 0x00(0x10)
	bool IsValid; // 0x10(0x01)
};

// ScriptStruct FSD.GeneratedInfluenceSet
// Size: 0x20 (Inherited: 0x00)
struct FGeneratedInfluenceSet {
	UObject* CaveInfluencer; // 0x00(0x08)
	int32_t NetworkID; // 0x08(0x04)
	TArray<FCaveInfluence> CaveInfluences; // 0x10(0x10)
};

// ScriptStruct FSD.CollectableSpawnableItem
// Size: 0x10 (Inherited: 0x00)
struct FCollectableSpawnableItem {
	UCollectableResourceData* Resource; // 0x00(0x08)
	int32_t amount; // 0x08(0x04)
};

// ScriptStruct FSD.ResourceSpawner
// Size: 0x18 (Inherited: 0x00)
struct FResourceSpawner {
	UResourceData* Resource; // 0x00(0x08)
	FRandFloatInterval AmountToSpawn; // 0x08(0x10)
};

// ScriptStruct FSD.PLSResource
// Size: 0x10 (Inherited: 0x00)
struct FPLSResource {
	UResourceData* Resource; // 0x00(0x08)
	float AmountToGenerate; // 0x08(0x04)
};

// ScriptStruct FSD.TunnelPath
// Size: 0x10 (Inherited: 0x00)
struct FTunnelPath {
	TArray<FVector> Path; // 0x00(0x10)
};

// ScriptStruct FSD.InfluenceSphere
// Size: 0x10 (Inherited: 0x00)
struct FInfluenceSphere {
	UCaveInfluencer* Influencer; // 0x00(0x08)
	float Radius; // 0x08(0x04)
};

// ScriptStruct FSD.ProfileCategoryTiming
// Size: 0x18 (Inherited: 0x00)
struct FProfileCategoryTiming {
	FString CategoryName; // 0x00(0x10)
	float CategoryTime; // 0x10(0x04)
};

// ScriptStruct FSD.ProfileEntry
// Size: 0x20 (Inherited: 0x00)
struct FProfileEntry {
	TWeakObjectPtr<UObject> Context; // 0x00(0x08)
	FString Category; // 0x08(0x10)
	float TimeSpent; // 0x18(0x04)
};

// ScriptStruct FSD.DormantComponentState
// Size: 0x18 (Inherited: 0x00)
struct FDormantComponentState {
	TWeakObjectPtr<UActorComponent> Component; // 0x00(0x08)
	enum class ECollisionEnabled Collision; // 0x08(0x01)
	FName CollisionProfileName; // 0x0c(0x08)
	char Active : 1; // 0x14(0x01)
	char Visible : 1; // 0x14(0x01)
};

// ScriptStruct FSD.PromotionRewardsRank
// Size: 0x60 (Inherited: 0x00)
struct FPromotionRewardsRank {
	TArray<FClaimableRewardEntry> RewardsAllClasses; // 0x00(0x10)
	TMap<UPlayerCharacterID*, FClaimableRewardArray> RewardsCharacterSpecific; // 0x10(0x50)
};

// ScriptStruct FSD.RagdollItem
// Size: 0x28 (Inherited: 0x00)
struct FRagdollItem {
	AActor* Actor; // 0x00(0x08)
	TArray<UMaterialInstanceDynamic*> Materials; // 0x08(0x10)
	UMaterialInstanceDynamic* DropshadowMaterial; // 0x18(0x08)
};

// ScriptStruct FSD.ExposedProperty
// Size: 0x01 (Inherited: 0x00)
struct FExposedProperty {
};

// ScriptStruct FSD.ExposedFloat
// Size: 0x28 (Inherited: 0x01)
struct FExposedFloat : FExposedProperty {
	FName PropertyName; // 0x00(0x08)
	FText Description; // 0x08(0x18)
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
};

// ScriptStruct FSD.ExposableFloat
// Size: 0x28 (Inherited: 0x00)
struct FExposableFloat {
	float Value; // 0x00(0x04)
	bool Exposed; // 0x04(0x01)
	FText Description; // 0x08(0x18)
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
};

// ScriptStruct FSD.RecoilSettings
// Size: 0x28 (Inherited: 0x00)
struct FRecoilSettings {
	FRandRange RecoilRoll; // 0x00(0x08)
	FRandRange RecoilPitch; // 0x08(0x08)
	FRandRange RecoilYaw; // 0x10(0x08)
	bool CanRecoilDown; // 0x18(0x01)
	float SpringStiffness; // 0x1c(0x04)
	float CriticalDampening; // 0x20(0x04)
	float Mass; // 0x24(0x04)
};

// ScriptStruct FSD.RecoilImpulse
// Size: 0x0c (Inherited: 0x00)
struct FRecoilImpulse {
	float Rotation; // 0x00(0x04)
	FVector2D Impulse; // 0x04(0x08)
};

// ScriptStruct FSD.ResourceInitalizer
// Size: 0x10 (Inherited: 0x00)
struct FResourceInitalizer {
	UResourceData* Resource; // 0x00(0x08)
	float MaxAmount; // 0x08(0x04)
};

// ScriptStruct FSD.ResourceDebris
// Size: 0x10 (Inherited: 0x00)
struct FResourceDebris {
	float InfluencerRange; // 0x00(0x04)
	UDebrisBase* Debris; // 0x08(0x08)
};

// ScriptStruct FSD.TextStyleOverride
// Size: 0x90 (Inherited: 0x00)
struct FTextStyleOverride {
	bool bOverrideFont; // 0x00(0x01)
	FSlateFontInfo Font; // 0x08(0x50)
	bool bOverrideColor; // 0x58(0x01)
	FSlateColor Color; // 0x60(0x28)
	bool bOverrideSize; // 0x88(0x01)
	float SizeScale; // 0x8c(0x04)
};

// ScriptStruct FSD.RoomGeneratorGroupInstance
// Size: 0x10 (Inherited: 0x00)
struct FRoomGeneratorGroupInstance {
	TArray<URoomGenerator*> Rooms; // 0x00(0x10)
};

// ScriptStruct FSD.RoomNodeBase
// Size: 0x01 (Inherited: 0x00)
struct FRoomNodeBase {
};

// ScriptStruct FSD.RoomNode
// Size: 0xe0 (Inherited: 0x01)
struct FRoomNode : FRoomNodeBase {
	int32_t ID; // 0x00(0x04)
	enum class ERoomType RoomType; // 0x04(0x01)
	int32_t CarvePass; // 0x08(0x04)
	FVector Position; // 0x0c(0x0c)
	float Radius; // 0x18(0x04)
	TArray<int32_t> EntranceIDs; // 0x20(0x10)
	TArray<int32_t> ExitIDs; // 0x30(0x10)
	TArray<FRoomEntrance> RoomEntrances; // 0x40(0x10)
	bool CanHaveEnemies; // 0x50(0x01)
	TArray<FGeneratedRoom> Rooms; // 0x58(0x10)
	float ResourceMultiplier; // 0x68(0x04)
	float WeightedResourceAmount; // 0x6c(0x04)
	TArray<FRoomGeneratorItem> RoomGenerators; // 0x70(0x10)
};

// ScriptStruct FSD.RoomGeneratorItem
// Size: 0x18 (Inherited: 0x00)
struct FRoomGeneratorItem {
	URoomGeneratorBase* RoomGenerator; // 0x00(0x08)
	FVector Position; // 0x08(0x0c)
	float Rotation; // 0x14(0x04)
};

// ScriptStruct FSD.GeneratedRoom
// Size: 0x88 (Inherited: 0x00)
struct FGeneratedRoom {
	UTerrainMaterial* Material; // 0x00(0x08)
	TArray<FRoomLine> Lines; // 0x08(0x10)
	TArray<FPillar> Pillars; // 0x18(0x10)
	TArray<FRoomBox> BoxCarvers; // 0x28(0x10)
	TArray<FRoomBox> BoxFillers; // 0x38(0x10)
	TArray<FResourceLocation> ResourceLocations; // 0x48(0x10)
	TArray<FRoomEntrance> Entrances; // 0x58(0x10)
	TArray<FRoomItem> RoomItems; // 0x68(0x10)
	TArray<FTriggerItem> TriggerItems; // 0x78(0x10)
};

// ScriptStruct FSD.TriggerItem
// Size: 0x50 (Inherited: 0x00)
struct FTriggerItem {
	ASpawnTrigger* TriggerClass; // 0x00(0x08)
	FTransform Transform; // 0x10(0x30)
	FName Message; // 0x40(0x08)
};

// ScriptStruct FSD.RoomItem
// Size: 0x20 (Inherited: 0x00)
struct FRoomItem {
	AActor* Spawnable; // 0x00(0x08)
	FVector Location; // 0x08(0x0c)
	FRotator_NoQuantize Rotation; // 0x14(0x0c)
};

// ScriptStruct FSD.Rotator_NoQuantize
// Size: 0x0c (Inherited: 0x0c)
struct FRotator_NoQuantize : FRotator {
};

// ScriptStruct FSD.RoomEntrance
// Size: 0x20 (Inherited: 0x00)
struct FRoomEntrance {
	FVector Location; // 0x00(0x0c)
	FVector Direction; // 0x0c(0x0c)
	bool IsBLocked; // 0x18(0x01)
	enum class ECaveEntranceType EntranceType; // 0x19(0x01)
	int32_t PathObstacleID; // 0x1c(0x04)
};

// ScriptStruct FSD.ResourceLocation
// Size: 0x20 (Inherited: 0x00)
struct FResourceLocation {
	FVector Location; // 0x00(0x0c)
	UResourceData* Resource; // 0x10(0x08)
	float BaseAmount; // 0x18(0x04)
};

// ScriptStruct FSD.RoomBox
// Size: 0x30 (Inherited: 0x00)
struct FRoomBox {
	FVector Position; // 0x00(0x0c)
	FRotator_NoQuantize Rotation; // 0x0c(0x0c)
	FVector Extends; // 0x18(0x0c)
	float NoiseRange; // 0x24(0x04)
	UFloodFillSettings* Noise; // 0x28(0x08)
};

// ScriptStruct FSD.Pillar
// Size: 0x20 (Inherited: 0x00)
struct FPillar {
	UFloodFillSettings* NoiseOverride; // 0x00(0x08)
	TArray<FWeightedLinePoint> Points; // 0x08(0x10)
	float NoiseScale; // 0x18(0x04)
	float EndcapScale; // 0x1c(0x04)
};

// ScriptStruct FSD.WeightedLinePoint
// Size: 0x1c (Inherited: 0x00)
struct FWeightedLinePoint {
	FVector Location; // 0x00(0x0c)
	float Range; // 0x0c(0x04)
	float NoiseRange; // 0x10(0x04)
	float SkewFactor; // 0x14(0x04)
	float FillAmount; // 0x18(0x04)
};

// ScriptStruct FSD.RoomLine
// Size: 0x40 (Inherited: 0x00)
struct FRoomLine {
	UFloodFillSettings* WallNoiseOverride; // 0x00(0x08)
	UFloodFillSettings* CeilingNoiseOverride; // 0x08(0x08)
	UFloodFillSettings* FloorNoiseOverride; // 0x10(0x08)
	bool UseDetailNoise; // 0x18(0x01)
	TArray<FRoomLinePoint> Points; // 0x20(0x10)
	TArray<FVector> RightVectors; // 0x30(0x10)
};

// ScriptStruct FSD.RoomLinePoint
// Size: 0x30 (Inherited: 0x00)
struct FRoomLinePoint {
	FVector Location; // 0x00(0x0c)
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
	FRoomEntrance Entrance; // 0x08(0x20)
	FRoomEntrance Exit; // 0x28(0x20)
	UTunnelParameters* ParametersOverride; // 0x48(0x08)
	FTunnelPath Path; // 0x50(0x10)
	int32_t ID; // 0x60(0x04)
	FVector DirtStartLocation; // 0x64(0x0c)
	bool AddDirt; // 0x70(0x01)
	float WeightedResourceAmount; // 0x74(0x04)
};

// ScriptStruct FSD.RandLinePoint
// Size: 0x2c (Inherited: 0x00)
struct FRandLinePoint {
	FVector Location; // 0x00(0x0c)
	FRandRange Range; // 0x0c(0x08)
	FRandRange NoiseRange; // 0x14(0x08)
	FRandRange SkewFactor; // 0x1c(0x08)
	FRandRange FillAmount; // 0x24(0x08)
};

// ScriptStruct FSD.SaveGameSnapShot
// Size: 0xc8 (Inherited: 0x00)
struct FSaveGameSnapShot {
	TWeakObjectPtr<UFSDSaveGame> SaveGame; // 0x00(0x08)
	FString Filename; // 0x08(0x10)
	bool IsObsolete; // 0x18(0x01)
	int32_t VersionNumber; // 0x1c(0x04)
	int32_t Credits; // 0x20(0x04)
	TMap<APlayerCharacter*, int32_t> CharacterLevels; // 0x28(0x50)
	TMap<UResourceData*, int32_t> Resources; // 0x78(0x50)
};

// ScriptStruct FSD.SchematicGADataEntry
// Size: 0x30 (Inherited: 0x08)
struct FSchematicGADataEntry : FTableRowBase {
	int32_t SchematicGAID; // 0x18(0x04)
	FString SchematicName; // 0x20(0x10)
};

// ScriptStruct FSD.SchematicBankItem
// Size: 0x20 (Inherited: 0x00)
struct FSchematicBankItem {
	USchematicPricingTier* PricingTier; // 0x00(0x08)
	USchematicRarity* Rarity; // 0x08(0x08)
	TArray<USchematic*> Schematics; // 0x10(0x10)
};

// ScriptStruct FSD.SchematicType
// Size: 0x70 (Inherited: 0x00)
struct FSchematicType {
	TSoftObjectPtr<UTexture2D> Icon; // 0x00(0x28)
	FLinearColor IconTint; // 0x28(0x10)
	TSoftObjectPtr<UTexture2D> Frame; // 0x38(0x28)
	FLinearColor FrameTint; // 0x60(0x10)
};

// ScriptStruct FSD.FriendInfo
// Size: 0x50 (Inherited: 0x00)
struct FFriendInfo {
	FString DisplayName; // 0x00(0x10)
	FString RealName; // 0x10(0x10)
	bool IsOnline; // 0x20(0x01)
	bool IsPlaying; // 0x21(0x01)
	bool IsPlayingThisGame; // 0x22(0x01)
	bool IsJoinable; // 0x23(0x01)
	FString sessionId; // 0x28(0x10)
	bool HasVoiceSupport; // 0x38(0x01)
	FString PresenceStatus; // 0x40(0x10)
};

// ScriptStruct FSD.SoundClassManagerItem
// Size: 0x0c (Inherited: 0x00)
struct FSoundClassManagerItem {
};

// ScriptStruct FSD.SoundMixManagerItem
// Size: 0x10 (Inherited: 0x00)
struct FSoundMixManagerItem {
	USoundMix* mix; // 0x00(0x08)
};

// ScriptStruct FSD.SpiderAnimInstanceProxy
// Size: 0x6e0 (Inherited: 0x6e0)
struct FSpiderAnimInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct FSD.RandomWalkCycleEntry
// Size: 0x14 (Inherited: 0x00)
struct FRandomWalkCycleEntry {
	float RandomSelectionWeight; // 0x00(0x04)
	FRandRange Duration; // 0x04(0x08)
	float Cooldown; // 0x0c(0x04)
	float LastTimePlayed; // 0x10(0x04)
};

// ScriptStruct FSD.StabberVineAnimInstanceProxy
// Size: 0x8b0 (Inherited: 0x6e0)
struct FStabberVineAnimInstanceProxy : FAnimInstanceProxy {
	FVector SplineLocation01; // 0x7a0(0x0c)
	FVector SplineLocation02; // 0x7ac(0x0c)
	FVector SplineLocation03; // 0x7b8(0x0c)
	FVector SplineLocation04; // 0x7c4(0x0c)
	FVector SplineLocation05; // 0x7d0(0x0c)
	FVector SplineLocation06; // 0x7dc(0x0c)
	FVector SplineLocation07; // 0x7e8(0x0c)
	FVector SplineLocation08; // 0x7f4(0x0c)
	FVector SplineLocation09; // 0x800(0x0c)
	FVector SplineLocation10; // 0x80c(0x0c)
	FVector SplineLocation11; // 0x818(0x0c)
	FRotator SplineRotation01; // 0x824(0x0c)
	FRotator SplineRotation02; // 0x830(0x0c)
	FRotator SplineRotation03; // 0x83c(0x0c)
	FRotator SplineRotation04; // 0x848(0x0c)
	FRotator SplineRotation05; // 0x854(0x0c)
	FRotator SplineRotation06; // 0x860(0x0c)
	FRotator SplineRotation07; // 0x86c(0x0c)
	FRotator SplineRotation08; // 0x878(0x0c)
	FRotator SplineRotation09; // 0x884(0x0c)
	FRotator SplineRotation10; // 0x890(0x0c)
	FRotator SplineRotation11; // 0x89c(0x0c)
};

// ScriptStruct FSD.StabberVineTarget
// Size: 0x18 (Inherited: 0x00)
struct FStabberVineTarget {
	FVector_NetQuantize Location; // 0x00(0x0c)
	FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct FSD.ActiveStatusEffectBank
// Size: 0x40 (Inherited: 0x00)
struct FActiveStatusEffectBank {
	UStatusEffect* Key; // 0x00(0x08)
	UStatusEffect* ActiveEffect; // 0x08(0x08)
	TArray<FActiveStatusEffect> Effects; // 0x30(0x10)
};

// ScriptStruct FSD.ActiveStatusEffect
// Size: 0x08 (Inherited: 0x00)
struct FActiveStatusEffect {
	AActor* Owner; // 0x00(0x08)
};

// ScriptStruct FSD.SteelSeriesLinearColor
// Size: 0x03 (Inherited: 0x00)
struct FSteelSeriesLinearColor {
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
	float Acceleration; // 0x10(0x04)
	TWeakObjectPtr<APipelineSegment> PipelineSegment; // 0x14(0x08)
};

// ScriptStruct FSD.TreasureWeight
// Size: 0x10 (Inherited: 0x00)
struct FTreasureWeight {
	float Weight; // 0x00(0x04)
	UTreasureRewarder* RewarderClass; // 0x08(0x08)
};

// ScriptStruct FSD.TunnelSettingItem
// Size: 0x10 (Inherited: 0x00)
struct FTunnelSettingItem {
	UTunnelSegmentSetting* SegmentSetting; // 0x00(0x08)
	FInt32Interval SegmentSize; // 0x08(0x08)
};

// ScriptStruct FSD.TutorialHint
// Size: 0x70 (Inherited: 0x00)
struct FTutorialHint {
	FText Text; // 0x00(0x18)
	FText TaskText; // 0x18(0x18)
	FText Title; // 0x30(0x18)
	TSoftObjectPtr<UTexture2D> Image; // 0x48(0x28)
};

// ScriptStruct FSD.HeightenedSenseTracker
// Size: 0x20 (Inherited: 0x00)
struct FHeightenedSenseTracker {
	TWeakObjectPtr<AActor> Actor; // 0x00(0x08)
	TWeakObjectPtr<UHealthComponentBase> HealthComponent; // 0x08(0x08)
	TScriptInterface<IAttackingPointInterface> AttackingPoint; // 0x10(0x10)
};

// ScriptStruct FSD.MasteryItem
// Size: 0x18 (Inherited: 0x00)
struct FMasteryItem {
	int32_t NeededMastery; // 0x00(0x04)
	TArray<UUnlockReward*> Unlocks; // 0x08(0x10)
};

// ScriptStruct FSD.UpgradeTier
// Size: 0x18 (Inherited: 0x00)
struct FUpgradeTier {
	TArray<UItemUpgrade*> Upgrades; // 0x00(0x10)
	int32_t RequiredCharacterLevel; // 0x10(0x04)
	int32_t RequiredPlayerRank; // 0x14(0x04)
};

// ScriptStruct FSD.VanityTestCharacterItem
// Size: 0x10 (Inherited: 0x00)
struct FVanityTestCharacterItem {
	USkeletalMesh* Mesh; // 0x00(0x08)
	UVanityAnimInstance* AnimBP; // 0x08(0x08)
};

// ScriptStruct FSD.GenerateIconInfo
// Size: 0x28 (Inherited: 0x00)
struct FGenerateIconInfo {
	enum class EGeneratorIconType IconType; // 0x00(0x01)
	UPickaxePart* PickaxePart; // 0x08(0x08)
	enum class EPickaxePartLocation PickaxePartLocation; // 0x10(0x01)
	UVanityItem* Item; // 0x18(0x08)
	UPlayerCharacterID* Character; // 0x20(0x08)
};

// ScriptStruct FSD.TattooArmorItem
// Size: 0x10 (Inherited: 0x00)
struct FTattooArmorItem {
	UVanityTattoo* Tattoo; // 0x00(0x08)
	bool IsLeftArm; // 0x08(0x01)
	bool FlipTexture; // 0x09(0x01)
};

// ScriptStruct FSD.WeakpointChannel
// Size: 0x28 (Inherited: 0x00)
struct FWeakpointChannel {
	UFSDPhysicalMaterial* WeakPointMaterial; // 0x10(0x08)
	UMaterialInstanceDynamic* Mid; // 0x18(0x08)
};

// ScriptStruct FSD.WeakpointTask
// Size: 0x120 (Inherited: 0x00)
struct FWeakpointTask {
	FRuntimeFloatCurve GrowCurve; // 0x00(0x88)
	FRuntimeFloatCurve FadeCurve; // 0x88(0x88)
};

// ScriptStruct FSD.WeaponHitCounterEffectItem
// Size: 0x08 (Inherited: 0x00)
struct FWeaponHitCounterEffectItem {
	TWeakObjectPtr<AActor> Target; // 0x00(0x08)
};

// ScriptStruct FSD.WeightedRoomSelector
// Size: 0x10 (Inherited: 0x00)
struct FWeightedRoomSelector {
	TArray<FWeightedRoomSelectorItem> Items; // 0x00(0x10)
};

// ScriptStruct FSD.WeightedRoomSelectorItem
// Size: 0x10 (Inherited: 0x00)
struct FWeightedRoomSelectorItem {
	URoomGenerator* Room; // 0x00(0x08)
	float Weight; // 0x08(0x04)
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
	AActor* Target; // 0x00(0x08)
	float Timestamp; // 0x08(0x04)
};

// ScriptStruct FSD.ZipLineConnectorHandler
// Size: 0x30 (Inherited: 0x00)
struct FZipLineConnectorHandler {
	TSoftClassPtr<UObject> ConnectorClass; // 0x00(0x28)
	AZipLineConnector* Connector; // 0x28(0x08)
};

// ScriptStruct FSD.ZipLine
// Size: 0x38 (Inherited: 0x00)
struct FZipLine {
	FVector Start; // 0x00(0x0c)
	FVector End; // 0x0c(0x0c)
};

