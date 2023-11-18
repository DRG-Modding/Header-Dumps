enum class EAbilityIndex {
    ENone = 0,
    EPrimary = 1,
    ESecondary = 2,
    EAbilityIndex_MAX = 3,
};

enum class EActivityType {
    Mission = 0,
    Assignment = 1,
    Tutorial = 2,
    None = 3,
    EActivityType_MAX = 4,
};

enum class EAfflictionSocket {
    CenterMass = 0,
    Feet = 1,
    Camera = 2,
    EAfflictionSocket_MAX = 3,
};

enum class EAlwaysLoadedWorlds {
    CharacterViewer = 0,
    LoaderNormal = 1,
    LoaderDeepDive = 2,
    EAlwaysLoadedWorlds_MAX = 3,
};

enum class EAmmoDrivenWeapnUpgradeType {
    MaxAmmo = 0,
    ClipSize = 1,
    RateOfFire = 2,
    ReloadSpeed = 3,
    RecoilMultiplier = 4,
    RecoilMultiplierV = 5,
    RecoilMultiplierH = 6,
    BurstCount = 7,
    BurstRateOfFire = 8,
    ActivateBurstFireMode = 9,
    ActivateAutomaticFireMode = 10,
    HeatUpRateModifier = 11,
    AutoReloadDuration = 12,
    RecoilMass = 13,
    OverheatOnReload = 14,
    ShotCost = 15,
    CustomEvent1 = 16,
    HeatReductionOnReload = 17,
    EAmmoDrivenWeapnUpgradeType_MAX = 18,
};

enum class EAmmoWeaponState {
    Equipping = 0,
    Ready = 1,
    Cycling = 2,
    Reloading = 3,
    BurstCycling = 4,
    EAmmoWeaponState_MAX = 5,
};

enum class EArmorDamageType {
    Normal = 0,
    Dissolve = 1,
    Beam = 2,
    EArmorDamageType_MAX = 3,
};

enum class EArmorMeshType {
    None = 0,
    Default = 1,
    DefaultBeardCompatible = 2,
    Sleeveless = 4,
    SleevelessBeardCompatible = 8,
    EArmorMeshType_MAX = 9,
};

enum class EArmorSetArms {
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
    EArmorSetArms_MAX = 13,
};

enum class EArmorSetLegs {
    Invalid = 0,
    LeftUpperLeg = 1,
    LeftLowerLeg = 2,
    LeftFoot = 3,
    LeftToe = 4,
    RightUpperLeg = 5,
    RightLowerLeg = 6,
    RightFoot = 7,
    RightToe = 8,
    EArmorSetLegs_MAX = 9,
};

enum class EArmorSetTorso {
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
    EArmorSetTorso_MAX = 18,
};

enum class EArmorType {
    Light = 0,
    Heavy = 1,
    Unbreakable = 2,
    EArmorType_MAX = 3,
};

enum class EArmorUpgradeType {
    RegenDelay = 0,
    RegenRate = 1,
    ReviveInvulnerability = 2,
    EArmorUpgradeType_MAX = 3,
};

enum class EAssaultRifleUpgrade {
    KillResetsSpread = 0,
    KillTriggerStatusEffect = 1,
    EAssaultRifleUpgrade_MAX = 2,
};

enum class EAsyncLoadPriority {
    Normal = 0,
    High = 100,
    Low = 255,
    EAsyncLoadPriority_MAX = 256,
};

enum class EAsyncPersistence {
    Manual = 0,
    Level = 1,
    Permanent = 2,
    EAsyncPersistence_MAX = 3,
};

enum class EAutoCannonUpgrades {
    FireTimeIncreaseScaleMultiplier = 0,
    DamageBonusAtFullROF = 1,
    StatusEffectAtFullROF = 2,
    StartingFireRate = 3,
    MaxFireRate = 4,
    EAutoCannonUpgrades_MAX = 5,
};

enum class EAutoShotgunUpgrades {
    TurretSpecialAttackEnabled = 0,
    RateOfFireAndAutoMatic = 1,
    CQCBuffOnKill = 2,
    EAutoShotgunUpgrades_MAX = 3,
};

enum class EBasicPistol {
    ConsecutiveHitsDamageBonus = 0,
    EBasicPistol_MAX = 1,
};

enum class EBeltDrivenWeaponUpgrade {
    BarrelSpinupTime = 0,
    BarrelSpinDownTime = 1,
    EBeltDrivenWeaponUpgrade_MAX = 2,
};

enum class EBlueprintablePrivilegeResults {
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
    EBlueprintablePrivilegeResults_MAX = 12,
};

enum class EBlueprintableUserPrivileges {
    CanPlay = 0,
    CanPlayOnline = 1,
    CanCommunicateOnline = 2,
    CanUseUserGeneratedContent = 3,
    CanUserCrossPlay = 4,
    EBlueprintableUserPrivileges_MAX = 5,
};

enum class EBoltActionRifleUpgrades {
    FocusSpeed = 0,
    AimedShotStagger = 1,
    AimedWeakShotKillFearFactor = 2,
    FocusDamageBonus = 3,
    UnZoomedAccuracySpread = 4,
    FocusedWeakspotHitStatusEffect = 5,
    NoGravityOnFocus = 6,
    KillReloadTimeBoost = 7,
    AimedShotWeakpointDamageBonusMultiplier = 8,
    AimedShotAmmoCost = 9,
    EBoltActionRifleUpgrades_MAX = 10,
};

enum class EBoltActionWeaponConditions {
    WasAimedShot = 0,
    WasNormalShot = 1,
    EBoltActionWeaponConditions_MAX = 2,
};

enum class EBoomerangState {
    None = 0,
    Curving = 1,
    GoingBack = 2,
    Targeting = 3,
    EBoomerangState_MAX = 4,
};

enum class EBoscoAbillityTargetPreference {
    Self = 0,
    SelectedTarget = 1,
    ClosestPlayer = 2,
    ClosestEnemy = 3,
    TargetLocation = 4,
    EBoscoAbillityTargetPreference_MAX = 5,
};

enum class EBoscoUpgrades {
    MiningSpeedUpgrade = 0,
    ExtraRevive = 1,
    ActiveLightRadius = 2,
    Missile = 3,
    CryoGrenade = 4,
    SACooldownReduction = 5,
    ExtraAbillityCharge = 6,
    EBoscoUpgrades_MAX = 7,
};

enum class EBuildTypeRestriction {
    Development = 0,
    Shipping = 1,
    EBuildTypeRestriction_MAX = 2,
};

enum class EBulletMode {
    EMultiTrace = 0,
    ECapsule = 1,
    EBulletMode_MAX = 2,
};

enum class EBurstWeaponUpgrades {
    FullBurstHitBonusDamage = 0,
    FullBurstStaggerDuraion = 1,
    EBurstWeaponUpgrades_MAX = 2,
};

enum class ECampaignMutators {
    NotAllowed = 0,
    Allowed = 1,
    Preffered = 2,
    ECampaignMutators_MAX = 3,
};

enum class ECampaignType {
    Normal = 0,
    Weekly = 1,
    MatrixCoreHunt = 2,
    SeededRandom = 3,
    ECampaignType_MAX = 4,
};

enum class ECapsuleHitscanUpgradeType {
    ShotWidth = 0,
    PenetrateEnemies = 1,
    ECapsuleHitscanUpgradeType_MAX = 2,
};

enum class ECaretakerSpawnType {
    None = 0,
    Drones = 1,
    Bombs = 2,
    Shredders = 3,
    Turrets = 4,
    ECaretakerSpawnType_MAX = 5,
};

enum class ECaveEntrancePriority {
    Primary = 0,
    Secondary = 1,
    ECaveEntrancePriority_MAX = 2,
};

enum class ECaveEntranceType {
    EntranceAndExit = 0,
    Entrance = 1,
    Exit = 2,
    TreassureRoom = 3,
    ECaveEntranceType_MAX = 4,
};

enum class ECaveLeechState {
    Idle = 0,
    Tracking = 1,
    Pulling = 2,
    Retracting = 3,
    Dying = 4,
    Dead = 5,
    Frozen = 6,
    ECaveLeechState_MAX = 7,
};

enum class ECellCategory {
    Cave = 0,
    Tunnel = 1,
    ECellCategory_MAX = 255,
};

enum class ECharacterCameraMode {
    FirstPerson = 0,
    ThirdPerson = 1,
    Follow = 2,
    DownCamera = 3,
    TerrainScanner = 4,
    PhotographyMode = 5,
    FirstPersonHeadOnly = 6,
    ECharacterCameraMode_MAX = 7,
};

enum class ECharacterHeadMesh {
    Full = 0,
    ThichNeckOnly = 1,
    ThinNeckOnly = 2,
    None = 3,
    FlatEars = 4,
    FaceOnly = 5,
    EyesOnly = 6,
    Masks = 7,
    ECharacterHeadMesh_MAX = 8,
};

enum class ECharacterMoveDirection {
    None = 0,
    Forward = 1,
    Left = 2,
    Right = 3,
    Back = 4,
    ECharacterMoveDirection_MAX = 5,
};

enum class ECharacterSelectorItemStatus {
    LeaveAsIs = 0,
    SwitchToDefault = 1,
    NoItemEquipped = 2,
    ECharacterSelectorItemStatus_MAX = 3,
};

enum class ECharacterState {
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
    Infected = 18,
    Invalid = 19,
    ECharacterState_MAX = 20,
};

enum class EChargedProjectileUpgrades {
    ExplodesOnDamage = 0,
    AoEDamageInFlight = 1,
    PersistentExplosion = 2,
    EChargedProjectileUpgrades_MAX = 3,
};

enum class EChargedWeaponUpgrades {
    ShotCostAtFullCharge = 0,
    ChargeSpeed = 1,
    CoolingRate = 2,
    HeatPerSecondCharging = 3,
    HeatPerSecondCharged = 4,
    HeatPerChargedShot = 5,
    HeatPerNormalShot = 6,
    EChargedWeaponUpgrades_MAX = 7,
};

enum class ECharselectionCameraLocation {
    Selection = 0,
    Customization = 1,
    Crafting = 2,
    ViewWeapon = 3,
    EndScreen = 4,
    Forge = 5,
    Pickaxe = 6,
    ECharselectionCameraLocation_MAX = 7,
};

enum class EChatMessageType {
    ES_Chat = 0,
    ES_Game = 1,
    ES_MAX = 2,
};

enum class EChatSenderType {
    NormalUser = 0,
    DeluxUser = 1,
    Developer = 2,
    Streamer = 3,
    Modder = 4,
    EChatSenderType_MAX = 5,
};

enum ECleanedStatus {
    EInfected = 0,
    EVacuumed = 1,
    ECleanedStatus_MAX = 2,
};

enum class ECoilgunTraceEffect {
    EPrimary = 0,
    EDamage = 1,
    EFear = 2,
    ECoilgunTraceEffect_MAX = 3,
};

enum class ECoilgunUpgrades {
    EResistanceWhileCharging = 0,
    ETransferAilment = 1,
    EFlamekills = 2,
    EOvercharge = 3,
    EUnderCharge = 4,
    EWeaponBlast = 5,
    EShotwaveRange = 6,
    EImpactFearFactor = 7,
    EDamageOnShotWave = 8,
    EImpactFearRadius = 9,
    EEffectTrailDuration = 10,
    EEffectTrailBonusRadius = 11,
    EBrokenShieldBonus = 12,
    EPostChargeBurst = 13,
    EOwnerShieldCapacity = 14,
    EBlockShieldWhileCharing = 15,
    EWeaknessWhileCharging = 16,
    EPierceDepthDamage = 17,
    EBurnGround = 18,
    EElectricTrail = 19,
    EFireTrail = 20,
    EPenetrationDepth = 21,
    EPrimaryBonusShotWidth = 22,
    EShieldDelay = 23,
    ECoilgunUpgrades_MAX = 24,
};

enum class ECommunityGoalIndex {
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
    ECommunityGoalIndex_MAX = 14,
};

enum class ECommunityGoalTier {
    Bronze = 0,
    Silver = 1,
    Gold = 2,
    ECommunityGoalTier_MAX = 3,
};

enum class ECommunityGoalType {
    Float = 0,
    Integer = 1,
    Time = 2,
    Distance = 3,
    ECommunityGoalType_MAX = 4,
};

enum class ECommunityUIState {
    Loading = 0,
    SelectFaction = 1,
    Progress = 2,
    Recruitment = 3,
    Reward = 4,
    Invalid = 5,
    ECommunityUIState_MAX = 6,
};

enum class EConsoleGraphicsMode {
    Fidelity = 0,
    Performance = 1,
    Performance120 = 2,
    EConsoleGraphicsMode_MAX = 3,
};

enum class ECreatureSize {
    Tiny = 0,
    Small = 1,
    Medium = 2,
    Large = 3,
    Huge = 4,
    ECreatureSize_MAX = 5,
};

enum class ECriticalItemPass {
    LargePass = 0,
    SmallPass = 1,
    ECriticalItemPass_MAX = 2,
};

enum class ECrossbowEffectApplication {
    ToDefault = 0,
    ToSpecial = 1,
    ToAll = 2,
    ECrossbowEffectApplication_MAX = 3,
};

enum class ECrossbowHit {
    InvalidHit = 0,
    OldHit = 1,
    NewHit = 2,
    ECrossbowHit_MAX = 3,
};

enum class ECrossbowStuckType {
    Default = 0,
    Electric = 1,
    Chemical = 2,
    Banshee = 3,
    ECrossbowStuckType_MAX = 4,
};

enum class ECrossbowSwitchState {
    Normal = 0,
    Cancelled = 1,
    DuringReload = 2,
    ECrossbowSwitchState_MAX = 3,
};

enum class ECrossbowUpgrades {
    SpecialArrowPheramone = 0,
    SpecialArrowTaser = 1,
    SpecialArrowChemical = 2,
    BansheeModule = 3,
    Magnetic = 4,
    RadioModule = 5,
    Ricochet = 6,
    VelocityChange = 7,
    DamageDefault = 8,
    RadialDamageDefault = 9,
    Trifork = 10,
    Pentafork = 11,
    BattleFrenzy = 12,
    IncreaseSpecialAmmo = 13,
    IncreaseSpecialAmmoPercent = 14,
    SuperFast = 15,
    IncreaseSpecialEffectDuration = 16,
    FasterSwitch = 17,
    CryoArrow = 18,
    FireArrow = 19,
    ReloadTimeDefaultArrow = 20,
    RateOfFireDefaultArrow = 21,
    ECrossbowUpgrades_MAX = 22,
};

enum class ECryoSprayUpgrades {
    PressureDropMultiplier = 0,
    PressureGainMultiplier = 1,
    ChargeupTime = 2,
    RePressurisationTime = 3,
    FrozenTargetsCanShatter = 4,
    AoECold = 5,
    LongReach = 6,
    SprayWidth = 7,
    ECryoSprayUpgrades_MAX = 8,
};

enum class ECustomUsableType {
    ClearOnFrameEnd = 0,
    ClearOnUseReleased = 1,
    ClearManually = 2,
    ECustomUsableType_MAX = 3,
};

enum class EDamageComponentType {
    Primary = 0,
    Secondary = 1,
    Tertiary = 2,
    Quaternary = 3,
    Quinary = 4,
    Any = 5,
    EDamageComponentType_MAX = 6,
};

enum class EDamageType {
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
    Corrosive = 18,
    Piercing = 19,
    RockPox = 20,
    EDamageType_MAX = 21,
};

enum class EDamageUpgrade {
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
    ShattersArmor = 11,
    ArmorPenetration = 12,
    EDamageUpgrade_MAX = 13,
};

enum class EDashPointsGenerationMode {
    Surround = 0,
    Forward = 1,
    EDashPointsGenerationMode_MAX = 2,
};

enum class EDealType {
    Buy = 0,
    Sell = 1,
    EDealType_MAX = 2,
};

enum class EDebrisCarvedType {
    Large = 0,
    Small = 1,
    LevelGeneration = 2,
    Resources = 3,
    EDebrisCarvedType_MAX = 4,
};

enum class EDebrisColliderType {
    Object = 0,
    AirParticles = 1,
    ObjectB = 2,
    ObjectC = 3,
    EDebrisColliderType_MAX = 4,
};

enum class EDebrisItemPass {
    PrePlacement = 0,
    Plague = 1,
    Main = 2,
    EDebrisItemPass_MAX = 3,
};

enum class EDebrisMeshCollisionProfile {
    NoCollision = 0,
    HitOnly = 1,
    HitAndCollide = 2,
    EDebrisMeshCollisionProfile_MAX = 3,
};

enum class EDebrisMeshShadows {
    Never = 0,
    High = 1,
    Always = 2,
    EDebrisMeshShadows_MAX = 3,
};

enum class EDebrisOrientation {
    Random = 0,
    RandomXY = 1,
    AlignToSurfaceNormal = 2,
    Fixed = 3,
    EDebrisOrientation_MAX = 4,
};

enum class EDecalImportance {
    High = 0,
    Normal = 1,
    Low = 2,
    EDecalImportance_MAX = 3,
};

enum class EDeepMovementMode {
    Normal = 0,
    Flee = 1,
    Fly = 2,
    BackOff = 3,
    EDeepMovementMode_MAX = 4,
};

enum class EDeepMovementState {
    Stationary = 0,
    Controlled = 1,
    Moving = 2,
    WaitingForPath = 3,
    AttackStance = 4,
    FakePhysics = 5,
    EDeepMovementState_MAX = 6,
};

enum class EDefendPointState {
    Idle = 0,
    Started = 1,
    Completed = 2,
    Failed = 3,
    EDefendPointState_MAX = 4,
};

enum class EDetPackUpgrades {
    CanPickUp = 0,
    CarveDiameter = 1,
    ExplodeOnDeath = 2,
    ExtraFearRadius = 3,
    ExtraStaggerRadius = 4,
    EDetPackUpgrades_MAX = 5,
};

enum class EDialogRestriction {
    None = 0,
    SinglePlayerOnly = 1,
    MultiPlayerOnly = 2,
    EDialogRestriction_MAX = 3,
};

enum class EDirectDamageConditionEnum {
    Direct = 0,
    Radial = 1,
    EDirectDamageConditionEnum_MAX = 2,
};

enum class EDisconnectReason {
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
    OutdatedClient = 18,
    EDisconnectReason_MAX = 19,
};

enum class EDiscordBiomeType {
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
    EDiscordBiomeType_MAX = 12,
};

enum class EDiscordMissionType {
    MiningExpedition = 0,
    EggHunt = 1,
    Escort = 2,
    Elimination = 3,
    PointExtraction = 4,
    Salvage = 5,
    Refinery = 6,
    None = 7,
    EDiscordMissionType_MAX = 8,
};

enum class EDoubleDrillState {
    Equipping = 0,
    Idle = 1,
    Mining = 2,
    Overheated = 3,
    OutOfFuel = 4,
    EDoubleDrillState_MAX = 5,
};

enum class EDoubleDrillUpgradeType {
    MiningRate = 0,
    MaxFuel = 1,
    HeatRemovalOnKill = 2,
    HeatRemovalOnDamage = 3,
    MovementPenalty = 4,
    EDoubleDrillUpgradeType_MAX = 5,
};

enum class EDrinkableAlcoholStrength {
    NonAlcoholic = 0,
    Light = 1,
    Regular = 2,
    Strong = 3,
    VeryStrong = 4,
    InstantPassout = 5,
    EDrinkableAlcoholStrength_MAX = 6,
};

enum class EDroneAIState {
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
    Cleaning = 10,
    EDroneAIState_MAX = 11,
};

enum class EDroneActions {
    Wandering = 0,
    Mining = 1,
    Fighting = 2,
    Lighting = 3,
    Reviving = 4,
    EDroneActions_MAX = 5,
};

enum class EDroneState {
    EFollow = 0,
    EMining = 1,
    ELight = 2,
    EMax = 3,
    EDroneState_MAX = 4,
};

enum class EDroppableOutpostState {
    WaitingToDrop = 0,
    Drilling = 1,
    Landed = 2,
    PrepTakeoff = 3,
    Departing = 4,
    EDroppableOutpostState_MAX = 5,
};

enum class EDualMachinePistolsUpgrades {
    TriggerStatusEffectOnEmptyClip = 0,
    EDualMachinePistolsUpgrades_MAX = 1,
};

enum class EDynamicReverbSetting {
    None = 0,
    Small = 1,
    Medium = 2,
    Large = 3,
    EDynamicReverbSetting_MAX = 4,
};

enum class EElectricalSMGUpgrades {
    AoEChance = 0,
    PlasmaBeam = 1,
    TurretEMPDischarge = 2,
    EElectricalSMGUpgrades_MAX = 3,
};

enum class EEnemyAttackType {
    Melee = 0,
    Ranged = 1,
    Grab = 2,
    Area = 3,
    Move = 4,
    EEnemyAttackType_MAX = 5,
};

enum class EEnemyControlState {
    Connecting = 0,
    Connected = 1,
    ThrowingOff = 2,
    Disconnecting = 3,
    Disconneced = 4,
    EEnemyControlState_MAX = 5,
};

enum class EEnemyDescriptorCheatClass {
    Hidden = 0,
    Basic = 1,
    Advanced = 2,
    Mactera = 3,
    Specials = 4,
    Boss = 5,
    EEnemyDescriptorCheatClass_MAX = 6,
};

enum class EEnemyFamily {
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
    RivalTech = 10,
    Lithophage = 11,
    EEnemyFamily_MAX = 12,
};

enum class EEnemyHealthScaling {
    SmallEnemy = 0,
    LargeEnemy = 1,
    ExtraLargeEnemy = 2,
    ExtraLargeEnemyB = 4,
    ExtraLargeEnemyC = 5,
    ExtraLargeEnemyD = 6,
    NoScaling = 3,
    EEnemyHealthScaling_MAX = 7,
};

enum class EEnemySignificance {
    Swarmer = 0,
    Normal = 1,
    Critical = 2,
    Critter = 3,
    EEnemySignificance_MAX = 4,
};

enum class EEnemyType {
    Ground = 0,
    Flying = 1,
    GroundAndFlying = 2,
    Stationary = 3,
    EEnemyType_MAX = 4,
};

enum class EEscortExtractorState {
    ReadyToGrab = 0,
    Taken = 1,
    Full = 2,
    EEscortExtractorState_MAX = 3,
};

enum class EEscortMissionState {
    Stationary = 0,
    Moving = 1,
    WaitingForFuel = 2,
    FinalEvent = 3,
    Finished = 4,
    ShellCracked = 5,
    VehicleDead = 6,
    InGarage = 7,
    EEscortMissionState_MAX = 8,
};

enum class EExampleEnum {
    FirstName = 0,
    SecondName = 1,
    EExampleEnum_MAX = 2,
};

enum class EExitTrackMode {
    None = 0,
    StopInPlace = 1,
    JumpInPlace = 2,
    JumpInCamDir = 3,
    JumpInTrackDir = 4,
    EExitTrackMode_MAX = 5,
};

enum class EExtractorState {
    Attached = 0,
    OnGround = 1,
    Equipping = 2,
    Idle = 3,
    Mining = 4,
    EExtractorState_MAX = 5,
};

enum class EFSDAchievementType {
    NoStatUsed = 0,
    IncrementStatPerCall = 1,
    SetStatIfHighscore = 2,
    ForceNewStatEachCall = 3,
    EFSDAchievementType_MAX = 4,
};

enum class EFSDFaction {
    NoFaction = 0,
    CaveCrawlers = 1,
    MightyMiners = 2,
    DirtDiggers = 3,
    EFSDFaction_MAX = 4,
};

enum class EFSDGoogleAnalyticsProperties {
    DRG = 0,
    Discord = 1,
    CommunityGoals = 2,
    DRG_Discord = 3,
    All = 4,
    Other = 5,
    EFSDGoogleAnalyticsProperties_MAX = 6,
};

enum class EFSDInputSource {
    None = 0,
    MouseAndKeyboard = 1,
    Controller = 2,
    EFSDInputSource_MAX = 3,
};

enum class EFSDMissionStatus {
    SpaceRig = 0,
    InGame = 1,
    Starting = 2,
    EscapeSequence = 3,
    FinalBattle = 4,
    EFSDMissionStatus_MAX = 5,
};

enum class EFSDNATType {
    Open = 0,
    Moderate = 1,
    Strict = 2,
    Unknown = 3,
    EFSDNATType_MAX = 4,
};

enum class EFSDTargetPlatform {
    Steam = 0,
    XboxOne = 1,
    Win10 = 2,
    PS4 = 3,
    PS5 = 4,
    EFSDTargetPlatform_MAX = 5,
};

enum class EFacilityEye {
    EForward = 0,
    EBack = 1,
    ELeft = 2,
    ERight = 3,
    EFacilityEye_MAX = 4,
};

enum class EFacilityTentacleState {
    Idle = 0,
    HasTarget = 1,
    Melee = 2,
    Ranged = 3,
    EFacilityTentacleState_MAX = 4,
};

enum class EFlameThrowerUpgradeType {
    StickyFlameDuration = 0,
    LongReach = 1,
    AoEHeat = 2,
    KilledTargetsExplodeChance = 3,
    EFlameThrowerUpgradeType_MAX = 4,
};

enum class EFlareUpgradeType {
    Duration = 0,
    MaxFlares = 1,
    ProductionTime = 2,
    EFlareUpgradeType_MAX = 3,
};

enum class EFlaregunProjectileUpgrades {
    Duration = 0,
    EFlaregunProjectileUpgrades_MAX = 1,
};

enum class EFlaregunUpgrades {
    AutoReload = 0,
    EFlaregunUpgrades_MAX = 1,
};

enum class EFlyingBugDeathAnimationCategory {
    NoAnimation = 0,
    IdleOnDeath = 1,
    EFlyingBugDeathAnimationCategory_MAX = 2,
};

enum class EFriendOnlineStatusEnum {
    Online = 0,
    Offline = 1,
    Away = 2,
    EFriendOnlineStatusEnum_MAX = 3,
};

enum class EFrozenAfflictionType {
    Frozen = 0,
    Infected = 1,
    EFrozenAfflictionType_MAX = 2,
};

enum class EFrozenBitsSize {
    Tiny = 0,
    Small = 1,
    Medium = 2,
    Large = 3,
    Huge = 4,
    EFrozenBitsSize_MAX = 5,
};

enum class EGameOwnerStatus {
    Supporter = 0,
    ContentCreator = 1,
    Developer = 2,
    Modder = 3,
    EGameOwnerStatus_Max = 255,
};

enum class EGameType {
    Fully = 0,
    Progression = 1,
    Sandbox = 2,
    Vanilla = 99,
    EGameType_MAX = 100,
};

enum class EGatlingGunUpgrade {
    DamageMultiplierAtMaxStabilization = 0,
    HeatRemovedOnKill = 1,
    CriticalOverheat = 2,
    BarrelProximityDamage = 3,
    EGatlingGunUpgrade_MAX = 4,
};

enum class EGeneratorIconType {
    Vanity = 0,
    PickaxePart = 1,
    PickaxeSet = 2,
    WeaponSkin = 3,
    EGeneratorIconType_MAX = 4,
};

enum class EGooGunFireMode {
    Normal = 0,
    Charge = 1,
    Burst = 2,
    EGooGunFireMode_MAX = 3,
};

enum class EGooGunProjectileUpgrades {
    PuddleLifeSpan = 0,
    FragmentCount = 1,
    EGooGunProjectileUpgrades_MAX = 2,
};

enum class EGooGunUpgrades {
    ChargeFire = 0,
    BurstFire = 1,
    ShotCostCharged = 2,
    ChargeTime = 3,
    ChargeShotCount = 4,
    EGooGunUpgrades_MAX = 5,
};

enum class EGrabbedStateCameraMode {
    FirstPerson = 0,
    ThirdPerson = 1,
    EGrabbedStateCameraMode_MAX = 2,
};

enum class EGrabberState {
    StandBy = 0,
    Chase = 1,
    Carry = 2,
    Flee = 3,
    EGrabberState_MAX = 4,
};

enum class EGrapplingHookUpgrade {
    MaxDistance = 0,
    MaxSpeed = 1,
    WindUpTime = 2,
    EGrapplingHookUpgrade_MAX = 3,
};

enum class EGrenadeUpgradeType {
    MaxGrenades = 0,
    FuseTime = 1,
    EGrenadeUpgradeType_MAX = 2,
};

enum class EGuntowerModuleState {
    EDormant = 0,
    EActive = 1,
    EVulnerable = 2,
    EDestoyed = 3,
    EGuntowerModuleState_MAX = 4,
};

enum class EHUDVisibilityGroups {
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
    VersionNumber = 15,
    EHUDVisibilityGroups_MAX = 16,
};

enum class EHUDVisibilityMode {
    Visible = 0,
    Dynamic = 1,
    Hidden = 2,
    EHUDVisibilityMode_MAX = 3,
};

enum class EHUDVisibilityPresets {
    AllVisible = 0,
    Recommended = 1,
    Minimal = 2,
    AllHidden = 3,
    EHUDVisibilityPresets_MAX = 4,
};

enum class EHUDVisibilityReason {
    Invalid = 0,
    UserChoice = 1,
    StandDown = 2,
    MenuActive = 4,
    Photography = 8,
    EHUDVisibilityReason_MAX = 9,
};

enum class EHackingPodState {
    EClosed = 0,
    EShowDispenser = 1,
    EShowButton = 2,
    EHacking = 3,
    EDestroyed = 4,
    EDone = 5,
    EHackingPodState_MAX = 6,
};

enum class EHeadVanityType {
    HairOnly = 0,
    HeadGearOnly = 1,
    HeadGearOnly_UseArmorMaterial = 2,
    HairAndHeadGear = 3,
    HairAndHeadGear_UseArmorMaterial = 4,
    EHeadVanityType_MAX = 5,
};

enum class EHealthbarType {
    None = 0,
    MainLife = 1,
    Shield = 2,
    EHealthbarType_MAX = 3,
};

enum class EHeavyParticleCannonUpgrade {
    ReloadOnButtonRelease = 0,
    BoosterModule = 1,
    KillAddsAmmo = 2,
    RadialDamageIncPerSecond = 3,
    RadialRangeIncPerSecond = 4,
    BulkyBeam = 5,
    ProjectionModule = 6,
    PlatformExplosions = 7,
    EHeavyParticleCannonUpgrade_MAX = 8,
};

enum class EHitScanBaseUpgradeType {
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
    EHitScanBaseUpgradeType_MAX = 14,
};

enum class EHolidayType {
    None = 0,
    LunarFestival = 1,
    Anniversary = 2,
    Easter = 3,
    BeachParty = 4,
    Oktoberfest = 5,
    Halloween = 6,
    Xmas = 7,
    OneOffEvent = 8,
    EHolidayType_MAX = 9,
};

enum class EImpactDecalSize {
    Small = 0,
    Medium = 1,
    Large = 2,
    None = 3,
    EImpactDecalSize_MAX = 4,
};

enum class EImpulseDirectionSource {
    SourceForward = 0,
    SourceToTarget = 1,
    PlayerToTarget = 2,
    TargetUp = 3,
    TargetRandomOnPlane = 4,
    EImpulseDirectionSource_MAX = 5,
};

enum class EIndicatorMode {
    EConstant = 0,
    EFlashing = 1,
    EOff = 2,
    EIndicatorMode_MAX = 3,
};

enum class EInfectionState {
    Normal = 0,
    PartlyInfected = 1,
    FullyInfected = 2,
    EInfectionState_MAX = 3,
};

enum class EInputInteraction {
    Press = 0,
    Hold = 1,
    EInputInteraction_MAX = 2,
};

enum class EInputKeys {
    Use = 0,
    Fire = 1,
    Mine = 2,
    EInputKeys_MAX = 255,
};

enum class EIntoxicationState {
    NotIntoxicated = 0,
    Intoxicated = 1,
    PassOut = 2,
    EIntoxicationState_MAX = 3,
};

enum class EInventoryItemUpgradeType {
    MovementSpeedWhileUsing = 0,
    CooldownRate = 1,
    UnJamDuration = 2,
    ManualCooldownDelay = 3,
    ManualHeatPerUse = 4,
    EInventoryItemUpgradeType_MAX = 5,
};

enum class EInviteBlockReason {
    SoloSession = 0,
    ActiveDeepDive = 1,
    Tutorial = 2,
    OnlinePlayBlocked = 3,
    IsClient = 4,
    None = 5,
    EInviteBlockReason_MAX = 6,
};

enum class EItemAdjustmentType {
    None = 0,
    Cieling = 1,
    Wall = 2,
    Floor = 3,
    EItemAdjustmentType_MAX = 4,
};

enum class EItemCategory {
    PrimaryWeapon = 0,
    SecondaryWeapon = 1,
    TraversalTool = 2,
    ClassTool = 3,
    Grenade = 4,
    Flare = 5,
    MiningTool = 6,
    Armor = 7,
    EItemCategory_MAX = 8,
};

enum class EItemNotificationType {
    NewOverclock = 0,
    EItemNotificationType_MAX = 1,
};

enum class EItemPreviewStatus {
    Normal = 0,
    Upgraded = 1,
    Previewed = 2,
    PreviewReduced = 3,
    UpgradedAndPreviewReduced = 4,
    EItemPreviewStatus_MAX = 5,
};

enum class EItemSkinCollectionType {
    PerCharacter = 0,
    PerItem = 1,
    EItemSkinCollectionType_MAX = 2,
};

enum class EItemSkinType {
    PaintJob = 0,
    Framework = 1,
    EItemSkinType_MAX = 2,
};

enum class EItemUpgradeStatus {
    Locked = 0,
    AvailableCannotAfford = 1,
    AvailableCanAfford = 2,
    Owned = 3,
    Equipped = 4,
    EItemUpgradeStatus_MAX = 5,
};

enum class EKeyBindingAxis {
    None = 0,
    Positive = 1,
    Negative = 2,
    EKeyBindingAxis_MAX = 3,
};

enum class EKeyBindingSlot {
    Primary = 0,
    Secondary = 1,
    EKeyBindingSlot_MAX = 2,
};

enum class EKeyboardLayout {
    QWERTY = 0,
    AZERTY = 1,
    QWERTZ = 2,
    EKeyboardLayout_MAX = 3,
};

enum class ELandscapeCellFilter {
    Any = 0,
    Empty = 1,
    Filled = 2,
    Diggable = 3,
    NotDiggable = 4,
    Collidable = 5,
    NotCollidable = 6,
    Rubble = 7,
    NotRubble = 8,
    ELandscapeCellFilter_MAX = 9,
};

enum class ELaserPointerMarkerType {
    Primary = 0,
    Secondary = 1,
    Count = 2,
    ELaserPointerMarkerType_MAX = 3,
};

enum class ELaserPointerTargetType {
    Chunkable = 0,
    Dirt = 1,
    Player = 2,
    Enemy = 3,
    EmbeddedGem = 4,
    Other = 5,
    ELaserPointerTargetType_MAX = 6,
};

enum class ELineCutterProjectileUpgradeType {
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
    Homing = 12,
    ELineCutterProjectileUpgradeType_MAX = 13,
};

enum class ELineCutterUpgradeType {
    ReverseDirection = 0,
    ExplodeLastProjectile = 1,
    ELineCutterUpgradeType_MAX = 2,
};

enum class ELineRotation {
    None = 0,
    Yaw = 1,
    Pitch = 2,
    Roll = 3,
    ELineRotation_MAX = 4,
};

enum class ELockOnWeaponUpgrades {
    MaxLockOnDegree = 0,
    TimeBetweenLockedShots = 1,
    LockOnTime = 2,
    MaxTargets = 3,
    LoseLockOnDegree = 4,
    MaxLockOnRange = 5,
    PrioritizeLowHitpoint = 6,
    AlwaysHitTarget = 7,
    MaxLockOnDuration = 8,
    LockOnControlsSentryGun = 9,
    AoeHitCountThreshhold = 10,
    SentryGunShootsOnLockedShot = 11,
    UseLockOnTargetStatusEffect = 12,
    FearEnabled = 13,
    ELockOnWeaponUpgrades_MAX = 14,
};

enum class EMaggotAnimationState {
    Idle = 0,
    Moving = 1,
    EMaggotAnimationState_MAX = 2,
};

enum EMeshAttachType {
    ECharacterMesh = 0,
    ECamera = 1,
    EMeshAttachType_MAX = 2,
};

enum class EMicroMissileLauncherFireMode {
    Normal = 0,
    Charge = 1,
    Buck = 2,
    EMicroMissileLauncherFireMode_MAX = 3,
};

enum class EMicroMissileLauncherUpgrades {
    ChargeFire = 0,
    BuckFire = 1,
    DisableHomingOnRelease = 2,
    ShotDirectionHorizontalDegreeOffset = 3,
    ShotDirectionVerticleDegreeOffset = 4,
    EMicroMissileLauncherUpgrades_MAX = 5,
};

enum class EMicrowaveGunUpgrade {
    ESlowOnHit = 0,
    EFocusLense = 1,
    EWideLense = 2,
    ESpreadFire = 3,
    ESpreadNeuro = 4,
    EKilledTargetsExplodeChance = 5,
    ERadiantSuperheater = 6,
    EHeatsink = 7,
    BlisteringNecrosis = 8,
    EGammaContaminationZone = 9,
    ETemperatureAmplifier = 10,
    EMicrowaveGunUpgrade_MAX = 11,
};

enum class EMinersManualSection {
    FrontPage = 0,
    Hints = 1,
    Combat = 2,
    Creatures = 3,
    Biomes = 4,
    Missions = 5,
    Resources = 6,
    EMinersManualSection_MAX = 7,
};

enum class EMinersManualSinglePage {
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
    EMinersManualSinglePage_MAX = 14,
};

enum class EMiningPodMission {
    DropAndReturn = 0,
    Extraction = 1,
    DropFromSpacerig = 2,
    EMiningPodMission_MAX = 3,
};

enum class EMiningPodRampState {
    Closed = 0,
    Opening = 1,
    Open = 2,
    Closing = 3,
    EMiningPodRampState_MAX = 4,
};

enum class EMiningPodState {
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
    EMiningPodState_MAX = 14,
};

enum class EMissionStatType {
    Float = 0,
    Integer = 1,
    Time = 2,
    Distance = 3,
    EMissionStatType_MAX = 4,
};

enum class EMissionStructure {
    SingleMission = 0,
    DeepDive_Normal = 1,
    DeepDive_Elite = 2,
    EMissionStructure_MAX = 3,
};

enum class EModifyStatusEffectDamageUpgrade {
    Duration = 0,
    EModifyStatusEffectDamageUpgrade_MAX = 1,
};

enum class EMoveDirection {
    None = 0,
    Forward = 1,
    Left = 2,
    Right = 3,
    Back = 4,
    EMoveDirection_MAX = 5,
};

enum class EMoveType {
    EaseIn = 0,
    EaseOut = 1,
    EMoveType_MAX = 2,
};

enum EMovementCustomMode {
    MOVE_Custom_None = 0,
    MOVE_Custom_Track = 1,
    MOVE_Custom_CharacterStateControlled = 2,
    MOVE_Custom_TraversalTool = 3,
    MOVE_Custom_JetBoots = 4,
    MOVE_Custom_MAX = 5,
};

enum class EMultiHitscanUpgradeType {
    BulletsPerShot = 0,
    EMultiHitscanUpgradeType_MAX = 1,
};

enum class ENVidiaReflexMode {
    Disabled = 0,
    Enabled = 1,
    EnabledWithBoost = 2,
    ENVidiaReflexMode_MAX = 3,
};

enum class ENisseState {
    Idle = 0,
    Walking = 1,
    Running = 2,
    Frozen = 3,
    ENisseState_MAX = 4,
};

enum class EOffsetFrom {
    None = 0,
    Floor = 1,
    Ceiling = 2,
    EOffsetFrom_MAX = 3,
};

enum class EOnProjectileImpactBehaviourEnum {
    CallOnPredict = 0,
    CallOnConfirmed = 1,
    CallOnPredictAndConfirmed = 2,
    ClientAuthoritative = 3,
    EOnProjectileImpactBehaviourEnum_MAX = 4,
};

enum class EOutline {
    OL_NONE = 0,
    OL_FRIENDLY = 251,
    OL_NEUTRAL = 252,
    OL_ENEMY = 253,
    OL_ITEM = 254,
    EOutline_MAX = 255,
};

enum class EPatrolBotControlState {
    Hostile = 0,
    Disabled = 1,
    Hacked = 2,
    EPatrolBotControlState_MAX = 3,
};

enum class EPatrolBotState {
    Rolling = 0,
    Flying = 1,
    Disabled = 2,
    EPatrolBotState_MAX = 3,
};

enum class EPauseReason {
    Invalid = 0,
    MenuActive = 1,
    ReconnectController = 2,
    EPauseReason_MAX = 3,
};

enum class EPawnAttitude {
    Friendly = 0,
    Neutral = 1,
    Hostile = 2,
    EPawnAttitude_MAX = 3,
};

enum class EPawnStatType {
    Multiplicative = 0,
    Additive = 1,
    EPawnStatType_MAX = 2,
};

enum class EPerkHUDActivationLocation {
    Main = 0,
    Down = 1,
    EPerkHUDActivationLocation_MAX = 2,
};

enum class EPerkSlotType {
    Available = 0,
    LockedByPerk = 1,
    LockedByPromotion = 2,
    EPerkSlotType_MAX = 3,
};

enum class EPerkTierState {
    Claimable = 0,
    Claimed = 1,
    Locked = 2,
    Unaffordable = 3,
    NotAvailable = 4,
    EPerkTierState_MAX = 5,
};

enum class EPerkUsageType {
    Passive = 0,
    Active = 1,
    EPerkUsageType_MAX = 2,
};

enum class EPickaxePart {
    Head = 0,
    Blade = 1,
    Shaft = 2,
    Handle = 3,
    Pommel = 4,
    Material = 5,
    EPickaxePart_MAX = 6,
};

enum class EPickaxePartLocation {
    Head = 0,
    FrontBlade = 1,
    BackBlade = 2,
    Shaft = 3,
    Handle = 4,
    Pommel = 5,
    Material = 6,
    Count = 7,
    EPickaxePartLocation_MAX = 8,
};

enum class EPickaxeState {
    Equipping = 0,
    Mining = 1,
    PowerAttack = 2,
    End = 3,
    EPickaxeState_MAX = 4,
};

enum class EPickaxeUpgradeType {
    RockMining = 0,
    OneHitMineralMining = 1,
    ReceiveBonusMineralNitra = 2,
    ReceiveBonusMineralGold = 3,
    EnablePowerAttack = 4,
    PowerAttackCoolDown = 5,
    EPickaxeUpgradeType_MAX = 6,
};

enum class EPingType {
    EaseOut = 0,
    Bounce = 1,
    EPingType_MAX = 2,
};

enum class EPipelineBuildState {
    NotStarted = 0,
    BeginBuilt = 1,
    Completed = 2,
    Broken = 3,
    EPipelineBuildState_MAX = 4,
};

enum class EPipelineExtractorPodAnimState {
    Folded = 0,
    Idle = 1,
    Running = 2,
    Broken = 3,
    EPipelineExtractorPodAnimState_MAX = 4,
};

enum class EPiplelineConnectorAnimationState {
    Unassembled = 0,
    Assembling = 1,
    Assembled = 2,
    EPiplelineConnectorAnimationState_MAX = 3,
};

enum class EPlaceableObstructionType {
    Valid = 0,
    GroundTooSteep = 1,
    TooShort = 2,
    TooLong = 3,
    TurnTooSharp = 4,
    Blocked = 5,
    NotEnoughRoom = 6,
    TooSteep = 7,
    TooClose = 8,
    Other = 9,
    EPlaceableObstructionType_MAX = 10,
};

enum class EPlasmaCarbineConditions {
    ShieldRemovedOnReload = 0,
    EPlasmaCarbineConditions_MAX = 1,
};

enum class EPlasmaCarbineUpgrades {
    RateOfFireBoostOnFullShield = 0,
    RemoveShieldOnOverheat = 1,
    RemoveShieldOnReload = 2,
    EPlasmaCarbineUpgrades_MAX = 3,
};

enum class EPlatformComponentCriteria {
    All = 0,
    ServerOnly = 1,
    ClientOnly = 2,
    OwningClientOnly = 3,
    EPlatformComponentCriteria_MAX = 4,
};

enum class EPlatformGunUpgrades {
    BiggerPlatform = 0,
    LessFallDamage = 1,
    BugRepellant = 2,
    CubePlatform = 3,
    EPlatformGunUpgrades_MAX = 4,
};

enum class EPlatformRestriction {
    Editor = 0,
    Steam = 1,
    Oddish = 2,
    UniversalWindowsPlatform = 3,
    XBoxOne = 4,
    PS4 = 5,
    EPlatformRestriction_MAX = 6,
};

enum class EPlayerTemperatureState {
    Normal = 0,
    Frozen = 1,
    Overheated = 2,
    EPlayerTemperatureState_MAX = 3,
};

enum class EPostProcessingType {
    GameWorld = 0,
    CharacterSelector = 1,
    EPostProcessingType_MAX = 2,
};

enum class EProjectileAttackRotationType {
    NoTarget_ActorForward = 0,
    NoTarget_Socket = 1,
    Always_Socket = 2,
    EProjectileAttackRotationType_MAX = 3,
};

enum class EProjectileLauncherBaseUpgradeType {
    VerticalSpread = 0,
    HorizontalSpread = 1,
    TransferVelocityFromCharacter = 2,
    ArcStartAngle = 3,
    EProjectileLauncherBaseUpgradeType_MAX = 4,
};

enum class EProjectileSwitchCriteria {
    None = 0,
    CharagedProjectile = 1,
    HeatAbove = 2,
    HeatBelow = 3,
    CycleButtonSecondsHeld = 4,
    EProjectileSwitchCriteria_MAX = 5,
};

enum class EProjectileUpgrade {
    Velocity = 0,
    MaxVelocity = 1,
    Bouncy = 2,
    Lifetime = 3,
    DoOnImpact = 4,
    DoOnImpact2 = 5,
    DoOnImpact3 = 6,
    DoOnSpawn = 7,
    HomingStrength = 8,
    SetInitialSpeedToMaxSpeed = 9,
    AccelerationMultiplier = 10,
    MaxPropulsionTime = 11,
    GravityScale = 12,
    CustomEvent = 13,
    EProjectileUpgrade_MAX = 14,
};

enum class EProspectorRobotState {
    Searching = 0,
    Scanning = 1,
    Sampling = 2,
    Fleeing = 3,
    EProspectorRobotState_MAX = 4,
};

enum class ERecallableActorState {
    Idle = 0,
    RelocateRequested = 1,
    Relocating = 2,
    ReturnRequested = 3,
    Returning = 4,
    Home = 5,
    ERecallableActorState_MAX = 6,
};

enum class ERedeployableSentryGunState {
    Deploying = 0,
    Deployed = 1,
    Dismantling = 2,
    Dismantled = 3,
    ERedeployableSentryGunState_MAX = 4,
};

enum class ERefineryState {
    Landing = 0,
    ConnectingPipes = 1,
    PipesConnected = 2,
    Refining = 3,
    RefiningStalled = 4,
    RefiningComplete = 5,
    RocketLaunched = 6,
    ERefineryState_MAX = 7,
};

enum class EReflectionHitscanUpgradeType {
    ReflectionCount = 0,
    EReflectionHitscanUpgradeType_MAX = 1,
};

enum class ERessuplyPodState {
    ReadyToDrop = 0,
    Dropping = 1,
    Landed = 2,
    Idle = 3,
    ERessuplyPodState_MAX = 4,
};

enum class ERevolerUpgrades {
    OnKillFearFactor = 0,
    ERevolerUpgrades_MAX = 1,
};

enum class ERicochetBehavior {
    All = 0,
    PawnsOnly = 1,
    NotPawns = 2,
    ERicochetBehavior_MAX = 3,
};

enum class ERivalBombNodeState {
    Inactive = 0,
    Active = 1,
    Hackable = 2,
    Completed = 3,
    Failed = 4,
    ERivalBombNodeState_MAX = 5,
};

enum class ERobotState {
    Enemy = 0,
    Friendly = 1,
    PoweredDown = 2,
    ERobotState_MAX = 3,
};

enum class ERockCrackerstate {
    Init = 0,
    EFalling = 1,
    EConnect = 2,
    EDrilling = 3,
    EBroke = 4,
    EDone = 5,
    ERockCrackerstate_MAX = 6,
};

enum class ERoomMirror {
    None = 0,
    MirrorX = 1,
    MirrorY = 2,
    ERoomMirror_MAX = 3,
};

enum class ERoomMirroringSupport {
    NotAllowed = 0,
    MirrorAroundX = 1,
    MirrorAroundY = 2,
    MirrorBoth = 3,
    ERoomMirroringSupport_MAX = 4,
};

enum class ESaveSlotChangeProcedure {
    NewSave = 0,
    Load = 1,
    Save = 2,
    NewModdedSave = 3,
    ESaveSlotChangeProcedure_MAX = 4,
};

enum class ESawedOffShotgunUpgrades {
    FearOnShoot = 0,
    ShockWave = 2,
    ShotgunJump = 3,
    ESawedOffShotgunUpgrades_MAX = 4,
};

enum class ESchematicState {
    NotOwned = 0,
    Owned = 1,
    OwnedBuilt = 2,
    ESchematicState_MAX = 3,
};

enum class ESchematicType {
    Overclock = 0,
    Vanity = 1,
    Resource = 2,
    Blank = 3,
    ESchematicType_MAX = 4,
};

enum class ESeasonVisibilityState {
    Bought = 0,
    CanBuy = 1,
    Locked = 2,
    ESeasonVisibilityState_MAX = 3,
};

enum class ESentryGunUpgradeType {
    MaxAmmo = 0,
    ReloadSpeed = 1,
    ExtraSentry = 2,
    AngleRestriction = 3,
    ManualTargeting = 4,
    MaxRange = 5,
    RotationSpeed = 6,
    BurstCooldown = 7,
    ESentryGunUpgradeType_MAX = 8,
};

enum class EServerDistance {
    Close = 0,
    Medium = 1,
    Far = 2,
    World = 3,
    EServerDistance_MAX = 4,
};

enum class EServerSortOrder {
    Mission = 0,
    Players = 1,
    Length = 2,
    Complexity = 3,
    Distance = 4,
    Time = 5,
    Difficulty = 6,
    EServerSortOrder_MAX = 7,
};

enum class ESharkEnemyState {
    Idle = 0,
    Circling = 1,
    Attacking = 2,
    Vulnerable = 3,
    Dive = 4,
    ESharkEnemyState_MAX = 5,
};

enum class EShieldGeneratorUpgrades {
    Radius = 0,
    Duration = 1,
    DeployTime = 2,
    RechargeTime = 3,
    RechargeCount = 4,
    PushStatusEffect = 5,
    EShieldGeneratorUpgrades_MAX = 6,
};

enum class EShoutType {
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
    CallDonkey_NotInMission = 14,
    Depositing = 15,
    DepositingNoDonkey = 16,
    OutOfAmmo = 17,
    Reloading = 18,
    CharacterSelected = 19,
    UpgradeBought = 20,
    WaitingInDropPod = 21,
    Carrying = 22,
    WaitingInEscapePod = 23,
    Salute = 24,
    Salute_Spacerig = 25,
    Drink = 26,
    EShoutType_MAX = 27,
};

enum class EShowroomScaling {
    NoScaling = 0,
    EnemySmall = 1,
    EnemyMedium = 2,
    EnemyBig = 3,
    EnemyHuge = 4,
    EShowroomScaling_MAX = 5,
};

enum class ESingleUsableUpgradeType {
    UseDuration = 0,
    ESingleUsableUpgradeType_MAX = 1,
};

enum class ESonyControllerLightMode {
    Disabled = 0,
    Simple = 1,
    Default = 2,
    ESonyControllerLightMode_MAX = 3,
};

enum class ESonyControllerMotionMapping {
    Yaw = 0,
    Roll = 1,
    ESonyControllerMotionMapping_MAX = 2,
};

enum class ESonyInputSettingsBools {
    MotionControlEnabled = 0,
    MotionControlFlight = 1,
    MotionControlSalute = 2,
    MotionControlPrecisionMode = 3,
    AdaptiveTriggersEnabled = 4,
    TouchPadTerrainScannerEnabled = 5,
    TouchPadGesturesEnabled = 6,
    ControllerSpeakerMissionControl = 7,
    ControllerSpeakerSalute = 8,
    ControllerSpeakerFlare = 9,
    ControllerSpeakerMineralCollection = 10,
    ESonyInputSettingsBools_MAX = 11,
};

enum class ESonyInputSettingsFloats {
    MotionControlXSensitivity = 0,
    MotionControlYSensitivity = 1,
    ControllerSpeakerVolume = 2,
    TouchPadTerrainScannerXSensitivity = 3,
    TouchPadTerrainScannerYSensitivity = 4,
    TouchPadTerrainScannerZoomSensitivity = 5,
    ESonyInputSettingsFloats_MAX = 6,
};

enum class ESpacerigStartType {
    PlayerHub = 0,
    Medbay = 1,
    ESpacerigStartType_MAX = 2,
};

enum class ESpawnSettings {
    Normal = 0,
    NoSpawning = 1,
    SpawnAll = 2,
    ESpawnSettings_MAX = 3,
};

enum class ESpecialDebrisType {
    None = 0,
    Plague = 1,
    LitPlague = 2,
    ESpecialDebrisType_MAX = 3,
};

enum class ESpiderDeathAnimationCategory {
    NoAnimation = 0,
    Melt = 1,
    Cook = 2,
    Burn = 3,
    ESpiderDeathAnimationCategory_MAX = 4,
};

enum class ESteamBranch {
    Main = 0,
    Experimental = 1,
    Internal_Testing = 2,
    Other = 3,
    ESteamBranch_MAX = 4,
};

enum class ESteamSearchRegion {
    Close = 0,
    Medium = 1,
    Far = 2,
    World = 3,
    ESteamSearchRegion_MAX = 4,
};

enum class ESteamServerJoinStatus {
    Open = 0,
    PasswordRequired = 1,
    ESteamServerJoinStatus_MAX = 2,
};

enum class EStrobeMaterialMode {
    Material = 0,
    Mesh = 1,
    EStrobeMaterialMode_MAX = 2,
};

enum class EStrobingMode {
    Intensity = 0,
    AttenuationRadius = 1,
    EStrobingMode_MAX = 2,
};

enum class ETargetStateDamageBonusType {
    Frozen = 0,
    OnFire = 1,
    Fleeing = 2,
    Staggered = 3,
    ETargetStateDamageBonusType_MAX = 4,
};

enum class ETemperatureIntensity {
    Cold3 = 0,
    Cold2 = 1,
    Cold1 = 2,
    Heat1 = 3,
    Heat2 = 4,
    Heat3 = 5,
    ETemperatureIntensity_MAX = 6,
};

enum class ETerminatorShoutState {
    EIdle = 0,
    EGrabbing = 1,
    EDeath = 2,
    EAttacking = 3,
    ETerminatorShoutState_MAX = 4,
};

enum class ETerminatorTentacleState {
    Idle = 0,
    Grabbing = 1,
    Grabbed = 2,
    Dead = 3,
    ETerminatorTentacleState_MAX = 4,
};

enum class ETerrainPlacementBoxType {
    NoTerrain = 0,
    Terrain = 1,
    ETerrainPlacementBoxType_MAX = 2,
};

enum class ETetherConnectionMode {
    Both = 0,
    FrontOnly = 1,
    BackOnly = 2,
    None = 3,
    ETetherConnectionMode_MAX = 4,
};

enum class ETetherMessageDirection {
    Forward = 0,
    Backward = 1,
    Both = 2,
    ETetherMessageDirection_MAX = 3,
};

enum class EThawInputDirection {
    EForward = 0,
    ERight = 1,
    EBack = 2,
    ELeft = 3,
    ENA = 4,
    EThawInputDirection_MAX = 5,
};

enum class EThrowableInput {
    LeftButton = 0,
    RightButton = 1,
    EThrowableInput_MAX = 2,
};

enum class EThrownGrenadeItemState {
    NotEquipped = 0,
    Cooking = 1,
    Throwing = 2,
    EThrownGrenadeItemState_MAX = 3,
};

enum class ETrackBuildPlacementState {
    NotBeingPlaced = 0,
    BeingPlaced = 1,
    Finished = 2,
    ETrackBuildPlacementState_MAX = 3,
};

enum class ETreasureType {
    WeaponSkin = 0,
    VictoryPose = 1,
    PickaxePart = 2,
    VanityItem = 3,
    ETreasureType_MAX = 4,
};

enum class ETriggeredStatusEffectType {
    ShieldDestroyed = 0,
    GrapplingHookReleased = 1,
    NONE = 2,
    ETriggeredStatusEffectType_MAX = 3,
};

enum class ETurn180Mode {
    PressRun = 0,
    PressFlare = 1,
    Off = 2,
    ETurn180Mode_MAX = 3,
};

enum class EUpgradeCalucationType {
    Additive = 0,
    Multiplicative = 1,
    EUpgradeCalucationType_MAX = 2,
};

enum class EUpgradeClass {
    Class_A = 0,
    Class_B = 1,
    Gear_A = 2,
    Gear_B = 3,
    Armor = 4,
    Pickaxe = 5,
    Class_Bosco = 10,
    EUpgradeClass_MAX = 11,
};

enum class EUpgradeTiers {
    Tier_1 = 0,
    Tier_2 = 1,
    Tier_3 = 2,
    Tier_4 = 3,
    Tier_5 = 4,
    Tier_MAX = 5,
};

enum class EVacuumState {
    EPuddle = 0,
    EVacuuming = 1,
    EFalling = 2,
    EDead = 3,
    EVacuumState_MAX = 4,
};

enum class EVanityAquisitionType {
    UnlockedFromStart = 0,
    Purchased = 1,
    Schematic = 2,
    Treasure = 3,
    EVanityAquisitionType_MAX = 4,
};

enum class EVanitySlot {
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
    EVanitySlot_MAX = 10,
};

enum class EVeteranScaling {
    NormalEnemy = 0,
    LargeEnemy = 1,
    EVeteranScaling_MAX = 2,
};

enum class EVolumeType {
    CharacterVoices = 0,
    Master = 1,
    SFX = 2,
    Music = 3,
    VoiceChat = 4,
    MissionControl = 5,
    EVolumeType_MAX = 6,
};

enum class EWeakpointGlowMode {
    Set = 0,
    Additive = 1,
    EWeakpointGlowMode_MAX = 2,
};

enum class EWeaponMaintenanceState {
    Locked = 0,
    Maintaining = 1,
    LevelUp = 2,
    Finished = 3,
    EWeaponMaintenanceState_MAX = 4,
};

enum class EWoodLouseState {
    Unfolded = 0,
    Folded = 1,
    Size = 2,
    EWoodLouseState_MAX = 3,
};

enum class EZiplineGunUpgrades {
    MaxAngle = 0,
    MaxDistance = 1,
    MovementSpeed = 2,
    FallDamageReduction = 3,
    EZiplineGunUpgrades_MAX = 4,
};

