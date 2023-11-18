#ifndef UE4SS_SDK_FSD_HPP
#define UE4SS_SDK_FSD_HPP

#include "FSD_enums.hpp"

struct FAchievementSave
{
    TArray<FString> OfflineAchievedAchievements;
    TArray<FAchievementSaveEntry> AchievementEntries;

};

struct FAchievementSaveEntry
{
    FGuid AchievementSaveID;
    float HighestSavedProgress;
    float CurrentProgress;

};

struct FActionIconMapping
{
    FKey ActionKey;
    class UTexture2D* Icon;
    bool DoNotTint;

};

struct FActiveAudioItem
{
    class UAudioComponent* audio;
    float FadeoutDuration;

};

struct FActiveCampaignItem
{
    FGuid CampaignID;
    int32 Progress;
    int32 Seed;

};

struct FActiveCampaingMission
{
    bool HasMission;
    int32 GlobalSeed;
    int32 MissionSeed;

};

struct FActiveMusicItem
{
    class USoundBase* Sound;
    float StartingTime;
    float FadeDuration;
    bool Looping;
    FMusicHandle Handle;
    class UMusicCategory* Category;

};

struct FActiveOutline
{
};

struct FActiveStatusEffect
{
    TWeakObjectPtr<class AActor> Owner;

};

struct FActiveStatusEffectBank
{
    class UStatusEffect* Key;
    class UStatusEffect* ActiveEffect;
    TArray<FActiveStatusEffect> Effects;

};

struct FAfflictionEntriesArray : public FFastArraySerializer
{
    TArray<FAfflictionEntry> Items;
    class UPawnAfflictionComponent* Owner;

};

struct FAfflictionEntry : public FFastArraySerializerItem
{
    class UPawnAffliction* Affliction;

};

struct FAnalogAimSettings
{
    FVector2D AimRate;
    class UCurveFloat* SensitivityCurve;
    float LookAtStickyness;
    float StickynessRecoverySpeed;
    float StickynessMaxSensitivity;
    FVector2D ThirdPersonLookRate;

};

struct FAnimNode_Tentacle : public FAnimNode_SkeletalControlBase
{
    TArray<FBoneReference> BonesToModify;

};

struct FArmorDamageEffects
{
    TArray<class UFXSystemAsset*> ArmorBreakParticles;
    TArray<class UFXSystemAsset*> DissolveParticles;
    TArray<class UFXSystemAsset*> BeamParticles;

};

struct FArmorDamageInfo
{
    int32 ArmorIndexMask;
    EArmorDamageType BreakType;

};

struct FArmorHealthItem
{
    uint8 MaterialIndex;
    bool HealthIsBreakPercentage;
    bool OverrideAffectedByAmorBreak;
    bool NewAffectedByArmorBreak;
    bool OverrideArmorDamageEnabled;
    TArray<FArmorHealthSubItem> ArmorBones;

};

struct FArmorHealthSubItem
{
    float Health;
    FName BoneName;
    TArray<FName> AdditionalBones;
    FName OptionalFXSocket;

};

struct FAssetsToLoadSettings
{
    TArray<TSoftClassPtr<AActor>> ActorsPermanently;

};

struct FAttachMeshesAfflictionItem
{
    FVector Offset;
    class USkeletalMesh* SkeletalMesh;
    class UStaticMesh* StaticMesh;
    class UAnimSequence* Animation;
    float Scale;
    FName BoneName;
    TEnumAsByte<EMeshAttachType> AttachType;
    bool LoopAnimation;
    bool RandomRotaiton;
    bool RandomScale;
    bool CastShadows;

};

struct FAttackCooldown
{
    FName AttackName;
    float CoolDown;

};

struct FAttackerInfo
{
    TWeakObjectPtr<class AActor> Attacker;
    int32 PositionIndex;
    float AttackerRadius;

};

struct FAudioWithCooldown
{
    class USoundCue* audio;
    float CoolDown;

};

struct FAvoidActorEntry
{
    class AActor* Actor;

};

struct FBEELoaderSequence
{
    TSoftObjectPtr<ULevelSequence> LevelSequence;

};

struct FBEETemplateItem
{
    class UMissionTemplate* mission;
    TArray<class UMissionDuration*> AllowedDurations;
    TArray<class UMissionComplexity*> AllowedComplexities;

};

struct FBackendNotification
{
    FString Platform;
    FString Header;
    FString Message;
    FString MessageType;
    FString Link;

};

struct FBackendNotificationEvent
{
    FString MessageType;
    FString Header;
    FString Message;
    FString Link;

};

struct FBarleySpawnItem
{
    class UResourceData* Resource;
    float Weight;

};

struct FBeamCollision
{
    bool bBeamBlocked;
    float BeamHitDistance;
    FVector FinalTraceStart;
    FVector FinalTraceEnd;

};

struct FBiomeEnemyEntry
{
    class UEnemyDescriptor* enemy;
    bool IsDistruptive;

};

struct FBiomeFeatures
{
    class UMinersManualData* Descriptions;

};

struct FBiomeNoiseItem
{
    class UFloodFillSettings* CeilingNoise;
    class UDetailNoise* CeilingDetailNoise;
    class UFloodFillSettings* WallNoise;
    class UDetailNoise* WallDetailNoise;
    class UFloodFillSettings* FloorNoise;
    class UDetailNoise* FloorDetailNoise;
    float Weight;

};

struct FBlueprintFriend
{
    FString DisplayName;
    FString RealName;
    EFriendOnlineStatusEnum OnlineStatus;
    FString UniqueNetId;

};

struct FBoomerangMover
{
    FRotator StartRotation;
    FVector PrevPos;
    FVector NextPos;
    FVector Velocity;
    float Speed;
    float TimeScale;
    float TickRate;
    float TickTime;
    float AccumulatedTime;
    float TotalTime;
    float StartSmoothTime;
    class UCurveVector* ArcCurve;
    bool IsGoingBack;

};

struct FBoomerangSyncer
{
    FVector PrevPos;
    FVector NextPos;
    FVector Velocity;
    bool IsGoingBack;
    float TotalTime;

};

struct FBoscoAbilityTarget
{
    FVector Location;
    class AActor* Actor;

};

struct FBoscoLightSetting
{
    FColor Color;
    float Intensity;
    float Radius;

};

struct FBossFight
{
    TWeakObjectPtr<class AActor> BossActor;
    TWeakObjectPtr<class UEnemyComponent> EnemyComponent;
    TWeakObjectPtr<class UEnemyHealthComponent> HealthComponent;

};

struct FBulletPathSegment
{
};

struct FBumpPlayerHit
{
    FVector_NetQuantize force;
    class APlayerCharacter* Player;

};

struct FCSGBuildOperationData
{
    int32 OperationNumber;
    TSubclassOf<class ACSGBuilder> CSGModel;
    FBakeSettings CarverSettings;
    FMatrixWithExactSync Transform;

};

struct FCSGRaycastHitInfo
{
    FVector Position;
    FVector Normal;
    int32 Material;

};

struct FCablePathSettings
{
    DeepPathFinderType PathType;
    DeepPathFinderSize PathSize;
    DeepPathFinderPreference PathPreference;
    float MinStepSize;
    float MaxStepSize;
    float MaxNoiseY;

};

struct FCameraSpringSettings
{
    bool SpringEnabled;
    float StepThreshold;
    FVector2D SpringExtend;
    float RetractStrength;
    float RetractDownReduction;
    bool ShowDebug;
    float LastSpeedZ;
    FVector LastLocation;
    FVector StartSpringLocation;
    bool bSpringInitialized;

};

struct FCampaignSave
{
    FActiveCampaignItem ActiveCampaign;
    TArray<FGuid> CompletedCampaigns;
    int32 ActiveCampaignWeek;
    FWeeklyCampaignItem WeeklySave;
    FWeeklyCampaignItem MaxtrixCoreHuntSave;
    FWeeklyCampaignItem SeededRandomSave;

};

struct FCarveWithColliderOperationData
{
    int32 OperationNumber;
    class UStaticMesh* StaticMesh;
    class UTerrainMaterial* Material;
    ECarveFilterType CarveFilter;
    FMatrixWithExactSync Transform;
    class ULevelGenerationCarverComponent* LevelGenerationComponent;
    float ExpensiveNoise;
    EPreciousMaterialOptions Precious;
    CarveOptionsCellSize CarveCellSize;

};

struct FCarveWithSTLMeshOperationData
{
    int32 OperationNumber;
    class USTLMeshCarver* STLMeshCarver;
    class UStaticMeshCarver* StaticMeshCarver;
    class UTerrainMaterial* Material;
    ECarveFilterType CarveFilter;
    EPreciousMaterialOptions Precious;
    FMatrixWithExactSync Transform;
    class ULevelGenerationCarverComponent* LevelGenerationComponent;

};

struct FCarvedResource
{
    class UCarvedResourceCreator* ResourceCreator;
    TArray<int32> PredeterminedRooms;
    int32 Amount;
    float Overflow;

};

struct FCaveInfluence
{
    FVector Center;
    float range;

};

struct FCaveInfluenceSet
{
    TArray<FCaveInfluence> CaveInfluences;

};

struct FCellNoise
{
    int32 Seed;
    FVector CellSize;
    int32 NumValues;
    int32 MinCellValue;
    int32 MaxCellValue;

};

struct FChallengeInfo
{
    FText Text;
    class UTexture2D* Icon;
    class UTexture2D* IconOutlined;
    FLinearColor Color;
    int32 CurrentWins;
    int32 NumberOfWins;
    int32 XPCompleteGain;
    int32 TokenGain;
    TSoftObjectPtr<UTexture2D> Stat1Image;
    TSoftObjectPtr<UTexture2D> Stat2Image;
    bool bIsSpecial;

};

struct FChallengeSaveInfo
{
    TArray<int32> StatIndices;
    FGuid ChallengeGuid;
    int32 CurrentWins;
    int32 NumberOfWins;
    int32 XPCompleteGain;
    int32 TokenGain;

};

struct FChallengeVariation
{
    int32 NumberOfWins;
    int32 XPCompleteGain;
    int32 TokenGain;

};

struct FCharacterLoadoutAnalyticInfo
{
};

struct FCharacterOptions
{
    bool GrapplingHookAutoSwitch;
    bool ZiplineGunAutoSwitch;
    bool HoldToBreakImmobilization;
    bool HoldToFire;

};

struct FCharacterPerksSave
{
    TArray<FPerkEquipEntry> CharacterPerks;

};

struct FCharacterProgress
{
    class UPlayerCharacterID* characterID;
    int32 Level;
    float Progress;
    int32 CurrentXP;
    int32 NextLevelXP;
    int32 TimesRetired;

};

struct FCharacterSave
{
    FGuid SavegameID;
    int32 XP;
    bool HasCompletedRetirementCampaign;
    int32 TimesRetired;
    int32 RetiredCharacterLevels;
    bool HasSeenRetirementRewardScreen;
    TSubclassOf<class APlayerCharacter> CharacterClass;
    FCharacterVanitySave Vanity;
    int32 SelectedLoadout;
    FItemLoadout Loadout;
    TArray<FItemLoadout> Loadouts;
    TArray<FUpgradeLoadout> ItemUpgradeLoadouts;
    FItemLoadout RandomWeaponLoadout;
    FUpgradeLoadout RandomItemUpgradeLoadouts;
    FVictoryPoseSave VictoryPose;

};

struct FCharacterShouts
{
    class UDialogDataAsset* Attention;
    class UDialogDataAsset* Follow;
    class UDialogDataAsset* standingDown;
    class UDialogDataAsset* Downed;
    class UDialogDataAsset* RequestRevive;
    class UDialogDataAsset* Revived;
    class UDialogDataAsset* Resupply;
    class UDialogDataAsset* FriendlyFire;
    class UDialogDataAsset* KillCry;
    class UDialogDataAsset* Dead;
    class UDialogDataAsset* Cheating;
    class UDialogDataAsset* ResourceFull;
    class UDialogDataAsset* ResourceFullNoDonkey;
    class UDialogDataAsset* CallDonkey;
    class UDialogDataAsset* CallDonkey_NotInMission;
    class UDialogDataAsset* Depositing;
    class UDialogDataAsset* DepositingNoDonkey;
    class UDialogDataAsset* OutOfAmmo;
    class UDialogDataAsset* Reloading;
    class UDialogDataAsset* CharacterSelected;
    class UDialogDataAsset* UpgradeBought;
    class UDialogDataAsset* WaitingInDropPod;
    class UDialogDataAsset* Carrying;
    class UDialogDataAsset* WaitingInEscapePod;
    class UDialogDataAsset* Salute;
    class UDialogDataAsset* Salute_Spacerig;
    class UDialogDataAsset* Drink;

};

struct FCharacterUseState
{
    class UUsableComponentBase* ActiveUsable;
    EInputKeys Key;
    int32 UseId;

};

struct FCharacterVanityLoadout
{
    FGuid EquippedHeadItemID;
    FGuid EquippedBeardItemID;
    FGuid EquippedArmorItemID;
    FGuid EquippedArmorMaterialID;
    FGuid EquippedBeardColorItemID;
    FGuid EquippedSkinColorItemID;
    FGuid EquippedEyebrowsItemID;
    FGuid EquippedMoustacheItemID;
    FGuid EquippedSideburnsItemID;
    bool UsingSleevelessArmor;
    int32 MedicalGownIndex;

};

struct FCharacterVanitySave
{
    TArray<FCharacterVanityLoadout> Loadouts;
    FCharacterVanityLoadout RandomVanityLoadout;
    TArray<FGuid> UnLockedVanityItemIDs;
    TArray<class UVanityItem*> UnLockedVanityItems;
    TMap<class EVanitySlot, class FGuid> NewVanityItems;

};

struct FCharacterViewInfo
{
    TSubclassOf<class APlayerCharacter> CharacterClass;
    TArray<class UVanityItem*> EquippedVanity;
    bool SurvivedInPod;
    class UVictoryPose* VictoryPose;

};

struct FCharacterViewScene
{
    TArray<FCharacterViewInfo> Characters;
    bool MissionSuccess;

};

struct FClaimableRewardEntry
{
    FText Title;
    FText Text;
    TSoftObjectPtr<UObject> Image;
    TArray<class UReward*> Rewards;
    TSoftClassPtr<UClaimableRewardEntryWidget> EntryWidgetOverride;

};

struct FClaimableRewardView
{
    class UDialogDataAsset* MissionControlSpeak;
    TSoftClassPtr<UUserWidget> BackgroundWidgetClass;
    TSoftObjectPtr<USoundCue> FanfareAudio;
    float MoveInRewardsDelay;
    TArray<FClaimableRewardEntry> RewardDisplays;
    FText ClaimButtonText;

};

struct FCloudLoadAllResponse
{
    TArray<FCloudLoadEntry> savegames;

};

struct FCloudLoadEntry
{
    FString RawData;
    FString TimeUTC;

};

struct FCloudLoadRequest
{
    FString SteamTicket;
    FString PSTicket;
    FString Branch;
    int32 Offset;

};

struct FCloudSaveRequest
{
    FString SteamTicket;
    FString PSTicket;
    int32 PlayerRank;
    int32 SaveToDiskCounter;
    FString RawData;
    FString Branch;

};

struct FCoilMaterial
{
    class UMaterialInstanceDynamic* Material;

};

struct FCoilgunAfflictionEntry
{
    TArray<class TSubclassOf<UStatusEffect>> PushedAfflictions;
    class UStatusEffectsComponent* Target;

};

struct FCoilgunCoil
{
    float Angle;
    float Speed;

};

struct FCollectableSpawnableItem
{
    class UCollectableResourceData* Resource;
    int32 Amount;

};

struct FColorVisionDeficiencySettings
{
    EColorVisionDeficiency Type;
    float Severity;

};

struct FCommunityFactionData
{
    bool IsValid;
    TArray<FString> Goals;
    TArray<float> Values;
    TArray<int32> Members;

};

struct FCommunityFactionResponse
{
    TArray<FString> Goals;
    TArray<float> Values;
    TArray<float> Members;

};

struct FCommunityGoalIncrementResponse
{
    bool success;

};

struct FCommunityGoalRequest
{
    FString GoalID;
    int32 FactionID;
    float Value;
    FString SteamTicket;
    FString Branch;

};

struct FCommunityGoalStateData
{
    bool isGoal;
    bool isRecruitment;
    float TimeLeftSeconds;
    int32 CurrentGoalPeriodID;

};

struct FCommunityGoalStateResponse
{
    bool isGoal;
    bool isRecruitment;
    bool FreeBeers;
    float TimeLeftSeconds;
    int32 LastUpdateGoalsID;
    int32 CurrentGoalPeriodID;

};

struct FCommunityGoalTierDataRequest
{
    FString GoalID;

};

struct FCommunityGoalTierResponse
{
    bool Found;
    FString GoalID;
    float FirstTierGoal;
    float SecondTierGoal;
    float ThirdTierGoal;

};

struct FCommunityReward
{
    class UResourceData* Resource;
    float Value;

};

struct FCommunityRewardNotification
{
    FText Text;
    class UTexture2D* Icon;
    FLinearColor IconColor;
    FString ID;

};

struct FCompositeArmorItem
{
    class UPrimitiveComponent* Component;
    float Health;
    bool OverrideAffectedByArmorBreak;
    bool MyAffectedByAmorBreak;

};

struct FConsoleOptionsInSaveGame
{
    FControllerSettings ControllerSettings;
    FHUDElements HUDElements;
    bool SaveGameOptionsValid;
    bool bTutorialHintsEnabled;
    bool bShowFPS;
    int32 ShowNetInfoLevel;
    float FOV;
    float HeadbobbingScale;
    float CameraShakeScale;
    float UIDPIScale;
    float volumeCharacterVoice;
    float volumeMaster;
    float volumeMissionControl;
    float volumeSFX;
    float volumeMusic;
    bool bShowSubtitles;
    bool InvertMouse;
    bool PhotosensitiveMode;
    bool bHoldToSprint;
    bool bToggleLaserPointer;
    bool bToggleTerrainScanner;
    bool bUseMouseSmoothing;
    float MouseXSensitivity;
    float MouseYSensitivity;
    bool bUseSeperateSensitivity;
    bool bInvertMouseWheel;
    bool bInvertIncapacitatedX_Mouse;
    bool bInvertIncapacitatedX_Controller;
    bool bInvertFlightControls;
    bool bShowUIAnimations;
    bool bPlaySoundOnChatMessage;
    float ChatFadeTime;
    float ForceFeedbackScale;
    int32 ChatFontSize;
    float HDRColorGamma;
    EConsoleGraphicsMode ConsoleGraphicsMode;
    FString Language;
    FCharacterOptions CharacterOptions;
    TArray<FCustomKeyBinding> CustomKeyBindings;
    TArray<FCustomKeyBinding> CustomControllerBindings;
    bool SwapControllerThumbsticks;
    float FSDResolutionScale;
    int32 UpscalingType;
    int32 AmdFsrMode;
    int32 AmdFsr2Mode;
    UDLSSMode NvidiaDlssMode;
    float AmdFsrSharpness;
    float AmdFsr2Sharpness;
    float NvidiaDlssSharpness;

};

struct FContrailSettings
{
    float Radius;
    float HalfLenght;
    float LifeTime;
    bool Hellfire;
    bool Electric;

};

struct FControlEnemyState
{
    class ADeepPathfinderCharacter* ControlledEnemy;
    FTransform InitialTargetTransform;
    float InitialTargetBlendTotalTime;
    FVector InitialCharacterVelocity;
    FVector InitialEnemyVelocity;

};

struct FControllerSettings
{
    float AimInnerDeadZone;
    float AimSensitivity;
    float AimOuterAcceleration;
    ETurn180Mode Turn180Mode;
    bool bPreviousItemEnabled;
    bool bChatEnabled;

};

struct FCoolDownProgressStyle
{
    class UTexture2D* Icon;
    FLinearColor IconTint;
    FText Name;
    TSubclassOf<class UCoolDownProgressWidget> WidgetOverride;
    class USoundCue* AudioCoolDownFinished;

};

struct FCountDownFloat
{
    float CountDownDuration;

};

struct FCraftingCost
{
    class UResourceData* Resource;
    float Amount;

};

struct FCreditsReward
{
    FText Description;
    int32 Amount;

};

struct FCurve2DAppearance
{
    float Thickness;
    FLinearColor Tint;
    float OutlineThickness;
    FLinearColor OutlineTint;

};

struct FCustomCounter
{
    FCustomCounterOnCount OnCount;
    void CustomCounterDelegate(float Value, float NormalizedTime);
    TWeakObjectPtr<class UObject> Owner;

};

struct FCustomKeyBinding
{
    FName ActionName;
    int32 Index;
    FKey Key;

};

struct FCustomKeySetting
{
    FName SaveID;
    FText Description;
    TArray<FName> ActionNames;
    EKeyBindingAxis ActionAxis;

};

struct FCustomUsable
{
    class UUsableComponentBase* Usable;
    ECustomUsableType TerminationType;

};

struct FDailyDeal
{
    class UResourceData* Resource;
    EDealType DealType;
    int32 ResourceAmount;
    int32 Credits;
    float ChangePercent;

};

struct FDailyDealSetup
{
    class UResourceData* Resource;
    EDealType DealType;
    FIntPoint UnitsRange;
    FVector2D DiscountRangePercent;
    FVector2D ExtraValueRangePercent;

};

struct FDamageData : public FDamageDataBase
{
    class UDamageClass* DamageClass;
    TWeakObjectPtr<class AController> Instigator;
    TWeakObjectPtr<class AActor> DamageCauser;
    float DamageModifier;
    float ArmorPenetration;

};

struct FDamageDataBase
{
    class UFSDPhysicalMaterial* PhysMaterial;
    TWeakObjectPtr<class UPrimitiveComponent> Component;
    FVector HitLocation;
    int32 BoneIndex;
    class UDamageImpulse* DamageImpulseOverride;
    bool IsRadial;

};

struct FDamageModifierItem
{
    EDamageUpgrade DamageUpgrade;
    float Additive;
    float Multiplicative;

};

struct FDamageSubsystemItem
{
    class UDamageComponent* DamageComponent;

};

struct FDamageTypeDescription
{
    EDamageType Type;
    FText Name;
    FText RichDescription;
    FSoftIconWithColor Icon;
    float IconScale;

};

struct FDanceItem
{
    class UAnimSequence* DanceMove;
    class UAnimSequence* DanceMoveWithBeer;

};

struct FDeathIntroSettings
{
    float FirstPersonDuration;
    float FadeToBlackDelay;
    float FadeToBlackDuration;
    float FadeFromBlackDelay;
    float FadeFromBlackDuration;
    float ZoomOutDuration;
    float ZoomOutStartDistance;

};

struct FDebrisCapsule
{
    int32 ID;
    FVector Start;
    FVector End;
    float Radius;

};

struct FDebrisCellNoiseParameters
{
    class UDebrisCellNoise* Noise;
    int32 MinCellValue;
    int32 MaxCellValue;

};

struct FDebrisInfluence
{
    class UObject* CaveInfluencer;
    float Radius;

};

struct FDebrisItemActorItem
{
    TSubclassOf<class AActor> Actor;
    float Probability;

};

struct FDebrisStaticMesh
{
    class UStaticMesh* Mesh;
    class UMaterialInterface* Material;
    EDebrisMeshCollisionProfile CollisionProfile;
    float Probablity;
    class USoundCue* DestroyedSound;
    class UFXSystemAsset* DestroyedParticles;
    FDecalData Decal;
    bool Fragile;
    EDebrisMeshShadows CastShadows;
    bool Durable;
    int32 SpecialDebrisType;
    bool SpawnWhenCarving;
    bool OnlySpawnWhenCarving;

};

struct FDebrisVeinResource
{
    class UDebrisVeinComponent* Debris;

};

struct FDebrisWhenCarving
{
    class UDebrisInstances* Debris;

};

struct FDecalData
{
    class UMaterialInterface* DecalMaterial;
    float DecalSize;
    float DecalDepth;
    float LifeSpan;
    float StartDelay;
    float FadeInDuration;
    float FadeDuration;

};

struct FDeepDiveAnalyticsInformation
{
    bool WasDeepDive;
    int32 LastDeepDiveStage;
    bool EliteDeepDive;
    bool IsReplay;

};

struct FDeepDiveBank
{
    class UDeepDive* NormalDeepDive;
    class UDeepDive* HardDeepDive;

};

struct FDeepDiveItem
{
    int32 Progress;
    int32 Seed;
    int32 BestTime;
    TArray<FDeepDiveSaveRewardItem> Rewards;
    bool HasEverCompleted;
    TArray<FGuid> RewardsGiven;

};

struct FDeepDiveLoaderSequence
{
    TSoftObjectPtr<ULevelSequence> LevelSequence;

};

struct FDeepDiveRewardItem
{
    class USchematic* Schematic;
    int32 Stage;
    bool WasAlreadyGiven;

};

struct FDeepDiveSave
{
    FDeepDiveItem NormalSave;
    FDeepDiveItem EliteSave;

};

struct FDeepDiveSaveRewardItem
{
    FGuid RewardID;
    int32 Stage;

};

struct FDeepDiveTemplateItem
{
    class UMissionTemplate* mission;
    int32 Probability;
    TArray<class UMissionDuration*> AllowedDurations;
    TArray<class UMissionComplexity*> AllowedComplexities;
    bool CanOnlyAppearOnce;
    bool CanOnlyAppearOncePerDeepDiveSet;

};

struct FDeepDiveTesterItem
{
    class UMissionComplexity* Complexity;
    class UMissionDuration* Duration;
    class UMissionTemplate* mission;
    TSubclassOf<class UObjective> DeepDiveObjective;
    class UMissionMutator* Mutator;
    class UMissionWarning* Warning;

};

struct FDeepRepPath
{
    FVector PathBase;
    uint8 PathLength;
    EDeepMovementState State;
    uint8 StateBits;
    FVector PathOffsets;

};

struct FDefaultPickaxeParts
{
    TMap<class EPickaxePartLocation, class UPickaxePart*> Parts;

};

struct FDelayedActorSwitchData
{
    TWeakObjectPtr<class AActor> Actor;
    uint8 IsActive;
    uint8 IsExternalActor;
    uint8 IsUnEquipCalled;

};

struct FDelegateStruct
{
};

struct FDestructableBodypartItem
{
    uint8 MaterialIndex;
    TArray<FName> ArmorBones;

};

struct FDialogStruct
{
    bool Enabled;
    FText Text;
    TSoftObjectPtr<USoundBase> audio;
    EDialogRestriction Restriction;
    float Weigth;
    bool bIsValidEntry;

};

struct FDiscordEoMData
{
    FString nick;
    FString UserId;

};

struct FDiscordFSDRichPresence
{
    FString State;
    FString details;
    FString matchSecret;
    FString joinSecret;
    FString partyId;
    FString smallImageText;
    FString LargeImageText;
    int32 startTimestamp;
    int32 partySize;
    EDiscordBiomeType BiomeType;
    EDiscordMissionType MissionType;
    bool bIsPureSolo;

};

struct FDiscordFactionRoleRequest
{
    FString UserId;
    int32 FactionID;
    FString SteamTicket;

};

struct FDiscordRewardNotification
{
    FText Text;
    class UTexture2D* Icon;
    FLinearColor IconColor;
    FString ID;

};

struct FDiscordServerData
{
    int32 presenceCount;
    int32 memberCount;

};

struct FDiscordServerInviteData
{
    FString code;
    int32 approximate_presence_count;
    int32 approximate_member_count;
    FDiscordServerInviteGuildData guild;

};

struct FDiscordServerInviteGuildData
{
    FString banner;
    FString Icon;
    FString splash;
    FString ID;
    FString Name;
    FString Description;

};

struct FDiscordUserInfoRequest
{
    FString UserId;

};

struct FDisplayContent
{
    class UAnimationAsset* Idle;
    class UAnimationAsset* React;
    class USkeletalMesh* Mesh;
    FVector PivotOffset;
    FRotator RotationOffset;
    FVector Scale;
    TArray<FText> Description;

};

struct FDormantComponentState
{
    TWeakObjectPtr<class UActorComponent> Component;
    TEnumAsByte<ECollisionEnabled::Type> Collision;
    FName CollisionProfileName;
    uint8 Active;
    uint8 Visible;

};

struct FDoubleDrillDamageItem
{
    TWeakObjectPtr<class UPrimitiveComponent> Target;
    FVector_NetQuantize Location;
    FVector_NetQuantizeNormal Normal;
    class UFSDPhysicalMaterial* Material;
    FName BoneName;
    uint8 BoneIndex;

};

struct FDownCameraSettings
{
    TWeakObjectPtr<class APlayerCharacter> Target;
    int32 TargetIndex;
    float MinPitch;
    float MaxPitch;
    float SmoothSpeed;

};

struct FDrillOperationData
{
    int32 OperationNumber;
    FVector HitPos;
    FVector Dir;
    FVector CarveSize;
    float CarveNoise;

};

struct FDrinkSave
{
    TSet<FGuid> UnlockedDrinks;
    bool HasUnlockedSpecial;

};

struct FDrinkableBarSlot
{
    FVector WorldLocation;
    TWeakObjectPtr<class ADrinkableActor> DrinkableActor;

};

struct FDroneLightSetting
{
    FColor Color;
    float Intensity;
    float Radius;

};

struct FDropInfo
{
    FVector From;
    FVector To;
    bool HasLanded;

};

struct FEliminationDescriptors
{
    TArray<class UEnemyDescriptor*> Descriptors;

};

struct FEliminationTarget
{
    TArray<class AFSDPawn*> Targets;

};

struct FEliteEnemyBan
{
    FInt32Interval AffectedPlayerCount;
    class UMissionTemplate* Template;

};

struct FEliteEnemyEntry
{
    float HeroChance;
    TSubclassOf<class UStatusEffect> StatusEffect;
    TArray<class TSubclassOf<UActorComponent>> ComponentsToAdd;
    bool OverrideHealthScaling;
    TArray<FEliteEnemyBan> Bans;
    EEnemyHealthScaling HealthScalingOverride;

};

struct FEmitterConnection
{
    FName EmitterName;
    FName VariableName;

};

struct FEncounterManagerItem
{
    TArray<FManagedEncounterItem> ManagedEcnounterItems;
    TArray<FPrePlacedEncounterItem> PrePlacedEncounterItems;
    int32 ID;
    bool IsRoom;
    FEncounterManagerItemCallback Callback;
    void EnemySpawnedDelegate(class APawn* enemy);

};

struct FEncounterRareCritterItem
{
    class URareCritterDescriptor* Critter;
    float Chance;

};

struct FEncounterSpecialItem
{
    class UEnemyDescriptor* enemy;
    float BaseChance;
    bool CanSpawnInDeepDive;

};

struct FEndMissionResult
{
    FPlayerProgress PreviousPlayerProgress;
    FPlayerProgress PlayerProgress;
    FCharacterProgress PreviousCharacterProgress;
    FCharacterProgress CharacterProgress;
    class USchematic* RewardedSchematic;
    bool bReadyForUse;

};

struct FEnemyAttackDescription
{
    FText Name;
    EEnemyAttackType range;
    EDamageType DamageType;

};

struct FEnemyDebris
{
    float InfluenceRange;
    TArray<class UDebrisBase*> Debris;

};

struct FEnemyGroupDescriptorItem
{
    class UEnemyDescriptor* EnemyDescriptor;

};

struct FEnemyGroupDescriptorSpawnItem
{
    class UEnemyDescriptor* enemy;
    int32 Count;

};

struct FEnemyMinersManualStats
{
    int32 Health;
    int32 Damage;
    int32 Speed;

};

struct FEnemySpawnItem
{
    class UEnemyDescriptor* enemy;
    int32 Count;
    float VeteranComposition;

};

struct FEnhancedTrace
{
    TWeakObjectPtr<class UHitscanBaseComponent> Component;
    TWeakObjectPtr<class APlayerCharacter> Instigator;
    FVector Origin;
    FVector Direction;
    FVector HitPoint;

};

struct FEquippedActorData
{
    class AActor* Actor;
    uint8 IsExternalActor;

};

struct FEquippedVanity
{
    TArray<class UVanityItem*> Vanity;
    class UVanityItem* SelectedArmorMaterial;

};

struct FEscortMuleExtractorSlot
{
    EEscortExtractorState ExtractorState;
    EEscortExtractorState LastState;
    class USceneComponent* AttachPoint;
    class UInstantUsable* Usable;
    class UWidgetComponent* Widget;

};

struct FEscortMuleMovementState
{
    FTransform TargetTransform;
    FVector Velocity;
    FQuat AngularVelocity;

};

struct FEscortMulePath
{
    TArray<FVector> Path;

};

struct FEventRewardSave
{
    TMap<class FGuid, class FEventRewardSaveItem> PendingRewards;

};

struct FEventRewardSaveItem
{
    FGuid CategoryID;
    TArray<FGuid> ClassOptions;

};

struct FExampleStruct
{
    float Field;

};

struct FExposableFloat
{
    float Value;
    bool Exposed;
    FText Description;
    float MinValue;
    float MaxValue;

};

struct FExposedFloat : public FExposedProperty
{
    FName PropertyName;
    FText Description;
    float MinValue;
    float MaxValue;

};

struct FExposedProperty
{
};

struct FFSDChatMessage
{
    EChatMessageType MsgType;
    FString Sender;
    EChatSenderType SenderType;
    FString Msg;
    FUniqueNetIdRepl SenderNetID;

};

struct FFSDDeepDiveResponse
{
    uint32 SeedV2;
    FString ExpirationTime;

};

struct FFSDEventRewardsSave
{
    TSet<FGuid> EventsSeen;
    TSet<FGuid> PopupsSeen;

};

struct FFSDEventsResponse
{
    TArray<FString> ActiveEvents;
    TArray<FBackendNotification> Notifications;

};

struct FFSDLocalizedChatMessage
{
    EChatMessageType MsgType;
    FString Sender;
    FText Msg;
    TArray<FText> Arguments;

};

struct FFSDPlatformHelper
{
};

struct FFSDSeasonExpiryResponse
{
    FString SeasonExpirationTimeSteam;
    FString SeasonExpirationTimeSony;
    FString SeasonExpirationTimeGDK;

};

struct FFSDServerListEntryModModel
{
    FString Name;
    int32 Category;
    FString Version;

};

struct FFSDServerListEntryModel
{
    FString ID;
    FString DRG_SERVERNAME;
    FString DRG_SERVERNAME_SAN;
    int32 DRG_GLOBALMISSION_SEED;
    int32 DRG_MISSION_SEED;
    int32 DRG_DIFF;
    int32 DRG_GAMESTATE;
    int32 DRG_PWREQUIRED;
    int32 DRG_PRIVATE;
    int32 DRG_NUMPLAYERS;
    FString DRG_CLASSES;
    int32 DRG_CLASSLOCK;
    int32 DRG_FULL;
    FString DRG_REGION;
    FString DRG_START;
    int32 DRG_VERSION;
    FString HostUserID;
    FString DRG_MISSIONSTRUCTURE;
    FString P2PAddr;
    int32 P2PPORT;
    float Distance;
    TArray<FFSDServerListEntryModModel> Mods;

};

struct FFSDServerListRequest
{
    FString AuthenticationTicket;
    FString IgnoreId;
    int32 Distance;
    int32 DRG_PWREQUIRED;
    FString DRG_REGION;
    int32 DRG_VERSION;
    int32 DifficultyBitset;
    int32 MissionSeed;
    int32 GlobalMissionSeed;
    FString SearchString;
    bool DeepDive;
    FString Platform;

};

struct FFSDServerListResponse
{
    TArray<FFSDServerListEntryModel> Lobbies;

};

struct FFSDServerSearchOptions
{
    ESteamServerJoinStatus JoinStatus;
    ESteamSearchRegion SearchRegion;
    TArray<class UDifficultySetting*> Difficulties;
    bool DeepDive;
    FString SearchString;
    int32 MissionSeed;
    int32 GlobalMissionSeed;
    TArray<EGameType> GameTypes;

};

struct FFSDServicesEndpoints
{
};

struct FFSDSteamServerListRequest : public FFSDServerListRequest
{
    FString SteamTicket;
    FString SteamPingLoc;
    TArray<int32> GameTypes;

};

struct FFSDTagsAttitude
{
    FGameplayTag Friendly;
    FGameplayTag Neutral;
    FGameplayTag Hostile;

};

struct FFSDTagsRoot
{
    FFSDTagsAttitude Attitude;

};

struct FFSDTranslationProgress
{
    FString CodeName;
    int32 TranslatedPercent;

};

struct FFSDWeeklySeedResponse
{
    uint32 Seed;
    FString ExpirationTime;

};

struct FFacilityGeneratorEnounter
{
    TArray<class UEnemyDescriptor*> Enemies;
    float Difficulty;
    FRandInterval Diversity;

};

struct FFadeData
{
    bool bEnabled;
    bool bShowDebugOutput;
    TSubclassOf<class UFSDLevelLoadingPersistentWidget> WidgetType;
    class UFSDLevelLoadingPersistentWidget* Widget;
    float CurrentFade;
    float TargetFade;
    float FadeSpeed;
    float Delay;
    bool bFadeWorldOnly;
    bool bCapFramerate;
    bool bToSpaceRig;
    class UTexture* LoadingImage;
    FString DebugMsg;

};

struct FFakeMoveState
{
    FVector Pos1;
    FVector Pos2;
    FVector Vel;

};

struct FFakeMoverPropulsion
{
    float Speed;
    float AirAcceleration;
    float AirDeceleration;
    float GroundAcceleration;
    float GroundDeceleration;

};

struct FFakeMoverState
{
    float TickRate;
    float TickTime;
    FVector PrevPos;
    FVector NextPos;
    FVector PrevSurfaceNormal;
    FVector NextSurfaceNormal;
    float AccumulatedTime;
    class AActor* Target;
    FVector Velocity;
    bool NearSurface;
    float SignedDistToSurface;

};

struct FFakeMoverTarget
{
    float InfluenceDistance;
    float TargetDistance;
    float GetCloserAirAcceleration;
    float GetAwayAirAcceleration;
    float GetCloserGroundAcceleration;
    float GetAwayGroundAcceleration;
    float MinDistance;

};

struct FFakeSawMover
{
    FVector PrevPos;
    FVector NextPos;
    FVector Velocity;
    FPlane Plane;
    class UCurveFloat* VelOverTime;
    float SpeedCof;
    float TickRate;
    float TickTime;
    float AccumulatedTime;
    float TotalTime;
    bool Moving;
    float GravityTimer;

};

struct FFlareMeta
{
    TWeakObjectPtr<class AActor> Actor;
    float Inhibit;
    float Radius;
    float InvRadius;
    FVector Pos;
    bool Moving;

};

struct FFloatPerkEffect
{
    class UFloatPerkActivation* PerkActivation;
    FText FormattedDescription;
    TArray<FFloatPerkRankValue> RankValues;

};

struct FFloatPerkRank
{
    int32 Tier;
    int32 Cost;

};

struct FFloatPerkRankValue
{
    int32 RankIndex;
    float Value;

};

struct FForgingPendingReward
{
    int32 Level;
    int32 Seed;

};

struct FForgingResult
{
    bool LevelledUp;
    int32 RewardLevel;
    int32 RewardSeed;

};

struct FForgingSave
{
    int32 XP;
    TArray<FForgingPendingReward> PendingMasteryRewards;

};

struct FFormation
{
    class UFormationData* FormationData;

};

struct FFormationDataItem
{
    FVector Direction;
    float Distance;

};

struct FFormationID
{
};

struct FFriendInfo
{
    FString DisplayName;
    FString RealName;
    FString UserId;
    bool IsOnline;
    bool IsPlaying;
    bool IsPlayingThisGame;
    bool IsJoinable;
    FString sessionId;
    bool HasVoiceSupport;
    FString PresenceStatus;

};

struct FGDAudio
{
    TSoftObjectPtr<USoundAttenuation> FirstPersonHitscanAttenuationOverride;
    TSubclassOf<class AFSDReverbVolume> ReverbActor;
    TSubclassOf<class UDynamicReverbComponent> DynamicReverbClass;
    float SmallCaveRadius;
    float MediumCaveRadius;
    float LargeCaveRadius;
    float FirstPersonPriority;
    float ThirdPersonPriority;

};

struct FGDCharacterRetirement
{
    TMap<class UPlayerCharacterID*, class TSubclassOf<UCampaign>> Campaigns;
    TMap<class UPlayerCharacterID*, class FRetirementCostItem> RetirementCost;
    TArray<float> CreditsCostMultipliers;
    TArray<float> ResourceCostMultipliers;

};

struct FGDDamageClasses
{
    class UDamageClass* Falling;
    class UDamageClass* Fire;
    class UDamageClass* Burn;
    class UDamageClass* Heat;
    class UDamageClass* Disintegrate;
    class UDamageClass* Physical;
    class UDamageClass* Kinetic;
    class UDamageClass* Explosive;
    class UDamageClass* Cold;
    class UDamageClass* Ice;
    class UDamageClass* Corrosive;
    class UDamageClass* Infectious;

};

struct FGDDifficulty
{
    TArray<class UDifficultySetting*> DifficultySettings;

};

struct FGDGameStatsTracking
{
    FGameplayTagContainer TotalEnemyKillsFilter;

};

struct FGDItemCategoryIDs
{
    class UCategoryID* OverclockID;
    class UCategoryID* ItemSkinID;
    class UCategoryID* VanityID;
    class UCategoryID* PickaxePartID;
    class UCategoryID* WeaponID;
    class UCategoryID* CraftingID;
    class UCategoryID* ForgeID;
    class UCategoryID* BoscoSkinID;

};

struct FGDKWinOptionsInSaveGame
{
    bool SaveGameOptionsValid;
    int32 ScreenMode;
    uint32 ResolutionSizeX;
    uint32 ResolutionSizeY;
    bool bUseVSync;
    float FrameRateLimit;
    float Sharpening;
    int32 AntiAliasingType;
    float Gamma;
    int32 OverallQuality;
    float ResolutionScale;
    int32 TextureQuality;
    int32 ShadowQuality;
    int32 AntiAliasingQuality;
    int32 PostProcessingQuality;
    int32 EffectsQuality;
    int32 ViewDistanceQuality;
    bool PreventLatejoinCharacterDuplication;
    FString LocalGameServerName;
    FString CurrentAudioOutputDeviceId;
    bool UseDefaultAudioOutputDevice;

};

struct FGDMilestones
{
    TArray<class UMilestoneAsset*> Milestones;

};

struct FGDMissionStats
{
    class UMissionStat* TimePlayed;
    class UMissionStat* DistanceTravelled;
    class UMissionStat* EnemiesKilled;
    class UMissionStat* MineralsMined;
    class UMissionStat* MissionCompleted;
    class UMissionStat* SoloMissionCompleted;
    class UMissionStat* SecondaryMissionCompleted;
    class UMissionStat* CharacterLevelUp;
    class UMissionStat* VanityItemsBought;
    class UMissionStat* ItemUpgradesBought;
    class UMissionStat* CosmeticMasteryLevelledUp;
    class UMissionStat* DrinkablesConsumed;
    class UMissionStat* DrinkableRoundsOrdered;
    class UMissionStat* BartenderCreditsTipped;
    class UMissionStat* CampaignMissionsCompleted;
    class UMissionStat* CampaignsCompleted;
    class UMissionStat* TimesDowned;
    class UMissionStat* TimesPassedOut;
    class UMissionStat* WeaponsUnlockedStat;
    class UMissionStat* SeasonEventsCompleted;
    class UMissionStat* SeasonChallengesCompleted;
    class UMissionStat* DeepDivesCompleted;
    class UMissionStat* EliteDeepDivesCompleted;
    class UMissionStat* CosmeticsCrafted;
    class UMissionStat* WeaponSkinsCrafted;
    class UMissionStat* WeaponOverclocksCrafted;
    class UMissionStat* CraftingMasteryLevel;
    class UMissionStat* DefendBlackBoxObjectivesCompleted;
    class UMissionStat* RepairMiniMuleObjectivesCompleted;
    class UMissionStat* DeepDiveCompletedBestTime;
    class UMissionStat* EliteDeepDiveCompletedBestTime;
    class UMissionStat* SpecialBeersUnlocked;
    class UMissionStat* JettyBootCreditsSpent;
    TArray<class UMissionStat*> AllMissionStats;
    TMap<class UPlayerCharacterID*, class UMissionStat*> CharacterMissionsCompleted;

};

struct FGDPerks
{
    TArray<class UPerkAsset*> PerkAssets;
    TArray<int32> RequiredClaimsPerTier;
    class UFloatPerkAsset* IronWill;
    class UFloatPerkAsset* DashPerk;
    class UFloatPerkAsset* MarathonPerk;
    class UFloatPerkAsset* ShieldLink;
    class UFloatPerkAsset* Bezerk;
    class UFloatPerkAsset* JumpBoots;
    class UFloatPerkAsset* ImpactCompensators;
    class UFloatPerkAsset* BeastMaster;
    class UFloatPerkAsset* DownedBomb;
    class UFloatPerkAsset* FieldMedic;
    class UFloatPerkAsset* HeightenedSenses;
    class UFloatPerkAsset* HoverBoots;
    class UFloatPerkAsset* ActivePerkSlots;
    class UFloatPerkAsset* PassivePerkSlots;

};

struct FGDPlayerAndCharacterProgression
{
    TArray<TSoftClassPtr<APlayerCharacter>> RankedHeroClasses;
    TArray<TSoftClassPtr<APlayerCharacter>> TestHeroClasses;
    TArray<class TSubclassOf<APlayerCharacter>> LoadedClasses;
    TArray<FText> PlayerRankNames;
    TArray<int32> CharacterXPLevels;
    TMap<class FGuid, class UPlayerCharacterID*> PlayerCharacterIDs;

};

struct FGDResources
{
    class UResourceData* CreditsResource;
    class UResourceData* Fashionite;
    class UResourceData* MOMResource;
    class UResourceData* GoldResource;
    class UResourceData* NitraResource;
    class UResourceData* HollomiteResource;
    class UResourceData* MagniteResource;
    class UResourceData* NeromiteResource;
    class UResourceData* QuantriteResource;
    class UResourceData* UmaniteResource;
    class UResourceData* CropaniteResource;
    class UResourceData* DystrumResource;
    class UResourceData* IronResource;
    class UResourceData* EnorResource;
    class UResourceData* BismorResource;
    class UResourceData* OilShaleResource;
    class UResourceData* Barly1;
    class UResourceData* Barly2;
    class UResourceData* Barly3;
    class UResourceData* Barly4;
    class UGemResourceData* JadizResource;
    class UGemResourceData* BittergemResource;
    class UGemResourceData* MotherlodeGemResource;
    class UResourceData* RedSugarResource;
    class UResourceData* BlankSchematics;
    TArray<class UResourceData*> CraftingResources;
    TArray<class UResourceData*> AllResources;
    float FashioniteToCredits;
    float FashioniteToMinerals;

};

struct FGDStats
{
    class UPawnStat* MaxAmmo;
    class UPawnStat* MaxShields;
    class UPawnStat* ShieldRegenerationRate;
    class UPawnStat* MaxHealth;
    class UPawnStat* DamageResistance;
    class UPawnStat* FireResistance;
    class UPawnStat* ColdResistance;
    class UPawnStat* MeleeAttackDamage;
    class UPawnStat* MovementSpeed;
    class UPawnStat* AirControl;
    class UPawnStat* SprintSpeed;
    class UPawnStat* CarryingSpeedModifier;
    class UPawnStat* ReviveSpeed;
    class UPawnStat* DepositSpeed;
    class UPawnStat* RessuplySpeed;
    class UPawnStat* RedSugarHeal;
    class UPawnStat* CarryingCapacity;
    class UPawnStat* ZiplineSpeed;
    class UPawnStat* ZiplineDownwardsBoost;
    class UPawnStat* SlideDownIce;
    class UPawnStat* FriendlyFire;
    class UPawnStat* DamageFromPlayers;
    class UPawnStat* DamageBonus;
    class UPawnStat* FlareThrowingStrength;
    class UPawnStat* CaveLeechSense;
    class UPawnStat* MorkiteMining;
    class UPawnStat* GoldMining;
    class UPawnStat* RockMiningStrength;
    class UPawnStat* DirtMiningStrength;
    class UPawnStat* ResourceMiningStrength;
    class UPawnStat* PowerAttackCooldownRate;
    class UPawnStat* ImpactCompensation;
    class UPawnStat* MovementSpeedPenalty;
    class UPawnStat* MovementSpeedPenaltyReduction;
    class UPawnStat* MovementSpeedEnvironmentalPenalty;
    class UPawnStat* MovementSpeedEnvironmentalPenaltyReduction;
    class UPawnStat* CarriableThrowing;
    class UPawnStat* HoverBootsDuration;
    class UPawnStat* ExplodeOnDeath;
    class UPawnStat* CritChance;
    class UPawnStat* CritDamageBonus;

};

struct FGDTerrainTypes
{
    class UTerrainType* Rock;
    class UTerrainType* Dirt;

};

struct FGMMutatorItem
{
    TArray<class UMutator*> Mutators;

};

struct FGVisibilityGroups
{
    TSet<UHUDVisibilityGroup*> AllGroups;
    class UHUDVisibilityGroup* EnemyHealth;

};

struct FGameActivitySubTask
{
    FString SubActivityId;

};

struct FGameDLCSave
{
    TSet<FGuid> AnnouncedIDs;

};

struct FGearStatEntry
{
    FText Text;
    FText Value;
    FText BaseValue;
    FText UpgradeValue;
    EItemPreviewStatus PreviewStatus;

};

struct FGemResourceAmount
{
    class UGemResourceCreator* GemCreator;
    int32 Amount;

};

struct FGenerateIconInfo
{
    EGeneratorIconType IconType;
    class UPickaxePart* PickaxePart;
    FPickaxeSet PickaxeSet;
    EPickaxePartLocation PickaxePartLocation;
    class UItemSkin* ItemSkin;
    class UVanityItem* Item;
    class UPlayerCharacterID* Character;
    FVector2D Size;
    bool bShowCloseUp;

};

struct FGeneratedDebris
{
    TMap<class UDebrisBase*, class UObject*> Debris;
    bool IsValid;

};

struct FGeneratedDebrisItem
{
    class UDebrisBase* Debris;
    class UObject* Influencer;

};

struct FGeneratedInfluenceSet
{
    class UObject* CaveInfluencer;
    int32 NetworkID;
    TArray<FCaveInfluence> CaveInfluences;

};

struct FGeneratedInfluenceSets
{
    TArray<FGeneratedInfluenceSet> InfluenceSets;
    bool IsValid;

};

struct FGeneratedInstantCarvers
{
    TArray<FLevelCarverPass> LevelCarverPasses;

};

struct FGeneratedMissionGroup
{
    TArray<class UGeneratedMission*> AvailableMissions;
    bool OptedOutOfSeasonContent;

};

struct FGeneratedMissionSeed
{
    int32 Seed;
    int32 GlobalSeed;
    class UBiome* Biome;
    class UMissionTemplate* Template;
    class UMissionComplexity* ComplexityLimit;
    class UMissionDuration* DurationLimit;
    class UMissionMutator* Mutator;
    TArray<class UMissionWarning*> Warnings;
    TArray<class UFSDEvent*> ActiveEvents;
    EMissionStructure MissionStructure;

};

struct FGeneratedRoom
{
    class UTerrainMaterial* Material;
    TArray<FRoomLine> Lines;
    TArray<FPillar> Pillars;
    TArray<FRoomBox> BoxCarvers;
    TArray<FRoomBox> BoxFillers;
    TArray<FResourceLocation> ResourceLocations;
    TArray<FRoomEntrance> Entrances;
    TArray<FRoomItem> RoomItems;
    TArray<FTriggerItem> TriggerItems;

};

struct FGliderAnimSync
{
    float Time;
    float AnimAlphaSync;
    FVector VelocityPercent;
    bool DownUpBlendBool;
    bool RightLeftBlendBool;
    float VerticalAddBlend;
    float HorizontalAddBlend;

};

struct FGooPuddleStatusEffectTrigger
{
    TArray<class UDamageClass*> Trigger;
    TSubclassOf<class UStatusEffect> NewStatusEffect;

};

struct FGrabAvoidClassEntry
{
    TSubclassOf<class AActor> ActorClass;
    float DistanceToKeep;

};

struct FGraplingGunState
{
    FVector_NetQuantize TargetLocation;
    uint8 IsGrapling;

};

struct FGrenadeExplodeOperationData
{
    int32 OperationNumber;
    FVector HitPos;
    FVector Normal;
    float NormalOffset;
    float NormalSqueeze;
    float Radius;
    float Noise;
    float BurnThickness;
    bool UseBulletBurntMaterial;
    bool DissolvePlatforms;
    uint32 OverrideBurntMaterialHandle;

};

struct FGuntowerModuleLevel
{
    TArray<class TSubclassOf<AGuntowerModule>> PossibleModules;
    bool PreventDuplication;

};

struct FHUDElementData
{
    EHUDVisibilityMode Mode;
    int32 Version;

};

struct FHUDElements
{
    FHUDElementData OnScreenHelp;
    FHUDElementData EnemyHealth;
    FHUDElementData RadarDepth;
    FHUDElementData PlayerHealthShield;
    FHUDElementData PlayerNameClassIcon;
    FHUDElementData PlayerItems;
    FHUDElementData PlayerResources;
    FHUDElementData WeaponInfo;
    FHUDElementData Grenades;
    FHUDElementData FlashLight;
    FHUDElementData Flares;
    FHUDElementData Crosshair;
    FHUDElementData Objectives;
    FHUDElementData TeamDisplay;
    FHUDElementData SentryGunDisplay;
    FHUDElementData VersionNumber;

};

struct FHUDVisibilityRegisteredWidget
{
    TWeakObjectPtr<class UWidget> Widget;

};

struct FHackingUsableState
{
    bool bIsHacked;
    TWeakObjectPtr<class AHackingToolItem> BeingHackedByItem;
    TWeakObjectPtr<class APlayerCharacter> HackedBy;

};

struct FHandleRotationOptions
{
    bool HandlePitch;

};

struct FHealthBarLooks
{
    FLinearColor HealthColor;
    FLinearColor DamageColor;

};

struct FHealthRegenerationParams
{
    bool bIsRegenerating;
    float DelayAfterDamage;
    float HealthPerSecond;
    float TargetHealthRatio;

};

struct FHeatSource
{
    float Temperature;
    int32 Intensity;

};

struct FHeightenedSenseTracker
{
    TWeakObjectPtr<class AActor> Actor;
    TWeakObjectPtr<class UHealthComponentBase> HealthComponent;
    TScriptInterface<class IAttackingPointInterface> AttackingPoint;

};

struct FHeroInfo
{
    FText HeroName;
    class UTexture2D* HeroIcon;
    class UTexture2D* SmallHeroIcon;
    class UTexture2D* HeroFullSizeImage;
    FLinearColor HeroColor;
    FText HeroShortDescription;
    FText HeroLongDescription;
    FText SwitchToMessage;

};

struct FHitscanDelayedImpact
{
    class USoundCue* ImpactSound;
    class USoundCue* FirstPersonImpactSound;

};

struct FHoldButton
{
    FText HoldingText;
    float HoldStartTime;
    float HoldDuration;

};

struct FHolidayMeshItems
{
    TArray<class USkeletalMeshComponent*> HolidayMeshComponents;

};

struct FHookData
{
    FVector_NetQuantize TargetLocation;
    bool IsExtending;

};

struct FIRandRange
{
    int32 Min;
    int32 Max;

};

struct FInfectionPoint
{
    bool IsInfected;
    bool IsVacuumed;

};

struct FInfluenceMap
{
    TMap<class UObject*, class FCaveInfluenceSet> CaveInfluences;

};

struct FInfluenceSphere
{
    class UCaveInfluencer* Influencer;
    float Radius;

};

struct FInputDirectionSet
{
    TArray<EThawInputDirection> Directions;
    int32 InputCount;
    bool IsSequence;
    int32 MaxSubsequentDuplicates;

};

struct FInputDisplay
{
    EInputInteraction Interaction;
    FText InputText;
    FLinearColor TextTint;
    class UTexture2D* Icon;
    bool IconTintable;

};

struct FInputTranslation
{
    FInputTranslationEntry Default;
    bool bControllerOverride;
    FInputTranslationEntry ControllerOverride;

};

struct FInputTranslationEntry
{
    EInputInteraction Interaction;
    FName InputName;
    int32 Axis;

};

struct FInputTranslationTable
{
    TMap<class FName, class FInputTranslation> Entries;

};

struct FItemAnimationItem
{
    class UAnimMontage* FP_CharacterMontage;
    class UAnimMontage* TP_CharacterMontage;
    class UAnimMontage* ItemMontage;

};

struct FItemLoadout
{
    FGuid PrimaryWeapon;
    FGuid SecondaryWeapon;
    FGuid TraversalTool;
    FGuid ClassTool;
    FGuid Armor;
    FGuid Flare;
    FGuid MiningTool;
    FGuid Grenade;
    int32 iconIndex;

};

struct FItemLoadoutAnimations
{
    class UAnimMontage* Loadout;
    TArray<class UAnimSequence*> Loadout_IdleBreaks;

};

struct FItemNotificationInfo
{
    int32 NotificationFlags;

};

struct FItemRefundListItem
{
    FString Name;
    TMap<class FGuid, class FItemRefundResourceItem> Resources;
    float CreditCost;

};

struct FItemRefundResourceItem
{
    FString Name;
    float Amount;

};

struct FItemSkinOwners
{
    TArray<class UItemID*> Items;

};

struct FItemUINotifications
{
    TArray<FUINotificationItem> UINotifications;
    TSet<FGuid> UINotificationSet;
    class UFSDSaveGame* SaveGame;

};

struct FItemUpgradeSelection
{
    FGuid WeaponID;
    TArray<FGuid> EquippedUpgrades;
    TArray<FGuid> PermanentUpgrades;
    FGuid EquippedOverclock;
    TArray<FGuid> EquippedSkins;
    bool OverclockingUnlocked;
    FGuid EquippedSkinColor;
    FGuid EquippedSkinMesh;

};

struct FItemUpgradeStatText
{
    FText StatText;
    bool IsAdventageous;

};

struct FJettyBootEventSettings
{
    TSoftObjectPtr<UTexture2D> JettyBootCharacter;
    TSoftClassPtr<UUserWidget> JettyBootArcadeOverlay;

};

struct FJettyBootNPC
{
    FString CharacterName;
    float HasPlayedChance;
    FIRandRange ScoreInterval;
    TArray<int32> StartScores;

};

struct FJettyBootSetting
{
    FIRandRange GateCount;
    FIRandRange GateSpacing;
    FIRandRange GateOpeningSize;

};

struct FJettyBootsPlayer
{
    TWeakObjectPtr<class APlayerCharacter> PlayerCharacter;
    bool bIsPlaying;

};

struct FJettyBootsReplay
{
    int32 Seed;
    FVector2D Position;
    uint8 State;
    int32 Level;
    int32 Score;
    int32 Lives;

};

struct FJettyBootsSave
{
    TArray<FJettyBootsScore> HighScores;
    TArray<FJettyBootsScore> NPC_HighScores;
    bool bInitializeNPCs;
    int32 LastHighScoreIndex;

};

struct FJettyBootsScore
{
    FString PlayerName;
    int32 Score;

};

struct FLaserPointerData
{
    FText Name;
    FText Description;
    FLinearColor Color;
    class UTexture2D* Icon;
    ELaserPointerTargetType TargetType;
    FGuid SavegameID;

};

struct FLaserPointerTarget
{
    FHitResult HitInfo;
    class AActor* Target;
    class AActor* ExtraTarget;

};

struct FLayeredNoise
{
    class UFloodFillSettings* Noise;
    float Scale;

};

struct FLerpingPercent
{
    uint8 TargetPercent;

};

struct FLevelCarverPass
{
    TArray<FLevelGenerationCarverLists> Lists;

};

struct FLevelGenerationCarver
{
    FMatrixWithExactSync Transform;
    class USTLMeshCarver* MeshCarver;
    class UStaticMesh* ConvexCarver;
    class UStaticMeshCarver* StaticMeshCarver;
    float ConvexExpensiveNoise;
    class ULevelGenerationCarverComponent* Componenet;
    CarveOptionsCellSize CarveCellSize;
    class UTerrainMaterial* TerrainMaterial;
    ECarveFilterType Filter;
    bool ToBeDiscarded;

};

struct FLevelGenerationCarverLists
{
    TArray<FLevelGenerationCarver> Carvers;

};

struct FLightStrobeChannel
{
    TWeakObjectPtr<class UPointLightComponent> Light;
    TWeakObjectPtr<class UMaterialInstanceDynamic> Mid;
    TWeakObjectPtr<class UMeshComponent> Mesh;
    FName ParamName;
    float MinIntensity;
    float MaxIntensity;
    float TimeScale;
    float MaterialMultiplier;
    FRuntimeFloatCurve StrobingCurve;
    EStrobingMode Mode;
    EStrobeMaterialMode MaterialMode;
    int32 Loops;

};

struct FLineSegmentCarverPoint
{
    FVector Position;
    float HRange;
    float VRange;
    float FloorAngle;
    float CielingNoiseRange;
    float WallNoiseRange;
    float FloorNoiseRange;

};

struct FLineSegmentFillerPoint
{
    FVector Position;
    FRandRange RandomRange;
    FRandRange RandomNoiseRange;
    FRandRange FillAmount;

};

struct FLoadoutCopy
{
    FItemLoadout ItemLoadout;
    FUpgradeLoadout UpgradeLoadout;
    FCharacterPerksSave PerkLoadout;
    FCharacterVanityLoadout VanityLoadout;

};

struct FLocalizedLanguageInfo
{
    FString EnglishName;
    FString NativeName;
    FString CodeName;
    bool CommunityTranslated;
    int32 TranslatedPercent;

};

struct FLockCounter
{
    int32 LockCount;
    TWeakObjectPtr<class AActor> LockedActor;

};

struct FLookupSessionRequest
{
    FString SessionKey;

};

struct FLookupSessionResponse
{
    bool Valid;
    FString LobbyId;
    FString P2PAddr;
    int32 P2PPORT;

};

struct FMUSTBEHERETOCOMPILE
{
};

struct FManagedEncounterItem
{
    class UEnemyDescriptor* descriptor;
    int32 Amount;

};

struct FMasteryItem
{
    int32 NeededMastery;
    TArray<class UUnlockReward*> Unlocks;

};

struct FMeltOperationData
{
    int32 OperationNumber;
    TArray<FVector> Points;
    float Radius;

};

struct FMicrowaveLense
{
    float ShotRadiusMultiplier;
    float ShotBonusDamageModifier;
    float HeatModifier;
    float RateOfFireModifier;

};

struct FMilestoneCounter
{
    FGuid KPIGuid;
    int32 Tier;

};

struct FMilestoneSave
{
    TArray<FMilestoneCounter> ClaimedKPIRewards;

};

struct FMilestoneTier
{
    float CompletionCount;
    int32 PerkPoints;

};

struct FMinersManualDescription
{
    FText Headline;
    FText RichDescription;
    class UTexture2D* ImageFront;
    class UTexture2D* ImageBackground;

};

struct FMiningPodDialogs
{
    class UDialogDataAsset* DepartingIn5Min;
    class UDialogDataAsset* DepartingIn4Min;
    class UDialogDataAsset* DepartingIn3Min;
    class UDialogDataAsset* DepartingIn2Min;
    class UDialogDataAsset* DepartingIn1Min;
    class UDialogDataAsset* DepartingIn30Sec;
    class UDialogDataAsset* DepartingIn10Sec;
    class UDialogDataAsset* DepartingIn123Sec;
    class UDialogDataAsset* Departed;
    class UDialogDataAsset* DeepDiveDeparted;

};

struct FMissionAnalyticInfo
{
};

struct FMissionBiomeItem
{
    class UBiome* Biome;
    float Rarity;

};

struct FMissionHazardSetting
{
    FText Name;
    float HazardBonus;

};

struct FMissionShoutQueueItem
{
    TSoftObjectPtr<USoundBase> AudioPtr;
    FText Text;
    class USoundBase* LoadedAudio;

};

struct FMissionShouts
{
    class UDialogDataAsset* AfterDropPodExit;
    class UDialogDataAsset* OnExitPodDescending;
    class UDialogDataAsset* OnExitPodArrived;
    class UDialogDataAsset* OnCompletion;
    class UDialogDataAsset* OnCompletion_OneOfMultiple;
    class UDialogDataAsset* OnAllReturnObjectivesCompleted;
    class UDialogDataAsset* OnDeepDiveExitPodDescending;

};

struct FMissionStatCounter
{
    FGuid PlayerClassID;
    FGuid MissionStatID;
    float Value;

};

struct FMissionStatSave
{
    TArray<FMissionStatCounter> Counters;
    bool bCharacterLevelUpFixed;
    bool bBoughtVanityItemsFixed;
    bool bBoughtEquipmentUpgradesFixed;
    bool bCampaignsCompletedFixed;
    bool WeaponUpgradesFixed;

};

struct FMissionStepDescription
{
    FText Headline;
    FText RichDescription;
    class UTexture2D* Image;

};

struct FMissionTemplateItem
{
    class UMissionTemplate* Template;
    float Rarity;

};

struct FMissionTypeDescription
{
    FText InfoHeadline;
    TArray<FSoftMissionStepDescription> Steps;

};

struct FModdingUISettings
{
    uint8 SortField;
    bool SortAscending;
    TSet<uint8> ServerFilters;
    bool bShowSandboxLabel;

};

struct FMovementModeCombo
{
    TEnumAsByte<EMovementMode> Mode;
    TEnumAsByte<EMovementCustomMode> CustomMode;

};

struct FMultiHitScanHits
{
    TArray<FMultiHitscanHit> Hits;
    TArray<class UPrimitiveComponent*> Components;
    TArray<class UFSDPhysicalMaterial*> PhysicalMaterials;

};

struct FMultiHitscanHit
{
    uint8 TargetComponentIndex;
    uint8 PhysicalMaterialIndex;
    FVector_NetQuantize HitLocation;
    FVector_NetQuantizeNormal ImpactNormal;
    uint8 BoneIndex;
    bool PlayImpactSound;
    bool SpawnDecal;

};

struct FMusicHandle
{
    int32 MusicHandle;

};

struct FNetworkConnectionInfo
{
    class AFSDPlayerController* PlayerController;
    float PacketLossIn;
    float PacketLossOut;
    float Ping;
    float Jitter;
    bool IsValid;

};

struct FNewPlayerMutator
{
    int32 MinCampaignProgress;
    int32 MaxCampaignProgress;
    TArray<class UMutator*> Mutators;

};

struct FNotificationEntry
{
    class UObject* ObjectInstance;
    TSoftClassPtr<UWindowWidget> WindowClass;

};

struct FObjectiveMissionIcon
{
    class UTexture2D* Texture;
    FLinearColor Tint;

};

struct FOptionsInSaveGame
{
    bool SaveGameOptionsValid;
    int32 ScreenMode;

};

struct FOverlapPair
{
    class APlayerCharacter* Player;
    class AActor* Overlap;

};

struct FOxygenCallback
{
    FOxygenCallbackDelegate Delegate;
    void OxygenTriggerDelegate();

};

struct FPLSResource
{
    class UResourceData* Resource;
    float AmountToGenerate;

};

struct FPartyAnalyticsInformation
{
};

struct FPathCell
{
};

struct FPathDebugNode
{
};

struct FPathObstacle
{
    FVector Position;
    float Radius;

};

struct FPawnAfflictionItem
{
    TArray<class UAfflictionEffect*> Afflictions;

};

struct FPawnStatEntriesArray : public FFastArraySerializer
{
    TArray<FPawnStatEntry> Items;
    class UPawnStatsComponent* Owner;

};

struct FPawnStatEntry : public FFastArraySerializerItem
{
    class UPawnStat* PawnStat;
    float Value;

};

struct FPendingRewards
{
    FPendingRewardsStats StartStats;
    FPendingRewardsStats EndStats;
    TArray<FCreditsReward> CreditsRewardEntries;
    int32 CreditsReward;
    TArray<FXPReward> XPRewardEntries;
    int32 XPReward;
    bool bHasData;
    bool bIsRecording;
    bool bWasRewarded;

};

struct FPendingRewardsStats
{
    TMap<UResourceData*, float> AllResources;
    TMap<UResourceData*, float> CollectedResources;
    bool PrimaryObjectiveCompleted;
    bool SecondaryObjectiveCompleted;
    float TimePlayed;
    int32 EnemiesKilled;

};

struct FPerkClaimEntry
{
    FGuid PerkID;
    int32 currentRank;

};

struct FPerkClaimsSave
{
    TArray<FPerkClaimEntry> PerkEntries;
    bool HasResetPerks2;

};

struct FPerkEquipEntry
{
    FGuid characterID;
    TArray<FGuid> PerkIDs;

};

struct FPerkUsage
{
    class UPerkAsset* Perk;
    int32 UsedCount;

};

struct FPickaxeDigOperationData
{
    int32 OperationNumber;
    FVector HitPos;
    FVector Dir;
    float DigSize;
    class AActor* Miner;

};

struct FPickaxeMeshInstance
{
    class UMeshComponent* FP_Mesh;
    class UMeshComponent* TP_Mesh;

};

struct FPickaxeSet
{
    class UPickaxePart* BladeFront;
    class UPickaxePart* OptionalBladeBack;
    class UPickaxePart* Pommel;
    class UPickaxePart* Handle;
    class UPickaxePart* Shaft;
    class UPickaxePart* Head;
    class UPickaxePart* Material;

};

struct FPillar
{
    class UFloodFillSettings* NoiseOverride;
    TArray<FWeightedLinePoint> Points;
    float NoiseScale;
    float EndcapScale;

};

struct FPillarSegment
{
    float Scale;
    float HeightOffset;

};

struct FPipelineMovementData
{
    int32 Direction;
    float Distance;
    float Speed;
    bool UpToSpeed;
    float Acceleration;
    TWeakObjectPtr<class APipelineSegment> PipelineSegment;

};

struct FPitchedUsers
{
    class APlayerCharacter* Player;
    float Timer;

};

struct FPlacementObstruction
{
    float range;
    FVector Location;

};

struct FPlanetZoneItem
{
    TArray<class UBiome*> Biomes;
    TArray<class UGeneratedMission*> missions;
    class UPlanetZone* Zone;
    bool HasSpecialEvent;
    bool WouldHaveSpecialEvent;

};

struct FPlatformComponent
{
    TSubclassOf<class UActorComponent> ComponentClass;
    EPlatformComponentCriteria Criteria;

};

struct FPlatformSpecificEventPopup
{
    EFSDTargetPlatform TargetPlatform;
    TSoftClassPtr<UFSDEventPopupWidget> PopupWidget;

};

struct FPlayerProgress
{
    int32 PlayerRank;
    int32 PlayerStars;

};

struct FPlayerSphere
{
    FVector Center;
    float Radius;
    TArray<TWeakObjectPtr<APawn>> Players;

};

struct FPlayerStatsAnalyticInfo
{
};

struct FPostDataModel
{
};

struct FPostProcessingBlendable
{
    TScriptInterface<class IBlendableInterface> Blendable;

};

struct FPrePlacedEncounterItem
{
    class UEnemyDescriptor* descriptor;
    FTransform Location;
    class AEncounterActor* EncounterActor;

};

struct FPricingTierEntry : public FTableRowBase
{
    FIRandRange CreditCost;
    FIRandRange Material1;
    FIRandRange Material2;
    FIRandRange Material3;

};

struct FProfileCategoryTiming
{
    FString CategoryName;
    float CategoryTime;

};

struct FProfileEntry
{
    TWeakObjectPtr<class UObject> Context;
    FString Category;
    float TimeSpent;

};

struct FProgressShout
{
    float ProgressStamp;
    class UDialogDataAsset* Shout;

};

struct FProjectileImpact
{
    FVector_NetQuantize Location;
    FVector_NetQuantizeNormal Normal;
    TWeakObjectPtr<class AActor> Actor;
    TWeakObjectPtr<class UPrimitiveComponent> Component;
    class UPhysicalMaterial* PhysMat;
    int32 BoneIndex;
    bool bBlockingHit;

};

struct FProjectileSpawnData
{
    TSubclassOf<class AProjectile> ProjectileClass;
    FFloatInterval HorizontalAngleOffset;
    FFloatInterval VerticalAngleOffset;
    FFloatInterval Delay;
    bool IsBallistic;

};

struct FProjectileState
{
    FVector_NetQuantize Velocity;
    FVector_NetQuantize Location;
    class USceneComponent* HomingTargetComponent;
    uint8 IsSimulating;
    uint8 IsBouncy;
    uint8 IsHoming;
    uint8 IsPenetrating;

};

struct FProjectileSwitch
{
    TSubclassOf<class AProjectileBase> ProjectileClass;
    EProjectileSwitchCriteria CriteriaType;
    float CriteriaThreshhold;

};

struct FPromotionRewardsSave
{
    int32 PendingPromotionGifts;
    TSet<FGuid> ClaimedRewards;

};

struct FProximityTriggerItem
{
    FProximityTriggerItemCallback Callback;
    void PlayerProximityDelegate(class APlayerCharacter* Player, bool enteredTrigger);

};

struct FPushPoint
{
    class USphereComponent* collider;
    class APlayerCharacter* Character;

};

struct FQueuedMontage
{
    class UAnimMontage* Montage;
    bool ForceUpdate;

};

struct FRagdollItem
{
    class AActor* Actor;
    TArray<class UMaterialInstanceDynamic*> Materials;
    class UMaterialInstanceDynamic* DropshadowMaterial;

};

struct FRandFloatInterval
{
    TArray<FRandFloatIntervalItem> Intervals;

};

struct FRandFloatIntervalItem
{
    float Weight;
    FRandRange range;

};

struct FRandInterval
{
    TArray<FRandIntervalItem> Intervals;

};

struct FRandIntervalItem
{
    float Weight;
    FIRandRange range;

};

struct FRandLinePoint
{
    FVector Location;
    FRandRange range;
    FRandRange NoiseRange;
    FRandRange SkewFactor;
    FRandRange FillAmount;

};

struct FRandRange
{
    float Min;
    float Max;

};

struct FRandomWalkCycleEntry
{
    float RandomSelectionWeight;
    FRandRange Duration;
    float CoolDown;
    float LastTimePlayed;

};

struct FRecoilImpulse
{
    float Rotation;
    FVector2D Impulse;

};

struct FRecoilSettings
{
    FRandRange RecoilRoll;
    FRandRange RecoilPitch;
    FRandRange RecoilYaw;
    bool CanRecoilDown;
    float SpringStiffness;
    float CriticalDampening;
    float Mass;

};

struct FReflectionTraceResult
{
    TArray<FScanPath> Path;
    FReflectiveHitscanHit FinalHit;

};

struct FReflectiveHitscanHit
{
    class UPrimitiveComponent* Component;
    uint8 BoneIndex;
    FName BoneName;
    FVector_NetQuantize HitLocation;
    FVector_NetQuantizeNormal ImpactNormal;
    class UFSDPhysicalMaterial* PhysMat;

};

struct FRegisterSessionRequest
{
    FString ServerName;
    int32 NumPlayers;
    FString LobbyId;
    FString P2PAddr;
    int32 P2PPORT;

};

struct FRegisterSessionResponse
{
    FString SessionKey;

};

struct FRejoinFloat
{
    FGuid ItemKey;
    FName ValueKey;
    float Value;

};

struct FRejoinInt
{
    FGuid ItemKey;
    FName ValueKey;
    int32 Value;

};

struct FRemoveFloatingIslandOperationData
{
    int32 OperationNumber;

};

struct FReplicatedCharacterData
{
    TWeakObjectPtr<class AActor> Target;
    float TemperatureEffect;
    bool bCanTakeDamage;

};

struct FReplicatedObjectives
{
    bool HasReplicated;
    TArray<class UObjective*> Objectives;

};

struct FRequiredMissionItem
{
    class UMissionTemplate* MissionTemplate;
    class UMissionComplexity* Complexity;
    class UMissionDuration* Duration;
    bool CanHaveMutators;

};

struct FResourceDebris
{
    float InfluencerRange;
    class UDebrisBase* Debris;

};

struct FResourceInitalizer
{
    class UResourceData* Resource;
    float MaxAmount;

};

struct FResourceLocation
{
    FVector Location;
    class UResourceData* Resource;
    float BaseAmount;

};

struct FResourcePouchItem
{
    class UResourceData* Resource;

};

struct FResourceSpawner
{
    class UResourceData* Resource;
    FRandFloatInterval AmountToSpawn;

};

struct FResourcesSave
{
    TMap<FGuid, float> OwnedResources;
    TMap<UResourceData*, float> Resources;

};

struct FRetirementCostItem
{
    TMap<UResourceData*, int32> RetirementCost;

};

struct FRewardTexts
{
    FText PrimaryObjective;
    FText SecondaryObjective;
    FText CountPrimaryObjectives;
    FText CountSecondaryObjectives;
    FText MineralsMinedByTeam;
    FText HostilesKilled;

};

struct FRewardsClaimed
{
    bool NormalClaimed;
    bool SpecialClaimed;

};

struct FRichTextParseResult
{
    FText SourceText;
    FString UnformattedString;
    int32 UnformattedLength;
    TArray<FRichTextToken> Tokens;

};

struct FRichTextToken
{
    FString Tag;
    FString Text;

};

struct FRoomBox
{
    FVector Position;
    FRotator_NoQuantize Rotation;
    FVector Extends;
    float NoiseRange;
    class UFloodFillSettings* Noise;

};

struct FRoomEntrance
{
    FVector Location;
    FVector Direction;
    bool IsBLocked;
    ECaveEntranceType EntranceType;
    ECaveEntrancePriority Priority;
    int32 PathObstacleID;

};

struct FRoomGeneratorGroupInstance
{
    TArray<class URoomGenerator*> Rooms;

};

struct FRoomGeneratorItem
{
    class URoomGeneratorBase* RoomGenerator;
    FVector Position;
    float Rotation;

};

struct FRoomItem
{
    TSubclassOf<class AActor> Spawnable;
    FVector Location;
    FRotator_NoQuantize Rotation;

};

struct FRoomLine
{
    class UFloodFillSettings* WallNoiseOverride;
    class UFloodFillSettings* CeilingNoiseOverride;
    class UFloodFillSettings* FloorNoiseOverride;
    bool UseDetailNoise;
    TArray<FRoomLinePoint> Points;
    TArray<FVector> RightVectors;

};

struct FRoomLinePoint
{
    FVector Location;
    float HRange;
    float VRange;
    float CielingNoiseRange;
    float WallNoiseRange;
    float FloorNoiseRange;
    float Cielingheight;
    float HeightScale;
    float FloorDepth;
    float FloorAngle;

};

struct FRoomNode : public FRoomNodeBase
{
    int32 ID;
    int32 CarvePass;
    FVector Position;
    float Radius;
    TArray<int32> EntranceIDs;
    TArray<int32> ExitIDs;
    TArray<FRoomEntrance> RoomEntrances;
    bool CanHaveEnemies;
    TArray<FGeneratedRoom> Rooms;
    float ResourceMultiplier;
    bool CanBeUsedForRoomBasedDistribution;
    float WeightedResourceAmount;
    TArray<FRoomGeneratorItem> RoomGenerators;

};

struct FRoomNodeBase
{
};

struct FRotator_NoQuantize : public FRotator
{
};

struct FRuntimeSpawnedDebris
{
    TArray<class UDebrisInstances*> DebrisInstances;
    class UDebrisMesh* DebrisMesh;

};

struct FSaveGameSnapShot
{
    TWeakObjectPtr<class UFSDSaveGame> SaveGame;
    FString Filename;
    bool IsObsolete;
    int32 VersionNumber;
    int32 Credits;
    TMap<TSubclassOf<APlayerCharacter>, int32> CharacterLevels;
    TMap<TSubclassOf<UResourceData>, int32> Resources;

};

struct FSaveGameStatePerkItem
{
    uint8 Rank;
    class UPerkAsset* Perk;

};

struct FSawFakeMoveState : public FFakeMoveState
{
    float GravityTimer;

};

struct FScaledEffect
{
    class UFXSystemAsset* ParticleSystem;
    float Scale;

};

struct FScaledMeshAfflictionTypeItem
{
    TArray<FRuntimeFloatCurve> Scalers;
    TArray<class UStaticMesh*> Meshes;
    FRandRange ScaleDelay;
    class USoundCue* StartingSound;
    class USoundCue* EndSound;
    TArray<class UFXSystemAsset*> StartParticles;
    TArray<class UFXSystemAsset*> EndParticles;

};

struct FScalingMeshAfflictionItem
{
    FName BoneName;
    FRandRange MeshScale;
    EFrozenBitsSize FrozenBitsSize;
    float ChanceToSpawn;

};

struct FScanPath
{
    FVector Start;
    FVector End;

};

struct FSchematicAnalyticInfo
{
};

struct FSchematicBankItem
{
    class USchematicPricingTier* PricingTier;
    class USchematicRarity* Rarity;
    TArray<class USchematic*> Schematics;

};

struct FSchematicGADataEntry : public FTableRowBase
{
    int32 SchematicGAID;
    FString SchematicName;

};

struct FSchematicSave
{
    FGuid PendingReward;
    bool bFirstSchematicMessageShown;
    TArray<FGuid> ForgedSchematics;
    TArray<FGuid> OwnedSchematics;
    int32 SkinFixupCounter;

};

struct FSchematicType
{
    TSoftObjectPtr<UTexture2D> Icon;
    FLinearColor IconTint;
    TSoftObjectPtr<UTexture2D> Frame;
    FLinearColor FrameTint;

};

struct FSeasonEvent
{
    class USeasonEventData* Event;
    int32 Count;

};

struct FSeasonLevel
{
    class UReward* Reward;
    class UReward* specialReward;

};

struct FSeasonMissionResult
{
    int32 XPFromMission;
    int32 XPFromChallenges;
    int32 XPFromRewards;
    float XPMultiplier;
    int32 TokenGain;
    bool LevelIncreased;
    TArray<FChallengeInfo> UpdatedChallenges;
    TArray<FSeasonEvent> CompletedEvents;
    class UTexture2D* EndScreenImage;
    class UTexture2D* EndScreenResourceIcon;

};

struct FSeasonSave
{
    TMap<class FGuid, class FSeasonSaveEntry> Seasons;

};

struct FSeasonSaveEntry
{
    int32 CountSeasonContentDisabled;
    int32 CountSeasonContentReenabled;
    int32 XP;
    int32 Tokens;
    TArray<FRewardsClaimed> RewardsClaimed;
    bool bSeasonCompletedAnnounced;
    bool HasClaimedAllRewards;
    int32 RewardsClaimedAfterMaxLevel;
    TMap<int32, bool> NodesBought;
    TArray<FChallengeSaveInfo> ActiveChallenges;
    FDateTime LastNewChallengeGiven;
    FDateTime LastChallengeReroll;
    TMap<FGuid, int32> CompletedSpecialChallenges;
    int32 ClaimedScripChallenges;
    int32 PlagueHeartsUsed;
    float TimePlayedAtSeasonStart;
    float ChallengesCompletedAtSeasonStart;
    bool OptedOutOfSeasonContent;

};

struct FSeasonalEventEntry
{
    class USpecialEvent* SpecialEvent;
    TArray<class UMissionTemplate*> BannedMissions;
    TArray<class UMutator*> BannedMutators;
    int32 RequiredMainCampaignProgress;

};

struct FSeasonalEventEntryChance
{
    class USpecialEvent* SpecialEvent;
    float SpawnChance;
    TArray<class UMissionTemplate*> BannedMissions;
    TArray<class UMutator*> BannedMutators;

};

struct FSentryGunMuzzleSetup
{
    FName SocketName;
    class UAnimMontage* FireMontage;

};

struct FSessionUpdateRequest
{
    FString SessionKey;
    int32 NumPlayers;

};

struct FSessionUpdateResponse
{
    bool success;

};

struct FShardStage
{
    TArray<class UStaticMesh*> Shards;

};

struct FShotMultiplier
{
    float Undercharge;
    float Overcharge;
    bool TriBurst;

};

struct FSimpleObjectInfoData
{
    FText InGameName;
    FText InGameDescription;
    class UDialogDataAsset* LookAtShout;
    class UTexture2D* Icon;

};

struct FSizeBoxSettings
{
    float WidthOverride;
    float HeightOverride;
    float MinDesiredWidth;
    float MinDesiredHeight;
    float MaxDesiredWidth;
    float MaxDesiredHeight;
    float MinAspectRatio;
    float MaxAspectRatio;

};

struct FSkinList
{
    TSet<FGuid> Skins;

};

struct FSmartSpawnEntry
{
};

struct FSoftIconWithColor
{
    TSoftObjectPtr<UTexture2D> Icon;
    FLinearColor Tint;

};

struct FSoftMinersManualDescription
{
    FText Headline;
    FText RichDescription;
    TSoftObjectPtr<UTexture2D> ImageFront;
    TSoftObjectPtr<UTexture2D> ImageBackground;

};

struct FSoftMissionStepDescription
{
    FText Headline;
    FText RichDescription;
    TSoftObjectPtr<UTexture2D> Image;

};

struct FSonyInputSettings
{
    bool MotionControlEnabled;
    float MotionControlXSensitivity;
    float MotionControlYSensitivity;
    bool MotionControlPrecisionMode;
    bool MotionControlSalute;
    bool MotionControlFlight;
    ESonyControllerMotionMapping MotionXMapping;
    bool AdaptiveTriggersEnabled;
    float ControllerSpeakerVolume;
    bool ControllerSpeakerMissionControl;
    bool ControllerSpeakerSalute;
    bool ControllerSpeakerFlare;
    bool ControllerSpeakerMineralCollection;
    bool TouchPadTerrainScannerEnabled;
    float TouchPadTerrainScannerXSensitivity;
    float TouchPadTerrainScannerYSensitivity;
    float TouchPadTerrainScannerZoomSensitivity;
    bool TouchPadGesturesEnabled;
    ESonyControllerLightMode ControllerLightMode;

};

struct FSoundClassManagerItem
{
};

struct FSoundMixManagerItem
{
    class USoundMix* mix;

};

struct FSpaceRigNotification
{
    FText Text;
    class UTexture2D* Icon;
    FLinearColor IconColor;

};

struct FSpawnEffectItem : public FFastArraySerializerItem
{
    ECreatureSize CreatureSize;
    FVector_NetQuantize Location;
    FRotator Rotation;

};

struct FSpawnEffectsArray : public FFastArraySerializer
{
    TArray<FSpawnEffectItem> Items;

};

struct FSpawnQueueItem
{
    TSoftClassPtr<APawn> EnemyClass;
    class UEnemyDescriptor* enemy;
    FSpawnQueueItemCallback Callback;
    void EnemySpawnedDelegate(class APawn* enemy);

};

struct FSpawnRarityItem
{
    float Duration;
    float Rarity;

};

struct FSpawnRarityModifierItem
{
};

struct FSpecialChanceEventItem
{
    class USpecialEvent* Event;
    float BaseChance;
    bool CanSpawnInDeepDive;

};

struct FSpiderAnimInstanceProxy : public FAnimInstanceProxy
{
};

struct FSplineHitResult
{
    FHitResult HitResult;
    float SplineDistance;
    FVector SplineTangent;

};

struct FSplineSegment
{
    FVector StartLocation;
    FVector StartTangent;
    FVector EndLocation;
    FVector EndTangent;

};

struct FSplineSegmentCarveOperationData
{
    int32 OperationNumber;
    TArray<FCarveSplineSegment> Segments;
    class UTerrainMaterial* Material;
    ECarveFilterType CarveFilter;
    EPreciousMaterialOptions Precious;
    class ULevelGenerationCarverComponent* LevelGenerationComponent;

};

struct FSplineTrailMaterial
{
    TSoftObjectPtr<UMaterialInterface> Material;
    FName slotName;
    int32 SlotIndex;

};

struct FSpriteRect
{
    float Left;
    float Top;
    float Right;
    float Bottom;

};

struct FStateStats
{
    float MaxAcceleration;
    float MaxPawnSpeed;
    float MinSlowdownAngle;
    float MaxSlowdownAngle;
    float MaxBreakingDeceleration;

};

struct FStopSessionRequest
{
    FString SessionKey;

};

struct FStopSessionResponse
{
    bool success;

};

struct FSubObjective
{
    class UDialogDataAsset* OnProgressShout;
    class UDialogDataAsset* OnCompletedShout;
    FText ObjectiveText;
    int32 Required;
    int32 Count;

};

struct FTattooArmorItem
{
    class UVanityTattoo* Tattoo;
    bool IsLeftArm;
    bool FlipTexture;

};

struct FTentacleAnimInstanceProxy : public FAnimInstanceProxy
{
};

struct FTentacleTarget
{
    FVector_NetQuantize Location;
    FRotator Rotation;
    float MovementDuration;
    bool UseSpring;

};

struct FTerminatorShoutState
{
    FName Name;
    TArray<class USoundCue*> Shouts;
    bool Loop;
    float MaxRandomShoutDelay;
    float MinRandomShoutDelay;
    bool Interruptable;
    bool PreventSubsequentDuplicate;

};

struct FTerminatorTalkMaterial
{
    class UMaterialInstanceDynamic* Material;
    float BasePower;
    float AmplitudeMultiplier;

};

struct FTerminatorTarget : public FTentacleTarget
{
    TWeakObjectPtr<class AActor> TargetActor;

};

struct FTerrainLateJoinData
{
    TArray<FGrenadeExplodeOperationData> Explosions;
    TArray<FCarveWithColliderOperationData> ColliderCarves;
    TArray<FCarveWithSTLMeshOperationData> MeshCarves;
    TArray<FPickaxeDigOperationData> PickAxe;
    TArray<FRemoveFloatingIslandOperationData> RemoveFloating;
    TArray<FDrillOperationData> Drills;
    TArray<FMeltOperationData> Melts;
    TArray<FSplineSegmentCarveOperationData> Splines;
    TArray<FCSGBuildOperationData> CSGBuilds;
    TArray<FTerrainSpawnDebrisOperationData> SpawnDebris;
    TArray<int32> DebrisInstanceComponentPairs;
    TArray<uint32> VisibleChunks;
    int32 OperationCount;

};

struct FTerrainLateJoinIteration
{
    int32 DrillsIndex;
    int32 MeltsIndex;
    int32 PickAxeIndex;
    int32 FloatingIndex;
    int32 ColliderCarvesIndex;
    int32 MeshCarvesIndex;
    int32 ExplosionsIndex;
    int32 SplineIndex;
    int32 CSGIndex;
    int32 SpawnDebrisIndex;
    int32 LateJoinIndex;
    int32 DebrisIndex;
    int32 ChunkVisibilityIndex;

};

struct FTerrainPlacementBox
{
    FVector Min;
    FVector Max;
    ETerrainPlacementBoxType PlacementType;

};

struct FTerrainPlacementDebugItem
{
    TArray<FTerrainPlacementBox> TerrainCheckers;
    bool BoxGood;
    bool CapsuleGood;
    EDebrisColliderType CapsuleType;
    FDebrisCapsule Capsule;
    FTransform Transform;

};

struct FTerrainSpawnDebrisOperationData
{
    int32 OperationNumber;
    FVector Pos;
    float Radius;
    class UDebrisMesh* Debris;

};

struct FTestAnimInstanceProxy : public FAnimInstanceProxy
{
    bool IsAlive;
    float RandomStartPosition;
    float Speed;
    bool IsMoving;
    float WalkCyclePlayRate;

};

struct FTestTerrainMaterialDecalItem
{
    TArray<class UTerrainMaterial*> Materials;
    TArray<FDecalData> Decals;

};

struct FTestTerrainMaterialItem
{
    TArray<class UTerrainMaterial*> Materials;
    TSoftObjectPtr<UFXSystemAsset> DigParticles;
    TSoftObjectPtr<UFXSystemAsset> PartialDigParticles;
    TSoftObjectPtr<USoundCue> CrumbleSound;
    TSoftObjectPtr<USoundCue> PartialMineSound;

};

struct FTesterName : public FTableRowBase
{
    FString SteamID;
    FString SteamProfileName;

};

struct FTetherMessageSettings
{
};

struct FTextCounterEntry
{
    class UTextBlock* TextBlock;
    FText Format;
    int32 Value;

};

struct FTextStyleOverride
{
    bool bOverrideFont;
    FSlateFontInfo Font;
    bool bOverrideColor;
    FSlateColor Color;
    bool bOverrideSize;
    float SizeScale;

};

struct FTipsTableRow : public FTableRowBase
{
    FText Header;
    FText Description;
    FText InputText;
    FText InputTextControllerOverride;
    float TimeToDisplay;

};

struct FTracerData
{
    class UFXSystemAsset* MainParticle;
    class UFXSystemAsset* TrailParticle;
    float Speed;
    class USoundCue* WhizbySound;
    float WhizBySoundCooldown;
    float Offset;
    float MinDistance;

};

struct FTrackBuilderPoint
{
    ETrackBuildPlacementState PlacementState;
    FVector_NetQuantize Location;
    FVector_NetQuantize EulerRotation;
    bool bPointValid;
    TWeakObjectPtr<class UTrackBuilderConnectPoint> ConnectPoint;

};

struct FTrackMovement
{
    int32 Direction;
    float Distance;
    float Speed;

};

struct FTrackPositionList
{
    FName TrackName;
    TArray<FVector4> Positions;
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> DynamicMaterials;

};

struct FTrackedStatInfo
{
    class UMissionStat* Stat;
    FText Name;
    TSoftObjectPtr<UTexture2D> Image;
    class UDataAsset* assetReference;

};

struct FTreasureWeight
{
    float Weight;
    TSubclassOf<class UTreasureRewarder> RewarderClass;

};

struct FTriggerItem
{
    TSubclassOf<class ASpawnTrigger> TriggerClass;
    FTransform Transform;
    FName Message;

};

struct FTunnelNode : public FRoomNodeBase
{
    int32 EntranceRoomID;
    int32 ExitRoomID;
    FRoomEntrance Entrance;
    FRoomEntrance Exit;
    class UTunnelParameters* ParametersOverride;
    FTunnelPath Path;
    int32 ID;
    FVector DirtStartLocation;
    bool AddDirt;
    float WeightedResourceAmount;

};

struct FTunnelPath
{
    TArray<FVector> Path;

};

struct FTunnelSettingItem
{
    class UTunnelSegmentSetting* SegmentSetting;
    FInt32Interval SegmentSize;

};

struct FTutorialHint
{
    FText Text;
    FText TaskText;
    FText Title;
    TSoftObjectPtr<UTexture2D> Image;

};

struct FUDebrisCarveMesh
{
    class UStaticMesh* Mesh;
    float Probablity;

};

struct FUDebrisStaticCarveMesh
{
    class UStaticMeshCarver* Mesh;
    float Probablity;

};

struct FUINotificationItem
{
    TArray<FGuid> NotificationIDs;

};

struct FUnLockedMissionParameters
{
    TArray<FGuid> UnLockedComplexities;
    TArray<FGuid> UnLockedDurations;

};

struct FUnassignedReward
{
    class UReward* Reward;
    int32 Index;

};

struct FUpgradeCostItem
{
    TArray<int32> Amounts;

};

struct FUpgradeLoadout
{
    TMap<class FGuid, class FItemUpgradeSelection> Loadout;

};

struct FUpgradeTier
{
    TArray<class UItemUpgrade*> upgrades;
    int32 RequiredCharacterLevel;
    int32 RequiredPlayerRank;

};

struct FUpgradeValues
{
    float BaseValue;
    float UpgradedValue;
    float UpgradedPercentageValue;
    float OldUpgradedValue;
    float OldUpgradedPercentageValue;
    float CurrentValue;
    EUpgradeCalucationType CalculationType;
    EItemPreviewStatus PreviewStatus;

};

struct FUserStatsAnalyticInfo
{
};

struct FVanityAnimEffect
{
    class UNiagaraSystem* Effect;
    FName AttachSocket;
    float StartDelay;

};

struct FVanityEventSource
{
    FText EventName;
    class UTexture2D* EventIcon;

};

struct FVanityMasteryResult
{
    FVanityMasterySave Previous;
    FVanityMasterySave Current;
    int32 FashionitesRewarded;

};

struct FVanityMasterySave
{
    int32 Level;
    int32 XP;
    bool HasAwardedForOldPurchases;
    int32 FashionitesAwaredForOldPurchases;

};

struct FVanityMasterySettings
{
    int32 TotalMasteryLevels;
    int32 XP_RequiredPerLevel;
    int32 XP_ForCreditSpent;
    int32 XP_ForMineralSpent;
    int32 FashionitesLevelUpReward;

};

struct FVanityNode
{
    class UReward* Reward;
    int32 NodeID;
    TArray<int32> ConnectedNodes;
    bool bIsBig;
    bool bIsStartingNode;
    FVector2D Position;

};

struct FVanitySlotCharacter
{
    TMap<class UPlayerCharacterID*, class FVanitySlotStore> Characters;

};

struct FVanitySlotStore
{
    TArray<class UVanityItem*> VanityItems;

};

struct FVanityTestCharacterItem
{
    class USkeletalMesh* Mesh;
    TSubclassOf<class UVanityAnimInstance> AnimBP;

};

struct FVeinResource
{
    class UVeinResourceCreator* ResourceCreator;
    float VeinLengthToGenerate;

};

struct FVeteranComposition
{
    FRandFloatInterval Normal;
    FRandFloatInterval Large;

};

struct FVictoryPoseSave
{
    FGuid EquippedVictoryPose;
    TArray<FGuid> UnlockedVictoryPoses;
    TArray<FGuid> EquippedVictoryPoses;

};

struct FWatchedTutorial
{
    FString TutorialName;
    int32 Count;

};

struct FWaveEntry
{
    float Weight;
    TSoftClassPtr<UEnemyWaveController> WaveController;

};

struct FWeakpointChannel
{
    class UFSDPhysicalMaterial* WeakPointMaterial;
    int32 BoneIndex;
    class UMaterialInstanceDynamic* Mid;

};

struct FWeakpointTask
{
    FRichCurve GrowCurve;
    FRichCurve FadeCurve;

};

struct FWeaponAnalyticInfo
{
};

struct FWeaponHitCounterEffectItem
{
    TWeakObjectPtr<class AActor> Target;

};

struct FWeaponMaintenance
{
    TArray<FWeaponMaintenanceEntry> Entries;
    int32 MaxLevel;

};

struct FWeaponMaintenanceEntry
{
    FGuid WeaponID;
    int32 XP;
    int32 Level;
    bool LevelUpNotification;

};

struct FWeeklyCampaignItem
{
    int32 LastCompletedWeek;
    int32 LastStartedWeek;
    int32 RewardedProgress;

};

struct FWeightedLinePoint
{
    FVector Location;
    float range;
    float NoiseRange;
    float SkewFactor;
    float FillAmount;

};

struct FWeightedRoomSelector
{
    TArray<FWeightedRoomSelectorItem> Items;

};

struct FWeightedRoomSelectorItem
{
    class URoomGenerator* Room;
    float Weight;

};

struct FWidgetAnimationSettings
{
    float PlaybackSpeed;
    TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
    bool bRestoreState;

};

struct FWidgetFade
{
    TWeakObjectPtr<class UUserWidget> Widget;

};

struct FWidgetMover
{
    TWeakObjectPtr<class UWidget> Widget;

};

struct FWidgetPing
{
    TWeakObjectPtr<class UWidget> Widget;

};

struct FWidgetTextCounter
{
    TWeakObjectPtr<class UTextBlock> Widget;

};

struct FXPReward
{
    FText Description;
    int32 XP;

};

struct FXPSettings
{
    float XP_PerGold;
    float XP_PerKill;
    float XP_OnSurvivedLevel;

};

struct FYesNoPromptSettings
{
    TSubclassOf<class UYesNoPromptWidget> WidgetClass;
    int32 ZOrder;
    FText Title;
    FText Message;

};

struct FZipLine
{
    FVector Start;
    FVector End;

};

struct FZipLineConnectorHandler
{
    TSoftClassPtr<AZipLineConnector> ConnectorClass;
    class AZipLineConnector* Connector;

};

class AAFlyingBug : public AEnemyDeepPathfinderCharacter
{
    class UEnemyComponent* EnemyComponent;
    class UPawnStatsComponent* PawnStats;
    class UOutlineComponent* outline;
    class UPawnSensingComponent* Senses;
    class UPawnAlertComponent* Alert;
    class USphereComponent* ExplosionSphere;
    class UAudioComponent* WingSoundComponent;
    class UFrozenPawnImpactComponent* FrozenImpact;
    class UHitReactionComponent* HitReactions;
    class AActor* RotateTarget;
    class USoundBase* ChatterSound;
    float DistanceForAttackMode;
    float MinChatterDelay;
    float MaxChatterDelay;
    float AttackModeRotationSpeed;
    bool UsesAttackStance;
    bool SetLifeTime;
    bool AttackStance;
    bool LookStraight;
    bool UseDefaultRagdoll;

    void StartFizzle();
    void SetRotateTarget(class AActor* aTarget);
    void SetExternallyControlled(bool isExternallyControlled);
    void SetAttackStance(bool isAttackStance);
    void PlayVoice();
    void OnStartFalling();
    void OnRep_AttackStance();
    void OnRagdoll();
    void OnFreezeImpact();
    void OnBugDeath(class UHealthComponentBase* Health);
    float GetMidZpointFromCielingAndFloor(float& distanceFromCieling, float& distanceFromFloor);
    bool GetIsInAttackStance();
    void All_Ragdoll(const FVector_NetQuantize& Location, const FVector_NetQuantize& Impulse, uint8 BoneIndex);
    void AlertNearbyEnemies();
    void AddImpulseAndRagdoll(class UHealthComponent* Health, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& damageTags);
};

class AActivationObject : public AActor
{
    class USingleUsableComponent* Usable;
    bool HasBeenUsed;

    void OnUsedBy(class APlayerCharacter* User, EInputKeys Key);
};

class AAdicPuddle : public AActor
{
    TWeakObjectPtr<class UPrimitiveComponent> TriggerCollider;
    class USphereComponent* SphereTrigger;
    class USoundBase* SpawnSound;
    TSubclassOf<class UStatusEffect> InflictedStatusEffect;
    float LifeTime;

    void Receive_OnPlayerBeginOverlap(class APlayerCharacter* Player);
    void OnPuddleEndOverLap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnPuddleBeginOverLap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class AAimingFacilityTurret : public AFacilityTurret
{
    bool IsLockedOn;
    class UParticleSystemComponent* aimIndicator;
    class UParticleSystemComponent* aimIndicatorLock;
    float LockOnTime;
    float BurstInterval;
    float FireInterval;
    float TurretRotationSpeed;
    float InitialLockonDelay;
    float RegainLosLockonModifier;
    float AimZOffset;
    float TargetLeadingStrength;
    float TargetLeadingResponsiveness;
    float RaimainAfterShotTime;
    float TargetLeadingAfterLockonMultiplier;
    float TurningSpeedAfterLockOnMultipier;
    float PreLockonTargetChangeChance;
    float PreLockongTargetChangeRate;
    float IndicatorFlashTime;
    bool TrackTargetAfterLockon;
    bool ConstantAimAfterLock;
    bool UseTraceForLockOn;
    EIndicatorMode IndicatorMode;
    FInt32Interval BurstCount;

    void SetupAimindicator(class UParticleSystemComponent* aimIndicator, class UParticleSystemComponent* aimIndicatorLock);
    void OnRep_IsLockedOn();
    void OnRep_IndicatorMode();
    void OnLockedOn(bool lockedOn);
};

class AAimingTowerEventModule : public ATowerEventModule
{
    FRotator AimRotation;
    class AActor* CurrentTarget;

};

class AAimingTowerModule : public ATowerModuleBase
{
    class AActor* Target;
    FRotator AimRotation;
    float BurstTime;
    float AttackTime;
    int32 BurstSize;

};

class AAmberEvent : public AGameEvent
{
    class UDamageComponent* EndExplosionDamage;
    TArray<class UAmberEventEnemyPool*> EnemyPools;
    TArray<class AFSDPawn*> spawnedEnemies;
    TWeakObjectPtr<class UAmberEventEnemyPool> CurrentPool;
    float InitialDelayBeforeSpawn;
    float MaxSpawnRange;

    void OnSpawnedDeath(class UHealthComponentBase* spawnedHealthComponent);
    void OnEnemySpawned(class APawn* Pawn);
};

class AAmmoDrivenWeapon : public AAnimatedItem
{
    FAmmoDrivenWeaponOnClipCountChanged OnClipCountChanged;
    void AmountChangedSignature(int32 Amount);
    FAmmoDrivenWeaponOnTryReloadEvent OnTryReloadEvent;
    void Delegate();
    FAmmoDrivenWeaponOnReloadingEvent OnReloadingEvent;
    void Delegate();
    FAmmoDrivenWeaponOnShotFiredEvent OnShotFiredEvent;
    void Delegate();
    FAmmoDrivenWeaponOnStoppedUsingEvent OnStoppedUsingEvent;
    void AmmoDrivenGenericEvent();
    class UWeaponFireComponent* WeaponFire;
    class UAmmoDriveWeaponAggregator* Aggregator;
    bool LoopFireAnimation;
    float LoopFireAnimationBlendoutTime;
    class UAnimMontage* FP_FireAnimation;
    class UAnimMontage* TP_FireAnimation;
    class UAnimMontage* FP_ReloadAnimation;
    FItemAnimationItem OverheatAnimation;
    TArray<FItemAnimationItem> GunslingAnimations;
    class UAnimMontage* TP_ReloadAnimation;
    class UAnimMontage* WPN_Fire;
    class UAnimMontage* WPN_FireLastBullet;
    class UAnimMontage* WPN_Reload;
    class UAnimMontage* WPN_Reload_TP;
    class UFXSystemAsset* MuzzleParticles;
    class UFXSystemAsset* TPMuzzleParticles;
    bool UseTriggeredMuzzleParticles;
    FTracerData Tracer;
    class UFXSystemAsset* CasingParticles;
    bool UseTriggeredCasingParticleSystem;
    class ULightComponent* MuzzleFlashLight;
    FRuntimeFloatCurve MuzzleFlashLightCurve;
    class USoundCue* FireSound;
    class USoundCue* RicochetSound;
    class UFXSystemAsset* RicochetParticle;
    float FireSoundDelayToTail;
    class USoundCue* FireSoundTail;
    bool IsFireSoundTail2D;
    class UForceFeedbackEffect* FireForceFeedbackEffect;
    TWeakObjectPtr<class UAudioComponent> FireSoundInstance;
    float FireSoundFadeDuration;
    class USoundCue* ReloadSound;
    int32 BulletsRemainingForNearEmptySound;
    bool PlayEmptySoundsIn3D;
    class USoundCue* NearEmptySound;
    class USoundCue* WeaponEmptySound;
    class UDialogDataAsset* ShoutShotFired;
    class UDialogDataAsset* ShoutOutOfAmmo;
    class UDialogDataAsset* ShoutReloading;
    int32 MaxAmmo;
    int32 ClipSize;
    int32 ShotCost;
    float RateOfFire;
    int32 BurstCount;
    float BurstCycleTime;
    float ReloadDuration;
    int32 AmmoCount;
    int32 ClipCount;
    int32 ManualHeatReductionAmmo;
    float FireInputBufferTime;
    float AutoReloadDuration;
    class USoundCue* AutoReloadCompleteCue;
    FAmmoDrivenWeaponOnItemAutoReloaded OnItemAutoReloaded;
    void AmmoDrivenGenericEvent();
    float SupplyStatusWeight;
    float CycleTimeLeft;
    bool UseCustomReloadDelay;
    float CustomReloadDelay;
    float ReloadTimeLeft;
    bool AutomaticReload;
    bool CanReload;
    float HoldToFirePercentOfFireRatePenalty;
    FRecoilSettings RecoilSettings;
    bool ApplyRecoilAtEndOfBurst;
    float EndOfBurstRecoilMultiplier;
    bool HasAutomaticFire;
    bool IsFiring;
    bool ManualHeatReductionOnReload;
    int32 MaxManualHeatReductionCharges;
    float ManualHeatReductionValue;
    EAmmoWeaponState WeaponState;

    void Upgraded_Blueprint_Implementation(const TArray<class UItemUpgrade*>& upgrades);
    void UpdateHoldToFire();
    void Server_StopReload(float BlendOutTime);
    void Server_ReloadWeapon();
    void Server_PlayBurstFire(uint8 shotCount);
    void Server_Gunsling(uint8 Index);
    void ResupplyAmmo(int32 Amount);
    void RecieveFiredWeapon();
    void Receive_ReloadEnd();
    void Receive_ReloadBegin();
    void Receive_IsFiringChanged(bool NewValue);
    void OnWeaponFireEnded();
    void OnWeaponFired(const FVector& Location);
    void OnRicochet(const FVector& Origin, const FVector& Location, const FVector& Normal);
    void OnRep_IsFiring();
    bool IsClipFull();
    void InstantlyReload();
    void CustomEvent1(const class UItemUpgrade* Event);
    void Client_RefillAmmo(float percentage);
    void All_StopReload(float BlendOutTime);
    void All_StartReload();
    void All_PlayBurstFire(uint8 shotCount);
    void All_Gunsling(uint8 Index);
};

class AAnchorTurner : public AActor
{
    class USceneComponent* Root;
    class USkeletalMeshComponent* Mesh;
    class USphereComponent* PushCollider1;
    class USphereComponent* PushCollider2;
    class USphereComponent* PushCollider3;
    class USphereComponent* PushCollider4;
    FAnchorTurnerOnSpunUp OnSpunUp;
    void DelegateEvent();
    FVector AttatchmentOffset;
    TArray<FName> AttachmentPoints;
    float PerPlayerMultiplier;
    float TurnSpeed;
    float Progress;
    float MaxProgress;
    bool Finished;
    float DecaySpeed;

    void OnRep_Finished();
    void OnLeftPushpoint(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnEnteredPushpoint(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void GeneratorSpunUp();
};

class AAnimatedItem : public AItem
{
    class USkinnableComponent* Skinnable;
    class UPlayerAnimInstance* FPAnimInstance;
    class UPlayerAnimInstance* TPAnimInstance;
    class USkeletalMeshComponent* FPMesh;
    class USkeletalMeshComponent* TPMesh;
    class UAnimMontage* FP_EquipAnimation;
    class UAnimMontage* FP_IdleAnimation;
    class UAnimMontage* TP_EquipAnimation;
    class UAnimMontage* TP_IdleAnimation;
    float EquipDuration;
    class UItemCharacterAnimationSet* CharacterAnimationSet;

    void OnReceiveEquippedFinished();
    FTransform GetMuzzle();
    class USkeletalMeshComponent* GetItemMesh();
};

class AArmorPiece : public AActor
{
    class UUpgradableGearComponent* Upgradable;
    TMap<UPawnStat*, float> StatModifiers;
    TSubclassOf<class ALoadoutItemProxy> LoadoutProxy;
    class UItemID* ItemID;
    TSubclassOf<class AActor> WeaponPreviewClass;

    TSubclassOf<class AActor> GetWeaponViewClass();
    class AArmorPiece* GetArmorPieceDefaultObject(TSubclassOf<class AArmorPiece> armorPieceClass);
};

class AAssaultRifle : public AAmmoDrivenWeapon
{
    float KillsResetAccuracyDuration;
    bool KillsTriggersStatusEffect;
    TSubclassOf<class UStatusEffect> KillTriggeredStatusEffect;

    void OnTimerElapsed();
    void OnEnemyKilled(class AActor* Target, class UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    void Client_ResetAccuracy();
};

class AAsyncLevelPersistanceActor : public AActor
{
    TArray<class UObject*> References;

};

class AAutoCannon : public AAmmoDrivenWeapon
{
    float StartingFireRate;
    float MaxFireRate;
    FRuntimeFloatCurve FireRateCurve;
    float FireTimeReductionScale;
    float FireTimeIncreaseScale;
    float MaxFireTimeCap;
    float DamageBonusAtFullROF;
    bool StatusEffectAtFullROF;
    float FireTimeOffsetForMaxRateOfFireBonus;
    float StartLoopingSoundAt;
    TSubclassOf<class UStatusEffect> StatusAtFullROF;
    class UAnimMontage* WPN_Fire_2;
    float CurrentFireTime;

    void Server_SetStatusActive(bool IsActive);
};

class AAutoShotgun : public AAmmoDrivenWeapon
{
    TSubclassOf<class UStatusEffect> CQCKillBuff;

    void OnTargetKilled(class AActor* Target, class UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit);
    void OnTargetDamaged(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* HitComponent, class UFSDPhysicalMaterial* PhysicalMaterial);
};

class ABarrierProjectile : public AActor
{
};

class ABasicDepositableItem : public ABasicThrowableItem
{
    class UResourceData* DepositableResource;

};

class ABasicPistol : public AAmmoDrivenWeapon
{
    class UDamageComponent* DamageComponent;
    float BurstArmorDamageMultiplier;
    float ConsecutiveHitsDamageBonus;
    float ConsecutiveHitsMaxBonus;

    void OnTargetDamaged(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* HitComponent, class UFSDPhysicalMaterial* PhysicalMaterial);
    void OnHit(const FHitResult& HitResult, bool isAlwaysPenetrated);
};

class ABasicThrowableItem : public ACarriableItem
{
    class UBoxComponent* BoxComp;
    class USphereComponent* UseSphere;
    class UCarriableComponent* CarriableComp;
    class UInstantUsable* UsableComp;
    class UStaticMeshComponent* WorldMeshComp;
    class UFirstPersonStaticMeshComponent* ViewMeshComp;
    class USoundCue* ImpactSound;
    float SquaredMinImpactForce;
    float ImpactAudioResetTime;
    float SquaredMinThrowforce;

    void ThrowItem(const FVector& throwForce);
    void ResetImpactSound();
    void OnUsed(class APlayerCharacter* User, EInputKeys Key);
    void OnUsableChanged(bool CanUse);
    void OnPickedUp();
    void OnDropped();
    void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

class ABeltDrivenWeapon : public AAmmoDrivenWeapon
{
    class UAudioComponent* BarrelAudio;
    class USoundCue* BarrelSound;
    float BarrelFadeIn;
    float BarrelFadeOut;
    class UCurveFloat* BarrelPitchCurve;
    float BarrelSpinUpTime;
    float BarrelSpinDownTime;
    float CurrentSpinRate;
    bool Simulate_SpinBarrel;

    void Server_StopBarrel();
    void Server_StartBarrel();
};

class ABoil : public AActor
{
    TArray<class UFSDPhysicalMaterial*> PhysicalMaterials;
    int32 MaterialIndex;

    void OnRep_MaterialIndex();
};

class ABoltActionWeapon : public AAmmoDrivenWeapon
{
    FBoltActionWeaponFullyFocusedEvent FullyFocusedEvent;
    void BoltActionWeaponFullyFocusedDelegate();
    FBoltActionWeaponFocusLostEvent FocusLostEvent;
    void BoltActionWeaponFullyFocusedDelegate();
    class UDamageComponent* DamageComponent;
    class UHitscanBaseComponent* HitscanComponent;
    TSubclassOf<class UStatusEffect> FocusedHitSTE;
    bool RequireWeakspotForFocusedHitSTE;
    bool IsNoGravityOnFocusEnabled;
    float NoGravityOnFocusDuration;
    float NoGravityFocusFallFriction;
    float NoGravityFocusGravityScale;
    float ZoomSpreadAmount;
    float ZoomMinSpreadWhileMoving;
    float ChargeSpeed;
    float ChargeAmmoCost;
    float ChargeRecoilMult;
    class USoundCue* ZoomedInAudio;
    class UParticleSystem* ChargedShotTrailParticles;
    FTracerData ChargedShotTracer;
    class USoundCue* ButtonDownFireSound;
    class USoundCue* ChargedShotFireSound;
    float ChargedFoVChange;
    float ChargedFoVFadeSpeed;
    float MinCharge;
    float SlowMovementAtCharge;
    float FullChargeDamageBonus;
    float AimedShotStaggerChance;
    float AimedShotWeakpointDamageBonusMultiplier;
    float AimedWeakspotKilLRange;
    float TargetKilledReloadTimeBoost;
    float TargetKilledReloadTimeBoostDuration;
    bool LastShotWasAimed;
    bool IsMovementSlowed;
    bool ChargeAffectsDamage;
    bool Charging;
    float ChargeProgress;

    void SetOverheated(bool isOverheated);
    void Server_SetIsMovementSlowed(bool bisMovementSlowed);
    void Server_SetIsLatestShotFocused(bool bisShotFocused);
    void Server_SetIsChargingShot(bool bisCharging);
    void OnTimerElapsed();
    void OnTargetKilled(class AActor* Target, class UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit);
    void OnTargetDamaged(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* HitComponent, class UFSDPhysicalMaterial* PhysicalMaterial);
    void OnShotPowerSet();
    void OnMovementSlowed(bool isSlowed);
    void Client_OnTargetKilled(bool BoostReloadTime);
};

class ABomber : public AAFlyingBug
{
    class UAudioComponent* GooSoundComponent;
    class UParticleSystemComponent* AcidEmitterLeft;
    class UParticleSystemComponent* AcidEmitterRight;
    TSubclassOf<class AProjectile> AcidProjectile;
    class UFXSystemAsset* deathParticles;
    class USoundBase* deathSound;
    class USoundBase* DeathPanicSound;
    class UParticleSystem* BleedParticles;
    class USoundBase* BladderDestroyedNoise;
    TWeakObjectPtr<class UParticleSystemComponent> BleedParticlesComponent;
    TWeakObjectPtr<class UAudioComponent> PanicAudioComponent;
    float RagdollForceModifier;
    float DeathYRotationSpeed;
    float DeathXRotationSpeed;
    float SearchRange;
    float NewPointMax;
    float NewPointMin;
    float DeathSpeed;
    float DeathAcceleration;
    float AcidRate;
    float PostDeathAcidTime;
    bool HasDied;
    bool IsRightDestroyed;
    bool IsLeftDestroyed;
    bool dropAcid;
    bool NoDeathSpiral;

    void StopSpinAndDie();
    void SetDropAcid(bool dropAcid);
    void OnStartDeathPanic();
    void OnRep_DropAcid();
    void OnRep_Death();
    void OnRagdollHitGround(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnBladderDamage(float Amount);
    void OnArmorDestroyed(FName Name);
    void HideMesh();
    bool GetDropAcid();
    bool AreBladdersDestroyed();
};

class ABosco : public ADeepPathfinderCharacter
{
    class UHealthComponent* HealthComponent;
    class UBoscoAbillityComponent* PrimaryAbility;
    class UBoscoAbillityComponent* SecondaryAbility;
    TArray<class UBoscoAbillityComponent*> Abilities;
    class UDamageComponent* Damage;
    class UPawnSensingComponent* Senses;
    class UDroneMiningToolBase* MiningTool;
    class UBobbingComponent* BobbingComponent;
    class USkeletalMeshComponent* BoscoMesh;
    class UHitscanComponent* DroneHitScan;
    class USpotLightComponent* SpotLightComponent;
    class UPointLightComponent* PointLightComponent;
    class UParticleSystemComponent* LTrail;
    class UParticleSystemComponent* RTrail;
    class UAudioComponent* MomentumSound;
    class UDialogDataAsset* DefendDrilldozerShout;
    class UDialogDataAsset* DefendGenericShout;
    class UDialogDataAsset* MineOrderShout;
    class UDialogDataAsset* KillOrderShout;
    class UDialogDataAsset* GoToOrderShout;
    class UDialogDataAsset* ReviveOrderShout;
    class UDialogDataAsset* PickupGemShout;
    class UDialogDataAsset* ReviveThankShout;
    class UDialogDataAsset* GeneralCallShout;
    class UDialogDataAsset* VacuumShout;
    class USoundBase* MineResponse;
    class USoundBase* CombatResponse;
    class USoundBase* LightResponse;
    class USoundBase* ReviveResponse;
    class USoundBase* AbillityResponse;
    class USoundBase* CurrentResponse;
    float ResponseTime;
    FBoscoOnReviveused OnReviveused;
    void ReviveUsedSig(const int32 ReviveCount);
    bool ShouldSelfDestructOnMultiplePlayers;
    FBoscoOnStateChanged OnStateChanged;
    void StateChangedSig(EDroneAIState aCurrentState);
    FGameplayTagContainer LosMatchTags;
    float SeeTargetTime;
    class USoundBase* AbillityErrorSound;
    float INcreasedMiningArea;
    float TimeToResetMiningBoost;
    float MiningBoosMultiplier;
    TArray<class UItemUpgrade*> upgrades;
    class UBoscoProjectileAbillity* RocketAbillity;
    class UBoscoProjectileAbillity* CryoGrenadeAbillity;
    FGuid SavegameID;
    class UItemID* ItemID;
    class UUpgradableBoscoComponent* Upgradable;
    class UAnimSequenceBase* SaluteAnimation;
    class UAnimSequenceBase* PickupGemAnimation;
    class UAnimSequenceBase* DropGemAnimation;
    TArray<class UAnimSequenceBase*> HitReaction;
    float SaluteDuration;
    class UDroneSkinnableComponent* Skinnable;
    TArray<FBoscoLightSetting> LightSettings;
    int32 TargetLightSetting;
    TArray<class UBoscoAbillity*> CombatAbillities;
    class AActor* RotateTarget;
    FVector LookAtLocation;
    class USoundCue* ShootSound;
    float ShootSoundFadeout;
    class USoundCue* ShootSoundTail;
    class UAudioComponent* ShootSoundInstance;
    class UParticleSystem* MuzzleEffect;
    class UParticleSystem* TracerEffect;
    float FireRate;
    int32 MinShotsInBurst;
    int32 MaxShotsInBurst;
    float MaxRandomBurstCooldown;
    float MinRandomBurstCooldown;
    float MaxFiringAngle;
    float MaxEngagementRange;
    float MinTracerDistance;
    float TracerSpeed;
    class USoundBase* ReviveSirens;
    TWeakObjectPtr<class UAudioComponent> ReviveSirensComponent;
    float DistanceToFacePlayer;
    float RotationSpeed;
    float PrepareToMineRange;
    float MiningRange;
    int32 MaxRevives;
    bool IsFiring;
    bool IsInRangeToMine;
    bool IsPreparedToMine;
    bool IsMining;
    bool IsReviving;
    bool IsRotateMode;
    class ABoscoController* DroneController;
    EDroneAIState CurrentState;

    void UsePlayerActivatedAbillity(EAbilityIndex Index, class AActor* aTarget, const FVector& aLocation);
    void UseABillity();
    void StopShootingSound();
    void StateChanged(EDroneAIState aCurrentState);
    void StartSelfDestruct();
    void SetIsReviving(bool aIsReviving);
    void SetIsRepairing(bool isRepairing);
    void SelfDestruct();
    void ReviveCounterChanged(int32 remainingCharges);
    void Respond();
    void PlaySalute();
    void OnWeaponFired(const FVector& Location);
    void OnTargetBurrowChange(bool burrowed);
    void OnRep_State(EDroneAIState prevState);
    void OnReadyToShoot();
    void OnNotReadyToShoot();
    void OnHit(float Amount, float BaseAmount, const FDamageData& DamageData);
    void OnGrabbedGem();
    void MineEffects(class UTerrainMaterial* aTerrainMaterial, FVector_NetQuantize aLocation, FRotator aRotation);
    class UUpgradableBoscoComponent* GetUpgradeComponent();
    int32 GetReviveCharges();
    class UBoscoAbillityComponent* GetPlayerAbillity();
    EDroneAIState GetCurrentState();
    bool GetCarryInterrupted();
    bool DoPickupGemAnimation();
    void All_OnSelfDestruct();
};

class ABoscoController : public AFSDAIController
{
    class UBehaviorTree* BehaviourTree;
    float CheckOutOfTheWayInterval;
    float DistCountAsSameHit;
    FBoscoControllerOnFollowTargetChangedDelegate OnFollowTargetChangedDelegate;
    void FollowTargetChanged(class AActor* FollowTarget);
    class UTerrainMaterial* HearthstoneCrystalMaterial;
    TArray<class UTerrainMaterial*> PlagueMaterials;
    TArray<class TSubclassOf<AActor>> VacuumableTypes;
    TArray<TWeakObjectPtr<AActor>> VacuumTargets;
    float SearchForEnemiesInterval;
    float SaluteDelay;
    float SaluteCooldown;
    float CheckGraberInterval;
    float MaxThrowStrength;
    float MaxThrowRange;
    float RepairRange;
    float DistanceCountedAsClose;
    FGameplayTagQuery TargetQuery;
    FGameplayTagQuery AttackOnOrderQuery;
    FGameplayTagQuery AttackOnSightQuery;
    FGameplayTagQuery DefendTageQuery;
    FGameplayTagQuery VacuumTagQuery;
    float ReviveHealthPercentage;
    class UDroneUseComponent* CurrentUse;
    class AActor* TryingToPickItem;

    void ReviveTarget();
    void ResetToFollowState();
    void RegisterPlayer(class APlayerCharacter* APlayerCharacter);
    void PickupItem();
    void OnUseDone(int32 TimesUsed);
    void OnSecondaryLaserPointer(const FLaserPointerTarget& HitInfo);
    void OnPlayerShout(class APlayerCharacter* APlayerCharacter);
    void OnPlayerSalute(class APlayerCharacter* aCharacater);
    void OnPlayerLeave(class AFSDPlayerState* APlayerState);
    void OnLaserPointer(const FLaserPointerTarget& HitInfo);
    void OnJobFinished();
    void OnEscortTargetDied(class UHealthComponentBase* Health);
    void OnCarriedUsed(class APlayerCharacter* usedBy, EInputKeys Key);
    FVector GetPointNearPlayers();
    class AActor* GetFollowTarget();
    void GenerateRelativeLocation(class AActor* aTarget, float aRange, float aHeightRestriction, float aMinRange, bool aTryToStayOutOfTheWay, bool aStayBehind);
    void ConfirmPickup();
    void CarriableDrop();
};

class ABouncyBoomerang : public AGrenade
{
    class USceneComponent* Root;
    class UDamageComponent* DamageComponent;
    int32 BouncesLeft;
    float ConeRange;
    float ConeWidth;
    float BounceRange;
    float ToTargetSpeed;
    float TurnToTargetSpeed;
    float PathToDistPercent;
    FVector DefaultLocalBounceVector;
    FVector BounceVectorRandomness;
    float InitialBounceVectorCof;
    float ArcTimeScale;
    float GoBackAcceleration;
    float GoBackHardness;
    float TerrainCheckUpdateRate;
    float HitEnemyRange;
    float HitPlayerRange;
    float CatchSoundRange;
    float HitTerrainRange;
    FVector CatchLocationOffset;
    TArray<class TSubclassOf<UStatusEffect>> OnDamageStatusEffects;
    class UNiagaraSystem* EnemyHitNiagaraSystem;
    class UParticleSystem* EnemyHitParticleSystem;
    class USoundCue* ImpactSound;
    class USoundCue* ReturnCatchSound;
    class USoundCue* ThrowBoomerangSound;
    class USceneComponent* MeshPivot;
    class USceneComponent* YawPivot;
    float MeshRotationRate;
    class AFSDPawn* TargetEnemy;
    class AFSDPawn* PredictedNextEnemy;
    uint32 RandomSeed;
    EBoomerangState State;
    FBoomerangSyncer PosVel;
    FBoomerangMover Mover;

    void OnRep_TargetEnemy(class AFSDPawn* lastEnemy);
    void OnRep_State();
    void OnRep_RandomSeed();
    void OnRep_PosVel();
    void CheckIfCollidingWithTerrain();
};

class ABoxGenerationItem : public AGenerationItem
{
    class UBoxGenerationComponent* BoxComponent;

};

class ABurstWeapon : public AAmmoDrivenWeapon
{
    class UDamageComponent* Damage;
    class UDamageComponent* BurstFireBonusDamage;

    void OnTargetDamaged(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* HitComponent, class UFSDPhysicalMaterial* PhysicalMaterial);
    void OnReadyToFire();
};

class ACalldownItem : public AAnimatedItem
{
    TSubclassOf<class UItemPlacerAggregator> ItemPlacerClass;
    TSubclassOf<class ARessuplyPod> SupplyPodClass;
    class UResourceData* ResouceRequired;
    FText OrderDescription;
    FText LogText;
    TSubclassOf<class AActor> ResupplyBeacon;
    class UItemPlacerAggregator* ItemPlacerInstance;
    float CoolDown;
    float CooldownRemaining;

    void Server_Call_Resupply(const FVector& Location);
};

class ACaretaker : public AFSDPawn
{
    class USceneComponent* Root;
    class USkeletalMeshComponent* Body;
    TArray<class USkeletalMeshComponent*> Eyes;
    TArray<class UPassthroughSubHealthComponent*> subHealth;
    class UHealthDamageTracker* DamageTracker;
    class UEnemyHealthComponent* Health;
    class UPawnStatsComponent* PawnStats;
    TArray<class UCaretakerActionComponent*> Actions;
    class UCaretakerActionComponent* CurrentAction;
    TArray<class UAnimSequenceBase*> HitReactions;
    int32 CurrentStage;
    int32 TargetRotationRate;
    TArray<float> RotationRates;
    float Server_Rotation;
    bool IsInStageCooldown;
    bool IsWeakpointAVisible;
    bool IsWeakpointBVisible;
    bool IsWeakpointCVisible;
    bool IsWeakpointDVisible;
    ECaretakerSpawnType ActiveSpawnType;
    int32 AoEStage;
    int8 OpenEye;

    void WakeUp();
    void SetTargetRotationRate(int32 rateIndex);
    void OpenRandomEye(bool forbidLastEye);
    void OnStartHideFromDamage();
    void OnRep_Server_Rotation();
    void OnRep_OpenEye();
    void OnRep_CurrentStage();
    void OnNewStage(int32 stageIndex);
    void OnEyeOpened(class USkeletalMeshComponent* eye);
    void OnEyeClosed(class USkeletalMeshComponent* eye);
    void OnDamageTaken(float Amount);
    bool IsAwake();
    bool IsAnyEyeOpen();
    void InitiateNextStage();
    void InitCaretakerActions(TArray<class UCaretakerActionComponent*> carettakeractions);
    void CloseAllEyes();
};

class ACarriableItem : public AFSDPhysicsActor
{
    FCarriableItemOnAttachedChangeDelegate OnAttachedChangeDelegate;
    void AttachChangeSig(bool Attached, FVector PrevScale);
    FCarriableItemOnCarriableDeposited OnCarriableDeposited;
    void OnCarriableDeposited(class APlayerCharacter* fromCharacter);
    bool StrictDeposit;
    bool IsDopositable;

    void Throw(FVector force);
    void Receive_OnDeposited(class APlayerCharacter* fromPlayer, class AActor* toActor);
    void OnAttachChanged(bool Attached);
};

class ACaveEntrance : public AGenerationItem
{
    class UCaveEntranceComponent* CaveEntranceComponent;
    ECaveEntranceType EntranceType;
    bool HasBeenConverted;

};

class ACaveLeech : public AEnemyPawn
{
    class USkeletalMeshComponent* SkeletalMesh;
    class UGrabberComponent* GrabberComponent;
    float BiteDamage;
    float BitesPerSecond;
    float MaxDistanceXY;
    float GrapDistance;
    float GrapDelay;
    float TentacleSpeed;
    float TentacleRetractSpeed;
    float RetractDuration;
    float TentaclePullSpeed;
    float TentacleDropPlayerSpeed;
    float TentacleDropGroundDistance;
    float MaxDropPlayerDuration;
    float HeadInterpSpeed;
    float TentacleAttachOffset;
    float BiteDistance;
    float RevivedGracePeriod;
    class UPawnAffliction* CaveLeechSenseAffliction;
    float StateTime;
    ECaveLeechState State;
    FVector_NetQuantize TentacleLocation;
    FVector_NetQuantize TentacleVelocity;
    TWeakObjectPtr<class AActor> Target;
    class UHealthComponent* HealthTarget;
    class USceneComponent* TentacleHead;

    void OnRep_State();
    FVector GetTentacleTargetLocation();
    FVector GetMouthLocation();
    class AActor* GetCurrentTarget();
    void Died(class UHealthComponentBase* HealthComponent);
    void Damaged(float Amount);
    void BP_OnStateChanged(ECaveLeechState NewState);
    void BP_OnBite(class UHealthComponent* TargetHealth);
};

class ACaveObject : public AActor
{
    bool CanCharacterStandOn;

    void TriggerNetworkUpdate();
    void ResumeNetworkUpdates();
    void Recieve_OnGameStarted();
    void PauseNetworkUpdates();
};

class ACaveVine : public AActor
{
    TEnumAsByte<ECollisionChannel> GroundCollisionChannel;
    float IdleSwingSpeed;
    float ChaseSpeed;
    float MaxReach;
    float GroundOffset;
    float NoiseRadius;
    float NoiseSpeed;
    class USplineMeshComponent* SplineMeshComponent;
    class USceneComponent* VineHead;
    FVector VineVelocity;
    FVector VineLocation;
    FVector VineStartLocation;
    TWeakObjectPtr<class UHealthComponent> Target;

    void BP_OnTargetChanged(class UHealthComponent* NewTarget);
    void BP_OnInitialized();
};

class ACaveWorm : public ADeepPathfinderCharacter
{
    class USimpleHealthComponent* Health;
    float SearchChunksRadius;
    float SearchChunksInterval;

    class AResourceChunk* SpawnResource(class UObject* WorldContext, class UResourceData* Data, float Size, FTransform Transform, FVector Impulse, FVector DropOffset);
    void Search();
    void IncrementKillCount(class UHealthComponentBase* HealthComponent);
    void DropResource(class UResourceData* Data, float Size, FVector Impulse, FVector DropOffset);
};

class ACharacterSelectionSwitcher : public AActor
{

    void OnVictoryPoseChanged(class UVictoryPose* VictoryPose);
    void OnVanityItemEquipped(EVanitySlot Slot);
    void Hide();
    class AActor* GetViewerActor();
    class APlayerCharacter* GetActiveCharacter();
};

class AChargedProjectile : public AProjectile
{
    bool ExplodesWhenDead;
    bool PersistentExplosion;
    bool AoEDamageInFlight;
    float DirectDamageReduction;

    void OnAoEDamageEnabled();
};

class AChargedWeapon : public AAmmoDrivenWeapon
{
    FChargedWeaponOnChargeChanged OnChargeChanged;
    void ChargeChangedSignature(float charge);
    FChargedWeaponOnHeatChanged OnHeatChanged;
    void ChargeChangedSignature(float charge);
    class UAnimMontage* FP_OverheatAnim;
    class UAnimMontage* WeaponOverheatAnim;
    class UAnimMontage* FP_ChargeupMontage;
    class UAnimMontage* TP_ChargeupMontage;
    class UFXSystemAsset* ChargeupParticles;
    class UFXSystemComponent* ChargeupParticleInstance;
    class UFXSystemAsset* ChargeupFireMuzzleFlash;
    class USoundCue* NormalFiresound;
    class USoundCue* FullyChargedFireSound;
    float ChargeSpeed;
    bool Charging;
    float ChargeProgress;
    int32 ShotCostAtBelowFullCharge;
    int32 ShotCostAtFullCharge;
    bool ChargedShotsOnly;
    bool AutoFireWhenOverheated;
    float TotalHeat;
    float CoolingRate;
    float HeatPerSecondWhileCharging;
    float HeatPerSecondWhenCharged;
    float HeatPerNormalShot;
    float HeatPerChargedShot;

    void SetOverheated(bool isOverheated);
    void Server_SetIsCharging(bool isCharging);
    void RecieveStoppedCharging(float ChargeProgress);
    void RecieveStartedCharging();
    void RecieveChargeProgressChanged(float NewChargeProgress);
    void ReceiveOverheatedChanged(bool isOverheated);
    void OnRep_Charging();
    bool GetIsCharging();
};

class ACleanupPod : public ARessuplyPod
{
    class USphereComponent* RemovePlagueCollision;

    void OnObjectiveChanged(class UObjective* Objective);
    void ChangedState(class ARessuplyPod* InPod, ERessuplyPodState InState);
};

class ACleanupPodItem : public ARessuplyPodItem
{
    FCleanupPodItemOnCleaningPodLaunched OnCleaningPodLaunched;
    void CleaningPodLaunched();
    TWeakObjectPtr<class APlagueControlActor> PlagueController;

    void UpdateWidget(EPlaceableObstructionType reason, float TimeLeft);
    void Server_Call_CleaningPod(const FVector& Location, class APlagueInfectionNode* plagueNode);
    void CallUpdateWidget();
};

class ACoilGun : public AChargedWeapon
{
    class UDamageComponent* DamageComponent;
    class UDamageComponent* OverchargeDamageComponent;
    class UDamageComponent* WeaponBlastDamage;
    class UDamageComponent* ShotwaveBonusDamage;
    class UDamageComponent* MoleBonusDamage;
    class UNiagaraComponent* FullyChargedParticles;
    class UNiagaraComponent* FP_OverchargeIndicatorParticles;
    class UNiagaraComponent* TP_FullyChargedParticles;
    class UCoilgunTrailSpawner* TrailSpawner;
    FContrailSettings TrailSettings;
    class UStaticMesh* ImpactMeshCarver;
    class UNiagaraSystem* N_ImpactParticles;
    TSubclassOf<class UStatusEffect> ChargeResistanceStatusEffect;
    TSubclassOf<class UStatusEffect> ChargeWeaknessStatusEffect;
    TArray<class TSubclassOf<ACoilgunWeaponTrail>> TrailClasses;
    class UNiagaraSystem* CustomMuzzleFlash;
    TSet<AActor*> HitActorCache;
    FName CoilParamName;
    TArray<FCoilMaterial> DynamicCoilMaterials;
    FRuntimeFloatCurve CoilColorCurve;
    TArray<class UStatusEffect*> RecordedAilments;
    float MaxAfflictionTime;
    float ShotWidth;
    float BonusShotWidth;
    float ImpactFearFactor;
    float OverChargedShotMaxPower;
    float MaxOverchargeTime;
    float OverchargeTimeStep;
    float BrokenShieldboostDuration;
    float MinUndercharge;
    float TriBustCancelTime;
    float TriBurstShotPowerMultiplier;
    float TriBurstAmmoMultiplier;
    float TriBurstShotCarvingMultiplier;
    int32 FirstDynamicIndex;
    int32 LastDynamicIndex;

    void UpdateAfflictions();
    void SetDynamicMaterials();
    void Server_ToggleCharingBonuses(bool Enabled);
    void Server_SpawnTrail(const FVector_NetQuantize& Location, const FRotator& Rotation, float HalfHeight, bool fireTrailEnabled);
    void Server_SpawnGroundTrail(const FVector_NetQuantize& Location, const FVector& Direction, float chargeMultiplier);
    void Server_SetShotPower(const float& Power);
    void Server_RegisterPrimaryHit(class UPrimitiveComponent* Target, class UFSDPhysicalMaterial* PhysMaterial, const FVector_NetQuantize& Origin, const FVector_NetQuantize& Location, int32 BoneIndex, FShotMultiplier Multiplier, int32 mole);
    void Server_RegisterBonusHit(class AActor* Target);
    void Server_RegisterBlastHit(class AActor* Target, const FVector_NetQuantize& Location, class UPrimitiveComponent* comp);
    void Server_HitTerrain(const FVector_NetQuantize& Location, const FVector_NetQuantize& End, float maxCarveDepth);
    void Server_FearTarget(class AActor* Target);
    void Server_ClearAilments();
    void OnTriBurstCancled();
    void OnShieldBrokenBoost();
    void OnShieldBrokeBoostStopped();
    void OnShieldBoostEnded();
    void OnFireKill(class AActor* Target);
    void OnEnemyKilled(class AActor* Target, class UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit);
    void OnDamageTarget(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* Component, class UFSDPhysicalMaterial* PhysicalMaterial);
    void OnCharacterShieldBroke(class AActor* brokeChar);
    void OnBulletPathComplete(const TArray<FBulletPathSegment>& Path);
    void All_ShowHit(const FVector_NetQuantize& Location, const FVector_NetQuantize& Rotation);
    void All_ShieldBroken();
    void All_AdjustTrail(class ACoilgunWeaponTrail* Trail, float Length);
};

class ACoilGunTrailSegment : public AActor
{
    float EffectsLife;
    float DeactivationTime;

    void OnStartEffects();
    void OnRep_EffectsLife();
    void OnEndEffects();
};

class ACoilgunWeaponTrail : public AActor
{
    class USceneComponent* Root;
    class UCapsuleComponent* Collision;
    class UNiagaraComponent* Trail;
    float ParticleTrailOffset;
    float TrailHalgLength;
    bool SpawnFireTrail;
    TSubclassOf<class UStatusEffect> FireEffect;
    TSubclassOf<class UStatusEffect> ElectricEffect;
    TArray<class TSubclassOf<UStatusEffect>> EffectsToApply;

    void OnRep_TrailHalfLength();
    void OnRep_SpawnFireTrail();
    void OnInited_Callback();
    void OnActorLeaveTrigger(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnActorEnteredTrigger(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class AConvertedRobot : public AEnemyDeepPathfinderCharacter
{
    class UEnemyComponent* EnemyComponent;
    class UPawnStatsComponent* PawnStats;
    class UOutlineComponent* outline;
    class UHitscanComponent* HitScan;
    class USingleUsableComponent* Usable;
    class USceneComponent* TurretRoot;
    class USkeletalMeshComponent* TurretMesh;
    class UPointLightComponent* MuzzleFlash;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* LightCone;
    class UStaticMeshComponent* LaserBeam;
    class USceneComponent* ShieldRoot;
    class UStaticMeshComponent* InnerShield;
    class UStaticMeshComponent* OuterShield;
    class UAudioComponent* PulsatingSoundComp;
    class UAudioComponent* LaserWarningSound;
    class UDamageComponent* Damage;
    FConvertedRobotOnStateChanged OnStateChanged;
    void RobotStateChangedSig(uint8 aState);
    FConvertedRobotOnShieldChanged OnShieldChanged;
    void RobotShieldSwitchSig(bool aIsGrowing);
    FConvertedRobotOnIntroductionStart OnIntroductionStart;
    void IntroductionStarted();
    bool ForceSit;
    class USoundBase* LaserSound;
    class USoundBase* LastPowerDownSound;
    class USoundBase* PowerUpSound;
    TWeakObjectPtr<class UAudioComponent> LaserSoundComp;
    float IntroductionTime;
    bool IsIntroducing;
    bool IntroductionDone;
    bool IsGrowingShield;
    float AimDownwardsOffset;
    float BigShieldScale;
    float SmallShieldScale;
    float ShieldGrowthRate;
    float LerpExp;
    float MinimumShieldSize;
    float TargetShieldSize;
    float IdleRotationSpeed;
    float LaserScaleRate;
    float MaxSearchAngle;
    bool DoSpecialWhenEnemy;
    bool DoSpecialWhenFriendly;
    bool PerfectTrackingWhenEnemy;
    bool PerfectTrackingWhenFriendly;
    bool ReplaceBurstAttack;
    class USoundBase* GrenadeFireSound;
    class UParticleSystem* GrenadeFireParticle;
    bool IsFiring;
    float TurretSpinSpeed;
    TArray<class AActor*> Parasites;
    int32 SpawnParasiteNumer;
    int32 MaxParasiteSlots;
    float ChanceToSpawnParasite;
    TSubclassOf<class AParasiteEnemy> ParasiteClass;
    bool SpinTurret;
    TSubclassOf<class AProjectile> SpecialAttackProjectile;
    TSubclassOf<class AProjectile> FriendlyProjectile;
    bool HasLockedOn;
    class USoundBase* TargetingSound;
    class UAnimSequenceBase* GrenadeShotAnimation;
    float LockOnTime;
    class USoundCue* ShootSound;
    float ShootSoundFadeout;
    class UAudioComponent* ShootSoundInstance;
    class USoundCue* ShootSoundTail;
    class UParticleSystem* MuzzleEffect;
    class UParticleSystem* TracerEffect;
    FRuntimeFloatCurve MuzzleLightCurve;
    float GunRange;
    float FireRate;
    float GrenadeFireRate;
    float BurstCooldown;
    int32 MinBurst;
    int32 MaxBurst;
    float TurretLerpSpeed;
    float DamageWhenFriendly;
    float FriendlyFriendlyFireMultiplier;
    bool StartedSpecialAttack;
    ERobotState TeamState;
    bool IsWalking;
    bool IsDoingSpecialAttack;
    class UStaticMeshComponent* TurretRotation;
    class AActor* CurrentTarget;

    void UpdateGunsInsideTerrain();
    void StartBossFight();
    void ParasiteDamaged(float aDamage);
    void OnWeaponsFired(const FVector& aHitResult);
    void OnUsed(class APlayerCharacter* aUser, EInputKeys Key);
    void OnSeePawn(class APawn* APawn);
    void OnRep_TeamState();
    void OnRep_Target();
    void OnRep_SpinTurret();
    void OnRep_IsIntroducting();
    void OnRep_IsFiring();
    void OnRep_IsDoingSpecialAttack();
    void OnParasiteDeath(class AActor* AParasiteEnemy);
    ERobotState GetTeamState();
    FVector GetPlayerMediumPoint();
    TArray<class AActor*> GetParasites();
    bool GetHasPoweredDown();
    void DestroyAttatchPoint(class USceneComponent* aComponent);
    void CannonEffects();
    void BP_OnStateChanged(ERobotState TeamState);
    void BP_OnShieldChanged(bool isGrowing);
    void BP_OnInstroduce();
};

class AConvertedRobotController : public AEnemyAIController
{
    float CheckRangeInterval;
    float MaxTimeInRange;
    float PersonalSpaceRange;
    FGameplayTagQuery FriendlyTargetingQuery;
    float SpecialAttackRange;
    float SpecialAttackFireRate;
    float WaitBeforeSpecial;
    float WaitAfterSpecial;
    float MinSpecialAttackCooldown;
    float MaxSpecialAttackCooldown;
    class UBehaviorTree* BehaviourTree;
    float UpdateTargetInterval;
    float PowerDownAfterSeconds;

    void ResetCloseTimer();
};

class ACrossbow : public AAmmoDrivenWeapon
{
    FCrossbowOnDefaultArrowEquippedChanged OnDefaultArrowEquippedChanged;
    void DefaultArrowEquippedChanged(bool InDefaultArrow);
    float FullDamageSpeed;
    TSubclassOf<class AProjectileBase> DefaultArrow;
    TSubclassOf<class AProjectileBase> SpecialArrow;
    float SpecialStatusEffectBonusTimeScale;
    TSubclassOf<class UStatusEffect> BattleFrenzyStatusEffect;
    TSubclassOf<class ACrossbowProjectileStuck> BasicSpawnableStuckProjectile;
    int32 SpecialAmmoMax;
    float SwitchTime;
    bool CanTrifork;
    bool IsDefaultArrowEquipped;
    float RecallProgress;
    class UStaticMeshComponent* AnimatedFPMesh;
    class UStaticMeshComponent* AnimatedTPMesh;
    bool SwitchIsQueued;
    ECrossbowSwitchState SwitchState;
    float OutOfAmmoSwapDelay;
    TSubclassOf<class AActor> AnimatedArrowSpawnable;
    float ExtraShotAngleDifference;
    class UCrossbowProjectileRecallable* HoveringRecallable;
    float SwitchTimeCof;
    class UStaticMesh* TriforkArrowMesh;
    class UStaticMesh* QuintPackArrowMesh;
    TArray<FProjectileSwitch> GearStatArrows;
    class UAnimMontage* SwitchMontage;
    class UAnimMontage* SwitchMontage_TP;
    class UAnimMontage* CharacterSwitchMontage;
    class UAnimMontage* ReloadMontage;
    class UAnimMontage* ReloadMontage_TP;
    class UAnimMontage* CharacterReloadMontage;
    TArray<class USoundCue*> ReloadSoundCues;

    void UpdateRecallProgress();
    void StartAmmoSwitch();
    void SetAnimatedTPMeshComponentFromBP(class AActor* animatedArrow);
    void SetAnimatedTPMeshComponent(class UStaticMeshComponent* Component);
    void SetAnimatedFPMeshComponentFromBP(class AActor* animatedArrow);
    void SetAnimatedFPMeshComponent(class UStaticMeshComponent* Component);
    void Server_UpdateRetrievableArrows(const int32& defaultAmmo, const int32& specialAmmo);
    void Server_SwitchAmmoType(class UProjectileLauncherBaseComponent* projectileLauncher, const ECrossbowSwitchState State);
    void Server_SetSwitchIsQueued(bool IsQueued);
    void OnRep_SwitchIsQueued();
    void OnRep_IsDefaultArrowEquipped();
    void OnProjectileFired(class AProjectileBase* Projectile);
    int32 GetTotalArrowCount(bool InDefaultArrowCount);
    float GetSpecialArrowEffectDuration(const TSubclassOf<class UStatusEffect>& Effect);
    bool GetIsDefaultArrowEquipped();
    void DestroyActor(class AActor* Actor);
    void DefaultArrowEquippedChanged__DelegateSignature(bool InDefaultArrow);
    void Client_RefillSpecialAmmo(float percentage);
    void Client_CallAddSpecialAmmo(const int32& Amount);
    void Client_CallAddDefaultAmmo(const int32& Amount);
};

class ACrossbowElectroBeam : public AElectroBeam
{
    float MaxRange;
    class ACrossbowProjectileStuck* Arrow0;
    class ACrossbowProjectileStuck* Arrow1;

    void RecalculateMovingBeam();
};

class ACrossbowProjectileBase : public AProjectile
{
    FCrossbowProjectileBaseOnDamageDealt OnDamageDealt;
    void OnCrossbowDamageDealt(const FHitResult& HitResult, const FVector& RelativeLocation);
    float StatusEffectTime;
    bool BansheePulseActive;
    class UCrossbowProjectileMagnetic* MagneticComponent;
    class UCrossbowProjectileRicochet* RicochetComponent;
    class UCrossbowStuckProjectileEffectBanshee* BansheeComponent;
    class UNiagaraComponent* BansheePulseComponent;
    TSubclassOf<class UCrossbowStuckProjectileEffectBanshee> BansheeComponentClass;
    TSubclassOf<class UCrossbowProjectileRecallable> RecallComponentClass;
    TSoftObjectPtr<UTexture2D> Icon;
    TSoftObjectPtr<UTexture2D> TriforkIcon;
    TSubclassOf<class ACrossbowProjectileStuck> SpawnableStuckProjectile;
    TSubclassOf<class UStatusEffect> OnDamageEffect;
    ECrossbowEffectApplication EffectApplication;
    uint8 SelectionPriority;
    bool CanEverBePickedUp;
    bool Penetrates;
    class USoundCue* ImpactSound;
    bool IsASpecialProjectile;
    class UDamageComponent* MainDamageComponent;
    class UDamageComponent* SimpleDamageComponent;
    class UStaticMesh* ProjectileMesh;
    float KillTrailAfterTime;
    bool OnlyTrailShown;

    void SetSimpleDamageComponentFromBP();
    void SetSimpleDamageComponent(class UDamageComponent* Component);
    void SetMainDamageComponentFromBP();
    void SetMainDamageComponent(class UDamageComponent* Component);
    void Server_HandleImpact(const FHitResult& HitResult, const FVector& RelativeLocation);
    void OnRep_OnlyTrailShown();
    void OnRep_BansheePulseActive();
    bool IsLocallyControlled();
    bool GetSpecialArrowEquipped();
    float GetScaledStatusEffectTime();
    void ApplyDamageEffects(const FHitResult& HitResult, const FVector& RelativeLocation);
};

class ACrossbowProjectileStuck : public AFSDPhysicsActor
{
    bool BansheePulseEnabled;
    class UCrossbowProjectileRecallable* RecallComponent;
    class UCrossbowStuckProjectileEffectBanshee* BansheeComponent;
    ECrossbowStuckType StuckProjectileEffect;
    bool IsPlayingElectricRangeEffect;
    TSubclassOf<class UStatusEffect> AppliedEffect;
    float StatusEffectTime;
    class USphereComponent* AttachmentRoot;
    class UNiagaraComponent* BansheePulseComponent;
    class USphereComponent* LaserCollider;
    class ACrossbowProjectileBase* BaseProjectile;

    void UsableChanged(bool CanUse);
    void OnUsedBy(class APlayerCharacter* Player, EInputKeys Key);
    void OnRep_BansheePulseEnabled();
    void MatchParentDestroy(class UHealthComponentBase* destroyed);
    bool IsLocallyControlled();
    bool GetSpecialArrowEquipped();
    void All_OnCavePointRemoved(class USceneComponent* Point);
};

class ACryosprayItem : public AAmmoDrivenWeapon
{
    class UProjectileLauncherComponent* projectileLauncher;
    class UDamageComponent* DamageComponent;
    class UStickyFlameSpawner* StickyFlames;
    class UDamageComponent* AoEColdDamageComponent;
    class UMotionAudioController* VelocityAudio;
    class UParticleSystemComponent* FlameParticleComponent;
    bool PressurizedProjectileEnabled;
    float PressurizedProjectileDelay;
    int32 PressurizeProjectileFullCost;
    class UParticleSystem* ChargeupParticles;
    class UParticleSystemComponent* ChargeupParticleInstance;
    FDecalData ImpactDecal;
    float DecalDelay;
    class UParticleSystem* ImpactParticles;
    class UParticleSystemComponent* ImpactParticleInstance;
    TArray<FName> FlameParameterNames;
    float DamageSphereRadius;
    float MaxFlameDistance;
    float FlameGrowthPerSecond;
    float FriendlyFireModifier;
    float ChargeupTime;
    float ChargeDownTime;
    bool isCharging;
    float ChargeProgress;
    bool bRepressurerising;
    float RepressurerisingDoneAtPct;
    float ChargeUpFadeOutTime;
    class UFSDAudioComponent* ChargeUpAudioComponent;
    float PressureTime;
    float PressureDropMultiplier;
    float PressureGainMultiplier;
    float CurrentPressure;
    float RePressureDuration;
    float RePressureProgress;
    TArray<class UItemUpgrade*> upgrades;
    bool LongReachEnabled;
    bool AoEColdEnabled;

    void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End, uint8 Power);
    void Server_TriggerAoECold();
    void Server_PreLaunchProjectile();
    void ReceiveRepressurisingChanged(bool Value);
    void OnTargetDamaged(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* HitComponent, class UFSDPhysicalMaterial* PhysicalMaterial);
    void OnRep_IsCharging(bool OldValue);
    void OnProjectileSpawned(class AProjectileBase* Projectile);
    void OnProjectileLaunched(const FVector& Location);
    void OnPressurizedPartileShoot();
    void OnPreProjectileLaunch();
    void All_PreLaunchProjectile();
};

class ADamageEnhancer : public AGrenade
{
    class UBoxComponent* RootCollision;
    class UHealthComponent* HealthComponent;
    class UDamageComponent* DamageComponent;
    class UStaticMeshComponent* Mesh;
    class USphereComponent* Sphere;
    class UBoxComponent* Box;
    class UHitscanComponent* HitscanComponent;
    class UReflectionHitscanComponent* ReflectionHitscanComponent;
    class UCapsuleHitscanComponent* CapsuleHitscanComponent;
    float EnhanceDamageBy;
    float LifetimeMaxDamage;
    float EnabledDuration;
    float TraceStepTime;

    void HitByHitScan(class UHitscanBaseComponent* Component, const FVector& HitPoint, const FVector& Origin);
    void Client_CompleteTrace(const FEnhancedTrace& trace);
    void BeginOverlapVsProjectile(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void All_PasteHitScanComponent(class UHitscanBaseComponent* HitScan);
    void All_PasteDamageComponent(class UDamageComponent* Damage);
};

class ADashingFlyingBugController : public AFSDFlyingBugController
{
};

class ADebrisDataActor : public AActor
{
};

class ADebrisLocationFinder : public AActor
{
    FDebrisLocationFinderOnFailedDelegate OnFailedDelegate;
    void Delegate();
    FDebrisLocationFinderOnSuceesDelegate OnSuceesDelegate;
    void Delegate();
    class UDebrisPositioning* Positioning;
    class UTerrainPlacementComponent* terrainPlacement;
    float MinRadius;
    float MaxRadius;
    float MaxExtraRadius;
    float MinDistanceToImportantRadius;
    int32 MaxIteration;
    int32 MaxChunksPerFrame;
    bool DestroyOnFinish;
    bool StopAtEnoughMatches;

};

class ADeepCSGWorld : public AActor
{
    class UTerrainMaterial* DebugCarveInsideTerrainMaterial;
    class UTerrainMaterial* DebugCarveOutsizeTerrainMaterial;
    class UTerrainMaterial* DebugCarveEdgeTerrainMaterial;
    class UTerrainMaterial* GoldTerrainMaterial;
    class UTerrainMaterial* MOMTerrrainMaterial;
    class UTerrainMaterial* NitraTerrrainMaterial;
    class UTerrainMaterial* EmptyTerrainMaterial;
    class UTerrainMaterial* DefaultBurntTerrainMaterial;
    class UTerrainMaterial* DefaultHardRockMaterial;
    class UTerrainMaterial* DefaultBedRockMaterial;
    class UTerrainType* GoldTerrainType;
    class UTerrainType* MOMTerrainType;
    class UTerrainType* RockTerrainType;
    class UTerrainType* CrystalTerrainType;
    class UTerrainType* EmptyTerrainType;
    class UTerrainType* DirtTerrainType;
    class UTerrainType* DefaultBurntTerrainType;
    class UTerrainMaterialsCollection* TerrainMaterials;
    TArray<class UDebrisSet*> StandardDebrisSets;
    TArray<class UDebrisBase*> DebrisLevelGenerationCarved;
    TArray<class UDebrisBase*> DebrisLargeCarved;
    TArray<class UDebrisBase*> DebrisSmallCarved;
    TArray<class UDebrisBase*> DebrisMeshes;
    class UMaterialInterface* DefaultScannerMaterial;
    TSubclassOf<class ACSGBuilder> TestLevelCarver;
    FBox TestLevelCarverBoundingBox;
    class ADebrisDataActor* DebrisActorInstance;
    int32 DebrisActorIndex;
    class AProceduralSetup* ProceduralSetup;
    TArray<class UObject*> TerrainMaterialAssets;
    class UAsyncPathRequests* AsyncPathRequests;
    FDeepCSGWorldOnBaseLayerCommitDone OnBaseLayerCommitDone;
    void TerrainBaseDone();
    FDeepCSGWorldOnBaseLayerFinalCommitDone OnBaseLayerFinalCommitDone;
    void TerrainBaseDone();
    TArray<class AActor*> TerrainAttachedActors;
    TArray<TWeakObjectPtr<UObject>> TerrainListeners;
    TArray<class UDebrisBase*> RegisteredDebrisList;
    TArray<FDebrisWhenCarving> DebrisWhenCarvingList;
    TArray<class UDebrisInstances*> DebrisInstanceList;
    TArray<FRuntimeSpawnedDebris> RuntimeSpawnedDebris;
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowAlwaysScannerComponents;
    TArray<TWeakObjectPtr<UPrimitiveComponent>> FogOfWarScannerComponents;
    TArray<class UDebrisBase*> DebrisHandles;
    FTerrainLateJoinData LateJoinData;
    TArray<FEncodedChunkId> VisibleChunks;

    void UnRegisterScannerComponent(class UPrimitiveComponent* Component);
    void TerrainOp_SpawnDebris(const FTerrainSpawnDebrisOperationData& Data);
    void TerrainOp_RemoveFloating(const FRemoveFloatingIslandOperationData& Data);
    void TerrainOp_PickAxe(const FPickaxeDigOperationData& Data);
    void TerrainOp_Melt(const FMeltOperationData& Data);
    void TerrainOp_Explode(const FGrenadeExplodeOperationData& Data);
    void TerrainOp_Drill(const FDrillOperationData& Data);
    void TerrainOp_CarveSTLMesh(const FCarveWithSTLMeshOperationData& Data);
    void TerrainOp_CarveSplineSegment(const FSplineSegmentCarveOperationData& Data);
    void TerrainOp_CarveCSG(const FCSGBuildOperationData& Data);
    void TerrainOp_CarveCollider(const FCarveWithColliderOperationData& Data);
    void TerrainMaterialDataLoaded();
    void SpawnDebris(class UDebrisMesh* Debris, const FVector& Pos, float Radius);
    void SetVisibleToScanner(const FVector& Center, const FVector& range);
    void SetRockMaterialForTest(class UTerrainMaterial* Material);
    void SelectDebrisSettings();
    void ResetEntireWorld();
    void RemoveDebrisInstance_TerrainOp2(int32 instance, int32 Component);
    void RemoveDebrisInSphere(const FVector& Position, float Radius, bool onlyFragile, bool alsoDurable, ESpecialDebrisType onlyType);
    void RegisterScannerComponent(class UPrimitiveComponent* Component, bool useFogOfWar);
    bool Raycast(FVector Start, FVector Direction, float MaxDistance, FCSGRaycastHitInfo& HitInfo, ELandscapeCellFilter Filter);
    bool Linecast(FVector Start, FVector End, FCSGRaycastHitInfo& HitInfo, ELandscapeCellFilter Filter);
    bool IsPositionVisibleToScanner(const FVector& Pos);
    bool IsPointInsideTerrain(const FVector& Pos);
    bool IsComponentRegisteredWithScanner(class UPrimitiveComponent* Component);
    bool InitialGenerationDone();
    int32 GetTerrainHash();
    int32 GetShadowQuality();
    class ADebrisDataActor* GetDebrisDataActor();
    void GetAllTerrainActorsAroundPoint(const FVector& Center, const FVector& range, TArray<class AActor*>& TerrainActors);
    void GenerateAllMeshes();
    void FinishGeneration_Blocking();
    float FindTotalVolumeOfMaterialInWorld(class UTerrainMaterial* Material);
    void CarveWithSTLMeshUsingTransform_Wait(class ADeepCSGWorld* CSGWorld, class USTLMeshCarver* MeshCarver, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    void CarveWithSTLMeshUsingTransform(class USTLMeshCarver* MeshCarver, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious);
    void CarveWithSTLMesh_Wait(class ADeepCSGWorld* CSGWorld, class USTLMeshCarver* MeshCarver, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    void CarveWithSTLMesh(class USTLMeshCarver* MeshCarver, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious);
    void CarveWithStaticMeshUsingTransform_Wait(class ADeepCSGWorld* CSGWorld, class UStaticMeshCarver* MeshCarver, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    void CarveWithStaticMeshUsingTransform(class UStaticMeshCarver* MeshCarver, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious);
    void CarveWithStaticMesh(class UStaticMeshCarver* MeshCarver, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious);
    void CarveWithSplineSegments(const TArray<FCarveSplineSegment>& Segments, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, EPreciousMaterialOptions Precious);
    void CarveWithSplineSegment(const FVector& SplineStart, const FVector& SplineStartTangent, const FVector& SplineEnd, const FVector& SplineEndTangent, float Radius, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, EPreciousMaterialOptions Precious);
    void CarveWithMeshUsingTransform_Wait(class ADeepCSGWorld* CSGWorld, class UStaticMesh* StaticMesh, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, float ExpensiveNoise, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    void CarveWithMeshUsingTransform(class UStaticMesh* StaticMesh, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, float ExpensiveNoise, EPreciousMaterialOptions Precious, CarveOptionsCellSize CarverSize);
    void CarveWithMesh_Wait(class ADeepCSGWorld* CSGWorld, class UStaticMesh* StaticMesh, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, FLatentActionInfo LatentInfo);
    void CarveWithMesh(class UStaticMesh* StaticMesh, class UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious);
    void CarveWithCSGBuild(TSubclassOf<class ACSGBuilder> CSGModel, const FTransform& Transform);
    float CalcApproximateTerrainDensity(FVector Pos, float Radius);
    class UTerrainMaterial* BPGetTerrainMaterial(int32 Handle);
    void BaseLayerCommitFinal(bool blocking);
    void BaseLayerCommit(bool blocking, bool scheduleTesselation);
    void AttachActorToTerrain(class AActor* Actor, FVector Pos);
    void ApplyBaseDebrisCarvers(const TArray<class UDebrisBase*>& Carvers);
};

class ADeepDiveTester : public AActor
{
    class UBiome* Biome;
    int32 Seed;
    EMissionStructure MissionStructure;
    TArray<FDeepDiveTesterItem> stages;

};

class ADeepPathfinderCharacter : public AFSDPawn
{
    class UDeepPathfinderMovement* PathfinderMovement;
    class USkeletalMeshComponent* Mesh;
    FName CenterMassSocketName;
    class UDeepPatherFinderCharacterAfflictionComponent* Affliction;
    float AnimationOffset;
    bool CanPlayerStandOn;
    bool UseDormancy;
    float StaggerDurationMultiplier;
    float StaggerImunityWindow;
    bool StaggerPauseLogic;
    bool IsHidden;
    bool IsStaggered;
    bool FrozenPauseLogic;
    class UPawnAffliction* CurrentStaggerAffliction;
    float AttackerRadius;
    TArray<class UMaterialInterface*> CachedMaterials;
    float AllowedInFormationChance;

    bool TryJoinFormation();
    void SetHidden(bool shouldHide);
    void OnPausedMovementElapsed();
    void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
    void LeaveFormation();
};

class ADefenseEvent : public AGameEvent
{
    float DefendDuration;
    TSubclassOf<class UWidget> DefendWidget;
    float Progress;

    void OnRep_Progress(float OldValue);
};

class ADefensePointActor : public AActor
{
    TSubclassOf<class AGameEvent> DefenseEvent;
    class AGameEvent* ActiveDefenceEvent;
    EDefendPointState DefendState;
    class USingleUsableComponent* DefendPointUsable;

    void SetState(EDefendPointState State);
    void OnRep_DefendState();
    void OnDefensePointActivated(class APlayerCharacter* Player, EInputKeys Key);
    void DefenseStart();
    void DefenseFail();
    void DefenseComplete();
};

class ADetPack : public AActor
{
    float UpgradedStaggerChance;
    float UpgradedStaggerDuration;
    float UpgradedFearFactor;
    float VisualDamageRadius;
    float IncreasedFearRadius;
    float IncreasedStaggerRadius;
    class UProjectileMovementComponent* Movement;
    class UExplosionComponent* Explosion;
    class USingleUsableComponent* UseComp;
    class USimpleHealthComponent* SimpleHealth;
    class ADetPackItem* Detonator;
    bool HasExploded;
    bool IsMoving;
    bool ExplodesOnDeath;
    bool HasExtraStaggerRadius;
    bool HasExtraFearRadius;

    void UseFearStaggerUpgrades();
    void RecieveHitObject();
    void OnRep_IsMoving();
    void OnRep_HasExploded();
    void OnExploded();
    void OnDetPackPickedUp(class APlayerCharacter* User, EInputKeys Key);
    void OnDetPackDeath(class UHealthComponentBase* HealthComponent);
};

class ADetPackItem : public AAnimatedItem
{
    TSubclassOf<class ADetPack> DetPackClass;
    TSubclassOf<class AItem> LoadoutProxy;
    class UAnimMontage* FPThrowMontage;
    class UAnimMontage* TPThrowMontage;
    class UAnimMontage* FP_DetonateAnim;
    class UAnimMontage* WPN_DetonateAnim;
    class UAnimMontage* FP_EquipDetonatorAnimation;
    class UAnimMontage* WPN_EquipDetonatorAnimation;
    class USkeletalMeshComponent* DetonatorFPMesh;
    class USkeletalMeshComponent* DetonatorTPMesh;
    class UForceFeedbackEffect* DetonatorTriggerForceFeedback;
    class UCapacityHoldingItemAggregator* Capacity;
    float SupplyStatusWeight;
    float ThrowVelocity;
    float EnheiritOwnerVelocityScale;
    float ThrowAngle;
    float CooldownAfterThrow;
    float CooldownAfterDetonation;
    float ThrowDelay;
    float ThrowZOffset;
    class UDialogDataAsset* ShoutDetPackPlaced;
    class UDialogDataAsset* ShoutOutOfAmmo;
    float CooldownLeft;
    TArray<class ADetPack*> ThrownPacks;
    TArray<class UItemUpgrade*> DetPackUpgrades;
    bool IsDetonatorOut;
    bool HasThrownPack;

    void Simulate_ThrowGrenade();
    void Server_ThrowGrenade();
    void Server_Detonate();
    void Server_CycleItem();
    void Receive_OnRep_IsDetonatorOut();
    void OnRep_IsDetonatorOut();
    void OnDetonatingFinished();
    int32 GetCurrentGrenades();
};

class ADisplayCase : public AActor
{
    class USceneComponent* Root;
    class USceneComponent* ContentAttachPoint;
    class USkeletalMeshComponent* ContentMesh;
    FDisplayCaseOnContentUpdated OnContentUpdated;
    void DisplayCaseDelegate(const FDisplayContent& Content);
    FRuntimeFloatCurve RelativeZOffset;
    FRuntimeFloatCurve ReactZOffsetCof;
    FRuntimeFloatCurve ReactTimeDilationCof;
    TArray<FDisplayContent> Contents;
    float RotationSpeed;
    float BeerMugSpawnChancePercent;
    float BarrelSpawnChancePercent;
    float TimeMultiplier;
    float SizeMultiplier;
    int32 ContentIndex;
    class UDialogDataAsset* BeerMugShout;

    void RefreshContent();
    void PlayReactionAnimation();
    void OnRep_ContentIndex();
    bool IsSpecialContent();
    void InitializeCase();
    bool GetCurrentContent(FDisplayContent& currentContent);
    void ChangeContent();
};

class ADorrettaHead : public ACarriableItem
{
    class UCarriableInstantUsable* Usable;
    class UCarriableComponent* CarriableComponent;

};

class ADoubleDrillItem : public ADualAnimatedItem
{
    class UFirstPersonParticleSystemComponent* FP_Left_DrillParticles;
    class UFirstPersonParticleSystemComponent* FP_Right_DrillParticles;
    class UDamageComponent* DamageComponent;
    class UFSDAudioComponent* AudioComponent;
    class UDoubleDrillAggregator* Aggregator;
    class UAnimMontage* FPMineMontage;
    class UAnimMontage* TPMineMontage;
    class UAnimMontage* FPOverheat;
    class UAnimMontage* TPOverheat;
    class UAnimMontage* FPGunsling;
    class UAnimMontage* TPGunsling;
    FName MiningSpeedAudioParamterName;
    class UParticleSystem* DrillParticles;
    class UForceFeedbackEffect* DrillRumble;
    float BlockParticlesScaleFP;
    float BlockParticlesScaleTP;
    EDoubleDrillState State;
    float MovementPenalty;
    float MiningRate;
    float HeatReductionPerKill;
    FVector CarveSize;
    float CarveNoise;
    float CarverRayCastLength;
    float CarveTerrainDistanceCheck;
    float TimeToNextMine;
    float CurrentDrillSpeed;
    float DamageDistance;
    float DamageRadius;
    float FriendlyDamageRadius;
    float DamageRate;
    float Damage;
    float armorDamageMultiplier;
    class UDamageClass* DamageClass;
    float FriendlyFireModifier;
    float MaxFuel;
    float Fuel;
    float FuelUsePerDig;
    float FuelUsePerMelee;
    float SupplyStatusWeight;
    class UDialogDataAsset* ShoutOutOfFuel;
    TArray<FHitResult> HitCache;
    TArray<FDoubleDrillDamageItem> DamageCache;
    float DrillParticlesDuration;
    bool IsMining;
    bool IsGunslinging;

    void Server_StopMining();
    void Server_StartMining();
    void Server_DoDamage(const TArray<FDoubleDrillDamageItem>& Targets);
    void Server_DigBlock(FVector_NetQuantize Start, FVector_NetQuantize End);
    void OnTargetKilled(class AActor* Target, class UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    void OnStopDrilling();
    void OnStartDrilling();
    void OnRep_SimulatingMining();
    void OnRep_IsGunslinging();
    void OnDrillParticlesTimerElapsed();
    void Client_Resupply(float percentage);
    void BP_OnDrillDamage();
    void All_SimulateDigDebris(FVector_NetQuantize Position, int32 DebrisIndex);
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool SpawnParticles, int32 Material);
    void All_SimulateDamage(const TArray<FDoubleDrillDamageItem>& Targets);
};

class ADrinkableActor : public AActor
{
    class UDrinkableDataAsset* DrinkableData;

    void Pickup(class APlayerCharacter* byCharacter);
    void OnRep_DrinkableData();
    void Fill();
};

class ADrinkableItem : public AAnimatedItem
{
    class UDrinkableDataAsset* DrinkableData;

    void OnRep_DrinkableData();
    void OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void Consume();
    void ClientConsumed();
    bool CheckCanSalute();
};

class ADroneBase : public ADeepPathfinderCharacter
{
    class UPointLightComponent* StateLight;
    EDroneState DefaultState;
    TArray<class UDroneStateComponentBase*> DroneStates;
    EDroneState CurrentState;

    void OnRep_CurrentState(EDroneState Previous);
};

class ADroneCharacter : public ADeepPathfinderCharacter
{
    class UHealthComponent* HealthComponent;
    class UOutlineComponent* OutlineComponent;
    class USimpleObjectInfoComponent* ObjectInfo;

};

class ADroneControllerBase : public AAIController
{
    TArray<TWeakObjectPtr<APlayerCharacter>> ControllingPlayers;

    void OnShout(class APlayerCharacter* Player);
    void OnSecondaryLaserPointer(const FLaserPointerTarget& HitInfo);
    void OnSalute(class APlayerCharacter* Player);
    void OnPrimaryLaserpointer(const FLaserPointerTarget& HitInfo);
    void OnPlayerLeave(class AFSDPlayerState* State);
    void OnPlayerJoin(class APlayerCharacter* Player);
};

class ADroneStream : public AActor
{
    class USceneComponent* Root;
    class UCapsuleComponent* Collision;
    bool CheckStartOverlaps;
    bool CheckEndOverlaps;

    void Receive_OnAbilityDataSet();
    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    class ABosco* GetBosco();
};

class ADroneVacuumStream : public ADroneStream
{
    class USceneComponent* VacuumPoint;
    TArray<class AFoamPuddle*> PuddlesInside;

    void Server_StartVacuumingPuddle(class AFoamPuddle* puddle);
};

class ADropPod : public ATeamTransport
{
    FMiningPodDialogs Dialogs;

    FVector GetDonkeyReturnPickupLocation();
};

class ADropPodCalldownLocationItem : public AGenerationItem
{
    TSubclassOf<class AActor> CalldownClass;

};

class ADropRockCrackerPodsSpawner : public ADebrisLocationFinder
{
    class APlagueMeteor* meteor;
    TSoftClassPtr<APlagueMeteor> MeteorActorClass;
    TSoftClassPtr<AActor> RockCrackerIndicationClass;

};

class ADroppableOutpost : public AActor
{
    float DropHeight;
    FVector TargetLocation;
    class UAutoCarverComponent* AutoCarver;
    class UCurveFloat* DepartCurve;
    float CarverRotationSpeed;
    FVector CarverScale;
    float DepartureTime;
    FVector StartLocation;
    EDroppableOutpostState State;
    float DrillSpeed;
    float FreeFallAcceleration;
    float FreeFallSpeed;

    void StartDrilling();
    void PrepForTakeOff();
    void OnRep_State();
    void OnPrepForTakeOff();
    void OnDroppodImpact();
    void OnDrillingStarted();
    void OnDeparting();
    class ADroppableOutpost* DropOutpostToMission(class UObject* WorldContextObject, TSubclassOf<class ADroppableOutpost> podClass, const FVector& Location);
    void Depart();
};

class ADualAnimatedItem : public AItem
{
    class UAnimInstance* FPAnimInstance;
    class UPlayerAnimInstance* TPAnimInstance;
    class USkeletalMeshComponent* FPRMesh;
    class USkeletalMeshComponent* FPLMesh;
    class USkeletalMeshComponent* TPRMesh;
    class USkeletalMeshComponent* TPLMesh;
    class UAnimMontage* FP_EquipAnimation;
    class UAnimMontage* TP_EquipAnimation;
    float EquipDuration;
    class UItemCharacterAnimationSet* CharacterAnimationSet;

    class USkeletalMeshComponent* GetRItemMesh();
    class USkeletalMeshComponent* GetLItemMesh();
};

class ADualMachinePistols : public ADualWieldWeapon
{
    TSubclassOf<class UStatusEffect> EmptyClipStatusEffect;

    void Server_TriggerStatusEffect();
};

class ADualWieldWeapon : public AAmmoDrivenWeapon
{
    class UFirstPersonSkeletalMeshComponent* FPMeshLeft;
    class USkeletalMeshComponent* TPMeshLeft;
    class UAnimMontage* WPN_Left_Reload;
    class UAnimMontage* WPN_Left_TP_Reload;
    class UFXSystemAsset* CasingParticlesLeft;
    FName MuzzleLeft;

};

class AElectricalSMG : public AAmmoDrivenWeapon
{
    TArray<class ARedeployableSentryGun*> SentriesWithActiveIndicators;
    TSubclassOf<class ARedeployableSentryGun> SentryGunClass;
    TSubclassOf<class UStatusEffect> AoEStatusEffect;
    class UParticleSystem* AoEParticle;
    class USoundCue* AoESound;
    float AoEStatusEffectChance;
    float AoEStatusEffectRange;
    bool TurretPlasmaLineEnabled;
    bool TurretEMPDischargeEnabled;

    void OnTargetDamaged(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* HitComponent, class UFSDPhysicalMaterial* PhysicalMaterial);
    void OnStatusEffectPushed(class UHealthComponentBase* Health);
    void All_OnAoETriggered(const FVector_NetQuantize& Location, const FVector_NetQuantizeNormal& Normal);
};

class AElectroBeam : public AActor
{
    class UCapsuleComponent* collider;
    TArray<class AActor*> ParentPlants;
    FVector LocationOffset;
    FVector_NetQuantize SourceLocation;
    FVector_NetQuantize TargetLocation;
    class USceneComponent* DelaySource;
    class USceneComponent* DelayTarget;
    class UParticleSystemComponent* BeamEffect;
    class UAudioComponent* ZappSound;
    TArray<class TSubclassOf<UStatusEffect>> StatusEffectsToApply;
    float MaxLitTime;
    float MinLitTime;
    float MaxUnlitTime;
    float MinUnlitTime;
    bool ShouldFlicker;
    bool IsLit;

    void SetTarget(class USceneComponent* TargetPoint);
    void SetSource(class USceneComponent* SourcePoint);
    void SetParents(class AActor* firstParent, class AActor* secondParent);
    void RecalculateBeam();
    void OnRep_TargetLocation();
    void OnRep_SourceLocation();
    void OnRep_Flag();
    void OnParentDeath(class UHealthComponentBase* HealthComponent);
    class UParticleSystemComponent* GetParticleEffect();
    class UCapsuleComponent* GetCollider();
    class UAudioComponent* GetAudio();
    void DelayedSetTarget(class USceneComponent* TargetPoint);
    void DelayedSetSource(class USceneComponent* SourcePoint);
    void DeactivateCollisionAndEffect();
};

class AElevatorPlant : public AActor
{
    FElevatorPlantOnStartTimelineEvent OnStartTimelineEvent;
    void StartTimelineEvent();
    FElevatorPlantCOnStateChangedEvent COnStateChangedEvent;
    void COnStateChanged(bool IsIdling);
    class UAudioComponent* MovingSoundComponent;
    class USoundCue* GrabSound;
    FVector RestPositionOffset;
    FVector RelativeRestLocation;
    FVector RelativeDestinationLocation;
    FVector BaseTangentDirectionOffset;
    FVector LeafTangentDirectionOffset;
    FVector LeafLocationNoise;
    FRotator LeafNoiseRotator;
    float BaseTangentLength;
    class USplineMeshComponent* CSplineMesh;
    class USceneComponent* CVineBase;
    class USceneComponent* CVineLeaf;
    float InitialBaseTangentLength;
    float LeafLocationNoiseSize;
    float VineMovementAlpha;
    bool IsMoving;
    bool IsOpen;
    bool Extend;
    class UCurveFloat* DipOffsetCurve;
    class UCurveFloat* LocationLerpCurve;

    void SetLeafNoiseRotator(const FRotator& aRotator);
    void SetLeafLocationNoise(const FVector& aVector);
    void SetIsOpen(bool aValue);
    void SetIsExtended(bool aValue);
    void SetBaseTangentLength(float Value);
    void SetBaseTangentDirectionOffset(const FVector& aVector);
    void OnRep_RelavtiveDestinationLocation();
    void OnRep_Open();
    void OnMatchStarted();
    void MoreTick(const FVector& DipOffset, float aValue);
    float GetVineMovementAlpha();
    FVector GetRelativeRestLocation();
    FVector GetRelativeDestinationLocation();
    float GetLeafLocationNoiseSize();
    bool GetIsMoving();
    bool GetIsExtended();
    float GetInitialTangentLenth();
};

class AEncounterActor : public AActor
{

    void Receive_EncounterHasSpawned(class APawn* spawnedPawn);
};

class AEnemyAIController : public AFSDAIController
{
};

class AEnemyDeepPathfinderCharacter : public ADeepPathfinderCharacter
{
    class UEnemyHealthComponent* HealthComponent;
    FQueuedMontage QueuedMontage;

    void SwitchToDynamicBaseShader(class UMaterialInterface* baseShader, class UMeshComponent* MeshComponent);
    void OnRep_QueuedMontage();
};

class AEnemyPawn : public AFSDPawn
{
    class UEnemyHealthComponent* Health;
    class UPawnStatsComponent* Stats;
    class UEnemyPawnAfflictionComponent* Affliction;
    class UEnemyComponent* enemy;
    FName CenterMassSocketName;
    FQueuedMontage QueuedMontage;
    TArray<class UMaterialInterface*> CachedMaterials;

    class UMeshComponent* Receive_GetMeshComponent();
    void OnRep_QueuedMontage();
    class USkeletalMeshComponent* GetMesh();
};

class AEnemyShowroomItem : public AShowroomItem
{
    EShowroomScaling Scaling;

};

class AEscortDestination : public AActor
{
    FEscortDestinationOnShellCracked OnShellCracked;
    void ShellCrackedSignature(int32 numberOfShellsCracked);
    class UDamageComponent* EndExplosionDamage;
    float NextBreakpoint;
    int32 StageForAnalytics;
    int32 SecondsToDestroyHeartstone;
    TArray<float> BreakpointsPercent;
    float Radius;
    float ShellThickness;

    void MeltPlatforms(class ADeepCSGWorld* CSGWorld, TArray<FVector> meltPoints, float meltRadius);
    class UTerrainMaterial* GetTerrainMaterialByHandle(class ADeepCSGWorld* CSGWorld, int32 materialHandle);
    int32 GetSecondsToDestroyObjective();
    FVector GetClosestPointOnRadius(FVector CurrentLocation, int32 numberOfShellsCracked, FVector& dirFromCenter);
};

class AEscortMule : public AFSDPawn
{
    FEscortMuleOnMuleActivated OnMuleActivated;
    void MuleActivatedSignature();
    FEscortMuleOnSpeedChanged OnSpeedChanged;
    void SpeedChangedSignature(float newSpeedModifier);
    FEscortMuleOnFullCanistersChanged OnFullCanistersChanged;
    void IntDelegate(int32 IntValue);
    FEscortMuleOnExitGaragePathSet OnExitGaragePathSet;
    void GaragePathSignature(const TArray<FVector>& Path);
    FEscortMuleCheat_SetMuleSpeed Cheat_SetMuleSpeed;
    void FloatDelegate(float FloatValue);
    FEscortMuleCheat_JumpToNextPhase Cheat_JumpToNextPhase;
    void Delegate();
    class UFriendlyHealthComponent* HealthComponent;
    class USimpleObjectInfoComponent* ObjectInfo;
    class URestrictedResourceBank* ResourceBank;
    FTransform TargetTransform;
    FTransform PreviousTransform;
    EEscortMissionState State;
    class UEscortObjective* EscortObjective;
    FEscortMuleMovementState MovementState;
    float SpeedModifier;
    class USkeletalMeshComponent* Mesh;
    class UOutlineComponent* OutlineComponent;
    float HealPerTickNormal;
    float HealPerTickUnderAttack;
    bool CannisterVisible_Left;
    bool CannisterVisible_Right;
    FVector NextStop;
    bool IsCarvingTunnel;
    int32 FullCanisters;
    TArray<FEscortMuleExtractorSlot> ExtractorSlots;

    bool TryHeal(class APlayerCharacter* User, float Amount);
    void SetTargetTransform(FTransform InTransform);
    void SetSpeedModifier(float inSpeedModifier);
    void SetFullExtracterAttached(class UInstantUsable* Usable);
    void SetExtractorDetached(class UInstantUsable* Usable);
    void SetExitGaragePath(const TArray<FVector> Path);
    void ResetExtractors();
    void PathIsReady();
    void OnRep_SpeedModifier();
    void OnRep_MovementState();
    void OnRep_IsCarvingTunnel();
    void OnRep_ExtractorSlots();
    void OnObjectiveStateChanged(EEscortMissionState oldState);
    void OnExtractorSlotChanged(const FEscortMuleExtractorSlot& Slot, int32 Index);
    void OnExtractorDetached(class AExtractorItem* Item);
    void ObjectiveStateChange(EEscortMissionState NewState);
    EEscortExtractorState GetExtractorState(class UInstantUsable* Usable);
    void ActivateMule();
};

class AEscortMuleAIController : public AFSDAIController
{
    TArray<FVector> CurrentPath;
    TArray<FVector> GaragePath;
    int32 PathIndex;
    int32 CurrentRoom;
    class UEscortObjective* EscortObj;
    int32 TunnelStartIndex;
    int32 TunnelEndIndex;
    FRandomStream RandomStream;

    void SetDozerNextPathSegment();
    void OnPathComplete();
    FVector GetPointBehindEscortMule(float Distance);
    TArray<FVector> GetPathForDebug(int32 Segment);
    FVector GetPathEndTagent();
    void GetFullPath(TArray<FVector>& outPath);
    void FindDozerPath(FVector StartPosition);
};

class AEscortMuleTrack : public AActor
{
    FGameplayTagContainer GameplayTags;

};

class AEventRewardDispenser : public AActor
{
    FUniqueNetIdRepl PlayerId;
    class AEventRewardFrame* DispenserFrame;
    bool PoweredUp;
    bool IsActivated;
    class USchematic* SelectedReward;

    void SetSelectedReward(class USchematic* InReward);
    bool PowerUp(class APlayerCharacter* InPlayerCharacter);
    void OnRewardSelected();
    void OnRep_SelectedReward();
    void OnRep_PoweredUp();
    void OnRep_PlayerId();
    void OnRep_IsActivated();
    void OnPoweredUp();
    void OnOwnerAssigned();
    void OnOpenDispenser();
    bool IsOwningPlayer(class APlayerCharacter* PlayerCharacter);
    class APlayerCharacter* GetPlayerCharacter();
    class AFSDPlayerState* GetPlayer();
};

class AEventRewardFrame : public AActor
{
    class USpecialEventUsableComponent* EventUsable;
    TArray<class AEventRewardDispenser*> Dispensers;
    bool keyInserted;
    TArray<FString> EventPlayerIDs;

    void TurnOff();
    void SetKeyInserted(bool keyInserted);
    void SetDispenseRewards(bool dispensRewards);
    void RegisterDispenser(class AEventRewardDispenser* Dispenser);
    bool GetDispensRewards();
};

class AEventStarterButton : public AActor
{
    class USceneComponent* Root;
    class USingleUsableComponent* Usable;
    FEventStarterButtonOnBootupEvent OnBootupEvent;
    void BootUpDelegate(class AEventStarterButton* pushedButton);
    bool Booted;
    bool IsOpenForUse;
    bool IsEventActive;

    void SetIsEventActive(bool IsEventActive);
    void OnUseProgress(float Progress);
    void OnRep_OpenForUse();
    void OnRep_Booted();
    void OnOpenedForUse(bool wasOpened);
    void OnBooted();
    void CloseForUse(class APlayerCharacter* User, EInputKeys Key);
    void BootUpEvent();
};

class AExampleActor : public AActor
{
    FExampleActorOnExampleUpdatedEvent OnExampleUpdatedEvent;
    void ExampleUpdatedDelegate();
    float Field;

    void Server_ExampleFunction();
    void Client_ExampleFunction();
    void All_ExampleFunction();
};

class AExplosiveBarrelEvent : public AGameEvent
{
    class UDamageComponent* EndDamage;

};

class AExtractorItem : public AAnimatedItem
{
    FExtractorItemOnCurrentLoadChangedEvent OnCurrentLoadChangedEvent;
    void FloatDelegate(float FloatValue);
    FExtractorItemOnCharacterEquipChange OnCharacterEquipChange;
    void CharacterChangedDelegate(class ACharacter* Character);
    class UBoxComponent* DroppedCollider;
    class USkeletalMeshComponent* DroppedMesh;
    class UFirstPersonParticleSystemComponent* FP_DrillParticles;
    class UFSDAudioComponent* AudioComponent;
    class UPointLightComponent* SurfaceLight;
    class UParticleSystemComponent* MeltingParticles;
    class UParticleSystemComponent* InvalidSurfaceParticles;
    class UParticleSystemComponent* FPMuzzleParticles;
    class UParticleSystemComponent* FPMuzzleInvalidParticles;
    class UParticleSystemComponent* TPMuzzleParticles;
    class UParticleSystemComponent* TPMuzzleInvalidParticles;
    class UAnimMontage* FPMineMontage;
    class UAnimMontage* TPMineMontage;
    class UAnimMontage* FPGunsling;
    class UAnimMontage* TPGunsling;
    FName MiningSpeedAudioParamterName;
    class UParticleSystem* DrillParticles;
    class UForceFeedbackEffect* DrillRumble;
    float BlockParticlesScaleFP;
    float BlockParticlesScaleTP;
    EExtractorState State;
    float MovementPenalty;
    float CarverRayCastLength;
    float CarveTerrainDistanceCheck;
    float CurrentDrillSpeed;
    float DrillParticlesDuration;
    class UResourceData* ExtractetMaterial;
    float TimeBeforeInvalidShout;
    class UDialogDataAsset* InvalidSurfaceShout;
    class UDialogDataAsset* ShoutFull;
    class USoundCue* DigSound;
    bool IsMining;
    bool IsGunslinging;
    bool ReadyToExtract;
    class UParticleSystem* VacuumEffect;
    class UParticleSystem* ChunkSplatEffect;
    class USoundCue* ChunkSplatSound;
    float MaxDifference;
    float MeltingTime;
    float ChunkMultiplier;
    float CollectChunkCooldown;
    float CrossfadeSpeed;
    float VacuumEffectOffset;
    float MaxCapacity;
    float PlayerCountBonus;
    FColor SurfaceLightInitialColor;
    FColor SurfaceLightEndColor;
    float SurfaceLightMinIntensity;
    float SurfaceLightMaxIntensity;
    float CurrentLoad;

    void SetCanPickup(bool canPickup);
    void Server_StopMining();
    void Server_StartMining();
    void Server_SetReadyToExtract(bool IsReady);
    void Server_DigBlock(FVector_NetQuantize Start, FVector_NetQuantize End);
    void Server_CollectChunk(class AResourceChunk* chunk);
    void ResetCurrentLoad();
    void OnValidSurfaceChanged(bool IsValid);
    void OnThrown(FVector Direction);
    void OnStopDrilling();
    void OnStartDrilling();
    void OnRep_SimulatingMining();
    void OnRep_IsGunslinging();
    void OnRep_CurrentLoad();
    void OnCurrentLoadChanged(float load);
    void OnChunkCooldownOver();
    bool IsFull();
    class UBoxComponent* GetRootCollider();
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool SpawnParticles, int32 Material);
    void All_ChunkSplat(class AResourceChunk* chunk);
    void AddResource(float Amount);
};

class AExtruderPlant : public AActor
{
    class USkeletalMeshComponent* SkeletalMesh;
    class UAnimationAsset* ExtrudeAnimation;
    class UAnimationAsset* RetractAnimation;
    class UAudioComponent* audio;

};

class AFSDAIController : public AAIController
{
    FFSDAIControllerOnMessageBehaviorTreeEvent OnMessageBehaviorTreeEvent;
    void MessageBehaviorTree(FName Message);
    FFSDAIControllerOnAlertedEvent OnAlertedEvent;
    void Delegate();
    TEnumAsByte<ECollisionChannel> LOSTraceChannel;
    TWeakObjectPtr<class APlayerCharacter> TargetedPlayer;

    void SetAlerted(bool isAlerted);
    void ResumeLogic();
    void RegisterBlackboardChanges(const FName& Key);
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void PauseLogic();
    void OnAttackingChanged(bool attacking);
    bool GetIsAlerted();
};

class AFSDFlyingBugController : public AFSDAIController
{
    class UBehaviorTree* BehaviourTree;
    float UpdateLosInterval;
    bool SetTargetOnAlert;
    bool SyncTargetWithBB;

    void OnFlyingBugAlerted();
};

class AFSDGameMode : public AGameMode
{
    FFSDGameModeOnMatchStarted OnMatchStarted;
    void MatchStartedSignature();
    FFSDGameModeOnAllControllersReady OnAllControllersReady;
    void AllReadySignature();
    FFSDGameModeOnPlayerLoggedIn OnPlayerLoggedIn;
    void PlayerLoggedIn(class AFSDPlayerController* Controller);
    FFSDGameModeOnDonkeyCalled OnDonkeyCalled;
    void CallDonkey(FVector Position, class APlayerCharacter* requester);
    bool GenerationStarted;
    class UPheromoneSpawnerComponent* PheromoneComponent;
    class UEnemySpawnManager* EnemySpawnManager;
    class UObjectivesManager* ObjectivesManager;
    class UKeepInsideWorld* KeepInsideWorld;
    class UMissionManager* MissionManager;
    class UEncounterManager* EncounterManagerComponent;
    class UCritterManager* CritterManager;
    TArray<class AFSDPlayerController*> PlayerControllers;
    class UFormationsManagerComponent* FormationsManager;
    TSoftClassPtr<ATeamTransport> DropPodClass;
    TSoftClassPtr<AMolly> MuleClass;
    TSoftClassPtr<ATeamTransport> DropodEscapeClass;
    TSoftClassPtr<ABosco> droneClass;
    TSoftClassPtr<UWidget> CheatUI;
    float ContinueCountdown;
    bool PreventAllLatejoin;
    bool PreventLateJoinOnMissionStart;
    float PlayerSpawnHeightOffset;
    float FriendlyFireGracePeriod;
    TArray<class UEnemyDescriptor*> ForcedEnemyPool;
    bool UseNormalEncounters;
    bool UseStationaryEncounter;
    bool AllowSpecialEncounters;
    class UEnemyWaveManager* CachedWaveManager;

    void StartGame();
    void SpawnMissionCriticalItems(const ECriticalItemPass& pass);
    void SignalEndLevelToClients();
    void ResetDeaths();
    void RecieveEndLevel();
    void RecieveAllDwarvesDown();
    void Recieve_ContinueTimerEnded();
    void ReceivePostSeamlessTravel();
    void OnObjectivesInitialized();
    void OnLevelGenerationComplete(int32 pass);
    void OnControllerDestroyed(class AActor* Controller);
    void LoadSpaceRig();
    void LoadMission(FString MapName, TSoftClassPtr<AFSDGameMode> optionalGameMode);
    void HostAbortMission();
    void HandlePlayerBanning(class AFSDPlayerController* FSDPlayerController);
    class UEnemyWaveManager* GetWaveManager();
    class AActor* GetPlayerStart(class AFSDPlayerController* Controller);
    TSubclassOf<class AMolly> GetMuleClass();
    bool GetMissionWasAborted();
    class UEncounterManager* GetEncounterManager();
    FSoftObjectPath GetDropPodPath();
    FSoftObjectPath GetDropPodEscapePath();
    TSubclassOf<class ATeamTransport> GetDropPodEscapeClass();
    TSubclassOf<class ATeamTransport> GetDropPodClass();
    FSoftObjectPath GetDronePath();
    TSubclassOf<class ABosco> GetDroneClass();
    class UDifficultyManager* GetDifficultyManager();
    int32 GetCurrentLevel();
    bool FSDSetPause(class APlayerController* PC, EPauseReason pauseReason);
    bool FSDKickPlayer(class APlayerController* KickedPlayer, const FText& KickReason);
    bool FSDClearPause(EPauseReason pauseReason);
    void EndLevel();
    void DonkeyButtonPressed();
    void DestroyNonLocalPlayers();
    void Debug_ShowPlayerSpheres();
    bool AllPlayersHaveSelectedCharacter();
    bool AllPlayersHaveGeneratedLevel();
    void AddControllerForGracePeriod(class APlayerCharacter* APlayerCharacter);
    void AboutMission();
};

class AFSDGameModeSpaceRig : public AFSDGameMode
{
    uint8 AmountOfPlayersSpawnedInMedbay;
    bool StartedSession;

    class AActor* GetFreeSpawnOfType(ESpacerigStartType aType, class AFSDPlayerController* AController);
};

class AFSDGameSession : public AGameSession
{
    TArray<FUniqueNetIdRepl> KickedPlayers;
    TArray<FUniqueNetIdRepl> BannedPlayers;

};

class AFSDGameState : public AGameState
{
    FFSDGameStateOnMissionTimeUpdated OnMissionTimeUpdated;
    void Int32DelegateEvent(int32 Value);
    FFSDGameStateOnTerrainGenerated OnTerrainGenerated;
    void DelegateEvent();
    FFSDGameStateOnTerrainGenerationStarting OnTerrainGenerationStarting;
    void DelegateEvent();
    FFSDGameStateOnMatchStarted OnMatchStarted;
    void DelegateEvent();
    FFSDGameStateOnMatchEnded OnMatchEnded;
    void DelegateEvent();
    FFSDGameStateOnGameEventCompletedEvent OnGameEventCompletedEvent;
    void GameEventCompletedDelegate(FText GameEventName);
    FFSDGameStateOnPlayerJoined OnPlayerJoined;
    void PlayerDelegate(class AFSDPlayerState* PlayerState);
    FFSDGameStateOnPlayerLeave OnPlayerLeave;
    void PlayerDelegate(class AFSDPlayerState* PlayerState);
    FFSDGameStateOnContinueActive OnContinueActive;
    void DelegateEvent();
    FFSDGameStateOnContinueCountdownChanged OnContinueCountdownChanged;
    void DelegateEvent();
    FFSDGameStateOnAllDwarvesDown OnAllDwarvesDown;
    void DelegateEvent();
    FFSDGameStateOnTeamMemberCampaignMissionChanged OnTeamMemberCampaignMissionChanged;
    void DelegateEvent();
    FFSDGameStateOnEnemyKilledEvent OnEnemyKilledEvent;
    void EnemyKilledDelegate(const FGameplayTagContainer& enemyTags, class AActor* killedEnemy);
    FFSDGameStateOnPlayerCharacterRegistered OnPlayerCharacterRegistered;
    void PlayerCharacterDelegate(class APlayerCharacter* PlayerCharacter);
    int32 CurrentLevel;
    class ATeamTransport* EscapePod;
    FString FSDSessionID;
    FFSDGameStateOnBoscoReviveCounterChanged OnBoscoReviveCounterChanged;
    void BoscoReviveCounterChanged(int32 RevivesLeft);
    bool bTeamDown;
    FFSDGameStateOnTeamDown OnTeamDown;
    void BoolDelegate(bool boolValue);
    FFSDGameStateOnObjectivesCompleted OnObjectivesCompleted;
    void DelegateEvent();
    FFSDGameStateOnObjectiveAdded OnObjectiveAdded;
    void ObjectivesDelegate(class UObjective* Objective);
    FFSDGameStateOnDifficultyChanged OnDifficultyChanged;
    void DifficultyDelegate(class UDifficultySetting* Setting);
    FFSDGameStateOnCountdownStarted OnCountdownStarted;
    void CountDownStarted(const FText& countdownText);
    FFSDGameStateOnCountdownTimeChanged OnCountdownTimeChanged;
    void Countdown(int32 SecondsLeft);
    FFSDGameStateOnCountdownFinished OnCountdownFinished;
    void DelegateEvent();
    class ADeepCSGWorld* CSGWorld;
    int32 LastSupplyPodTimeStamp;
    int32 LastCleaningPodTimeStamp;
    class AProceduralSetup* ProceduralSetup;
    bool DelayLateJoin;
    class UPrimitiveComponent* FakeMovementBase;
    int32 PlayerSurvivalCreditBonus;
    float ResourceAmountPenalty;
    float ObjectivesCreditPenalty;
    float ObjectivesXPPenaltyNormal;
    float ObjectivesXPPenaltyDeepDives;
    FText TextMissionCompleted;
    FText TextSecondaryObjective;
    FText TextSurvivalBonus;
    FText TextMined;
    FText TextCollected;
    FText TextBonus;
    int32 BoscoReviveCounter;
    class USpawnEffectsComponent* SpawnEffects;
    class UDynamicMeshScaler* MeshScaler;
    class UGemProximityTracker* GemProximityTracker;
    class UAttackerManagerComponent* AttackerManager;
    class UDifficultyManager* DifficultyManagerComponent;
    class USoundMixManagerComponent* SoundMixManager;
    class USeasonReplicatorComponent* SeasonReplicatorComponent;
    class UTeamResourcesComponent* TeamResources;
    bool IsOnSpaceRig;
    bool PlayerMadeItToDropPod;
    TArray<class APlayerCharacter*> ActivePlayerCharacters;
    FReplicatedObjectives Objectives;
    FText CompletedGameEventName;
    FGeneratedMissionSeed GeneratedMissionSeed;
    bool objectivesCompleted;
    class UDifficultySetting* CurrentDifficultySetting;
    bool RememberDifficulty;
    class UPlayerProximityTracker* ProximityTracker;
    class UShowroomManager* ShowroomManager;
    class AGameStats* GameStats;
    uint32 MissionTime;
    uint32 MissionStartTime;
    uint32 MissionHaz;
    bool PreventLatejoinCharacterDuplication;
    bool StartPressed;
    bool ContinuePressed;
    int32 ContinuesCountdown;
    bool AllDwarvesDown;
    bool missionAborted;
    int32 CountdownRemaining;
    FText countdownText;
    int32 HostGlobalSeed;
    bool CanCarryOverResources;
    FFSDGameStateSessionLeaderChanged SessionLeaderChanged;
    void CurrentLeaderChanged(const class APlayerState* PlayerState);
    class APlayerState* CurrentPlayerSessionLeader;

    void WaitForInitialGenerationDone(class AFSDGameState* GameState, FLatentActionInfo LatentInfo);
    void StartCountdown(int32 Duration, const FText& countdownName);
    void SetPreventLatejoinCharacterDuplication(bool prevent);
    void SetPlayersHaveReachedDroppod(bool newHasPlayerReached);
    void SetGeneratedMissionParameters(class UGeneratedMission* mission);
    void SetCurrentDifficulty(class UDifficultySetting* Setting, bool updateSessionSettings);
    void SetCompletionData(bool objectivesCompleted, int32 playersInPod);
    void ReceiveGeneratedMissionReplicated();
    void PostLocalizedGameMessage(const FText& Msg, const TArray<FText>& Arguments);
    void PostGameMessage(FString Msg);
    void OnRep_StartPressed(bool oldStartPressed);
    void OnRep_ObjectivesCompleted();
    void OnRep_MissionTime();
    void OnRep_GeneratedMissionSeed();
    void OnRep_FSDSessionID();
    void OnRep_CurrentDifficultySetting();
    void OnRep_CountdownText();
    void OnRep_CountdownRemaining(int32 prevTime);
    void OnRep_ContinuePressed();
    void OnRep_ContinueCountdown();
    void OnRep_CompletedGameEvent();
    void OnRep_BoscoReviveCounter();
    void OnRep_AllDwarvesDown();
    int32 MissionEndscreenSeed();
    bool IsTutorialMission();
    bool IsCountingDown();
    void InitObjectives();
    void HostDisbandedTeam();
    bool HasObjectivesReplicated();
    void HandleSeamlessTravelEvent();
    class AFSDPlayerState* GetServerPlayerState();
    TArray<class UObjective*> GetSecondaryObjectives();
    class AProceduralSetup* GetProceduralSetup();
    class UObjective* GetPrimaryObjective();
    bool GetPreventLatejoinCharacterDuplication();
    bool GetPlayersHaveReachedDroppod();
    TArray<class UPlayerCharacterID*> GetPlayableCharacterIDs();
    TArray<class UObjective*> GetObjectives();
    TArray<class AFSDPlayerState*> GetNetworkSortedPlayerArray();
    int32 GetMissionTime();
    bool GetMissionSuccessful();
    int32 GetMissionStartTime();
    int32 GetMissionRewardCreditSum();
    TArray<FCreditsReward> GetMissionRewardCredits();
    bool GetMissionCompletedCreditReward(bool Primary, int32& OutReward);
    int32 GetGlobalMissionSeed();
    class AGameStats* GetGameStats();
    TMap<UResourceData*, float> GetEndscreenResources();
    class UDifficultyManager* GetDifficultyManager();
    TMap<UResourceData*, float> GetCollectedResources();
    TArray<class UFSDEvent*> GetActiveEventsFromMission();
    void ClientNewMessage(const FFSDChatMessage& Msg);
    void Client_StartPressed();
    void Client_NewLocalizedMessage(const FFSDLocalizedChatMessage& Msg);
    bool AllMissionEndResultsReceived();
    void All_SpawnScaledEffectAt(FScaledEffect Effect, FVector_NetQuantize Location);
    void All_SpawnScaledEffectAndCueAt(FScaledEffect Effect, class USoundCue* audio, FVector_NetQuantize Location);
    void All_ServerQuit();
};

class AFSDHUD : public AHUD
{
    FFSDHUDSetObjectivesVisible SetObjectivesVisible;
    void SetObjectivesVisible(bool InVisible, bool animate);
    FFSDHUDOnHUDVisibilityChanged OnHUDVisibilityChanged;
    void HudVisibilityChanged(bool InHudVisible);
    uint8 IsVisibleFlags;

    bool ToggleHUDVisibility(EHUDVisibilityReason reason);
    void ShowObjectives(bool InVisibility);
    void SetObjectivesVisible__DelegateSignature(bool InVisible, bool animate);
    void SetHUDVisible(bool IsVisible, EHUDVisibilityReason reason);
    void RadarPointAdded(class URadarPointComponent* radarPoint);
    void PlayerSpawned(class APlayerCharacter* Player);
    void OnVisibilityChanged();
    bool IsHUDVisibleFlagSet(EHUDVisibilityReason reason);
    void HudVisibilityChanged__DelegateSignature(bool InHudVisible);
    void HandleSeamlessTravel();
    bool GetHUDVisible();
    class AFSDHUD* GetFSDHUD(class APlayerController* InPlayerController);
    void CameraDroneSpawned(class APlayerCameraDrone* Drone);
};

class AFSDMiningHead : public ADroppableOutpost
{
    class UResourceBank* ResourceBank;

};

class AFSDPawn : public APawn
{
    FFSDPawnOnFrozenEvent OnFrozenEvent;
    void BoolDelegate(bool boolValue);
    class UStatusEffectsComponent* StatusEffects;
    class UEnemyTemperatureComponent* Temperature;
    FGameplayTagContainer GameplayTags;
    class UEnemyDescriptor* SpawnedFromDescriptor;
    bool IsFrozen;
    bool CanFlee;
    bool FleeInsteadOfBackingOff;
    bool IsFleeing;
    class UPawnStatsComponent* PawnStatsInstance;

    void UnFreeze();
    void StopFleeing();
    void StartFleeing(const FVector& fromLocation);
    void SetAlerted(bool isAlerted);
    void Receive_Alerted();
    void OnUnFrozen();
    void OnStoppedFleeing();
    void OnStartedFleeing();
    void OnRep_IsFrozen();
    void OnFrozen(class AActor* Source);
    void OnFirstHostileDamageTaken();
    void OnEnemyScaled(float NewScale);
    void OnArmorShattered(const FVector& Location);
    void OnAlerted();
    void MakeRagdollMesh(class USkeletalMeshComponent* Mesh);
    void MakeElite();
    bool IsElite();
    bool GetIsAlerted();
    class UHealthComponentBase* GetHealthComponent();
    class AFSDAIController* GetFSDAIController();
    EPawnAttitude GetAttitude();
    void Freeze(class AActor* Source);
    void ExplodePawn();
    void BackOffFromLocation(const FVector& fromLocation);
};

class AFSDPhysicsActor : public AActor
{
    int32 MovementUpdateFrequency;
    int32 MovementUpdateEventTriggeredFrequency;

    void ForceMovementUpdate();
};

class AFSDPlayerCameraManager : public APlayerCameraManager
{
};

class AFSDPlayerController : public AFSDPlayerControllerBase
{
    FFSDPlayerControllerOnEndLevelReceived OnEndLevelReceived;
    void ReceivedEndLevelDelegate();
    FFSDPlayerControllerOnReceiveVoiceChanged OnReceiveVoiceChanged;
    void ReceivingVoiceSignature(bool isRecieving);
    FFSDPlayerControllerOnTransmitVoiceChanged OnTransmitVoiceChanged;
    void ReceivingVoiceSignature(bool isRecieving);
    FFSDPlayerControllerOnLevelFinished OnLevelFinished;
    void LevelFinishedSignature();
    FFSDPlayerControllerOnShowTutorialHint OnShowTutorialHint;
    void OnShowTutorialHint(const FText& Text, const FText& Title, const FText& TaskText, class UTexture2D* Image, float Duration);
    FFSDPlayerControllerOnShowTutorialWidget OnShowTutorialWidget;
    void OnChangeTutorialWidget(TSubclassOf<class UTutorialContentWidget> TutorialWidget, bool bIgnoreQueue);
    FFSDPlayerControllerOnChangeTutorialHintDuration OnChangeTutorialHintDuration;
    void OnChangeTutorialHintDuration(float NewDuration);
    FFSDPlayerControllerOnHideCurrentTutorialHint OnHideCurrentTutorialHint;
    void OnHideTutorialHint(bool wasWatched);
    FFSDPlayerControllerOnPlayerCharacterPossesed OnPlayerCharacterPossesed;
    void OnPlayerCharacterPossesed(class APawn* Pawn);
    FFSDPlayerControllerOnChatOpened OnChatOpened;
    void ChatOpenedDelegate();
    class UPerkUsageComponent* PerkUsageComponent;
    class UTerrainLatejoinComponent* LateJoinComponent;
    bool IsOnSpaceRig;
    bool bReceivedEndLevel;
    TArray<class USoundMix*> InitialSoundMixes;
    bool ServerTravelDone;
    class UFSDWidgetEffectsComponent* WidgetEffects;
    ESpacerigStartType SpacerigSpawnType;
    bool bDetectGravityChanges;

    void ToggleVoiceOn(bool Enabled);
    void SpawnHUDLocal(TSubclassOf<class AHUD> hudClass);
    void SpawnHUDAsync();
    void ShowTutorialWidget(TSubclassOf<class UTutorialContentWidget> TutorialWidget, bool ignoreQueue);
    void ShowTutorialHint(const FText& Text, const FText& Title, const FText& TaskText, class UTexture2D* Image, float Duration);
    void SetPlayerStart(class AActor* Start);
    void SetAchievementProgressFromServer(class UFSDAchievement* AchievementToSet, float Progress);
    void ServerSetUserHoldToRun(bool Value);
    void Server_TravelDone();
    void Server_TakeDamageFrom(class UDamageComponent* Damage, FVector Location);
    void Server_SetLateJoinDone();
    void Server_SetGenerationStatus(FString Status, float Fraction);
    void Server_SetGenerationFraction(float Fraction);
    void Server_SetGenerationDone();
    void Server_SetExtraEndScreenTime(float extraTime);
    void Server_SetControllerReady();
    void Server_ResetHUD();
    void Server_Relay_SetArmorIndexDestroyed(class USimpleArmorDamageComponent* ArmorComponent, int32 Index, EArmorDamageType DamageType);
    void Server_NewMessage(FString Sender, FString Text, EChatSenderType SenderType);
    void Server_DrawProjectileDebugPath(bool bDraw);
    void SendLevelUpStatistics(const int32 currentRank);
    void RecievePawnDestroyed();
    void RecieveOnControllerReady();
    void ReceivingVoiceSignature__DelegateSignature(bool isRecieving);
    void ReceiveEndLevel();
    void ReceivedEndLevelDelegate__DelegateSignature();
    void Receive_EndLevel_WaitForData(bool areObjectivesCompleted, int32 numberOfPlayersInPod);
    void ReadyToContinueFromEndScreen();
    void OnShowTutorialHint__DelegateSignature(const FText& Text, const FText& Title, const FText& TaskText, class UTexture2D* Image, float Duration);
    void OnSaveGamePlayerProgressChanged(int32 Rank, int32 Stars);
    void OnSaveGameCreditsChanged(int32 Credits);
    void OnSaveGameCharacterProgressChanged(TSubclassOf<class APlayerCharacter> CharacterClass, int32 Level, float Progress);
    void OnPlayerStateSelectedCharacterChanged(TSubclassOf<class APlayerCharacter> CharacterClass);
    void OnPlayerSpawnBegin(int32 PlayerId);
    void OnHideTutorialHint__DelegateSignature(bool wasWatched);
    void OnGenerationDone();
    void OnChangeTutorialWidget__DelegateSignature(TSubclassOf<class UTutorialContentWidget> TutorialWidget, bool bIgnoreQueue);
    void OnChangeTutorialHintDuration__DelegateSignature(float NewDuration);
    void LevelFinishedSignature__DelegateSignature();
    void HideTutorialHint(bool watched);
    bool GetUseToggleTerrainScanner();
    bool GetUseToggleLaserpointer();
    bool GetUseHoldToRun();
    class AActor* GetPlayerStart();
    class AFSDPlayerState* GetFSDPlayerState();
    void FlushRender();
    class AActor* FindPlayerStart(class UPlayerCharacterID* characterID);
    void EndLevel();
    void Client_PlayCue(class USoundCue* SoundCue);
    void Client_EndLevel_WaitForData(bool areObjectivesCompleted, int32 numberOfPlayersInPod);
    void Client_CollectVanityItem(class UTreasureRewarder* rewarder, class UVanityItem* targetItem, class UPlayerCharacterID* targetCharacter);
    void Client_CollectTreasureVictoryPose(class UTreasureRewarder* rewarder, class UVictoryPose* targetPose, class UPlayerCharacterID* targetCharacter);
    void Client_CollectTreasureSkin(class UTreasureRewarder* rewarder, class UItemSkin* targetSkin, class UItemID* targetItem);
    void Client_CollectPickaxePart(const class UTreasureRewarder* rewarder, class UPickaxePart* targetPart);
};

class AFSDPlayerControllerBase : public APlayerController
{
    class UMaterialParameterCollection* GlobalMaterialParameterCollection;
    FFSDPlayerControllerBaseOnPlayerVoiceStatusChanged OnPlayerVoiceStatusChanged;
    void LocalVoiceStatus(bool voiceChatting);
    bool bStartWithBlackScreen;
    class UWindowManager* WindowManager;
    TArray<FPlatformComponent> PlatformComponentClasses;

    void ToggleAnalogCursor(bool Visible);
    void StopAspectRatioAxisConstraint();
    void StartAspectRatioAxisConstraint();
    void ShowEscapeMenu();
    void SetHUDVisible(bool IsVisible, EHUDVisibilityReason reason);
    void Server_Cheat_SwitchCharacter(class UPlayerCharacterID* NewCharacter);
    void RecievePreClientTravel();
    void RecieveHUDVisibilityChanged(bool IsVisible);
    void OpenStandaloneMinersManualPage(EMinersManualSinglePage page);
    void OpenStandaloneMinersManual(EMinersManualSection Section, const FGuid& ID);
    bool IsPlayerBlocked(FString UserId);
    bool IsHUDVisibleFlagSet(EHUDVisibilityReason reason);
    class UEscapeMenuWindow* GetEscapeMenu();
    void Client_WasKicked(EDisconnectReason reason);
};

class AFSDPlayerStart : public AActor
{
    class UPlayerCharacterID* PrefferedClassID;
    class AFSDPlayerController* usedBy;

};

class AFSDPlayerState : public APlayerState
{
    FFSDPlayerStateOnPlayerCharacterSpawned OnPlayerCharacterSpawned;
    void PlayerSpawnedSignature(class APlayerCharacter* PlayerCharacter);
    FFSDPlayerStateOnPlayerTalkingChanged OnPlayerTalkingChanged;
    void PlayerVoiceSignature(bool IsTalking);
    FFSDPlayerStateOnSelectedCharacterChanged OnSelectedCharacterChanged;
    void SelectedCharacterChangedDelegate(TSubclassOf<class APlayerCharacter> NewCharacter);
    float FractionLevelGenerated;
    FString LevelGenerationState;
    FFSDPlayerStateOnSupplyStatusChangedEvent OnSupplyStatusChangedEvent;
    void SupplyStatusChangedDelegate(float ammoStatus01, float healthStatus01);
    FFSDPlayerStateOnEnemyKilledEvent OnEnemyKilledEvent;
    void EnemyKilledSignature(const FGameplayTagContainer& enemyTags, class AActor* enemy, class UDamageClass* DamageClass);
    TArray<class UVanityItem*> LatestEquipedVanity;
    TSubclassOf<class APlayerCharacter> SelectedCharacter;
    bool bIsServer;
    bool ShouldCopyProperties;
    uint8 gameOwnerStatus;
    bool IsOnSpaceRig;
    class UPlayerStatsComponent* PlayerStatsComponent;
    class UPlayerRejoinState* RejoinState;
    class USaveGameStateComponent* SaveGameStateComponent;
    class APlayerCharacter* PlayerCharacter;
    bool IsInMission;
    bool IsTalking;
    bool HasGeneratedLevel;
    bool HasSelectedCharacter;
    int32 PlayerSortId;
    FFSDPlayerStateOnPlayerNameChanged OnPlayerNameChanged;
    void PlayerNameChangedSignature(FString NewName);
    FFSDPlayerStateOnFractionLevelGenerated OnFractionLevelGenerated;
    void FractionLevelGeneratedDelegate(float Fraction);
    FFSDPlayerStateOnLevelGenerationStateChanged OnLevelGenerationStateChanged;
    void LevelGenerationStateSignature(FString NewState);
    class UPlayerResourceComponent* PlayerResources;
    uint8 SupplyAmmoStatus;
    uint8 SupplyHealthStatus;
    FRewardTexts RewardTexts;

    void SetSelectedCharacterID(class UPlayerCharacterID* characterID);
    void SetSelectedCharacter(TSubclassOf<class APlayerCharacter> NewCharacter);
    void SetHasGeneratedLevel(bool hasgenerated);
    void SetCanOnlySpectate(bool canOnlySpectate);
    void ServerSetSelectedCharacter(TSubclassOf<class APlayerCharacter> NewCharacter);
    void Server_SetSupplyStatus(uint8 StatusHealth, uint8 StatusAmmo);
    void Server_SetGameOwnerStatus(int32 gameOwnerStatus);
    void OnRep_SupplyHealthStatus();
    void OnRep_SupplyAmmoStatus();
    void OnRep_SelectedCharacter();
    void OnRep_PlayerCharacter();
    void OnRep_LevelGenerationState();
    void OnRep_GameOwnerStatus();
    void OnRep_FractionLevelGenerated();
    void OnLateJoinFinished();
    bool HasNormalOwnerStatus();
    int32 GetXPRewardsSum();
    TArray<FXPReward> GetXPRewards();
    TArray<FXPReward> GetXPRewardDeepDive(int32 StagesCompleted);
    int32 GetUIPing();
    float GetSupplyHealthStatus();
    float GetSupplyAmmoStatus();
    int32 GetSelectedCharacterLevel();
    class UPlayerCharacterID* GetSelectedCharacterID();
    TSubclassOf<class APlayerCharacter> GetSelectedCharacter();
    FCharacterProgress GetSelectCharacterProgress();
    class UPlayerResourceComponent* GetPlayerResourceComponent();
    int32 GetPlayerRank();
    class AFSDPlayerController* GetPlayerController();
    bool GetHasGeneratedLevel();
    bool GetGameOwnerStatus(EGameOwnerStatus Status);
    TArray<FCreditsReward> GetDeepDiveCreditsReward(int32 StagesCompleted, int32 goldCollected);
    EChatSenderType GetChatSenderType();
    FCharacterProgress GetCharacterProgress(class UPlayerCharacterID* characterID);
    int32 GetCharacterLevel(class UPlayerCharacterID* characterID);
    void CharacterSelected();
};

class AFSDPostProcessingActor : public AActor
{
    EPostProcessingType PostProcessingType;
    class UPostProcessComponent* PostProcessComponent;
    FWeightedBlendables InitialBlendables;

    void UnapplyPostProcessingBlendablesByType(class UObject* WorldContext, EPostProcessingType Type);
    void UnapplyPostProcessingBlendablesByID(class UObject* WorldContext, const FName InID);
    void UnapplyPostProcessingBlendable(class UObject* WorldContext, EPostProcessingType Type, TScriptInterface<class IBlendableInterface> InBlendableObject);
    void UnapplyAllPostProcessingBlendables(class UObject* WorldContext);
    void SetupHDRColorGamma();
    void SetPostProcessManager(class APostProcessingManager* InManager);
    class UMaterialInstanceDynamic* GetPostProcessingMaterialInstance(class UObject* WorldContext, class UMaterialInterface* Material);
    class UMaterialInstanceDynamic* ApplyPostProcessingMaterial(class UObject* WorldContext, EPostProcessingType Type, class UMaterialInterface* Material, float InWeight, const FName InID);
    void ApplyPostProcessingBlendable(class UObject* WorldContext, EPostProcessingType Type, TScriptInterface<class IBlendableInterface> InBlendableObject, float InWeight, const FName InID);
};

class AFSDRefinery : public ADroppableOutpost
{
    FFSDRefineryOnRefineryStateChanged OnRefineryStateChanged;
    void RefineryStateDelegate(ERefineryState InRefineryState);
    FFSDRefineryOnRefineryProgressChanged OnRefineryProgressChanged;
    void RefineryProgressDelegate(float InProgress01);
    FFSDRefineryOnPipelineRegistered OnPipelineRegistered;
    void RefineryPipelineDelegate(class APipelineStart* InPipelineStart);
    FFSDRefineryOnPipelineSegmentPlaced OnPipelineSegmentPlaced;
    void RefineryPipelineSegmentDelegate(class APipelineSegment* InSegment);
    FFSDRefineryOnExtractorPodSpawned OnExtractorPodSpawned;
    void RefineryExtractPodDelegate(class APipelineExtractorPod* InExtractorPod);
    class USingleUsableComponent* UsableStartRefining;
    class USingleUsableComponent* UsableLaunchRocket;
    TMap<float, UDialogDataAsset*> ProgressMissionShouts;
    class UDialogDataAsset* LaunchRocketButtonPressedShout;
    TSubclassOf<class ATrackBuilderItem> BuilderItem;
    float RefiningTotalDuration;
    FFloatRange PipelineBreakCoolDown;
    float PipelineBreakTimePenaltyPerAdditionalPlayers;
    FInt32Range MaxSegmentBreakDowns;
    int32 SegmentBreakDownPenaltyPerAdditionalPlayers;
    ERefineryState RefineryState;
    ERefineryState PreviousRefineryState;
    uint8 RefiningProgressReplicated;
    TArray<class APipelineStart*> PipelineStarts;

    void SetRefineryState(ERefineryState InState);
    void RefineryStateDelegate__DelegateSignature(ERefineryState InRefineryState);
    void RefineryProgressDelegate__DelegateSignature(float InProgress01);
    void RefineryPipelineSegmentDelegate__DelegateSignature(class APipelineSegment* InSegment);
    void RefineryPipelineDelegate__DelegateSignature(class APipelineStart* InPipelineStart);
    void RefineryExtractPodDelegate__DelegateSignature(class APipelineExtractorPod* InExtractorPod);
    void ReceiveRefineryStateChanged(ERefineryState InState);
    void ReceivePipelineStateChanged(class APipelineStart* InPipeline, EPipelineBuildState InState);
    void ReceivePipelineStartReady(class APipelineStart* InPipelineStart);
    void OnStartRefiningPressed(class APlayerCharacter* InCharacter, EInputKeys Key);
    void OnRep_RefineryState(ERefineryState InOldState);
    void OnPlayerCharacterRegistered(class APlayerCharacter* InCharacter);
    void OnPipelineStateChanged(class APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    void OnObjectivesChanged();
    void OnLaunchRocketPressed(class APlayerCharacter* InCharacter, EInputKeys Key);
    float GetRefiningProgress();
};

class AFSDReverbVolume : public AActor
{
    class USphereComponent* Collision;
    class UReverbEffect* Reverb;
    float Priority;

};

class AFSDWorldSettings : public AWorldSettings
{
    class UPlayerCharacterID* CharacterClass;

};

class AFacilityGeneratorLine : public AActor
{
    FTransform StartTransform;
    TArray<FTransform> EndTransforms;
    float HeightOffsetMin;
    float HeightOffsetMax;
    float MaxSegmentLength;
    float CarveRadius;
    class USplineComponent* SplineComponent;
    class USplineDecoratorComponent* SplineDecorator;
    TSoftObjectPtr<UStaticMesh> LineMeshPtr;
    TSoftObjectPtr<UMaterialInterface> MaterialConnected;
    TSoftObjectPtr<UMaterialInterface> MaterialUnconnected;
    class ATetherStation* Station;
    class UStaticMesh* MeshInstance;
    TArray<FVector> ReplicatedPath;
    bool Connected;

    void SetConnected(bool InConnected);
    void ReceiveBeginPathFinding();
    void OnRep_Path();
    void OnRep_Connected();
};

class AFacilityHackingPod : public ARessuplyPod
{
    FFacilityHackingPodOnHackingPodStateChanged OnHackingPodStateChanged;
    void HackingPod_Delegate(EHackingPodState State);
    EHackingPodState PodState;

    void SetState(EHackingPodState aState);
    void OnRep_PodState(EHackingPodState oldState);
    void OnExitState(EHackingPodState oldState);
    void OnEnterState(EHackingPodState NextState);
    EHackingPodState GetState();
};

class AFacilityPowerStation : public AActor
{
    FFacilityPowerStationOnHackingProgressDelegate OnHackingProgressDelegate;
    void Hackprogress_Delegate(float hackProgress);
    FFacilityPowerStationOnProgresspointDelegate OnProgresspointDelegate;
    void Hackprogress_Delegate(float hackProgress);
    float ProgressPoint;
    int32 ProgresPointCount;
    float TimeToDefend;
    float Progress;
    bool IsHacking;

    void StopHacking();
    void StartHacking();
    void OnRep_Progress();
    void OnRep_IsHacking();
    void OnHackingComplete();
    void OnHackingChanged(bool IsHacking);
    bool IsHacked();
};

class AFacilityShieldGenerator : public AActor
{
    FGameplayTagContainer GameplayTags;

};

class AFacilityTentacle : public ATentacleBase
{
    float SwaySpeed;
    bool Extended;
    TArray<class UAnimMontage*> HitReactions;
    EFacilityTentacleState TentacleState;
    class USkeletalMeshComponent* HeadMesh;
    FTentacleTarget DesiredTarget;

    void PlayHitReaction(float Amount);
    void OnStateChanged(EFacilityTentacleState NewState);
    void OnRep_TentacleState();
    void OnRep_DesiredTarget();
    bool FindBurrowLocation(class UDebrisPositioning* Debris, const FVector& Origin, float Radius, FVector& OutLocation);
};

class AFacilityTurret : public AEnemyPawn
{
    class USceneComponent* Root;
    class USkeletalMeshComponent* Mesh;
    float IndicatorActivationDelay;
    bool FinishAttackIgnoreLoS;
    bool InvulnerableOnInactive;
    float FoldOutTime;
    class USoundCue* EngagedAudio;
    float Offset;
    float AimAcceleration;
    FRuntimeFloatCurve AimSpeedCurve;
    class AActor* CurrentTarget;
    bool TurretEngaged;
    bool AlwaysActive;

    void TurnOffMesh();
    void SetIsAttacking(bool IsAttacking);
    void OnRep_TurretEngaged();
    void OnProjectileSpawned();
    void OnEngagedChanged(bool engaged);
    void OnAttack();
    FRotator GetLookingDirection();
};

class AFacilityTurretController : public AFSDAIController
{
    class UAIPerceptionComponent* Perception;
    float RememberTargetTime;
    float RetargetOnAttackChance;
    bool RespectAttack;

    void OnTurretsAttackingChanged(bool IsAttacking);
    void OnTargetRevived();
    void OnTargetDied(class UHealthComponentBase* Health);
    void OnPerceptionUpdated(class AActor* sensedActor, FAIStimulus Stimulus);
};

class AFakePhysicsMover : public AActor
{
    class USceneComponent* Root;
    FFakeMoverState MoverState;
    FFakeMoveState PosVel;
    class UFakeMoverSettings* MoveSettings;
    float SyncTime;

    void Teleport(const FVector& Pos, const FVector& Vel);
    void OnRep_PosVel(const FFakeMoveState& PosVel);
    void OnRep_MoveSettings(const class UFakeMoverSettings* MoveSettings);
    void ApplyImpulse(const FVector& Impulse);
};

class AFakePhysicsProjectile : public AProjectileBase
{
    FFakeMoverState MoverState;
    FFakeMoveState PosVel;
    class UFakeMoverSettings* MoveSettings;
    float InitialSpeed;
    float DampOmega;
    float SyncTime;

    void SphereBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnRep_PosVel(const FFakeMoveState& PosVel);
};

class AFindPointKeepingDistanceProbe : public AActor
{
    float MinDistance;
    float MaxDistance;
    class AActor* Target;
    float IdealTargetDist;

};

class AFlameThrowerItem : public AAmmoDrivenWeapon
{
    class UParticleSystemComponent* FlameParticleComponent;
    class UDamageComponent* DamageComponent;
    class UStickyFlameSpawner* StickyFlames;
    class UDamageComponent* AoEHeatDamageComponent;
    class UDamageComponent* ExplodingTargetsDamageComponent;
    class UMotionAudioController* MotionAudio;
    int32 ShotCostProjectile;
    FDecalData ImpactDecal;
    float DecalDelay;
    float CurrentDecalDelay;
    class UParticleSystem* ImpactParticles;
    class UParticleSystemComponent* ImpactParticleInstance;
    class UParticleSystem* FP_LongReachParticles;
    class UParticleSystem* TP_LongReachParticles;
    float VeryLongReachThreshold;
    class UParticleSystem* FP_VeryLongReachParticles;
    class UParticleSystem* TP_VeryLongReachParticles;
    TArray<FName> FlameParameterNames;
    float DamageSphereRadius;
    float MaxFlameDistance;
    float FlameGrowthPerSecond;
    float FlameEndPointResponsiveness;
    float FlameIntensityPerSecond;
    TSubclassOf<class UStatusEffect> OnFireStatusEffect;
    float ChanceToFleeOnDamage;
    float MeltPointRadius;
    float MeltPointBuildTime;
    float MeltCarveTime;
    class UParticleSystem* MeltSteamParticle;
    TArray<class UItemUpgrade*> upgrades;
    bool LongReachEnabled;
    bool AoEHeatEnabled;
    float KilledTargetsExplosionChance;
    float ShowDamageParticle;
    class UParticleSystem* DamangeTargetsParticles;
    class UParticleSystem* KilledTargetsExplodingParticles;
    class USoundCue* KilledTargetsExplodingSound;
    class UProjectileLauncherBaseComponent* ProjectileLancher;

    void TriggerAoEHeat();
    void ServerMeltIce(const TArray<FVector>& meltPoints);
    void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End);
    void OnTargetKilled(class AActor* Target, class UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    void OnTargetDamaged(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* HitComponent, class UFSDPhysicalMaterial* PhysicalMaterial);
    void All_ShowTargetBurstIntoFire(FVector_NetQuantize Location, FRotator Rotation);
    void All_FlameFeedback(FVector_NetQuantize Location, FRotator Rotation);
};

class AFlameWallProjectile : public AProjectile
{
    TSubclassOf<class AFlameWallSegment> SegmentParticleClass;
    int32 SegmentCount;
    float WallWidth;
    TSubclassOf<class AActor> ImpactClass;

};

class AFlameWallSegment : public AActor
{
    class USphereComponent* CollisionComponent;

};

class AFlare : public AFSDPhysicsActor
{
    float InitialSpeed;
    float InitialAngularImpulse;
    float InitialAngularImpulseRandomScale;
    int32 MaxFlares;
    float ProductionTime;
    float Duration;
    FLinearColor ChromaColor;
    bool IsFlareOn;
    class AActor* DamageCauser;
    TSubclassOf<class AActor> WeaponPreviewClass;
    TSubclassOf<class AItem> LoadoutItem;
    class UItemID* ItemID;
    class USoundCue* ImpactGroundSound;

    void StartLightFunction(class ULightComponent* mainLight, TArray<class ULightComponent*> spotLights, class UCurveFloat* flutterCurve, class UCurveFloat* fadeInCurve);
    void OnUpdateShadowRadius();
    void OnRep_IsFlareOn();
    void OnFlareSpawnCompleted();
    void OnFlareIgnite();
    void OnFlareExtinguish();
    void Inhibit();
    float ImmidiateFadeLight();
    TSubclassOf<class AActor> GetWeaponViewClass();
    class AFlare* GetFlareDefaultObject(TSubclassOf<class AFlare> flareClass);
    void ActorWasHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void ActivateFlare();
};

class AFlareGun : public AAmmoDrivenWeapon
{
};

class AFlareGunProjectile : public AProjectile
{
    float Duration;
    bool IsFlareOn;

    void UpdateLightDuration(float lightDuration);
    void OnUpdateShadowRadius();
    void OnRep_IsFlareOn();
    void OnFlareIgnite();
    void OnFlareExtinguish();
    void OnDroppodImpact(class ATeamTransport* DropPod);
    void Inhibit();
    void ActivateFlare();
};

class AFlyingEnemyDeepPathfinderCharacter : public AEnemyDeepPathfinderCharacter
{
    class UPhysicalMaterial* FrozenMaterial;
    class UPhysicsAsset* FrozenAsset;
    class USoundCue* FrozenDeathSound;
    class UParticleSystem* FrozenDeathparticles;

    void TriggerFrozenRagdoll();
    void OnFreezeImpact(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BP_FreezeImpact();
};

class AFlyingLifter : public AAFlyingBug
{
    class UPointLightComponent* GrabLight;
    class UGrabberComponent* GrabberComp;
    class UCapsuleComponent* GrabCapsule;
    class UAudioComponent* GrabbedIdleLoop;
    class UInDangerComponent* InDanger;
    class UAudioComponent* ScreamComponent;
    FFlyingLifterOnGrabSuccess OnGrabSuccess;
    void GrabSuccess();
    float PreventGrabAfterSpawn;
    EGrabberState GrabberState;
    float WanderingSpeed;
    float WanderingAcceleration;
    float ChaseSpeed;
    float ChaseAcceleration;
    float CarrySpeed;
    float CarryAcceleration;
    float FleeSpeed;
    float FleeAcceleration;
    float CarryCooldown;
    class USoundBase* FleeSound;
    class UAnimSequenceBase* FleeAnimation;
    bool ParalyzeOnGrab;
    float ExtraUpForce;
    float ScreamDistance;

    bool SelectAnotherTarget();
    void OnStateBroke(class AActor* aReleasedPlayer, bool fullGrabElapsed);
    void OnRep_State(EGrabberState oldState);
    void OnInDanger();
    void OnActorLeftGrabZone(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnActorEnterGrabZone(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    bool GetJustGrabbed();
    void DropTarget();
    void ChangeState(EGrabberState aGrabberState);
};

class AFoamPuddle : public AActor
{
    class USceneComponent* Root;
    class USceneComponent* PuddleRoot;
    class UNiagaraComponent* NS_Foam;
    FRuntimeFloatCurve ScaleCurve;
    FFoamPuddleOnChangeVacuumStateDelegate OnChangeVacuumStateDelegate;
    void ChangeVacuumStateDelegate(EVacuumState State);
    TArray<class TSubclassOf<AActor>> VacuumableActors;
    class USoundCue* PickupSound;
    float PickupSoundCooldown;
    class USoundCue* PickupFilledSound;
    float PickupFilledCooldown;
    class USoundCue* VacuumedSound;
    float VacuumedCooldown;
    class USoundCue* VacuumedSoundFilled;
    float VacuumedSoundFilledCooldown;
    float InitialDebrisRadius;
    float TotalRadiusGrowth;
    float GrowthTime;
    float AttractorPowerWhenVacuuming;
    float ScaleTimeVacuuming;
    float Speed;
    EVacuumState State;
    class USceneComponent* VacuumSource;
    uint16 MaxSoapPiles;
    bool UsesLocalSpace;

    void SetState(EVacuumState State);
    void SetPuddleLifetime(float LifeTime);
    void ScaleOutAndDestroy();
    void OnRep_State(EVacuumState prevState);
    void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

class AFoamPuddle_WalkingPlagueheart : public AFoamPuddle
{
    float FoamCleanRadius;

};

class AFriendlyParasite : public AEnemyDeepPathfinderCharacter
{
    FFriendlyParasiteOnIsAttackingEvent OnIsAttackingEvent;
    void IsAttacking();
    class USphereComponent* Collision;
    class USphereComponent* FindEnemyCollision;
    class UDamageComponent* DamageComponent;
    float MoveSpeed;
    float DamageBeforeDeath;
    bool CountDirectDMG;
    bool CountAreaDMG;
    float StartFollowRange;
    float DamageRange;
    float DamageTime;
    float FoldoutRange;
    float SpinRange;
    class AFSDPawn* TargetEnemy;

    void SelectNewTarget(class UHealthComponentBase* Health);
    void OnEnemyCollisionEnter(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class AFuelLineBuilderItem : public ATrackBuilderItem
{
    class UItemPlacerAggregator* SegmentPlacer;

    void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress);
};

class AFuelLineEndPoint : public AActor
{
    class UFuelLineConnectPoint* ConnectPoint;
    class UStaticMeshComponent* StaticMesh;
    TSubclassOf<class AFuelLineSegment> AllowedSegment;
    bool OpenForConnection;

    void SetOpenForConnection(bool Open);
    void ReceivePing(bool InValidPlacement);
    bool IsOpenForConnection();
    void CallbackConnectedWithSegment(class UTrackBuilderConnectPoint* InConnectPoint, class ATrackBuilderSegment* InSegment);
};

class AFuelLineSegment : public ATrackBuilderSegment
{
    class USplineMeshComponent* FuelLineSplineMesh;
    class USplineComponent* FuelLineSplineComponent;
    class UStaticMeshComponent* FuelLineEndPostMesh;
    class USimpleHealthComponent* DeconstructHealthComponent;
    class USceneComponent* PreviewEndPostLocation;
    float EndPostHeightOffset;
    float MaxLength;
    bool bHasMaxTurnAngle;
    float MaxTurnAngle;

    void ClientUpdateStartTransform(const FVector& NewStartLocation);
    void ChangeStartTransform(const FTransform& ChangedStartLocation);
    void CallbackOnDeath(class UHealthComponentBase* InHealthComponent);
    void CallbackCanStartNextSegmentChanged(bool InCanStart);
};

class AFuelLineStart : public AActor
{
    FFuelLineStartOnFuelLineConnected OnFuelLineConnected;
    void FuelLineConnectedDelegate(class AFuelLineEndPoint* InFuelLineStart);
    FFuelLineStartOnFuelLineStarted OnFuelLineStarted;
    void FuelLineStartedDelegate(bool InFuelLineStarted);
    FFuelLineStartOnFirstFuelLineSegment OnFirstFuelLineSegment;
    void FirstFuelLineDelegate(class AFuelLineSegment* InFirstSegment);
    class UStaticMeshComponent* StaticMesh;
    class UOutlineComponent* OutlineComponent;
    class USimpleObjectInfoComponent* ObjectInfoComponent;
    class UFuelLineStartUsable* UsableStartFuelLine;
    bool bFuelLineConnected;

    void ReceiveFuelLineConnected();
    void OnRep_FuelLineConnected();
    void FuelLineStartedDelegate__DelegateSignature(bool InFuelLineStarted);
    void FuelLineConnectedDelegate__DelegateSignature(class AFuelLineEndPoint* InFuelLineStart);
    void FirstFuelLineDelegate__DelegateSignature(class AFuelLineSegment* InFirstSegment);
    void CallbackNextSegmentChanged(class UTrackBuilderUsable* InUsable, class ATrackBuilderSegment* InSegment);
};

class AGameEvent : public AActor
{
    FGameEventEventTriggeredDelegate EventTriggeredDelegate;
    void DelegateEvent();
    FGameEventEventFinishedDelegate EventFinishedDelegate;
    void DelegateEvent();
    FGameEventStageCompleteDelegate StageCompleteDelegate;
    void StageCompleteSig(int32 stageCompleted);
    FGameEventProgressChangedDelegate ProgressChangedDelegate;
    void ProgressChangedSig(float CurrentProgress);
    FGameEventOnProgressBarChanged OnProgressBarChanged;
    void ProgressChangedSig(float CurrentProgress);
    FGameEventTimeProgressChanged TimeProgressChanged;
    void ProgressChangedSig(float CurrentProgress);
    FGameEventObjectivesPerStageChanged ObjectivesPerStageChanged;
    void StageCompleteSig(int32 stageCompleted);
    TArray<class AEventStarterButton*> StarterObjects;
    bool bGameEventSetup;
    FText EventName;
    FText ObjectiveText;
    FName AnalyticsName;
    FGameplayTagContainer GameplayTags;
    class UChildActorComponent* StartEventObject;
    class UDialogDataAsset* EventTriggeredShout;
    class UDialogDataAsset* EventFinishedShout;
    class UDialogDataAsset* EventFailedShout;
    float EventTriggeredShoutDelay;
    float EventFinishedShoutDelay;
    float StageProgress;
    float TimeLimit;
    float DelayUITime;
    int32 objectivesPerStage;
    bool EventStartersActive;
    bool StopScriptedWavesWhileActive;
    bool StopNormalWavesWhileActive;
    bool EventStarted;
    bool FailedEvent;
    bool ShowRemainingTimeOnHUD;
    bool ShowScoreStatusOnHUD;
    bool ShowProgressBar;
    float ProgressBarPct;
    bool SkipEventStarters;
    TArray<class AActor*> EventParticipants;

    void TrySetupGameEvent();
    void TriggerEvent();
    void StartShout();
    void StageObjectiveCompleted();
    class ARessuplyPod* SpawnEventPod(TSubclassOf<class ARessuplyPod> podClass, const FVector& aSpawnLocation, int32 Delay);
    class AActor* SpawnEventActor(TSubclassOf<class AActor> eventActorClass, const FTransform& aSpawnLocation);
    void SetStageProgress(float Progress);
    void SetProgressBarPct(float InPct);
    void SetObjectivesPerStage(int32 objectivesPerStage);
    void RemoveParticipant(class AActor* participant);
    void OnStarterObjectUsed(class AEventStarterButton* eventStarter);
    void OnStageProgress(float Progress);
    void OnStageComplete(int32 Stage);
    void OnRep_StageProgress();
    void OnRep_ObjectivesPerStage();
    void OnRep_IsEventStartersActive();
    void OnRep_FailedEvent();
    void OnRep_EventStarted();
    void OnRep_EventParticipants();
    void OnEventTriggered();
    void OnEventFinished(bool eventSuccess);
    void OnEventBooted();
    bool IsEventCompleted();
    bool IsEventActive();
    float GetStageProgress();
    bool GetShowTimeOnHUD();
    bool GetShowScoreOnHUD();
    bool GetShowProgressBar();
    FText GetObjectiveText();
    int32 GetObjectivesPerStage();
    FText GetEventName();
    bool GetEventFailed();
    float GetDelayUITime();
    void EndShout();
    FTransform DebreePositionPoint(class AProceduralSetup* Setup, const FVector& fromLocation, float MinDistance, float desiredDistance, class UDebrisPositioning* DebrisPositioning, TSubclassOf<class AActor> terrainPlacement, float maxPathLength);
    void BootUpEvent();
    void AddStageProgress(float progressToAdd);
};

class AGameStats : public AInfo
{
    int32 NumberOfPlayersEscapedInPod;
    float TotalGoldMined;
    int32 TotalEnemiesKilled;
    int32 MissionHaz;
    TArray<class USeamlessTravelEventKey*> EventKeys;

    void OnPlayerMinedGold(class UCappedResource* Resource, float Amount);
};

class AGatlingGun : public ABeltDrivenWeapon
{
    bool BarrelProximityDamageEnabled;
    float BarrelProximityDamageDistance;
    float BarrelProximityDamageRadius;
    float BarrelProximityDamageLength;
    float TimeBetweenProximityDamageTicks;
    float DamageMultiplierAtMaxStabilization;
    class UFXSystemAsset* HotShellsTracerParticles;
    float HeatRemovedOnKill;
    bool CriticalOverheatEnabled;
    bool HotShellsOn;
    float HotShellsTemperatureRequired;
    class UDamageComponent* DamageComponent;
    class UDamageComponent* BarrelProximityDamageComponent;

    void Server_SetHotShellsOn(bool hotShellsIsOn);
    void OnRep_HotShellsTracerOn();
    void OnGatlingTemperatureChanged(float Temperature, bool isOverheated);
    void OnEnemyKilled(class AActor* Target, class UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    void Client_RemoveHeat();
};

class AGem : public ACarriableItem
{
    class UCarriableInstantUsable* Usable;
    class UResourceData* ResourceType;
    float ResourceAmount;
    bool hasBeenReleased;

    void SetHasBeenReleased(bool hasBeenReleased);
    bool GetHasBeenReleased();
};

class AGenerationItem : public AActor
{
    bool Visible;
    bool AddToLevel;

};

class AGlowPlant : public AActor
{
    class UStaticMeshComponent* TrunkMesh;
    class UPointLightComponent* mainLight;
    float IntensityBase;
    float RadiusBase;
    float IntensityPerPart;
    float RadiusPerPart;
    float IntensityAllParts;
    float RadiusAllParts;
    float MaxIntensity;
    float MinIntensity;
    float TimeOnMaxLight;
    float IntensityFadeInTime;
    float IntensityFadeOutTime;
    float MaxEmissive;
    float MinEmissive;
    float EmissiveFadeInTime;
    float EmissiveFadeOutTime;

    void OnDeath();
    void OnDamage(class UPrimitiveComponent* hitSphere);
};

class AGooGun : public AAmmoDrivenWeapon
{
    FGooGunOnStartCharging OnStartCharging;
    void ChargingDelegate();
    FGooGunOnEndCharging OnEndCharging;
    void ChargingDelegate();
    FGooGunOnChargingFailed OnChargingFailed;
    void ChargingDelegate();
    FGooGunOnChargeChanged OnChargeChanged;
    void ChargeChangedDelegate(float charge);
    float ChargeTime;
    int32 ShotCostCharged;
    float ChargeThreshold;
    float AutoStopCharingAfterSeconds;
    int32 ShotCostCycle;
    EGooGunFireMode FireMode;
    class USoundCue* FullyChargedFireSound;
    int32 ChargedShotCount;
    float BuckShotSpreadV;
    float BuckShotSpreadH;
    float BuckshotArcCompensation;
    class UFXSystemAsset* ChargeupParticles;
    class UFXSystemAsset* ChargeupFireMuzzleFlash;
    class UFXSystemComponent* ChargeupParticleInstance;
    class UAnimMontage* FP_ChargeupMontage;
    class UAnimMontage* TP_ChargeupMontage;

    void OnPuddleSuckedIn();
    float GetOverChargeProgress();
    bool GetIsCharging();
    float GetChargeProgress();
    void ChargingDelegate__DelegateSignature();
    void ChargeChangedDelegate__DelegateSignature(float charge);
};

class AGooGunProjectile : public AProjectile
{
    float PuddleLifeTime;
    int32 FragmentCount;

    class AGooGunPuddle* SpawnPuddle(FTransform Transform, TSubclassOf<class AGooGunPuddle> PuddleClass);
    void DealSocketArmorDamage(class AActor* Actor, class UPrimitiveComponent* Target);
};

class AGooGunPuddle : public AActor
{
    class USphereComponent* SphereTrigger;
    class USimpleHealthComponent* SimpleHealth;
    class USoundBase* SpawnSound;
    TArray<FGooPuddleStatusEffectTrigger> StatusEffectTriggers;
    TArray<class TSubclassOf<UStatusEffect>> InflictedStatusEffects;
    int32 ActiveStatusEffectTriggersMask;
    float LifeTime;
    bool CollisionOnClients;

    void SetStatusEffect(TSubclassOf<class UStatusEffect> NewStatusEffect);
    void OnStatusEffectAdded(const FGooPuddleStatusEffectTrigger& Trigger);
    void OnRep_ActiveStatusEffectTriggersMask(int32 PreviousMask);
    void OnPuddleEndOverLap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnPuddleBeginOverLap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void OnGooIgnited();
    void IgniteGoo();
    void AddStatusEffect(TSubclassOf<class UStatusEffect> NewStatusEffect);
};

class AGrapplingHookGun : public AAnimatedItem
{
    class UCoolDownItemAggregator* CoolDownAggregator;
    float MaxDistance;
    class UAnimMontage* FPReloadAnim;
    class UAnimMontage* TPReloadAnim;
    class UAnimMontage* FPGunslingAnim;
    class UAnimMontage* TPGunslingAnim;
    float MaxSpeed;
    float MaxSpeedReleaseModifier;
    float WindUpTime;
    bool AutoFire;
    FGraplingGunState State;
    float GrapleStartTime;

    void StopGrapple();
    bool StartGrapple();
    void Server_SetState(const FGraplingGunState& NewState);
    void OnRep_State(const FGraplingGunState& prevState);
    void OnReleaseHook();
    void OnGrappleUpdate(float DeltaSeconds);
    void OnGrappleStart();
    void OnGrappleFailed(bool TooFar);
    void OnGrappleEnd();
    float GetWindUpProgress();
    float GetCooldownDuration(TSubclassOf<class AGrapplingHookGun> GrapplingHookGun);
};

class AGrenade : public AActor
{
    TSubclassOf<class UUserWidget> CrossHairType;
    class UProjectileMovementComponent* Movement;
    float CoolDown;
    float Duration;
    bool CanCook;
    float cookTime;
    TArray<FVector2D> CookTickTimeline;
    class USoundCue* CookingSound;
    float ExplosionDelay;
    bool ExplodeOnImpact;
    FRotator ThrowDirectionOffset;
    int32 MaxGrenades;
    bool HasExploded;
    class UItemID* ItemID;
    TSubclassOf<class AActor> WeaponPreviewClass;
    TSubclassOf<class ALoadoutItemProxy> LoadoutProxy;
    class UStaticMesh* HandAttachMesh;
    class UGrenadeProjectionSettings* ProjectionSettings;
    class USoundCue* ImpactGroundSound;
    class UParticleSystem* ImpactGroundParticles;
    class UGrenadeAnimationSet* GrenadeAnimationSetOverride;

    void OnRep_HasExploded();
    void OnExploded();
    bool IsNonFriendlyPawn(class AActor* Actor);
    bool IsNonFriendly(class AActor* Actor);
    TSubclassOf<class AActor> GetWeaponViewClass();
    class AGrenade* GetGrenadeDefaultObject(TSubclassOf<class AGrenade> GrenadeClass);
    void ActorWasHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
};

class AGuntowerActivationPlatform : public AActor
{
    class USceneComponent* Root;
    class UStaticMeshComponent* STMesh;
    class UCapsuleComponent* Trigger;
    FGuntowerActivationPlatformOnProgressUpdatedDelegate OnProgressUpdatedDelegate;
    void ProgressUpdated(float Progress);
    FGuntowerActivationPlatformOnPlayersInsideChangedDelegate OnPlayersInsideChangedDelegate;
    void PlayersInsideChanged(int32 playerCount);
    FGuntowerActivationPlatformOnProgressFilled OnProgressFilled;
    void OnFinished();
    class AGuntowerModule* AssignedModule;
    float DoneAt;
    float DisabledTime;
    int32 playersInside;
    bool Disabled;
    bool IsShutDown;

    void ShutDown();
    void SetPlatformActive(bool IsActive);
    void ReEnable();
    void PlayerSteppedOn(int32 CurrentCount);
    void PlayerSteppedOff(int32 CurrentCount);
    void PlayerInsideRevived();
    void PlayerInsideDied(class UHealthComponentBase* Health);
    void OnShutDown();
    void OnRep_PlayersInside(int32 OldCount);
    void OnRep_IsShutDown();
    void OnRep_Disabled();
    void OnPlayersInsideChanged(int32 playersInside);
    void OnPlayerLeave(class AFSDPlayerState* PlayerState);
    void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnFinished();
    void OnDisabledChanged(bool IsDisabled);
    void ModuleDestroyed(class UHealthComponentBase* Health);
    int32 GetPlayerCount();
    class AGuntowerModule* GetAssignedModule();
    void EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    bool CanWidgetAppear();
    void AssignModule(class AGuntowerModule* towerModule);
};

class AGuntowerEvent : public AGameEvent
{
    class USceneComponent* Root;
    class USkeletalMeshComponent* BaseMesh;
    class UDamageComponent* EndExplosionDamage;
    TArray<FGuntowerModuleLevel> GuntowerLevels;
    FName ModuleAttachBone;
    float TowerExplodeDelay;
    float DelayBetweenExplosions;
    TArray<class AGuntowerModule*> TowerModules;
    int32 ActiveHostileModules;

    void SpawnModules();
    void OnRep_ModuleActive();
    void OnModulesSpawned();
    void OnModuleExploded(class AGuntowerModule* explodedModule);
};

class AGuntowerLineProjectile : public AProjectile
{
    FGuntowerLineProjectileOnLineDestroy OnLineDestroy;
    void LineDestroy(FHitResult Result);
    class USceneComponent* LeftLinePoint;
    class USceneComponent* RightLinePoint;
    class UDamageComponent* DamageComponent;
    class UParticleSystemComponent* BeamParticles;
    float PlatformDissolveRadius;
    float PlatformDissolveSqueeze;
    class UParticleSystemComponent* HitParticles;
    float TimeBetweenLineChecks;

    void TurnOffParticles();
    void LineDestroy__DelegateSignature(FHitResult Result);
    void Fire(const FVector& Origin, const FVector& Direction, float Distance);
};

class AGuntowerModule : public AFSDPawn
{
    class USoundCue* ExposeWeakpointSound;
    class USoundCue* deathSound;
    class UParticleSystem* deathParticles;
    TArray<class AActor*> WeakpointActors;
    FName BodyBone;
    FName TopConnectionPointName;
    FRotator CurrentTurretRotation;
    class UAnimSequenceBase* IntroductionAnimation;
    class UStaticMeshComponent* ArmorPiece1;
    class UStaticMeshComponent* ArmorPiece2;
    class UStaticMeshComponent* ArmorPiece3;
    class USkeletalMeshComponent* ModuleMesh;
    class UGunTowerHealthComponent* GuntowerModuleHealth;
    class AGuntowerEvent* OwningEvent;
    class AGuntowerModule* ChildModule;
    float WeakpointsExposedTime;
    float WeakpointsExposedTimeSolo;
    float HideArmorTime;
    float ArmorShootoutDelay;
    float ArmorLaunchPower;
    int32 ModuleID;
    bool IsPassiveModule;
    bool ModuleIsActive;
    bool AreWeakpointsExposed;
    bool AreWeaponsExposed;
    bool ConstantRotation;
    bool IsArmorOff;
    bool Exploded;

    void ShootOutArmor();
    void SetModuleActive();
    void OnTearArmor();
    void OnRep_IsModuleActive();
    void OnRep_IsArmorOff();
    void OnRep_Exploded();
    void OnRep_AreWeakpointExposed();
    void OnActivationChanged(bool IsActivated);
    void Introduce();
    void HideWeakpoints();
    void HideArmor();
    int32 GetModuleID();
    void DoExplosion();
    void DeactivateTowerModule();
    void All_PlayIntroductionAnim();
    void ActivateTowerModule();
};

class AGuntowerWeakPoint : public AFSDPawn
{
    class USceneComponent* Root;
    class UEnemyHealthComponent* Health;
    class UStaticMeshComponent* Mesh;
    class UWeakpointGlowComponent* HitGlow;
    TWeakObjectPtr<class UEnemyHealthComponent> ParentHealth;
    class UDamageClass* DamageToParent;
    class UParticleSystem* deathParticles;
    class USoundCue* deathSound;

    void OnExposedChanged(bool isExposed);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void DamageParent(float ammount);
};

class AHackingToolItem : public AAnimatedItem
{
    TWeakObjectPtr<class UHackingUsableComponent> HackingUsable;

    void Server_HackingCompleted(class UHackingUsableComponent* InUsable, bool InHackingSuccessful);
    void ReceiveHackingStarted();
    void ReceivedActionReleased();
    void ReceivedActionPressed();
    void ReceiveActionClick();
    void OnRep_HackingUsable();
    void HackingCompleted(bool InHackingSuccessful);
};

class AHalloweenSkull : public AEnemyDeepPathfinderCharacter
{
    FVector WobbleSpeeds;
    FVector WobbleRanges;
    FRuntimeFloatCurve AlertedMovement;
    float AlertedMovementScale;
    float AlertedMovementTimeScale;
    float JawMovementSpeed;

    void OnJawClosed();
    void OnAlert();
};

class AHangingFireCracker : public AActor
{
    class UInstantUsable* Usable;
    class USkeletalMeshComponent* SKMesh;
    class UNiagaraComponent* MovingSparks;
    class UFSDAudioComponent* FuseSound;
    TArray<class UStaticMeshComponent*> Crackers;
    class UNiagaraSystem* CrackerExplosion;
    class USoundCue* CrackerExplosionCue;
    float SparkSpeed;
    float ExplodeRange;
    float ExplodeImpulse;

    void StartFire();
};

class AHeavyParticleCannon : public AAmmoDrivenWeapon
{
    class UDamageComponent* Damage;
    class UReflectionHitscanComponent* HitscanComponent;
    class UStickyFlameSpawner* StickyFlamesSpawner;
    class UFirstPersonNiagaraComponent* FirstPersonBeam;
    class UFirstPersonNiagaraComponent* FirstPersonLaserSight;
    class UNiagaraComponent* ThirdPersonBeam;
    class USoundBase* BeamHitLocationGenericSound;
    class USoundBase* BeamHitLocationEnemySound;
    class USoundBase* BeamHitLocationEnemy_Local_Sound;
    float BeamHitSoundFadeSwitchTime;
    class USoundBase* BeamHitLocationTailSound;
    class USoundBase* BoosterModuleActivated;
    FHeavyParticleCannonOnBoosterActiveChanged OnBoosterActiveChanged;
    void BoosterModuleActive(bool IsActive);
    class UNiagaraSystem* ReflectedBeam;
    class UNiagaraSystem* ReflectedBeam_PhotoSensitive;
    class UNiagaraSystem* ReflectedLaserSight;
    class UNiagaraSystem* ImpactParticle;
    class UNiagaraSystem* ImpactParticle_PhotoSensitive;
    class UNiagaraSystem* ProjectionModuleParticle;
    class UNiagaraComponent* ImpactParticleComp;
    FDecalData ImpactDecal_ShortTime;
    FDecalData ImpactDecal_LongTime;
    bool bReloadOnButtonRelease;
    float MinTimeBetweenBiomassGain;
    bool BulkyBeam;
    float NormalBeamWidth;
    float BulkyBeamWidth;
    float ExtraRadialDamagePerSec;
    float ExtraRadialRangePerSec;
    float CancelCostPercentage;
    float ChargeupTime;
    class USoundBase* StartChargeSound;
    FVector LastDecalLocation;
    bool IsNewDecalBeam;
    float ProjectionModuleDamage;
    class UTerrainType* PlatformTerrainType;
    bool BoostActive;
    bool bReloadBoostsBeam;
    float ExtraReloadTimeAfterBoost;
    float BoostExtraAmmoCost;
    float BeamDependentReloadDuration;
    FVector2D BeamDistanceRange;
    FVector2D BeamTesselationRange;
    bool bIsBeamActive;

    void UpdateBeamsVisibility(bool isBeamVisible);
    void UpdateBeam(const FReflectionTraceResult& Path);
    void ServerSetBoostActive(bool newActive);
    void Server_SetBeamActive(bool inIsBeamActive);
    void Server_ExplodePlatform(FVector Location);
    void OnTargetKilled(class AActor* Target, class UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    void OnRep_BoostActive();
    void OnRep_bIsBeamActive();
    void IsHittngEnemyChanged(bool isHittingEnemy);
    void ChargeUpComplete();
    void ChargeChanged(bool isCharging);
};

class AHeliumTank : public AActor
{
    class UCurveFloat* PitchCurve;
    TArray<FPitchedUsers> PitchedUsers;
    class AHeliumTank* Leader;

    void OnUsedBy(class APlayerCharacter* User, EInputKeys Key);
    void OnShoutStarted(class APlayerCharacter* Player, class UAudioComponent* audio);
    void OnRep_PitchedUsers();
};

class AHolidayThrowableItem : public AThrowableItem
{

    void CameraModeUpdated(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
};

class AHomingDroneBomb : public AProjectile
{
    class UEnemyHealthComponent* Health;
    class USoundCue* ArmingSound;
    float HomingUpdateInterval;
    float TargetSearchInterval;
    float ArmTime;
    FGameplayTagContainer GameplayTags;
    float HomingAccelerationMagnitude;

    void UpdateHomingSpeed();
    void SearchForTarget();
    void OnRep_HomingAccelerationMagnitude();
};

class AHomingFireModule : public AHostileTargetingGuntowerModule
{
    FName ShootDroneSocket;
    TSubclassOf<class AProjectile> HomingProjectileClass;
    float TimeBetweenShots;

};

class AHostileGuntowerModule : public AGuntowerModule
{
    class USkeletalMeshComponent* DestroyedMesh;
    class UParticleSystemComponent* DestroyedSmoke;
    class UEnemyComponent* EnemyComponent;
    float ModuleMaxHealth;
    FRotator CurrentAimRotation;

    void OnWeakpointDied(class UHealthComponentBase* Health);
    void OnRep_ModuleMaxHealth();
    void OnModuleDied(class UHealthComponentBase* Health);
};

class AHostileGuntowerModuleController : public AFSDAIController
{
    class UAIPerceptionComponent* Perception;

    void OnPerceptionUpdated(class AActor* sensedActor, FAIStimulus Stimulus);
};

class AHostileTargetingGuntowerModule : public AHostileGuntowerModule
{
    TArray<class AActor*> SensedTargets;
    float TurretRotationSpeed;
    class AActor* TargetedActor;
    float TargetingRotationSpeed;
    FName TargetingFromBone;
    float TimeUntilForgetTarget;
    bool AlwaysUpdateAimRotation;

    void OnPerceptionUpdated(class AActor* sensedActor, FAIStimulus Stimulus);
};

class AHydraWeedCore : public AEnemyPawn
{

    void WakupCore();
    void OnShooterKilled(class AHydraWeedShooter* shooter);
    void OnHealerKilled(class AHydraWeedHealer* healer);
};

class AHydraWeedHealer : public AEnemyPawn
{
    class AHydraWeedCore* Core;

};

class AHydraWeedShooter : public AShootingPlant
{
    class AHydraWeedCore* Core;

};

class AHydraWeedSpawnProjectile : public AProjectile
{
    FVector TargetLocation;

};

class AIconGenerationBase : public AActor
{
    class USceneCaptureComponent2D* ActiveCaptureComponent;
    class UMaterialInterface* DownScaleMaterial;

};

class AIconGenerationCharacter : public AIconGenerationBase
{
    class UMaterialInterface* OrigBaseMaterial;
    class USkeletalMeshComponent* Mesh;
    class USkeletalMeshComponent* BodyMesh;
    class UBeardColorVanityItem* HairColor;
    class UMaterialInterface* ArmorMaterial;
    TArray<class UIconSceneCaptureComponent*> CaptureComponents;

};

class AIconGenerationPickaxe : public AIconGenerationBase
{
    TArray<class UPickaxeIconSceneCaptureComponent*> CaptureComponents;

};

class AIconGenerationWeapon : public AIconGenerationBase
{
    TArray<class UWeaponIconSceneCaptureComponent*> CaptureComponents;

};

class AImpactIndicator : public AActor
{
    class USceneComponent* Root;
    class USceneComponent* InnerScaler;
    class USceneComponent* OuterScaler;
    FRuntimeFloatCurve OuterGrowthCurve;
    FRuntimeFloatCurve InnerGrowthCurve;
    float Radius;

    void SetRadius(float Radius);
};

class AInfluenceTester : public AActor
{
    class UCaveInfluencer* Influencer;
    class USphereComponent* Sphere;

};

class AInsectSwarmEnemy : public AEnemyDeepPathfinderCharacter
{
    class UParticleSystemComponent* SwarmParticles;

};

class AInsectSwarmSpawner : public AEnemyPawn
{
    TSubclassOf<class AInsectSwarmEnemy> SwarmType;
    float SpawnHeightOffset;
    float AlertDistance;
    float respawnDelay;
    TWeakObjectPtr<class AInsectSwarmEnemy> SwarmInstance;

    class UStaticMeshComponent* Receive_GetStaticMesh();
    void OnSwarmSpawned(class AInsectSwarmEnemy* Swarm);
    void OnSwarmDestroyed(class AActor* DestroyedActor);
};

class AItem : public AActor
{
    FVector FPCameraOffset;
    FAudioWithCooldown AudioFriendlyFire;
    FItemOnEqipped OnEqipped;
    void Delegate();
    FItemOnUnequipped OnUnequipped;
    void Delegate();
    bool EnableDangerousSaveGameIDEditing;
    FGuid SavegameID;
    class UItemID* ItemID;
    class APlayerCharacter* Character;
    class UUpgradableItemComponent* UpgradableItem;
    TSubclassOf<class UCameraShakeBase> CameraShake;
    bool CameraShakeOnStartUsing;
    bool CameraShakeOnEquip;
    class UCurveFloat* HeatCurve;
    float ManualHeatPerUse;
    float HeatOnStartUse;
    float CooldownRate;
    float ManualCooldownDelay;
    float UnjamDuration;
    float CurrentTemperature;
    class USoundBase* AudioTemperature;
    float AudioTemperatureFadeout;
    FName TemperatureFloatParam;
    class UAudioComponent* TemperatureAudioComponent;
    bool overHeated;
    class UDialogDataAsset* ShoutOverheated;
    bool bAimAssistEnabled;
    float MovementRateWhileUsing;
    bool CanPlayLedgeClimbWhileUsing;
    bool CanInspectItem;
    bool CanSprintWithItem;
    TSubclassOf<class UItemsBarIcon> CustomIconWidget;
    float AdvancedVibrationSendLevel;
    bool IsEquipped;
    bool IsUsing;

    void UpdateSkin();
    class UAudioComponent* SpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    class UAudioComponent* SpawnSoundAtLocation(class USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    class UAudioComponent* SpawnSound2D(class USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
    void Server_StartUsing(bool IsUsing);
    void Resupply(float percentage);
    void RemovedFromInventory(class ACharacter* oldCharacter);
    void RecieveUnequipped();
    void RecieveStopUsing();
    void RecieveStartUsing();
    void RecieveEquipped();
    void RecieveCycledItem();
    void Recieve_UpdateMeshses(bool IsFirstPerson);
    void ReceiveResupply(float percentage);
    void Receive_Overheated();
    class UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
    class UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
    void OnTemperatureChanged(float Temperature, bool overHeated);
    void OnSkinChanged(class USkinEffect* Skin);
    void OnRep_IsUsing(bool OldValue);
    void OnOwnerDestroyed(class AActor* owningActor);
    bool IsLocallyControlled();
    bool IsFirstPerson();
    TSubclassOf<class AActor> GetWeaponViewClass();
    FItemLoadoutAnimations GetLoadoutAnimations();
    FText GetItemName();
    class UTexture2D* GetItemIconLine();
    class UTexture2D* GetItemIconBG();
    class AItem* GetItemDefaultObject(TSubclassOf<class AItem> itemClass);
    FText GetItemCategory();
    class USceneComponent* GetHeatingAudioSceneComponent();
    class UItemCharacterAnimationSet* GetCharacterAnimationSet();
    FString GetAnalyticsItemName();
    FString GetAnalyticsItemCategory();
    void AddedToInventory(class APlayerCharacter* ItemOwner);
};

class AItemDispenser : public AActor
{
    class USceneComponent* Root;
    class UInstantUsable* Usable;
    FItemDispenserOnItemSpawned OnItemSpawned;
    void ItemDispenserDelegate(class AActor* spawnedItem);
    FItemDispenserOnItemTaken OnItemTaken;
    void ItemDispenserDelegate(class AActor* spawnedItem);
    TArray<class AActor*> ItemHistory;
    TSubclassOf<class ACarriableItem> itemClass;
    class AActor* spawnedItem;
    float ItemSpawnTime;
    float InitialItemSpawnTime;
    bool IsOpen;
    bool KillItemsOnDestuction;

    void SpawnItem();
    void Open();
    void OnUsed(class APlayerCharacter* User, EInputKeys Key);
    void OnRep_SpawnedItem(class AActor* oldItem);
    void OnRep_IsOpen();
    void OnPickedUpItem(class AActor* Item);
    void OnOpenChanged(bool Open);
    void OnItemSpawnedEvent(class AActor* Item);
    bool HasItem();
    class AActor* GetItem();
    void Close();
};

class AItemMarker : public AActor
{
    bool bMarkerValid;
    bool bMarkerVisible;

    void OnMarkerVisibilityChanged(bool Visible);
    void OnMarkerValidChanged(bool Valid);
};

class AItemPreviewActor : public AActor
{
    class UItemSkin* CurrentSkinColor;
    class UItemSkin* CurrentSkinMesh;
    TSubclassOf<class AActor> itemClass;
    class UIconGenerationCameraKey* CameraKey_Normal;
    class UIconGenerationCameraKey* CameraKey_CloseUp;

    void SkinItem(class USkinEffect* Skin);
    void SetItemClass(TSubclassOf<class AActor> itemClass);
    void OnSkinPreviewChanged(class UItemSkin* PreviewSkin);
    void OnSkinItem(class USkinEffect* Skin);
    void OnSkinChanged();
    void ChangeSkin(class UItemSkin* skinMesh, class UItemSkin* skinColor, bool isPreview);
};

class AJellyBreeder : public AAFlyingBug
{
    class UAnimSequenceBase* EggSpawnAnimation;
    class UParticleSystem* EggParticles;
    class USoundBase* EggSound;
    class UEnemyDescriptor* EnemyToSpawn;
    TSubclassOf<class AProjectile> EggClass;
    float TimeBetweenBursts;
    float TimeBetweenEggs;
    float CloseToSpawnEggTime;
    class UPhysicalMaterial* WeakPointMaterial;
    class UPhysicalMaterial* UnWeakPointMaterial;
    int32 EggBurstSize;
    int32 MaxJellies;
    float MultiplierOnHighPlayerCount;
    bool IsInBreedMode;

    void SpawnEnemies(class AProjectile* Egg, int32 AmountToSpawn);
    void PlaySpawnEggAnim();
    void OnRep_BreedMode();
    void OnJellyDestroyed(class AActor* AActor);
    void BreedModeFlipped(bool aIsLayingEggs);
};

class AJetBootsBox : public AActor
{
    class UTerrainPlacementComponent* terrainPlacement;
    class USpecialEvent* SpecialEvent;

};

class AJetBootsBoxSpawner : public AActor
{
    TSoftClassPtr<AActor> JetBootsBoxClass;
    FFloatInterval SpawnIntervalFromDropPod;
    int32 MaxSpawnLocationTries;
    class UDebrisPositioning* DebrisPositioning;
    class UTerrainPlacementComponent* terrainPlacement;
    class AJetBootsBox* JetBootsBoxInstance;
    UClass* JetBootsBoxClassLoaded;

};

class AJetPackItem : public AAnimatedItem
{
    float ActiveTime;
    class UCurveFloat* VerticalAccelerationCurve;
    float VerticalAcceleration;
    float MaxVerticalSpeed;
    float MaxHorizontalSpeed;
    float MaxHorizontalDrift;
    float BurnDuration;
    float RechargeDuration;
    float Fuel;
    bool Active;
    class UPlayerMovementComponent* CharacterMovement;

    void Server_StopThruster();
    void Server_StartThruster();
    void OnRep_Fuel(float OldFuel);
    void OnRep_Active();
    void OnFuelChanged(float Value, float Delta);
};

class AJettyBootsArcadeActor : public AActor
{
    class UJettyBootUsableComponent* StartGameUsable;
    FJettyBootsPlayer Player;
    int32 MaxDistanceToPlay;
    class USceneComponent* MaxDistanceComponent;
    TArray<class UAnimMontage*> AnimPlaying;
    TArray<class UAnimMontage*> AnimFailed;
    TArray<class UAnimMontage*> AnimSucces;
    TArray<FJettyBootNPC> HighScoreNPCs;
    FJettyBootsSave JettyBootsSave;

    void SetActivePlayer(class APlayerCharacter* InPlayer);
    void Server_ReplayPackage(const FJettyBootsReplay& InPackage);
    void ReceiveReplayPackage(const FJettyBootsReplay& InPackage);
    void ReceivePlayerChanged();
    void ReceiveHighScoreChanged();
    void OnRep_Save();
    void OnRep_Player(const FJettyBootsPlayer& OldPlayer);
    void OnPlayerCharacterDestroyed(class AActor* InActor);
    void OnCharacterMoved(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    void OnCharacterMontageEnded(class UAnimMontage* InMontage, bool InInterrupted);
    bool IsPlayerWithinDistance();
    int32 GetLastHighScoreIndex();
    TArray<FJettyBootsScore> GetHighScores();
    class APlayerCharacter* GetActivePlayer();
    void ClearHighScores();
    void All_ReplayPackage(const FJettyBootsReplay& InPackage);
    void AddHighScoreServer(const FJettyBootsScore& InScore);
    void AddHighScoreClient(const FJettyBootsScore& InScore);
};

class ALMGGuntoweModule : public AHostileTargetingGuntowerModule
{
    class UHitscanComponent* HitScanComp;
    class UDamageComponent* DamageComp;
    class USceneComponent* AimAtWhenNoTarget;
    class UAudioComponent* FireAudio;
    class UParticleSystem* TracerEffect;
    class UParticleSystem* MuzzleEffect;
    class USoundCue* ShootTailSound;
    int32 BurstSize;
    float MaxAimOffset;
    float IdleAimRotationSpeed;
    float TimeBetweenShots;
    float TimeBetweenBursts;
    float AimSpeed;
    bool IsFiresoundPlaying;

    void ShowShot(const FVector& Location);
    void OnRep_IsFiresoundPlaying();
};

class ALaserPointerItem : public AAnimatedItem
{
    FLaserPointerItemOnMarkerPlaced OnMarkerPlaced;
    void MarkerPlacedDelegate(FVector Location, const FText& Name, FLinearColor Color, class AActor* Target, ELaserPointerTargetType TypeOfTarget);
    TSubclassOf<class ALaserPointerMarker> MarkerType;
    TSubclassOf<class ALaserPointerMarker> SecondaryMarkerType;
    TWeakObjectPtr<class ALaserPointerMarker> ActiveMarker;
    FGameplayTagContainer enemyTags;
    TSubclassOf<class ALaserPointerWaypoint> WaypointType;
    int32 MaxWaypoints;
    TArray<class ALaserPointerWaypoint*> Waypoints;
    int32 NextWaypointIndex;
    float MarkerLifeTime;
    class UDialogDataAsset* DefaultLookAtShout;
    class UDialogDataAsset* DefaultEnemyShout;
    class USceneComponent* PointerComponent;
    FHitResult LookAtHit;
    TWeakObjectPtr<class UObjectInfoComponent> LookAtInfo;
    TWeakObjectPtr<class UTerrainMaterial> LookAtTerrainMaterial;
    FLaserPointerData LookAtData;
    float LookAtDistance;
    class UDialogDataAsset* LookAtShout;
    class UDialogDataAsset* MissionControlLookAtShout;
    class AFSDGameState* GameState;

    void UnlockToMinersManual(class UObject* WorldContextObject, FGuid ObjectID);
    void ToggleLaserVisible(bool aVisible);
    void ServerPlaceMarker(FVector Location, class AActor* Actor, class UPrimitiveComponent* Cmponent, class UTerrainMaterial* TerrainMaterial, ELaserPointerMarkerType eMarkerType);
    void Server_SecondaryUse();
    void OnPointOfInterest(class AActor* TargetActor, FVector TargetLocation, class UTexture2D* TargetIcon);
    void GetPointTransform(FTransform& PointTransform);
};

class ALaserPointerMarker : public AActor
{
    FLaserPointerData LookAtData;
    class AActor* LookAtActor;
    class UPrimitiveComponent* LookAtComponent;
    class UTerrainMaterial* LookAtTerrainMaterial;

    class APlayerCharacter* GetCharacter();
};

class ALaserPointerWaypoint : public AActor
{
    TWeakObjectPtr<class APlayerCharacter> Character;
    TWeakObjectPtr<class ALaserPointerItem> LaserPointer;
    FVector Normal;
    int32 Index;

    void OnShow();
    void OnHide();
};

class ALineCutter : public AAmmoDrivenWeapon
{
    bool StopUsingReversesProjectile;
    bool RotateProjectileUntillStop;
    bool ExplodeLastProjectileOnNextFireAttempt;
    TArray<class UItemUpgrade*> upgrades;
    TWeakObjectPtr<class ALineCutterProjectile> LastProjectile;
    float MinExplosiveGoodbyeActivationTimme;

    void Server_StopRotatingProjectile();
    void Server_ReverseLastProjectile();
    void Server_DestroyOldProjectile();
    void OnRep_LastProjectile();
    void OnProjectileLaunched(class AProjectileBase* Projectile);
    void OnFireWhileLastProjectileAlive(class ALineCutterProjectile* Projectile);
};

class ALineCutterProjectile : public AProjectile
{
    FScaledEffect EletricHitEffect;
    FScaledEffect ProjectileDisappearEffect;
    float SwipeRadius;
    float DoubleLineDistanceMultiplier;
    float OverlapRadius;
    bool DestroyOnTerrainCollision;
    bool IsDead;
    bool bHasReversedDirection;
    bool bIsHoming;
    float FlyStraighTime;
    EImpactDecalSize EletricDecalSize;
    EImpactDecalSize ImpactDecalSize;
    FLineCutterProjectileOnLineDestroy OnLineDestroy;
    void LineDestroy(const FHitResult& Result);
    FLineCutterProjectileOnLineLifespanEnd OnLineLifespanEnd;
    void LineLifeSpanDestroy();
    FLineCutterProjectileOnPerformHit OnPerformHit;
    void PerformHit(const FHitResult& Result);
    FLineCutterProjectileOnLineEffectHide OnLineEffectHide;
    void LineEffectHide();
    FVector LeftLastPosition;
    FVector RightLastPosition;
    class USceneComponent* LineRoot;
    class USceneComponent* LeftSphere;
    class USceneComponent* RightSphere;
    class USceneComponent* LeftSphere2;
    class USceneComponent* RightSphere2;
    class USceneComponent* LeftSphere3;
    class USceneComponent* RightSphere3;
    class UParticleSystemComponent* BeamParticle;
    class UParticleSystemComponent* BeamParticle2;
    class UParticleSystemComponent* BeamParticle3;
    class UParticleSystemComponent* LeftHitParticles;
    class UParticleSystemComponent* RightHitParticles;
    float RotationSpeed;
    FRotator LineRotation;
    ELineRotation RotationMode;
    bool ShouldExplode;
    bool OnlyOne;
    bool IsDoubleLine;
    bool HasPlasmaTrail;
    float LineMaxSize;
    float LineExpansionDelay;
    float TimeToLineExpansion;
    float FireRate;
    class UDamageComponent* DamageComponent;
    class UDamageComponent* InitialDamageComponent;
    int32 InitialHitDamageMultiplier;
    float InhibitImpactDecalsTime;
    float MinTimeBetweenImpactDecals;

    void UpdateBeamLocations();
    void TerrainSweep(const FVector& Left, const FVector& Right);
    void StartSpawningTrail();
    void SpawnDecal(FHitResult& Result);
    void SetExtraBeamVisibility(bool IsVisible);
    void Server_RemoveDebris(int32 instance, int32 Component);
    void PerformHit__DelegateSignature(const FHitResult& Result);
    void OnRep_LineRotation();
    void LineLifeSpanDestroy__DelegateSignature();
    void LineEffectHide__DelegateSignature();
    void LineDestroy__DelegateSignature(const FHitResult& Result);
    void Fire(const FVector& Origin, const FVector& Direction, float Distance);
};

class ALineSegmentCarver : public AGenerationItem
{
    class ULineSegmentCarverComponent* LineComponent;

};

class ALineSegmentFiller : public AGenerationItem
{
    class ULineSegmentFillerComponent* LineComponent;

};

class ALoadoutItemProxy : public AItem
{
    class UItemCharacterAnimationSet* AnimationSet;
    FItemLoadoutAnimations LoadoutAnimations;

    TSubclassOf<class AItem> GetLoadoutItemFromClass(TSubclassOf<class AActor> ActorClass);
};

class ALockOnBeam : public AActor
{
    class USplineComponent* BeamSpline;
    class USplineMeshComponent* BeamMeshComponent01;
    class USplineMeshComponent* BeamMeshComponent02;
    class USplineMeshComponent* BeamMeshComponent03;
    class USceneComponent* BlockedNodeComponent;
    class USceneComponent* PreviewLocationComponent;
    class UMaterialInterface* BeamMaterial;
    class UMaterialInterface* BlockedBeamMaterial;
    class UMaterialInterface* SeekerMaterial;
    float BeamThicknessScale;
    TWeakObjectPtr<class ALockOnWeapon> Item;
    TWeakObjectPtr<class AActor> TargetActor;
    FBeamCollision Collision;

    void ReceiveItemSet();
};

class ALockOnWeapon : public AAmmoDrivenWeapon
{
    FLockOnWeaponOnLockingStarted OnLockingStarted;
    void LockOnRifleLockingOnState();
    FLockOnWeaponOnLockingStopped OnLockingStopped;
    void LockOnRifleLockingOnState();
    FLockOnWeaponOnMaxTargetsChanged OnMaxTargetsChanged;
    void MaxTargetsDelegate(int32 InMaxTargets);
    FLockOnWeaponOnLockOnCountChanged OnLockOnCountChanged;
    void LockOnCountDelegate(int32 InCurrentCount);
    FLockOnWeaponOnLockonTargetRotationUpdated OnLockonTargetRotationUpdated;
    void LockonTargetRotationUpdated(bool hasTargetLockon, FRotator socketRotation);
    class AActor* AimTarget;
    float LockOnDamageMultiplier;
    int32 ShotsPerTarget;
    int32 MaxTargets;
    float TimeBetweenLockedShots;
    float LockOnTime;
    float MaxLockOnDegree;
    float LoseLockOnDegree;
    float DegreeTolerance;
    float MaxLockOnRange;
    bool bPrioritizeLowHitPoint;
    bool bAlwaysHitTarget;
    float MaxLockOnDuration;
    bool bLockOnControlsSentryGun;
    bool bSentryGunShootsOnLockedShot;
    TSubclassOf<class UActorTrackingWidget> TrackingWidgetClass;
    TSubclassOf<class ALockOnBeam> LockOnBeamClass;
    TSubclassOf<class AActor> AoeActorClass;
    int32 AoeHitCountThreshhold;
    bool UseLockOnTargetStatusEffect;
    TSubclassOf<class UStatusEffect> LockOnTargetStatusEffect;
    int32 PushStatusEffectEveryXLock;
    int32 LockOnCount;
    class UDamageComponent* DamageComponent;
    class UHitscanComponent* HitscanComponent;
    FTracerData ChargedShotTracer;
    float ChargeSpeed;
    float SlowMovementAtCharge;
    bool FearEnabled;
    float FearFactorBase;
    float FearFactorPerShotBonus;
    float FearRange;
    float FearRangePerShotBonus;
    bool IsMovementSlowed;
    bool Charging;
    float ChargeProgress;
    bool LastShotWasLockedOn;
    float LockOnRecoilMult;

    void UpdateRifleEye();
    void SetMuzzleDirection(FVector TargetLocation);
    void Server_TriggerAoe(FVector Location);
    void Server_SetTotalLockCount(int32 totalLockCount);
    void Server_SetLockCount(const FLockCounter& LockCounter);
    void Server_SetIsMovementSlowed(bool bisMovementSlowed);
    void Server_SetIsLatestShotLockedOn(bool bisShotLockedOn);
    void Server_SetIsChargingShot(bool bisCharging);
    void Server_PushStatusEffect(class AActor* Target);
    void Server_PopStatusEffect(class AActor* Target);
    void Server_FiringComplete(int32 ShotsFired);
    void RefundAmmo();
    void OnRep_AimTarget();
    void OnMovementSlowed(bool isSlowed);
    void OnHitDeadTarget();
    void OnHit(const FHitResult& Hit, bool alwaysPenetrate);
    void OnAsyncFireComplete();
    void MuzzleLerpToTarget(FVector TargetLocation);
    void MaxTargetsDelegate__DelegateSignature(int32 InMaxTargets);
    void LockonTargetRotationUpdated__DelegateSignature(bool hasTargetLockon, FRotator socketRotation);
    void LockOnRifleLockingOnState__DelegateSignature();
    void LockOnCountDelegate__DelegateSignature(int32 InCurrentCount);
};

class ALostPack : public AActor
{
};

class AMULE : public ADeepPathfinderCharacter
{
    class UHealthComponent* HealthComponent;
    class USimpleObjectInfoComponent* ObjectInfo;
    bool IsDown;

    void SetIsDown(bool IsDown);
    void SetControlledByDropShip(bool Control);
    void OnRep_IsDown();
};

class AMagazine : public AActor
{
    class USoundCue* ImpactGroundSound;

    void OnItemSkinned(class USkinEffect* Skin);
    void ActorWasHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
};

class AMaggot : public ADeepPathfinderCharacter
{
    class USimpleHealthComponent* HealthComponent;

};

class AMeteorDefenseEvent : public AGameEvent
{
    TArray<FProgressShout> ProgressShouts;
    float Duration;
    float InitialProgress;
    class APlagueMeteor* meteor;

    void SetMeteor(class APlagueMeteor* meteor);
    class APlagueMeteor* GetMeteor();
};

class AMicroMissileLauncher : public AAmmoDrivenWeapon
{
    FMicroMissileLauncherOnStartCharging OnStartCharging;
    void ChargingDelegate();
    FMicroMissileLauncherOnEndCharging OnEndCharging;
    void ChargingDelegate();
    TArray<FName> MuzzleNames;
    float ChargeTime;
    int32 ChargeMaxFireCount;
    float BuckShotDelay;
    float ShotDirectionHorizontalDegreeOffset;
    float ShotDirectionVerticleDegreeOffset;
    EMicroMissileLauncherFireMode FireMode;
    bool DisableHomingOnRelease;
    float MaxHomingProjectiles;
    class UAnimMontage* WPN_Fire_Empty_Mag;
    class UAnimMontage* WPN_Fire_Level2;
    class UAnimMontage* WPN_Fire_Level2_Empty_Mag;
    class UAnimMontage* WPN_Fire_Level3;
    class UAnimMontage* WPN_Fire_Level3_Empty_Mag;
    class UAnimMontage* WPN_Mag_Feed;
    class UAnimMontage* WPN_Mag_And_Barrel_Feed;
    class USoundCue* ChargedMissileFireSound;

    void Server_SetIsCharging(bool isCharging);
    void Server_SetChargedMissile(bool isCharged);
    bool IsNextShotBuckShot();
    int32 GetChargeCurrentFireCount();
    void ChargingDelegate__DelegateSignature();
    void All_SetChargedMissile(bool isCharged);
};

class AMicrowaveWeapon : public AAmmoDrivenWeapon
{
    class UDamageComponent* DamageComp;
    class UCapsuleHitscanComponent* CapsuleHitscanComp;
    class UFirstPersonNiagaraComponent* FP_MuzzleParticle;
    class UNiagaraComponent* TP_MuzzleParticle;
    class UDamageComponent* ExplodingTargetsDamageComponent;
    class UDamageComponent* RadiantSuperheaterHeat;
    class UDamageComponent* RadiantSuperheaterFrostShock;
    FMicrowaveWeaponOnLenseActivated OnLenseActivated;
    void LensActivedDelegate(bool isWideLens);
    FMicrowaveWeaponOnLenseDeactivated OnLenseDeactivated;
    void LensDeactivedDelegate(bool isWideLens);
    float SwitchTime;
    TSubclassOf<class UStatusEffect> GammaContaminationSTE;
    TSubclassOf<class UStatusEffect> GammaContaminationZoneSTE;
    float GammaContaminationRange;
    TSubclassOf<class ABoil> ExplodableBlisterClass;
    float BlisteringNecrosisChance;
    float MinTimeBetweenBlisteringNecrosis;
    TSubclassOf<class UStatusEffect> FireEffect;
    TArray<class TSubclassOf<UStatusEffect>> NeuroEffects;
    TSubclassOf<class UStatusEffect> NeuroToSpread;
    TSubclassOf<class UStatusEffect> SlowEffect;
    class UNiagaraSystem* ImpactParticleEnemies;
    class UNiagaraSystem* ImpactParticleTerrain;
    class UNiagaraSystem* NeuroSpreadParticles;
    class UParticleSystem* P_NeuroSpreadParticles;
    class USoundCue* NeuroSpreadSound;
    class UNiagaraSystem* MicrowaveMuzzle;
    class UNiagaraComponent* MuzzleComp;
    TSet<AActor*> ActorsInCapsule;
    float WeaponRange;
    float ShotWidth;
    float DamageInterval;
    float KilledTargetsExplosionChance;
    class UNiagaraSystem* ExplosionOCSystem;
    float NeuroSpreadRadius;
    FMicrowaveLense WideLense;
    FMicrowaveLense FocusLense;
    float TemperatureAmplification;
    bool RadiantSuperheaterActive;
    float RadiantSuperheaterFrostShockChance;
    float RadiantSuperheaterHeatShockChance;
    float RadiantSuperheaterMinColdDamage;
    float RadiantSuperheaterMinHeatDamage;
    float RadiantSuperheaterFrostTransferFactor;
    float RadiantSuperheaterHeatTransferFactor;
    float ColdTempAmpMultiplier;
    TWeakObjectPtr<class UEnemyTemperatureComponent> RadiantSuperheaterTarget;
    bool SlowOnHit;
    TSubclassOf<class AActor> HeatSink;

    void UpdateMuzzleAnim(bool InIsFiring);
    void SpawnExplosiveBoil(class UPrimitiveComponent* Target, const FMultiHitscanHit& Hit);
    void ShowBoilerRayExplosion_Server(FVector_NetQuantize Location, FRotator Rotation);
    void ShowBoilerRayExplosion(FVector_NetQuantize Location, FRotator Rotation);
    void Server_SetLensePower(float lensepower);
    void OnTargetKilled(class AActor* Target, class UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    void OnShowHitEffect(const FVector& ImpactPoint, const FVector& ImpactNormal, bool hitEnemy);
    void OnServerHitscanHit(const FMultiHitScanHits& Hits);
    void OnRadiantSuperHeaterAoe();
    void OnPushedDamageEffect(class UHealthComponentBase* healthComp);
    void HeatUpdated(float SmoothedTemperature);
    void EndCharacterOverheatAnim();
    void All_ShowNeuroSpread(const FVector& Location);
};

class AMiniMule : public AMULE
{
    TArray<class AGem*> LostLegs;

    void SetLegsVisibleOnScanner();
    void OnLegsSetVisible();
    TArray<class AGem*> FindLegsInLevelSortedByDistance();
    void CheatRepair();
};

class AMiningPodCalldownLocation : public AActor
{
};

class AMolly : public AMULE
{
    FMollyOnCalledByChanged OnCalledByChanged;
    void CalledByDelegate(class APlayerCharacter* InPlayer);
    class UResourceBank* ResourceBank;
    class UOutlineComponent* OutlineComponent;
    FMollyOnReachedDropShip OnReachedDropShip;
    void Delegate();
    TWeakObjectPtr<class APlayerCharacter> CalledBy;

    void SetOpenForDeposit(bool Open);
    void SetGotoDropShip(const FVector& Location);
    void SetCalledBy(class APlayerCharacter* InPlayer);
    void OnRep_CalledBy();
    class UDialogDataAsset* GetCallingShout();
    void EnableButton();
    void CalledByDelegate__DelegateSignature(class APlayerCharacter* InPlayer);
    void AddTrayEffect(class UNiagaraSystem* Effect, int32 numberOfTraysAffected);
};

class AMountedGun : public AActor
{
    class USkeletalMeshComponent* Mesh;
    class UWeaponFireComponent* WeaponFire;
    class UGunLogicComponent* GunLogic;

    void Server_Test();
};

class AMusicReplicator : public AActor
{
    TArray<FActiveMusicItem> ActiveMusic;

    void OnRep_ActiveMusic();
};

class ANeedleSprayer : public AActor
{
    class USceneComponent* Root;
    class USkeletalMeshComponent* SKMesh;
    class UHitscanComponent* FireComponent;
    class UHitscanComponent* OnSpawnedEffectComponent;
    class UPointLightComponent* MuzzleFlashLight;
    class UNiagaraComponent* MuzzleFlashParticleSys;
    class UNiagaraComponent* ImpactParticleComponent;
    class USceneComponent* ShotOriginPivot;
    class UHitscanComponent* HitscanComponent;
    class UFSDAudioComponent* SoundEnd;
    class UAnimMontage* ReloadAnimation;
    int32 MaxRotations;
    int32 LinesPerRotation;
    FVector2D ShotAngleFromTop;
    float DeployDelay;
    float LifeTime;
    float TimeBetweenRotations;
    float RearmTime;
    float AvoidCloseOffset;
    float ShotOriginOffset;
    int32 MaxRearms;
    bool PlayAnimationOnBeginPlay;
    bool PlayAnimationOnReload;
    bool DrawDebugLines;
    float DebugLinesDuration;

    void OnSpinningChanged(bool isSpinning);
    void OnHit(const FHitResult& Result, bool IsPenetrating);
};

class ANiagaraSpawnerAndCacheGenerator : public AActor
{
    TArray<class UFXSystemAsset*> ToGenerate;
    TArray<class UFXSystemComponent*> Generating;

};

class ANoiseVisualizor : public AActor
{
    class UFloodFillSettings* FloodFillSettings;
    float FreqMultiplier;
    float AmplitudeMultiplier;
    FVector NoiseSize;
    float PointSize;
    float PostNoiseAmplitude;
    int32 Octaves;
    FVector Origin;
    bool ShowNoise;
    bool ShowTerrainNoise;

};

class ANoisyPathfinderTest : public AActor
{
    FVector Start;
    FVector End;
    FVector StartDirection;
    FVector EndDirection;
    float DirectionDistance;
    float DirectionPenalty;
    float ZPenaltyPower;
    float ZPenaltyScale;
    float DistancePenaltyScale;
    float RandomPenaltyScale;
    TArray<FPathObstacle> Obstacles;
    class UTunnelSegmentSetting* TunnelSettings;
    class UTunnelParameters* TunnelParameters;
    int32 StepSize;
    bool Realtime;
    bool CarvePath;
    bool CanDiagonal;
    class UFloodFillSettings* FloodFillSettings;
    class ADeepCSGWorld* CSGWorld;

};

class AOldZiplineSalvage : public AActor
{
    TSubclassOf<class AZipLineProjectile> ZiplineProjectileClass;
    FVector RelativeDestinationLocation;

    void OnMatchStarted();
};

class APLSTester : public AActor
{
    FString FullSeedString;
    int32 PLSSeed;
    int32 MissionSeed;
    int32 GlobalSeed;
    int32 GlobalMissionIndex;
    bool OptOutOfSeasonContent;
    class UMissionComplexity* limitComplexity;
    class UMissionDuration* limitDuration;
    class UMissionMutator* Mutator;
    TArray<class UMissionWarning*> Warnings;
    TArray<class TSubclassOf<UObjective>> SecondaryObjectives;
    class USpecialEvent* SpecialEvent;
    class UBiome* Biome;
    class UMissionTemplate* MissionTemplate;
    class UMissionTemplate* CustomMissionTemplate;
    class UDifficultySetting* OverrideDifficulty;
    int32 SimulatePlayerCount;
    FText CustomMissionName;

};

class AParasiteEnemy : public AEnemyPawn
{
    class USceneComponent* Root;
    class USkeletalMeshComponent* Mesh;
    class UStaticMeshComponent* Tentacles1;
    class UStaticMeshComponent* Tentacles2;
    class UOutlineComponent* outline;
    class UParticleSystem* deathParticles;
    class USoundBase* deathSound;

    void OnSelfDeath(class UHealthComponentBase* aHealthComponent);
};

class APathfinderDebugProbe : public AActor
{
    class AActor* Dest;

};

class APathfinderVehicle : public APawn
{
    class UDeepPathfinderMovement* PathfinderMovement;
    class USkeletalMeshComponent* Mesh;
    class UHealthComponent* HealthComponent;
    float Speed;

};

class APatrolBot : public AEnemyDeepPathfinderCharacter
{
    class UHackingUsableComponent* HackingUsable;
    class UPawnSensingComponent* PawnSensing;
    class USphereComponent* CollisionSphere;
    class USphereComponent* NearTargetSphere;
    class UParticleSystemComponent* LaserBeam;
    class UParticleSystemComponent* TearingGroundParticles;
    class UEnemyComponent* EnemyComponent;
    class UDamageComponent* Damage;
    class UDamageComponent* BumpDamage;
    class UPawnAlertComponent* Alert;
    class UPlayerImpactCooldownComponent* ImpactCooldown;
    class UAvoidCeilingComponent* CeilingAvoidance;
    class UAudioComponent* RollingAudio;
    class UAudioComponent* FlyingAudio;
    class UProjectileAttackComponent* RollingRangedAttack;
    class UProjectileAttackComponent* FlyingRangedAttack;
    class UProjectileAttackComponent* MissileAttack;
    float MaxMotionSoundVelThresholdFlying;
    float MaxMotionSoundVelThreshold;
    float MaxTurningMotionSoundVelThreshold;
    bool DebugAudio;
    float HackedAttackMultiplier;
    bool IsLockedOn;
    float DelayAfterLockOn;
    class USoundCue* ImpactCue;
    class USoundCue* JumpSound;
    class USoundCue* StartupAccelerationSound;
    float LaunchPower;
    float SpawnRocketsTime;
    EPatrolBotState State;
    EPatrolBotControlState ControlState;
    float HackedAttackSpeedMultiplier;
    float LaserPenetrationDistance;
    float MinTurretAngle;
    float MaxTurretAngle;
    float SpawnRocketsChance;
    float GunRange;
    float RollingAttackCooldown;
    float FlyingAttackCooldown;
    float TurretLerpSpeed;
    float AimDownwardsOffset;
    float AccelerationThreshold;
    float LowSpeedThreshold;
    FRuntimeFloatCurve SpeedTiltCurve;
    class UFakeMoverSettings* RollSettings;
    class UFakeMoverSettings* JumpSettings;
    class UFakeMoverSettings* SpawnRocketsSettings;
    bool CanJump;
    float JumpForce;
    float StartFlyingTimer;
    float MinRollingTime;
    float MaxRollingTime;
    float MinFlyingTime;
    float MaxFlyingTime;
    float SinSpeed;
    float SinSize;
    float FlyingDampOmega;
    float RollingDampOmega;
    bool FiringRockets;
    bool Alerted;
    class AActor* CurrentTarget;

    void SetIsPatrolling(bool patroling);
    void SetHacked();
    void SetFiringRockets(bool firing);
    void ReviveDrone();
    void OnStateChangedEvent(EPatrolBotState CurrentState);
    void OnSpawnRocketsEvent();
    void OnRocketsEnded();
    void OnRevived();
    void OnRep_State();
    void OnRep_IsLockedOn();
    void OnRep_FiringRockets();
    void OnRep_ControlState(EPatrolBotControlState oldState);
    void OnProjectileSpawned();
    void OnMovementStateChanged(EDeepMovementState State);
    void OnLockedOn();
    void OnLandedEvent();
    void OnJumpEvent();
    void OnFireRockets();
    void OnDroneHacked();
    void OnDroneAlerted();
    void OnDisabled();
    void OnDeath(class UHealthComponentBase* aHealthComponent);
    void OnControlStateChanged(EPatrolBotControlState ControlState);
    void OnCollided(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Jumped();
    bool IsHacked();
    void ImpactSound();
    void EndFireRockets();
    void DisableDrone();
    void All_SetLaserBeamActive(bool Active);
};

class APickaxeItem : public AItem
{
    bool QuadDamageCarving;
    class USceneComponent* FP_Root;
    class USceneComponent* TP_Root;
    class USceneComponent* FP_Scale;
    class USceneComponent* TP_Scale;
    class UPlayerAnimInstance* FPAnimInstance;
    class UPlayerAnimInstance* TPAnimInstance;
    class UAnimMontage* FP_EquipAnimation;
    class UAnimMontage* TP_EquipAnimation;
    float EquipDuration;
    class UItemCharacterAnimationSet* CharacterAnimationSet;
    class UDamageComponent* DamageComponent;
    class UDamageComponent* SpecialDamageComponent;
    float SpecialCooldown;
    float SpecialCooldownRemaining;
    FCoolDownProgressStyle SpecialCooldownUI;
    int32 RockMiningBonus;
    int32 DirtMiningBonus;
    float DamageRange;
    float MiningRange;
    float DamageRadius;
    TSubclassOf<class UStatusEffect> OnDamageEnemySlowdownEffect;
    FGameplayTagContainer WideDamageTrackingTags;
    class USoundCue* MiningSound;
    class UForceFeedbackEffect* MineRumble;
    class UForceFeedbackEffect* PartialMineRumble;
    class UForceFeedbackEffect* DamageRumble;
    float GeneralImpactAudioVolume;
    float HitCooldown;
    float MiningDuration;
    float DistanceConsideredSameHit;
    float BlockParticlesScaleFP;
    float BlockParticlesScaleTP;
    EPickaxeState State;
    class USoundCue* PowerAttackRefreshedSound;
    bool PreventQMining;
    float QMiningExpectedDelay;
    float QMiningInitialDelay;
    float QMiningReducedPlayRatePct;
    double QMiningLastHitTime;
    bool CanBezerk;
    TSubclassOf<class UStatusEffect> BezerkStatusEffect;
    bool PowerAttackEnabled;
    TMap<class EPickaxePartLocation, class FPickaxeMeshInstance> EquippedParts;
    class UMaterialInterface* EquippedMaterial;

    void SpecialTargetDamageEffects(const FVector& ImpactPoint, const FVector& ImpactNormal);
    void SetSpecialCoolDownDuration(float newCooldownDuration);
    void Server_TriggerBezerk();
    void Server_SetState(EPickaxeState NewState);
    void Server_RemoveDebrisInstance(FVector_NetQuantize HitPos, int32 DebrisIndex, int32 remappedIndex);
    void Server_HitBlock(FVector_NetQuantize Position, int32 Material, bool removeDebris, bool isSpecial);
    void Server_DoPowerAttack();
    void Server_DigBlock(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial);
    void Server_DamageTarget(class UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, class UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void RefreshSpecialCooldown();
    void OnRep_State(EPickaxeState oldState);
    void OnLoadoutChanged();
    float GetSpecialCooldownProgress();
    void All_SimulateHitBlock(FVector_NetQuantize Position, int32 materia, bool removeDebris, bool isSpecial);
    void All_SimulateDigDebris(FVector_NetQuantize Position, class UFXSystemAsset* Particles, class USoundCue* cue);
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool SpawnParticles, int32 Material, float Density, bool isSpecial);
    void All_SimulateDamageTarget(class UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, class UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void All_DoPowerAttack();
};

class APickaxePreviewActor : public AActor
{
    class USceneComponent* TP_Root;
    FVector Scale;
    TMap<class EPickaxePartLocation, class FPickaxeMeshInstance> EquippedParts;
    class UItemID* ItemID;
    class UMaterialInterface* EquippedMaterial;

    void PreviewParts(EPickaxePartLocation PreviewLocation, class UPickaxePart* PreviewPart);
    void EquipParts();
};

class APillarGenerationItem : public AGenerationItem
{
    class UPillarGenerationComponent* PillarComponent;

};

class APipelineBuilderItem : public ATrackBuilderItem
{
    class UItemPlacerAggregator* SegmentPlacer;

};

class APipelineExtractorPod : public ARessuplyPod
{
    TWeakObjectPtr<class APipelineSegment> ConnectedSegment;
    float TargetRotation;

    void SetTargetRotation(class APipelineSegment* InPipelineSegment);
    void ReceiveConnectedToSegment(class APipelineSegment* InConnectedSegment);
    void OnRep_ConnectedSegment();
    void ExtractorPodOrderedEvent(class APlayerCharacter* InUser);
};

class APipelineFinish : public AActor
{
    class UTrackBuilderConnectPoint* PipelineEndConnection;
    class USingleUsableComponent* UsableOrderExtractor;
    TSubclassOf<class APipelineExtractorPod> ExtractPodClass;
    class APipelineExtractorPod* ExtractorPod;
    bool bPipelineCompleted;

    void ReceivePipelineCompleted();
    void ReceiveExtractorPodSpawned(class APipelineExtractorPod* InExtractorPod);
    void OnRep_PipelineCompleted();
    void OnRep_ExtractorPod();
    void OnExtractorPodStateChanged(class ARessuplyPod* InExtractorPod, ERessuplyPodState InState);
    void OnExtractorPodOrdered(class APlayerCharacter* InUser, EInputKeys Key);
    void OnConnectedWithSegment(class UTrackBuilderConnectPoint* InConnectPoint, class ATrackBuilderSegment* InSegment);
    void OnConnectedSegmentActivated(class APipelineSegment* InSegment);
    FVector GetLandingOffset();
};

class APipelineSegment : public ATrackBuilderSegment
{
    FPipelineSegmentOnPipelineBroken OnPipelineBroken;
    void PipelineSegmentDelegate(class APipelineSegment* InPipelineSegment);
    FPipelineSegmentOnPipelineRepaired OnPipelineRepaired;
    void PipelineSegmentDelegate(class APipelineSegment* InPipelineSegment);
    FPipelineSegmentOnPipelineActivated OnPipelineActivated;
    void PipelineSegmentDelegate(class APipelineSegment* InPipelineSegment);
    FPipelineSegmentOnPipelineStateChanged OnPipelineStateChanged;
    void PipelineStateDelegate(EPipelineBuildState InPipelineState);
    class UStaticMesh* StaticMeshUnassembled;
    class UStaticMesh* StaticMeshAssembled;
    class UStaticMesh* StaticMeshFinal;
    FVector EditorEndLocation;
    TEnumAsByte<ETraceTypeQuery> CarvingTraceType;
    class UMaterialInterface* NumberMaterial;
    class USingleUsableComponent* RepairSegmentUsable;
    class USingleUsableComponent* ActivateSegmentUsable;
    class UDroneUseComponent* DroneUsable;
    class USimpleHealthComponent* SegmentHealthComponent;
    class USplineComponent* MovementSpline;
    class USplineComponent* MovementSplineRight;
    class USplineComponent* MovementSplineLeft;
    class USplineMeshComponent* PipelineMesh;
    class USplineMeshComponent* PipelineOuterMesh;
    class USkeletalMeshComponent* PipelineCapMesh;
    class USkeletalMeshComponent* EndPostMesh;
    class UStaticMeshComponent* EndPostMeshStatic;
    class UPathfinderSplineSegmentCollisionComponent* PathfinderComponent;
    bool bSegmentBroken;
    float SegmentActivatedProgress;
    EPipelineBuildState PipelineState;
    TWeakObjectPtr<class APipelineStart> PipelineStart;
    float MinValidLength;
    float MaxValidLength;
    float TooSharpExtraLength;
    float TooSteepExtraLength;
    float BlockedSphereSize;
    int32 BlockedExtraRaytraceRotationOffset;
    float BlockedExtraRaytraces;
    float BlockedExtraRaytraceDist;
    float BlockedRayTraceSuccesses;

    void UpdateSplineMesh(class USplineMeshComponent* InMesh, float InProgress, bool InMoveEndCap);
    void SetSegmentBroken(class APlayerCharacter* InUser, bool InSegmentBroken);
    void SetPipelineNumberMaterial(class UMaterialInterface* InNumberMaterial);
    void SetEndPostVisible(bool InVisible);
    void ReceiveSegmentBrokenChanged(bool InSegmentBroken);
    void ReceiveSegmentActivatedProgress(float InProgress);
    void ReceiveSegmentActivated();
    void ReceivePlacementFinished();
    void ReceivePlacementBegin();
    void PipelineStateDelegate__DelegateSignature(EPipelineBuildState InPipelineState);
    void PipelineSegmentDelegate__DelegateSignature(class APipelineSegment* InPipelineSegment);
    void OnRepaired(class APlayerCharacter* InUser);
    void OnRep_SegmentBroken();
    void OnRep_SegmentActivatedProgress();
    class APipelineStart* GetPipelineStart();
    class APipelineSegment* GetNextPipelineSegment(bool bForward);
    bool GetIsSegmentActivated();
    void CallbackSegmentRepaired(class APlayerCharacter* InUser, EInputKeys Key);
    void CallbackSegmentDestroyed(class UHealthComponentBase* InHealth);
    void CallbackSegmentActivatedProgress(float InProgress);
    void CallbackSegmentActivated(class APlayerCharacter* InUser, EInputKeys Key);
    void CallbackPipelineStateChanged(class APipelineStart* InPipelineStart, EPipelineBuildState InState);
    void CallbackNextSegmentChanged(class UTrackBuilderUsable* InUsable, class ATrackBuilderSegment* InSegment);
    void CallbackDroneUsed(int32 TimesUsed);
};

class APipelineStart : public AActor
{
    FPipelineStartOnBuildStateChanged OnBuildStateChanged;
    void PipelineStartStateDelegate(class APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    int32 PipelineID;
    class UTrackBuilderUsable* PipelineStartUsable;
    EPipelineBuildState BuildState;
    class APipelineFinish* PipelineFinish;
    class AFSDRefinery* Refinery;
    TArray<TWeakObjectPtr<APipelineSegment>> BrokenSegments;

    void ReceiveBuildStateChanged(EPipelineBuildState InBuildState);
    void PipelineStartStateDelegate__DelegateSignature(class APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    void PipelineCompleted(class APipelineFinish* InPipelineFinish);
    void OnRep_BuildState();
    void OnNextSegmentChanged(class UTrackBuilderUsable* InUsable, class ATrackBuilderSegment* InSegment);
    TArray<class APipelineSegment*> GetAllPipelineSegments();
};

class APlaceableItem : public AAnimatedItem
{
    class UCapacityHoldingItemAggregator* Capacity;
    class UItemPlacerAggregator* ItemPlacer;
    TSubclassOf<class AActor> PlacableClass;

    void Server_SpawnItem(FVector Location);
    void ReceiveItemSpawned(class AActor* SpawnedActor);
    void OnCarriedAmountChanged(int32 newAmount);
};

class APlagueCleanupItem : public AAnimatedItem
{
    class UBoxComponent* DroppedCollider;
    class UInstantUsable* PickupUsable;
    class USphereComponent* UseSphere;
    class UCrosshairAggregator* CrosshairAggregator;
    class UAnimMontage* FP_FireAnimation;
    class UAnimMontage* TP_FireAnimation;
    class UAnimMontage* FP_Gunsling;
    class UAnimMontage* TP_Gunsling;
    class UAnimMontage* Item_Gunsling;
    class USoundCue* UsingSound;
    float UsingSoundFadeout;
    class USoundCue* UsingSoundTail;
    class UKeepInsideWorld* KeepInsideWorld;
    class UAudioComponent* UsingSoundInstance;
    float FireRate;

    void Server_Gunsling();
    void Server_EnablePhysics(const FVector_NetQuantize& Direction);
    void OnPickupUsed(class APlayerCharacter* User, EInputKeys Key);
    void OnObjectiveChanged(class UObjective* Objective);
    void OnInRangeChanged(bool InRange);
    void All_Gunsling();
    void All_EnablePhysics(const FVector_NetQuantize& Direction);
};

class APlagueControlActor : public AActor
{
    TArray<FPlacementObstruction> Obstructions;
    class UNiagaraComponent* DebrisLightSystem;
    class UPlagueUsable* CallWeaponPodUsable;
    class UTerrainMaterial* TargetPlagueMaterial;
    TSubclassOf<class ACleanupPodItem> CleanupPodItem;
    float MinTimeBetweenWeaponPods;
    float MinDistBetweenPods;
    float MaxDistFromCenter;
    float CanCallPodDistance;
    float IgnoreDebrisLightSphere;
    float DebrisLightDistanceFromGround;
    float RemoveDebrisLightUpdateRate;
    bool DebugDrawDebrisLight;
    TWeakObjectPtr<class APlagueInfectionNode> TargetedPlagueNode;

    void SpawnPodHack(class APlayerCharacter* Player);
    void SetCanUseWeaponPod(bool Value);
    void PushDebrisLights();
    void EquipPlaguePod(class APlayerCharacter* Player);
    bool CanDropWeaponPod(float& TimeLeft);
};

class APlagueInfectionNode : public AActor
{
    FPlagueInfectionNodeOnFirstPlayerNearCenter OnFirstPlayerNearCenter;
    void FirstPlayerNearCenter(class AActor* SporeTower);
    FPlagueInfectionNodeOnPlagueCenterKilled OnPlagueCenterKilled;
    void PlagueCenterKilled(class AActor* SporeTower);
    class USimpleHealthComponent* HealthComponent;
    FPlagueInfectionNodeTriggerCleanupTutorial TriggerCleanupTutorial;
    void Delegate();
    class UTerrainMaterial* PlagueTerrainMaterial;
    float NodeInfluenceRadius;
    int32 NumberOfDeathEffectParticles;
    float HealthPercentageToKill;
    TSubclassOf<class AActor> WormPodClass;
    float ImportantLocationRadius;
    TArray<class AActor*> ActiveWorms;
    TArray<class AActor*> ActivePods;
    int32 MaxWormCount;
    float WormPodInterval;
    int32 MinWormPodWave;
    int32 MaxWormPodWave;
    class UDebrisPositioning* WormPodPositioning;
    class UCurveFloat* AvoidCost;
    float WormSpawnTimeDeviation;
    float PassiveWormSpawnTime;
    float ActiveWormSpawnTime;
    float WormSpawnRange;
    float ActivationRange;
    bool HasCleanPodBeenSpawned;

    void OnWormSpawned(class AActor* worm);
    void OnWormDestroyed(class AActor* DestroyedActor);
    void OnPodDestroyed(class AActor* DestroyedActor);
    void OnDeath(class UHealthComponentBase* Health);
    void CountNodePlague();
};

class APlagueMeteor : public AActor
{
    class USceneComponent* Root;
    class UStaticMeshComponent* MeteorMesh;
    class UTerrainPlacementComponent* terrainPlacement;
    class UDamageComponent* ImpactDamage;
    bool ManuallyTargeted;
    TArray<class UStaticMesh*> stages;
    int32 CrackStage;
    FDropInfo DropInfo;
    TSubclassOf<class AImpactIndicator> DropzoneIndicatorClass;
    class AImpactIndicator* DropZoneIndicator;
    class UDebrisPositioning* Positioning;
    FVector DropDirection;
    float IndicatorTime;
    float VisualsTime;
    float NearImpactTime;
    float LastAudioTime;
    float LocationVariance;
    FRuntimeFloatCurve DropImpactCurve;
    TSubclassOf<class ARockCrackerPod> RockCrackerPod;
    TSubclassOf<class AActor> RockCrackerIndicator;
    class UDebrisPositioning* RockCrackerPodPositioning;
    TArray<class ARockCrackerPod*> SpawnedPods;

    void SignalEventStarted();
    void SignalEventEnded(bool wasSuccess);
    void SetStage(int32 Stage);
    void SetDropTarget(const FVector& Location);
    void ResetStage();
    void RegressStage();
    void OnStageAdvanced(int32 Stage);
    void OnRep_DropInfo();
    void OnRep_CrackStage();
    void NearImpact();
    void LastaudioSignal();
    void Impacted_Latejoin();
    void Impacted();
    bool HasLandedOnTopOfRefineryPipes(float minDistanceToPipes);
    TArray<class ARockCrackerPod*> GetPods();
    class ARockCrackerPod* GetPodAtIndex(int32 Index);
    int32 GetNumActivePods();
    void EnableVisuals();
    void DropStarted();
    void DropRockCrackerPods(int32 Amount, float MinRadius, float maRadius, class AProceduralSetup* Setup);
    void DestroyAndSpawnHearts_FailSafe();
    void AdvanceStage();
};

class APlagueMeteorSpawner : public ADebrisLocationFinder
{
    FPlagueMeteorSpawnerOnSpawnedMeteor OnSpawnedMeteor;
    void MeteorSpawnedDelegate(class AActor* spawned);
    TSoftClassPtr<APlagueMeteor> MeteorActorClass;
    FRandRange EscortSpawnFromMuleRange;
    float EscortSpawnFromImportantRange;
    float EscortMinimum2DSpawnDistFromPath;
    float EscortMinimumZSpawnDistFromPath;
    float DropLocationHeightOffset;
    float ImportantLocationRange;
    UClass* MeteorActorClassLoaded;

};

class APlaguePuddle : public AAdicPuddle
{
    uint16 MaxPlaguePiles;

    void Receive_OnVacuumed();
};

class APlagueSoaperItem : public APlagueCleanupItem
{
    class UProjectileLauncherComponent* projectileLauncher;
    TSubclassOf<class AProjectileBase> ProjectileClass;
    FPlagueSoaperItemOnAmmoChanged OnAmmoChanged;
    void PlagueCleanerResourceChanged(float currentResourceVolume);

    void OnWeaponFired(const FVector& Location);
};

class APlagueWorm : public AEnemyDeepPathfinderCharacter
{
};

class APlasmaBoomerang : public AGrenade
{
    class USceneComponent* Root;
    class UBoxComponent* Collision;
    class UDamageComponent* DamageComponent;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* MeshPivot;
    class UCurveVector* ArcCurve;
    float StartSmoothTime;
    float RotationSpeed;
    float ArcSpeed;
    float HomingAcceleration;
    bool IsHoming;

    void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

class APlasmaCarbine : public AAmmoDrivenWeapon
{
    float RateOfFireBoostOnFullShield;
    bool RemoveShieldOnOverheat;
    bool RemoveShieldOnReload;
    float HeatEffectsThreshold;
    class UAnimMontage* FP_CharacterOverheatEndMontage;
    class UAnimMontage* TP_CharacterOverheatEndMontage;
    class UAnimMontage* WPN_ItemOverheatEndMontage;
    class UAnimMontage* FP_CharacterReloadEndMontage;
    class UAnimMontage* TP_CharacterReloadEndMontage;
    class UAnimMontage* WPN_ItemReloadEndMontage;

    void ApplyShieldDamage();
};

class APlayerCameraDrone : public APawn
{
    class UPawnMovementComponent* Movement;
    int32 MenuTab;
    bool SplineMeshIsVisible;
    float SplineSpeed;
    float MouseSensitivity;
    float CameraRoll;
    bool CameraDoesShake;
    bool IsFollowingPlayerRotation;
    FVector FollowPositionOffset;
    bool UseFreeRotation;
    bool UseDOF;
    TSubclassOf<class AActor> VanitySpawnable;
    TSubclassOf<class AActor> VanityWeaponSpawnable;
    TArray<TSoftObjectPtr<UAnimationAsset>> VanityCharacterAnimations;
    int32 SelectedVanityClassIndex;
    int32 SelectedVanityAnimation;
    TArray<class AVanityCharacter*> VanityCharacterInstances;
    TArray<class AVanityCharacter*> StaticVanityCharacterInstances;
    TSubclassOf<class ALaserPointerMarker> DroneMarker;
    class ALaserPointerMarker* ActiveMarker;
    TSubclassOf<class AActor> Flare;
    TArray<class AActor*> FlareInstances;
    TSubclassOf<class AActor> BounceFlare;
    TArray<class AActor*> BounceFlareInstances;
    class AActor* SplineInstance;
    TArray<class AActor*> SplineMeshInstances;
    TSubclassOf<class AActor> Spline;
    TSubclassOf<class AActor> SplineMesh;
    class AActor* PlayerFollowed;
    class AActor* WeaponTrackActor;

    bool ToggleSplineMeshVisibility();
    void SetRotationalPivotToPlayer();
    void SetFlareLightSettings(float Intensity, float range, float Color);
    bool SetCameraShakeAmount(float Value);
    void SetBounceFlareLightSettings(float Intensity, float range, float Color);
    void SaveLightConfig();
    void ResetFollowVariables();
    void ResetAllLights();
    void OnFlareHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    void LoadLightConfig();
    FVector GetFlareLightSettings();
    FVector GetBounceFlareLightSettings();
    void CreateHUD();
    void ClearFocusPoint();
    void All_BeginCountdown();
};

class APlayerCharacter : public ACharacter
{
    FPlayerCharacterOnStartedUsingItem OnStartedUsingItem;
    void ItemUseDelegate(class AItem* Item);
    FPlayerCharacterOnStoppedUsingItem OnStoppedUsingItem;
    void ItemUseDelegate(class AItem* Item);
    FPlayerCharacterOnFirePressed OnFirePressed;
    void FirePressedDelegate();
    FPlayerCharacterOnFireReleased OnFireReleased;
    void FirePressedDelegate();
    FPlayerCharacterOnGrenadePressed OnGrenadePressed;
    void BoolDelegate(bool boolValue);
    FPlayerCharacterOnPerkInitialized OnPerkInitialized;
    void Delegate();
    FPlayerCharacterOnInstantRevivePossibleEvent OnInstantRevivePossibleEvent;
    void BoolDelegate(bool boolValue);
    FPlayerCharacterOnGenericAnimNotify OnGenericAnimNotify;
    void GenericAnimNotifyDelegate(class APlayerCharacter* Player);
    class UHeightenedSenseComponent* HeightenedSenseComponent;
    FPlayerCharacterOnCollectedEverything OnCollectedEverything;
    void CollectedEverythingEvent(FText InMessage);
    FPlayerCharacterOnCollectedSchematic OnCollectedSchematic;
    void SchematicEvent(class USchematic* Schematic);
    FPlayerCharacterOnCollectedSkin OnCollectedSkin;
    void SkinEvent(class UItemSkin* Skin, class UItemID* ItemID);
    FPlayerCharacterOnCollectedDrink OnCollectedDrink;
    void CollectedDrinkDelegate(class UDrinkableDataAsset* Drinkable);
    FPlayerCharacterOnCollectedVictoryPose OnCollectedVictoryPose;
    void CollectedVictoryPoseEvent(class UVictoryPose* pose, class UPlayerCharacterID* characterID);
    FPlayerCharacterOnCollectedPickaxePart OnCollectedPickaxePart;
    void CollectedPickaxePartDelegate(class UPickaxePart* PickaxePart);
    FPlayerCharacterOnCollectedVanityItem OnCollectedVanityItem;
    void CollectedVanityItemDeledate(class UVanityItem* Item, class UPlayerCharacterID* characterID);
    FPlayerCharacterOnCameraModeChanged OnCameraModeChanged;
    void CameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    FPlayerCharacterOnDownCameraTargetChanged OnDownCameraTargetChanged;
    void DownCameraTargetChanged(class APlayerCharacter* Target);
    FPlayerCharacterOnActionHoldProgress OnActionHoldProgress;
    void ActionHoldEvent(FText Description, float Progress);
    FPlayerCharacterOnThrowCarriableProgress OnThrowCarriableProgress;
    void ThrowCarriableDelegate(float Progress, float timeToCancel, bool isDone);
    FPlayerCharacterOnJumpPressed OnJumpPressed;
    void OnJumpPressedSignature();
    FPlayerCharacterOnJumpReleased OnJumpReleased;
    void OnJumpReleasedSignature();
    FPlayerCharacterOnSecondaryFirePressed OnSecondaryFirePressed;
    void OnMinePressedSignature();
    FPlayerCharacterOnSecondaryFireReleased OnSecondaryFireReleased;
    void OnMinePressedSignature();
    FPlayerCharacterOnManualMiningBegin OnManualMiningBegin;
    void OnMinePressedSignature();
    FPlayerCharacterOnManualMiningEnd OnManualMiningEnd;
    void OnMinePressedSignature();
    FPlayerCharacterOnLaserPointerPressed OnLaserPointerPressed;
    void OnLaserPointerPressedSignature();
    FPlayerCharacterOnLaserPointerReleased OnLaserPointerReleased;
    void OnLaserPointerPressedSignature();
    FPlayerCharacterOnTerrainScannerPressed OnTerrainScannerPressed;
    void OnLaserPointerPressedSignature();
    FPlayerCharacterOnTerrainScannerReleased OnTerrainScannerReleased;
    void OnLaserPointerPressedSignature();
    FPlayerCharacterOnFlareThrown OnFlareThrown;
    void OnFlareThrown();
    FPlayerCharacterOnUpdateMeshes OnUpdateMeshes;
    void UpdateMeshesSignature();
    FPlayerCharacterOnOpenChat OnOpenChat;
    void OpenChatSignature();
    FPlayerCharacterOnAcceptInvite OnAcceptInvite;
    void AcceptInviteSignature();
    FPlayerCharacterOnRejectInvite OnRejectInvite;
    void RejectInviteSignature();
    FPlayerCharacterOnIgnoreInvite OnIgnoreInvite;
    void IgnoreInviteSignature();
    FPlayerCharacterOnToggleMapTool OnToggleMapTool;
    void ToggleMapToolSignature(bool Visible);
    FPlayerCharacterOnToggleScanTool OnToggleScanTool;
    void ToggleMapToolSignature(bool Visible);
    FPlayerCharacterOnDepthChanged OnDepthChanged;
    void DepthSignature(int32 Depth);
    FPlayerCharacterOnCharacterStateChanged OnCharacterStateChanged;
    void OnCharacterStateChangedSignature(ECharacterState NewState);
    FPlayerCharacterOnCharacterDeathChange OnCharacterDeathChange;
    void OnCharacterDeathChangeSignature(class APlayerCharacter* Character);
    FPlayerCharacterOnDamagedEnemy OnDamagedEnemy;
    void DamagedEnemyEvent(const TScriptInterface<class IHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    FPlayerCharacterOnLaserPointerEvent OnLaserPointerEvent;
    void LaserPointerEvent(const FLaserPointerTarget& HitInfo);
    FPlayerCharacterOnSecondaryLaserPointerEvent OnSecondaryLaserPointerEvent;
    void LaserPointerEvent(const FLaserPointerTarget& HitInfo);
    FPlayerCharacterOnSaluteEvent OnSaluteEvent;
    void SaluteEvent();
    FPlayerCharacterOnPlayerShout OnPlayerShout;
    void OnPlayerShoutEvent(class APlayerCharacter* ShoutingPlayer);
    FPlayerCharacterOnBoscoSalute OnBoscoSalute;
    void OnPlayerShoutEvent(class APlayerCharacter* ShoutingPlayer);
    FPlayerCharacterOnRevivedEvent OnRevivedEvent;
    void CharacterDelegate();
    FPlayerCharacterOnReviveCallEvent OnReviveCallEvent;
    void ReviveCallEvent(class AActor* ReviveTarget);
    FPlayerCharacterOnRevivedOtherCharacter OnRevivedOtherCharacter;
    void PlayerCharacterEvent();
    FPlayerCharacterOnHeadlightOnChanged OnHeadlightOnChanged;
    void HeadlightOnChangedEvent(bool IsOn);
    FPlayerCharacterOnCallDonkey OnCallDonkey;
    void OnCallDonkeySignature();
    FGameplayTagContainer GameplayTags;
    TSubclassOf<class UJetBootsMovementComponent> JetBootsComponentSpawnable;
    class UZipLineStateComponent* ZipLineStateComponent;
    TArray<class TSubclassOf<AActor>> EscapableGrabberEnemies;
    FPlayerCharacterOnKilledGrabber OnKilledGrabber;
    void KilledGrabber(class AActor* Grabber);
    FPlayerCharacterOnPerkActivationTimerFinished OnPerkActivationTimerFinished;
    void OnPerkActivationTimerFinished();
    class UPerkHUDActivationWidget* BoundPerkActivationW;
    float PerkActivationTimer;
    FPlayerCharacterOnCanEscapeGrabberChanged OnCanEscapeGrabberChanged;
    void CanEscapeGrabberDelegate(bool bCanEscape);
    TSubclassOf<class AActor> GrabbedByClass;
    FPlayerCharacterOnCoolDownProgress OnCoolDownProgress;
    void CoolDownProgressDelegate(class UObject* CoolDownObject, const FCoolDownProgressStyle& Style, float Progress);
    bool bIsBeingBittenByCaveLeech;
    class UWidgetInteractionComponent* WidgetInteraction;
    TArray<FPlatformComponent> PlatformComponentClasses;
    FDownCameraSettings DownCameraSettings;
    TArray<TWeakObjectPtr<AShieldGeneratorActor>> ActiveShieldGenerators;
    FGuid SavegameID;
    FVector EstimatedVelocity;
    FHoldButton FlareHeadlightButton;
    FHoldButton CycleItemButton;
    FHoldButton ToggleHUDButton;
    float EquipLaserpointerHoldDuration;
    bool IsPressingMovementInputKey;
    class UPlayerCharacterID* characterID;
    TSoftClassPtr<ATutorialManager> TutorialManagerType;
    TSoftClassPtr<ATutorialManager> TutorialManagerSpacerig;
    class USkeletalMeshComponent* FPMesh;
    class UCameraComponent* FirstPersonCamera;
    class USceneComponent* FirstPersonRoot;
    class UActorTrackingComponent* ActorTracking;
    class UCharacterIntoxicationComponent* IntoxicationComponent;
    class UMissionStatsCollector* MissionStatsCollector;
    class USpringArmComponent* ThirdPersonSpringArm;
    class UCameraComponent* ThirdPersonCamera;
    class UPointLightComponent* ThirdPersonLight;
    class USpringArmComponent* FollowSpringArm;
    class UCameraComponent* FollowCamera;
    class UCameraComponent* DownCamera;
    class UCharacterCameraController* CameraController;
    class UPlayerHealthComponent* HealthComponent;
    class UCharacterSightComponent* SightComponent;
    class UInventoryComponent* InventoryComponent;
    class UCharacterUseComponent* UseComponentNew;
    class USingleUsableComponent* UsableComponent;
    class UOutlineComponent* OutlineComponent;
    class UCharacterRecoilComponent* RecoilComponent;
    class UStatusEffectsComponent* StatusEffectsComponent;
    class UPawnStatsComponent* PawnStatsComponent;
    class UPlayerAfflictionComponent* PawnAfflictionComponent;
    class UPlayerInfoComponent* PlayerInfoComponent;
    class UPlayerAttackPositionComponent* AttackerPositioningComponent;
    class UCommunicationComponent* CommunicationComponent;
    class UPlayerTemperatureComponent* TemperatureComponent;
    class UPlayerInfectionComponent* InfectionComponent;
    class UPlayerReactiveTerrainTrackerComponent* ReactiveTerrainTracker;
    class UInstantUsable* TrackGrindUsableComponent;
    float RunningSpeed;
    float RunBoost;
    float RunBoostChargeTime;
    class USoundCue* RunBoostActivationSound;
    class UParticleSystem* RunBoostParticles;
    class UPawnAffliction* RunBoostAffliction;
    class UPhysicsAsset* HangingPhysicsAsset;
    float HangingSimulationBlend;
    bool IsPlayableCharacter;
    class UAudioComponent* SprintSoundComponent;
    class USoundCue* SpringSound;
    FAnalogAimSettings AimSettings;
    float DownedCameraMinPitch;
    float DownedCameraMaxPitch;
    float TurnToFaceScannerAngularSpeed;
    float Turn180Time;
    float CarryingMovementSpeedPenalty;
    float CarryingMaxFallVelocity;
    float MaxThrowProgress;
    float MaxThrowHoldDuration;
    float CarryingThrowMinForce;
    float CarryingThrowMaxForce;
    float PlayerVelocityToThrowFactor;
    TSubclassOf<class UStatusEffect> CarryingThrowingStatusEffect;
    float ThrowCarriableProgress;
    TMap<uint8, UCharacterStateComponent*> CharacterStates;
    TWeakObjectPtr<class ATutorialManager> TutorialManager;
    class UCharacterStateComponent* ActiveCharacterState;
    bool IsInDropPod;
    bool IsInEscapePod;
    float ButtonMemoryDuration;
    bool IsRunning;
    bool CanDash;
    float DashInputWindow;
    float DashFowardMovementMinRequirement;
    float DashRightMovementMaxRequirement;
    float DashControllerMinValueRequired;
    float DashCooldown;
    TSubclassOf<class UStatusEffect> DashStatusEffect;
    float ForwardInput;
    float RightInput;
    float ControllerForwardInput;
    float ControllerRightInput;
    float StoppedRunningTime;
    float ShoutPressedTime;
    bool bIsUsingItemPressed;
    bool bIsUsingPressed;
    float UsingDelay;
    bool HeadLightOn;
    bool IsUsing;
    float JumpPressedTime;
    bool CanMove;
    bool CanAim;
    bool CanUseItem;
    bool CanChangeItems;
    bool CanMine;
    bool CanSalute;
    bool IsStandingDown;
    bool InDanceRange;
    bool IsDancing;
    float DanceStartTime;
    class UFSDAchievement* HappyFeetAchievement;
    int32 DanceMove;
    ECharacterCameraMode CameraMode;
    bool IsInCharacterSelectionWorld;
    bool bShouldSpawnAnimEffects;
    float IdleTime;
    class UAnimMontage* FPDrinkSalute;
    class UAnimMontage* TPDrinkSalute;
    class UAnimMontage* CurrentSaluteMontage;
    TArray<class UMaterialInterface*> CachedMaterials;
    bool BlockTrackGrindOnLanded;
    FString SteamClassID;
    class UMaterialInstanceDynamic* RadarMaterialInstance;
    int32 RadarMaterialAngleParameterIndex;
    FVector LastUpdateVisibiltyPos;
    FVector SpawnLocation;
    class UFSDPhysicalMaterial* FallbackPhysicalMaterial;
    bool ClientReady;
    class UCharacterStateComponent* NextCharacterState;
    bool PlayerIsLeavingInDroppod;
    bool CanInstantRevive;
    bool HasInitializedPerks;
    class UCharacterVanityComponent* CharacterVanity;
    FCameraSpringSettings CameraSpringSettings;

    void UseZipLine(class AZipLineProjectile* ZipLine, const FVector& Start, const FVector& End);
    void Unparalyze();
    void ToggleScanTool(bool Visible);
    void ToggleHUDReleased();
    void ToggleHUDPressed();
    void ToggleHeadLight();
    void ThrowFlareReleased();
    void ThrowFlarePressed();
    void ThrowFlare();
    void StopUsingItem();
    void StartTutorials(bool ResetTutorials);
    void StartPerkActivation(class UPerkHUDActivationWidget* PerkActivationWidget, float HoldTime);
    class UAudioComponent* SpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    class UAudioComponent* SpawnSoundAtLocation(class USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    class UAudioComponent* SpawnSound2D(class USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
    void ShowSimpleHoldProgress(class APlayerController* PlayerController, const FText& InDescription, float InProgress);
    void SetStandingDown(bool standingDown);
    void SetRadarMaterialInstance(class UMaterialInstanceDynamic* matInstance);
    void SetOutsideShieldGenerator(class AShieldGeneratorActor* Shield);
    void SetIsCharacterSelectionModel();
    void SetInstantUsables(bool Value);
    void SetInsideShieldGenerator(class AShieldGeneratorActor* Shield);
    void SetInCharacterSelectionWorld();
    void SetHeadLight(bool On);
    void SetFallbackPhysicalMaterial(class UFSDPhysicalMaterial* PhysMat);
    void SetCameraMode(ECharacterCameraMode NewCameraMode);
    void SetAttached(class USceneComponent* AttachTo, bool DelayUntilLanded);
    void Server_TriggerDash();
    void Server_StartSalute(class UAnimMontage* startSalute);
    void Server_SpawnEnemies(class UEnemyDescriptor* descriptor, int32 Count);
    void Server_Shouted();
    void Server_SetUsing(bool characterIsUsing);
    void Server_SetRunning(bool characterIsRunning);
    void Server_SetRunBoostActive(bool IsActive);
    void Server_SetIsThrowingCarriable(bool isThrowing);
    void Server_SetIsPressingMovementInput(bool aIsPushingInput);
    void Server_SetIsJumpPressed(bool InJumpPressed);
    void Server_SetDispenserReward(class AEventRewardDispenser* Dispenser, class USchematic* Reward);
    void Server_SetClientReady();
    void Server_InstantRevive(class APlayerCharacter* ReviveTarget, EInputKeys Key);
    void Server_EscapeFromGrabber();
    void Server_CheatRevive();
    void Server_CheatKillAllFriendly();
    void Server_CheatKillAll();
    void Server_CheatJetBoots();
    void Server_CheatGodMode();
    void Server_CheatFlyMode(bool Active);
    void Server_CheatDebugFastMode(bool fast);
    void Server_CancelThrowingCarriable();
    void Server_CallDonkey();
    void Server_AddToTraceQueue(class ADamageEnhancer* Target, FEnhancedTrace Item);
    void Server_AddImpulseToActor(class AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse);
    void Server_AddImpulse(const FVector_NetQuantizeNormal& Direction, float force);
    void Server_ActivateTemporaryBuff(class UTemporaryBuff* buff);
    void SendLevelUpStatistics(const int32 currentRank);
    void ReviveProgress(float Progress);
    void RequestChangeInGravityScale(float newGravityScale);
    void RejectInvite();
    void ReceiveOnHeadlightOn();
    void ReceiveEscapedFromGrabber();
    void Receive_ShowFieldMedicInstantReviveEffects();
    void PrepareForEndScreen();
    void PilotVehicle(class AActor* Vehicle);
    void Paralyze(class AActor* ParalyzedBy);
    void OpenChat();
    void OnResourceFull(class UCappedResource* Resource);
    void OnRep_IsStandingDown();
    void OnRep_IsDancing();
    void OnRep_HeadLightOn();
    void OnRep_DanceMove();
    void OnRep_CharacterState(class UCharacterStateComponent* oldState);
    void OnPerkActivationFinished();
    void OnItemEquipped(class AItem* Item);
    void OnCharacterUsed(class APlayerCharacter* User, EInputKeys Key);
    void OnCharacterBeginUse(class APlayerCharacter* User, EInputKeys Key);
    void MouseWheelUp();
    void MouseWheelDown();
    bool LockIfState(ECharacterState LockIf, ECharacterState LockTo, bool canMoveAndAim);
    void KilledGrabber__DelegateSignature(class AActor* Grabber);
    void JumpRelease();
    void JumpPress();
    void ItemUseDelegate__DelegateSignature(class AItem* Item);
    bool IsWithinDistance(class AActor* Source, float Distance);
    bool IsWalking();
    bool IsUsingPressed();
    bool IsUsingItemPressed();
    bool IsStateActive(ECharacterState State);
    bool IsSaluting();
    bool IsParalyzed();
    bool IsMovementInputPressed();
    bool IsMining();
    bool IsLyingDown();
    bool IsJumpPressed();
    bool IsInState(ECharacterState aState);
    bool IsFrozen();
    bool IsFirstPerson();
    bool IsEquipepdActor(class AActor* Actor);
    bool IsDown();
    bool IsAlive();
    void InstantRevive(class APlayerCharacter* ReviveTarget, EInputKeys Key);
    void IgnoreInvite();
    bool HasBeenRevived();
    class UCharacterUseComponent* GetUseComponent();
    class UPlayerTPAnimInstance* GetTPAnimInstance();
    float GetTimeSinceLastRevival();
    ECharacterState GetPreviousState();
    class AFSDPlayerState* GetPlayerState();
    FString GetPlayerName();
    class AFSDPlayerController* GetPlayerController();
    class UInventoryList* GetInventoryList();
    FText GetHeroSwitchToMessage();
    FText GetHeroName();
    FHeroInfo GetHeroInfo();
    class UTexture2D* GetHeroIcon();
    FLinearColor GetHeroColor();
    class UPlayerFPAnimInstance* GetFPAnimInstance();
    class AItem* GetEquippedItem();
    float GetDownTime();
    class APlayerCharacter* GetDownCameraTarget();
    class USceneComponent* GetDownCameraRotationPoint();
    class USceneComponent* GetDownCameraAttachPoint();
    class ULightComponent* GetDebugPointLightComponent();
    ECharacterState GetCurrentState();
    class UCommunicationComponent* GetCommunicationComponent();
    float GetClassXP();
    class UCharacterVanityComponent* GetCharacterVanity();
    class UCharacterStateComponent* GetCharacterStateComponent(ECharacterState State);
    float GetBeginRevivedProgress();
    class UUsableComponent* GetBeastMasterUsableComponent();
    FString GetAnalyticsClass();
    FRotator GetAimRotation();
    FVector GetActorGroundLocation();
    TArray<class AShieldGeneratorActor*> GetActiveShieldGenerators();
    class UPlayerAnimInstance* GetActiveAnimInstance();
    void GenericAnimNotifyDelegate__DelegateSignature(class APlayerCharacter* Player);
    void ForceIsPressingMovementInputKey();
    void FirePressedDelegate__DelegateSignature();
    void ExitVehicle();
    void CycleItemUp();
    void CycleItemReleased();
    void CycleItemPressed();
    void CycleItemDown();
    void ConsumeCycleItemButton();
    void Client_TargetDamaged(class UObject* Health, float Damage, float DamageModifier, bool IsWeakPoint, bool IsRadial);
    void Client_OpenMinersManual();
    void Client_AddImpulse(const FVector_NetQuantizeNormal& Direction, float force);
    void Client_ActivateTemporaryBuff(class UTemporaryBuff* buff);
    void CheckWithoutAPaddleAchievement();
    void ChangeState(ECharacterState NewState);
    void ChangeIfDifferentState(ECharacterState NewState);
    void CanEscapeGrabberDelegate__DelegateSignature(bool bCanEscape);
    bool CanEscapeFromGrabber();
    void CallDonkeyReleased();
    void CallDonkeyPressed();
    void BP_OnUpdateMeshes();
    void BP_OnControllerReady();
    void AnnounceSchematicCollected(class USchematic* InSchematic);
    void All_StartSalute(class UAnimMontage* saluteMontage);
    void All_ShowImpactEffects(class UParticleSystem* Particles, FVector_NetQuantize Location, FVector_NetQuantizeNormal Orientation);
    void All_ShowFieldMedicInstantReviveEffects();
    void AddImpulseToActor(class AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse);
    void AddImpulseFromVector(const FVector& Vector);
    void AddImpulseFromDirectionAndForce(const FVector& Direction, float force);
    void AcknowledgeCharacterState(ECharacterState eState);
    void AcceptInvite();
};

class APostProcessingManager : public AActor
{
    TArray<TWeakObjectPtr<AFSDPostProcessingActor>> RegisteredActors;
    TArray<FPostProcessingBlendable> CurrentBlendables;
    TArray<class UMaterialInstanceDynamic*> Materials;

};

class AProceduralSetup : public AActor
{
    bool ShowItemNoisePattern;
    int32 Seed;
    bool UseRandomSeed;
    FRandomStream RandomStream;
    FRandomStream RandomStreamServer;
    FRandomStream RandomStreamAsync;
    FRandomStream RandomStreamAsyncServer;
    FProceduralSetupOnEncounterSpawnedEvent OnEncounterSpawnedEvent;
    void EncountersSpawnedDelegate(class AProceduralSetup* Setup);
    TArray<FEncounterSpecialItem> SpecialEncountersToSpawn;
    class USpecialEvent* ForcedMachineEvent;
    class USpecialEvent* ForcedTreasure;
    class USpecialEvent* ForcedOtherEvent;
    class UNoisyPathfinderComponent* NoisyPathfinder;
    class UProceduralTunnelComponent* ProceduralTunnel;
    class UPLSEncounterComponent* Encounters;
    class UProceduralVeinsComponent* Veins;
    class UProceduralResources* Resources;
    class UProceduralObjectColliders* ObjectColliders;
    class ADeepCSGWorld* CSGWorld;
    class UFloodFillSettings* PathfinderNoise;
    TArray<FCarvedResource> CarvedResources;
    TSubclassOf<class UMissionDNA> MissionDNA;
    TArray<FGemResourceAmount> GemResourcesToGenerate;
    TArray<FCollectableSpawnableItem> CollectablesToGenerate;
    ESpawnSettings SpawnSettings;
    bool CanSpawnSpecialEvents;
    bool ShouldCarveTunnels;
    TArray<FRoomNode> Rooms;
    TArray<FRoomNode> RoomsInitialState;
    TArray<FTunnelNode> tunnels;
    FGeneratedInfluenceSets GeneratedInfluenceSets;
    FGeneratedInstantCarvers GeneratedInstantCarvers;
    FGeneratedDebris GeneratedDebris;
    class UBiome* Biome;
    float missionLength;
    TArray<FPathObstacle> PathObstacles;
    FInfluenceMap InfluenceMap;
    TArray<class UResourceData*> SpawnedResources;
    float CaveDepth;
    class AActor* PostProcessActor;
    class USpecialEvent* SpecialEvent;
    bool IsInitialized;
    int32 CurrentRoomPass;
    bool Pass1Completed;
    bool UsePerLevelCritterSpawning;
    FString LastCompletedPLSPass;

    void StartMusicAndAmbient(int32 Music);
    void StartGenerationOnClient(class AFSDPlayerController* client);
    void SpawnSpecialEvents();
    void SpawnObjectiveEncounter();
    void SpawnObjectiveCriticalItems(const ECriticalItemPass& pass);
    void SpawnItems_Async(class AProceduralSetup* Setup, FLatentActionInfo LatentInfo);
    void SpawnItems();
    void SpawnEncounters();
    void SpawnDebrisItems_Async(class AProceduralSetup* Setup, FLatentActionInfo LatentInfo, EDebrisItemPass pass, int32 Depth);
    void SpawnDebrisItems(EDebrisItemPass pass);
    void SetSeed(int32 Seed);
    void ResetData();
    void RemoveBLockedEntrances();
    void OnPLSDataRecieved();
    void OnObjectivesCompleted();
    void OnCarverDataRecieved(EDebrisItemPass pass);
    bool IsGeneratedDataReady();
    bool IsCarverDataReady(EDebrisItemPass pass);
    void InitializeObjectives();
    class UMissionDNA* GetMissionDNA();
    TMap<FString, float> GetGemsResourceAmounts();
    class ADeepCSGWorld* GetCSGWorld();
    TMap<FString, float> GetCollectablesResourceAmounts();
    void GenerateRoomsFromGraph_Async(class AProceduralSetup* Setup, FLatentActionInfo LatentInfo, int32 CarvePass);
    void GenerateRoomsFromGraph(int32 CarvePass);
    void GenerateLandscapeFromData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& Obstacles);
    void GenerateLandscape();
    FVector FindLocationInDirection(FVector Origin, FVector Direction, float horizontalDeviation, float verticalDeviation, FRandRange Distance, float additionalDistance);
    void FindEntrancesForAllConnections();
    void FillTunnels_Async(class AProceduralSetup* Setup, FLatentActionInfo LatentInfo);
    void FillTunnels();
    void DoneCarving();
    bool DoAsyncThreadGeneration();
    void CreateTunnelPaths();
    int32 CreateItemDepths();
    void CreateGeneratedInfluenceSet();
    int32 ConnectRooms(FRoomNode& From, FRoomNode& To, bool hasDirt, class UTunnelParameters* tunnelParameterOverride);
    int32 ConnectRoomIds(int32 fromID, int32 toID, bool hasDirt, class UTunnelParameters* tunnelParameterOverride);
    void CommitCarving(bool finalCommit, bool generateMesh);
    void CarveWithGeneratedInstantCarvers();
    void CarveTunnels();
    void BeginLiveGeneration();
    void BeginGenerating();
    void AddRoomToInitialState(const FRoomNode& RoomNode);
    int32 AddRoom(FVector Location, bool CanHaveEnemies, class URoomGeneratorBase* RoomGenerator, bool canBeRotated, FVector& outCenter, FRoomNode& outRoom, float ResourceMultiplier);
    void AddInfluenceToTunnelEntrances(class UCaveInfluencer* Influencer, float range);
    void AddImportantLocation(const FVector& Location, float Radius);
    void AddEnemyDebris();
    int32 AddDebrisCollider(const FDebrisCapsule& Capsule);
    void AddCaveInfluence(class UCaveInfluencer* Influencer, const FVector& Location, float range);
    int32 AddAirParticlesCollider(const FDebrisCapsule& Capsule);
};

class AProjectile : public AProjectileBase
{
    FProjectileState State;
    bool UseArmorDamageBoneCheck;
    TArray<class TSubclassOf<AActor>> IgnoreActorClasses;
    class UFSDProjectileMovementComponent* MovementComponent;

    class AProjectileBase* SpawnProjectileFromSelf(class UObject* WorldContextObject, TSubclassOf<class AProjectileBase> ProjectileClass, FVector Origin, FRotator velocityDirection);
    class AProjectileBase* SpawnProjectile(class UObject* WorldContextObject, TSubclassOf<class AProjectileBase> ProjectileClass, class APawn* projectileOwner, FVector Origin, FRotator velocityDirection);
    class AProjectileBase* SpawnBallisticProjectile(class UObject* WorldContextObject, TSubclassOf<class AProjectile> ProjectileClass, class APawn* projectileOwner, FVector Origin, FVector Velocity);
    void SetHomingTargetComponent(class USceneComponent* HomingTargetComponent, float Delay);
    void Server_DisableHoming();
    void OnRep_State(const FProjectileState& oldState);
    void OnPenetration(const FHitResult& HitResult);
    void OnImpact(const FHitResult& HitResult);
    void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    class UFSDPhysicalMaterial* FindBoneIndexFromArmor(const FHitResult& HitResult, int32& outBoneIndex);
    void DisableHoming();
};

class AProjectileBase : public AActor
{
    FProjectileImpact ProjectileImpact;
    bool IsSpawnedFromWeapon;
    bool Exploded;
    bool DoOnImpact;
    bool DoOnImpact2;
    bool DoOnImpact3;
    bool DoOnSpawnVar;
    float GravityMultiplier;
    bool IsDorment;
    class USphereComponent* CollisionComponent;
    float LifeSpan;
    float VelocityMultiplier;
    bool AffectedByDifficultySpeedModifier;
    bool SetInitialSpeedToMaxSpeed;
    bool AutoDisableCollisionOnImpact;
    class USoundCue* WhizbySound;
    float WhizByCooldown;
    float WhizByStartDistance;
    EOnProjectileImpactBehaviourEnum EOnImpactBehaviour;

    class UTerrainMaterial* TryGetTerrainMaterial();
    void StopMovement();
    void Server_SetState(FVector_NetQuantize Position, FVector_NetQuantize Velocity);
    void Server_Penetrated(const FProjectileImpact& Impact);
    void Server_Impacted(const FProjectileImpact& Impact);
    void OnUpgradeElementAdded(class UProjectileUpgradeElement* element);
    void OnRep_ProjectileImpact();
    void OnRep_IsDorment(const bool wasDorment);
    void OnPenetrated(bool PredictedPenetration, const FHitResult& HitResult);
    void OnInitialized();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void MakeBouncy();
    void InitState(const FVector& ShootDirection, const FVector& initialBonusVelocity);
    void InitComponents();
    void IgnoreCollision(class UPrimitiveComponent* otherCollider);
    bool HasImpactAuthority();
    float GetGameTimeSinceActivation();
    int32 GetBoneIndex();
    void DoOnSpawn();
    void DisableProjectileCollision(class AProjectileBase* projectileA, class AProjectileBase* projectileB);
    void DisableAndDestroy();
    class UFSDPhysicalMaterial* DamageArmor(class UDamageComponent* DamageComponent, const FHitResult& HitResult);
    void CustomEvent(const class UItemUpgrade* Event);
    void Client_DrawServersDebugPath(FVector Location);
    void Activate(class AActor* owningActor, FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity);
};

class AProspectorRobot : public AEnemyDeepPathfinderCharacter
{
    float WorkingArmSpeed;
    float EnginePowerMultiplier;
    class AActor* Target;
    float HeadResponsiveness;
    float HeadSearchSpeed;
    float HeadSearchMaxAngle;
    class UMaterialInstanceDynamic* EngineMaterial;
    EProspectorRobotState ProspectorState;

    void SetTarget(class AActor* Target);
    void SetArmSpeed(float Speed);
    void OnStateEnd(EProspectorRobotState oldState);
    void OnStateBegin(EProspectorRobotState NewState);
    void OnRep_ProspectorState(EProspectorRobotState oldState);
    bool IsStateActive(EProspectorRobotState State);
    void ChangeState(EProspectorRobotState NewState);
};

class ARDGLauncher : public AAmmoDrivenWeapon
{
    TArray<class URDGComponent*> ActiveGrenades;

    void Server_DetonateAll();
    void RegisterGrenade(class URDGComponent* Grenade);
};

class ARadialFireModule : public AHostileGuntowerModule
{
    TSubclassOf<class AProjectile> ProjectileClass;
    FRotator AttackEndRotation;
    float RotationSpeedTurret;
    float DelayBetweenShots;
    bool IsAttacking;
    FName LeftFireSocket;
    FName RightFireSocket;
    FName FrontFireSocket;
    FName BackFireSocket;

    void OnFire();
};

class ARandomFiringGuntowerModule : public AHostileGuntowerModule
{
    class UStaticMeshComponent* LaserFrontTop;
    class UStaticMeshComponent* LaserFrontBottom;
    class UStaticMeshComponent* LaserBackTop;
    class UStaticMeshComponent* LaserBackBottom;
    class UParticleSystemComponent* FrontTopLaserMuzzle;
    class UParticleSystemComponent* FrontBottomLaserMuzzle;
    class UParticleSystemComponent* BackTopLaserMuzzle;
    class UParticleSystemComponent* BackBottomLaserMuzzle;
    FRotator OtherCurrentRotation;
    class UParticleSystem* LaserImpact;
    class UAudioComponent* LaserSound;
    class UDamageComponent* Damage;
    float BoneSpaceTurretMaxYaw;
    float BoneSpaceTurretMaxPitch;
    float TimeBetweenAttacks;
    float TimeUntilNextAttack;
    float ModuleRotationSpeed;
    float TurretAimSpeed;
    float LaserLeghtRatio;
    float TimeBetweenHits;
    float ChanceToInvert;
    float PlatformDissolveRadius;
    float PlatformDissolveSqueeze;
    bool IsAttacking;

};

class ARandomSelectorItem : public AGenerationItem
{
    int32 Min;
    int32 Max;

};

class ARandomSubRoomItem : public AGenerationItem
{
    class URoomGeneratorGroup* RoomGroup;
    FGameplayTagQuery tagQuery;
    int32 Layer;

};

class ARandomizedInstantMeshCarver : public AActor
{
    TArray<class UStaticMesh*> CarvingMeshes;
    TArray<class USTLMeshCarver*> STLCarvingMeshes;
    TArray<class UStaticMeshCarver*> StaticMeshCarvers;
    FRandRange RandomScale;
    class UTerrainMaterialBase* TerrainMaterial;
    ECarveFilterType Filter;

};

class ARaycastDebugProbe : public AActor
{
    class UTerrainType* TerrainType;

};

class ARecallableActor : public ADeepPathfinderCharacter
{
    FRecallableActorOnStateChanged OnStateChanged;
    void RecallableActorStateChanged(class ARecallableActor* Sender, ERecallableActorState State);
    FRecallableActorOnReturnFinish OnReturnFinish;
    void ReturnedSignature(class AActor* Sender, bool Succes);
    FRecallableActorOnRelocateFinished OnRelocateFinished;
    void ReturnedSignature(class AActor* Sender, bool Succes);
    float AcceptanceRadius;
    float AutoRecallDistance;
    float RelocateLandingHeight;
    TSubclassOf<class AActor> RelocationMarkerType;
    TWeakObjectPtr<class AActor> RecallTarget;
    ERecallableActorState State;
    FTransform RelocateTransform;
    bool RelocateLanded;
    TWeakObjectPtr<class AActor> RelocationMarker;
    bool bInitialized;

    void SetRecallTarget(class AActor* NewTarget);
    void Relocate(FVector NewLocation, FRotator NewRotation);
    void ReceiveOnStateChanged();
    void RecallableActorStateChanged__DelegateSignature(class ARecallableActor* Sender, ERecallableActorState State);
    void Recall();
    void OnReturnSucceeded();
    void OnReturnFailed();
    void OnRep_State(ERecallableActorState oldState);
    void OnRep_RecallTarget();
    void OnRelocated();
    void OnRecallTargetChanged(class AActor* NewTarget);
    void OnPathFinished(bool success);
    void OnMoving();
    void OnMoveRequested();
    void OnMoveFinished(bool returnedHome);
    bool GetIsReturning();
    bool GetIsMovingOrMoveRequested();
    bool GetIsMoving();
    bool GetIsMoveRequested();
    void BeginMove();
};

class ARecallableItem : public AAnimatedItem
{
    TSubclassOf<class ARecallableActor> ItemType;
    TArray<TWeakObjectPtr<ARecallableActor>> ActiveItems;

    void ServerSpawnItem(const FVector& Location, const FRotator& Rotation);
    void ReceiveOnItemSpawned(class ARecallableActor* Item);
    void OnRep_ActiveItems();
    void ItemReturnFinished(class AActor* Item, bool success);
    bool CanSpawnItem(const FVector& Location, const FRotator& Rotation);
};

class ARecallableSentryGun : public ARecallableActor
{
    FRecallableSentryGunOnSentryIndexChanged OnSentryIndexChanged;
    void SentryIndexChanged(int32 Index);
    int32 SentryIndex;

    void SentryIndexChanged__DelegateSignature(int32 Index);
    void ReceiveOnSentryReady(class ASentryGun* SentryGun, class APlayerCharacter* PlayerCharacter);
    void OnRep_SentryIndex();
    void GetStateDescription(FText& Description);
    TSubclassOf<class ASentryGun> GetSentryGunClass();
    class ASentryGun* GetSentryGun();
};

class ARecallableSentryGunItem : public ARecallableItem
{
    FRecallableSentryGunItemOnActiveItemsChanged OnActiveItemsChanged;
    void RecallableSentryGunItemSignature(class ARecallableSentryGunItem* Item);
    FRecallableSentryGunItemOnSelectedItemChanged OnSelectedItemChanged;
    void RecallableSentryGunSignature(class ARecallableSentryGun* SentryGun);
    TArray<class ARedeployableSentryGun*> SentriesWithActiveIndicators;
    int32 MaxSentryCount;
    float MinDistanceBetweenSentries;
    FText RecallHoldDescription;
    float RecallHoldDuration;
    class UCapacityHoldingItemAggregator* AmmoCapacity;
    class UItemPlacerAggregator* ItemPlacer;
    TArray<class UItemUpgrade*> upgrades;
    TSubclassOf<class AItem> LoadoutClass;
    TSubclassOf<class ARedeployableSentryGun> SentryGunObjectClass;
    float SupplyStatusWeight;
    float SentryAngleRestriction;
    bool bIsUpgraded;

    void SetArcIndicatorActive(bool Active);
    void ReceiveItemUpgraded();
    void RecallableSentryGunSignature__DelegateSignature(class ARecallableSentryGun* SentryGun);
    void RecallableSentryGunItemSignature__DelegateSignature(class ARecallableSentryGunItem* Item);
    bool HasAmmoLeft();
    class ARecallableSentryGun* GetSelectedSentryGun();
    TArray<class ARecallableSentryGun*> GetActiveSentryGuns();
    bool AreAllSentriesPlaced();
};

class ARedeployableSentryGun : public ASentryGun
{
    FRedeployableSentryGunOnStateChanged OnStateChanged;
    void OnStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    FRedeployableSentryGunOnDeployFinished OnDeployFinished;
    void OnDeployFinished();
    FRedeployableSentryGunOnDismantleFinished OnDismantleFinished;
    void OnDismantleFinished();
    FRedeployableSentryGunOnDeployProgressEvent OnDeployProgressEvent;
    void OnDeployProgress(float Progress);
    class UActorTrackingComponent* ActorTrackingIcon;
    class UOutlineComponent* outline;
    TWeakObjectPtr<class APlayerCharacter> SentryGunOwner;
    bool bOutlineAndIconVisible;
    ERedeployableSentryGunState State;
    float PlasmaLineMaxRange;
    TArray<class ASentryElectroBeam*> PlasmaLines;
    TSubclassOf<class ASentryElectroBeam> PlasmaBeamClass;
    TSubclassOf<class AActor> ElectrocutionActorClass;
    class AActor* ElectrocutionActor;
    TSubclassOf<class AActor> EMPDischargeActorClass;
    float EMPDiscargeCooldown;

    void ToggleOutlineAndIcon(bool Visible);
    void SetSentryGunOwner(class APlayerCharacter* Character);
    void SetEMPIndicatorActive(bool Active);
    void SetArcIndicatorActive(bool Active);
    void ReceiveOnStateChanged();
    void ReceiveOnSentryGunOwnerChanged();
    void ReceiveOnDismantled();
    void ReceiveOnDismantle();
    void ReceiveOnDeployed();
    void ReceiveOnDeploy();
    void OnStateChanged__DelegateSignature(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void OnRep_State(ERedeployableSentryGunState oldState);
    void OnRep_SentryGunOwner();
    void OnElectrocutionActorDestroyed(class AActor* Actor);
    void OnDismantleFinished__DelegateSignature();
    void OnDeployProgress__DelegateSignature(float Progress);
    void OnDeployFinished__DelegateSignature();
    bool GetIsDismantled();
    bool GetIsDeployed();
    float GetAnimDuration(class USkeletalMeshComponent* Mesh);
    void DismantleFinished();
    void Dismantle();
    void DeployFinished();
    void Deploy();
    void ActivateSpecialAttack();
};

class AResourceChunk : public AFSDPhysicsActor
{
    float CollectDuration;
    bool CanBeCollectedNormally;
    bool CanBeCollected;
    class USimpleObjectInfoComponent* InfoComponent;
    float ResourceAmount;
    class USoundCue* PickupSound;
    class UResourceData* ResourceData;
    TArray<class APlayerCharacter*> OverlappingPlayers;
    TWeakObjectPtr<class APlayerCharacter> CollectedBy;

    void SetCollectOpen();
    void OnRep_CollectedBy();
    class UResourceData* GetResourceData();
    float GetResourceAmount();
    void CalcMovement(float InProgress, const FVector& InVector, FVector& OutVelocity, FVector& OutAngularVelocity);
};

class AResourcePouch : public ACarriableItem
{
    class UCarriableInstantUsable* Usable;
    class USoundCue* ImpactGroundSound;

    void ActorWasHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
};

class ARessuplyPod : public AActor
{
    FRessuplyPodOnStateChanged OnStateChanged;
    void RessuplyPodStateDelegate(class ARessuplyPod* InPod, ERessuplyPodState InState);
    FGameplayTagContainer GameplayTags;
    class UDamageComponent* Damage;
    float KillRadius;
    float DropHeight;
    float DropDelay;
    float MissionShoutDelay;
    class UDialogDataAsset* ShoutDialogOrderAccepted;
    class UDialogDataAsset* DialogOrderAccepted;
    class UDialogDataAsset* DialogPodArrived;
    class UDialogDataAsset* CurrentMissionShout;
    FVector StartLocation;
    FVector TargetLocation;
    ERessuplyPodState State;
    float TargetDropTime;
    float ServerDropProgress;
    class UCurveFloat* DropCurve;
    class AActor* PlayerSpawnPoint;
    float CloseToImpactDistance;

    void SetIdling();
    void RessuplyPodStateDelegate__DelegateSignature(class ARessuplyPod* InPod, ERessuplyPodState InState);
    void OnTunnelBLocked();
    void OnRep_TargetLocation();
    void OnRep_State(ERessuplyPodState oldState);
    void OnDropStarted();
    void OnDroppodImpact();
    void OnDroppodCloseToImpact();
    class AActor* DropToTarget(class UObject* WorldContextObject, TSubclassOf<class ARessuplyPod> podClass, const FVector& Location, class AActor* requester);
};

class ARessuplyPodItem : public AAnimatedItem
{
    TSubclassOf<class AActor> ResupplyBeacon;
    TSubclassOf<class UItemPlacerAggregator> ItemPlacerClass;
    class UItemPlacerAggregator* ItemPlacerInstance;
    TSubclassOf<class ARessuplyPod> SupplyPodClass;
    int32 ResourceCost;
    FText OrderDescription;
    FText LogText;
    float CoolDown;
    bool Used;

    void Server_Call_Resupply(const FVector& Location);
    void ReceiveItemPlacerSpawned(class UItemPlacerAggregator* InItemPlacer);
    void OnRep_Used();
    int32 GetResourceCost(class UObject* WorldContextObject);
    class UItemPlacerAggregator* GetActiveAggregator();
};

class ARessuplyPodSpawn : public ARessuplyPod
{

    void SetController(class AFSDPlayerController* Controller);
    void SetCharacter(class APlayerCharacter* Character);
};

class ARevoler : public AAmmoDrivenWeapon
{
    float OnKillFearFactor;
    float OnKillFearRange;

    void OnTargetKilled(class AActor* Target, class UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
};

class ARivalBomb : public AGameEvent
{
    TArray<class ARivalBombNode*> ActiveNodeInstances;
    float NodeHackTime;
    int32 NumNodesToHack;
    bool bDataCellPickedUp;
    TSubclassOf<class AGem> DataCell;
    TSubclassOf<class ARivalBombNode> RivalBomb;
    class UDebrisPositioning* NodePositioning;
    class UCurveFloat* NodeCostCurve;

    void UpdateNodesOnStart();
    void SpawnDataCell();
    void ReceiveDataCellPickedUp();
    void OnRep_DataCellPickedUp();
    void OnMatchStarted();
    void OnDataCellPickedUp(bool Attached, FVector PrevScale);
    void DeactivateAllNodes(bool failed);
    void ActivateNewNode();
};

class ARivalBombNode : public AActor
{
    FRivalBombNodeOnStateChanged OnStateChanged;
    void StateChangedDelegate(class ARivalBombNode* InBombNode, ERivalBombNodeState InState);
    TSubclassOf<class ASplineCableActor> RivalBombCable;
    class UHackingUsableComponent* HackingUsable;
    ERivalBombNodeState State;
    class ASplineCableActor* BombCable;
    class ARivalBomb* RivalBomb;
    float RemainingHackTime;
    float HackStartTime;
    int32 BombIndex;

    void StateChangedDelegate__DelegateSignature(class ARivalBombNode* InBombNode, ERivalBombNodeState InState);
    void ReceiveStateUpdated();
    void OnRep_State();
    void OnRep_RemainingHackTime();
    void OnNodeHackedByUser(class APlayerCharacter* Player);
    void OnHackTimerTick();
    float GetRemainingTimePct();
};

class ARockCrackerDrill : public AFuelLineEndPoint
{
    class USingleUsableComponent* ConstructUsable;

    void SetIsDrilling(bool isDrilling);
    bool GetIsDrilling();
};

class ARockCrackerPod : public ARessuplyPod
{
    class UFriendlyHealthComponent* Health;
    class UContinuousUsableComponent* RepairUsable;
    FRockCrackerPodOnRockCrackerStateChanged OnRockCrackerStateChanged;
    void RockCrackerStateDelegate(ERockCrackerstate CurrentState, ERockCrackerstate previousState);
    float DrainPerSecond;
    ERockCrackerstate PodState;
    class ARockCrackerPod* EndPointDrill;
    class UDialogDataAsset* InDangerDialogue;
    bool LightsAreGreen;
    float DrainImmunityTime;
    float YellowLightsThreshold;
    float HealPerTick;

    void SwitchYellowLights(bool isGreen);
    void SetPodState(ERockCrackerstate PodState);
    void OnRepairTick(class APlayerCharacter* User, EInputKeys Key);
    void OnRep_PodState(ERockCrackerstate oldState);
    void OnRep_LightsAreGreen();
    void OnPodDamaged(float damageInfliced, const FDamageData& DamageData, bool anyHealthLost);
    void OnExitState(ERockCrackerstate PodState);
    void OnEventStarted();
    void OnEventEnded(bool wasSuccess);
    void OnEnterState(ERockCrackerstate PodState);
    bool IsBroken();
    ERockCrackerstate GetPodState();
    void All_SwitchYellowLights(bool isGreen);
};

class ARockEnemiesEvent : public AGameEvent
{
    TSubclassOf<class AProjectile> PowerUpClass;
    float PowerUpGenerationTime;
    TArray<int32> KillAmountPerPlayer;
    TArray<int32> MaxEnemyCountPerPlayer;
    TArray<class APawn*> SpawnedRockEnemies;
    class USkeletalMeshComponent* Mesh;
    class UParticleSystem* MuzzleEffect;
    int32 PowerUpsPerGeneration;
    int32 GruntPointsAward;
    int32 TankPointsAward;
    class UEnemyGroupDescriptor* RockEnemies;

    void StopPowerupGeneration();
    void StartPowerupGeneration();
    void SpawnRockEnemies(float Difficulty, const TArray<FVector>& Locations);
    void ShowFireEffects(int32 selectedBone);
    void RockEnemySpawned(class APawn* spawnedEnemy);
    void RockEnemyDied(class UHealthComponentBase* Health);
    void OnShoot();
    void EnemySpawnedAfterComplete(class APawn* spawnedEnemy);
};

class ARoomBurner : public AActor
{
    bool LiveUpdateEditor;
    ERoomMirror MirrorTest;
    class URoomGenerator* RoomGenerator;
    float RoomRadius;
    ERoomMirroringSupport MirrorSupport;
    bool ShowRoomCollider;
    FGameplayTagContainer RoomTags;
    int32 Seed;
    class UBiome* Biome;
    class UDifficultySetting* Difficulty;
    int32 ForcePlayerCount;
    bool GenerateDebris;
    bool GenerateItems;
    bool GenerateResources;
    bool SpawnEncounters;
    class UEnemyDescriptor* TestEnemy;
    int32 TestEnemyCount;
    class UMissionMutator* TestMutator;
    TArray<class UMissionWarning*> TestWarnings;
    class USpecialEvent* TestSpecialEvent;
    class USpecialEvent* TestTreasure;
    class UMissionTemplate* MissionTemplate;
    class UMissionTemplate* CustomMissionTemplate;
    class ADeepCSGWorld* CSGWorld;
    class AProceduralSetup* PLSLiveEditor;
    class URoomGenerator* LiveEditRoomGenerator;

    void SpawnEncounter(class AProceduralSetup* Setup);
    class URoomGenerator* GetRoomGenerator();
};

class ARoomGenerationItem : public AGenerationItem
{
};

class ASalvageFuelPod : public ARessuplyPod
{
};

class ASavableActor : public AActor
{
    bool EnableDangerousSaveGameIDEditing;
    FGuid SavegameID;

};

class ASawedOffShotgun : public AAmmoDrivenWeapon
{
    class UDamageComponent* DamageComponent;
    class UDamageComponent* ShockWaveDamageComponent;
    float FearFactorOnFire;
    float FearFactorOnFireRadius;
    bool ShotgunJumpEnabled;
    float ShotgunJumpForce;
    bool ShockwaveEnabled;
    float ShockWaveDistance;
    float ShockWaveRadius;
    float ShockWaveLength;

    void SetShockWaveDamageComponent(class UDamageComponent* Component);
};

class ASentryAttachment : public AActor
{
};

class ASentryElectroBeam : public AElectroBeam
{
    TArray<class ARedeployableSentryGun*> Sentries;

};

class ASentryGun : public AActor
{
    FSentryGunOnEnabledChanged OnEnabledChanged;
    void EnabledChanged(bool IsEnabled);
    FSentryGunOnAmmoCountChanged OnAmmoCountChanged;
    void AmmoCountChangedEvent(int32 AmmoCount, int32 Change);
    FSentryGunOnMaxAmmoCountChanged OnMaxAmmoCountChanged;
    void AmmoCountChangedEvent(int32 AmmoCount, int32 Change);
    class USkeletalMeshComponent* SentryGunMesh;
    TArray<FSentryGunMuzzleSetup> SentryGunMuzzels;
    TSubclassOf<class AProjectile> ProjectileClass;
    class USoundCue* ShootingSound;
    class UParticleSystem* MuzzleFlash;
    FTracerData TracerData;
    class UParticleSystem* Tracer;
    float MinTracerDistance;
    float AngleRestriction;
    bool Enabled;
    TArray<FOverlapResult> OverlapCache;
    FRotator MinRotation;
    FRotator MaxRotation;
    float AquisitionRange;
    float RotationSpeed;
    float ShotCoolDown;
    float TargetLeading;
    int32 BurstCount;
    float BurstShotCoolDown;
    float IdleScanAngle;
    float IdleScanSpeed;
    float FinalShotFadeOut;
    class USoundBase* AudioOnTurn;
    FGameplayTagContainer DissallowedTargetTags;
    int32 AmmoCount;
    int32 MaxAmmoCount;
    float Damage;
    float TargetYaw;
    float TargetPitch;
    TWeakObjectPtr<class UHealthComponentBase> LastTarget;
    TWeakObjectPtr<class UHealthComponentBase> PrioritizedTarget;
    class UWeaponFireComponent* WeaponFire;
    class UAudioComponent* ShootingAudioComponent;

    void UseAmmo(int32 Amount);
    void ReceiveAmmoChanged(int32 Delta, int32 currentAmount);
    void OnRep_MaxAmmoCount(int32 OldCount);
    void OnRep_LastTarget();
    void OnRep_AmmoCount(int32 OldCount);
    void OnProjectileFired(const FVector& Location);
    void OnNewTargetRequested(const FLaserPointerTarget& HitInfo);
    FTransform GetMuzzleTransform();
    FName GetMuzzleName();
    int32 GetMaxAmmoCount();
    float GetDeployProgress();
    float GetAmmoLeftPct();
    int32 GetAmmoLeft();
    void Force_Fire(class AActor* Target);
    void EnabledChanged__DelegateSignature(bool IsEnabled);
    void AmmoSpent();
};

class ASentryGunItem : public APlaceableItem
{
    TArray<class UItemUpgrade*> upgrades;

};

class ASharkEnemy : public AEnemyDeepPathfinderCharacter
{
    class UPawnSensingComponent* PawnSensing;
    class USphereComponent* CollisionSphere;
    class USphereComponent* NearTargetSphere;
    class UParticleSystemComponent* TearingGroundParticles;
    class UParticleSystemComponent* AirTrailParticles;
    class UInDangerComponent* Danger;
    class UEnemyComponent* EnemyComponent;
    class UDamageComponent* Damage;
    class UDamageComponent* BumpDamage;
    class UFakePhysGrabberComponent* RestrictedGrabberComponent;
    class USoundCue* ImpactCue;
    class USoundCue* JumpSound;
    float DiveForSeconds;
    float LaunchPower;
    float GrabTime;
    float RagdollSpeedFactor;
    float UpsideDownTime;
    float TiltOutSpeed;
    float SafeTimeAfterVounerable;
    float RaiseHeight;
    float AttackDuration;
    float ChanceToGrab;
    float MinTimeBetweenBumps;
    float ChanceForJump;
    float MinJumpCooldown;
    float MaxJumpCooldown;
    float JumpForce;
    float NormalHeight;
    float DiveHeight;
    float MinCirclingTime;
    float MaxCirclingTime;
    class UFakeMoverSettings* CircleSetttings;
    class UFakeMoverSettings* AttackSettings;
    class UFakeMoverSettings* PostHitSettings;
    class UFakeMoverSettings* JumpSettings;
    class UFakeMoverSettings* VulnerableSettings;
    float MaxInGroundTime;
    float MinInGroundTime;
    float StartParticleTime;
    float EndParticleTime;
    class UParticleSystem* DiveParticles;
    ESharkEnemyState State;

    void SetVulnerable();
    void ReleasePlayer(class AActor* playerchar, bool fullGrabElapsed);
    void PopRecentlyBumpedPlayer();
    void OnStateChangedEvent(ESharkEnemyState CurrentState);
    void OnSeePawn(class APawn* APawn);
    void OnRep_State(ESharkEnemyState oldState);
    void OnRep_DiveTime();
    void OnNearTarget(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnLandedEvent();
    void OnJumpEvent();
    void OnExitState(ESharkEnemyState State);
    void OnEnterState(ESharkEnemyState State);
    void OnDeathDetailed(class UHealthComponent* aHealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& dTags);
    void OnDeath(class UHealthComponentBase* aHealthComponent);
    void OnDamaged(float aAmount);
    void OnCollided(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Jumped();
    void ImpactSound();
    void DiveShow();
    void DiveHide();
    void All_DoRagdollImpact(const FVector_NetQuantize& Direction);
    void ActivateDanger();
};

class AShieldGeneratorActor : public AThrowableActor
{
    float GeneratorRadius;
    float DeployDelay;
    bool bPushStatusEffectOnExit;
    float GeneratorLifetime;

};

class AShieldGeneratorItem : public AThrowableItem
{
    class UCapacityHoldingItemAggregator* ChargeCapacity;
    class UCapacityHoldingItemAggregator* CarryCapacity;
    float RechargeDuration;
    int32 UnchargedCount;
    float RechargeProgress;
    float SupplyStatusWeight;
    class UDialogDataAsset* ShoutRecarged;
    FCoolDownProgressStyle RechargeProgressUI;

    void ReceiveGeneratorReturned();
    void ReceiveGeneratorRechargeProgress(float Progress);
    void ReceiveGeneratorRecharged();
    void OnRep_UnchargedCount(int32 OldCount);
    bool GetIsRecharging();
    void GeneratorReturned();
};

class AShootingPlant : public AEnemyPawn
{
    bool IsVisible;
    class AActor* Target;

    void SetTarget(class AActor* Target);
    void OnRep_Target();
};

class AShowroomItem : public AActor
{
    TSoftClassPtr<AShowroomStage> ShowroomStage;

};

class AShowroomStage : public AActor
{
    class USceneCaptureComponent2D* SceneCapure;
    class USceneCaptureComponent2D* ActiveCaptureComponent;
    TSubclassOf<class UShowroomController> ControllerClass;
    class UShowroomController* ControllerInstance;
    class USceneCaptureComponent2D* SceneCapture;
    float MinPitch;
    float MaxPitch;
    class USceneComponent* CameraFocusPoint;

    void ReceiveInitialize(class UTextureRenderTarget2D* RenderTarget);
    class USceneCaptureComponent2D* GetActiveCaptureComponent();
    class UTextureRenderTarget2D* CreateRenderTarget();
};

class AShredder : public AEnemyDeepPathfinderCharacter
{
    float FoldoutRange;
    float SpinRange;
    class AActor* CurrentTarget;

};

class ASoapVacuumItem : public APlagueCleanupItem
{
    class UCapsuleComponent* VacuumCapsule;
    class UNiagaraComponent* NS_Vacuum_FP;
    class UNiagaraComponent* NS_Vacuum_TP;
    FSoapVacuumItemOnCurrentVolumeChanged OnCurrentVolumeChanged;
    void PlagueCleanerResourceChanged(float currentResourceVolume);
    float VacuumCooldown;
    float VacuumRadius;
    float VacuumRange;
    float CurrentVacuumEffectStrenght;
    float MaxVacuumEffectStrength;
    float VacuumEffectFoamSuckTime;
    float LastPuddleSuckTime;

    void Server_StartVacuumingPuddle(class AActor* Target);
    void OnFoamPuddleCollected_Unreliable();
    void ItemEnterVacuum(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    class USceneComponent* GetVacuumSource();
    void All_Visual_PuddleStartCollect();
};

class ASpaceRigBar : public AActor
{
    FSpaceRigBarOnNewDrinkableSpecial OnNewDrinkableSpecial;
    void DrinkableSignature(class UDrinkableDataAsset* Drinkable);
    class UInstantUsable* BarUsable;
    class UBoxComponent* BarUsableCollider;
    TSubclassOf<class UBarMenuWidget> BarMenuWidget;
    TArray<FVector> DrinkServingLocations;
    TArray<FDrinkableBarSlot> DrinkableBarSlots;
    class UDrinkableDataAsset* DrinkableSpecial;
    TMap<class EHolidayType, class FHolidayMeshItems> HolidayComponentMap;

    void SpawnDrinkables(class UDrinkableDataAsset* Drinkable, class APlayerCharacter* User);
    void SetVisibilityOfHolidayMeshes();
    void ReceiveFinishedSpawningDrinkables(class UDrinkableDataAsset* DrinkableData, class APlayerCharacter* Customer);
    void ReceiveDrinkableSpawned(class ADrinkableActor* Drinkable, class APlayerCharacter* Customer, int32 LocationIndex);
    void ReceiveBeginSpawningDrinkables(class UDrinkableDataAsset* DrinkableData, class APlayerCharacter* Customer);
    void PlayBartenderTip(class APlayerCharacter* User);
    void PayTip(class APlayerCharacter* Character, int32 Credits);
    void OnRep_DrinkableSpecial();
    bool HasUnclaimedDrinkables();
    bool HasSpaceForMoreDrinkables();
    int32 GetAvailableDrinkableSlots();
    void DrinkableSignature__DelegateSignature(class UDrinkableDataAsset* Drinkable);
};

class ASpaceRigHUD : public AFSDHUD
{
    TArray<FNotificationEntry> NotificationQueue;
    bool bNotificationQueueActive;

    void SetNotificationQueueActive(bool Inactive);
    void ReceiveNotificationQueueActivated();
    void ReceiveNotificationAdded();
    void QueueWindowClass(TSoftClassPtr<UWindowWidget> InWindowType);
    void QueueNotificationObject(class UObject* InObject);
    bool IsNotificationQueueEmpty();
    class UObject* DequeueNotificationObject();
};

class ASpacerigStart : public APlayerStart
{
    FSpacerigStartOnPlayerSpawn OnPlayerSpawn;
    void PlayerSpawnInHub(class AFSDPlayerController* Controller);
    FSpacerigStartOnPlayerLeave OnPlayerLeave;
    void PlayerSpawnInHub(class AFSDPlayerController* Controller);
    class AFSDPlayerController* usedBy;
    ESpacerigStartType StartType;

};

class ASpawnActorGenerationItem : public AGenerationItem
{
    TSubclassOf<class AActor> ActorToSpawn;
    class UBoxComponent* Box;

};

class ASpawnResourceGenerationItem : public AGenerationItem
{
    class UResourceData* Resource;
    float BaseAmount;
    class USphereComponent* Sphere;

};

class ASpawnTrigger : public AActor
{
    FName Message;

};

class ASpawnTriggerItem : public AGenerationItem
{
    TSubclassOf<class AActor> Trigger;
    FName Message;

};

class ASpiderEnemy : public AEnemyDeepPathfinderCharacter
{
    class UPawnStatsComponent* PawnStats;
    class UHitReactionComponent* HitReactions;
    class UStaticMesh* GoreMesh;
    bool ApplyDifficultySpeedModifier;
    float AttackDamageModifier;
    bool LimitRagdollSpeed;
    float MaxRagdollSpeed;
    class AActor* LookAtTarget;

    void SetLookAtTarget(class AActor* Target);
    void OnRep_LookAtTarget();
    class UStaticMeshComponent* CreateHeadGore();
    void AlertNearbyEnemies();
};

class ASpinningFacilityturret : public AFacilityTurret
{
    FRotator TargetRotation;
    FRandRange AimAtTargetEveryTurn;
    float TurnCooldown;
    float TurnTimer;
    float Acceptance;
    float TurnSpeed;

};

class ASplineCableActor : public AActor
{
    class USplineComponent* PathSplineComponent;
    FCablePathSettings PathSettings;
    TSoftObjectPtr<UStaticMesh> CableMesh;
    float CableThickness;
    int32 CarveRadius;
    TSoftObjectPtr<UMaterialInterface> MaterialConnected;
    TSoftObjectPtr<UMaterialInterface> MaterialUnconnected;
    int32 MaterialIndex;
    class UStaticMesh* CableMeshInstance;
    FTransform StartTransform;
    FTransform EndTransform;
    TArray<FVector> ReplicatedPath;
    bool bConnected;
    TArray<class USplineMeshComponent*> MeshComponents;

    void SpawnBetweenTransforms(FTransform InStart, FTransform InEnd);
    void SetConnected(bool InConnected);
    void ReceiveSegmentCreated(class USplineMeshComponent* InSegment, int32 InIndex, int32 InTotal);
    void ReceiveAllSegmentsCreated();
    void OnUpdateMaterials();
    void OnRep_Path();
    void OnRep_Connected();
};

class ASplinePlant : public AActor
{
    class USplineComponent* PlantSpline;
    class USceneComponent* PlantEndPoint;
    class UAudioComponent* AudioComponent;
    TSoftObjectPtr<USoundCue> CueExtending;
    TSoftObjectPtr<USoundCue> CueRetracting;
    class USoundCue* AudioExtending;
    class USoundCue* AudioRetracting;
    bool bEnabledSegmentCollision;
    float CarveRadius;
    TSoftObjectPtr<UStaticMesh> SegmentMeshPtr;
    TEnumAsByte<ESplineMeshAxis::Type> SegmentForwardAxis;
    float SegmentLength;
    FRuntimeFloatCurve SegmentWidthCurve;
    float SegmentWidthScale;
    FRuntimeFloatCurve SegmentHeightCurve;
    float SegmentHeightScale;
    float PreviewLengthPercent;
    int32 PreviewSeed;
    TArray<class USplineMeshComponent*> SegmentMeshCache;
    TArray<class USplineMeshComponent*> CollisionMeshCache;
    class USplineComponent* SplineInstance;
    class UStaticMesh* SegmentMesh;
    int32 Seed;

    void SetTargetPlantLengthPercent(float InTargetPercent, float InPercentPerSecond, float InEaseExp);
    void SetTargetPlantLength(float InTargetLength, float InDistancePerSecond, float InEaseExp);
    void SetPlantLengthPercent(float InPercent);
    void ResetSpline();
    void ResetScale();
    void ReceivePrepareSpline(class USplineComponent* InSplineComponent, int32 InSeed);
    void ReceiveMovementUpdated(float InDistanceProgress);
    void ReceiveMovementStarted(float InTargetDistance);
    void ReceiveMovementFinished(float InDistanceProgress);
    float GetPlantTargetLengthPercent();
    float GetPlantLengthPercent();
    FTransform GetNearestLocationToLocalPlayer();
    float GetFullPlantLength();
};

class AStabberVine : public ATentacleBase
{
    FTentacleTarget DesiredTarget;

    void OnRep_DesiredTarget();
};

class AStabberVineRoot : public AEnemyPawn
{

    void RemoveVine(class AStabberVine* vine);
};

class AStateDrivenDroneController : public ADroneControllerBase
{
};

class AStickyFlame : public AActor
{
    class UParticleSystemComponent* FlameParticles;
    class UAudioComponent* audio;
    class UStatusEffectTriggerComponent* StatusTriggerComponent;
    FDecalData Decal;
    float FlameLifetime;
    float FlameExtinguishTime;
    FVector2D RandomTimeRangeFactor;
    float AudioFadeOutTime;
    bool IsActive;

    void OnRep_IsActive();
    void OnExtinguisFlame();
};

class ASubRoomItem : public AGenerationItem
{
    class URoomGenerator* RoomGenerator;
    int32 Layer;

};

class ATaggedActor : public AActor
{
    FGameplayTagContainer GameplayTags;

};

class ATargetDummyPawn : public AActor
{
    FGameplayTagContainer GameplayTags;

};

class ATeamTransport : public AActor
{
    float DropHeight;
    FVector TargetLocation;
    class UAutoCarverComponent* AutoCarver;
    class UCurveFloat* DropCurve;
    class UCurveFloat* DepartCurve;
    class UCurveFloat* CarverDropCurve;
    float CarverRotationSpeed;
    FVector CarverScale;
    FGameplayTagContainer GameplayTags;
    class UBoxComponent* DwarfCheckerBox;
    float DepartureTime;
    FText DepartueCountdownName;
    EMiningPodMission MissionType;
    bool WaitForPlayerSpawns;
    bool HasLanded;
    class UOutlineComponent* PodOutline;
    FVector StartLocation;
    EMiningPodState TransportState;
    EMiningPodRampState rampState;
    float TargetDropTime;
    float TargetDepartureTime;
    float TimeToDrop;
    class UObjectivesManager* ObjectivesManager;

    class ATeamTransport* SpawnPodAtLocation(class UObject* WorldContextObject, TSubclassOf<class ATeamTransport> podClass, const FTransform& Transform);
    void SetRampState(EMiningPodRampState rampState);
    void SetMuleInstance(class AMolly* Donkey);
    void RecieveReturnTimerFifteenSecondWarning();
    void RecieveReturnTimerExpired();
    void PrepForTakeOff();
    void PowerUp();
    void PoweredUp();
    void OnRep_State();
    void OnRep_RampState();
    void OnPrepForTakeOff();
    void OnPoweringUp();
    void OnPoweredUp();
    void OnHostInsidePod(bool isInside);
    void OnDropStarted();
    void OnDroppodImpact();
    void OnDrillingStarted();
    void OnDeparting();
    void OnCountdownFinished();
    void OnCountdownChanged(int32 newTime);
    void OnAllDwavesInsidePod(bool AllInside);
    int32 GetTimeToDeparture();
    bool GetHasLanded();
    void ForceTakeoff();
    void ExitSpacerig();
    void DropToTarget(class UObject* WorldContextObject, TSubclassOf<class ATeamTransport> podClass, const FTransform& dropLocation, int32 DropDelay);
    class ATeamTransport* DropToMission(class UObject* WorldContextObject, TSubclassOf<class ATeamTransport> podClass, const FVector& Location);
    void DepositAllPlayersMaterials();
    void Depart();
    void CorrectLocationsForSpawnedOnLocation();
    FVector AdjustLandingLocationToGround(class UObject* WorldContextObjet, const FVector& initialLocation, float maxDownAdjustment);
};

class ATentacleBase : public AEnemyPawn
{
    class USplineComponent* SplineComponent;
    FTransform RestTransform;
    FVector TargetLocation;
    float HeadMovementDuration;
    float CanSwayCooldown;
    FVector2D SwayRange;
    float NeckBaseTangentLength;
    FVector NeckBasePositionOffset;
    FVector NeckBaseTangentOffset;
    float NeckTopTangentLength;
    float DurationTentacleRetract;
    float DurationTentacleFoldout;
    class USceneComponent* HeadRoot;
    class USceneComponent* HeadRotator;

    void SetRestingTransform(const FTransform& restingTransform, bool startAtRest);
    void Recieve_OnRep_Owner();
    void MoveHydraHead(FTransform newDesiredTransform, float newCanSwayCooldown, float newHeadMovementDuration, bool UseSpring);
    class AStabberVineRoot* GetStabberVineRoot();
    class USceneComponent* GetHeadRotator();
    class USceneComponent* GetHeadRoot();
};

class ATerminatorEnemy : public AEnemyDeepPathfinderCharacter
{
    class UAnimMontage* FlairAnimation;
    float MinFlairAnimCooldown;
    float MaxFlairAnimationCooldown;
    class UHitReactionComponent* HitReactions;
    TSet<AActor*> CurrentTargets;

    void All_PlayFlairAnimation();
};

class ATerminatorTentacle : public ATentacleBase
{
    FTerminatorTentacleOnTentacleStateChangedEvent OnTentacleStateChangedEvent;
    void Delegate();
    class UAnimSequenceBase* FlairAnimation;
    float MinFlairAnimCooldown;
    float MaxFlairAnimationCooldown;
    float SwaySpeed;
    bool Extended;
    TArray<class UAnimMontage*> HitReactions;
    ETerminatorTentacleState TentacleState;
    class USkeletalMeshComponent* HeadMesh;
    class UGrabberComponent* GrabberComponent;
    FTerminatorTarget DesiredTarget;

    void PlayHitReaction(float Amount);
    void OnStateChanged(ETerminatorTentacleState NewState);
    void OnRep_TentacleState();
    void OnRep_DesiredTarget();
    void OnHeadExitedTerrain();
    void OnHeadEnteredTerrain();
    void OnGrabbedActorReleased(class AActor* Actor, bool fullGrabElapsed);
    void OnDeathEvent(class UHealthComponentBase* EnemyHealth);
    void MoveToGrabTarget(class AActor* Target, float grabDuration);
    void ChangeTentacleState(ETerminatorTentacleState NewState);
    void All_PlayFlairAnimation();
};

class ATerrainModifyingProjectile : public AProjectile
{
    FTerrainModifyingProjectileOnRevertToNormal OnRevertToNormal;
    void RevertToNormal();
    class UTerrainMaterial* Terrain;
    class UTerrainMaterial* OriginalGroundMaterial;
    class UStaticMesh* CarveMesh;
    FVector CarveMeshScale;
    FVector LastHitLocation;
    float Radius;
    bool Revert;
    float TimeOnGround;
    float ExpensiveCarveNoise;

    void Tick(float DeltaSeconds);
    float GetRadius();
    void BeginPlay();
};

class ATerrainScannerItem : public AAnimatedItem
{
    int32 TerrainScannerZoomDirection;
    FName ScannerAttachSocketName;
    float TerrainScannerStartAngle;
    float TerrainScannerScale;
    float DelayedTerrainScannerScale;
    float DelayedTerrainScannerZoom;
    bool IsLookingAtMap;
    bool UpdateMapToolActors;
    TArray<class UAnimMontage*> UseLoopsFP;
    class UAnimMontage* EndFP;
    TArray<class UAnimMontage*> UseLoopsTP;
    class UAnimMontage* EndTP;
    class USceneComponent* TerrainScannerRoot;
    class USceneCaptureComponent2D* TerrainScannerCapture;

    void Server_SetIslookingAtMap(bool lookingAtMap);
    void OnRep_IsLookingAtMap();
};

class ATether : public ACarriableItem
{
    class USkeletalMeshComponent* BaseMesh;
    class UInstantUsable* UsableComponent;
    class UCarriableComponent* Carry;
    class USphereComponent* UseTrigger;
    class UNiagaraComponent* TetherBeam;
    class USphereComponent* PysicalCollision;
    class UDamageComponent* ExplosionDamage;
    class UParticleSystem* ExplosionParticle;
    class USoundCue* ExplosionSound;
    bool IsOnGround;
    float KnockBackForce;

    void SetIsOnGround(bool IsOnGround);
    void OnDronePickup();
    void OnDroneDrop();
    void OnClosed();
    void Explode();
};

class ATetherStation : public AActor
{
    class USceneComponent* SceneRoot;
    class USkeletalMeshComponent* BaseMesh;
    TSubclassOf<class AFacilityGeneratorLine> FacilityGeneratorLineType;
    bool AreGeneratorsReady;
    bool FacilityActive;

    void SpawnGeneratorLines(const FTransform& startL, const FTransform& startR, const TArray<FTransform>& endL, const TArray<FTransform>& endR, class AFacilityGeneratorLine*& outLineL, class AFacilityGeneratorLine*& outLineR);
    void SetGeneratorsReady(bool ready);
    void Onrep_FacilityActive();
    void OnRep_AreGeneratorsReady();
    void OnGeneratorsReady();
    void OnActivated();
    void DisableShields();
    void ActivateFacility();
};

class AThrowableActor : public AActor
{
    class UProjectileMovementComponent* Movement;
    bool IsMoving;
    bool IgnoreFellOutOfWorld;
    bool IgnoreOwnersCollision;

    void ReceiveIgnoreCharacter(class APlayerCharacter* Character);
    void ReceiveHitObject();
    void OnRep_IsMoving();
};

class AThrowableItem : public AAnimatedItem
{
    TSubclassOf<class AThrowableActor> ThrowableClass;
    class UAnimMontage* FPThrowMontage;
    class UAnimMontage* TPThrowMontage;
    float ThrowVelocity;
    float InheritOwnerVelocityScale;
    float ThrowAngle;
    float CooldownAfterThrow;
    bool CanThrowBeforeEquipAnimFinish;
    float CooldownAfterEquip;
    float ThrowDelay;
    FVector ThrowOffset;
    float CooldownLeft;
    TArray<class UItemUpgrade*> upgrades;
    TSubclassOf<class AItem> LoadoutItem;
    TArray<TWeakObjectPtr<AThrowableActor>> ThrownActors;

    void Simulate_Throw(TSubclassOf<class AThrowableActor> ActorClass);
    void Server_Throw(TSubclassOf<class AThrowableActor> ActorClass, const FVector& Location);
    void ReceiveItemThrown(class AThrowableActor* thrownActor);
    void ReceiveItemSpawned(class AThrowableActor* thrownActor);
    void OnThrownActorDestroyed(class AActor* Actor);
};

class AThrownGrenadeItem : public AItem
{
    FThrownGrenadeItemOnGrenadeThrown OnGrenadeThrown;
    void OnGrenadeThrown();
    class UPlayerAnimInstance* FPAnimInstance;
    class UPlayerAnimInstance* TPAnimInstance;
    class UItemCharacterAnimationSet* CharacterAnimationSet;
    FVector ThrowOffset;
    float ThrowAngle;
    int32 MaxGrenades;
    int32 Grenades;
    float GrenadeCooldownRemaining;
    EThrownGrenadeItemState State;
    TSubclassOf<class AGrenade> GrenadeClass;
    class UGrenadeAnimationSet* DefaultGrenadeAnimationSet;
    class UStaticMeshComponent* GrenadeMeshInstance;
    class UFSDAudioComponent* CookSound;
    bool CooldownIsDone;
    bool HasRejoinedInitialized;

    void UpdateCookTime(float Time);
    void SetRemainingCooldown(float CoolDown);
    void Server_ThrowGrenade(const FVector& StartLocation, const float& cookTime);
    void Server_SetState(EThrownGrenadeItemState itemState);
    void Server_Resupply(float percentage);
    void ResupplyGrenadesAmount(const int32& Amount);
    void ResupplyGrenades(float percentage);
    TArray<FVector> PredictGrenadePath();
    void OnRep_State();
    void OnRep_GrenadeCount();
    void OnRep_GrenadeClass();
    void OnGrenadeThrown__DelegateSignature();
    void GrenadeThrowFinished();
    void GetPredictedLastPosAndVelocity(FVector& Pos, FVector& Velocity);
    float GetGrenadeThrowVelocity();
    FRotator GetGrenadeThrowRotation();
    float GetGrenadeGravity();
    float GetGrenadeDuration();
};

class ATowerEventModule : public AFSDPawn
{
    class USceneComponent* Root;
    class USkeletalMeshComponent* Mesh;
    class UEnemyHealthComponent* Health;
    class UArmorHealthDamageComponent* ArmorDamage;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UParticleSystemComponent* SmokeParticles;
    FRotator MainBodyRotation;
    class USkeletalMesh* DestroyedMesh;
    class USoundCue* ExplosionSound;
    class UParticleSystem* ExplosionEffect;
    class ATowerEventModule* PreviousModule;
    class ATowerEventModule* NextModule;
    class UStaticMesh* ArmorMesh;
    int32 ArmorPieces;
    float ArmorLifetime;
    float ArmorPopForce;
    float ArmorShedDelay;
    TArray<class UStaticMeshComponent*> ArmorMeshes;

    void OnAttack();
    void HideArmorPlates();
    void DestroyArmor();
};

class ATowerModuleBase : public AFSDPawn
{
    class USceneComponent* Root;
    class USkeletalMeshComponent* ModuleMesh;
    TArray<class UStaticMeshComponent*> ArmorPlates;
    class UEnemyHealthComponent* Health;
    FRotator ModuleRotation;
    class USkeletalMesh* DestroyedMesh;
    class USoundCue* deathSound;
    class UParticleSystem* deathParticles;
    float ArmorLaunchPower;
    float HideArmorTime;
    float ModuleRotationSpeed;
    bool ConstantRotation;
    EGuntowerModuleState State;

    void SetState(EGuntowerModuleState State);
    void OnRep_State(EGuntowerModuleState prevState);
    void HideArmorPlates();
    void DoAttack();
};

class ATrackBuilderItem : public AAnimatedItem
{
    class UCrosshairAggregator* CrosshairAggregator;
    EPlaceableObstructionType ObstructionType;
    FVector ObstructionLocation;
    FVector GroundNormal;
    TSubclassOf<class ATrackBuilderSegment> DefaultSegmentType;
    class ATrackBuilderSegment* NextSegment;
    bool bIsPlacingSegment;

    void UpdatePlacement(const FTransform& InTransform, class UTrackBuilderConnectPoint* InConnectPoint, bool bPlacementValid, bool InUpdateServer);
    void ServerUpdatePlacement(const FTransform& InTransform, const bool bPlacementValid, class UTrackBuilderConnectPoint* InConnectPoint);
    void ServerFinishPlacement(const FTransform& FinalLocation, class UTrackBuilderConnectPoint* ConnectPoint);
    void ServerCancelPlacement();
    void ServerBeginPlaceSegment(class UTrackBuilderUsable* InUsable);
    void ReceiveBeginPlaceSegment();
    void OnRep_NextSegment();
    TSubclassOf<class ATrackBuilderSegment> GetSegmentType();
    void FinishPlacement(const FTransform& FinalLocation, class UTrackBuilderConnectPoint* ConnectPoint);
    void CancelPlacement();
    FVector AdjustInitialLocation(const FVector& Location);
};

class ATrackBuilderSegment : public AActor
{
    class UTrackBuilderUsable* NextSegmentUsable;
    TWeakObjectPtr<class APlayerCharacter> BuiltByCharacter;
    TWeakObjectPtr<class UTrackBuilderUsable> BuiltFromUsable;
    FTrackBuilderPoint SegmentEndTransform;
    FTrackBuilderPoint ServerSegmentEndTransform;

    bool UpdatePlacement(const FTransform& InTransform, class UTrackBuilderConnectPoint* InConnectPoint, bool InPlacementValid, class AItem* PlaceableItem);
    void ReceivPlacementValidChanged(bool InIsValid);
    void ReceivePlacementStateChanged(ETrackBuildPlacementState NewState);
    void ReceivePlacementChangedEnd(const FTransform& NewEndTransform, class UTrackBuilderConnectPoint* InConnectPoint);
    void ReceivePlacementChangedBegin(const FTransform& NewEndTransform, class UTrackBuilderConnectPoint* InConnectPoint);
    bool ReceiveCanPlaceAt(const FTransform& InCandidateTransform, class UTrackBuilderConnectPoint* InConnectPoint);
    void OnRep_SegmentEndTransform();
    class UTrackBuilderUsable* GetTrackStartUsable();
    class AActor* GetTrackStartActor();
    FTransform GetStartTransform();
    FTransform GetSegmentEndTransform();
    ETrackBuildPlacementState GetPlacementState();
    class ATrackBuilderSegment* GetNextSegment(bool bForward);
    bool GetIsSegmentEndTransformValid();
    class UTrackBuilderConnectPoint* GetConnectPoint();
    bool CanPlaceAt(const FTransform& InCandidateTransform, class UTrackBuilderConnectPoint* InConnectPoint, class AItem* PlaceableItem);
};

class ATreasureBeacon : public AActor
{
    class USceneComponent* RootComp;
    class UTerrainPlacementComponent* terrainPlacement;
    class UDebrisPositioning* TreasurePositioning;
    class UDebrisPositioning* DebrisPartsPositioning;
    class UCurveFloat* AvoidCostCurve;
    class UCurveFloat* AvoidCostCurveDebris;
    float MaxRange;
    float MinRange;
    float DebrisSpawnRange;
    TSubclassOf<class AActor> DebrisPartClass;
    int32 DebrisPartsToSpawn;
    int32 MaxSpawnLocationTries;
    TSubclassOf<class ATreasureContainer> TreasureClass;
    class ATreasureContainer* TreasureInstance;

    void SpawnDebreeParts();
    void ActivateTreasure();
};

class ATreasureBox : public ATreasureContainer
{
    class URepairableComponent* repairable;
    class URepairableUsable* RepairUsable;
    class USingleUsableComponent* HammeringUsable;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* MiddlePlane;
    class USkeletalMeshComponent* BoxMesh;
    TArray<class AActor*> Batteries;
    float CollectActivationDelay;
    class UAnimSequenceBase* OpenBoxAnim;
    float DelayToOpenAfterRepair;
    TSubclassOf<class AActor> ResourceClass;
    class UTreasureRewarder* boxRewarder;
    float HologramRotationSpeed;
    int32 ItemsInserted;
    bool IsTreasureAvailable;

    void PlaceResources(class AProceduralSetup* Setup, float Radius, class UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, class UCurveFloat* AvoidCostCurve);
    void OnUsedEvent(class APlayerCharacter* User, EInputKeys Key);
    void OnRepairedEvent(class URepairableComponent* repaired);
    void OnHammerProgress(float Progress);
    void OnHammered(class APlayerCharacter* User, EInputKeys Key);
    void OnFullyRepairedEvent(class URepairableComponent* repaired);
    void OnAllResourcesCollectedEvent(class URepairableComponent* repaired);
    void BP_OnCollectedTreasure(class APlayerCharacter* collector);
    void AfterRepairDelay();
    void ActivateCollection();
};

class ATreasureContainer : public AActor
{
    class USceneComponent* Root;
    class UOncePerPlayerUsableComponent* CollectUsable;
    class UItemAquisitionSource* AquisitionSource;
    TArray<class APlayerCharacter*> Collectors;
    class APlayerCharacter* LastJoiner;
    TArray<FTreasureWeight> PossibleRewarders;
    class UTreasureRewarder* TreasureRewarder;
    bool PreventLatejoiners;

    void TestAwardTreasure();
    void SetPreventFurtherLatejoiners(bool prevent);
    void SetCanCollectTreasure(bool canCollect);
    void OnRep_LastJoiner();
    void OnRep_Collectors();
    void OnPlayerLatejoined(class APlayerCharacter* joiner);
    void OnPlayerCollectedTreasure(class APlayerCharacter* collector, EInputKeys Key);
    void OnLocalPlayerCollectedTreasure(class APlayerCharacter* Player);
    void OnDisableChestLocally();
    void OnContainerActivated();
    bool GetPreventFurtherLatejoiners();
};

class ATutorialManager : public AActor
{
    float MinimumTimeBetweenTutorials;
    bool ResetTutorialsOnStart;
    bool ShowTutorialsDebug;
    TWeakObjectPtr<class AFSDPlayerController> PlayerController;
    TWeakObjectPtr<class APlayerCharacter> PlayerCharacter;
    TWeakObjectPtr<class UFSDSaveGame> SaveGame;
    TArray<TWeakObjectPtr<UTutorialComponent>> Tutorials;
    TWeakObjectPtr<class UTutorialComponent> ActiveTutorial;

};

class AVanityCharacter : public AActor
{
    class UChildActorComponent* ChildActorComponent;
    class UAnimSequenceBase* Animation;
    class USkinColorVanityItem* skinColor;
    class UBeardColorVanityItem* BeardColor;
    class UBeardColorVanityItem* DynamicBeardColor;
    class UHeadVanityItem* Head;
    class UEyeBrowsVanityItem* EyeBrows;
    class USideburnsVanityItem* Sideburns;
    class UMoustacheVanityItem* Moustache;
    class UBeardVanityItem* Beard;
    class UArmorVanityItem* Armor;
    class UArmorMaterialVanityItem* ArmorColor;
    class USkeletalMeshComponent* Mesh;
    class USkeletalMeshComponent* BodyMesh;
    class UBeardColorVanityItem* DefaultHairColor;
    class UMaterialInterface* DefaultArmorMaterial;
    TSubclassOf<class AItem> itemClass;
    class UItemSkin* Framework;
    class UItemSkin* Paintjob;

    void DisplayVanity();
    void Clean();
};

class AVanityTestCharacter : public ACharacter
{
    float ArmorThickness;
    float BeardThickness;
    bool ArmorCoversBeard;
    TMap<class EVanitySlot, class FVanityTestCharacterItem> VanityItems;
    class USkeletalMesh* WeaponMesh;

    void SetupVanity();
};

class AWallSaw : public AActor
{
    class UCapsuleComponent* HitCapsule;
    float SpeedCof;
    class UCurveFloat* VelOverTime;
    class UParticleSystemComponent* GroundParticles;
    FFakeSawMover FakeMover;
    FSawFakeMoveState PosVel;
    float PopWeakpointRadius;
    float PlayerHitRangeFromCenter;

    void UpdateCheckForWeakpoints();
    void SetMovementDirection(FVector Direction);
    void PushEnemyAndCheckForWeakpoint(class AActor* Actor);
    void OnRep_PosVel(const FSawFakeMoveState& PosVel);
    void OnDurationEnd();
    void Initialize(FVector Direction);
    bool HasJustHit(class AActor* enemy);
    void GrazeOverlapCallback(class AActor* Actor, class UPrimitiveComponent* prim);
    void All_Initialize(const FTransform& Transform, const FVector& Direction);
};

class AWoodLouse : public AEnemyDeepPathfinderCharacter
{
    class USceneComponent* RollingCenter;
    class UPawnSensingComponent* PawnSensing;
    EWoodLouseState forceState;
    float RollingCenterOffsetOnStanding;
    float RollingCenterOffsetOnFold;
    float ChanceToWalk;
    bool DebugAngle;
    class UFakeMoverSettings* FakeMoverSettings;
    TSubclassOf<class AProjectile> BurstProjectileClass;
    float BurstTime;
    TArray<class TSubclassOf<UStatusEffect>> StatusEffectsOnRoll;
    FBumpPlayerHit LastHit;
    float TiltModifier;
    float BurstXOffset;
    float BurstYOffset;
    float BurstZOffset;
    float HighDifficultyCustomProjectileGravity;
    int32 BurstCount;
    bool InvounerableOnRoll;
    bool LockToRollMode;
    bool LockToWalkMode;
    float ForgetRange;
    float ForgetTime;
    float RefreshTimeMax;
    float RefreshTimeMin;
    float BumpPower;
    float DirectionalBumpPower;
    EWoodLouseState CurrentState;
    class AActor* CurrentTarget;
    float FoldedStateMaxTime;
    float FoldedStateMinTime;
    float UnfoldedStateMaxTime;
    float UnflodedStateMinTime;
    class USoundBase* BumpSound;
    float TimeBetweenBumpingSamePlayer;
    float MinBumpDamage;
    float MaxBumpDamage;
    float BumpDamage;
    class UDamageClass* BumpDamageType;
    float MaxBumpPower;
    float BumpRange;
    float AcceptableAngles;
    float RollSpeedModifier;
    float RollAlpha;
    float TiltAlpha;
    class USoundBase* RollingSound;
    FName RollingSpeedParamName;
    TWeakObjectPtr<class UAudioComponent> RollingSoundComponent;
    class UFakeMoverSettings* RollMoveSettings;
    class UFakeMoverSettings* StopRollMoveSettings;
    FGameplayTagQuery TargetQuery;
    bool RotateTowardsTarget;
    float SeeTargetSafetyTime;
    bool WantsToStandUp;
    bool IsShooting;
    bool CanStandOnAnySurface;

    void SwitchedState(EWoodLouseState CurrentState);
    void StopSpecial();
    void StartSpecial();
    void SetWantsToStandUp(bool aWantsToStandUp);
    void SetState(EWoodLouseState aState);
    void SetRotateToTarget(bool aRotateToTarget);
    void SeePawn(class APawn* aSenPawn);
    void OnRep_State();
    void OnRep_LastHit();
    EWoodLouseState GetRollerState();
    void BumpedTarget();
};

class AWormPod : public ATaggedActor
{
    class USceneComponent* Root;
    class USceneComponent* ScalePoint;
    class USkeletalMeshComponent* PodMesh;
    class USimpleHealthComponent* Health;
    FWormPodOnWormSpawned OnWormSpawned;
    void WormSpawnDelegate(class AActor* spawned);
    bool Grown;
    class UAnimMontage* GrowthAnimation;
    class UAnimMontage* PopAnimation;
    TSubclassOf<class AActor> CarcasActor;
    FRuntimeFloatCurve GrowthCurve;
    class UEnemyDescriptor* WormDescriptor;
    class UFXSystemAsset* PopParticles;
    class UFXSystemAsset* deathParticles;
    class USoundCue* PopSound;
    class USoundCue* deathSound;
    float ParentDeathDelay;
    float DeathDelayVariance;
    int32 WormCount;

    void SpawnWorms();
    void OnRep_Grown();
    void OnParentDeath(class UHealthComponentBase* ParentHealth);
    void OnDeath(class UHealthComponentBase* aHealth);
    void OnAnimEnded(class UAnimMontage* Montage, bool bInterrupted);
    void Kill();
    void All_ShowDeath(bool success);
};

class AZipLineConnector : public AActor
{
    TWeakObjectPtr<class APlayerCharacter> Character;
    FVector ZipLineLocation;
    FVector ZipLineDirection;
    FRotator RotationOffset;
    bool bSpeeding;

    void ReceiveUpdateZipLinePoint(const FVector& WorldLocation, const FVector& Directioy, bool Speeding);
    void ReceiveDisconnected();
    void ReceiveConnected(const FVector& WorldLocation, const FVector& Direction);
};

class AZipLineItem : public AAmmoDrivenWeapon
{
    float MaxDistance;
    float MinDistance;
    float MinAngle;
    float MaxAngle;
    FGameplayTagQuery ExcludeSurfaceTags;

    bool CanFireWeapon(FText& FailMsg, class UDialogDataAsset*& FailShout);
};

class AZipLineProjectile : public AActor
{
    class UTimelineComponent* Timeline;
    float LightIntensity;
    float MaterialGlow;
    FZipLineProjectileCallback Callback;
    void OnTimelineFloat(float Output);
    class UCurveFloat* LightCurve;
    TArray<class UPointLightComponent*> PointLights;
    TArray<class UMaterialInstanceDynamic*> MaterialInstances;
    TSubclassOf<class UStatusEffect> OnUseStatusEffect;
    TSubclassOf<class UStatusEffect> OnReleaseStatusEffect;

    void OnTimelineTick(float NewValue);
    void OnShoot(FVector Origin, FVector EndLocation);
};

class IActorTrackingCheatInterface : public IInterface
{
};

class IAquisitionable : public IInterface
{
};

class IAsyncPathRequestsInterface : public IInterface
{
};

class IAttackingPointInterface : public IInterface
{
};

class IBossFightInterface : public IInterface
{

    bool IsStillValid();
    TSubclassOf<class UBossFightWidget> GetWidgetClass();
    class AActor* GetBossActor();
};

class ICopyBoneVisibilityCompleted : public IInterface
{

    void CopyBoneVisibilityCompleted(int32 BoneIndex);
};

class ICraftable : public IInterface
{

    void PreviewItem(class AFSDPlayerState* PlayerState, bool Show);
    bool IsOwned(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    TArray<FCraftingCost> GetResourceCost();
    int32 GetRequiredPlayerRank();
    FCraftingCost GetFashioniteCost();
    int32 GetCraftingCreditsCost();
    FText GetCraftableName();
    FText GetCraftableDescription();
    void CraftItemWithFashionite(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    void CraftItem(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    bool CanCraftWithFashionite(class UObject* WorldContextObject);
    bool CanCraft(class UObject* WorldContextObject);
};

class ICustomItemPlacementHandling : public IInterface
{
};

class IEnemyAttacker : public IInterface
{

    float GetAttackDamageModifier();
};

class IEventParticipant : public IInterface
{

    bool SetupEvent(class AGameEvent* GameEvent);
    void OnEventTriggered();
    void OnEventProgress(float Progress);
    void OnEventOpened();
    void OnEventFinished(bool eventSuccess);
    bool AdvanceOneObjective();
    bool AddEventProgress(float Progress);
};

class IFootStepNotifyTarget : public IInterface
{
};

class IHealth : public IInterface
{

    bool IsDead();
    bool IsAlive();
    class AActor* GetOwner();
    float GetMaxHealth();
    EHealthbarType GetHealthbarType();
    float GetHealth();
};

class IIconGeneratable : public IInterface
{
};

class IInputCompatible : public IInterface
{
};

class IItemIDInterface : public IInterface
{
};

class ILoadoutItem : public IInterface
{

    TSubclassOf<class AItem> GetLoadoutItemClass();
};

class IMinersManualHandler : public IInterface
{

    void OpenMinersManualPage(EMinersManualSinglePage page);
    void OpenMinersManualFromID(EMinersManualSection Section, const FGuid& ID);
};

class IMissionModeManager : public IInterface
{

    void StartDive();
    void ReInitialize();
    bool IsLastStage();
    bool IsActive();
    int32 GetStage();
    void GetPerObjectiveXP(int32& perPrimary, int32& perSecondary);
    int32 GetNumberOfStages();
    TSoftClassPtr<UWidget> GetMissionModeCheatUI();
    TSoftClassPtr<UUserWidget> GetMissionCompleteScreen(bool missionSuccessful);
    TSoftClassPtr<UUserWidget> GetMissionBarWidget();
    float GetHazardBonus(class UObject* WorldContextObject, class UGeneratedMission* mission);
    class UGeneratedMission* GetActiveMission();
    FText GetActiveDiveName();
    bool CompleteCurrentSingleMission();
    bool AreAllSelectedClassesQualified();
};

class IMultiTargeter : public IInterface
{
};

class INetMontageAble : public IInterface
{

    float QueueMontage(class UAnimMontage* Montage);
    class USkeletalMeshComponent* GetSkeletalMesh();
    class UAnimInstance* GetAnimInstance();
};

class INotifyMessageReceiver : public IInterface
{

    bool OnNotifyMessageReceived(FName TriggerName);
};

class IPickaxePartEquip : public IInterface
{
};

class IPlaceableInterface : public IInterface
{
};

class IPlagueCleaning : public IInterface
{

    class UInfectionPointCleaningComponent* GetCleaningPoints(FVector fromLocation);
};

class IPlaySoundInterface : public IInterface
{
};

class IProjectileSpawner : public IInterface
{
};

class IRefundableInterface : public ISaveGameIDInterface
{
};

class IRejoinListener : public IInterface
{
};

class ISaveGameIDInterface : public IInterface
{
};

class ISchematicBankInterface : public IInterface
{
};

class ISkinnable : public IInterface
{
};

class ISoftReferenceProvider : public IInterface
{
};

class ISpawnReleasedActor : public IInterface
{

    bool OnSpawnRelease_Released();
    bool OnSpawnRelease_Attached(class AActor* Parent);
};

class IStatusAddedComponent : public IInterface
{
};

class ISteerable : public IInterface
{
};

class ITargetable : public IInterface
{

    void ShowDamageEffects(class UParticleSystem* Particles, FVector Location, FRotator Orientation);
    class UHealthComponentBase* GetTargetHealthComponent();
    FVector GetTargetCenterMass();
    bool GetIsTargetable();
};

class ITerrainDetectInterface : public IInterface
{
};

class IThrowable : public IInterface
{
};

class ITriggerAI : public IInterface
{

    bool OnTriggerAI(FName TriggerName);
    void OnMessageAI(FName TriggerName);
};

class IUpgradable : public IInterface
{

    void Upgraded(const TArray<class UItemUpgrade*>& upgrades);
};

class IUpgradableGear : public IInterface
{

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
};

class IVacuumable : public IInterface
{
};

class IWeaponFireOwner : public IInterface
{

    class APlayerCharacter* GetPlayerCharacter();
    FQuat GetMuzzleQuat();
    FVector GetMuzzleLocation();
    bool GetIsLocallyControlled();
    bool GetIsFirstPerson();
};

class UAIFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetAICanSense(bool canSense);
    int32 MakeEnemiesFleeFromArea(class UObject* WorldContextObject, const FVector& Center, float Radius, int32 maxEnemiesAffected);
    void MakeEnemiesBackOutOfArea(class UObject* WorldContextObject, const FVector& Center, float Radius);
    bool IsEnemyAlertet(class APawn* enemy);
    class APlayerCharacter* GetPlayerTarget(class AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, class AActor* ignoreTarget, bool IsFlying);
    bool GetAttackableTargetsInRange(class AActor* From, TArray<class UAttackerPositioningComponent*>& outArray, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, class AActor* ignoreTarget, bool IsFlying);
    class UAttackerPositioningComponent* GetAttackableTarget(class AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, class AActor* ignoreTarget, bool IsFlying);
    class APlayerCharacter* ConsiderChangingTarget(class APlayerCharacter* CurrentTarget, class AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool CurrentTargetMustBeAlive, bool IsFlying);
    void AlertEnemy(class APawn* enemy);
    void AlertEnemiesInRange(class UObject* WorldContextObject, FVector Origin, float range, class APawn* alerter);
};

class UAIPlayerControlComponent : public UActorComponent
{
    FRotator AngularAcceleration;
    FRotator AngularDampening;
    FRotator MaxAngularVelocity;
    FRotator MaxRotation;
    float SpeedTarget;
    float SpeedMin;
    float SpeedMax;
    float AccelerationBase;
    float AccelerationMultiplier;
    float DecelerationMultiplier;
    float AccelerationOnSlopeMultiplier;
    float DecelerationOnSlopeMultiplier;
    float InitialConnectionBlendTime;
    class UAnimMontage* GetOnMontageAI;
    class UAnimMontage* GetOnMontagePlayer;
    class UAnimMontage* LetGoMontageAI;
    class UAnimMontage* LetGoMontagePlayer;
    class UDialogDataAsset* GetOnShout;
    class UDialogDataAsset* LetGoShout;
    class UControlEnemyUsable* Usable;

};

class UAbilityExitStrategy : public UObject
{
};

class UAcceptInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase
{
    FAcceptInviteBlueprintCallProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FAcceptInviteBlueprintCallProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();
    class UObject* WorldContextObject;

    class UAcceptInviteBlueprintCallProxy* AcceptInvite(class UObject* WorldContextObject, FString ListName, FString UserId);
};

class UAchievementList : public UDataAsset
{
    class UFSDAchievement* WeakspotAchievement;
    class UFSDAchievement* MissionTimeAchievement;
    class UFSDAchievement* MissionHosterAchievement;
    class UFSDAchievement* RollerCoasterAchievement;
    class UFSDAchievement* DrillByShootingAchievement;
    class UFSDAchievement* BarrelKickerAchievement;
    class UFSDAchievement* Hazard3CompletedAchievement;
    class UFSDAchievement* Hazard3StreakAchievement;
    class UFSDAchievement* Hazard4CompletedAchievement;
    class UFSDAchievement* Hazard4StreakAchievement;
    class UFSDAchievement* Hazard5CompletedAchievement;
    class UFSDAchievement* Hazard5StreakAchievement;
    class UFSDAchievement* Hazard3NoKillNoSupplyAchievement;
    class UFSDAchievement* Hazard4NoKillNoSupplyAchievement;
    class UFSDAchievement* Hazard5NoKillNoSupplyAchievement;
    class UFSDAchievement* PlayedWithLowerRankAchievement;
    class UFSDAchievement* MilestoneAchievementPerfMatters;
    class UFSDAchievement* MilestoneAchievement;
    class UFSDAchievement* OwnedPerkAchievement;
    class UFSDAchievement* MovingOnUpAchievement;
    class UFSDAchievement* CorporateClimberAchievement;
    class UFSDAchievement* HatTrickAchievement;
    class UFSDAchievement* FullTeamAchievement;
    class UFSDAchievement* SilverTierEmployeeAchievement;
    class UFSDAchievement* ProTeamAchievement;
    class UFSDAchievement* GoldTierEmployeeAchievement;
    class UFSDAchievement* LegendaryTeamAchievement;
    class UFSDAchievement* AllVanityEquippedAchievement;
    class UFSDAchievement* MoustacheBuyerAchievement;
    class UFSDAchievement* MutatorAchievement;
    class UFSDAchievement* StateOfTheArtAchievement;
    class UFSDAchievement* ExploringMyOptionsAchievement;
    class UFSDAchievement* AdvancedRoboticsAchievement;
    class UFSDAchievement* WithoutAPaddleAchievement;
    class UFSDAchievement* FirstMissionCompleted;
    class UFSDAchievement* HundredMissionsCompleted;
    class UFSDAchievement* TenSoloMissionsCompleted;
    class UFSDAchievement* SupplyPodsCalledStat;
    class UFSDAchievement* LootbugsKilledStat;
    class UFSDAchievement* PraetoriansKilledStat;
    class UFSDAchievement* NormalDeepDiveCompleted;
    class UFSDAchievement* EliteDeepDiveCompleted;
    class UFSDAchievement* DeepDiveCompletedUnderTime;
    class UFSDAchievement* DeepDivesCompleted;
    TArray<class UFSDAchievement*> AllAchievements;
    TSoftClassPtr<AActor> BarrelClass;

};

class UActivationOjective : public UObjective
{
    int32 ObjectivesFound;
    int32 ObjectivesToFind;

    void OnRep_ObjectivesToFind(int32 prevAmount);
    void OnRep_ObjectivesFound(int32 prevAmount);
};

class UActivityCardReward : public UReward
{
    class UGameActivityType* Activity;

};

class UActivitySubSystem : public UGameInstanceSubsystem
{

    void StartActivity(const class APlayerState* PlayerState, const class UGameActivityType* Activity);
    void ShowPlayerReviewUI(bool ReviewActiveMatch);
    bool PlayerReviewUIAvailable(bool ReviewActiveMatch);
    void EndActivity(const class APlayerState* PlayerState, const class UGameActivityType* Activity);
};

class UActorContextWidget : public UUserWidget
{
    class AActor* ContextActor;
    class UPrimitiveComponent* ContextPrimitive;

    void Update(class UPrimitiveComponent* InContextPrimitive);
    void Show(class UPrimitiveComponent* InContextPrimitive);
    void ReceiveUpdate(class UPrimitiveComponent* InContextPrimitive);
    void ReceiveShow(class UPrimitiveComponent* InContextPrimitive);
    void ReceiveContextActorChanged(class AActor* InContextActor);
};

class UActorFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UnlockSpecificCharacters(TArray<class APlayerCharacter*> Characters, ECharacterState UnlockIf, ECharacterState UnlockTo);
    void UnlockCharacters(class UObject* WorldContextObject);
    float TimeSince(class UObject* WorldContextObject, float Time);
    void SetScalarParameters(FName ParameterName, float Value, const TArray<class UMaterialInstanceDynamic*>& Materials);
    void PlayCueOnClient(class APlayerController* Target, class USoundCue* cue);
    void PlayCueOnAll(class UObject* WorldContextObject, class USoundCue* cue);
    float PingPong(float Time, float Length, bool normalize);
    float MoveTowards(float Current, float End, float step);
    void LockSpecificCharactersIfState(TArray<class APlayerCharacter*> Characters, ECharacterState stateToLock);
    void LockSpecificCharacters(TArray<class APlayerCharacter*> Characters);
    bool LockSpecificCharacterIfState(class APlayerCharacter* Character, ECharacterState LockIf, ECharacterState LockTo);
    void LockCharacters(class UObject* WorldContextObject);
    TSubclassOf<class UWindowWidget> LoadWindowWidgetClass(TSoftClassPtr<UWindowWidget> WidgetClass);
    TSubclassOf<class UUserWidget> LoadWidgetClass(TSoftClassPtr<UUserWidget> WidgetClass);
    UClass* LoadClass(TSoftClassPtr<UObject> softReference);
    void KillActorWithEffects(class AActor* Actor, class USceneComponent* visualsToHide, class USoundCue* deathSound, class UFXSystemAsset* deathParticles, float particleScale, class UPathfinderCollisionComponent* pathColliderToDisable);
    bool IsWeakPoint(class UFSDPhysicalMaterial* Material);
    bool IsSingleplayer(class UObject* WorldContextObject);
    bool IsInRangeOfLocalPlayer(class AActor* toActor, float MinDistance, float MaxDistance);
    bool IsCloseToLocalPlayer(class AActor* toActor, float Distance);
    int32 GetTotalHeroLevels(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    FGuid GetSaveGameIDFromCharacterID(class UPlayerCharacterID* characterID);
    FGuid GetSavegameID(UClass* objectClass);
    TArray<class APlayerCharacter*> GetPlayersInRange(class UObject* WorldContextObject, const FVector& Origin, float Radius, bool MustBeAlive);
    class UItemID* GetItemID(TSubclassOf<class AActor> itemClass);
    float GetHeroXP(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    FText GetHeroSwitchToMessage(TSubclassOf<class APlayerCharacter> playerClass);
    FString GetHeroSourceName(TSubclassOf<class APlayerCharacter> playerClass);
    float GetHeroProgress(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    FText GetHeroName(TSubclassOf<class APlayerCharacter> playerClass);
    int32 GetHeroLevel(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    class UInventoryList* GetHeroInventoryList(class UPlayerCharacterID* characterID);
    FHeroInfo GetHeroInfo(TSubclassOf<class APlayerCharacter> playerClass);
    class UTexture2D* GetHeroImageSmall(TSubclassOf<class APlayerCharacter> playerClass);
    class UTexture2D* GetHeroImageFullSize(TSubclassOf<class APlayerCharacter> playerClass);
    class UTexture2D* GetHeroImage(TSubclassOf<class APlayerCharacter> playerClass);
    FLinearColor GetHeroColor(TSubclassOf<class APlayerCharacter> playerClass);
    class UActorComponent* GetComponentFromClass(TSubclassOf<class AActor> Actor, TSubclassOf<class UActorComponent> ComponentClass);
    class UActorComponent* GetComponentByClass(class AActor* Actor, TSubclassOf<class UActorComponent> ComponentClass);
    class UPlayerCharacterID* GetCharacterIDFromCharacter(class APlayerCharacter* Character);
    class UPlayerCharacterID* GetCharacterID(TSubclassOf<class APlayerCharacter> playerClass);
    TArray<class APlayerCharacter*> GetAllPlayerCharacters(class UObject* WorldContext);
    FVector GetActorTargetCenter(class AActor* TargetActor);
    void FSDRemoveBlendable(class UPostProcessComponent* PostProcessComponent, TScriptInterface<class IBlendableInterface> InBlendableObject);
    void FSDRemoveAllWidgets(class UObject* WorldContextObject);
    void FSDDumpCallStack(FString Msg);
    class APlayerCharacter* FindNearestPlayerCharacter(class UObject* WorldContextObject, FVector fromLocation, float MaxRadius, bool MustBeAlive, bool MustBeUnparalyzed, bool MustHaveLineOfSight);
    FVector FindLatejoinDroppodLocation(class AFSDGameMode* GameMode);
    class AActor* FindClosestEnemyFromLocation(const FVector& fromLocation, float range, bool LineOfSightCheck, class UObject* WorldContextObject, const TArray<class AActor*>& IgnoredActors, const FVector& Offset, bool onlyTargetable);
    class AActor* FindClosestEnemyFromActorWithSkipChance(class AActor* FromActor, float range, float SkipChance, bool LineOfSightCheck, const FGameplayTagQuery& tagQuery, FVector Offset);
    class AActor* FindClosestEnemyFromActor(class AActor* FromActor, float range, bool LineOfSightCheck, const FGameplayTagQuery& tagQuery, const FVector& Offset);
    FVector FindCharacterTeleportLocation(class UObject* WorldContextObject, const FVector& closeToLocation, float desiredDistance);
    void FadeMaterials(const class UObject* WorldContextObject, const class UMeshComponent*& Mesh, float Duration);
    float EvaluateRuntimeCurve(class UObject* WorldContextObject, const FRuntimeFloatCurve& Curve, float Time);
    void DissolveMaterials(const class UObject* WorldContextObject, const class UMeshComponent*& Mesh, float Duration);
    TArray<class UMaterialInstanceDynamic*> CreateDynamicMaterialInstances(class UMeshComponent* Mesh);
    float AddHeroXP(class UObject* WorldContextObject, class UPlayerCharacterID* characterID, float Amount);
    void AddEnemyKill(class APlayerCharacter* Instigator, class UEnemyComponent* EnemyComponent, class AFSDGameState* GameState);
    bool ActorMatchesTagQuery(const FGameplayTagQuery& Query, const class AActor* InActor);
};

class UActorStateComponent : public UActorComponent
{
    FActorStateComponentOnBeginState OnBeginState;
    void StateDelegate(class UActorStateComponent* State);
    FActorStateComponentOnTickState OnTickState;
    void StateTickDelegate(class UActorStateComponent* State, float DeltaTime);
    FActorStateComponentOnEndState OnEndState;
    void StateDelegate(class UActorStateComponent* State);
    class UActorStateComponent* CurrentState;
    class UActorStateComponent* NextState;
    class UActorStateComponent* MasterState;
    float StateActiveTime;

    void OnRep_CurrentState(class UActorStateComponent* previousState);
    bool IsStateActive();
    void GotoState();
};

class UActorTrackingComponent : public USceneComponent
{
    TSubclassOf<class UActorTrackingWidget> WidgetType;
    bool VisibleOnHoldTAB;
    bool VisibleFromStart;
    bool bIconHidden;
    TWeakObjectPtr<class UActorTrackingWidget> Widget;

    void ToggleIcon(bool Visible);
    void ShowAlwaysOn();
    void OnHoldTAB(bool IsDown);
    bool IsIconVisible();
};

class UActorTrackingSubsystem : public UWorldSubsystem
{
};

class UActorTrackingWidget : public UFSDUserWidget
{
    TWeakObjectPtr<class USceneComponent> TargetComponent;
    float WorldHeightOffset;
    float ScaleBy;
    FMargin ScreenMargin;
    int32 WidgetZOrder;
    bool bTrackCenterOfMass;
    bool bHideWhenPlayerNearby;
    bool bHideWhenPlayerFarAway;
    float LastTargetDistanceUpdate;

    void SetTargetComponent(class USceneComponent* Component);
    void SetTarget(class AActor* Actor);
    void OnTargetSet(class AActor* NewTarget);
    void OnTargetDistanceChanged(float Distance);
    void OnShow();
    void OnInViewChanged(bool inView, float Angle);
    class AActor* GetTarget();
    FVector2D GetRenderTranslation();
    bool FindScreenPosition(class APlayerController* PlayerController, FVector WorldLocation, FMargin Margin, FVector& ScreenCord, float& Angle);
    class UActorTrackingWidget* CreateTrackingWidget(class APlayerController* PlayerController, TSubclassOf<class UActorTrackingWidget> WidgetType, class USceneComponent* TargetComponent);
};

class UAddComponentStatusEffectItem : public UStatusEffectItem
{
    TSubclassOf<class UActorComponent> ComponentClass;
    TWeakObjectPtr<class UActorComponent> AddedComponent;

};

class UAddComponentUpgrade : public UItemUpgrade
{
    TSubclassOf<class UActorComponent> ComponentClass;
    bool ServerOnly;

    bool GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, TSubclassOf<class UActorComponent> ComponentClass, bool includePreview);
};

class UAdventureObjective : public UObjective
{
};

class UAfflictionEffect : public UObject
{

    bool ShouldInstantiate();
    void ReceiveEndEffect(class UPawnAfflictionComponent* Target);
    void ReceiveBeginEffect(class UPawnAfflictionComponent* Target);
};

class UAfflictionFunctionLibrary : public UBlueprintFunctionLibrary
{

    void PlayEnemyExplosionEffects(class AFSDPawn* enemy);
};

class UAfflictionSettings : public UDataAsset
{
    FScaledMeshAfflictionTypeItem FrozenScaledMeshAffliction;
    FScaledMeshAfflictionTypeItem InfectedScaledMeshAffliction;
    class USoundCue* BurningSound;
    class USoundCue* EletrocutedSound;
    float HeavyStaggerMinTime;
    float MediumStaggerMinTime;
    class UPawnAffliction* HeavyStaggerAffliction;
    class UPawnAffliction* MediumStaggerAffliction;
    class UPawnAffliction* ShortStaggerAffliction;
    class UPawnAffliction* EliteAffliction;
    TArray<class UFXSystemAsset*> BurningParticles;
    TArray<class UFXSystemAsset*> EletrocutedParticles;
    TArray<class UFXSystemAsset*> ExplodingParticles;
    TArray<class USoundCue*> ExplodingSounds;

};

class UAlignEnemyComponent : public UActorComponent
{
    bool RotateWhileStationary;
    bool IncludePitch;

    void SetRotateWhileStationary(bool Value);
    void OnRep_RotateWhileStationary();
};

class UAllPiercingHitscanComponent : public UHitscanComponent
{
    float PiercingDepth;
    int32 TracePartitions;

};

class UAlwaysLockedDLC : public UDLCBase
{
};

class UAmberEventEnemyPool : public UEnemyGroupDescriptor
{
    float MaxTimeBetweenSpawn;
    float MinTimeBetweenSpawn;
    int32 MaxEnemyCap;
    int32 AmbersNeededdToComplete;
    int32 AmbersNeededOnePlayer;

};

class UAmmoCountWidget : public UUserWidget
{
    class APlayerCharacter* Character;
    class AItem* Item;
    class UItemAggregator* Aggregator;
    bool ShowClipAndTotalAsOne;
    int32 CountThreshold;

    void OnVisibleChanged(bool Visible, bool showClipCount);
    void OnTotalVisibleChanged(bool Visible);
    void OnTotalChanged(int32 Total);
    void OnItemTotalChanged(int32 Value);
    void OnItemEquipped(class AItem* NewItem);
    void OnItemAmountChanged(int32 Value);
    void OnAmountChanged(int32 Count);
    void DoItemEquipped();
};

class UAmmoDriveWeaponAggregator : public UClipBasedItemAggregator
{
    class AAmmoDrivenWeapon* Weapon;

};

class UAmmoDrivenWeaponAnimInstance : public UAnimInstance
{
    class AAmmoDrivenWeapon* Weapon;
    bool IsFiring;
    float ClipFullPercentage;
    bool overHeated;
    float Temperature;

    bool IsFull();
    bool isEmpty();
};

class UAmmoDrivenWeaponUpgrade : public UStandardItemUpgrade
{
    EAmmoDrivenWeapnUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType upgradeType);
};

class UAmmoLeftDamageBonus : public UFlatDamageBonus
{
    class UCurveFloat* AmmoDamageCurve;

};

class UAmmoUsedDamageBonus : public UDamageBonusBase
{
    float DamageBonusPerRoundFired;

};

class UAnchorTurnerAnimInstance : public UAnimInstance
{
    float ModuleRotation;
    float Percent;
    float TurnSpeed;
    bool IsFinished;

};

class UAndDLC : public UDLCBase
{
    TArray<class UDLCBase*> DLCs;

};

class UAngleIndicatorWidget : public UFSDUserWidget
{
    float pixelsPerAngle;
    float AlphaFade;
    float MinAngle;
    float MaxAngle;

};

class UAnimNotifyState_ConstrainItem : public UAnimNotifyState
{
    FName OldConstraint;
    FName NewConstraint;

};

class UAnimNotifyState_EnemyPlaySoundByKey : public UAnimNotifyState
{
    class UEnemyPlaySoundKey* SoundKey;
    float FadeOut;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;

};

class UAnimNotifyState_FSDTimedNiagaraEffect : public UAnimNotifyState
{
    class UNiagaraSystem* Template;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
    bool IsFirstPerson;
    bool bDestroyAtEnd;

};

class UAnimNotifyState_HideBone : public UAnimNotifyState
{
    FName BoneName;

};

class UAnimNotifyState_HideEquippedItem : public UAnimNotifyState
{
};

class UAnimNotifyState_InputWindow : public UAnimNotifyState
{
};

class UAnimNotifyState_OverrideItemOffset : public UAnimNotifyState
{
    FVector CameraOffset;

};

class UAnimNotifyState_PlaySound : public UAnimNotifyState
{
    class USoundCue* Sound;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;

};

class UAnimNotifyState_Salute : public UAnimNotifyState
{
    FName BoneName;
    bool FirstPerson;

};

class UAnimNotifyState_SoundMix : public UAnimNotifyState
{
    class USoundMix* SoundMix;
    float MaxDistance;

};

class UAnimNotifyState_SpawnAndReleaseActor : public UAnimNotifyState
{
    TSubclassOf<class AActor> Actor;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
    bool ManualDetach;

};

class UAnimNotifyState_SpawnMesh : public UAnimNotifyState
{
    class UStaticMesh* Mesh;
    bool HasOverrideMaterial;
    class UMaterialInstance* OverrideMaterial;
    int32 OverrideMaterialSlot;
    bool UseFirstPersonComponent;
    FName SocketName;
    FVector ScaleOverride;
    FVector LocationOffset;
    FRotator RotationOffset;

};

class UAnimNotifyState_SpawnSkeletalMesh : public UAnimNotifyState
{
    class USkeletalMesh* Mesh;
    class UAnimSequenceBase* AnimationToPlay;
    bool UseFirstPersonComponent;
    FName SocketName;
    FVector ScaleOverride;
    FVector LocationOffset;
    FRotator RotationOffset;

};

class UAnimNotifyState_SpawnSkinnedMesh : public UAnimNotifyState
{
    EItemCategory ItemCategory;
    bool UseFirstPersonComponent;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;

};

class UAnimNotifyState_TimedParticleEffectWithImpactDecals : public UAnimNotifyState_TimedParticleEffect
{
    class UMaterialInterface* DecalMaterial;
    float DecalSize;
    float FadeStartDelay;
    float FadeDuration;

    void OnParticleCollision(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, class UPhysicalMaterial* PhysMat);
};

class UAnimNotifyState_WeaponReload : public UAnimNotifyState
{
};

class UAnimNotify_CameraShake : public UAnimNotify
{
    float InnerRadius;
    float OuterRadius;
    bool ControllerOnly;
    TSubclassOf<class UCameraShakeBase> CameraShake;

};

class UAnimNotify_CopyBoneVisibility : public UAnimNotify
{
    FName SourceBoneName;
    TArray<FName> TargetBoneNames;
    bool HideSourceBone;

};

class UAnimNotify_CycleItemComplete : public UAnimNotify
{
};

class UAnimNotify_FSDPlayParticleEffect : public UAnimNotify
{
    class UFXSystemAsset* PSTemplate;
    FVector LocationOffset;
    FRotator RotationOffset;
    bool AlwaysZUp;
    FVector Scale;
    uint8 Attached;
    FName SocketName;
    bool IsFirstPerson;
    bool UseTerainMaterial;

};

class UAnimNotify_FootStep : public UAnimNotify
{
    bool IsLeft;

};

class UAnimNotify_HideBone : public UAnimNotify
{
    FName BoneName;

};

class UAnimNotify_HideBones : public UAnimNotify
{
    TArray<FName> TargetBoneNames;

};

class UAnimNotify_MessageOwner : public UAnimNotify
{
    FName Message;

};

class UAnimNotify_PlaySound2D : public UAnimNotify
{
    class USoundBase* Sound;
    float VolumeMultiplier;
    float PitchMultiplier;

};

class UAnimNotify_PushSoundMix : public UAnimNotify
{
    class USoundMix* SoundMix;
    float MaxDistance;

};

class UAnimNotify_Shout : public UAnimNotify
{
    class UDialogDataAsset* Shout;
    bool ShoutNetworked;
    float LocalShoutVolumeMultiplier;

};

class UAnimNotify_SpawnActor : public UAnimNotify
{
    TSubclassOf<class AActor> Actor;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;

};

class UAnimNotify_TerrainFootStep : public UAnimNotify
{
    class UParticleSystem* ParticleTemplate;
    FName BoneName;

};

class UAnimNotify_UnHideBone : public UAnimNotify
{
    FName BoneName;

};

class UAnimatedItemParticleAfflictionEffect : public UAfflictionEffect
{
    EItemCategory ItemCategory;
    class UParticleSystem* ParticleEffect;
    FName Socket;

};

class UAnimatedObjectAfflictionComponent : public UPawnAfflictionComponent
{
    class USkeletalMeshComponent* Mesh;

};

class UAnyRetiredCampaignRequirement : public UCampaignRequirement
{
};

class UAquireTargetTask : public ULineSpikeTaskBase
{
    bool ForceNewTarget;

};

class UAreaSpawnerComponent : public UActorComponent
{
    TSubclassOf<class AActor> ActorToSpawn;
    DeepPathFinderSize PathfinderSize;
    float ChanceToSpawn;

    void SpawnInArea(const FVector& Origin, float Radius, float maxVerticalDistance, class APawn* Instigator);
};

class UArmorHealthDamageComponent : public UBaseArmorDamageComponent
{
    FArmorHealthDamageComponentOnArmorPartDestroyedEvent OnArmorPartDestroyedEvent;
    void AmorPartDestroyedDelegate(FName Name);
    FArmorHealthDamageComponentOnArmorPartDamagedEvent OnArmorPartDamagedEvent;
    void ArmorPartDamagedDelegate(FName BoneName, float Damage);
    FArmorHealthDamageComponentOnSocketPartDestroyedEvent OnSocketPartDestroyedEvent;
    void AmorPartDestroyedDelegate(FName Name);
    FArmorHealthDamageComponentOnSocketPartDamagedEvent OnSocketPartDamagedEvent;
    void ArmorPartDamagedDelegate(FName BoneName, float Damage);
    TMap<class FName, class FArmorHealthItem> PhysBoneToArmor;
    FArmorDamageInfo ArmorDamageInfo;
    float RadialSocketDamageMultiplier;
    bool AffectedByAmorBreak;

    bool SetHealthOnBodypartItem(FName BoneName, float newHealth);
    void SetHealthOnAllItems(float newHealth);
    bool SetArmorDamageEnabledOnItem(FName BoneName, bool Enabled);
    void RegrowAllArmor(float baseHealth);
    void PopAllWeakPoints();
    void OnRep_ArmorDamageInfo(FArmorDamageInfo OldValue);
    void DealSocketArmorDamage(float Damage, float armorDamageMultiplier, class UPrimitiveComponent* collider, bool shatter, EArmorDamageType DamageType);
};

class UArmorMaterialVanityItem : public UVanityItem
{
    TSoftObjectPtr<UMaterialInterface> Material;
    class UDynamicIcon* DynamicIcon;
    class UArmorVanityItem* LockedToArmor;
    TArray<class UArmorVanityItem*> BannedArmors;
    TSoftObjectPtr<UMaterialInstance> ClothMaterial;

    class UMaterialInstanceConstant* SetArmorMaterialToTwoSided(class UMaterialInstance* Parent);
    class UMaterialInstanceDynamic* CreateIcon(class UObject* Owner);
    void CreateClothMaterialForAmorVanity(class UArmorMaterialVanityItem* armorVanity);
};

class UArmorStatUpgrade : public UStandardItemUpgrade
{
    class UPawnStat* Stat;

    FUpgradeValues GetUpgradedStatValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> armorClass, class UPawnStat* Stat);
};

class UArmorUpgrade : public UStandardItemUpgrade
{
    EArmorUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> armorClass, EArmorUpgradeType aUpgradeType);
};

class UArmorVanityItem : public UVanityItem
{
    TMap<class EArmorMeshType, class TSoftObjectPtr<USkeletalMesh>> TPArmorMesh;
    TMap<class EArmorMeshType, class TSoftObjectPtr<USkeletalMesh>> FPArmorMesh;
    bool AllowSleevelessUse;
    TSoftClassPtr<UAnimInstance> AnimInstance;
    bool CropBeard;
    float ArmorThickness;
    TSoftObjectPtr<UMaterialInterface> MaterialOverride;
    bool CanOnlyUseDefaultArmorMaterial;
    class UArmorMaterialVanityItem* DefaultArmorMaterial;
    TArray<FTattooArmorItem> Tattoos;

    void SetNewArmorType(class UCharacterVanityComponent* Gear);
    void PreviewArmor(class AFSDPlayerState* PlayerState, bool Show, bool useDefaultArmorMaterial);
    bool HasSleevelessArmorType();
    EArmorMeshType GetFPMeshType();
};

class UAssaultRifleUpgrade : public UStandardItemUpgrade
{
    EAssaultRifleUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EAssaultRifleUpgrade upgradeType);
};

class UAssetLoader : public UGameInstanceSubsystem
{
};

class UAsyncManager : public UGameInstanceSubsystem
{
    TArray<class UObject*> PermanentReferences;

    class UObject* SyncLoadAsset(const TSoftObjectPtr<UObject>& Asset);
    void ReleaseAllHandles();
    UClass* Receive_SyncLoadClass(TSoftClassPtr<UObject> Asset);
    void AsyncLoadSoftObjects(const TArray<TSoftObjectPtr<UObject>>& Items, EAsyncPersistence persistence, const FAsyncLoadSoftObjectsOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority);
    void AsyncLoadSoftObject(const TSoftObjectPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncLoadSoftObjectOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority);
    void AsyncLoadSoftClass(const TSoftClassPtr<UObject> Item, EAsyncPersistence persistence, const FAsyncLoadSoftClassOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority);
    void AsyncLoadAssets(const TArray<FSoftObjectPath>& Items, EAsyncPersistence persistence, const FAsyncLoadAssetsOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority);
    void AsyncLoadAsset(const FSoftObjectPath& Item, EAsyncPersistence persistence, const FAsyncLoadAssetOnLoadComplete& OnLoadComplete, EAsyncLoadPriority Priority);
};

class UAsyncPathRequests : public UActorComponent
{
    TArray<TWeakObjectPtr<UObject>> RequestListeners;

};

class UAttachMeshesAfflictionEffect : public UAfflictionEffect
{
    TArray<FAttachMeshesAfflictionItem> AttachItems;
    class UParticleSystem* OnRemoveEffect;

};

class UAttachedParticlesAfflictionEffect : public UAfflictionEffect
{
    class UFXSystemAsset* ParticleEffect;
    TArray<class UFXSystemAsset*> ParticleEffects;
    EAfflictionSocket Socket;
    bool ScaleToActor;
    bool UseVisibilityHack;
    bool UseBoneFilter;

};

class UAttachedStateComponent : public UCharacterStateComponent
{
    bool DisableHeadLightOnEnter;
    bool EnableHeadLightOnExit;
    float MaxPitch;

};

class UAttackBaseComponent : public UActorComponent
{
    FName AttackName;
    float MaxSurfaceAngle;
    FFloatInterval range;
    float MinRange;
    float MaxRange;

    class UAttackBaseComponent* ReplaceAttackComponent(class UAttackBaseComponent* componentToReplace, TSubclassOf<class UAttackBaseComponent> newComponentClass);
    void ReceiveCompleteAttack();
    void ReceiveAttackTarget(class AActor* Target);
    void ReceiveAbortAttack();
    float GetMinRange();
    float GetMaxRange();
    void CompleteAttack(bool success);
    void AttackTarget(class AActor* Target);
    void AbortAttack();
};

class UAttackCooldownComponent : public UActorComponent
{
    TArray<FAttackCooldown> AttackCooldowns;

    void SetCooldown(const FName& AttackName, float cooldownSeconds);
    bool IsAttackOffCooldown(const FName& AttackName);
    bool IsAnyAttackOffCooldown();
    void AttackUsed(const FName& Name);
};

class UAttackEffect : public UObject
{
};

class UAttackerManagerComponent : public UActorComponent
{
    TArray<class UAttackerPositioningComponent*> Components;

};

class UAttackerPositioningComponent : public UActorComponent
{
    bool DebugPositions;
    int32 MaxAttackers;
    TArray<FAttackerInfo> Attackers;
    TArray<int32> FreePositions;
    TArray<FAttackerInfo> FlyingAttackers;
    TArray<int32> FlyingFreePositions;
    float CharacterPersonalSphere;
    float CharacterHalfHeight;
    float CostModifier;

    void UnregisterAttacker(class AActor* Attacker, bool IsFlying);
    void RegisterAttacker(class AActor* Attacker, bool IsFlying);
    void OnFlyingAttackerDeath(class UHealthComponentBase* HealthComponent);
    void OnAttackerDeath(class UHealthComponentBase* HealthComponent);
    FVector GetFlyingAttackerPosition(class AActor* Attacker, float AttackerRadius);
    FVector GetAttackerPosition(class AActor* Attacker, float AttackerRadius);
};

class UAudioFunctionLibrary : public UBlueprintFunctionLibrary
{

    float SetSoundClassVolume(class USoundClass* SoundClass, float Volume);
    void PushTimedSoundMix(class UObject* contextObject, class USoundMix* mix, float Duration);
    float GetSoundClassVolume(class USoundClass* SoundClass);
};

class UAutoCannonAnimInstance : public UAnimInstance
{
};

class UAutoCannonUpgrade : public UStandardItemUpgrade
{
    EAutoCannonUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EAutoCannonUpgrades upgradeType);
};

class UAutoCarverComponent : public UStaticMeshComponent
{
    class UTerrainMaterialBase* TerrainMaterial;
    float Frequency;
    float ExpensiveNoise;
    float MinDistanceMoved;
    ECarveFilterType Filter;
    FAutoCarverComponentOnCarveDoneEvent OnCarveDoneEvent;
    void CarveDoneDelegate();

    void ForceCarve();
};

class UAutoShotgunUpgrade : public UStandardItemUpgrade
{
    EAutoShotgunUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EAutoShotgunUpgrades upgradeType);
};

class UAvoidCeilingComponent : public UActorComponent
{
    float MaxDuckDistance;
    float TraceVerticalStart;
    float MinVerticalSpace;
    float DuckSpeed;
    class USceneComponent* ComponentToMove;
    bool IsDuckingEnabled;

};

class UBEEMissionTemplate : public USavableDataAsset
{
    int32 MissionCount;
    TArray<class UDifficultySetting*> Difficulties;
    TArray<FBEETemplateItem> missions;
    int32 CreditsPerPrimaryObjective;
    int32 CreditsPerSecondaryObjective;
    int32 XPPerPrimaryObjective;
    int32 XPPerSecondaryObjective;
    float HazardBonus;
    FRandInterval MutatorCount;
    FRandInterval WarningCount;

    bool IsDurationAllowed(class UMissionTemplate* mission, class UMissionDuration* Duration);
    bool IsComplexityAllowed(class UMissionTemplate* mission, class UMissionComplexity* Complexity);
};

class UBEESettings : public UDataAsset
{
    class UBEEMissionTemplate* MissionTemplate;
    TArray<class UMutator*> BaseMutators;
    TArray<class UMissionMutator*> Mutators;
    TArray<class UMissionWarning*> Warnings;
    TArray<class UDialogDataAsset*> BEEMissionCompleteShouts;
    TArray<FBEELoaderSequence> LoaderSequnces;
    class UMissionNameBank* DeepDiveNameBank;
    TSoftClassPtr<UUserWidget> MissionBar;
    TSoftClassPtr<UUserWidget> MissionEndScreen;

};

class UBPInstantUsable : public UInstantUsable
{

    bool BPCanUse(class APlayerCharacter* User, class USceneComponent* useCollider);
};

class UBTDecorator_AttackInRange : public UBTDecorator_BlackboardBase
{
    FName AttackName;

};

class UBTDecorator_CanSeeTarget : public UBTDecorator
{
    bool UseAsync;
    bool DebugDraw;
    float MaxRange;
    float Interval;
    FVector EyeLocationOffset;
    FName EyeSocketName;
    FBlackboardKeySelector TargetKey;
    TEnumAsByte<ECollisionChannel> TraceChannel;
    bool UseTargetable;

};

class UBTDecorator_CheckObstruction : public UBTDecorator
{
    float range;
    bool UseOwnerCenterMass;
    FVector EyeLocationOffset;
    FName RangedSocket;
    FBlackboardKeySelector TargetKey;

};

class UBTDecorator_CheckPlayerCount : public UBTDecorator
{
    int32 playerCount;
    bool AllowLessThanCount;

};

class UBTDecorator_ConditionalGuard : public UBTDecorator
{
    FBlackboardKeySelector GuardKey;
    bool InvertLogic;

};

class UBTDecorator_FormationGuard : public UBTDecorator
{
};

class UBTDecorator_InRange : public UBTDecorator_BlackboardBase
{
    float MinRange;
    float MaxRange;
    FAIDistanceType GeometricDistanceType;

};

class UBTDecorator_InRangeBB : public UBTDecorator_BlackboardBase
{
    FBlackboardKeySelector MinRangeKey;
    FBlackboardKeySelector MaxRangeKey;
    FAIDistanceType GeometricDistanceType;

};

class UBTDecorator_InRangeEx : public UBTDecorator_BlackboardBase
{
    float MinRange;
    float MaxRange;
    FAIDistanceType GeometricDistanceType;

};

class UBTDecorator_InRangeOfTarget : public UBTDecorator_BlackboardBase
{
    float MinRange;
    float MaxRange;

};

class UBTDecorator_IsFacing : public UBTDecorator_BlackboardBase
{
    float MaxAngle;

};

class UBTDecorator_IsUnderCeiling : public UBTDecorator
{
    FName ProjectileAttackName;
    FName SocketName;
    float Acceptance;
    float TraceWidth;
    bool DrawDebug;
    FBlackboardKeySelector TargetKey;

};

class UBTDecorator_LockRotation : public UBTDecorator
{
};

class UBTDecorator_MessageAI : public UBTDecorator
{
    FName ActivationMessage;
    FName DeactivationMessage;

};

class UBTDecorator_ModifySpeed : public UBTDecorator
{
    float SpeedModifier;

};

class UBTDecorator_RandomChance : public UBTDecorator
{
    float Chance;

};

class UBTDecorator_RandomCooldown : public UBTDecorator
{
    FRandRange CoolDownTime;
    FBlackboardKeySelector CooldownTimeModifier;

};

class UBTDecorator_RandomLoop : public UBTDecorator
{
    float Chance;

};

class UBTDecorator_SetTagRandomCooldown : public UBTDecorator
{
    FGameplayTag CooldownTag;
    FRandRange CooldownDuration;
    bool bAddToExistingDuration;
    bool TriggerOnActivation;

};

class UBTDecorator_SharedAttackCooldown : public UBTDecorator
{
    FRandRange CoolDownTime;
    FBlackboardKeySelector CooldownKey;

};

class UBTDecorator_SharedCooldown : public UBTDecorator
{
    FRandRange CoolDownTime;
    FBlackboardKeySelector CooldownKey;

};

class UBTDecorator_TagRandomCooldown : public UBTDecorator
{
    FGameplayTag CooldownTag;
    FRandRange CooldownDuration;
    bool bAddToExistingDuration;
    bool bActivatesCooldown;

};

class UBTDecorator_VariableLoop : public UBTDecorator
{
    FIRandRange NumLoops;

};

class UBTServer_ChaseTarget : public UBTService
{
    FBlackboardKeySelector TargetKey;
    bool MustBeAlive;
    bool MustBeUnparalyzed;
    bool PreferNewTarget;
    FGameplayTag SwitchTargetCooldownTag;
    FGameplayTagQuery TargetingQuery;
    bool IsFlying;
    bool CanShoot;
    float TargetingRange;
    float SwitchTargetTime;
    float SwitchTargetDeviation;

};

class UBTService_CheckPathToTarget : public UBTService
{
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector ResultKey;

};

class UBTService_FindAttackable : public UBTService
{
    FBlackboardKeySelector TargetKey;
    bool MustBeAlive;
    bool SwithToBetterTargets;
    bool RegisterForPositioning;
    bool IsFlying;
    bool CanShoot;
    float TargetingRange;
    FGameplayTagQuery TargetQuery;

};

class UBTService_FindClosest : public UBTService
{
    FBlackboardKeySelector TargetKey;
    class UTargetValidator* TargetValidator;
    bool MustBeAlive;
    bool OwnerIsMultiTargeter;
    bool ClearTargetIfNotValid;
    float TargetingRange;

};

class UBTService_FindPlayer : public UBTService
{
    FBlackboardKeySelector TargetKey;
    bool MustBeAlive;
    bool SwithToBetterTargets;
    bool RegisterForPositioning;
    bool IsFlying;
    bool CanShoot;
    bool OwnerIsMultiTargeter;
    float TargetingRange;

};

class UBTService_SetStance : public UBTService
{
    FBlackboardKeySelector TargetLocationKey;
    float Distance;

};

class UBTService_UpdateFlyingMoveToTarget : public UBTService
{
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector TargetLocationKey;
    float LookAheadTime;

};

class UBTService_UpdateMoveInFormation : public UBTService
{
    float LookAheadTime;
    FBlackboardKeySelector TargetLocationKey;
    float AttackerRadius;

};

class UBTService_UpdateMoveToTarget : public UBTService
{
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector TargetLocationKey;
    float LookAheadTime;
    float VerticalOffset;

};

class UBTTask_Attack : public UBTTaskNode
{
    FBlackboardKeySelector TargetKey;
    FName AttackName;

    void OnAttackCompleted(class UBehaviorTreeComponent* btComponent, const bool& wasSuccess);
};

class UBTTask_FaceTarget : public UBTTaskNode
{
    FBlackboardKeySelector TargetKey;
    float MinAngle;

};

class UBTTask_FakePhysicsMove : public UBTTask_BlackboardBase
{
    float MinTime;
    float EndMaxSpeed;
    FVector InitialLocalVelocity;
    FVector InitialGlobalVelocity;
    bool EndRequireSolidGround;
    class UFakeMoverSettings* MoveSettings;

};

class UBTTask_FindPointNearCeiling : public UBTTask_BlackboardBase
{
    float CloseToCeilingBias;
    float LookForCeilingLength;
    float SearchRadius;

};

class UBTTask_FindPointNearTarget : public UBTTaskNode
{
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector LocationKey;
    float Distance;
    FVector ManualOffset;
    bool FromCenterOfMass;

};

class UBTTask_MessageAI : public UBTTaskNode
{
    FName MessageName;

};

class UBTTask_MoveToSlot : public UBTTask_BlackboardBase
{
    float AcceptableRadius;
    float LookAheadTime;
    float VerticalOffset;
    float UpdateRate;

};

class UBTTask_MoveToTarget : public UBTTask_BlackboardBase
{
    float AcceptableRadius;
    bool ToCenterOfMass;

};

class UBTTask_SetAttacking : public UBTTaskNode
{
    FBlackboardKeySelector TargetKey;

};

class UBTTask_SetCondition : public UBTTaskNode
{
    FBlackboardKeySelector ConditionalKey;
    bool Value;

};

class UBTTask_TriggerAI : public UBTTaskNode
{
    FName TriggerName;

};

class UBTTask_TunnelToTarget : public UBTTaskNode
{
    FBlackboardKeySelector TargetKey;
    float BurrowSpeed;
    float BurrowDuration;
    FFloatInterval DurationClamp;

};

class UBallisticProjectileAttack : public UProjectileAttack
{
    TSubclassOf<class AProjectile> Projectile;
    float ProjectileArc;
    float Gravity;

};

class UBarMenuWidget : public UWindowWidget
{
    TWeakObjectPtr<class ASpaceRigBar> SpaceRigBar;

};

class UBaseArmorDamageComponent : public UActorComponent
{
    bool ArmorDamageEnabled;
    FBaseArmorDamageComponentOnArmorShatteredEvent OnArmorShatteredEvent;
    void ArmorShatterDelegate(const FVector& Location);
    FArmorDamageEffects ArmorBreakEffects;
    TArray<class UFSDPhysicalMaterial*> ArmorPhysMats;
    class USkeletalMeshComponent* Mesh;

};

class UBaseCritterDescriptor : public UDataAsset
{
    TSoftClassPtr<AFSDPawn> CritterClass;
    TMap<class UBiome*, class TSoftClassPtr<AFSDPawn>> BiomeClassOverrides;
    class UDebrisPositioning* Positioning;
    DeepPathFinderType PathfinderType;

};

class UBasicPistolUpgrade : public UStandardItemUpgrade
{
    EBasicPistol upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EBasicPistol upgradeType);
};

class UBasicWeaponFireComponent : public UWeaponFireComponent
{

    void Server_FireWeapon();
    void Server_EndFire();
    void All_WeaponFired();
};

class UBeardColorVanityItem : public UVanityItem
{
    class UMaterialInterface* HairColor;
    class UMaterialInterface* EyebrowColor;
    class UMaterialInterface* MoustacheColor;
    class UMaterialInterface* SideburnColor;
    class UMaterialInterface* BeardColor;

};

class UBeardVanityItem : public UVanityItem
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
    float BeardThickness;
    bool RequiresSlimArmor;
    bool UseHairColor;
    bool UseArmorColor;
    bool HideEyebrows;
    bool HideSideburns;
    bool HideMoustache;
    bool HideAll;
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    TSoftObjectPtr<UMaterialInterface> MaterialOverride;

};

class UBeastMasterComponent : public UFloatPerkComponent
{
    bool ShowCanCharmIcon;

    void SetDamage(class UDamageComponent* cmp, float dmg);
    class UActorComponent* AddPetComponent(TSubclassOf<class UActorComponent> ComponentClass, class AFSDPawn* targetPet, class APlayerCharacter* petOwner);
};

class UBeastMasterUseSphere : public USphereComponent
{
};

class UBeltDrivenAnimInstance : public UAmmoDrivenWeaponAnimInstance
{
    float BarrelSpinRate;
    float CurrentBarrelSpinRate;
    FVector ExternalForce;
    float ExternalForceScale;
    FName ExternalForceBoneName;

};

class UBeltDrivenWeaponUpgrade : public UStandardItemUpgrade
{
    EBeltDrivenWeaponUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade upgradeType);
};

class UBezerkPerkComponent : public UFloatPerkComponent
{
    class UPawnStat* BoostedStat;
    float AmountPerValue;

    void OnHealthChanged(float Health);
};

class UBiome : public UDataAsset
{
    FText BiomeName;
    FText BiomeShortName;
    FText BiomeDescription;
    FColor BiomeColor;
    int32 BiomeIndex;
    FString BiomeAnalyticsIndex;
    bool IsTutorialBiome;
    TSoftObjectPtr<UFileMediaSource> BiomeMovie;
    TSoftObjectPtr<UTexture2D> BiomePicture;
    TSoftObjectPtr<UTexture2D> BiomeIcon;
    TSoftObjectPtr<UTexture2D> BiomeLargeImage;
    TSoftObjectPtr<UTexture2D> BiomeWorldMap;
    TSoftObjectPtr<UTexture2D> BiomeMissionBar;
    TSoftClassPtr<UUserWidget> BiomeMapWidget;
    FHeatSource BiomeHeatSource;
    FRandRange DepthRange;
    TSoftObjectPtr<UParticleSystem> AtmosphericParticles;
    TArray<TSoftClassPtr<UCaveScriptComponent>> CaveScriptComponents;
    float ExtraCaveSize;
    TArray<class UDebrisSet*> Debris;
    TSoftClassPtr<ADebrisDataActor> DebrisActor;
    TSoftClassPtr<AActor> PostProcessActorClass;
    class UTerrainMaterial* RockMaterial;
    class UTerrainMaterial* DirtMaterial;
    class UTerrainMaterial* BurnedMaterialOverride;
    TArray<TSoftObjectPtr<UMaterialInstance>> FlavorMaterials;
    TArray<FBiomeNoiseItem> RoomNoises;
    class UMissionStat* MissionCompleted;
    class UFloodFillSettings* CeilingNoise;
    class UDetailNoise* CeilingDetailNoise;
    class UFloodFillSettings* WallNoise;
    class UDetailNoise* WallDetailNoise;
    class UFloodFillSettings* FloorNoise;
    class UDetailNoise* FloorDetailNoise;
    class UFloodFillSettings* PillarNoise;
    class UDetailNoise* PillarDetailNoise;
    class UPillarSettings* PillarSettings;
    TArray<class UTunnelSetting*> TunnelSettings;
    class UFloodFillSettings* TunnelCeilingNoise;
    class UFloodFillSettings* TunnelWallNoise;
    class UFloodFillSettings* TunnelFloorNoise;
    TArray<FResourceSpawner> Resources;
    TArray<FBiomeEnemyEntry> Enemies;
    TArray<class UEnemyDescriptor*> BannedEnemies;
    TArray<class UEnemyDescriptor*> StationaryEnemies;
    TArray<class UCritterDescriptor*> Critters;
    TSoftObjectPtr<USoundCue> AmbientSounds;
    bool Use3DAmbient;
    FReverbSettings ReverbSettings;
    float SmallCaveReverbVolume;
    class UReverbEffect* SmallCaveReverb;
    float MediumCaveReverbVolume;
    class UReverbEffect* MediumCaveReverb;
    float LargeCaveReverbVolume;
    class UReverbEffect* LargeCaveReverb;
    TSoftObjectPtr<USoundCue> TunnelAmbience;
    TSoftObjectPtr<ULevelSequence> BiomeLoaderLevelSequence;
    FString BiomeLoaderLevelName;
    TArray<FText> Quotes;
    float PlanetZoneSelectionWeight;

    void StartPreload(class UObject* WorldContext);
    class UTerrainMaterial* GetRockMaterial();
    TSoftClassPtr<AActor> GetPostProcessActorClass_Soft();
    class UMaterialInstance* GetFlavorMaterial();
    class UTerrainMaterial* GetDirtMaterial();
    TSoftClassPtr<ADebrisDataActor> GetDebrisActorSoftClass();
    class UTexture2D* GetBiomeWorldMap();
    class UTexture2D* GetBiomePicture();
    FText GetBiomeName();
    class UTexture2D* GetBiomeMissionBar();
    TSubclassOf<class UUserWidget> GetBiomeMapWidget();
    TArray<FSoftObjectPath> GetBiomeMapAssetList();
    class UTexture2D* GetBiomeLargeImage();
    int32 GetBiomeIndex();
    class UTexture2D* GetBiomeIcon();
    FString GetBiomeAnalyticsIndex();
    class UParticleSystem* GetAtmosphericParticles();
    class USoundCue* GetAmbientSounds();
};

class UBlankSchematicItem : public USchematicItem
{
    FText Title;
    FText Description;
    class UTexture2D* Icon;

};

class UBobbingComponent : public USceneComponent
{
    FBobbingComponentOnMovedIntoSomethingEvent OnMovedIntoSomethingEvent;
    void MovedIntoSomething(bool Up);
    class AActor* OwnerActor;
    bool DoOrientationChecks;
    float BobSpeed;
    float BobSize;
    float OrentationChecksPerSecond;

    void SetOwner(class AActor* AActor);
};

class UBodyRotationManagerComponent : public UActorComponent
{
    FRuntimeFloatCurve KnockBackCurve;
    TWeakObjectPtr<class USceneComponent> RotationComponent;
    float LerpSpeed;

    void ApplyKnockBack(float force, float Duration, const FVector& Direction);
};

class UBoltActionRifleUpgrade : public UStandardItemUpgrade
{
    EBoltActionRifleUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EBoltActionRifleUpgrades upgradeType);
};

class UBoltActionWeaponAnimInstance : public UAnimInstance
{
};

class UBoltActionWeaponDamageCondition : public UDamageCondition
{
    EBoltActionWeaponConditions WeaponCondition;

};

class UBomberAnimInstance : public UFlyingBugAnimInstance
{
    bool ShouldBomb;
    bool ShouldSpiral;
    bool IsBombing;
    bool IsSpiraling;

};

class UBoneParticlesAfflictionEffect : public UAfflictionEffect
{
    TArray<class UParticleSystem*> Particles;
    class USoundCue* Sound;

};

class UBonusDamageUpgrade : public UItemUpgrade
{
    class UDamageBonusBase* DamageBonus;

};

class UBoolUserSettingAsset : public UDataAsset
{
    FText SettingDisplayTitle;
    FName SettingID;
    bool SettingDefaultValue;

    void SetValue(bool InValue);
    bool GetValue();
};

class UBoscoAbillity : public UDataAsset
{
    FName AbillityName;
    class UAnimSequenceBase* AbillityAnimation;
    class UDialogDataAsset* VoiceOnUse;
    EBoscoAbillityTargetPreference TargetType;
    class UAbilityExitStrategy* ExitStrategy;
    float CoolDown;
    float WindUp;
    float Duration;
    float range;
    float RechargeTime;
    int32 MaxCharges;
    bool TargetActorIfValid;
    bool RotateTowardsTarget;

};

class UBoscoAbillityComponent : public UActorComponent
{
    FBoscoAbillityComponentOnAbillityChargeProgress OnAbillityChargeProgress;
    void ABillityChargeProgress(float aProgress, int32 aNextIndex);
    FBoscoAbillityComponentOnAbillityChargeUsed OnAbillityChargeUsed;
    void AbillityChargeUsedSig(int32 aCurrentCharges);
    FBoscoAbillityComponentOnAbilityDataUpdated OnAbilityDataUpdated;
    void AbilityDataUpdated(class UBoscoAbillityComponent* ability);
    FBoscoAbilityTarget Target;
    TArray<class UItemUpgrade*> upgrades;
    TSubclassOf<class AProjectileBase> ProjectileClass;
    TSubclassOf<class ADroneStream> StreamClass;
    TWeakObjectPtr<class ABosco> AbillityOwner;
    TArray<class UItemUpgrade*> ProjectileUpgrades;
    class UBoscoProjectileAbillity* AbilityData;
    bool InitializeAtBeginPlay;

    int32 GetMaxCharges(bool Total);
    bool GetIsSet();
    int32 GetCharges();
};

class UBoscoAnimInstance : public UAnimInstance
{
    FBoscoAnimInstanceOnWeaponsReady OnWeaponsReady;
    void BoscoAnimNotifyDelegate();
    FBoscoAnimInstanceOnWeaponsNotReady OnWeaponsNotReady;
    void BoscoAnimNotifyDelegate();
    float DigAnimPlayRate;
    EDroneAIState CurrentState;
    bool IsReadyToMine;
    bool IsMining;
    bool IsFiring;
    bool IsReviving;
    bool IsCarryingGem;

};

class UBoscoCarryingDetailComponent : public UActorComponent
{
    FRotator CustomRotaion;

};

class UBoscoProjectileAbillity : public UBoscoAbillity
{
    TSubclassOf<class AProjectile> ProjectileClass;

};

class UBoscoSpawnActorAbillity : public UBoscoAbillity
{
    TSubclassOf<class AActor> SpawnedActorClass;

};

class UBoscoUpgrade : public UStandardItemUpgrade
{
    EBoscoUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> Item, EBoscoUpgrades upgradeType);
};

class UBoscoWeaponsFoldedInNotify : public UAnimNotify
{
};

class UBoscoWeaponsFoldedOutNotify : public UAnimNotify
{
};

class UBossFightSubSystem : public UGameInstanceSubsystem
{
    FBossFightSubSystemOnNewBossFight OnNewBossFight;
    void BossFightDelegate(const TScriptInterface<class IBossFightInterface>& BossFight);
    FBossFightSubSystemOnBossFightRemoved OnBossFightRemoved;
    void BossFightDelegate(const TScriptInterface<class IBossFightInterface>& BossFight);
    FBossFightSubSystemOnCustomWidgetAdded OnCustomWidgetAdded;
    void CustomWidgetDelegate(class UUserWidget* InWidget);
    FBossFightSubSystemOnCustomWidgetRemoved OnCustomWidgetRemoved;
    void CustomWidgetDelegate(class UUserWidget* InWidget);
    TArray<TScriptInterface<IBossFightInterface>> ActiveBossFights;

    void RemoveCustomBossFightWidget(class UUserWidget* InWidget);
    void RegisterBossFight(TScriptInterface<class IBossFightInterface> BossFight);
    void DeregisterBossFight(class AActor* boss);
    void CustomWidgetDelegate__DelegateSignature(class UUserWidget* InWidget);
    void BossFightDelegate__DelegateSignature(const TScriptInterface<class IBossFightInterface>& BossFight);
    void AddCustomBossFightWidget(class UUserWidget* InWidget);
};

class UBossFightWidget : public UUserWidget
{
    TScriptInterface<class IBossFightInterface> BossFight;

};

class UBoxFunctionLibrary : public UBlueprintFunctionLibrary
{

    FBox CreateBoxAt(FVector Location, FVector Size);
    FVector ClosestPointToBox(FVector Pos, const FBox& Box);
    float BoxSize(FBox Box);
    FVector BoxExtends(FBox Box);
    FVector BoxCenter(FBox Box);
};

class UBoxGenerationComponent : public UGenerationComponent
{
    FVector Extends;
    bool IsCarver;
    float NoiseRange;
    bool Visible;
    class UFloodFillSettings* Noise;

};

class UBreakIceBonus : public UDamageBonusBase
{
    float DeFrostAmount;

};

class UBuildRestriction : public UDataAsset
{
    int32 BuildType;
    int32 Platform;

};

class UBurningAfflictionEffect : public UAfflictionEffect
{
    EFrozenBitsSize FireParticleSize;

};

class UBurrowComponent : public UActorComponent
{

    void Unburrow(class UAnimMontage* customMontage);
    void CallBurrow(bool isBurrowing, class UAnimMontage* customMontage);
    void Burrow(class UAnimMontage* customMontage);
};

class UBurstWeaponUpgrade : public UStandardItemUpgrade
{
    EBurstWeaponUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EBurstWeaponUpgrades upgradeType);
};

class UCSGTriangleMapper : public UDataAsset
{
    bool Enabled;
    class UTerrainMaterial* AttachToMaterial;
    TArray<class UTerrainType*> AttachToTypes;
    int32 CellCategories;
    float DensityInM2;
    float MinVerticalAngle;
    float MaxVerticalAngle;
    FVector ScaleMin;
    FVector ScaleMax;
    float ScaleBias;
    bool IndependentScaleAxes;
    FVector BaseNormal;
    float SurfaceNormalFactor;
    FVector SurfaceNormalLimiter;
    float RandomNormalFactor;
    float RotationMinAngle;
    float RotationMaxAngle;
    float PosOffset;
    float PosOffsetSurface;
    TArray<FCellNoise> NoiseLayers;
    FDebrisCellNoiseParameters CellNoiseParameters;

};

class UCamapaignCompletedRequirement : public UCampaignRequirement
{
    TSubclassOf<class UCampaign> Campaign;
    bool InverseRequirement;

};

class UCameraParticleAfflictionEffect : public UAfflictionEffect
{
    class UParticleSystem* ParticleEffect;

};

class UCampaign : public UObject
{
    bool HasMissions;
    TArray<class UCampaignMission*> missions;
    TArray<class UReward*> RewardsOnCampaignStart;
    TArray<class UReward*> RewardsOnCompletion;
    class UDialogDataAsset* CampaignCompleteShout;
    TArray<class UCampaignRequirement*> Requirements;
    TArray<class UCampaignRequirement*> VisibilityRequirements;
    class UPlayerCharacterID* RequiredCharacterID;
    TArray<class UDifficultySetting*> RestrictedToDifficulties;
    int32 Progress;
    int32 Seed;
    FGuid SavegameID;
    bool CanAbort;
    bool CanSkip;
    FText TitlePrefix;
    FText Title;
    FText DescriptionHeader;
    FText Description;
    FText RewardText;
    FText RewardFlavorText;
    TSoftObjectPtr<UTexture2D> Picture;
    ECampaignType campaigntype;
    class UMissionStat* CampaignCompletedMissionStat;
    class UGameActivityAssignmentType* CampaignActivity;
    TSubclassOf<class UCampaign> ReplacesOldCampaignCampaign;
    ECampaignMutators Mutators;
    TArray<class UMissionWarning*> BannedWarnings;

    bool IsComplete();
    bool IsCampaignComplete(class UObject* WorldContext, TSubclassOf<class UCampaign> Campaign);
    class UCampaign* GetReference(TSubclassOf<class UCampaign> Campaign);
    class UCampaignMission* GetPreviousMission();
    class UTexture2D* GetPicture();
    FText GetCampaignTitle(TSubclassOf<class UCampaign> Campaign);
    class UCampaignMission* GetActiveMission();
    bool CanStartCampaign(class AFSDPlayerController* Player);
    bool CanSeeCampaign(class APlayerController* PlayerController);
    bool AreRestrictionsMet(class AFSDPlayerController* Player, class UDifficultySetting* optionalDifficulty);
};

class UCampaignManager : public UObject
{
    FCampaignManagerOnCampaignCompleted OnCampaignCompleted;
    void CampaignCompletedDelegate();
    FCampaignManagerOnCampaignChanged OnCampaignChanged;
    void CampaignChangedDelegate();
    TSubclassOf<class UCampaign> MainCampaign;
    TArray<class TSubclassOf<UCampaign>> WeeklyCampaigns;
    TArray<class TSubclassOf<UCampaign>> MatrixCoreHuntCampaigns;
    TArray<class TSubclassOf<UCampaign>> SideCampaigns;
    TArray<class TSubclassOf<UCampaign>> EventCampaigns;
    class UCampaign* ActiveCampaign;
    int32 NumFailedRequests;
    bool WeeklyBackendDataValid;
    int32 WeeklyBackendSeed;
    FDateTime WeeklyBackendExpirationTime;
    FDateTime LastRequestTime;

    void StartNewCampaign(TSubclassOf<class UCampaign> campaignClass, class UFSDSaveGame* SaveGame);
    void SkipMainCampaign(class UObject* WorldContextObject);
    void OnEventsRefreshed();
    bool IsWeeklyCampaignCompleted(class UObject* WorldContext, ECampaignType campaigntype);
    bool IsInCampaignMission(class AFSDPlayerController* Player);
    bool IsCampaignRestrictionsMet(class UObject* WorldContextObject, class UGeneratedMission* mission, class UDifficultySetting* optionalDifficulty);
    bool IsCampaignMission(class UObject* WorldContextObject, class UGeneratedMission* mission);
    bool IsActiveCampaign(class UCampaign* Campaign);
    TArray<class TSubclassOf<UCampaign>> GetUncompletedCampaigns(class AFSDPlayerController* Player);
    TArray<class TSubclassOf<UCampaign>> GetCompletedSideCampaigns(class AFSDPlayerController* Player);
    class UGeneratedMission* GetCampaingMissionFromSeeds(class UObject* WorldContextObject, int32 GlobalSeed, int32 MissionSeed);
    class UGeneratedMission* GetCampaingMission(const TArray<class UGeneratedMission*>& missions, int32 MissionSeed);
    void CompleteCampaignWithNoMissions(TSubclassOf<class UCampaign> campaignClass, class UFSDSaveGame* SaveGame);
    void CampaignCompletedDelegate__DelegateSignature();
    void CampaignChangedDelegate__DelegateSignature();
    void AbortActiveCampaign(class UFSDSaveGame* SaveGame);
};

class UCampaignMission : public UDataAsset
{
    class UPlanetZone* PlanetZone;
    FRequiredMissionItem mission;
    TArray<class UReward*> Rewards;
    class UDialogDataAsset* MissionCompleteShout;
    bool OverrideMutators;
    ECampaignMutators MutatorOverride;
    TArray<class UMissionWarning*> AllowedWarnings;

    class UMissionTemplate* GetMissionTemplate();
};

class UCampaignNotification : public UObject
{
    class UCampaign* Campaign;
    class UCampaignMission* mission;
    int32 Progress;
    bool bIsCampaignCompleted;

};

class UCampaignRequirement : public UObject
{

    bool IsRequirementMet(class AFSDPlayerController* Player, class UCampaign* Campaign);
};

class UCapacityBasedItemAggregator : public UItemAggregator
{
    FCapacityBasedItemAggregatorOnCurrentAmountChanged OnCurrentAmountChanged;
    void AmountChangedSignature(int32 Amount);
    FCapacityBasedItemAggregatorOnMaxAmountChanged OnMaxAmountChanged;
    void AmountChangedSignature(int32 Amount);
    FCapacityBasedItemAggregatorOnClipAndTotalChanged OnClipAndTotalChanged;
    void AmountChangedSignature(int32 Amount);
    FCapacityBasedItemAggregatorOnReloadTimeChanged OnReloadTimeChanged;
    void ReloadTimeLeftSignature(float Amount);
    FCapacityBasedItemAggregatorOnReloadComplete OnReloadComplete;
    void ReloadCompleteSignature();
    FCapacityBasedItemAggregatorOnReloadStarted OnReloadStarted;
    void ReloadStartedSignature();
    FCapacityBasedItemAggregatorOnMaxAmmoCapacityChanged OnMaxAmmoCapacityChanged;
    void AmountChangedSignature(int32 Amount);
    bool showClipCount;

    void ReloadStarted();
    void ReloadComplete();
    int32 GetMaxAmount();
    int32 GetCurrentAmount();
};

class UCapacityHoldingItemAggregator : public UCapacityBasedItemAggregator
{
    int32 MaxAmmo;
    int32 AmmoCount;
    bool UseRejoin;

    void UseAmmo(int32 Count);
    void SetMaxAmmo(int32 InMaxAmmo, bool InChangeCurrentAmount);
    void Resupply(float percentage);
    void OnRep_MaxAmmo();
    void OnRep_AmmoCount();
    void AddAmmo(int32 Amount);
};

class UCapacityUpgrade : public UStandardItemUpgrade
{

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, int32 componentIndex);
};

class UCappedResource : public UObject
{
    FCappedResourceOnChanged OnChanged;
    void ResourceChangedSignature(class UCappedResource* Resource, float Amount);
    FCappedResourceOnIncreased OnIncreased;
    void ResourceAddedSignature(class UCappedResource* Resource, float Amount);
    FCappedResourceOnFull OnFull;
    void ResourceFullSignature(class UCappedResource* Resource);
    class UResourceData* Data;
    float currentAmount;
    float MaxAmount;
    float TotalCollected;
    int32 FullFlag;

    float TransferAll(class UCappedResource* Receiver);
    float Transfer(float Amount, class UCappedResource* Receiver);
    void OnRep_FullFlag(int32 OldValue);
    void OnRep_CurrentAmount(float OldAmount);
    bool IsObjectiveResource(class UObject* WorldContext, bool& IsCompleted);
    bool IsFull();
    bool isEmpty();
    bool IsCraftingResource();
    FText GetTitle();
    FColor GetColor();
    float GetCapacityPct();
    float Deduct(float Amount);
    float Add(float Amount);
};

class UCapsuleHitscanComponent : public UHitscanBaseComponent
{
    class ADamageEnhancer* DamageEnhancer;
    FCapsuleHitscanComponentOnHitEffect OnHitEffect;
    void OnHitDelegate(const FVector& Location, const FVector& Normal, bool bHitEnemy);
    FCapsuleHitscanComponentOnClosestHit_Client OnClosestHit_Client;
    void OnHitDelegate(const FVector& Location, const FVector& Normal, bool bHitEnemy);
    float range;
    float Width;
    bool ShowPhysMatImpact;
    bool ShowPhysMatDecal;
    bool PlayPhysMatSound;
    TSet<AActor*> ActorsInCapsule;
    TArray<class AActor*> DamagedActorCache;
    TArray<class AActor*> ActorsHit;
    FMultiHitScanHits Hits;

    void Server_RegisterHit(const FMultiHitScanHits& hitResults);
    void All_ShowHit(const FMultiHitScanHits& hitResults);
};

class UCapsuleHitscanUpgrade : public UStandardItemUpgrade
{
    ECapsuleHitscanUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, ECapsuleHitscanUpgradeType upgradeType);
};

class UCaracterLevelCampaignRequirement : public UCampaignRequirement
{
    class UPlayerCharacterID* characterID;
    int32 LevelRequirement;

};

class UCaretagerBodyAnimInstance : public UEnemyAnimInstance
{
    bool CoolingOff;
    bool IsWeakpointAVisible;
    bool IsWeakpointBVisible;
    bool IsWeakpointCVisible;
    bool IsWeakpointDVisible;
    float RotationAngle;
    int32 AoEStage;
    bool IsSpawningDrones;
    bool IsSpawningBombs;
    bool IsSpawningShredders;
    bool IsSpawningTurrets;

};

class UCaretakerActionComponent : public UActorComponent
{
    bool StartTickOnUse;
    bool IsUsing;

    void UseAction();
    void TriggerAction();
    void StopUsing();
    void OnTriggered();
    void OnStopped();
    void OnStarted();
    void OnRep_IsUsing();
    class ACaretaker* GetCaretaker();
    bool CanUse();
};

class UCaretakerEyeAnimInstance : public UEnemyAnimInstance
{
    bool IsOpen;

};

class UCarriableComponent : public UActorComponent
{
    FCarriableComponentOnPickedUp OnPickedUp;
    void CarriableEvent();
    FCarriableComponentOnDropped OnDropped;
    void CarriableEvent();
    TSoftObjectPtr<UDialogDataAsset> ShoutWhileCarrying;
    class UItemCharacterAnimationSet* OverrideCarryAnimationSet;
    class UUseAnimationSetting* OverrideThrowAnimationSet;
    class APlayerCharacter* CarriedBy;
    FVector Offset;

    bool PickupItem(class APlayerCharacter* byCharacter);
    void DropItem();
    void AttachChanged(bool Attached, const FVector PrevScale);
};

class UCarriableInstantUsable : public UInstantUsable
{
};

class UCarryElementalStatus : public UDamageBonusBase
{
    float CarryBonusAmount;
    class UDamageClass* CarriedClass;

};

class UCarvedResourceCreator : public UResourceCreator
{
    class UCarvedResourceData* Resource;
    bool ScaleToResourceDistribution;
    class UDebrisPositioning* Positioning;
    FIRandRange NumCarvers;
    float ExpensiveNoise;
    float CarveOffsetRadius;
    TSubclassOf<class AActor> SpawnAttachClass;
    float AttachSpawnOffsetDistance;
    class UTerrainMaterial* TerrainMaterial;
    ECarveFilterType Filter;
    CarveOptionsCellSize CarveCellSize;
    TArray<FUDebrisCarveMesh> Meshes;
    TArray<FResourceDebris> Debris;

};

class UCarvedResourceData : public UResourceData
{
    TSoftObjectPtr<UCarvedResourceCreator> CarvedResourceCreator;
    float UnitsPerCarver;

    class UCarvedResourceCreator* LoadResourceCreator();
    float GetUnitsPerCarver();
    float GetTargetAmount(class AProceduralSetup* pls);
};

class UCategoryID : public UDataAsset
{
    FGuid SavegameID;

};

class UCaveEntranceComponent : public UPrimitiveComponent
{
    ECaveEntranceType Direction;
    ECaveEntrancePriority Priority;

};

class UCaveInfluencer : public UDataAsset
{
};

class UCaveItemsMutator : public UMutator
{
    TSubclassOf<class UDebrisItemComponent> Item;

};

class UCaveLeechAnimInstance : public UAnimInstance
{
    float HeadOffset;
    class ACaveLeech* CaveLeech;
    class USceneComponent* CaveLeechHead;
    FRotator BaseRotation;
    FVector BaseLocation;
    FVector HeadLocation;
    FRotator HeadRotation;
    bool bIdle;
    bool bTracking;
    bool bPulling;
    bool bRetracting;
    bool bDying;
    bool bDead;
    bool bFrozen;
    bool bBiting;

};

class UCaveScriptComponent : public UActorComponent
{
};

class UCellIdFunctionLibrary : public UBlueprintFunctionLibrary
{
};

class UCharacterBreakOutState : public UCharacterStateComponent
{
    FCharacterBreakOutStateOnThawInputsUpdated OnThawInputsUpdated;
    void ThawInputsDelegate(const TArray<EThawInputDirection>& Inputs, bool Initial);
    FCharacterBreakOutStateOnBreakOutInputSuccess OnBreakOutInputSuccess;
    void ThawInputPressedDelegate(EThawInputDirection Direction);
    FCharacterBreakOutStateOnBreakOutInputFailed OnBreakOutInputFailed;
    void ThawInputPressedDelegate(EThawInputDirection Direction);
    TArray<FInputDirectionSet> DirectionSets;
    class USoundCue* SuccessSound;
    class USoundCue* FailSound;
    float ErrorGracePeriod;
    float HoldToBreakTime;
    float WrongInputPenaltyTime;
    float InitialWaitPeriod;
    bool UseLegacy;
    bool ResetOnFail;

};

class UCharacterCameraController : public UActorComponent
{
    float StartFOV;
    float targetFov;
    float TargetFOVSpeed;
    class APlayerCharacter* Character;
    class UCameraComponent* Camera;

    void ResetFOV(float FadeSpeed);
    void FOVChanged(float NewFOV);
    void FadeToFOVRelative(float targetFov, float FadeSpeed);
    void FadeToFOV(float targetFov, float FadeSpeed);
};

class UCharacterIntoxicationComponent : public UActorComponent
{
    FCharacterIntoxicationComponentOnIntoxicationChanged OnIntoxicationChanged;
    void IntoxicationProgressSignature(class APlayerCharacter* Player, float Progress);
    FCharacterIntoxicationComponentOnPassOutDrunk OnPassOutDrunk;
    void PassOutDrunkSignature(class APlayerCharacter* Player);
    class APlayerCharacter* Character;
    EIntoxicationState CurrentState;
    FLerpingPercent IntoxicationPercent;
    float IntoxicationLerpSpeed;
    float TimeDrunk;
    FCountDownFloat SoberingUpCoolDown;
    uint8 SoberingPercent;

    void ReceiveStateChange(EIntoxicationState NewState);
    void ReceivePassOutDrunk();
    void ReceiveDrunkTick(float DeltaTime, float DrunkTime);
    void ReceiveDrunkEnd();
    void ReceiveDrunkBegin();
    void PassOutDrunkSignature__DelegateSignature(class APlayerCharacter* Player);
    bool IsPassOutDrunk();
    bool IsOnSpaceRig();
    bool IsLocallyControlled();
    bool IsDrunk();
    void IntoxicationProgressSignature__DelegateSignature(class APlayerCharacter* Player, float Progress);
    bool HasAuthority();
    float GetSoberingUpCoolDown();
    float GetIntoxicationProgressMapped(class UCurveFloat* Curve);
    float GetIntoxicationProgress();
    int32 GetAlcoholPct(EDrinkableAlcoholStrength Strength);
    void Consume(class UDrinkableDataAsset* Drinkable);
    void ClearIntoxication();
};

class UCharacterRecoilComponent : public UActorComponent
{
    FVector Recoil;
    FVector RecoilVelocity;
    FVector PrevError;

};

class UCharacterSettings : public UDataAsset
{
    TArray<TSoftClassPtr<APlayerCharacter>> RankedHeroClasses;
    TArray<FText> PlayerRankNames;
    TMap<class UPlayerCharacterID*, class UInventoryList*> InventoryLists;
    TArray<int32> CharacterXPLevels;
    TMap<class FGuid, class UPlayerCharacterID*> PlayerCharacterIDMap;
    TArray<class UPlayerCharacterID*> PlayerCharacterIDs;
    class UPlayerCharacterID* BoscoID;
    class UPlayerCharacterID* DefaultCharacterID;
    class UPlayerCharacterID* DefaultEditorCharacterID;
    class USkeletalMesh* NoHead;
    class USkeletalMesh* DefaultHead;
    class USkeletalMesh* HeadForMasks;
    class USkeletalMesh* ThickNeck;
    class USkeletalMesh* ThinNeck;
    class USkeletalMesh* FlatEars;
    class USkeletalMesh* FaceOnly;
    class USkeletalMesh* EyesOnly;
    TSoftClassPtr<ACarriableItem> CarriableBagClass;
    class UUseAnimationSetting* ThrowItemAnimSettings;
    TSoftClassPtr<UCampaignManager> CampaignManagerClass;
    TMap<class UPlayerCharacterID*, class UCharacterVanityItems*> CharacterVanityItems;
    class UDialogDataAsset* AutoReloadShout;
    class UDebrisPositioning* TeleportPositioning;
    TSubclassOf<class UTerrainPlacementComponent> TeleportPlacement;
    TMap<class UPlayerCharacterID*, class UPlayerCharacterData*> CharacterData;

    void PreloadAllInventories(class UAsyncManager* AsyncManager);
    class UPlayerCharacterID* GetPlayerCharacterID(const FGuid& ID);
    class UInventoryList* GetInventoryList(class UPlayerCharacterID* characterID);
};

class UCharacterShoutAfflictionEffect : public UAfflictionEffect
{
    class UDialogDataAsset* Shout;

};

class UCharacterShoutsData : public UDataAsset
{
    FCharacterShouts Shouts;

};

class UCharacterShowroomController : public UShowroomController
{
    class APlayerCharacter* CharacterInstance;

    void Receive_CharacterShown();
    void EquipWeapon(EItemCategory Category);
    class UCharacterShowroomController* DisplayCharacter(class UObject* WorldContextObject, class UPlayerCharacterID* characterID, class UShowroomCameraKey* Key);
};

class UCharacterSightComponent : public UActorComponent
{
    FCharacterSightComponentOnTargetChanged OnTargetChanged;
    void TargetChangedSignature(class AActor* NewTarget, class UPrimitiveComponent* NewPrimitive);
    float TargetMaxDistance;
    TEnumAsByte<ECollisionChannel> TraceChannel;
    TArray<TWeakObjectPtr<AActor>> IgnoredActors;
    class APlayerCharacter* Character;
    TWeakObjectPtr<class AActor> TargetActor;
    TWeakObjectPtr<class UPrimitiveComponent> TargetPrimitive;
    TWeakObjectPtr<class USimpleObjectInfoComponent> TargetInfo;
    TWeakObjectPtr<class UTemperatureComponent> TargetTemperature;
    TWeakObjectPtr<class UPawnAfflictionComponent> TargetAfflictions;
    TScriptInterface<class IHealth> TargetHealth;
    TScriptInterface<class ITargetable> TargetTargetable;
    float TargetTime;
    TArray<TWeakObjectPtr<UCharacterSightSensorBase>> TargetSensors;
    FReplicatedCharacterData ReplicatedData;

    void TargetChangedSignature__DelegateSignature(class AActor* NewTarget, class UPrimitiveComponent* NewPrimitive);
    void Server_UpdateTarget(class AActor* NewActor, class UPrimitiveComponent* NewPrimitive);
    void RemoveIgnoreActor(class AActor* InActor);
    void GetSightStartAndEnd(float InMaxDistance, FVector& OutStartLocation, FVector& OutEndLocation);
    void AddIgnoreActor(class AActor* InActor);
};

class UCharacterSightSensor : public UCharacterSightSensorBase
{
    FCharacterSightSensorOnSensorActivated OnSensorActivated;
    void CharacterSightSensorDelegate(class UCharacterSightSensor* Sensor);
    FCharacterSightSensorOnSensorDeactivated OnSensorDeactivated;
    void CharacterSightSensorDelegate(class UCharacterSightSensor* Sensor);
    float SensorActiveForMinDuration;
    float MinimumDistance;
    float MaximumDistance;
    TArray<class UPrimitiveComponent*> RestrictToColliders;
    bool bSensorActivated;
    float TimeActive;
    float LastSeenTime;

};

class UCharacterSightSensorBase : public UActorComponent
{
    bool bEnabled;

};

class UCharacterStateComponent : public UActorComponent
{
    uint8 StateId;
    class APlayerCharacter* Character;
    class UDialogDataAsset* EnterStateShout;
    class UDialogDataAsset* ExitStateShout;
    class UDialogDataAsset* AttentionShout;
    class UPlayerMovementComponent* PlayerMovement;

    void ReceiveStateTick(float DeltaTime);
    void ReceiveStateExit();
    void ReceiveStateEnter();
    bool IsLocallyControlled();
    bool HasAuthority();
    float GetStateTime();
    uint8 GetStateID();
    bool GetStateActive();
    class UPlayerMovementComponent* GetCharacterMovement();
};

class UCharacterUseComponent : public UActorComponent
{
    FCharacterUseComponentOnBeginHoveringEvent OnBeginHoveringEvent;
    void BeginUsingDelegate(class UUsableComponentBase* Component);
    FCharacterUseComponentOnEndHoveringEvent OnEndHoveringEvent;
    void EndUsingDelegate();
    FCharacterUseComponentOnBeginUsingEvent OnBeginUsingEvent;
    void BeginUsingDelegate(class UUsableComponentBase* Component);
    FCharacterUseComponentOnEndUsingEvent OnEndUsingEvent;
    void EndUsingDelegate();
    FCharacterUseComponentOnDepositingBegin OnDepositingBegin;
    void DepositingEvent(class UResourceBank* ResourceBank);
    FCharacterUseComponentOnDepositingEnd OnDepositingEnd;
    void DepositingEvent(class UResourceBank* ResourceBank);
    float UseDistance;
    FCharacterUseState State;
    FCharacterUseState LocalState;
    FCharacterUseState LastRequestedState;
    class UUsableComponentBase* LastBeginUseUsable;
    TArray<class UUsableComponentBase*> UsableComponentsCache;
    class UUsableComponentBase* HoveringUsable;

    void Server_SetState(const FCharacterUseState& NewState);
    void RemoveCustomUsableComponent(class UUsableComponentBase* Usable);
    void OnRep_State(const FCharacterUseState& oldState);
    bool IsLookingAtUsable();
    bool IsLookingAtDepositable();
    float GetUseProgress();
    class AActor* GetLookingAtActor();
    bool GetIsUsing();
    bool GetIsDepositing();
    class UUsableComponentBase* GetHoveringUsable();
    class UUsableComponentBase* GetActiveUsable();
    void All_UseEnded(const FCharacterUseState& oldState);
    void AddCustomUsableComponent(class UUsableComponentBase* Usable, ECustomUsableType eType);
};

class UCharacterVanityComponent : public UActorComponent
{
    class UCharacterVanityItems* AvailableVanityItems;
    class UBeardColorVanityItem* ShownBeardColor;
    class UMaterialInterface* ArmorMaterial;
    class UMaterialInterface* ArmorClothMaterial;
    class UMaterialInstanceDynamic* DynamicSkinMaterial;
    EHeadVanityType HeadVanityType;
    FEquippedVanity EquippedVanity;
    class UVanityItem* PreviewedItem;
    class UArmorMaterialVanityItem* PreviewedArmorMaterial;
    class UMaterialInterface* SkinMaterial;
    TArray<FTattooArmorItem> Tattoos;
    TArray<class UMaterialInterface*> CachedMaterials;
    bool DesireSleevelessArmor;
    TMap<class EVanitySlot, class USkeletalMeshComponent*> VanityMeshes;

    void UpdateMeshes();
    void UpdateEquippedVanity(bool applyItems);
    void SetEquippedVanityInViewer(const TArray<class UVanityItem*>& Vanity);
    void SetDesireSleevelessArmor(class UObject* WorldContextObject, class UPlayerCharacterID* Character, bool inDesireSleeveless);
    void Server_SetEquippedVanity(const FEquippedVanity& equippedItems);
    void Server_SetDesireSleevelessArmor(bool useSleeveless);
    void RemoveMedicalGown();
    class UVanityItem* Receive_GetEquippedVanityItem(class UObject* WorldContextObject, class UPlayerCharacterID* Character, EVanitySlot Slot);
    bool Receive_GetDesireSleevelessArmor(class UObject* WorldContextObject, class UPlayerCharacterID* Character);
    void OnRep_EquippedVanity();
    void OnRep_DesireSleeveless();
    bool HasSpawnedInMedbay();
    class UVanityItem* GetEquippedVanityItem(EVanitySlot Slot, bool ignorePreviewItems);
    bool GetDesireSleevelessArmor();
    class UCharacterVanityItems* GetAvailableVanityItems();
    void EquipMedicalGown();
    void EnforceValidPaintjob();
    void CreateEquippedGear();
    void Client_RemoveMedicalGown();
    void Client_EquipMedicalGown();
};

class UCharacterVanityItems : public UDataAsset
{
    TArray<class UHeadVanityItem*> HeadItems;
    class UVanitySchematicBank* HeadSchematicBank;
    TArray<class UBeardVanityItem*> BeardItems;
    class UVanitySchematicBank* BeardSchematicBank;
    TArray<class UArmorVanityItem*> ArmorItems;
    TArray<class UArmorMaterialVanityItem*> ArmorMaterialItems;
    TArray<class UArmorMaterialVanityItem*> ArmorMaterialItemsInTreassures;
    TArray<class UEyeBrowsVanityItem*> EyebrowsItems;
    class UVanitySchematicBank* EyebrowSchematicBank;
    TArray<class UMoustacheVanityItem*> MoustacheItems;
    class UVanitySchematicBank* MoustacheSchematicBank;
    TArray<class USideburnsVanityItem*> SideburnItems;
    class UVanitySchematicBank* SideburnSchematicBank;
    TArray<class UBeardColorVanityItem*> BeardMaterialItems;
    class UVanitySchematicBank* BeardMaterialSchematicBank;
    TArray<class USkinColorVanityItem*> SkinMaterialItems;
    class UVanitySchematicBank* SkinMaterialSchematicBank;
    TMap<class EVanitySlot, class UVanityItem*> DefaultItems;
    class UPlayerCharacterID* OwningCharacter;

    void SortVanityItems(class UObject* WorldContextObject, class UPlayerCharacterID* characterID, TArray<class UVanityItem*>& VanityItems);
    TArray<class UVanityItem*> GetVanityItems(class UObject* WorldContextObject, EVanitySlot Slot, bool onlyStoreItems, class UPlayerCharacterID* characterID);
    class UVanityItem* GetVanityItem(const FGuid& VanityID);
    TArray<class UVanityItem*> GetUnLockedVanityItems(class UObject* WorldContextObject, EVanitySlot Slot, bool onlyStoreItems, class UPlayerCharacterID* characterID);
    TArray<class UVanityItem*> GetLockedVanityItems(class UObject* WorldContextObject, EVanitySlot Slot, class UPlayerCharacterID* characterID);
    TArray<class UVanityItem*> GetItems(EVanitySlot Slot, bool onlyStoreItems);
    class UVanityItem* GetDefaultVanityItem(class UObject* WorldContext, EVanitySlot Slot, class UPlayerCharacterID* characterID);
};

class UChargedHitCountEffect : public UWeaponHitCountEffect
{
    float DamagePerHit;
    class UDamageClass* DamageClass;
    class UParticleSystem* DamageParticle;
    class USoundCue* DamageSound;

};

class UChargedProjectileLauncherComponent : public UProjectileLauncherBaseComponent
{
    TSubclassOf<class AProjectileBase> NormalProjectileClass;
    TSubclassOf<class AProjectileBase> ChargedProjectileClass;
    float ProjectileChangeChargeValue;

    void SetProjectileClassCharged(TSubclassOf<class AProjectileBase> NewProjectileClass);
    void SetProjectileClass(TSubclassOf<class AProjectileBase> NewProjectileClass);
};

class UChargedProjectileUpgrade : public UStandardItemUpgrade
{
    EChargedProjectileUpgrades upgradeType;
    TSubclassOf<class AActor> ProjectileClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, TSubclassOf<class AActor> upgradedActor, class AFSDPlayerState* Player, EChargedProjectileUpgrades upgradeType);
};

class UChargedWeaponAnimInstance : public UAnimInstance
{
    bool isCharging;
    float ChargeupPlayRate;
    float ChargeupPlayRateSpeedChange;
    float ChargedownPlayRateSpeedChange;
    float MaxChargeupPlayRate;
    class AChargedWeapon* Weapon;

};

class UChargedWeaponUpgrade : public UStandardItemUpgrade
{
    EChargedWeaponUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EChargedWeaponUpgrades upgradeType);
};

class UChaseIfTargetSurvived : public UStandardExitStrategy
{
};

class UClaimableRewardEntryWidget : public UUserWidget
{
    FClaimableRewardEntryWidgetOnRewardClaimed OnRewardClaimed;
    void WidgetDelegate(class UClaimableRewardEntryWidget* EntryWidget);
    FClaimableRewardEntry Data;
    FText ButtonText;

    void WidgetDelegate__DelegateSignature(class UClaimableRewardEntryWidget* EntryWidget);
    void SignalRewardClaimed();
    void SetData(FClaimableRewardEntry InData);
    void ReceiveMoveIn(float InStartDelay);
    void ReceiveDataChanged();
    void MoveIn(float InStartDelay);
};

class UClaimableRewardViewWidget : public UUserWidget
{
    FClaimableRewardView Data;

    void ReceiveEndFlow();
    void ReceiveDataChanged();
    void ReceiveBeginFlow();
    void EndRewardFlow();
    void BeginRewardFlow(FClaimableRewardView InViewData);
};

class UCleanupToolAnimInstance : public UAnimInstance
{
    bool IsUsing;
    class APlagueCleanupItem* CleaningTool;

};

class UClipBasedItemAggregator : public UItemAggregator
{
    FClipBasedItemAggregatorOnClipAmountChanged OnClipAmountChanged;
    void AmountChangedSignature(int32 Amount);
    FClipBasedItemAggregatorOnTotalAmountChanged OnTotalAmountChanged;
    void AmountChangedSignature(int32 Amount);
    FClipBasedItemAggregatorOnClipAndTotalChanged OnClipAndTotalChanged;
    void AmountChangedSignature(int32 Amount);
    FClipBasedItemAggregatorOnReloadTimeChanged OnReloadTimeChanged;
    void ReloadTimeLeftSignature(float Amount);
    FClipBasedItemAggregatorOnReloadComplete OnReloadComplete;
    void ReloadCompleteSignature();
    FClipBasedItemAggregatorOnReloadStarted OnReloadStarted;
    void ReloadStartedSignature();
    FClipBasedItemAggregatorOnMaxAmmoCapacityChanged OnMaxAmmoCapacityChanged;
    void AmountChangedSignature(int32 Amount);
    bool ShowTotalAmount;
    bool ShowClipAndTotalAsOne;

    void ReloadStarted();
    void ReloadComplete();
    int32 GetTotalAmount();
    int32 GetClipAmount();
};

class UClipStatusDamageCondition : public UDamageCondition
{
    int32 BulletAmount;
    bool CountBulletsLeft;

};

class UCoilGunAnimInstance : public UChargedWeaponAnimInstance
{
    float WindUpSpeed;
    float WindDownSpeed;
    float MaxExtention;
    float HandleExtend;
    float MaxCoilSpeed;
    class ACoilGun* CoilGun;

    float GetCoilSpeed(int32 Index);
    float GetCoilAngle(int32 Index);
};

class UCoilgunTrailSpawner : public UActorComponent
{
    TSubclassOf<class AActor> TrailSegmentClass;
    float SegmentSpawnInterval;
    float TrailDistance;
    float TrailSegmentInterval;
    float TrailSpawnRange;

    void SpawnSegment();
};

class UCoilgunUpgrade : public UStandardItemUpgrade
{
    ECoilgunUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, ECoilgunUpgrades upgradeType);
};

class UCollectableResourceCreator : public UObject
{
};

class UCollectableResourceData : public UResourceData
{
    class UCollectableResourceCreator* ResourceCreator;
    class UDebrisPositioning* Positioning;
    float Rarity;
    float InfluenceRadius;
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    bool UseTerrainPlacement;
    TArray<TSoftClassPtr<AActor>> CollectableClasses;
    TArray<class TSubclassOf<AActor>> CollectableClassesLoaded;

};

class UCombinedUpgrade : public UItemUpgrade
{
    TArray<TSoftObjectPtr<UItemUpgrade>> CombinedUpgrades;
    TArray<class UItemUpgrade*> LoadedUpgrades;

    TArray<class UItemUpgrade*> GetUpgrades();
};

class UCommnuityRewardBundle : public UDataAsset
{
    TArray<FCommunityReward> Rewards;

    void AwardRewards(class UObject* WorldContext);
};

class UCommnuityRewardSetup : public UDataAsset
{
    TArray<class UCommnuityRewardBundle*> TierRewards;

    TMap<UResourceData*, int32> GetResourcesTierOnlyReward(int32 Tier);
    TMap<UResourceData*, int32> GetResourcesReward(int32 Tier);
    void AwardTierRewards(class UObject* WorldContext, int32 Tier);
};

class UCommunicationComponent : public UActorComponent
{
    FCommunicationComponentOnSubtitleShout OnSubtitleShout;
    void ShoutDelegate(class APlayerCharacter* InSender, FText InText, float InDuration);
    FCommunicationComponentOnPlayerShout OnPlayerShout;
    void ShoutDelegate(class APlayerCharacter* InSender, FText InText, float InDuration);
    FCommunicationComponentOnMissionShout OnMissionShout;
    void MissionShoutDelegate(const FText& Text, float Duration);
    FCommunicationComponentOnMissionShoutEnd OnMissionShoutEnd;
    void MissionShoutEndDelegate();
    FCommunicationComponentOnMissionControlFinished OnMissionControlFinished;
    void MissionShoutEndDelegate();
    bool ShoutingEnabled;
    TSubclassOf<class UShoutWidget> ShoutWidgetType;
    class UCharacterShoutsData* CharacterShouts;
    float PitchMultiplier;
    float MinShoutDelay;
    float CloseRangeShoutDistance;
    TMap<UDialogDataAsset*, float> DelayedShouts;
    FGameplayTagContainer KillShoutAllowedTags;
    bool bMissionControlPaused;
    class UAudioComponent* MissionControlAudioComponent;
    TArray<class UShoutWidget*> ActiveShouts;
    TArray<FActiveOutline> ActiveOutlines;
    class APlayerCharacter* Character;
    class UDialogDataAsset* LastShout;
    TWeakObjectPtr<class UAudioComponent> ShoutAudioComponent;
    TMap<UDialogDataAsset*, float> ShoutHistory;
    TArray<FMissionShoutQueueItem> MissionShoutQueue;

    void ShoutDelegate__DelegateSignature(class APlayerCharacter* InSender, FText InText, float InDuration);
    void ShoutCustomOrDefault(class UDialogDataAsset* CustomShout, EShoutType DefaultShout);
    void ShoutCustomLocalOnly(class UDialogDataAsset* Shout);
    void ShoutCustomClosestDwarf(class UObject* WorldContext, class UDialogDataAsset* Shout, FVector TargetLocation);
    void ShoutCustom(class UDialogDataAsset* Shout);
    void Shout(EShoutType Shout);
    void SetMissionControlPaused(bool IsPaused);
    void ServerShout(class UDialogDataAsset* Shout);
    void ServerMissionShout(class UDialogDataAsset* Shout, int32 Index, bool bPriority);
    class UAudioComponent* PlayPitchedByClass(class UObject* WorldContextObject, TSubclassOf<class APlayerCharacter> CharacterClass, class USoundBase* Sound, class UDialogDataAsset* Shout, EShoutType ShoutType, class UAudioComponent* AudioComponent);
    void PlayPitchedAsync(class UDialogDataAsset* Shout, EShoutType ShoutType, bool IgnoreCoolDown, class UAudioComponent* AudioComponent, class UObject* WorldContextObject, float shoutVolumeMultiplier, EAsyncLoadPriority Priority);
    class UAudioComponent* PlayPitched(class USoundBase* Sound, class UDialogDataAsset* Shout, EShoutType ShoutType, bool IgnoreCoolDown, class UAudioComponent* AudioComponent, class UObject* WorldContextObject);
    int32 MissionShoutLocally(class UObject* WorldContext, class UDialogDataAsset* Shout);
    void MissionShout(class UObject* WorldContext, class UDialogDataAsset* Shout, bool bPriority);
    bool IsMissionControlSpeaking();
    void ClientShout(class APlayerCharacter* Sender, class UDialogDataAsset* Shout, int32 Index);
    void ClientMissionShout(class UDialogDataAsset* Shout, int32 Index, bool bPriority);
};

class UCommunicationMutator : public UMutator
{
    float PitchMultiplier;

};

class UCommunityGoal : public UDataAsset
{
    bool TierValuesAreInitialized;
    FGuid SavegameID;
    bool Active;
    FText Title;
    FText MetaDescription;
    class UCommunityGoalCategory* Category;
    ECommunityGoalType CommunityGoalType;
    float GoalPerMemberTier1;
    float GoalPerMemberTier2;
    float GoalPerMemberTier3;
    class UCommnuityRewardSetup* RewardSetup;

    float TotalTierProgress(float Value, int32 Members);
    float TierValue(ECommunityGoalTier Tier, float Value, int32 Members);
    float TierProgress(ECommunityGoalTier Tier, float Value, int32 Members);
    float TierGoal(ECommunityGoalTier Tier, int32 Members);
    int32 RewardTier(float Value, int32 Members);
    void IncrementGoal(class UObject* WorldContext, float Value);
    FText GoalToText(ECommunityGoalType StatType, float Value);
    FText GetCategoryTitle();
    bool AreTiersInitialized();
};

class UCommunityGoalCategory : public UDataAsset
{
    FText Title;

};

class UCommunityGoalFaction : public UDataAsset
{
    FText Title;
    FText Description;
    FText ShortDescription;
    FText JoinHeader;
    FText JoinBody;
    class UTexture2D* Icon;
    class UTexture2D* Frame;
    FSlateColor Color;
    EFSDFaction FactionID;

};

class UCommunityGoalSettings : public UDataAsset
{
    TArray<class UCommunityGoalFaction*> ActiveCommunityFactions;
    TArray<class UCommunityGoal*> ActiveCommunityGoals;
    class UCommunityGoal* DSMUGoal;

    class UCommunityGoal* GetGoal(ECommunityGoalIndex Goal);
    class UCommunityGoal* FindGoal(FString Goal);
};

class UCommunityGoalWrapper : public UObject
{
    bool HasCGS;
    FCommunityGoalStateData CGSData;
    int32 LastCollectedRewardID;
    FCommunityFactionData FactionData;
    bool FreeBeerRewardActive;
    FCommunityGoalWrapperOnFreeBeerRewardChanged OnFreeBeerRewardChanged;
    void OnFreeBeersChangedDelegate(bool IsBeersFree);
    FString SteamTicket;
    FString SteamBranch;
    FCommunityGoalWrapperOnFactionsDataReceived OnFactionsDataReceived;
    void FactionsDataDelegate(const TArray<FString>& Goals, const TArray<float>& Values, const TArray<int32>& Members);
    FCommunityGoalWrapperOnDiscordCGSDataEvent OnDiscordCGSDataEvent;
    void GoalStateDelegate(bool stateReceived);
    FCommunityGoalWrapperUICheck UICheck;
    void UICheckDelegate();
    FCommunityGoalWrapperOnGoalsInitializedDelegate OnGoalsInitializedDelegate;
    void UICheckDelegate();
    bool AreAllGoalsInitialized;

    void UpdateAllGoalsInitialized();
    bool RewardReceived();
    void RequestGoalStateData();
    void RequestFactionsData();
    void NextPeriod();
    void InitializeGoalTierTargetValues(class UCommunityGoal* goalToInitialize);
    class UCommunityGoalFaction* GetPlayerCurrentFaction(class UObject* WorldContext);
    void ClaimRewardMessage(class UObject* WorldContext, FCommunityRewardNotification rewardNotification);
    void ClaimReward();
    void CheckUI();
};

class UCompositeArmorComponent : public UBaseArmorDamageComponent
{
    FCompositeArmorComponentOnArmorPartDestroyedEvent OnArmorPartDestroyedEvent;
    void ArmorPrimitiveDestroyed(class UPrimitiveComponent* collider);
    FCompositeArmorComponentOnArmorPartDamagedEvent OnArmorPartDamagedEvent;
    void ArmorPrimitiveDamagedDelegate(class UPrimitiveComponent* collider, float Damage);
    class UFXSystemAsset* BreakParticle;
    bool AffectedByAmorBreak;
    TArray<FCompositeArmorItem> ArmorItems;
    FArmorDamageInfo ArmorDamageInfo;

    void OnRep_ArmorDamageInfo(FArmorDamageInfo OldValue);
    void AddArmorPart(class UPrimitiveComponent* Primitive, float Health, bool overrideAffectedByArmomrBreak, bool NewAffectedByArmorBreak);
};

class UCompositeTargetValidator : public UTargetValidator
{
    TArray<class UTargetValidator*> TargetValidators;

};

class UConditionalDamageModifierUpgrade : public UItemUpgrade
{
    class UDamageCondition* Condition;
    TArray<FDamageModifierItem> Modifiers;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player);
};

class UConditionalDamageTagBonusUpgrade : public UItemUpgrade
{
    TArray<class UDamageTag*> Tags;
    class UDamageCondition* Condition;

};

class UContainsNameStrategy : public USimpleNameStrategy
{
};

class UContinuousUsableComponent : public UUsableComponent
{
    FContinuousUsableComponentUseTick UseTick;
    void UsedBySignature(class APlayerCharacter* User, EInputKeys Key);
    float TimeBetweenTicks;
    bool Usable;

    void SetCanUse(bool CanUse);
};

class UControlEnemyUsable : public UInstantUsable
{
};

class UControllerIconSettings : public UDeveloperSettings
{
    FInputTranslationTable InputTranslationTable;
    TArray<FActionIconMapping> Xbox_KeyIcons;
    TArray<FActionIconMapping> Playstation_KeyIcons;
    TArray<FActionIconMapping> Playstation5_KeyIcons;
    TArray<FActionIconMapping> MouseKeyboard_KeyIcons;

    bool FindMouseKeyboardKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    bool FindKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    bool FindControllerKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
};

class UConvertedRobotAnimInstance : public UAnimInstance
{
    bool HasIntroduced;
    bool IsWalking;
    bool IsIntroducing;
    bool ShouldSit;
    bool StopSit;
    bool ShouldCollapse;
    bool IsPoweredDown;
    float WalkingRate;
    float NormalWalkSpeed;

};

class UConvertedRobotTurretAnimInstance : public UAnimInstance
{
    bool ReplaceBurstAttack;
    bool IsFiringGrenades;
    bool IsDoingSpecialAttack;
    bool ShouldFireBullets;
    bool StopFiringBullets;
    bool ShouldCannonDeploy;

};

class UCoolDownItemAggregator : public UItemAggregator
{
    float CooldownDuration;
    class USoundBase* AudioCoolDownFinished;
    float CooldownRemaining;
    bool CoolDownIsPaused;
    class AItem* Item;

    void SetPaused(bool IsPaused);
    bool IsCoolingDown();
    float GetCoolDownProgress();
    void ActivateCoolDown(bool startPaused);
};

class UCoolDownProgressWidget : public UUserWidget
{
    FCoolDownProgressStyle Style;
    TWeakObjectPtr<class UObject> CoolDownObject;
    bool bIsFinished;

    void UpdateProgress(float Progress);
    void ReceiveUpdateProgress(float InProgress);
    void ReceiveInitWidget();
    void Init(class UObject* InCoolDownObject, const FCoolDownProgressStyle& InStyle);
};

class UCooldownDamageCondition : public UDamageCondition
{
    float CoolDown;

};

class UCooldownUpgrade : public UStandardItemUpgrade
{

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player);
};

class UCoreInfuserAnimInstance : public UAnimInstance
{
    bool PoweredUp;
    bool IsOpen;
    bool IsRewardSelected;

    void OnRewardSelected();
};

class UCoreInfuserPlatformAnimInstance : public UAnimInstance
{
    bool keyInserted;
    bool dispensRewards;

};

class UCraftingCostLibrary : public UBlueprintFunctionLibrary
{

    FCraftingCost ConvertResourcesToFashionite(TArray<FCraftingCost> InResources);
};

class UCraftingMaterialMutator : public UMutator
{
    float modifier;

};

class UCreateComponentPerkActivation : public UFloatPerkActivation
{
    TSoftClassPtr<UFloatPerkComponent> ComponentClass;

};

class UCreditsResourceData : public UResourceData
{
};

class UCritterDescriptor : public UBaseCritterDescriptor
{
    FIRandRange SpawnAmountPerRoom;
    float SpawnChancePerRoom;
    FIRandRange SpawnAmountPerLevel;

};

class UCritterManager : public UActorComponent
{
    bool DisableCritters;
    float ActivationRange;

};

class UCrossbowProjectileControlled : public UActorComponent
{
    class USceneComponent* HomingTarget;
    class ACrossbowProjectileBase* CastedOwner;

    void UpdateHomingTarget();
    void Server_UpdateHomingTarget(const FVector& Target);
    void CancelControl();
    void All_UpdateHomingTarget(const FVector& Target);
};

class UCrossbowProjectileMagnetic : public UActorComponent
{
    TArray<class TSubclassOf<UStatusEffect>> ElectricEffects;
    TWeakObjectPtr<class AFSDPawn> TargetEnemy;
    float OverlapCheckSize;

};

class UCrossbowProjectileRecallable : public UActorComponent
{
    class UInstantUsable* Usable;
    class APlayerCharacter* RecallTarget;
    float RecallStartTime;
    float RecallSpeed;
    FTransform StartTransform;
    class UInterpolatedFirstPersonStaticMeshComponent* FPMeshComponent;
    bool IsRecallable;

    void Server_SetRecallTarget(class APlayerCharacter* Player, const FTransform& startTrans);
};

class UCrossbowProjectileRicochet : public UActorComponent
{
    class UNiagaraSystem* NiagaraTrailParticleSystem;
    int32 RicochetMax;
    float RicochetRange;
    class ACrossbowProjectileBase* CastedOwner;

    void Ricochet(const FHitResult& HitResult, const FVector& RelativeLocation);
};

class UCrossbowStuckProjectileEffect : public UActorComponent
{
};

class UCrossbowStuckProjectileEffectApplication : public UCrossbowStuckProjectileEffect
{
    float SearchSphereSize;
    float SearchTime;
    bool CurrentlyActive;

};

class UCrossbowStuckProjectileEffectBanshee : public UCrossbowStuckProjectileEffect
{
    float SearchSphereSize;
    float SearchTime;

};

class UCrossbowStuckProjectileEffectElectric : public UCrossbowStuckProjectileEffect
{
    TSubclassOf<class ACrossbowElectroBeam> PlasmaBeamClass;
    TSubclassOf<class AActor> ElectrocutionActorClass;
    float PlasmaLineMaxRange;
    TWeakObjectPtr<class AActor> ElectrocutionActor;

    void OnElectrocutionActorDestroyed(class AActor* Actor);
};

class UCrossbowStuckProjectileEffectExploding : public UCrossbowStuckProjectileEffect
{
    class USoundCue* ChemicalSoundCue;
    class UAudioComponent* ChemicalAudioComponent;
    float ChemicalReactionDelay;

    void StartTimeoutTimer(class UHealthComponentBase* destroyed);
    void EnableTimeOut();
};

class UCrossbowUpgrade : public UStandardItemUpgrade
{
    ECrossbowUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, TSubclassOf<class ACrossbowProjectileBase> Projectile, class AFSDPlayerState* Player, ECrossbowUpgrades upgradeType);
};

class UCrosshairAggregator : public UItemAggregator
{
    FCrosshairAggregatorOnCrosshairCreated OnCrosshairCreated;
    void CrosshairCreated(class UUserWidget* Crosshair);
    class UUserWidget* CrosshairWidget;
    TSubclassOf<class UUserWidget> CrossHairType;
    class UCustomAmmoCountWidget* CustomAmmoCounterWidget;
    TSubclassOf<class UCustomAmmoCountWidget> CustomAmmoCounterType;

    void SetCrosshair(class UUserWidget* Widget);
    class UUserWidget* GetOrCreateCrosshair();
    class UCustomAmmoCountWidget* GetCustomAmmoCounterWidget(class UObject* WorldContext, class APlayerController* InOwner);
};

class UCrosshairWidget : public UUserWidget
{

    void SetData(class AItem* Item);
    void OnUpgraded(class AItem* Item);
};

class UCryoSprayAnimInstance : public UAnimInstance
{
    class ACryosprayItem* Weapon;
    bool IsFiring;
    float ChargeProgress;
    FRotator ChargeRotation;
    float ChargeBlend;
    float Pressure;

};

class UCryoSprayProjectileUpgrade : public UItemUpgrade
{
    float MaxFireCost;
    float BaseArch;
    TSubclassOf<class AProjectile> ProjectileClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, TSubclassOf<class AProjectile> ProjectileClass);
};

class UCryoSprayUpgrade : public UStandardItemUpgrade
{
    ECryoSprayUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, ECryoSprayUpgrades upgradeType);
};

class UCustomAmmoCountWidget : public UUserWidget
{
    TWeakObjectPtr<class AItem> Item;

    void ReceiveItemSet();
};

class UCustomKeyBindingLibrary : public UBlueprintFunctionLibrary
{
};

class UCustomObjectAttackerPositioning : public UAttackerPositioningComponent
{
    class UHealthComponentBase* Health;
    TArray<FVector> AttackerPositions;

};

class UCustomRichTextDecorator : public URichTextBlockDecorator
{
    class URichTextBlock* RichTextBlock;

};

class UDLCAquisition : public UItemAquisitionBase
{
    class UDLCBase* RequiredDLC;

};

class UDLCBase : public UDataAsset
{

    void QueryAllDLC();
    bool IsUnlocked();
    bool IsDLCUnLocked(class UDLCBase* dlc);
};

class UDSTelemetryWrapper : public UGameInstanceSubsystem
{
    class UDSTelemetry* Telemetry;

    void RecordTreeOfVanityClaim(int32 NodeID);
    void RecordSpecialEventHappening(FString EventName, bool SuccessfullySpawned);
    void RecordSeasonXpGained(int32 Gained, int32 LastLevel, bool Positive);
    void RecordSeasonLevelUp();
    void RecordSeasonChallengeReroll(int32 ChallengeIndex, class USeasonChallenge* Challenge);
    void RecordOpenScreen(FString ScreenName, bool RecordRank);
    void RecordMissionStart();
    void RecordMissionEnd(int32 XPReward, int32 CreditReward);
    void RecordMachineEventEnd(FString EventName, bool WasCompleted, int32 completionTime);
    void RecordKickPlayer(FString reason, class APlayerController* KickedPlayer);
    void RecordDeepDiveStageEnd(FString MissionName, int32 StageTime, int32 TimeSinceStartOfDive, int32 TotalTime, int32 NitraLeft);
    void RecordContinuousDamage(class AActor* DamageCauser);
    void RecordCommunityEvents(FString EventCategory, FString EventAction, FString EventLabel, const int32 EventValue);
    void RecordBossFightEnd(FString BossName, bool WasBossKilled, int32 NumBossKills);
    void OnNewProceduralSetup();
    void OnNewPlayer(class AFSDPlayerController* Controller);
    void OnNewMission(class UGeneratedMission* mission);
    void OnNewCharacter();
    void OnCharacterSaveChanged(TSubclassOf<class APlayerCharacter> CharacterClass, int32 Level, float Progress);
    void OnCharacterPromoted(TSubclassOf<class APlayerCharacter> CharacterClass, int32 RetirementCount);
};

class UDailyDealSettings : public UDataAsset
{
    TArray<FDailyDealSetup> DailyDeals;

    bool IsDailyDealBought(class UObject* WorldContextObject);
    int32 GetDailyDealSeed();
    void GetDailyDeal(FDailyDeal& outDeal);
    bool CanAffordDailyDeal(class UObject* WorldContextObject);
    bool BuyDailyDeal(class UObject* WorldContextObject);
};

class UDamageAttackComponent : public UAttackBaseComponent
{
    class UDamageComponent* Damage;

};

class UDamageBonusBase : public UDataAsset
{
    class UDamageCondition* Condition;

    class UDamageBonusBase* AddDamageBonusToComponent(TSubclassOf<class UDamageBonusBase> damageBonusClass, class UDamageComponent* DamageComponent);
};

class UDamageClass : public UDataAsset
{
    class UPawnStat* ResistanceStat;
    float RagdollScale;
    bool BypassesShield;
    bool AffectedByFriendlyFire;
    class UTexture2D* IndicatorImage;
    class UDialogDataAsset* DamageShout;
    class UDamageImpulse* DefaultDamageImpulse;

};

class UDamageComponent : public UActorComponent
{
    FDamageComponentOnTargetKilledEvent OnTargetKilledEvent;
    void OnEnemyKilledDelegate(class AActor* Target, class UFSDPhysicalMaterial* PhysicalMaterial, bool bWasDirectHit);
    FDamageComponentOnTargetDamagedEvent OnTargetDamagedEvent;
    void OnEnemyDamagedDelegate(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* Component, class UFSDPhysicalMaterial* PhysicalMaterial);
    FDamageComponentOnNoTargetHitEvent OnNoTargetHitEvent;
    void OnNoTargetHit();
    FDamageComponentOnHitDeadTarget OnHitDeadTarget;
    void OnNoTargetHit();
    FDamageComponentOnAsyncAoE_Complete OnAsyncAoE_Complete;
    void OnAsyncAoE_Complete();
    EDamageComponentType DamageComponentType;
    class UDamageImpulse* DamageImpulse;
    float Damage;
    float armorDamageMultiplier;
    float ArmorPenetration;
    bool ShattersArmor;
    class UDamageClass* DamageClass;
    EArmorDamageType ArmorDamageType;
    float WeakpointDamageMultiplier;
    float FrozenDamageBonusScale;
    float FriendlyFireModifier;
    float SelfFriendlyFireMultiplier;
    FGameplayTag FriendlyFireTag;
    bool StaggerOnlyOnWeakpointHit;
    float StaggerChance;
    float StaggerDuration;
    float FearFactor;
    TArray<class UDamageBonusBase*> DamageBonuses;
    TArray<class UDamageModifier*> DamageModifiers;
    TArray<class UDamageTag*> damageTags;
    bool UseAreaOfEffect;
    float RadialDamage;
    bool NoFriendlyFireFromRadial;
    class UDamageClass* RadialDamageClass;
    float MinDamagePct;
    float DamageRadius;
    float MaxDamageRadius;

    void PreTestDamageConditions();
    class UDamageComponent* GetDamageComponentCDO(TSubclassOf<class UDamageComponent> DamageComponent);
    float GetDamage();
    void DamageTargetFromHit(const FHitResult& HitResult);
    void DamageTarget_CDO(const FVector& Location, class AActor* Owner, class AActor* hitActor);
    void DamageTarget(class AActor* Target, const FVector& Location, class UPrimitiveComponent* HitComponent, class UFSDPhysicalMaterial* PhysMat, int32 BoneIndex);
    void DamageArmor_Server(class AActor* Target, class UPrimitiveComponent* collider, int32 BoneIndex, const FVector& impactLocation);
    void DamageArmor_All(class AActor* Target, class UPrimitiveComponent* collider, int32 BoneIndex);
    bool ArmorSupportsLocalOnlyCall(class AActor* Target);
};

class UDamageCondition : public UObject
{
};

class UDamageConversionBonus : public UDamageBonusBase
{
    class UDamageClass* DamageClass;
    float ConversionPercentage;
    bool DamageIsAdded;

};

class UDamageConversionUpgrade : public UItemUpgrade
{
    class UDamageClass* DamageClass;
    float ConversionPercentage;
    bool DamageIsAdded;
    TSubclassOf<class AActor> RequiredClass;
    class UDamageCondition* Condition;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, TSubclassOf<class AActor> upgradedItem, class AFSDPlayerState* Player, class UDamageClass* DamageClass);
};

class UDamageFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetPhysicalMaterialOnHit(class UFSDPhysicalMaterial* PhysMat, FHitResult& Hit);
    bool IsGibbedDeath(const TArray<class UDamageTag*>& Tags);
    bool IsExplosiveDeath(class UObject* WorldContext, class UPawnStatsComponent* PawnStats, const TArray<class UDamageTag*>& Tags);
    bool IsCorrosiveDeath(class UDamageClass* DamageClass, const TArray<class UDamageTag*>& Tags);
    bool IsCookedDeath(const TArray<class UDamageTag*>& Tags);
    bool IsBurnDeath(class UDamageClass* DamageClass, const TArray<class UDamageTag*>& Tags);
    FVector GetForceFromDamageImpulse(const class AActor*& Target, const FDamageData& DamageData);
    class UDamageImpulse* GetDamageImpulse(const FDamageData& DamageData);
    int32 FindClosestBoneIndex(const class USkeletalMeshComponent*& Mesh, const FVector& Location, class ULimbDismembermentList* dismembermentList, float MaxDistance);
    FName FindClosestBone(const class USkeletalMeshComponent*& Mesh, const FVector& Location, class ULimbDismembermentList* dismembermentList, float MaxDistance);
};

class UDamageHitCountEffect : public UWeaponHitCountEffect
{
    float DamagePerHit;
    class UDamageClass* DamageClass;
    class UParticleSystem* DamageParticle;
    class USoundCue* DamageSound;
    bool DeadBugWalkingTargetMarking;
    float ExtraDamageForCalculatingDBW;
    TSubclassOf<class UStatusEffect> DeadBugWalkingSTE;

};

class UDamageImpulse : public UDataAsset
{
    float ImpactForce;
    float UpwardForceScale;
    EImpulseDirectionSource ImpulseSource;
    bool ApplyImpulseToWholeBody;

};

class UDamageModifier : public UDataAsset
{
    class UDamageCondition* Condition;
    TArray<FDamageModifierItem> Modifiers;

};

class UDamageSettings : public UDataAsset
{
    float TemperatureChangePerColdDamagePoint;
    float TemperatureChangePerIceDamagePoint;
    float TemperatureChangePerHeatDamagePoint;
    float TemperatureChangePerFireDamagePoint;
    float TemperatureShockActivationWindow;
    float FrozenDamageBonus;
    TSubclassOf<class UStatusEffect> EnemyOnFireStatusEffect;
    TSubclassOf<class UStatusEffect> PlayerOnFireStatusEffect;
    TSubclassOf<class UStatusEffect> TemperatureShockFromFrozenStatusEffect;
    TSubclassOf<class UStatusEffect> TemperatureShockFromBurningStatusEffect;
    float InfectionPerDamagePoint;
    class UDamageComponent* ArmorShatterDamage;
    class UDamageComponent* ChemicalExplosionDamage;
    class UNiagaraSystem* ArmorShatterEmitter;
    class USoundCue* ArmorShatterSound;
    TArray<FDecalData> ImpactDecals;
    FRuntimeFloatCurve ArmorToArmorDamageBreakingCurve;
    float RadialHealthArmorDamageFalloff;
    int32 HealthArmorBonesAffectedByRadialDamage;
    class UDamageTag* DetonateFrozen;
    class UDamageTag* DetonateOnFire;
    class UDamageTag* DirectHit;
    class UDamageTag* MeltTarget;
    class UDamageTag* CookTarget;
    class UDamageTag* GibTarget;
    class UDamageTag* ExplodeOnDeath;
    class UDamageTag* IgnoreBodypartDamageReduction;
    class UDamageImpulse* DefaultDamageImpulse;
    class UDamageImpulse* DoTDamageImpulse;
    float RagdollGlobalForceMultiplier;

};

class UDamageSubsystem : public UGameInstanceSubsystem
{
    TArray<FDamageSubsystemItem> Items;

};

class UDamageTag : public UDataAsset
{
};

class UDamageTagBonusUpgrade : public UItemUpgrade
{
    TArray<class UDamageTag*> Tags;

};

class UDamageUpgrade : public UStandardItemUpgrade
{
    EDamageUpgrade upgradeType;
    EDamageComponentType DamageComponentType;
    TSubclassOf<class AActor> RequiredClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, TSubclassOf<class AActor> upgradedItem, class AFSDPlayerState* Player, EDamageUpgrade upgradeType, EDamageComponentType DamageComponentType);
};

class UDanceSettings : public UDataAsset
{
    TArray<FDanceItem> DanceMoves;

};

class UDashPoints : public UActorComponent
{
    FDashPointsOnStartDashEvent OnStartDashEvent;
    void DashSig();
    FDashPointsOnStopDashEvent OnStopDashEvent;
    void DashSig();
    FVector_NetQuantize DashLocation;
    FRuntimeFloatCurve DashSpeedCurve;
    float PointOffset;
    float MaxRangeFromPlayer;
    float MinRangeFromPlayer;
    float MinHeightAboveTarget;
    float MaxHeightAboveTarget;
    float safeReduction;
    float AcceptedDashradius;
    float DashSpeed;
    float SlowdownRadius;
    int32 IgnoreTheClosestPoints;
    EDashPointsGenerationMode GenerationMode;
    bool IsDashing;
    bool IgnoreRules;

    void UpdateDashPointData();
    void StopDashing();
    void StartDashing();
    void OnRep_Dashing();
    void OnParentDeath(class UHealthComponentBase* Health);
    FVector GetDashPoint(class AActor* fromTarget, bool& success);
};

class UDataDepositObjective : public UObjective
{
    TSoftClassPtr<AFacilityPowerStation> TowerClass;
    class UDebrisPositioning* DebrisPositioning;
    bool Complete;

    void OnRep_Complete();
    void OnHackingProgressChange(float Progress);
};

class UDeadStateComponent : public UCharacterStateComponent
{
    float respawnDelay;

    void SetDeathParameters(float respawnDelay, float effectDelay, class UAnimMontage* deathMontage, class UParticleSystem* deathEffect, bool useAnimationTimeAsRespawnTime);
};

class UDealWidget : public UUserWidget
{

    void UpdateDealText();
};

class UDebrisActorComponent : public USceneComponent
{
    bool Enabled;

};

class UDebrisActorMutator : public UMutator
{
    TSoftClassPtr<ADebrisDataActor> DebrisActor;

};

class UDebrisBase : public UCSGTriangleMapper
{
    class UObject* CaveInfluencer;
    FRuntimeFloatCurve InfluencerDensityCurve;
    FRuntimeFloatCurve InfluencerSizeCurve;
    class UCurveFloat* CaveInfluenceCurve;
    class UCurveFloat* CaveInflunceSizeCurve;

};

class UDebrisCarved : public UDebrisBase
{
    EDebrisCarvedType CarverType;
    TArray<FUDebrisCarveMesh> Meshes;
    class UTerrainMaterial* TerrainMaterial;
    FDebrisInfluence CaveInfluenceToAdd;
    ECarveFilterType Filter;
    float ExpensiveNoise;
    CarveOptionsCellSize CarveCellSize;
    int32 MinNumCarves;
    int32 MaxNumCarves;
    float CarveOffsetRadius;
    TSubclassOf<class AActor> SpawnAttachClass;
    float AttachSpawnOffsetDistance;

};

class UDebrisCellNoise : public UDataAsset
{
    int32 Seed;
    FVector CellSize;
    int32 NumValues;
    FVector InvCellSize;
    bool Initialized;

};

class UDebrisDataComponent : public UDebrisActorComponent
{
    class UDebrisBase* Debris;

};

class UDebrisInstances : public UHierarchicalInstancedStaticMeshComponent
{
    class UDebrisBase* DebrisBase;
    int32 DebrisIndex;

};

class UDebrisItemComponent : public UDebrisActorComponent
{
    class UDebrisPositioning* Debris;
    TArray<FDebrisItemActorItem> Actors;
    EDebrisItemPass ItemPass;
    float InfluenceRange;
    float MinDistanceToImportantLocations;
    bool UseAmount;
    FIRandRange Amount;
    int32 AmountSearchMultiplier;

};

class UDebrisMesh : public UDebrisBase
{
    TArray<FDebrisStaticMesh> Meshes;
    class UMaterialInterface* CommonMaterial;
    FText InGameName;
    FName GemTrackerName;
    FText InGameDescription;
    float StartCullDistance;
    float EndCullDistance;

};

class UDebrisPositioning : public UDebrisBase
{
};

class UDebrisProbabilityComponent : public UDebrisActorComponent
{
    FRandRange ProbabilityRange;
    bool IsProbabilityShared;

};

class UDebrisSet : public UDataAsset
{
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;

};

class UDebrisStaticCarved : public UDebrisBase
{
    EDebrisCarvedType CarverType;
    TArray<FUDebrisStaticCarveMesh> Meshes;
    class UTerrainMaterial* TerrainMaterial;
    FDebrisInfluence CaveInfluenceToAdd;
    ECarveFilterType Filter;
    float CarveOffsetRadius;
    TSubclassOf<class AActor> SpawnAttachClass;
    float AttachSpawnOffsetDistance;

};

class UDebrisVeinComponent : public UDebrisActorComponent
{
    class UTerrainMaterial* Material;
    EDebrisCarvedType CarverType;
    class UVeinResourceCreator* VeinCreator;

};

class UDecalManager : public UActorComponent
{

    void SpawnDecal(const FVector& Location, const FVector& Normal, class UFSDPhysicalMaterial* PhysMat);
};

class UDeepDive : public UObject
{
    TArray<class UGeneratedMission*> missions;
    class UBiome* Biome;
    TArray<FDeepDiveRewardItem> GivenRewards;
    int32 MissionsCompleted;
    TArray<int32> StagesCompleted;
    int32 CurrentMissionIndex;
    class UDeepDiveTemplate* Template;
    FText DeepDiveName;
    int32 BestTime;

    bool IsCompleted();
    bool HasCompletedStage(int32 stageIndex);
    FDeepDiveRewardItem GetGivenRewardAtStage(int32 stageIndex);
};

class UDeepDiveFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsEliteDeepDiveMission(class UObject* WorldContextObject, class UGeneratedMission* mission);
    bool IsEliteDeepDive(class UObject* WorldContextObject, class UDeepDive* DeepDive);
    bool GetHasEverCompletedDeepDive(class UObject* WorldContextObject, class UDeepDiveTemplate* DeepDive);
    class UDeepDive* GetDeepDiveFromMission(class UObject* WorldContextObject, const class UGeneratedMission* mission);
};

class UDeepDiveManager : public UObject
{
    FDeepDiveManagerOnDeepDivesRefresh OnDeepDivesRefresh;
    void DeepDiveRefreshDelegate();
    bool LockSeed;
    class UFSDEventsHandler* EventsHandler;
    class UDeepDive* ActiveNormalDeepDive;
    class UDeepDive* ActiveHardDeepDive;
    class UDeepDive* ActiveDeepDive;
    class UDeepDive* DebugDeepDive;
    class UGeneratedMission* CurrentMission;
    float currentDepth;
    TMap<int32, FDeepDiveBank> DeepDiveBank;
    int32 BackendDataValid;
    FDateTime BackendExpirationTime;
    int32 BackendSeed;

    void SetDeepDive(class UDeepDive* DeepDive);
    void ReInitialize();
    void MarkGivenRewards();
    class UGeneratedMission* GetCurrentSingleMission();
    int32 GetCurrentDeepDiveStage();
    class UDeepDive* GetActiveNormalDeepDive();
    class UDeepDive* GetActiveHardDeepDive();
    class UDeepDive* GetActiveDeepDive();
    class UDeepDive* GenerateDebugDeepDive(TArray<FDeepDiveTesterItem> stages, class UBiome* Biome, bool IsElite);
    int32 FindDeepDiveSeed(class UDeepDive* DeepDive);
    void DeepDiveRefreshDelegate__DelegateSignature();
    bool CompleteCurrentSingleMission();
};

class UDeepDiveSettings : public UDataAsset
{
    class UDeepDiveTemplate* NormalTemplate;
    class UDeepDiveTemplate* HardTemplate;
    TArray<class UMutator*> BaseMutators;
    TArray<class UMissionMutator*> Mutators;
    TArray<class UMissionWarning*> Warnings;
    TArray<class UDialogDataAsset*> DeepDiveMissionCompleteShouts;
    TArray<FDeepDiveLoaderSequence> LoaderSequnces;
    class UMissionNameBank* DeepDiveNameBank;
    TSoftClassPtr<UUserWidget> MissionBar;
    TSoftClassPtr<UUserWidget> MissionEndScreen_Success;
    TSoftClassPtr<UUserWidget> MissionEndScreen_Failure;

};

class UDeepDiveTemplate : public USavableDataAsset
{
    TArray<class UDifficultySetting*> Difficulties;
    TArray<FDeepDiveTemplateItem> missions;
    TArray<ESchematicType> Rewards;
    int32 CreditsPerPrimaryObjective;
    int32 CreditsPerSecondaryObjective;
    int32 XPPerPrimaryObjective;
    int32 XPPerSecondaryObjective;
    float HazardBonus;
    FRandInterval MutatorCount;
    FRandInterval WarningCount;

    bool IsDurationAllowed(class UMissionTemplate* mission, class UMissionDuration* Duration);
    bool IsComplexityAllowed(class UMissionTemplate* mission, class UMissionComplexity* Complexity);
    ESchematicType GetStageRewardType(int32 stageIndex);
};

class UDeepPatherFinderCharacterAfflictionComponent : public UPawnAfflictionComponent
{
    class ADeepPathfinderCharacter* Character;

};

class UDeepPathfinderMovement : public UPawnMovementComponent
{
    bool UseDormancy;
    float MaxPawnSpeed;
    float StrafeSpeed;
    float MinSlowdownAngle;
    float MaxSlowdownAngle;
    float MaxStrafeDistance;
    float AlignDirectionSpeed;
    float FleeSpeedBoostMultiplier;
    float MaxAcceleration;
    float MaxBrakingDeceleration;
    float AngleSpeedFilterFactor;
    uint32 AIAvoidanceWeight;
    DeepPathFinderType PathfinderType;
    DeepPathFinderSize PathfinderSize;
    ETeleportType MovementPhysicsType;
    DeepPathFinderPreference PathfinderPreference;
    bool AlignTowardsTargetIfStationary;
    float AlignToTargetMinRequiredAngle;
    bool AllowSlowTickRateWhenNotVisible;
    bool ForceAPathIfNoneFound;
    bool DrawServerPath;
    FDeepPathfinderMovementOnPathBegin OnPathBegin;
    void PathBegin();
    FDeepPathfinderMovementOnPauseMovementElapsed OnPauseMovementElapsed;
    void PauseMovementElapsed();
    FDeepPathfinderMovementOnPathFinished OnPathFinished;
    void PathFinished(bool success);
    FDeepPathfinderMovementOnRefreshDestination OnRefreshDestination;
    void RefreshDestination();
    FDeepPathfinderMovementOnStateChanged OnStateChanged;
    void PathStateChangedDelegate(EDeepMovementState State);
    class ADeepCSGWorld* CSGWorld;
    uint32 PathMovedDist;
    uint32 LocalPathMovedDist;
    FDeepRepPath Path;
    class UFakeMoverSettings* MoveSettings;
    class AActor* TargetActor;
    int32 CurrentPathIndex;
    float CurrentPathFraction;
    FVector Destination;
    class AActor* DestinationActor;
    float AcceptanceRadius;
    bool OnlyPartPath;
    float PauseMovementTime;
    EDeepMovementMode MoveMode;
    class UPawnStatsComponent* PawnStats;
    FVector LastForwardDir;
    float VerticalAngleSpeed;
    float HorizontalAngleSpeed;
    bool IsStrafing;
    bool HasOustandingPathRequest;
    bool LastPathReachedPreciseDestination;
    float PostponedTickTime;
    bool LastMoveSuccessful;
    bool HandleRotation;
    bool TickAfterOwnerDeath;
    FHandleRotationOptions HandleRotationOptions;
    FVector UnfilteredPosition;
    FVector LastDestPosUsed;
    float DampOmega;
    bool UseMovementSpring;
    bool SnapToPathfinderOnFirstMove;
    FFakeMoverState FakePhysicsMove;
    float FakeSyncTime;

    void UpdateTargetActor(class AActor* NewTarget);
    void UpdateDestination(const FVector& Dest);
    void UnPauseMovement();
    void TeleportTo(const FVector& destLoc, const FRotator& destRot);
    void StopMove();
    void StopAttackStance();
    bool StartMoveToActor(class AActor* Dest, float AcceptanceRadius, bool ToCenterOfMass);
    bool StartMoveTo(const FVector& Dest, float AcceptanceRadius);
    bool StartFleeFrom(const FVector& dangerPos, float Distance);
    void StartFakePhysicsMoveSet(class UFakeMoverSettings* MoveSettings);
    void StartFakePhysics(const FVector& Vel);
    void StartAttackStance(const FVector& stancePos);
    void SnapToPathfinder();
    void SetSlowDownAngles(const float Min, const float Max);
    void SetMaxSpeed(const float Speed);
    void SetMaxAcceleration(float Value);
    void SetHandleRotation(const bool flag);
    void SetFreezeAlignment(bool Freeze);
    void SetControlledExternally(bool controlled);
    void PauseMovement(float Time);
    bool PathExistTo(const FVector& Dest);
    bool PathExistsBetween(const FVector& From, const FVector& To);
    void OnRep_PathMovedDist(uint32 lastPathMovedDist);
    void OnRep_Path(const FDeepRepPath& oldPath);
    void OnRep_MoveSettings(const class UFakeMoverSettings* MoveSettings);
    bool IsFreezeAlignmentSet();
    float GetVerticalAngleSpeed();
    void GetRandomSpawnPointAtApproximateDistance_Async(const FVector& Origin, float Distance, bool& success, FVector& outPos, FLatentActionInfo LatentInfo);
    void GetRandomReachablePointAtApproximateDistance_Async(const FVector& Origin, float Distance, bool& success, FVector& outPos, FLatentActionInfo LatentInfo);
    bool GetRandomReachablePointAtApproximateDistance(const FVector& Origin, float Distance, FVector& outPos);
    FVector GetPathForwardDirection();
    DeepPathFinderType GetPathfinderType();
    DeepPathFinderSize GetPathfinderSize();
    EDeepMovementState GetMovementState();
    float GetMaxAcceleration();
    bool GetIsStrafing();
    float GetHorizontalAngleSpeed();
    FVector GetCurrentMovePos();
    class UFakeMoverSettings* GetCurrentFakePhysicsMoveSet();
    float GetApproximatePathLength(FVector Start, FVector End);
    bool FlyToConnectedPosition(const FVector& destPos);
    bool FindPointKeepingDistance(const FVector& Origin, float MinDistance, float MaxDistance, const FVector& Target, float idealTargetDistance, FVector& outPos);
    FVector FindPathfinderPointBelow(const FVector& Pos, float HeightOffset);
    FVector FindPathfinderPointAbove(const FVector& Pos, float HeightOffset);
    FVector FindPathfinderOffsetPoint(const FVector& Pos, const EOffsetFrom offsetFrom, float HeightOffset);
    FVector FindNearestPathfinderPointOverrideType(const FVector& Pos, DeepPathFinderType overrideType, float MaxDistance);
    void FindNearestPathfinderPoint_Async(const FVector& Pos, float MaxDistance, bool& success, FVector& outPos, FLatentActionInfo LatentInfo);
    FVector FindNearestPathfinderPoint(const FVector& Pos, float MaxDistance);
    FVector FindNearestConnectedPathfinderPoint(const FVector& Pos, float MaxDistance);
    FQuat CalcPathfinderOrientation(const FVector& Pos, const FVector& forwardDir);
    bool BackOffFrom(const FVector& dangerPos, float Distance);
    void AddFakeMoverImpulse(const FVector& Impulse);
};

class UDeepPathfinderSceneComponent : public USceneComponent
{
};

class UDefenseObjective : public UObjective
{
    int32 DefensePoints;
    int32 PointsDefended;
    TArray<TSoftClassPtr<ADefensePointActor>> ObjectiveDefenseClasses;
    TArray<class ADefensePointActor*> ActiveObjectiveDefenseActors;
    class UDebrisPositioning* DebrisPositioning;

    void PointDefended();
    void OnRep_PointsRepaired();
    void OnDefensePointsSpawned();
};

class UDestinationActorComponent : public UActorComponent
{
    TWeakObjectPtr<class AActor> DestinationActor;

    float GetDistToDestinationActor();
};

class UDestructibleSubHealthComponent : public USubHealthComponent
{
    float MaxHealth;
    float RadialDamageResistance;
    bool AllowInderectDamage;
    float Damage;
    class USceneComponent* ArmorComponent;
    FDestructibleSubHealthComponentOnDestroyed OnDestroyed;
    void SubHealthDestroyed(class UDestructibleSubHealthComponent* subHealth);

    void SubHealthDestroyed__DelegateSignature(class UDestructibleSubHealthComponent* subHealth);
    void ResetHealth();
    void OnRep_Damage(float oldDamage);
};

class UDetPackUpgrade : public UStandardItemUpgrade
{
    EDetPackUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, EDetPackUpgrades upgradeType);
};

class UDetailNoise : public UFloodFillSettings
{
    float NoiseRange;

};

class UDialogDataAsset : public UDataAsset
{
    bool Enabled;
    bool AudioOnly;
    bool SelectUsingWeight;
    float ShoutDelay;
    float ShoutCoolDown;
    float ShoutChance;
    TArray<FDialogStruct> Entries;
    TArray<class USoundSubmixBase*> SubmixSends;
    TArray<int32> Playlist;

    int32 SelectIndex(class UObject* WorldContext);
    bool SelectEntry(class UObject* WorldContext, FDialogStruct& Dialog);
    FDialogStruct GetShout(int32 Index);
};

class UDifficultyManager : public UActorComponent
{
    float MinModifierEnemyCount;
    float MinModifierAttackCooldown;
    float MinModifierSpeed;
    int32 ForcedPlayerCount;
    class AFSDGameMode* GameMode;
    class AFSDGameState* GameState;

    class UDifficultySetting* SelectDifficulty(int32 Index);
    float GetSpeedModifier();
    float GetSmallEnemyDamageResistance();
    float GetPointExtractionScaler();
    float GetExtraLargeEnemyDamageResistanceD();
    float GetExtraLargeEnemyDamageResistanceC();
    float GetExtraLargeEnemyDamageResistanceB();
    float GetExtraLargeEnemyDamageResistance();
    float GetEnemyDamageResistance();
    float GetEnemyDamageModifier();
    float GetEnemyCountModifier();
    class UDifficultySetting* GetCurrentDifficulty();
    float GetBossDifficultyScaler();
};

class UDifficultyMutator : public UMutator
{
    float ExtraLargeEnemyDamageResistanceMultiplier;
    float EnemyDamageResistanceMultiplier;
    float SmallEnemyDamageResistanceMultiplier;
    float EnemyDamageModifierMultiplier;
    float EnemyCountModifierMultiplier;
    float WeakpointDamageMultiplier;
    float HazardBonus;
    float ProjectileSpeedModifier;
    float AttackCooldownModifier;
    float SpeedModifier;

};

class UDifficultySetting : public USavableDataAsset
{
    FText DifficultyName;
    FText ShortDifficultyName;
    FText UnlockRequirementDescription;
    TSubclassOf<class UCampaign> CampaignRequirement;
    TSubclassOf<class UCampaign> SelectedByDefaultCampaignRequirement;
    float EnvironmentalDamageModifier;
    TArray<float> ExtraLargeEnemyDamageResistance;
    TArray<float> ExtraLargeEnemyDamageResistanceB;
    TArray<float> ExtraLargeEnemyDamageResistanceC;
    TArray<float> ExtraLargeEnemyDamageResistanceD;
    TArray<float> EnemyDamageResistance;
    TArray<float> SmallEnemyDamageResistance;
    TArray<float> EnemyDamageModifier;
    float EnemyToEnemyDamageModifier;
    TArray<float> EnemyCountModifier;
    float BossDifficultyScaler;
    float PointExtractionScaler;
    FRandInterval EncounterDifficulty;
    FRandInterval StationaryDifficulty;
    float SpecialEncounterModifier;
    float HazardBonus;
    float FriendlyFireModifier;
    FRandInterval EnemyWaveInterval;
    FRandInterval EnemyNormalWaveInterval;
    FRandInterval EnemyNormalWaveDifficulty;
    float WaveStartDelayScale;
    FRandInterval EnemyDiversity;
    FRandInterval StationaryEnemyDiversity;
    FIRandRange DisruptiveEnemyPoolCount;
    int32 MinPoolSize;
    FVeteranComposition Veterans;
    float SpeedModifier;
    float AttackCooldownModifier;
    float ProjectileSpeedModifier;
    int32 DifficultyGroup;
    int32 DifficultyGroupIndex;
    TArray<class UMissionStat*> MissionCompletedStats;
    float HeathRegenerationMax;
    float ReviveHealthRatio;
    float EliteChanceModifier;
    float EliteCooldown;
    int32 MaxActiveElites;

    bool IsUnlocked(class UObject* WorldContext);
    int32 GetDifficultyIndex();
    float AddHazardBonus(float BaseValue);
};

class UDirectDamageCondition : public UDamageCondition
{
    EDirectDamageConditionEnum Type;

};

class UDiscordWrapper : public UObject
{
    FDiscordServerInviteData ServerInfo;
    FDiscordWrapperOnResponseSuccessChanged OnResponseSuccessChanged;
    void ResponseSuccessChanged(bool resp);
    bool LastResponseSuccessful;
    FDiscordWrapperOnDiscordEoMDataEvent OnDiscordEoMDataEvent;
    void DiscordEoMDataDelegate(bool HasEoM);
    bool UserIn;
    FDiscordRewardNotification rewardNotification;
    int32 UserInStatus;
    bool HasEoM;
    FDiscordEoMData EoMData;
    bool IsConnected;
    bool ServerInfoLoaded;
    FDiscordWrapperOnDiscordServerInfoLoaded OnDiscordServerInfoLoaded;
    void OnDiscordServerInfoLoaded();
    FDiscordWrapperOnDiscordServerCountLoaded OnDiscordServerCountLoaded;
    void OnDiscordServerCountLoaded(const FDiscordServerData& discordServerCount);
    FDiscordWrapperOnDiscordUserInServer OnDiscordUserInServer;
    void OnDiscordUserInServer(bool isInServer);

    void RequestUserInServer();
    void RequestFactionAdjustment(int32 Faction, bool force);
    void RequestEoMData();
    void RequestDiscordServerInfo();
    void RejectInviteSignature();
    void IgnoreInviteSignature();
    FString GetAvatarURL();
    void AdjustFaction();
    void AcceptInviteSignature();
};

class UDistanceToTargetDamageCondition : public UDamageCondition
{
    bool TestMaxDistance;
    float MaxDistance;
    float MinimumDistance;

};

class UDistributedGemResourceCreator : public UGemResourceCreator
{
    float MinDistanceBetweenGems;

};

class UDotEnemyArmorStatusEffectItem : public UStatusEffectItem
{
    FRandRange damageAmount;

};

class UDotStatusEffectItem : public UStatusEffectItem
{
    FRandRange damageAmount;
    bool OverrideDamageImpulse;
    class UDamageImpulse* DamageImpulseOverride;

};

class UDoubleDrillAggregator : public UCapacityBasedItemAggregator
{
};

class UDoubleDrillAnimInstance : public UAnimInstance
{
    float DrillSpeed;
    bool IsMining;
    bool IsGunslinging;
    class ADoubleDrillItem* Item;

};

class UDoubleDrillUpgrade : public UStandardItemUpgrade
{
    EDoubleDrillUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EDoubleDrillUpgradeType upgradeType);
};

class UDownedStateComponent : public UCharacterStateComponent
{
    FDeathIntroSettings Intro;
    float DownedHealthLossPerSecond;
    float TerrainRemovedFallThreshold;
    bool DownedBombActive;
    class UDamageComponent* DownedBombDamage;
    FDownedStateComponentOnEnableDownedBombUIEvent OnEnableDownedBombUIEvent;
    void EnableDownedBombUIDelegate(bool Active);

    void TriggerDownedBombDamage();
    void Server_TriggerDownedBomb();
    void Receive_TriggerDownedBomb();
    class UDamageComponent* CreateDownedBombDamage(TSubclassOf<class UDamageComponent> DamageClass);
};

class UDrillAnimInstance : public UAnimInstance
{
    class ARockCrackerDrill* Drill;
    float BuildProgress;
    bool Drilling;

};

class UDrinkEffectComponent : public UActorComponent
{
    float BeerEffectDurationSeconds;
    bool AutoDestroy;
    bool EffectIsActive;
    bool ActivatesOnlyOnceWhenDrinking;

    void StopEffect();
    void OnStopEffect();
    void OnStartEffect(class APlayerCharacter* Character);
    void OnChangedCharacter(class APlayerCharacter* changedToCharacter, UClass* DrinkEffectClass);
    bool GetActivateOnlyWhenDrinking();
};

class UDrinkSettings : public UDataAsset
{
    TArray<FBarleySpawnItem> BarleySpawns;
    FRandInterval BarleyAmount;
    TMap<UResourceData*, int32> SpecialBeerUnlockCost;
    TArray<class UDrinkableDataAsset*> Drinkables;

    TArray<class UDrinkableDataAsset*> GetBarDrinkables(class UObject* WorldContext, bool IncludeDailySpecial, bool includeNotUnlocked, bool includePlayerRankTooLow);
    class UDrinkableDataAsset* GetBarDailySpecial(class UObject* WorldContext, class UDrinkableDataAsset* currentDailySpecial);
};

class UDrinkableDataAsset : public USavableDataAsset
{
    FText DrinkableName;
    FText DrinkableDescription;
    int32 DrinkablePrice;
    bool IsSpecialBeer;
    TSoftObjectPtr<UTexture2D> DrinkableIcon;
    int32 RequiredPlayerRank;
    bool ParticipatesInFreeBeerEvent;
    EDrinkableAlcoholStrength AlcoholStrength;
    class UDrinkableDataAsset* SpecialEdition;
    class UDLCBase* RequiredDLC;
    bool bPlayFireworks;
    class UMissionStat* StatConsumed;
    class UMissionStat* StatRoundOrdered;
    TSoftClassPtr<ADrinkableActor> DrinkableActorClass;
    TSoftClassPtr<ADrinkableItem> DrinkableItemClass;
    class UDialogDataAsset* OrderShout;
    class UDialogDataAsset* OrderCheeringShout;
    class UDialogDataAsset* DrinkSaluteShout;
    class UTemporaryBuff* buff;
    TSoftClassPtr<UDrinkEffectComponent> DrinkEffect;
    TMap<UResourceData*, int32> UnlockCost;
    TMap<UResourceData*, int32> PurchaseCost;

    bool TryUnlockSpecialDrinks(class UObject* WorldContext);
    bool TryUnlockDrink(class UObject* WorldContext);
    bool TryPurchaseDrink(class UObject* WorldContext);
    void OnRoundOrdered(class APlayerCharacter* Character);
    bool MustBeUnlocked();
    bool IsUnlocked(class UObject* WorldContext);
    bool IsDrinkFree(class UObject* WorldContext);
    bool HasSpecialEdition();
    class UDrinkableDataAsset* GetSpecialEdition(class UObject* WorldContext);
    class UTexture2D* GetDrinkableIcon();
    bool AreSpecialDrinksUnlocked(class UObject* WorldContext);
};

class UDroneAbillityStatsComponent : public UActorComponent
{
    bool UseOwnArmorDamageMultiplier;

};

class UDroneCombatState : public UDroneStateComponentBase
{
    FGameplayTagQuery AttackOnOrderQuery;
    FGameplayTagQuery AttackOnSightQuery;

};

class UDroneDisplayActionComponent : public USceneComponent
{
    class UTextRenderComponent* DisplayText;

    void SetMode(EDroneActions droneAction);
};

class UDroneFollowState : public UDroneStateComponentBase
{
    class AActor* FollowTarget;
    float MaxFollowRadius;
    float MinFollowRadius;
    float UpdateLocationInterval;
    float UpdateLocationVariance;

};

class UDroneMiningState : public UDroneStateComponentBase
{
    class UDroneMiningToolBase* DroneMiningTool;
    class UTerrainMaterial* HeartStoneMateiral;
    float StartMiningRange;
    float MiningRange;
    float SameHitRadius;
    float MineRadius;
    int32 MiningStrength;
    float EmbeddedSearchRadius;

};

class UDroneMiningToolBase : public UActorComponent
{
    FDroneMiningToolBaseHitSomething HitSomething;
    void MineHitEvent(class UTerrainMaterial* TerrainMaterial, const FVector& Location);
    float range;
    float SameHitDistance;
    float MineRadius;
    int32 MineStrength;

    void StopMining();
    void StartMining();
    void SpawnEffects(class UTerrainMaterial* aTerrainMaterial, bool aParialHit, FVector_NetQuantize aLocation, FVector_NetQuantize aImpactNormal);
};

class UDroneSkinnableComponent : public USkinnableComponent
{
};

class UDroneStateComponentBase : public UActorComponent
{
    EDroneState SubsequentState;

};

class UDroneTargetSensingComponent : public UActorComponent
{
    FGameplayTagQuery TargetQuery;
    class AActor* PulseFrom;
    float SensingRange;
    float SensingIntervals;
    bool NeedsLineOfSight;

};

class UDroneUseComponent : public UActorComponent
{
    FDroneUseComponentOnUsed OnUsed;
    void DroneFinishedUsing(int32 TimesUsed);
    FDroneUseComponentOnBeginUse OnBeginUse;
    void DelegateEvent();
    FDroneUseComponentOnStopUse OnStopUse;
    void DelegateEvent();
    FDroneUseComponentOnProgress OnProgress;
    void DroneUseProgress(float Progress);
    class UDialogDataAsset* BoscoLaserpointerShout;
    TWeakObjectPtr<class USingleUsableComponent> SyncToUsable;
    float Progress;
    float useDuration;
    bool ResetOnFail;
    bool CanUse;

    void SyncedUsableUserCountChangedResponse(int32 userCount);
    void SyncedUsableUsedResponse(class APlayerCharacter* User, EInputKeys Key);
    void SyncedUsableBeginUseResponse(class APlayerCharacter* User, EInputKeys Key);
    void SetUseDuration(float useDuration);
    void SetCanUse(bool CanUse);
    float GetProgress();
    void EndUse();
    void BeginUse();
};

class UDropPodCalldownLocationFeature : public URoomFeature
{
    FVector Location;
    TSubclassOf<class AActor> CalldownClass;

};

class UDropSpikeTrackingSubsystem : public UWorldSubsystem
{

    void IncrementSpikeCount();
    int32 GetSpikeCount();
};

class UDropToTerrainComponent : public UActorComponent
{
    FDropToTerrainComponentOnFallToTerrainStateChanged OnFallToTerrainStateChanged;
    void OnIsFallingToTerrainChanged(bool IsFalling);
    bool StartActive;
    FVector CurrentLocation;
    FVector DropTarget;
    TArray<class UTerrainDetectComponent*> TerrainPoints;
    float FallVelocity;
    float TerrainTraceMaxDistance;
    bool IsDetecting;

    void StopDropDetection(bool stopFalling);
    void OnTerrainRemoved(class USceneComponent* Point);
    void OnRep_DropTarget();
    void BeginDropDetection();
};

class UDualMachinePistolsUpgrade : public UStandardItemUpgrade
{
    EDualMachinePistolsUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EDualMachinePistolsUpgrades upgradeType);
};

class UDualWieldAnimInstance : public UAnimInstance
{
};

class UDynamicIcon : public UObject
{

    class UMaterialInterface* GetIconMaterial();
    class UMaterialInstanceDynamic* GenerateIconMaterial(class UObject* materialOwner);
};

class UDynamicIconSettings : public UDataAsset
{
    class UMaterialInstance* TextureDynamicIcon;
    class UMaterialInstance* TwoFacetDynamicIcon;
    class UMaterialInstance* TwoFacetDynamicIconTex1;
    class UMaterialInstance* TwoFacetDynamicIconTex2;
    class UMaterialInstance* TwoFacetDynamicIconTex1Tex2;
    class UMaterialInstance* TriFacetDynamicIcon;
    class UMaterialInstance* TriFacetDynamicIconTex1;
    class UMaterialInstance* TriFacetDynamicIconTex1Tex2;
    class UMaterialInstance* TriFacetDynamicIconTex1Tex3;
    class UMaterialInstance* TriFacetDynamicIconTex1Tex2Tex3;
    class UMaterialInstance* TriFacetDynamicIconTex2;
    class UMaterialInstance* TriFacetDynamicIconTex2Tex3;
    class UMaterialInstance* TriFacetDynamicIconTex3;

};

class UDynamicMeshScaler : public UWorldSubsystem
{
};

class UDynamicReverbComponent : public UActorComponent
{
    float LargeCaveValue;
    float MediumCaveValue;
    float SmallCaveValue;
    float FadeTime;
    float Priority;
    float TunnelAmbienceFadeIn;
    float TunnelAmbienceFadeOut;
    class UAudioComponent* TunnelSoundInstance;

    void TunnelTimerTriggered();
    void TimerTriggered();
};

class UEasterBunnyAnimInstance : public UNisseAnimInstance
{
    float WindUpTurnSpeed;
    float WindUpTimer;

};

class UEffectSettings : public UDataAsset
{
    class UNiagaraParameterCollection* NiagaraParameterCollection;
    FRuntimeFloatCurve LinearFadeInLight;
    FRuntimeFloatCurve LinearFadeOutLight;

};

class UElectricalSMGUpgrade : public UStandardItemUpgrade
{
    EElectricalSMGUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> Item, EElectricalSMGUpgrades upgradeType);
};

class UEliminationObjective : public UObjective
{
    int32 ObjectCount;
    class UDebrisPositioning* Positioning;
    TArray<int32> ExcludeRoomIDs;
    TSoftClassPtr<AActor> ObjectToSpawn;
    class UCaveInfluencer* CaveInfluencer;
    float DebrisRadius;
    TArray<TSoftObjectPtr<UDebrisBase>> ObjectDebris;
    int32 EnemiesKilled;
    int32 EnemiesToKill;
    TArray<FEliminationDescriptors> TargetDescriptors;
    TArray<FEliminationDescriptors> TargetQueue;
    TArray<FEliminationTarget> ActiveEliminationTargets;

    void RegisterEliminationTargets(const TArray<class AFSDPawn*>& Targets);
    void ReceiveTargetSpawned();
    void ReceiveTargetKilled();
    void OnTargetKilled(class UHealthComponentBase* Health);
    void OnRep_EnemiesToKill(int32 prevAmount);
    void OnRep_EnemiesKilled(int32 prevAmount);
    TArray<class UEnemyDescriptor*> GetNextTargetInQueue();
};

class UEliteEnemiesMutator : public UMutator
{
    float SpawnChanceModifier;
    int32 MaxElites;
    float EliteCooldown;

};

class UEncounterManager : public UActorComponent
{
    float SpawnDistanceFromRoomBounds;
    TArray<FEncounterManagerItem> Encounters;
    class AProceduralSetup* ProceduralSetup;
    class UEnemySpawnManager* SpawnManager;
    TArray<class UEnemyDescriptor*> EnemyPool;
    TArray<class UEnemyDescriptor*> EncounterPool;
    TArray<class UCritterDescriptor*> CritterPool;

    void ShowSpawnLocations();
    TArray<class UEnemyDescriptor*> GetEnemyPool();
    TArray<class UEnemyDescriptor*> GetEncounterPool();
    TArray<class UCritterDescriptor*> GetCritterPool();
    void AddEncounterFromGroup(class UEnemyGroupDescriptor* Group, float Difficulty, FVector Location, float Radius);
};

class UEncounterOverrideMutator : public UMutator
{
    float MobileEncounterScale;
    float StationaryEncounterScale;

};

class UEncounterSettings : public UDataAsset
{
    FIRandRange StationaryEnemyCount;
    TArray<class UEnemyDescriptor*> CommonEnemies;
    TArray<class UEnemyDescriptor*> SpecialEnemies;
    TArray<class UEnemyDescriptor*> DisruptiveEnemies;
    TArray<class UEnemyDescriptor*> StationaryEnemies;
    TArray<class UCritterDescriptor*> CommonCritters;
    TArray<FEncounterRareCritterItem> RareCritters;
    TArray<FEncounterSpecialItem> SpecialEncounters;
    float RequiredDifficultyPerDiversity;
    float GlobalDifficultyScale;
    FRandInterval EncounterDifficulty;
    FRandInterval StationaryDifficulty;
    FRandRange CritterSpawnDifficulty;
    FGameplayTag SmallRoomTag;
    FGameplayTag MediumRoomTag;
    FGameplayTag LargeRoomTag;
    float SmallRoomDifficultyModifier;
    float MediumRoomDifficultyModifier;
    float LargeRoomDifficultyModifier;
    TMap<class UEnemyDescriptor*, class FEliteEnemyEntry> HeroEnemies;
    FRandInterval HeroEnemySpawn;
    class UMutator* TestMutator;

};

class UEncounterSpecialEventSpawner : public USpecialEventSpawner
{
    FEncounterSpecialItem Encounter;

};

class UEndStatusEffectOnLanding : public UActorComponent
{
    TWeakObjectPtr<class UStatusEffect> EffectToCancel;

    void OnOwnerStateChanged(ECharacterState State);
};

class UEnemyAnimInstance : public UAnimInstance
{
    FEnemyAnimInstanceOnRangedAttackNotify OnRangedAttackNotify;
    void AnimNotifyDelegate();
    FEnemyAnimInstanceOnMeleeAttackNotify OnMeleeAttackNotify;
    void NameDelegate(FName nameValue);
    FEnemyAnimInstanceOnStopLeadingNotify OnStopLeadingNotify;
    void AnimNotifyDelegate();
    FEnemyAnimInstanceOnIsAttackingChanged OnIsAttackingChanged;
    void IsAttackingChangedDelegate(bool IsAttacking);
    bool IsAttacking;
    bool IsAlive;
    float RandomStartPosition;
    class UHealthComponentBase* HealthComponent;

    bool IsSlotPlayingAnyAnimation(FName SlotNodeName);
    bool IsNotAttacking();
    bool IsDead();
    class USkeletalMeshComponent* GetSkeletalMesh();
};

class UEnemyAttackerPositioningComponent : public UAttackerPositioningComponent
{
};

class UEnemyBufferComponent : public UActorComponent
{
    TSubclassOf<class UStatusEffect> StatusEffect;
    FName BufferParticleSocket;
    class UParticleSystem* Particles;
    float ParticleTangentSize;
    FEnemyBufferComponentOnBuffingChangedEvent OnBuffingChangedEvent;
    void BoolDelegate(bool boolValue);
    float BuffRadius;
    int32 MaxBuffedTargets;
    FGameplayTagQuery BuffQuery;
    TSubclassOf<class AActor> SubclassBuffQuery;
    TArray<class AFSDPawn*> BuffTargets;
    TArray<class UParticleSystemComponent*> ParticleInstances;

    void SetBuffingEnabled(bool Enabled);
    void OnPawnDied(class UHealthComponentBase* Health);
    void OnOwnerDied(class UHealthComponentBase* Health);
};

class UEnemyComponent : public USimpleObjectInfoComponent
{
    class UEnemyFamily* Family;
    class UDialogDataAsset* KillShout;
    class UEnemyID* EnemyID;
    FString mixerName;
    FEnemyComponentOnMixerNameChange OnMixerNameChange;
    void MixerEnemyNameChange(FString mixerName);

    class UEnemyID* GetID();
    FText GetFamilyName();
    class UTexture2D* GetFamilyIcon();
};

class UEnemyControlStateComponent : public UCharacterStateComponent
{
    bool UseThirdPersonCam;
    FControlEnemyState StateData;
    EEnemyControlState ControlState;
    FQuat AngularVelocity;
    FQuat ControlRotation;

    void ServerExit();
    void OnRep_StateData(const FControlEnemyState& oldState);
    void OnRep_ControlState(EEnemyControlState oldState);
    void OnEnemyCrashMontageEnded(class UAnimMontage* Montage, bool interrupted);
    void OnControllingEnemyAttached();
    void OnControllingEnemy(bool IsControlling);
    void JumpPressed();
    class UAIPlayerControlComponent* GetAiPlayerControlComponent();
};

class UEnemyDescriptor : public UDataAsset
{
    class UEnemyID* EnemyID;
    TSoftClassPtr<APawn> EnemyClass;
    EVeteranScaling VeteranScaling;
    TArray<class UEnemyDescriptor*> VeteranClasses;
    TMap<class UBiome*, class TSoftClassPtr<APawn>> BiomeEnemyClassOverrides;
    TSoftClassPtr<APawn> EliteEnemyClass;
    TSet<UMissionTemplate*> BannedMissionTypes;
    EEnemySignificance EnemySignificance;
    FVector SpawnOffset;
    bool UsesSpawnEffects;
    ECreatureSize CreatureSize;
    class UDebrisPositioning* Positioning;
    class UCaveInfluencer* CaveInfluencer;
    TArray<FEnemyDebris> Debris;
    float InfluencerRange;
    TSubclassOf<class AActor> PlacementCarver;
    DeepPathFinderType PathfinderType;
    FGameplayTagQuery PlacementRoomQuery;
    float SpawnSpread;
    int32 IdealSpawnSize;
    bool CanBeUsedForConstantPressure;
    bool CanBeUsedInEncounters;
    float DifficultyRating;
    int32 MinSpawnCount;
    int32 MaxSpawnCount;
    float Rarity;
    float SpawnAmountModifier;
    int32 RequiredMainCampaignProgress;
    bool UsesSpawnRarityModifiers;
    TArray<FSpawnRarityItem> SpawnRarityModifiers;
    EEnemyDescriptorCheatClass CheatClass;

    TSubclassOf<class APawn> GetEnemyClass(class UBiome* Biome, bool IsElite);
    TArray<class UEnemyDescriptor*> FindDescriptorsForCheatMenu(EEnemyDescriptorCheatClass CheatClass);
    TArray<class UEnemyDescriptor*> FindAllDescriptorsForCheatMenu();
};

class UEnemyDetonationSetting : public UDataAsset
{
    class UDamageComponent* FireDamage;
    class UNiagaraSystem* FireParticles;
    class USoundCue* FireSound;
    class UDamageComponent* IceDamage;
    class UNiagaraSystem* IceParticles;
    class USoundCue* IceSound;

};

class UEnemyDetonationStatusEffectItem : public UStatusEffectItem
{
    bool FireDetonation;
    bool IceDetonation;

};

class UEnemyFamily : public UDataAsset
{
    class UTexture2D* Icon;
    FText Name;

};

class UEnemyGroupDescriptor : public UDataAsset
{
    TArray<FEnemyGroupDescriptorItem> Enemies;
    bool UseCustomDiversity;
    FRandInterval Diversity;

};

class UEnemyHealthComponent : public UHealthComponent
{
    EEnemyHealthScaling EnemyHealthScaling;
    float Courage;
    float MaxHealth;
    bool bShowHealthBar;
    FVector HealthBarOffsetWorld;
    bool bIsBossFight;
    int32 BossFightHealthBarSegments;
    bool bRegisterEnemy;

    float GetMaxHealth();
};

class UEnemyID : public USavableDataAsset
{
};

class UEnemyLineOfSightComponent : public UActorComponent
{
    FEnemyLineOfSightComponentOnGaindedLineOfSight OnGaindedLineOfSight;
    void LoSDelegate(class AActor* Target);
    FEnemyLineOfSightComponentOnLostLineOfSight OnLostLineOfSight;
    void LoSDelegate(class AActor* Target);
    class UMeshComponent* OwnerMesh;
    FName LoSFromSocketName;
    float LoSInterval;
    float LoSIntervalVariance;
    bool AutoSetupOwnerMesh;

    bool HasLineOfSight();
    bool GetIsDetecting();
    void AsyncTrace();
};

class UEnemyMeleeAttackAnimNotify : public UAnimNotify
{
    FName AttackTag;

};

class UEnemyMinersManualData : public UDataAsset
{
    class UEnemyID* EnemyID;
    FText Name;
    FText RichDescription;
    TArray<FText> GameplayTips;
    EEnemyFamily Family;
    EEnemyType EnemyType;
    TArray<FEnemyAttackDescription> AttackType;
    TArray<FEnemyAttackDescription> SpecialAttacks;
    TArray<class UAnimSequenceBase*> AttackAnimations;
    EArmorType ArmorType;
    FText Armor;
    FText Weakpoint;
    FEnemyMinersManualStats EnemyStats;
    TArray<EDamageType> Resistances;
    TArray<EDamageType> Weaknesses;
    TArray<FText> LoreInfo;
    bool AlwaysUnlocked;
    int32 InfoUnlockSpeed;
    TSoftObjectPtr<UTexture2D> EnemyIcon;
    TSoftClassPtr<AEnemyShowroomItem> PreviewActor;

    class UTexture2D* GetEnemyIcon();
};

class UEnemyPawnAfflictionComponent : public UPawnAfflictionComponent
{
};

class UEnemyPlaySoundByKeyAnimNotify : public UAnimNotify
{
    class UEnemyPlaySoundKey* SoundKey;
    float VolumeMultiplier;
    float PitchMultiplier;
    uint8 bFollow;
    FName AttachName;

};

class UEnemyPlaySoundKey : public UDataAsset
{
};

class UEnemyRangedAttackAnimNotify : public UAnimNotify
{
};

class UEnemyRarityMutator : public UMutator
{
    float RarityMultiplier;
    float SpawnAmountMultiplier;
    float DifficultyMultiplier;
    class UEnemyDescriptor* EnemyDescriptor;

};

class UEnemyScaleAfflictionEffect : public UAfflictionEffect
{
    float Scale;
    bool RevertOnEndEffect;

};

class UEnemySettings : public UDataAsset
{
    FRandRange EnemyWaveRange;
    TMap<class UEnemyID*, class UEnemyDescriptor*> EnemyDescriptor;
    FGameplayTagQuery EliteAllowQuery;
    TMap<class UEnemyDescriptor*, class FEliteEnemyEntry> HeroEnemies;
    FRandFloatInterval HeroEnemySpawn;
    int32 EliteRequiredCampaignProgress;
    TArray<class TSubclassOf<UDamageComponent>> ExplodingEnemiesDamageComponents;

};

class UEnemyShowroomController : public UShowroomController
{
    class AEnemyShowroomItem* EnemyInstance;

    void Receive_PlayAttack(class UAnimSequenceBase* attackAnimation);
    void PlayAttack(class UAnimSequenceBase* Animation);
    class UEnemyShowroomController* DisplayEnemy(class UObject* WorldContextObject, TSoftClassPtr<AEnemyShowroomItem> EnemyPreviewActor);
};

class UEnemySkinAfflictionEffect : public UAfflictionEffect
{
    TArray<class UMaterialInterface*> NewMaterials;

};

class UEnemySpawnEffectsByKeyAnimNotify : public UAnimNotify
{
    class UEnemySpawnEffectsKey* EffectKey;
    uint8 Attached;
    FName SocketName;

};

class UEnemySpawnEffectsKey : public UDataAsset
{
};

class UEnemySpawnManager : public UActorComponent
{
    FEnemySpawnManagerOnEnemyDestroyed OnEnemyDestroyed;
    void EnemyDestroyedSignature(class APawn* enemy);
    FEnemySpawnManagerOnEnemyDied OnEnemyDied;
    void EnemyDestroyedSignature(class APawn* enemy);
    FEnemySpawnManagerOnEnemySpawned OnEnemySpawned;
    void EnemySpawnedSignature(class APawn* enemy, class UEnemyDescriptor* descriptor);
    class USpawnEffectsComponent* SpawnEffects;
    TArray<class APawn*> ActiveEnemies;
    TArray<class APawn*> ActiveSwarmerEnemies;
    TArray<class TSubclassOf<UStatusEffect>> ActiveGlobalStatusEffects;
    TMap<class UEnemyDescriptor*, class FSpawnRarityModifierItem> SpawnRarityModifiers;
    TArray<class APawn*> ActiveCritters;
    TArray<class APawn*> CritcalEnemies;
    int32 MaxActiveEnemies;
    int32 MaxActiveSwarmers;
    int32 MaxActiveCritters;
    float MaxDistanceBeforeCleanup;
    FGameplayTag SwarmerTag;
    FGameplayTag RegularTag;
    FGameplayTag CritterTag;
    class AProceduralSetup* ProceduralSetup;
    TArray<FSpawnQueueItem> SpawnQueue;
    bool bDestroyingAllEnemies;

    void SpawnerDestroyed(class APawn* Actor);
    bool SpawnEnemy(class UEnemyDescriptor* descriptor, const FTransform& Transform, const FSpawnEnemyCallback& Callback, bool useSpawnFX, bool Alert);
    void SetSpawningEnabled(bool newSpawningEnabled);
    void RemoveGlobalStatusEffect(TSubclassOf<class UStatusEffect> StatusEffect);
    void RegisterSpawner(class APawn* Actor);
    void RegisterSpawnedEnemy(class AActor* enemy);
    void PromoteToCritical(class APawn* Pawn);
    void OnMatchStarted();
    void OnMatchEnded();
    bool GetSpawningEnabled();
    class APawn* FindEnemyByClass(TSubclassOf<class APawn> PawnClass, bool isSwarmerEnemy);
    TArray<class APawn*> FindEnemiesByClass(TSubclassOf<class APawn> PawnClass, bool isSwarmerEnemy);
    void EnemyDestroyed(class AActor* Actor);
    void EnemyDeath(class UHealthComponentBase* HealthComponent);
    void DestroyAllEnemies();
    bool CanSpawn(class UEnemyDescriptor* EnemyDescriptor);
    void AddGlobalStatusEffect(TSubclassOf<class UStatusEffect> StatusEffect);
};

class UEnemyTemperatureComponent : public UTemperatureComponent
{
    float UpdateTime;
    bool DieIfFrozen;
    bool DieIfBurning;
    float TemperatureChangeScale;
    float BurnTemperature;
    float DouseFireTemperature;
    float FreezeTemperature;
    float UnFreezeTemperature;
    int32 WarmingRate;
    int32 CoolingRate;
    bool IsHeatsourceWhenOnFire;
    float OnFireHeatRange;
    float MaxColdSlowdown;
    class UEnemyDetonationSetting* DetonationSetting;
    class UPawnStatsComponent* PawnStats;
    int32 WarmingCooldown;
    uint8 FireDetonationStack;
    uint8 IceDetonationStack;

    void TimerCallback();
    void OnDeath(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    void DoTemperatureShock(class UStatusEffectsComponent* Status);
    void All_IceDetonation();
    void All_FireDetonation();
};

class UEnemyTemperatureReplicatorComponent : public UActorComponent
{
    FEnemyTemperatureReplicatorComponentOnTemperatureEffectChanged OnTemperatureEffectChanged;
    void FloatDelegate(float FloatValue);
    FEnemyTemperatureReplicatorComponentOnIsFrozenChanged OnIsFrozenChanged;
    void FloatDelegate(float FloatValue);
    FEnemyTemperatureReplicatorComponentOnIsOnFireChanged OnIsOnFireChanged;
    void FloatDelegate(float FloatValue);
    TWeakObjectPtr<class UEnemyTemperatureComponent> EnemyTemperatureComponent;
    int32 TemperatureEffect;
    bool bIsFrozen;
    bool bIsOnFire;

    void OnRep_TemperatureEffect();
    void OnRep_IsOnFire();
    void OnRep_IsFrozen();
    bool IsOnFire();
    bool IsFrozen();
    float GetTemperatureEffect();
};

class UEnemyTemperatureStatusEffectItem : public UStatusEffectItem
{
    float WarmingRate;
    float UnFreezeTemperature;
    float TemperatureChangeScaleModifier;

};

class UEnemyWaveController : public UObject
{
    bool IsComplete;
    bool IsSuitableForSolo;

    void StartWave();
    void ResumeWave();
    void PauseWave();
    void OnWaveCompleted();
};

class UEnemyWaveManager : public UActorComponent
{
    TSoftClassPtr<UEnemyWaveController> AlwaysRunningWave;
    TArray<FWaveEntry> ScriptedWaves;
    TArray<FWaveEntry> EndMissionWaves;
    TArray<class UEnemyWaveController*> ActiveScriptedWaves;
    float StartDelay;
    float spawnRadiusFromSpawnPoint;
    bool ScriptedWavesEnabled;
    bool NormalWavesEnabled;
    bool OverrideDifficultyScriptedWaveInternal;
    FRandRange OverrideScriptedWaveInterval;
    class AFSDGameMode* GameMode;
    class UEnemySpawnManager* SpawnManager;
    TArray<class UObject*> NormalWavesBlockStack;
    TArray<class UObject*> ScriptedWavesBlockStack;

    class UEnemyWaveController* TriggerWave(TSubclassOf<class UEnemyWaveController> waveClass);
    void TriggerEndWave(bool cancelAllWaves);
    void SpawnScriptedWave();
    void PushDisableScriptedWaves(class UObject* Owner);
    void PushDisableNormalWaves(class UObject* Owner);
    void PopDisableScriptedWaves(class UObject* Owner);
    void PopDisableNormalWaves(class UObject* Owner);
    void OnMatchEnded();
    void OnEnemySpawned(class APawn* enemy);
    bool AreScriptedWavesBlocked();
    bool AreNormalWavesBlocked();
};

class UEntranceFeature : public URoomFeature
{
    FVector Location;
    FRotator Direction;
    ECaveEntranceType EntranceType;
    ECaveEntrancePriority Priority;

};

class UEscapableGrabberEnemyActivation : public UFloatPerkActivation
{
    TSoftClassPtr<AActor> EnemyGrabberClass;

};

class UEscapeMenuWindow : public UWindowWidget
{

    void OpenMinersManualFromID(EMinersManualSection Section, const FGuid& ID);
};

class UEscortMissionDNA : public UMissionDNA
{
    int32 RefuelLocations;

};

class UEscortMuleAnimInstance : public UAnimInstance
{
    bool LeftCannistersVisible;
    bool RightCannistersVisible;
    bool IsEngineRunning;
    bool IsBeingRefueled;
    bool PlatformOut;

    void OnTookDamage(class UHealthComponent* Health);
};

class UEscortMuleAttackerPositioning : public UAttackerPositioningComponent
{
    class UHealthComponentBase* Health;
    TArray<FVector> AttackerPositions;

    void SetNewMaxAttackers(int32 newMaxAttackers);
    void SetCostModifier(float newModifier);
};

class UEscortObjective : public UObjective
{
    FEscortObjectiveOnProgressUpdated OnProgressUpdated;
    void ShellBreakTimerSignature(float Progress);
    FEscortObjectiveOnShellBreakPauseChange OnShellBreakPauseChange;
    void ShellBreakPauseChangeSignature(bool IsPaused);
    FEscortObjectiveOnMuleRefueled OnMuleRefueled;
    void MuleRefueled();
    bool DidRescueDorettaHead;
    int32 AreasToScan;
    int32 ScanCount;
    TArray<FVector> ScanLocations;
    class UDebrisPositioning* Positioning;
    class UDebrisPositioning* EscortMulePositioning;
    class UCurveFloat* CostDistanceCurve;
    float DebrisRadius;
    TArray<class UDebrisBase*> ObjectDebris;
    TSoftClassPtr<AActor> RefuelObjectClass;
    TSoftClassPtr<AEscortDestination> DestinationClass;
    int32 AreasScanned;
    EEscortMissionState State;
    bool FinalBattle;
    class UCarvedResourceData* FuelResource;
    class UResourceData* GemResource;
    FEscortObjectiveOnCannisterRegistered OnCannisterRegistered;
    void CannisterRegistered(class AExtractorItem* Item);
    float ServerShellProgress;
    int32 SecondsToDestroyHeartstone;
    int32 FullCanistersRequired;
    int32 FullCanisters;
    int32 FuelResourceAmount;
    TSoftClassPtr<AActor> GarageDropCarver;
    TSoftClassPtr<AActor> EscortMuleDropBeaconClass;
    TSoftClassPtr<AActor> GarageClass;
    FVector EscortMuleDropLocation;
    class AEscortMule* EscortMule;
    class AEscortDestination* EscortDestination;

    void SyncProgressTimer();
    void StartShellBreak();
    void SpawnGarage();
    void SetState(EEscortMissionState State);
    void SetShellBreakPaused(bool newPaused);
    void SetEscortMule(class AEscortMule* MULE);
    void RegisterFuelCannister(class AExtractorItem* extractor);
    void RecordFailStage(bool muleDied, bool missionAborted);
    void OnResourceChanged(class UCappedResource* CappedResource, float Amount);
    void OnRep_FullCanisters();
    void OnRep_EscortState();
    void OnRep_EscortMule();
    void OnRep_AreasToScan(int32 prevAmount);
    void OnRep_AreasScanned(int32 prevAmount);
    void OnMuleDied(class UHealthComponentBase* HealthComponent);
    void OnHealthChanged(float Health);
    void OnFullCanistersChanged(int32 Amount);
    void OnEscortMuleSpawnedEvent();
    float GetShellBreakProgress();
    bool DoesPathExist(FVector Start, FVector End);
};

class UEventRewardType : public UDataAsset
{
    FText Title;
    TSoftObjectPtr<UTexture2D> IconFront;
    TSoftObjectPtr<UTexture2D> IconBack;
    FLinearColor IconFrontTint;
    FLinearColor IconBackTint;
    FLinearColor BackgroundTint;

};

class UEventRewarderUsableComponent : public USingleUsableComponent
{
    FText RewardUseText;

    FText CreateUseText(int32 blankSchematicCount);
};

class UEventStarterAnimInstance : public UAnimInstance
{
    float UseProgress;
    bool IsOpenForUse;
    bool IsBooted;
    bool IsEventActive;

};

class UExplosionBaseComponent : public UActorComponent
{
    float CarveDiameterCM;
    float CarveNoiseCM;
    float CarveBurnThicknessCM;
    float CarveNormalOffsetCM;
    float CarveNormalSqueeze;

    void DamageOnlyFromHit(const FHitResult& HitResult, class UDamageComponent*& DamageComponent);
    void DamageOnly(FVector Location, FName BoneName, class UPrimitiveComponent* Target, class UPhysicalMaterial* PhysicalMaterial, class UDamageComponent*& DamageComponent);
    void DamageArmorClients(const FHitResult& HitResult, class UDamageComponent*& DamageComponent);
    void DamageAndCarveFromHit(const FHitResult& HitResult, class UDamageComponent*& DamageComponent);
    void DamageAndCarve(FVector Location, FVector ImpactNormal, FName BoneName, class UPrimitiveComponent* Target, class UPhysicalMaterial* PhysicalMaterial, class UDamageComponent*& DamageComponent);
    void CarveOnly(FVector Location, FVector ImpactNormal);
};

class UExplosionComponent : public UExplosionBaseComponent
{
};

class UExplosiveEnemiesMutator : public UMutator
{
};

class UExtendSTEDurationBonus : public UDamageBonusBase
{
    TSubclassOf<class UStatusEffect> StatusEffect;
    float AddedDuration;

};

class UExterminationReward : public URunningMissionBP
{
    class UResourceData* Resource;
    float AwardSize;
    FGameplayTagContainer AllowedFilter;

    void OnEnemyKilled(const FGameplayTagContainer& GameplayTags, class AActor* killedEnemy);
};

class UEyeBrowsVanityItem : public UVanityItem
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;

};

class UEyeForEyePerkComponent : public UFloatPerkComponent
{
    float CoolDown;
    TSoftClassPtr<UStatusEffect> EyeForEyeSTE;
    TSubclassOf<class UStatusEffect> LoadedSTE;

    void OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
};

class UFSDAchievement : public USavableDataAsset
{
    FString SteamAPIAchievementName;
    FString SteamAPIStatName;
    FString XboxAchievementID;
    float AchievementTargetValue;
    EFSDAchievementType AchievementType;

    void SetAchievementProgressForEntireServer(float Progress, class UObject* WorldContext);
    void SetAchievementProgress(float Progress, const class AFSDPlayerController* Player, class UObject* WorldContext);
    void ResetStatForAchievement(class UFSDAchievement* AchievementToReset, const class AFSDPlayerController* Player);
    void QueryAchievements(const class AFSDPlayerController* Player);
    float GetAchievementTargetValue();
};

class UFSDAdvancedLabel : public UUserWidget
{
    FText FormattedText;
    FText ControllerOverrideText;
    bool UpperCase;
    EFSDInputSource PreviewAs;

    void SetText(FText NewText, FText OverrideControllerText);
    void SetAlwaysShowAs(EFSDInputSource InPreferredSource);
    void Refresh();
    void OnReset();
    void OnNewLine(int32 Index);
    void OnLanguageChanged(FString NewCulture);
    void OnInputSourceChanged(EFSDInputSource Source);
    void OnAddString(FString Value);
    void OnAddKeyName(FString Name);
    void OnAddIcon(FString Name, const FActionIconMapping& Icon);
    FText GetText();
    bool GetIsDesignTime();
    EFSDInputSource GetCurrentInputSource();
    class UTextBlock* CreateTextBlock(FString Text, FSlateFontInfo InFontInfo, FLinearColor Color);
    class UImage* CreateImageSized(class UTexture2D* Texture, int32 Width, int32 Height);
    class UImage* CreateImage(class UTexture2D* Texture, bool MatchSize);
    class UHorizontalBox* CreateHorizontalBox();
};

class UFSDAnimNotify_PlaySound : public UAnimNotify_PlaySound
{
};

class UFSDAnimationFunctionLibrary : public UBlueprintFunctionLibrary
{

    float GetAnimSequenceLength(const class UAnimSequence* AnimSequence);
};

class UFSDAssetManager : public UAssetManager
{
    class UGameData* GameData;
    TSoftClassPtr<UGameData> GameDataPath;

};

class UFSDAudioComponent : public UAudioComponent
{
};

class UFSDBehaviorTreeComponent : public UBehaviorTreeComponent
{
};

class UFSDCheatManager : public UCheatManager
{
    int32 RoomJumpCount;
    float PreviousMaxDistanceBeforeCleanup;
    bool UnlimitedScoutFlareDuration;
    FFSDCheatManagerToggleHoopGameMovement ToggleHoopGameMovement;
    void CheatEvent();
    class AActor* SpawnPosMarker;
    bool EscortShowSmartRockDebug;
    bool IsUsingSavedCheats;

    void SwitchCharacter(class UPlayerCharacterID* characterID);
    void SpawnEnemies(class UEnemyDescriptor* descriptor, int32 Count);
    void SpawnCritters(class UBaseCritterDescriptor* descriptor, int32 Count);
    void SpawnBosco(TSoftClassPtr<APawn> droneClass, TSubclassOf<class AFSDAIController> aControllerClass);
    void ShowTutorialDebug();
    void SetStandingDown(bool standingDown);
    void SetSpawnEnemies(bool SpawnEnemies);
    bool SetSavedCheatValue(const FName CheatName, const int32& ValueToSet);
    void SetQuadPickAxe(bool quad);
    void SetHUDVisible(bool ShowHUD);
    void SetGodMode(bool God);
    void SetFastMovement(bool fast);
    void Server_Refresh_Daily_Special(int32 Index);
    void ResetTutorials();
    void ResetSpacerigIntroMessage();
    void R_RemoveResources(int32 Number);
    void R_RemoveCredits(int32 Number);
    void R_RemoveCraftingResource(int32 Amount, int32 Type);
    void R_AddSeasonToken(int32 Number);
    void R_AddResources_Player(float Number);
    void R_AddResources(float Number);
    void R_AddPerkPoints(int32 Amount);
    void R_AddNitra(float Amount);
    void R_AddMorkite(float Amount);
    void R_AddMatrixCores(int32 Number);
    void R_AddHollomite(float Amount);
    void R_AddGold(float Amount);
    void R_AddDystrum(float Amount);
    void R_AddCredits(int32 Number);
    void R_AddCraftingResource(int32 Amount, int32 Type);
    void R_Add_Phazyonite(int32 Amount);
    void R_Add_BitterGem(int32 Amount);
    void R_Add_Aquarq(int32 Amount);
    bool IsInGodMode();
    bool IsFlyModeActive();
    bool IsFastMovementActive();
    bool GetSavedCheatValue(const FName CheatName, int32& ValueToGet);
    void GetListOfRoomNames(TArray<FString>& roomNames);
    void DestroyAllInstances(TSubclassOf<class AActor> destroy);
    void D_Rejoin_RestoreState();
    void D_MovieModeStartWithCameraShake(bool Value);
    void D_MovieModeStartAtOrigin(bool Value);
    void D_EnableMovieModeInSpacerig(bool Value);
    void D_EnableMovieMode(bool Value);
    void Cheat_UnlockWeapon(class UObject* WorldContextObjectm, class UItemID* ItemID);
    void Cheat_UnlockAllWeapons(class UObject* WorldContextObject);
    void Cheat_UnlockAllUpgrades(class UObject* WorldContextObject);
    void Cheat_UnlockAll_Poses(class UObject* WorldContextObject);
    void Cheat_UnlockAll_Beers(class UObject* WorldContextObject);
    void Cheat_SetSpawnPosMarker(class AActor* Actor);
    void Cheat_SetHealth(float newHealthValue, class APlayerCharacter* Player);
    void Cheat_Schematic_UnlockAll(class UObject* WorldContextObject);
    void Cheat_Schematic_ResetAll(class UObject* WorldContextObject);
    void Cheat_Schematic_GiveRandom(class UObject* WorldContextObject);
    void Cheat_Schematic_ForgeAll(class UObject* WorldContextObject);
    void Cheat_Resources(class UObject* WorldContextObject, float Amount);
    void Cheat_ResetEquippedUpgrades(class UObject* WorldContextObject);
    void Cheat_RemoveResources(class UObject* WorldContextObject, int32 Amount);
    void Cheat_PickAxeVanity_UnlockAll(class UObject* WorldContextObject);
    void Cheat_PickAxeVanity_ResetAll(class UObject* WorldContextObject);
    void Cheat_MinersManual_ShowAll(class UObject* WorldContextObject);
    void Cheat_GenerateNewMissionSeed(class UObject* WorldContextObject, bool Enabled);
    void Cheat_ForceTreasure(class UObject* WorldContextObject);
    void Cheat_ForceLostPack(class UObject* WorldContextObject);
    void Cheat_DeepDives_Refresh(class UObject* WorldContextObject);
    void Cheat_Campaign_Complete(class UObject* WorldContextObject);
    void Cheat_Campaign_Advance(class UObject* WorldContextObject);
    void Cheat_AddXP(class UObject* WorldContextObject, int32 Amount);
    void Cheat_AddPerkPoints(class UObject* WorldContextObject, int32 Amount);
    void Cheat_AddCredits(class UObject* WorldContextObject, int32 Amount);
    void C_Windows_PrintStack();
    void C_Windows_CloseAll();
    void C_WeaponMaintenance_Reset();
    void C_WeaponMaintenance_AddXP(int32 XP);
    void C_VanityMasteryResetXP();
    void C_VanityMasteryAddXP(int32 Number);
    void C_UnlockOverclocking();
    void C_UnlockAll_WeaponUpgrades();
    void C_UnlockAll_WeaponSkins_Paintjobs();
    void C_UnlockAll_WeaponSkins_Frameworks();
    void C_UnlockAll_WeaponSkins();
    void C_UnlockAll_Weapons();
    void C_UnlockAll_StoreVanity();
    void C_UnlockAll_Poses_ForAll();
    void C_UnlockAll_Poses();
    void C_UnlockAll_PickaxeParts();
    void C_UnlockAll_Perks();
    void C_UnlockAll_Drinks();
    void C_UnlockAll_Beers();
    void C_UnlockAll_ArmorMats();
    void C_UnlockAll();
    void C_Unlock_Facility();
    void C_Treasures_Track(int32 Mode);
    void C_Treasures_Reward(int32 Count);
    void C_ToggleHoopGameMovement();
    void C_ToggleFadingEnabled();
    void C_ToggleFadingDebug();
    void C_ToggleCanShowBlood();
    void C_TestSpecialEventChance();
    void C_StopMovement(bool shouldMove);
    void C_SpawnScriptedWaveIndex(int32 Index);
    void C_SpawnScriptedWave();
    void C_SpawnNormalWave();
    void C_SpawnEvenRewarder();
    void C_SpawnBarrelOnPlayer(int32 Amount);
    void C_SpawnAllParticles();
    void C_SetUseSavedCheatsByDefault(bool useSavedCheats);
    void C_SetTestMission(int32 missionIndex);
    void C_SetTestingCharacter(class UPlayerCharacterID* characterID);
    void C_SetSavedCheats();
    void C_SetPlayers(int32 Number);
    void C_SetInstantUsables(bool Value);
    void C_SetHealth(float Health);
    void C_SetFlyMode(bool flyEnabled);
    void C_SetFastFlares();
    void C_SetEnglish(int32 Val);
    void C_SetDancing(bool shouldDance);
    void C_SetAmmoCostEnabled(bool Enabled);
    void C_Seasons_ResetXP();
    void C_Seasons_ResetTreeOfVanity();
    void C_Seasons_ResetToken();
    void C_Seasons_ResetReroll();
    void C_Seasons_ResetPlagueHeartsCollected();
    void C_Seasons_IncrementChallenge(int32 Index);
    void C_Seasons_CompleteSeasonAlmost();
    void C_Seasons_CompleteSeason();
    void C_Seasons_CompleteScripChallenge(int32 Number);
    void C_Seasons_ClearSeasonCompletedAnnounced();
    void C_Seasons_ClearChallenges();
    void C_Seasons_ClearAllProgress();
    void C_Seasons_AddXP(int32 Number);
    void C_Seasons_AddHeartsCollecdted(int32 Number);
    void C_Seasons_AddChallenge();
    void C_ScoutFlareInfiniteDuration(bool Enabled);
    void C_Schematics_UnlockAll();
    void C_Schematics_ResetAll();
    void C_Schematics_ForgeAll();
    void C_Schematics_ClearHasSeenFirstMessage();
    void C_Schematic_GiveRandom();
    void C_Salvage_FixMiniMules();
    void C_Revive();
    void C_Resupply();
    void C_ResetSteamAchievementStats();
    void C_ResetForgingXP();
    void C_ResetCheatedResources(int32 newAmount);
    void C_ResetAll_Vanity();
    void C_ResetAchievements();
    void C_Reset_YearTwoGifts();
    void C_Reset_WeaponSkinsAndUpgrades();
    void C_Reset_WeaponSkins_Paintjobs();
    void C_Reset_WeaponSkins_Framworks();
    void C_Reset_WeaponSkins();
    void C_Reset_Poses();
    void C_Reset_PickaxeParts();
    void C_Reset_Perks();
    void C_Reset_MinersManual();
    void C_Reset_EnemyKillCount();
    void C_Reset_Drinks();
    void C_RemovePlayerRanks(int32 Number);
    void C_RemoveAllWidgets();
    void C_RefreshDailyDeal(int32 Seed);
    void C_Refresh_Daily_Special(int32 Index);
    void C_Refinery_BreakPipes();
    void C_RecordMode();
    void C_Promotion_SetLevelSpecific(class APlayerCharacter* onCharacter, int32 Number);
    void C_Promotion_SetLevel(int32 Number);
    void C_Promotion_SetCampaignComplete();
    void C_Promotion_ClearRewardsSeen();
    void C_ProjectileDrawPaths();
    void C_ProjectileDebugPrintToggle();
    void C_PrintLoadout();
    void C_PlayNewMusic(int32 songIndex);
    void C_MissionMap_TestDistribution();
    void C_MissionMap_SetSeed(int32 Seed);
    void C_MissionMap_Rotate();
    void C_MissionMap_ForceWarning(int32 Index);
    void C_MissionMap_ForceAnomaly(int32 Index);
    void C_MissionMap_DoubleWarning(int32 indexA, int32 indexB);
    void C_MissionMap_AutoRotate(bool Enabled);
    void C_MinersManual_EnableWorkInProgress(class UObject* WorldContextObject);
    void C_MachineEvents_Track(bool Track);
    void C_MachineEvents_FinishCurrent();
    void C_LevelUpCharacter(int32 Amount);
    void C_KillTeam();
    void C_KillPlayer();
    void C_KillAllFriendly();
    void C_KillAll();
    void C_JumpToNextRoom();
    void C_JetBoots_Enable();
    void C_Intoxication_SetAll(int32 Percent);
    void C_Intoxication_Set(int32 Percent);
    void C_IncrementAllMissionStats(int32 Amount);
    void C_IncreasePlagueInfection(float Increment);
    void C_GodMode(int32 forceEnable);
    void C_GiveAllGenericHeroItems();
    void C_GameDLC_ResetAnnouncements();
    void C_FSDEvent_SetDebugEvent(FString EventName);
    void C_FSDEvent_ListEvents();
    void C_FSDEvent_ClearSeenRewards();
    void C_ForceCrash();
    void C_FixedPLSSeed(int32 Seed);
    void C_FixedMissionSeed(int32 Seed);
    void C_FailMission();
    void C_FadeFromBlack(class UObject* WorldContextObject);
    void C_Facility_SpawnDataCore();
    void C_Facility_DisableShields();
    void C_Escort_ShowSmartRockDebug(bool shouldShow);
    void C_Escort_SetMuleSpeed(class UObject* WorldContextObject, float Speed);
    void C_Escort_JumpToNextPhase(class UObject* WorldContextObject);
    void C_Escort_AddOilShale(int32 Number);
    void C_DLC_ClearAnnounced();
    void C_DisableBackendEvents();
    void C_DeepDives_UnlockAll();
    void C_DeepDives_SetSeed(int32 Seed);
    void C_DeepDives_Reset();
    void C_DeepDives_Refresh();
    void C_DeepDives_List();
    void C_CompleteObjectives();
    void C_CompleteMission();
    void C_ClearAllMissionStats();
    void C_ClearAllMilestones();
    void C_Campaign_ResetProgress();
    void C_Campaign_ResetCompleted();
    void C_Campaign_CompleteMain();
    void C_Campaign_CompleteCurrent();
    void C_Campaign_Advance();
    void C_AddXP(int32 Number);
    void C_AddUncappedXP(int32 Amount);
    void C_AddForgingXP(int32 Number);
    void AddResourceToTeamDeposit(class UResourceData* Resource, float Amount);
};

class UFSDCloudLoadSave : public UObject
{
    FFSDCloudLoadSaveOnCloudLoadAll OnCloudLoadAll;
    void SDCloudLoad(const TArray<class UFSDSaveGame*>& savegames);
    FFSDCloudLoadSaveOnCloudLoadAllFailed OnCloudLoadAllFailed;
    void SDCloudFailed();
    class UFSDCloudSaveHandler* CloudSaveHandler;

    void StartCloudLoadAll(class UObject* WorldContextObject, int32 Index, int32 Offset);
};

class UFSDCloudSaveHandler : public UObject
{
    int32 NumFailedSaves;

};

class UFSDConversionLibrary : public UBlueprintFunctionLibrary
{

    FVector_NetQuantizeNormal VectorToNetQuantizeNormal(FVector Vec);
    FVector_NetQuantize VectorToNetQuantize(FVector Vec);
    FVector QuatToVector(FQuat Quat);
    FRotator QuatToRotator(FQuat Quat);
    FVector_NetQuantizeNormal QuadToNetQuantizeNormal(FQuat Quat);
    FVector ComponentToWorldLocation(class USceneComponent* Component);
    FVector ActorToWorldLocation(class AActor* Actor);
};

class UFSDCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FFSDCreateSessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FFSDCreateSessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UFSDCreateSessionCallbackProxy* FSDCreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN, bool bFriendsOnly);
};

class UFSDCustomDPIScalingRule : public UDPICustomScalingRule
{
};

class UFSDDebrisSettings : public UDeveloperSettings
{
    FSoftObjectPath DefaultInfluencerDensityCurve;
    FSoftObjectPath DefaultInfluencerSizeCurve;

};

class UFSDEvent : public UDataAsset
{
    FFSDEventOnActiveChanged OnActiveChanged;
    void FSDEventActivateChanged(const class UFSDEvent* InFsdEvent, bool InIsActive);
    bool EnableDangerousSaveGameIDEditing;
    FGuid SavegameID;
    FName EventName;
    EHolidayType EventType;
    bool bFreeBeerEvent;
    bool bFreeBeerConfettiVisible;
    class UDrinkableDataAsset* SpecialEventBeer;
    class UTexture2D* SeasonEndScreenImage;
    TSoftObjectPtr<USoundCue> EventAmbienceMusic;
    bool UseDifferentBarLightColor;
    FLinearColor SpaceRigBarLightColor;
    TArray<FEncounterSpecialItem> EventEncounters;
    TArray<TSoftClassPtr<ADebrisDataActor>> EventDebris;
    bool bIsEventDebrisInDeepDives;
    TArray<TSoftObjectPtr<UWorld>> SpacerigSublevels;
    TArray<TSoftObjectPtr<UWorld>> UnloadSpacerigSublevels;
    bool bHasClaimableRewards;
    FClaimableRewardView ClaimableRewards;
    TArray<FPlatformSpecificEventPopup> OptionalPopUpWindow;
    TArray<TSoftClassPtr<UCampaign>> Campaigns;
    TSoftObjectPtr<UTexture2D> TitleScreenOverride;
    FJettyBootEventSettings JettyBootSettings;

    void MarkClaimableRewardsSeen(class UObject* WorldContext);
    bool IsFsdEventActive(class UObject* WorldContext, const class UFSDEvent* FSDEvent);
    bool HasUnseenClaimableRewards(class UObject* WorldContext);
    bool GiveRewards(class APlayerController* PlayerController);
    class UTexture2D* GetTitleScreenOverride();
    bool GetIsActive(class UObject* WorldContext);
    class UFSDEventPopupWidget* CreatePopupWindow(class APlayerController* InPlayerController);
};

class UFSDEventCollection : public UDataAsset
{
    TSet<UFSDEvent*> Events;
    FFSDEventCollectionOnEventActiveChanged OnEventActiveChanged;
    void FSDEventActivateChanged(const class UFSDEvent* InFsdEvent, bool InIsActive);

    class UFSDEvent* FindEventHandler(const FName& EventName);
    TArray<class UFSDEvent*> FindAllEventHandlers(const FName& EventName);
};

class UFSDEventManager : public UGameInstanceSubsystem
{
    FFSDEventManagerOnFSDEventsRefresh OnFSDEventsRefresh;
    void FSDEventsRefreshDelegate();
    FFSDEventManagerOnEventActiveChanged OnEventActiveChanged;
    void FSDEventActivateChanged(const class UFSDEvent* InFsdEvent, bool InIsActive);
    TSet<FName> PendingActiveEvents;
    TSet<FName> ActiveEvents;
    int32 NumFailedRequests;
    bool BackendDataValid;
    FDateTime LastRequestTime;
    float NextCheckTime;
    FDateTime SeasonExpirationTime;
    bool SeasonExpirationTimeValid;
    bool BackendNotificationEventValid;

    void TryGetJettyBootSettings(bool& OutHasSettings, FJettyBootEventSettings& OutSettings);
    void RequestSeasonEndTime(FRequestSeasonEndTimeOnComplete OnComplete);
    bool IsEventTypeActive(const EHolidayType FSDEvent);
    bool IsEventActive(const class UFSDEvent* FSDEvent);
    bool GetSeasonExpiryDate(FDateTime& ExpiryDate);
    EHolidayType GetHolidayType();
    class UFSDEvent* GetFirstActiveEventHandler();
    bool GetBackendNotificationEvent(FBackendNotificationEvent& Notification);
    TArray<class UFSDEvent*> GetActiveEventHandlers();
    void FSDEventsRefreshDelegate__DelegateSignature();
    bool FSDEventsReady();
};

class UFSDEventPopupWidget : public UWindowWidget
{
    class UFSDEvent* FSDEvent;

};

class UFSDEventsHandler : public UObject
{
    FDateTime LastRequestTime;
    int32 NumFailedRequests;

};

class UFSDFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FFSDFindSessionsCallbackProxyOnSuccess OnSuccess;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FFSDFindSessionsCallbackProxyOnFailure OnFailure;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FFSDFindSessionsCallbackProxyOnRefresh OnRefresh;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    class UObject* WorldContextObject;
    class UFSDFindSteamSessions* FSDFindSteamSessions;

    void OnFSDCompleted(bool bSuccess, const TArray<FBlueprintSessionResult>& Results);
    void ManualRefreshServerList();
    class UFSDFindSessionsCallbackProxy* FSDFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
    class UFSDFindSessionsCallbackProxy* FSDFindFullSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults);
};

class UFSDFindSteamSessions : public UObject
{
    FFSDFindSteamSessionsOnFindResult OnFindResult;
    void indSteamSessionsResult(bool success, const TArray<FBlueprintSessionResult>& Results);

};

class UFSDFriendsAndInvites : public UObject
{
    FFSDFriendsAndInvitesOnFriendsChanged OnFriendsChanged;
    void EmptyFriendDelegate();
    FFSDFriendsAndInvitesOnFriendInvitesChanged OnFriendInvitesChanged;
    void EmptyFriendDelegate();
    FFSDFriendsAndInvitesOnRequestRefresh OnRequestRefresh;
    void EmptyFriendDelegate();
    TArray<FBlueprintFriend> Friends;
    TArray<FBlueprintFriend> FriendInvites;

    void Init();
};

class UFSDGameInstance : public UGameInstance
{
    FFSDGameInstanceOnTemporaryBuffAdded OnTemporaryBuffAdded;
    void TemporaryBuffChanged(class UTemporaryBuff* buff, class APlayerCharacter* AffectedPlayer);
    FFSDGameInstanceOnGameSettingsChanged OnGameSettingsChanged;
    void GenericSignature();
    FFSDGameInstanceOnGraphicsSettingsChanged OnGraphicsSettingsChanged;
    void GenericSignature();
    FFSDGameInstanceOnPressStart OnPressStart;
    void GenericSignature();
    FFSDGameInstanceOnJoinPendingInvite OnJoinPendingInvite;
    void JoinSignature(FBlueprintSessionResult Session);
    FFSDGameInstanceOnSkinChangedEvent OnSkinChangedEvent;
    void GenericSignature();
    FFSDGameInstanceOnLoaderStart OnLoaderStart;
    void OnLoaderStartSig(class ULevelSequence* LoaderLevelSequence);
    FFSDGameInstanceOnPlayLevelSequenceInCharacterWorld OnPlayLevelSequenceInCharacterWorld;
    void OnPlayLevelSequenceInCharacterWorldSig(class ULevelSequence* CharacterLevelSequence);
    FFSDGameInstanceOnLoaderStop OnLoaderStop;
    void GenericSignature();
    FFSDGameInstanceOnCharacterSelectionStart OnCharacterSelectionStart;
    void ShowCharacterWorldSignature(ECharselectionCameraLocation selectionLocation);
    FFSDGameInstanceOnStartForging OnStartForging;
    void StartForging();
    FFSDGameInstanceOnSkipForging OnSkipForging;
    void StartForging();
    FFSDGameInstanceOnForgingDone OnForgingDone;
    void ForgingDone();
    FFSDGameInstanceOnCharacterSelectionStop OnCharacterSelectionStop;
    void GenericSignature();
    FFSDGameInstanceOnShowCharacterSelectionRefresh OnShowCharacterSelectionRefresh;
    void GenericSignature();
    FFSDGameInstanceOnTutorialManagerSet OnTutorialManagerSet;
    void TutorialManagerSignature(class ATutorialManager* NewManager);
    FFSDGameInstanceOnLocalPlayerCharacterSet OnLocalPlayerCharacterSet;
    void PlayerCharacterSignature(class APlayerCharacter* PlayerCharacter);
    FFSDGameInstanceOnShowReconnectScreen OnShowReconnectScreen;
    void ShowReconnectController(bool Show);
    FFSDGameInstanceOnXBoxAccountPickerClosed OnXBoxAccountPickerClosed;
    void OnXBoxAccountPickerClosed();
    FFSDGameInstanceOnXBoxChangeUser OnXBoxChangeUser;
    void OnXBoxChangeUser();
    FFSDGameInstanceOnHDRGammaChanged OnHDRGammaChanged;
    void OnHDRGammaChanged();
    FFSDGameInstanceOnGravityChanged OnGravityChanged;
    void CravityChangedSignature(float CurrentGravity, float Change);
    FFSDGameInstanceOnNewPostProcessingManager OnNewPostProcessingManager;
    void NewPostProcessingManager(class APostProcessingManager* PostProcessingManager);
    FFSDGameInstanceOnPreviewSkinChanged OnPreviewSkinChanged;
    void SkinSignature(class UItemSkin* Skin);
    bool ShowingReconnectScreen;
    TWeakObjectPtr<class UMouseCursorWidget> MouseCursorWidget;
    FFSDGameInstanceOnShowCharacterSelector OnShowCharacterSelector;
    void ShowCharacterSelectorSignature(TSubclassOf<class APlayerCharacter> NewCharacter, ECharselectionCameraLocation selectionLocation);
    FFSDGameInstanceOnShowViewer3D OnShowViewer3D;
    void ShowViewer3DSignature(TSubclassOf<class AActor> Actor, ECharselectionCameraLocation selectionLocation);
    FFSDGameInstanceOnShowCharacterSelectorEquipSlot OnShowCharacterSelectorEquipSlot;
    void ShowCharacterSelectorEqiupSlotSignature(int32 EquipSlot);
    FFSDGameInstanceOnShowCharacterSelectorEquip OnShowCharacterSelectorEquip;
    void ShowCharacterSelectorEquipSignature(TSubclassOf<class AItem> itemClass, int32 EquipSlot);
    FFSDGameInstanceOnShowCharacterSelectorRotate OnShowCharacterSelectorRotate;
    void ShowCharacterSelectorRotateSignature(float Pitch, float Yaw);
    FFSDGameInstanceOnShowEndScreen OnShowEndScreen;
    void ShowCharacterSelectorEndScreenSignature(FCharacterViewScene viewScene);
    class AProceduralSetup* ProceduralSetup;
    bool HasStartedAMission;
    FString FSDPassword;
    bool FSDPrivateServer;
    bool SoloSession;
    bool IsJoiningInvite;
    bool FirstTimeInFrontend;
    bool SessionFirstStartOnSpaceRig;
    bool ShowFirstCharacterSelector;
    bool ShowSaveWarning;
    class AActor* WorldViewTargetDummy;
    class UMissionResultInfo* MissionResultInfo;
    bool LoaderSequencePlaying;
    FString LastPerksLoadout;
    class AActor* CharacterSelectionLastViewTarget;
    bool HasSeenInfoScreen;
    FTransform CharacterSelectionViewTargetTransform;
    FTransform LoaderViewTargetTransform;
    FFSDGameInstanceOnGeneratedMissionChanged OnGeneratedMissionChanged;
    void GeneratedMissionSignature(class UGeneratedMission* OutGeneratedMission);
    FFSDGameInstanceOnDonkeyChanged OnDonkeyChanged;
    void DonkeyCharacterDelegate(class AMolly* InDonkey);
    TWeakObjectPtr<class AMolly> Donkey;
    FFSDGameInstanceOnBoscoChanged OnBoscoChanged;
    void BoscoChanged(class ABosco* Bosco);
    bool DEBUGUseDebugSeedForMissions;
    bool DEBUGAutoRotateMissions;
    int32 DEBUGFixedPLSSeed;
    int32 DEBUGSeedOverride;
    bool CanPlayOnline;
    bool CanCommunicateOnline;
    FFSDGameInstanceOnSteamSearchRegionChanged OnSteamSearchRegionChanged;
    void SteamSearchRegionDelegate(ESteamSearchRegion Region);
    FFSDGameInstanceOnSteamServerJoinStatusChanged OnSteamServerJoinStatusChanged;
    void SteamServerJoinStatusDelegate(ESteamServerJoinStatus Status);
    FFSDGameInstanceOnStartSearchForFriendsComplete OnStartSearchForFriendsComplete;
    void OnStartSearchForFriendsComplete(bool bWasSuccessful, FString ErrorStr);
    TMap<class FString, class FString> FriendSessions;
    class UGoogleAnalyticsWrapper* GoogleAnalyticsWI;
    class UDSTelemetryWrapper* DSTelemetryWrapper;
    class USpecialEvent* ForcedMachineEvent;
    class USpecialEvent* ForcedOtherEvent;
    bool ShowMinerManualWorkInProgress;
    FFSDGameInstanceOnMinersManualNotification OnMinersManualNotification;
    void MinersManualNotification(EMinersManualSection Section, FGuid ObjectID, FText Text);
    FFSDGameInstanceOnNewHUDWarning OnNewHUDWarning;
    void NewHUDWarningDelegate(class UHUDWarningWidget* newWidget);
    float LastDreadnaughtKillTime;
    TWeakObjectPtr<class UWindowWidget> ActiveEscapeMenu;
    TWeakObjectPtr<class APostProcessingManager> PostProcessingManager;
    TWeakObjectPtr<class ABosco> Drone;
    TWeakObjectPtr<class APlayerCharacter> LocalPlayerCharacter;
    TWeakObjectPtr<class ATutorialManager> TutorialManager;
    class ACharacterSelectionSwitcher* CharacterSelectionSwitcher;
    bool bGameSettingsChanged;
    FFSDServerSearchOptions ServerSearchOptions;
    bool ServerSearchActive;
    FFSDGameInstanceOnPrivilegeCheckComplete OnPrivilegeCheckComplete;
    void OnPrivilegeCheckComplete();
    bool IsOnPressStartScreen;
    bool HasSeenStartScreen;
    TSubclassOf<class AProceduralSetup> ProceduralLevel;
    TSubclassOf<class UIconGenerationManager> IconGenerationManagerClass;
    class UIconGenerationManager* IconGenerationManager;
    class UCampaignManager* CampaignManager;
    TScriptInterface<class IMissionModeManager> DeepDiveManager;
    class UGeneratedMission* GeneratedMission;
    class UDifficultySetting* DesiredDifficulty;
    class UFSDSaveGame* SaveGame;
    EDisconnectReason DisconnectReason;
    FString DisconnectErrorCode;
    TArray<class UWorld*> AlwaysLoadedWorlds;
    bool ShowCharacterSelectionWorld;
    TSubclassOf<class AActor> Viewer3DClass;
    bool ShowLoaderWorld;
    bool CharacterSelectionWorldActive;
    bool MixerInteractivityEnabled;
    bool LoaderWorldActive;
    bool ResetHUDWhenReturning;
    bool MovieModeActive;
    bool MovieModeActiveInSpacerig;
    bool MovieModeStartAtOrigin;
    bool MovieModeStartWithCameraShake;
    class USchematic* ActiveForgeSchematic;
    class UFSDCloudLoadSave* FSDCloudLoadSave;
    class UFSDSessionUpdater* SessionUpdater;
    class UFSDSendToURL* SendToURL;
    class UFSDFriendsAndInvites* FriendsAndInvites;
    double SessionStartTime;
    int32 SessionStartTimestamp;
    float InKBytesPerSecond;
    float OutKBytesPerSecond;
    bool PreSpawnNigaraParticles;
    TArray<class UTemporaryBuff*> TemporaryBuffs;
    TSoftObjectPtr<ULevelSequence> NextLoaderSequence;
    EAlwaysLoadedWorlds NextLoaderLevel;
    TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence;
    TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence2;
    class USoundSubmix* ControllerVibrationSubmix;
    class USoundSubmix* ControllerSpeakerSubmix;

    void UpdateGlobelMissionSeed();
    void UpdateDebugSeed();
    void StopPhotographyInputProcessor();
    void StopPersonalAnalytics();
    void SteamServerJoinStatusDelegate__DelegateSignature(ESteamServerJoinStatus Status);
    void SteamSearchRegionDelegate__DelegateSignature(ESteamSearchRegion Region);
    void StartPhotographyInputProcessor();
    void StartPersonalAnalytics();
    class AProceduralSetup* SpawnProcedural();
    void SetViewer3DClass(TSubclassOf<class AActor> NewClass, ECharselectionCameraLocation Location);
    void SetSteamServerJoinStatus(ESteamServerJoinStatus NewStatus);
    void SetSteamSearchRegion(ESteamSearchRegion NewRegion);
    void SetShouldAdvertiseInServerlist(bool bShouldAdvertise);
    void SetServerSearchOptions(const FFSDServerSearchOptions& options);
    void SetServerSearchActive(bool Active);
    void SetSelectedMission(class UGeneratedMission* mission, bool updateSessionSettings);
    void SetProceduralMap(TSubclassOf<class AProceduralSetup> procedural);
    void SetPendingInviteJoinModding(const FBlueprintSessionResult& Result);
    void SetOverrideMaxPlayerCount(int32 Count);
    void SetMinersManualNotification(EMinersManualSection Section, class UObject* IdentifyingObject, FText Text);
    void SetLoaderWorldVisible(bool V, bool resetHud);
    void SetIsUsingOnlineFeatures(bool bIsOnlineFeatureUsed);
    void SetHasSeenInfoScreen();
    void SetGlobalMissionSeed(int32 Seed);
    void SetFSDPassword(FString pw);
    void SetEligableForRetirementAssignment(bool eligable);
    void SetDebugSeed(int32 Seed);
    void SetCharacterSelectionWorldVisible(bool V, ECharselectionCameraLocation cameraLocation, bool resetHud, ECharacterSelectorItemStatus itemStatus);
    void SetCharacterSelectionSwitcher(class ACharacterSelectionSwitcher* switcher);
    void SendSteamInfo();
    void ScheduleResetOfWorldsAndGameDataThenOpenLevel(FName LevelName);
    void RestoreCursors();
    void ResetViewer3DClass();
    void ResetSaveGame();
    void ResetAlwaysLoadedWorldsAndGameData();
    void RemoveBosco();
    void RemoveAllTemporaryBuff(class APlayerController* PlayerController);
    void RefreshIsGameModded();
    void PreClientTravelCleanup(class APlayerController* PlayerController);
    void PostInit(bool reload);
    void PairingUsePreviousProfile();
    void PairingUseNewProfile();
    void OnStartSearchForFriendsComplete__DelegateSignature(bool bWasSuccessful, FString ErrorStr);
    void OnNewFSDSessionID(FString sessionId);
    void OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> failType, FString errorMessage);
    void OnLoadComplete(FString MapName);
    void NewHUDWarningDelegate__DelegateSignature(class UHUDWarningWidget* newWidget);
    void LoadSaveGame(class UFSDSaveGame* toLoad);
    bool IsPendingInvitePasswordProtected();
    bool IsPendingInviteModded();
    bool IsMutatorActive(TSubclassOf<class UMutator> mutatorClass);
    bool IsGameModded();
    bool IsFreeBeerRewardActive();
    bool IsCharacterSelectionWorldVisible();
    bool IsCampaignMission();
    bool HasTooManyModsEnabled();
    bool HasSignedIn();
    bool HasRandomBeerBuff();
    bool HasPendingInvite();
    bool HasPendingActivity();
    bool HasAnalytics();
    void GraphicsUserSettingsChanged();
    void GiveTemporaryBuff(class UTemporaryBuff* buff, class APlayerCharacter* Player);
    FVector2D GetViewportSize();
    TSoftClassPtr<AProceduralSetup> GetSoftReferenceToPLS();
    TArray<FBlueprintSessionResult> GetServersFriendsArePlaying(TArray<FBlueprintSessionResult> servers);
    FString GetSeedString(class UObject* WorldContextObject);
    int32 GetOverrideMaxPlayerCount();
    TArray<class UMutator*> GetMutators(TSubclassOf<class UMutator> mutatorClass);
    int32 GetMaxPublicConnections();
    int32 GetMaxAllowedMods();
    class AFSDPlayerController* GetLocalFSDPlayerController();
    class UIconGenerationManager* GetIconGenerationManager();
    bool GetHasSeenInfoScreen();
    int32 GetGlobalMissionSeed();
    class UGeneratedMission* GetGeneratedMission();
    class UMutator* GetFirstMutator(TSubclassOf<class UMutator> mutatorClass);
    FString GetDisconnectErrorCode();
    TArray<FNetworkConnectionInfo> GetConnectionInfo();
    int32 GetCommonGlobalMissionSeed();
    class APlayerCharacter* GetCharacterSelectorCharacter();
    void GameUserSettingsChanged();
    void DonkeyCharacterDelegate__DelegateSignature(class AMolly* InDonkey);
    void CloseSessionLobby();
    void ClearDisconnectError();
    void ChangeSkinPreview(class UItemSkin* PreviewSkin);
    void CancelJoin();
    void CachePSOsOnCommand();
    void ApplyGameUserSettings(class UFSDGameUserSettings* Settings);
    class UHUDWarningWidget* AddWarningToHUD(TSubclassOf<class UHUDWarningWidget> WidgetClass, class UTexture2D* Texture, class USoundBase* PingSound);
    void AddToFriendSessions(FString friendSessionId, FString friendName);
    void AddStatValue(FString Key, float Value);
    void AddStatCount(FString Key, int32 Count);
};

class UFSDGameUserSettings : public UGameUserSettings
{
    FFSDGameUserSettingsOnSettingsChanged OnSettingsChanged;
    void Delegate();
    FFSDGameUserSettingsOnUseHoldToRunChanged OnUseHoldToRunChanged;
    void BoolConfigChanged(bool NewValue);
    FFSDGameUserSettingsOnFOVChanged OnFOVChanged;
    void FloatConfigChanged(float NewValue);
    FFSDGameUserSettingsOnLanguageChanged OnLanguageChanged;
    void LanguageChanged(FString Culture);
    FFSDGameUserSettingsOnGameServerNameChanged OnGameServerNameChanged;
    void StringConfigChanged(FString NewValue);
    FFSDGameUserSettingsOnFontSizeChanged OnFontSizeChanged;
    void ChatFontSizeChanged(int32 NewValue);
    FFSDGameUserSettingsOnJukeboxStreamerModeChanged OnJukeboxStreamerModeChanged;
    void BoolConfigChanged(bool NewValue);
    bool bJukeboxStreamerMode;
    bool bGraphicSettingsChanged;
    FString CurrentUserSetSaveSlotName;
    FFSDGameUserSettingsOnCanShowBloodChanged OnCanShowBloodChanged;
    void BoolConfigChanged(bool NewValue);
    TMap<class FName, class bool> NamedBoolSettings;
    FModdingUISettings ModdingUISettings;
    FFSDGameUserSettingsOnColorVisionDeficiencySettingsChanged OnColorVisionDeficiencySettingsChanged;
    void ColorVisionDeficiencyDelegate(const FColorVisionDeficiencySettings& InSettings);
    FColorVisionDeficiencySettings ColorVisionDeficiency;
    int32 ServerSearchRegion;
    bool ServerSearchPasswordRequired;
    FFSDGameUserSettingsOnModdingSettingsChanged OnModdingSettingsChanged;
    void ModdingSettingsChanged();
    float volumeCharacterVoice;
    float volumeMissionControl;
    float volumeMaster;
    float volumeSFX;
    float volumeMusic;
    FString CurrentAudioOutputDeviceId;
    bool UseDefaultAudioOutputDevice;
    float Sharpening;
    int32 AntiAliasingType;
    bool TemporalAAUpsamplingEnabled;
    float volumeVoice;
    int32 UpscalingType;
    int32 AmdFsrMode;
    int32 AmdFsr2Mode;
    float AmdFsrSharpness;
    float AmdFsr2Sharpness;
    UDLSSMode NvidiaDlssMode;
    float NvidiaDlssSharpness;
    float FSDResolutionScale;
    ENVidiaReflexMode ReflexMode;
    float WeaponSpwayScale;
    class USoundClass* soundClassCharacterVoices;
    class USoundClass* soundClassMissionControl;
    class USoundClass* soundClassMaster;
    class USoundClass* soundClassSFX;
    class USoundClass* soundClassUI;
    class USoundClass* soundClassMusic;
    class USoundClass* soundClassVoice;
    int32 ChatFontSize;
    bool bUseVoiceChat;
    bool bUsePushToTalk;
    FString LocalGameServerName;
    FString LocalGameServerNameFiltered;
    bool AppearOffline;
    bool AutoRefreshServerlist;
    float MouseXSensitivity;
    float MouseYSensitivity;
    bool UseSeperateSensetivity;
    bool InvertMouse;
    bool InvertScroolWheel;
    bool UseHoldToRun;
    bool UseToggleLaserpointer;
    float FOV;
    float HeadbobbingScale;
    float CameraShakeScale;
    float ChatFadeTime;
    bool UseStreamerProgram;
    bool SoundOnChatMessage;
    bool PhotosensitiveMode;
    bool ShowUIAnimations;
    bool UseProfanityFilter;
    float ForceFeedbackScale;
    bool InvertFlightControls;
    bool EnableDx12ByDefault;
    float HDRColorGamma;
    EConsoleGraphicsMode ConsoleGraphicsMode;
    float StaticResoultionScale;
    bool UseManuelGrahpicsMode;
    FHUDElements HUDElements;
    FCharacterOptions CharacterOptions;
    float DownedTurnDirection_Controller;
    float DownedTurnDirection_Mouse;
    float UIDPIScale;
    bool EnableCustomUIScale;
    FFSDGameUserSettingsOnInputSourceChanged OnInputSourceChanged;
    void InputSourceChangedSignature(EFSDInputSource InputSource);
    bool CheckCursorOutOfBounds;
    FFSDGameUserSettingsOnEnableTutorialHintsChanged OnEnableTutorialHintsChanged;
    void BoolConfigChanged(bool NewValue);
    FFSDGameUserSettingsOnShowFPSChanged OnShowFPSChanged;
    void BoolConfigChanged(bool NewValue);
    FFSDGameUserSettingsOnShowNetInfoLevelChanged OnShowNetInfoLevelChanged;
    void Int32ConfigChanged(int32 NewValue);
    FFSDGameUserSettingsOnDx12Enabled OnDx12Enabled;
    void BoolConfigChanged(bool NewValue);
    FIntPoint ResolutionToBeApplied;
    bool VSyncToBeApplied;
    bool Dx12ToBeApplied;
    TEnumAsByte<EWindowMode::Type> InFullscreenModeToBeApplied;
    bool InFullscreenModeToBeAppliedValid;
    bool VSyncToBeAppliedValid;
    bool Dx12ToBeAppliedValid;
    bool ResolutionToBeAppliedValid;
    bool EscMenuActive;
    bool bShowUpgradeExtraDetails;
    FFSDGameUserSettingsOnShowUpgradeExtraDetailsChanged OnShowUpgradeExtraDetailsChanged;
    void BoolConfigChanged(bool NewValue);
    FFSDGameUserSettingsOnCustomKeyBindingsChanged OnCustomKeyBindingsChanged;
    void CustomKeyBindingsChanged();
    int32 LastNiagaraShaderVerions;
    bool HasKeyboardBeenConnected;
    EFSDInputSource CurrentInputSource;
    EFSDInputSource RequestedInputSource;
    TArray<FCustomKeyBinding> CustomKeyBindings;
    TArray<FCustomKeyBinding> CustomControllerBindings;
    bool SwapControllerThumbsticks;
    bool bTutorialHintsEnabled;
    bool bShowSubtitles;
    bool bShowFPS;
    int32 ShowNetInfoLevel;
    bool bCanShowBlood;
    bool PreventLatejoinCharacterDuplication;
    bool TranslatorDebugModeEnabled;
    FString PreviousCulture;
    FControllerSettings ControllerSettings;
    TArray<FGuid> SelectedDifficultyLevels;
    TArray<FGuid> DifficultyLevelsAddedByDefault;

    void UpdateVolumeSettings(class USoundClass* CharacterVoices, class USoundClass* MissionControl, class USoundClass* Master, class USoundClass* Music, class USoundClass* SFX, class USoundClass* UI, class USoundClass* Voice);
    void UpdateForceFeedbackScaleOnController(class APlayerController* Controller);
    bool ToggleTranslatorDebugMode();
    bool ToggleShowUpgradeExtraDetails();
    void ToggleModdingServerFilter(uint8 ServerFilter, bool Enable);
    void SetZiplineGunAutoSwitch(bool shouldAutoSwitch);
    void SetWeaponSwayScale(float Scale);
    void SetVSyncEnabledToBeApplied(bool bEnable);
    void SetVolume(EVolumeType volumeType, float Volume);
    void SetVoiceChatEnabled(bool bEnable);
    void SetUseToggleTerrainScanner(bool useToggleTerrainScanner);
    void SetUseToggleLaserpointer(bool UseToggleLaserpointer);
    void SetUseStreamerProgram(bool UseStreamerProgram);
    void SetUseSeparateSensitivity(bool newSetting);
    void SetUseProfanityFilter(bool shouldUse);
    void SetUseManualGraphicsMode(bool bEnabled);
    void SetUseHoldToRun(bool UseHoldToRun);
    void SetUseDefaultAudioOutputDevice(class UObject* WorldContextObject, bool UseDefault);
    void SetUseCustomUIScale(bool UseCustomScale);
    void SetUpscalingType(int32 Type);
    void SetUIDPIScale(float uiscale);
    void SetTutorialHintsEnabled(bool Enabled);
    void SetTurn180Mode(ETurn180Mode InMode);
    void SetTemporalAAUpscalingEnabled(bool bEnable);
    void SetSwapControllerThumbsticks(bool InSwapThumbsticks);
    void SetSteamSearchRegion(ESteamSearchRegion InRegion);
    void SetStaticResolutionScale(float percentage);
    void SetShowUIAnimations(bool shouldShow);
    void SetShowSubtitles(bool Show);
    void SetShowSandboxLabel(bool InShowLabel);
    void SetShowNetInfoLevel(int32 Level);
    void SetShowFPS(bool Visible);
    void SetSharpening(float Sharpening);
    void SetServerSearchPasswordRequired(bool InPasswordRequired);
    void SetScreenResolutionToBeApplied(FIntPoint Resolution);
    void SetReflexMode(ENVidiaReflexMode ReflexMode);
    void SetPushToTalk(bool bEnable);
    void SetPreviousItemEnabledOnController(bool InEnabled);
    void SetPreventLatejoinCharacterDuplication(bool prevent);
    void SetPlaySoundOnChatMessage(bool playSoundOnMessage);
    void SetPhotosensitiveMode(bool modeOn);
    void SetNvidiaDlssSharpness(float Sharpness);
    void SetNvidiaDlssMode(UDLSSMode Mode);
    void SetMouseYSensitivity(float newSensitivity);
    void SetMouseXSensitivity(float newSensitivity);
    void SetModdingSortBy(uint8 SortField, bool SortAscending);
    void SetLensFlaresEnabled(bool Enabled);
    void SetJukeboxStreamerMode(bool InStreamerMode);
    void SetInvertMouseWheel(bool invertMouseWheel);
    void SetInvertMouse(bool InvertMouse);
    void SetInvertFlightControls(bool Invert);
    void SetInputSource(EFSDInputSource NewSource);
    void SetHoldToFire(bool HoldToFire);
    void SetHoldToBreakImmobilization(bool holdToBreak);
    void SetHeadBobbingScale(float HeadbobbingScale);
    void SetHDRColorGamma(float Gamma);
    void SetGrapplingHookAutoSwitch(bool shouldAutoSwitch);
    void SetGamma(float gamme);
    void SetGameServerName(const int32 localUserNum, FString Name);
    void SetFullscreenModeToBeApplied(TEnumAsByte<EWindowMode::Type> InFullscreenMode);
    void SetFOV(float FOV);
    void SetForceFeedbackScale(float Scale);
    void SetDx12EnabledToBeApplied(bool bEnable);
    void SetDownCameraTurnDirection(EFSDInputSource InputSource, float InDirection);
    void SetDisableMasterEQ(bool B);
    void SetDifficultySelected(class UDifficultySetting* Difficulty, bool IsSelected);
    void SetDebugLocalizerMode(bool bEnable);
    void SetCurrentUserSaveSlotName(class UObject* WorldContextObject, FString saveSlotName, ESaveSlotChangeProcedure changeProcedure);
    void SetConsoleGraphicsMode(EConsoleGraphicsMode Mode);
    void SetColorVisionDeficiency(EColorVisionDeficiency InType, float InSeverity);
    void SetCheckForOutOfBoundsEnabled(bool Enabled);
    void SetChatFontSize(int32 inFontSize);
    void SetChatFadeTime(float FadeTime);
    void SetChatEnabledOnController(bool InEnabled);
    void SetCanShowBlood(bool bloodAllowed);
    void SetCameraShakeScale(float CameraShakeScale);
    void SetBloomEnabled(bool Enabled);
    void SetAutoRefreshServerlist(bool Value);
    bool SetAudioOutputDevice(class UObject* WorldContextObject, FString DeviceID);
    bool SetAudioInputDevice(FString DeviceName);
    void SetAppearOffline(bool bEnable);
    void SetAntiAliasingType(int32 AntiAliasingType);
    void SetAMDFSRSharpness(float Sharpness);
    void SetAMDFSRMode(int32 Mode);
    void SetAMDFSR2Sharpness(float Sharpness);
    void SetAMDFSR2Mode(int32 Mode);
    void SetAimSensitivity(float NewValue);
    void SetAimOuterAcceleration(float NewValue);
    void SetAimDeadZone(float NewValue);
    void ResetGraphicsChanges();
    void ResetControllerSettings();
    void PostInitFSDUserSettings(class UObject* WorldContextObject);
    bool IsVoiceChatEnabled();
    bool IsUpscalingTypeSupported(int32 Type);
    bool IsNvReflexAvailable();
    bool IsManaulGraphicsModeAvailable();
    bool IsDx12Enabled();
    bool IsDebugLocalizerModeEnabled();
    bool IsCurrentInputSource(EFSDInputSource InputSource);
    void InitializeDifficultySelection(class UObject* WorldContext, const TArray<class UDifficultySetting*> StartSelection);
    bool HasAudioOutputDeviceChanged(FString& AudioDeviceChangedTo);
    bool GetZiplineGunAutoSwitch();
    float GetWeaponSwayScale();
    bool GetVSyncEnabledToBeApplied();
    float GetVolume(EVolumeType volumeType);
    bool GetUseToggleTerrainScanner();
    bool GetUseToggleLaserpointer();
    bool GetUseStreamerProgram();
    bool GetUseSeparateSensitivity();
    bool GetUseProfanityFilter();
    bool GetUseManualGraphicsMode();
    bool GetUseHoldToRun();
    bool GetUseDefaultAudioOutputDevice();
    bool GetUseCustomUIScale();
    int32 GetUpscalingType();
    float GetUIDPIScale();
    bool GetTutorialHintsEnabled();
    ETurn180Mode GetTurn180Mode();
    bool GetTemporalAAUpscalingEnabled();
    ESteamSearchRegion GetSteamSearchRegion();
    float GetStaticResolutionScale();
    bool GetShowUIAnimations();
    bool GetShowSubtitles();
    bool GetShowSandboxLabel();
    int32 GetShowNetInfoLevel();
    bool GetShowFPS();
    float GetSharpening();
    FIntPoint GetScreenResolutionToBeApplied();
    ENVidiaReflexMode GetReflexMode();
    bool GetPushToTalk();
    bool GetPreviousItemEnabledOnController();
    bool GetPreventLatejoinCharacterDuplication();
    bool GetPlaySoundOnChatMessage();
    bool GetPhotosensitiveMode();
    float GetNvidiaDlssSharpness();
    UDLSSMode GetNvidiaDlssMode();
    float GetMouseYSensitivity();
    float GetMouseXSensitivity();
    bool GetModdingServerFilterEnabled(uint8 ServerFilter);
    bool GetLensFlaresEnabled();
    bool GetIsDifficultySelected(class UDifficultySetting* Difficulty);
    bool GetInvertMouseWheel();
    bool GetInvertMouse();
    bool GetInvertFlightControls();
    EFSDInputSource GetInputSource();
    bool GetHoldToFire();
    bool GetHoldToBreakImmobilization();
    float GetHeadBobbingScale();
    float GetHDRColorGamma();
    bool GetGrapplingHookAutoSwitch();
    float GetGamma();
    TEnumAsByte<EWindowMode::Type> GetFullscreenModeToBeApplied();
    class UFSDGameUserSettings* GetFSDGameUserSettings();
    float GetFOV();
    float GetForceFeedbackScale();
    bool GetDx12EnabledToBeApplied();
    float GetDownCameraTurnDirection(EFSDInputSource InputSource);
    bool GetDisableMasterEQ();
    FString GetCurrentUserSaveSlotName();
    EFSDInputSource GetCurrentInputSource();
    bool GetCurrentAudioOutputDevice(class UObject* WorldContextObject, FString& AudioDevice);
    FString GetCurrentAudioInputDeviceName();
    float GetCurrentAudioInputDeviceAmplitude(int32 localUserId);
    EConsoleGraphicsMode GetConsoleGraphicsMode();
    bool GetCheckForOutOfBounds();
    int32 GetChatFontSize();
    float GetChatFadeTime();
    bool GetChatEnabledOnController();
    float GetCameraShakeScale();
    bool GetBloomEnabled();
    bool GetAvaliableAudioOutputDevices(class UObject* WorldContextObject, TArray<FString>& AudioDevices);
    bool GetAvaliableAudioInputDevices(TArray<FString>& AudioDevices);
    bool GetAvailableScreenResolutionsForNonPrimaryMonitors(TArray<FIntPoint>& Resolutions);
    bool GetAutoRefreshServerlist();
    FString GetAudioOutputDeviceName(class UObject* WorldContextObject, FString DeviceID);
    bool GetAppearOffline();
    int32 GetAntiAliasingType();
    float GetAMDFSRSharpness();
    int32 GetAMDFSRMode();
    float GetAMDFSR2Sharpness();
    int32 GetAMDFSR2Mode();
    float GetAimSensitivity();
    float GetAimOuterAcceleration();
    float GetAimDeadZone();
    FString GameServerNameFiltered();
    FString GameServerName();
    void FSDSetResolutionScale(float NewScaleNormalized);
    bool FSDSetCurrentLanguage(class UObject* WorldContextObject, FString Culture);
    class UFSDGameUserSettings* FSDGameUserSettings();
    bool ConsoleGraphicsModeAvailable(EConsoleGraphicsMode Mode);
    void ClearCustomKeyBindings(bool InGamepadKeys);
    bool CanShowBlood();
    void ApplyGraphicsChanges();
    void ApplyConsoleGraphicsMode();
};

class UFSDGameplayStatics : public UBlueprintFunctionLibrary
{

    class UFXSystemComponent* SpawnScaledEmitterAtLocation(class UObject* WorldContextObject, FScaledEffect ScaledEffect, FVector Location, FRotator Rotation, bool bAutoDestroy);
    class UDecalComponent* SpawnDecalData(const class UObject* WorldContextObject, const FVector& Location, const FVector& UpVector, const FDecalData& DecalData, bool randomRollRotation);
    class UDecalComponent* SpawnDecalAtActor(class AActor* Actor, class UMaterialInterface* DecalMaterial, float Size, float Duration, float FadeDuration);
    class UDecalComponent* SpawnDecal(const class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const FVector& Location, const FVector& UpVector, float Size, float Duration, float FadeDuration);
    void SetControllerVibrationSubmixSend(const class UObject* WorldContextObject, class UAudioComponent* AudioComponent, float SendLevel);
    void SetControllerSpeakerSubmixSend(const class UObject* WorldContextObject, class UAudioComponent* AudioComponent, float SendLevel);
};

class UFSDInWorldWidget : public UUserWidget
{
    bool bHUDVisibile;

    void ReceiveHUDVisibilityChanged(bool InHudVisible);
    void CallbackHUDVisibilityChanged(bool InHudVisible);
};

class UFSDJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FFSDJoinSessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FFSDJoinSessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();
    class UObject* WorldContextObject;

    class UFSDJoinSessionCallbackProxy* FSDJoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult, FString FSDPassword, bool fromInvite);
};

class UFSDKismetArrayExtensionFunctions : public UKismetArrayLibrary
{

    void Array_GetRandom(const TArray<int32>& TargetArray, int32& Item);
};

class UFSDLabelWidget : public UTextBlock
{

    void SetWrapTextAt(float WrapAt);
    void SetWrappingPolicy(ETextWrappingPolicy Policy);
    void SetMargin(FMargin NewMargin);
    void SetLineHeightPercentage(float percentage);
    void SetFontSize(int32 Size);
    int32 GetFontSize();
};

class UFSDLevelLoadingPersistentWidget : public UUserWidget
{

    void SetFadeProgress(float fade, bool ToSpaceRig, class UTexture* LoadingImage);
};

class UFSDLobbyHandler : public UObject
{
};

class UFSDLocalizationSettings : public UDeveloperSettings
{
    TArray<FFSDTranslationProgress> CommunityTranslationProgress;

};

class UFSDLookupSessionId : public UOnlineBlueprintCallProxyBase
{
    FFSDLookupSessionIdOnSuccess OnSuccess;
    void FoundSessionResult(FBlueprintSessionResult Result);
    FFSDLookupSessionIdOnFailure OnFailure;
    void EmptyOnlineDelegate();

    class UFSDLookupSessionId* FSDLookupSessionId(class UObject* WorldContextObject, FString SessionKey);
};

class UFSDMainHUDWidget : public UUserWidget
{

    void PushEvent(class UWidget* eventWidget, bool Left);
    void PopEvent(class UWidget* eventWidget, bool Left);
    void OnRadarPointAdded(class URadarPointComponent* Point);
    void AddRadarPoint(class URadarPointComponent* Point);
};

class UFSDMath : public UBlueprintFunctionLibrary
{

    FVector SphericalToCartesian(float Radius, float azimuth, float elecation);
    bool PercentageCheck(float percentage);
    void GetAzimuthAndElevation(const FVector& Direction, const FTransform& coordinateSystem, float& azimuth, float& elevation);
    float CubicSegmentLength(FVector p0, FVector tangent1, FVector p1, FVector tangent2);
    FVector CubicInterpBlueprint(FVector p0, FVector tangent1, FVector p1, FVector tangent2, float alpha);
    void CartesianToSpherical(FVector Location, float& outAzimuth, float& outElevation, float& OutRadius);
};

class UFSDMissionSettings : public UDeveloperSettings
{
    FSoftObjectPath DefaultRoomGenerator;
    TMap<int32, FMissionHazardSetting> MissionComplexitySettings;
    TMap<int32, FMissionHazardSetting> MissionDurationSettings;

    float GetTotalHazardBonus(class UObject* WorldContextObject, class UGeneratedMission* mission, class UDifficultySetting* DifficultySetting);
};

class UFSDOnlineSessionClient : public UOnlineSessionClient
{
};

class UFSDOnlineSystemUtils : public UBlueprintFunctionLibrary
{

    void TryToResolvePrivilege(const class APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, EBlueprintablePrivilegeResults reason);
    void ShowUpgradeAccountUI();
    void ShowAccountPicker(class UFSDGameInstance* gInstance, const int32 GamePlayerID);
    void OpenURLInOverlay(FString URL, FOpenURLInOverlayOnOverlayClosed OnOverlayClosed);
    void OpenProfileWithEvent(class APlayerState* Requestor, class APlayerState* Requestee, FOpenProfileWithEventOnProfileWindowClosed OnProfileWindowClosed);
    void OpenProfileByUserId(class APlayerState* Requestor, FString RequesteeUserID);
    void OpenProfile(class APlayerState* Requestor, class APlayerState* Requestee);
    FText OnlinePlayBlockReasonToString(EBlueprintablePrivilegeResults reason);
    void GetOnlinePlayBlockReasons(TArray<EBlueprintablePrivilegeResults>& reasons);
    void GetIsUpdatePending(const FGetIsUpdatePendingDelegate& Delegate);
    void GetIsPrivilegeAllowed(const class APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, const FGetIsPrivilegeAllowedDelegate& Delegate);
    FText GetInviteFeatureBlockReason(class UObject* WorldContextObject, EInviteBlockReason reason);
    EInviteBlockReason CanPlayerInvite(class UObject* WorldContextObject);
};

class UFSDPFPUtils : public UBlueprintFunctionLibrary
{

    bool IsPlayfabLoaded();
    FString GetPlayfabUserId();
};

class UFSDPS4Utils : public UBlueprintFunctionLibrary
{

    void SetUGCAllowed(bool bAllowed);
    bool IsUGCAllowed();
    bool IsPS4SystemLoaded();
};

class UFSDPawnStatusEffectItem : public UStatusEffectItem
{
    float StaggerDurationMultiplier;
    float AttackSpeedModifier;

};

class UFSDPhysicalMaterial : public UPhysicalMaterial
{
    float BreakingDecelerationScale;
    float BreakingFrictionScale;
    float MaxAccelerationScale;
    bool RepulsePlayer;
    FFloatInterval RepulsePlayerVelocity;
    float RepulsePlayerRandomDegreeOffset;
    class USoundCue* RepulsePlayerSound;
    class UFXSystemAsset* RepulsePlayerParticle;
    class UFXSystemAsset* ImpactParticles;
    class UMaterialInstance* ImpactMaterialOverride;
    class USoundCue* ImpactSound;
    class USoundCue* MeleeImpactSound;
    bool UseImpactDecalOverrides;
    TArray<FDecalData> ImpactDecals;
    class USoundCue* FirstPersonDamageIndicatorSound;
    bool IsWeakPoint;
    bool AllowFrozenBonus;
    bool IsSubhealthCollider;
    float DamageMultiplier;
    class UFXSystemAsset* FootstepParticle;
    class UMaterialInstance* FootstepMaterialOverride;
    FDecalData LeftFootprintDecal;
    FDecalData RightFootprintDecal;
    class USoundCue* FootstepSound;
    float ExtraFallVelocity;
    class UFXSystemAsset* FallImpactEffect;
    class USoundCue* FallImpactSound;
    bool alwaysPenetrate;
    TSubclassOf<class UReactiveTerrain> ReactiveTerrain;

    class UFXSystemComponent* SpawnImpactParticlesFromHit(class UObject* WorldContextObject, const FHitResult& HitResult);
    class UFXSystemComponent* SpawnImpactParticles(class UObject* WorldContextObject, FVector Location, FVector Normal);
    class UFSDPhysicalMaterial* GetPhysicalMaterialFromPrimitive(class UPrimitiveComponent* Component);
};

class UFSDProjectileMovementComponent : public UProjectileMovementComponent
{
    FFSDProjectileMovementComponentOnProjectilePenetrate OnProjectilePenetrate;
    void OnProjectilePenetrateDelegate(const FHitResult& ImpactResult);
    FFSDProjectileMovementComponentOnProjectileOutOfPropulsion OnProjectileOutOfPropulsion;
    void OnProjectileOutOfPropulsion();
    uint8 bShouldPenetrate;
    TArray<class TSubclassOf<AActor>> IgnoreCollisionAgainst;
    bool InvertIgnoreCollisionAgainst;
    class UCurveFloat* AccelerationCurve;
    float AccelerationMultiplier;
    float MaxPropulsionTime;
    uint8 bCancelPenetration;

};

class UFSDRateLimiter : public UObject
{

    bool RateLimted();
    void K2_Enqueue(FK2_EnqueueOnRateLimitOpen OnRateLimitOpen, FString ID);
    bool IsQueueEmpty();
    bool IsQueued(FString ID);
    void Init(int32 rateLimit, float rateTimeLimit, bool useBurstLimit, int32 burstLimit, float burstTimeLimit);
    void IncreaseLimitCounter();
};

class UFSDRefineryAnimInstance : public UAnimInstance
{
    ERefineryState RefineryState;

};

class UFSDRichTextFunctionlibrary : public UBlueprintFunctionLibrary
{

    void SplitRichText(const FRichTextParseResult& Parser, int32 SplitIndex, bool bKeepLeftFormatting, bool bKeepRightFormatting, FText& OutLeftText, FText& OutRightText);
    FRichTextParseResult ParseRichText(const FText& InText);
    FText MidRichText(const FRichTextParseResult& Parser, int32 StartIndex, int32 Count, bool bKeepFormatting);
};

class UFSDSaveGame : public USaveGame
{
    FFSDSaveGameOnCreditsChanged OnCreditsChanged;
    void CreditsChangedSignature(int32 Credits);
    FFSDSaveGameOnCharacterSaveChanged OnCharacterSaveChanged;
    void CharacterProgressChangedSignature(TSubclassOf<class APlayerCharacter> CharacterClass, int32 Level, float Progress);
    FFSDSaveGameOnCharacterCanRetire OnCharacterCanRetire;
    void CharacterSignature(TSubclassOf<class APlayerCharacter> CharacterClass);
    FFSDSaveGameOnCharacterRetired OnCharacterRetired;
    void RetirementSignature(TSubclassOf<class APlayerCharacter> CharacterClass, int32 RetirementCount);
    FFSDSaveGameOnPlayerProgressChanged OnPlayerProgressChanged;
    void PlayerProgressChangedSignature(int32 Rank, int32 Stars);
    FFSDSaveGameOnTutorialsReset OnTutorialsReset;
    void TutorialsResetDelegate();
    FFSDSaveGameOnPersonalMetricsChanged OnPersonalMetricsChanged;
    void PersonalMatricsChangedSignature(bool AllowPersonalMetrics);
    FFSDSaveGameOnAnonymousMetricsChanged OnAnonymousMetricsChanged;
    void AnonymousMatricsChangedSignature(bool AllowAnonymousMetrics);
    FFSDSaveGameOnItemUnlocked OnItemUnlocked;
    void ItemUnlockedDelegate();
    FFSDSaveGameOnItemPurchased OnItemPurchased;
    void ItemUnlockedDelegate();
    FFSDSaveGameOnItemUINotificationChange OnItemUINotificationChange;
    void ItemUINotificationDelegate();
    int32 VersionNumber;
    bool bMilestoneResetShown;
    bool bYearTwoGiftClaimed;
    FFSDSaveGameOnForgingXPChanged OnForgingXPChanged;
    void ForgingXPDelegate(float XP);
    FFSDSaveGameOnResourceAmountChanged OnResourceAmountChanged;
    void ResourceAmountChangedDelegate(class UResourceData* Resource, float currentAmount);
    FFSDSaveGameOnSkinUnlocked OnSkinUnlocked;
    void SkinSignature(class UItemSkin* Skin, class UItemID* ItemID);
    FDateTime SaveSlotTimeStamp;
    FFSDSaveGameOnPerkPointsChanged OnPerkPointsChanged;
    void PerkPointsChangedSignature(int32 PerkPoints, int32 Change);
    FMissionStatSave MissionStatsSave;
    FMilestoneSave Milestones;
    FPerkClaimsSave OwnedPerks;
    FCharacterPerksSave EquippedPerks;
    FAchievementSave AchievementSave;
    TArray<FCharacterPerksSave> EquippedPerkLoadouts;
    FCharacterPerksSave RandomEquippedPerkLoadout;
    FVanityMasterySave VanityMasterySave;
    FFSDSaveGameOnVanityMasteryChanged OnVanityMasteryChanged;
    void CraftingMasteryChanged(FVanityMasteryResult Result);
    FJettyBootsSave JettyBootsSave;
    FSchematicSave SchematicSave;
    FPromotionRewardsSave PromotionRewardsSave;
    FFSDEventRewardsSave FSDEventRewardsSave;
    FSeasonSave SeasonSave;
    FGameDLCSave GameDLCSave;
    FFSDSaveGameOnWeaponMaintenanceChanged OnWeaponMaintenanceChanged;
    void WeaponMaintenanceChanged();
    FWeaponMaintenance WeaponMaintenance;
    int32 SaveCreatedInPatch;
    FString AnonymousID;
    int32 PerkPoints;
    bool HasRecievedDiscordReward;
    EFSDFaction Faction;
    TArray<FGuid> UnLockedMissions;
    TMap<class FGuid, class FUnLockedMissionParameters> UnLockedMissionParameters;
    TArray<FGuid> UnLockedPlanetZones;
    FCampaignSave CampaignSave;
    FDeepDiveSave DeepDiveSave;
    TArray<FCharacterSave> CharacterSaves;
    int32 Credits;
    int32 LastBoughtDailyDealSeed;
    FForgingSave Forging;
    FDrinkSave Drinks;
    TArray<FUpgradeLoadout> ItemUpgradeLoadouts;
    bool bIgnoreRandomLoadout;
    TArray<FGuid> PurchasedItemUpgrades;
    TArray<FGuid> UnlockedItems;
    TArray<FGuid> OwnedItems;
    TMap<FGuid, int32> EnemiesKilled;
    TMap<class FGuid, class FItemNotificationInfo> ItemsWithNotification;
    TMap<class FGuid, class FSkinList> UnlockedItemSkins;
    TSet<FGuid> UnlockedPickaxeParts;
    TArray<class UVanityItem*> UnLockedVanityItems;
    TArray<FGuid> UnLockedVanityItemIDs;
    TArray<FGuid> HiddenUICategories;
    int32 LastCollectedCommunityRewardPeriodID;
    TSet<FGuid> MinersManualKnownObjects;
    FEventRewardSave EventRewardSave;
    FItemUINotifications ItemUINotifications;
    FString RejoinSessionId;
    bool FirstRejoinAttempt;
    bool HaveItemUpgradesBeenFixed;
    bool bHasOpenedDeepDiveTerminal;
    FResourcesSave Resources;
    bool FirstSession;
    TArray<FWatchedTutorial> WatchedTutorials;
    FConsoleOptionsInSaveGame ConsoleOptions;
    FGDKWinOptionsInSaveGame WinGDKOptions;
    FOptionsInSaveGame WindowsOptions;
    bool HasCompletedTutorial;
    bool HasPlayedTutorial;
    bool ShowHowToRestartTutorialPrompt;
    bool HasPlayedIntroMessage;
    bool HasSentSteamInfo;
    bool HasClaimedSteamGroupLoot;
    bool IsBoscoAllowed;
    bool HasJoinedXboxClub;
    bool HasSeenAnalyticsPopUp;
    bool AllowAnalyticsTracking;
    bool AllowPersonalAnalyticsTracking;
    bool IsModded;
    int32 Index;
    FString Name;
    float TotalPlayTimeSeconds;
    TMap<FGuid, int32> SelectedLoadout;
    uint32 userIdx;
    uint32 CurrLoadoutIdx;
    uint32 SaveToDiskCounter;
    uint32 BackupSaveIndex;
    uint32 ExternalBackupSaveIndex;
    int32 NumberOfGamesPlayed;
    class UPlayerCharacterID* LastPlayedCharacter;
    bool ShowInfoScreen;
    FString LastShownVersion;
    FSonyInputSettings SonyInputSettings;
    class UFSDGameInstance* FSDGameInstance;

    void TutorialsResetDelegate__DelegateSignature();
    bool TrySellResource(class UResourceData* Resource, int32 Amount, int32& Price);
    bool TryDeductResources(const TMap<UResourceData*, int32>& Resources);
    bool TryDeductCredits(int32 Amount);
    bool TryBuyResource(class UResourceData* Resource, int32 Amount, int32& Price);
    void SkinSignature__DelegateSignature(class UItemSkin* Skin, class UItemID* ItemID);
    bool ShouldDisplayFirstSchematicMessage();
    void SetSonyInputSettingMotionXMapping(ESonyControllerMotionMapping NewValue);
    void SetSonyInputSettingLightMode(ESonyControllerLightMode NewValue);
    void SetSonyInputSettingFloat(class UObject* WorldContext, ESonyInputSettingsFloats Setting, float NewValue);
    void SetSonyInputSettingBool(ESonyInputSettingsBools Setting, bool NewValue);
    bool SetPersonalAnalytics(bool State);
    void SetIsModded(bool modded);
    void SetIndexAndName(int32 Index, FString Name);
    void SetIgnoreRandomLoadout(bool inIgnoreRandomLoadout);
    void SetHasSentSteamInfo();
    void SetHasJoinedXboxClub();
    void SetHasClaimSteamGroupLoot();
    void SetFaction(EFSDFaction newFaction, bool Reasign);
    void SetEquippedItemID(EItemCategory Category, class UPlayerCharacterID* PlayerId, class UItemID* Item);
    void SetEquippedItem(EItemCategory Category, class UPlayerCharacterID* PlayerId, TSubclassOf<class AActor> Item);
    void SetDiscordReward(bool State);
    void SetCharacterLoadout(class UPlayerCharacterID* characterID, int32 loadoutNumber);
    void SetBoscoAllowed(bool aIsBoscoAllowed);
    bool SetAnonymousAnalytics(bool State);
    void SaveToDisk();
    bool SaveSlotToDisk(class UFSDSaveGame* SaveSlot, FString slotName, int32 userIdx);
    void RetirementSignature__DelegateSignature(TSubclassOf<class APlayerCharacter> CharacterClass, int32 RetirementCount);
    int32 RetireCharacter(class UPlayerCharacterID* characterID);
    void ResourceAmountChangedDelegate__DelegateSignature(class UResourceData* Resource, float currentAmount);
    void ResetTutorials();
    void ResetSonyTouchSettings();
    void ResetSonyMotionSettings();
    void ResetSonyDualSenseSettings();
    void ResetRejoinSessionId();
    void RejoinAttempted();
    void RefreshLoadoutFromCharacter(class UPlayerCharacterID* characterID);
    bool RecievedDiscordReward();
    FString PromotedClassesString();
    void PlayerProgressChangedSignature__DelegateSignature(int32 Rank, int32 Stars);
    void PersonalMatricsChangedSignature__DelegateSignature(bool AllowPersonalMetrics);
    void PerkPointsChangedSignature__DelegateSignature(int32 PerkPoints, int32 Change);
    void MarkRetirementRewardScreenSeen(class UPlayerCharacterID* characterID);
    void MarkFirstSchematicMessageSeen();
    void LevelUpCharacter(class UObject* WorldContext, class UPlayerCharacterID* characterID);
    void ItemUnlockedDelegate__DelegateSignature();
    void ItemUINotificationDelegate__DelegateSignature();
    bool IsObsolete();
    bool IsInMinersManual(FGuid ObjectID);
    bool IsFirstRejoinAttempt();
    bool HasSeenRetirementRewardScreen();
    bool HasCredits(int32 Amount);
    bool HasCharacterRetired(class UPlayerCharacterID* characterID);
    bool HasCharacterCompletedRetirementCampaign(class UPlayerCharacterID* characterID);
    bool HasBackupWithMoreProgress(class UFSDGameInstance* GameInstance);
    bool HasAnyCharacterRetired();
    int32 GetTotalGamesPlayed();
    int32 GetTotalCharacterXP();
    ESonyControllerMotionMapping GetSonyInputSettingMotionXMapping();
    ESonyControllerLightMode GetSonyInputSettingLightMode();
    float GetSonyInputSettingFloat(ESonyInputSettingsFloats Setting);
    bool GetSonyInputSettingBool(ESonyInputSettingsBools Setting);
    FDateTime GetSlotTimeStamp();
    FString GetSlotLoadedFrom();
    int32 GetSelectedLoadoutIndex(class UPlayerCharacterID* characterID);
    FString GetSaveSlotName(int32 userIdx);
    int32 GetResourceSellingPrice(class UResourceData* Resource, int32 Amount);
    int32 GetResourceBuyingPrice(class UResourceData* Resource, int32 Amount);
    float GetResourceAmount(const class UResourceData* Resource);
    int32 GetRequiredXPForLevel(int32 Level);
    FString GetRejoinSessionId();
    int32 GetPurchasableItemCount();
    int32 GetPlayerRetirementRank();
    int32 GetPlayerRank();
    int32 GetPerkPoints();
    FString GetName();
    int32 GetMaxSaveSlots();
    int32 GetMainSaves(class UFSDGameInstance* GameInstance, TArray<class UFSDSaveGame*>& outMainSaves);
    bool GetIsModded();
    int32 GetIndex();
    bool GetHasSentSteamInfo();
    bool GetHasClaimedSteamGroupLoot();
    EFSDFaction GetFaction();
    class UItemID* GetEquippedItemID(EItemCategory Category, class UPlayerCharacterID* PlayerId);
    TSubclassOf<class AActor> GetEquippedItem(EItemCategory Category, class UPlayerCharacterID* PlayerId);
    int32 GetCredits();
    int32 GetClassXP(class UPlayerCharacterID* characterID);
    int32 GetClassLevel(class UPlayerCharacterID* characterID);
    int32 GetCharacterRetirementCount(const FGuid& PlayerId);
    bool GetBoscoAllowed();
    int32 GetAvailableUserSlotIndex(class UFSDGameInstance* GameInstance);
    TArray<class UFSDSaveGame*> GetAllSavesFromDisk(class UFSDGameInstance* GameInstance);
    void ForgingXPDelegate__DelegateSignature(float XP);
    void ForceSetIsModded(bool modded);
    void FixNamingOfMainSave(class UFSDSaveGame* mainsave);
    bool DeleteFromDisk(class UFSDGameInstance* GameInstance, FString slotName, int32 userIdx);
    bool DeductPerkPoints(int32 Amount);
    void CreditsChangedSignature__DelegateSignature(int32 Credits);
    void CraftingMasteryChanged__DelegateSignature(FVanityMasteryResult Result);
    void CheckPromotionAchievementProgress(class UObject* WorldContext, bool IsRetroactive);
    void CharacterSignature__DelegateSignature(TSubclassOf<class APlayerCharacter> CharacterClass);
    void CharacterProgressChangedSignature__DelegateSignature(TSubclassOf<class APlayerCharacter> CharacterClass, int32 Level, float Progress);
    bool CanAfford(const TMap<UResourceData*, int32>& Resources);
    void AnonymousMatricsChangedSignature__DelegateSignature(bool AllowAnonymousMetrics);
    void AddPerkPoints(int32 Amount);
    void AddGamePlayed();
    int32 AddCredits(int32 Amount);
    int32 AddClassXP(class UObject* WorldContext, class UPlayerCharacterID* characterID, int32 XP);
};

class UFSDSendToURL : public UObject
{
};

class UFSDSessionHandler : public UObject
{
};

class UFSDSessionUpdater : public UObject
{
    FFSDSessionUpdaterOnNewFSDSessionID OnNewFSDSessionID;
    void NewFSDSessionID(FString sessionId);
    class UFSDSessionHandler* SessionHandler;
    class UFSDLobbyHandler* LobbyHandler;

};

class UFSDSkeletalMeshComponent : public USkeletalMeshComponent
{
};

class UFSDSplineLibrary : public UBlueprintFunctionLibrary
{

    bool SplineComponentSphereTrace(const class USplineComponent*& SplineComponent, float Radius, TEnumAsByte<ETraceTypeQuery> TraceType, float StepSize, TArray<class AActor*> IgnoreActors, FHitResult& OutHitResult, FVector Offset);
    void SetStartAndEndTangentsCurve2D(FInterpCurveVector2D& Curve, FVector2D StartTangent, FVector2D EndTangent);
    TArray<FTransform> GetSplineComponentTransforms(const class USplineComponent*& SplineComponent, float StepSize, TEnumAsByte<ESplineCoordinateSpace::Type> Space);
    void GetLocationAndTangentsAtSplinePoint(const class USplineComponent* Spline, int32 PointIndex, FVector& Location, FVector& ArriveTangent, FVector& LeaveTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    void EvalCurveScaled2D(const FInterpCurveVector2D& Curve, float Key, FVector2D ScaleBy, FVector2D& OutPosition, FVector2D& OutTangent);
    void EvalCurve2D(const FInterpCurveVector2D& Curve, float Key, FVector2D& OutPosition, FVector2D& OutTangent);
    void DrawCurveScaled2D(FPaintContext& Context, const FInterpCurveVector2D& Curve, FVector2D ScaleBy, FCurve2DAppearance Appearance, float Opacity);
    void DrawCurve2D(FPaintContext& Context, const FInterpCurveVector2D& Curve, FCurve2DAppearance Appearance, float Opacity);
    void DrawBezierScaled2D(FPaintContext& Context, FVector2D InStartPos, FVector2D InStartTangent, FVector2D InEndPos, FVector2D InEndTangent, FCurve2DAppearance InAppearance, FVector2D ScaleBy, float Opacity, bool InClampTangents);
    void DrawBezier2D(FPaintContext& Context, FVector2D InStartPos, FVector2D InStartTangent, FVector2D InEndPos, FVector2D InEndTangent, FCurve2DAppearance InAppearance, float Opacity, bool InClampTangents);
    FInterpCurveVector2D CreateCurveWithTangents2D(const TArray<FVector2D>& Positions, FVector2D StartTangent, FVector2D EndTangent, TEnumAsByte<EInterpCurveMode> Mode);
    FInterpCurveVector2D CreateCurve2D(const TArray<FVector2D>& Positions, TEnumAsByte<EInterpCurveMode> Mode);
    void ConvertSplineDistanceToInputKey(class USplineComponent*& SplineComponent, class USplineComponent* OptionalTargetSpline);
    bool CarveAroundSplinePoints(class UObject* WorldContext, const FVector& InStartLocation, const FVector& InStartTangent, const FVector& InEndLocation, const FVector& InEndTangent, float InRadius, class UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious);
    bool CarveAroundSplineMesh(class USplineMeshComponent* InMesh, float InRadius, class UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious);
    float ApproximateSplineDistanceAtWorldLocation(const class USplineComponent* Spline, const FVector& WorldLocation);
};

class UFSDSteamUserStats : public UActorComponent
{
};

class UFSDSteamUtils : public UBlueprintFunctionLibrary
{

    bool PlayerIsFollowingUsOnSteam();
    void OpenURLInSteamBrowser(FString URL);
    bool IsTextFilteringInitialized();
    bool IsSteamLoaded();
    bool IsDev(class APlayerState* PlayerState);
    bool InitializeFilterText();
    bool HasSupporterUpgrade();
    bool HasDeluxeEdition();
    bool HasContentCreatorEdition();
    FString GetSteamRegion();
    FString GetSteamLanguage();
    FString GetSteamBranchString();
    ESteamBranch GetSteamBranch();
    FString GetPlayerSteamName();
    FString GetPlayerSteamID();
    FString FilterProfanityText(FString inputMessage);
};

class UFSDTagSettings : public UDataAsset
{
    FGameplayTagQuery IsFriendlyQuery;
    FGameplayTagQuery IsNeutralQuery;
    FGameplayTagQuery IsHostileQuery;
    FFSDTagsRoot Root;

};

class UFSDTutorialSettings : public UDataAsset
{
    int32 RequiredCPTreasures;
    int32 RequiredCPMachineEvents;
    int32 RequiredCPVeterans;
    TArray<FNewPlayerMutator> FirstMissionsMutators;

};

class UFSDUserWidget : public UUserWidget
{
    FFSDUserWidgetOnVisibilityChangedFSD OnVisibilityChangedFSD;
    void VisibilityChangedDelegate(class UUserWidget* Widget, bool IsVisible);
    class APlayerCharacter* Character;

    void SetOpacity(float alpha);
    void ScaleByBaseResolution();
    void Refresh();
    void ReceiveNewVisibility(ESlateVisibility NewVisibility);
    void OnCloseMenuReleased(bool& Handled);
    void OnCloseMenuPressed(bool& Handled);
    bool HasCharacter();
    float GetOpacity();
    class AFSDPlayerState* GetFSDPlayerState();
    class AItem* GetEquippedItem();
    float GetBaseResolutionScale();
    void BP_OnRefresh();
};

class UFSDWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void WidgetDelegate__DelegateSignature(class UUserWidget* Widget);
    void WidgetCreatedOrReusedDelegate__DelegateSignature(bool WasCreated, class UUserWidget* Widget, int32 ActiveIndex);
    void ToggleAnimationLooping(class UObject* WorldContext, class UWidgetAnimation* InAnimation, FWidgetAnimationSettings InSettings, bool InLoop, bool& OutPlayingChanged, bool& OutIsPlaying);
    bool TextSmallerThan(const FText& Text1, const FText& Text2);
    bool TextGreaterThan(const FText& Text1, const FText& Text2);
    TArray<class UWidget*> SortWidgetArray(const TArray<class UWidget*>& InWidgets, const FSortWidgetArrayInCompareFunction& InCompareFunction);
    void SimpleBox(FPaintContext& Context, FVector2D Position, FVector2D Size, FLinearColor Tint);
    FTimerHandle SetTimerForNextTick(class UObject* WorldContext, const FSetTimerForNextTickTimerDelegate& TimerDelegate);
    void SetSizeBoxSettings(class USizeBox*& InSizeBox, const FSizeBoxSettings& InSettings);
    void SetProgressBarType(class UProgressBar* InProgressBar, TEnumAsByte<EProgressBarFillType::Type> InType);
    void SetMousePosition(class UObject* WorldContextObject, int32 X, int32 Y);
    void SetChildrenVisibility(class UPanelWidget* Panel, ESlateVisibility Visibility, int32 StartIndex, TSubclassOf<class UUserWidget> OptionalClassFilter);
    void ScrubAnimation(class UObject* WorldContext, class UWidgetAnimation* InAnimation, float Progress01);
    void ScaleTextBlockToHeight(class UTextBlock* TextBlock, float TargetHeight, bool SetMinimimumWidth);
    void ScaleImageToHeight(class UImage* Image, float TargetHeight);
    void PrintStrings(class UObject* WorldContextObject, const TArray<FString>& InStrings, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    FString MidIgnoringWhiteSpace(FString Source, int32 Index, int32 Count);
    FVector2D MeasureTextSize(const FText& Text, const FSlateFontInfo& Font);
    FVector2D MeasureTextBlockSize(const class UTextBlock* TextBlock);
    void Line(FPaintContext& Context, FVector2D Pos1, FVector2D Pos2, FLinearColor Tint);
    FLinearColor LerpColors(const TArray<FLinearColor>& Colors, bool Interpolate, float Progress01);
    int32 LengthIgnoringWhitespace(FString Source);
    bool IsWindowsPlatform(class UObject* WorldContextObject);
    bool IsWhiteSpaceAt(FString Source, int32 Index);
    bool IsWhiteSpace(FString Source);
    bool IsHUDVisible(class UObject* WorldContextObject);
    FString IntToRomanNumeral(int32 Value);
    bool HasAnyVisibleChildren(class UPanelWidget* Panel, int32 StartIndex, TSubclassOf<class UUserWidget> OptionalClassFilter);
    FString GetShortTimeString(int32 TotalSeconds, bool BlinkDelimiter);
    class UWindowWidget* GetParentWindowWidget(class UUserWidget* InWidget);
    class UUserWidget* GetParentUserWidget(class UUserWidget* InWidget);
    class AFSDPlayerState* GetOwningFSDPlayerState(class UWidget* Target);
    FText GetKeyName(const FKey& Key);
    float GetFontMaxHeight(const FSlateFontInfo& Font);
    float GetFontBaseline(const FSlateFontInfo& Font);
    class UWidget* GetFocusedWidget(class UObject* WorldContextObject, class APlayerController* Controller);
    class UUserWidget* GetFocusableParentUserWidget(class UUserWidget* InWidget);
    FVector2D GetDrawSize(FPaintContext& InContext);
    class UFSDCheatManager* GetCheatManager(class UObject* WorldContextObject);
    class UWidget* FindChildWidget(class UPanelWidget*& ParentWidget, TSubclassOf<class UUserWidget> WidgetClass, bool SearchChildren);
    class UVerticalBox* CreateVerticalBox(class UObject* WorldContext);
    class UTextBlock* CreateTextBlock(class UObject* WorldContext, FText Text, FSlateFontInfo Font, TEnumAsByte<ETextJustify::Type> Justification, FLinearColor Color, bool WrapText);
    class USpacer* CreateSpacer(class UObject* WorldContext, FVector2D Size);
    TArray<class UUserWidget*> CreateOrReuseChildrenWithCallbackEx(class UPanelWidget* Panel, int32 Count, TSubclassOf<class UUserWidget> WidgetClass, const FCreateOrReuseChildrenWithCallbackExOnCreatedOrReused& OnCreatedOrReused, const FCreateOrReuseChildrenWithCallbackExOnCollapsed& OnCollapsed);
    TArray<class UUserWidget*> CreateOrReuseChildrenWithCallback(class UPanelWidget* Panel, int32 Count, TSubclassOf<class UUserWidget> WidgetClass, const FCreateOrReuseChildrenWithCallbackOnCreatedOrReused& OnCreatedOrReused);
    TArray<class UUserWidget*> CreateOrReuseChildren(class UPanelWidget* Panel, int32 Count, TSubclassOf<class UUserWidget> WidgetClass);
    class UImage* CreateImageSized(class UObject* WorldContext, class UTexture2D* Texture, FLinearColor Tint, FVector2D Size);
    class UImage* CreateImageFromBrush(class UObject* WorldContext, FSlateBrush InBrush, FLinearColor InColorAndOpacity);
    class UImage* CreateImage(class UObject* WorldContext, class UTexture2D* Texture, FLinearColor Tint, bool AutoSize);
    class UHorizontalBox* CreateHorizontalBox(class UObject* WorldContext);
    bool CompareWidgetsDelegate__DelegateSignature(const class UWidget* InFirstWidget, const class UWidget* InSecondWidget);
    FText ClampTextLength(const FText& Text, int32 MaxLength, const FText& CutOffIndicator);
    void Box(FPaintContext& Context, FVector2D Position, FVector2D Size, const FSlateBrush& Brush, FLinearColor Tint);
    bool AreWidgetsIntersecting(const class UWidget* InWidget1, const class UWidget* InWidget2);
    class UWidget* AddWidgetToRow(class UVerticalBox* VerticalBox, class UWidget* Widget, int32 MaxWidgetsPerRow, float WidgetSpacing, float RowSpacing, class UHorizontalBoxSlot*& OutSlot, class UHorizontalBox*& OutRow);
    class UWidget* AddChildToVerticalBoxEx(class UVerticalBox* VerticalBox, class UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, float Size, FMargin Padding, class UVerticalBoxSlot*& OutSlot, class UVerticalBox*& OutVerticalBox);
    class UWidget* AddChildToUniformGridEx(class UUniformGridPanel* GridPanel, class UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, int32 Column, int32 Row, class UUniformGridSlot*& OutSlot, class UUniformGridPanel*& OutGridPanel);
    class UWidget* AddChildToOverlayEx(class UOverlay* OverlayPanel, class UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, FMargin Padding, class UOverlaySlot*& OutSlot, class UOverlay*& OutOverlayPanel);
    class UWidget* AddChildToHorizontalBoxEx(class UHorizontalBox* HorizontalBox, class UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, float Size, FMargin Padding, class UHorizontalBoxSlot*& OutSlot, class UHorizontalBox*& OutHorizontalBox);
    class UWidget* AddChildToCanvasEx(class UCanvasPanel* CanvasPanel, class UWidget* Widget, FAnchors Anchors, FMargin Offsets, bool AutoSize, int32 Z_Order, class UCanvasPanelSlot*& OutSlot, class UCanvasPanel*& OutCanvasPanel);
};

class UFSDWidgetEffectsComponent : public UActorComponent
{
    TArray<FWidgetPing> WidgetPings;
    TArray<FWidgetFade> WidgetFades;
    TArray<FWidgetTextCounter> WidgetTextCounters;
    TArray<FCustomCounter> CustomCounters;
    TArray<FWidgetMover> WidgetMovers;

    void StartTextCounter(class UObject* WorldContext, class UTextBlock*& Widget, float Start, float End, float Duration, int32 MaxDigits, float StartDelay);
    void StartCounter(class UObject* WorldContext, class UObject* Owner, float Start, float End, float Duration, const FStartCounterOnCount& OnCount, float StartDelay);
    void PingWidget(class UObject* WorldContext, class UWidget* Widget, float Amount, float Duration, EPingType PingType, float StartDelay);
    void MoveWidget(class UObject* WorldContext, class UUserWidget* Widget, FVector2D Start, FVector2D End, float Duration, EMoveType MoveType, float StartDelay);
    void MoveOutWidget(class UObject* WorldContext, class UUserWidget* Widget, FVector2D MoveToOffset, float Duration, float StartDelay);
    void MoveInWidget(class UObject* WorldContext, class UUserWidget* Widget, FVector2D MoveFromOffset, float Duration, float StartDelay);
    void FadeWidget(class UObject* WorldContext, class UUserWidget* Widget, float StartFade, float EndFade, float Duration, float StartDelay);
    void FadeOutWidget(class UObject* WorldContext, class UUserWidget* Widget, float Duration, float StartDelay);
    void FadeInWidget(class UObject* WorldContext, class UUserWidget* Widget, float Duration, float StartDelay);
};

class UFSDXboxUtils : public UBlueprintFunctionLibrary
{

    void ShowStoreUIForStoreItem(class UObject* WorldContextObject, FString storeItemName);
    void ShowStoreUI(class UObject* WorldContextObject);
    bool ShowCheatTerminal();
    bool IsDCLCheckComplete(class UObject* WorldContextObject);
};

class UFacilityHackingPodAnimInstance : public UAnimInstance
{
    class AActor* SaluteTarget;
    FRotator LookingDirection;
    FRotator TargetRotation;
    bool IsHacking;
    EHackingPodState PodState;
    float RadarDishAngle;

    void SetSaluter(class AActor* salutingTarget);
    void ResetSaluteTarget();
};

class UFacilityObjective : public UObjective
{
    TSoftClassPtr<ARessuplyPod> generatorClass;
    TSoftClassPtr<AActor> GeneratorBeaconClass;
    int32 GeneratorCount;
    int32 ObjectivesStage;
    TArray<FSubObjective> SubObjectives;
    FFacilityObjectiveOnFirstEncounterDroneSpawned_Delegate OnFirstEncounterDroneSpawned_Delegate;
    void EnemySpawnedDelegate(class APawn* enemy);
    FFacilityObjectiveOnSecondEncounterDroneSpawned_Delegate OnSecondEncounterDroneSpawned_Delegate;
    void EnemySpawnedDelegate(class APawn* enemy);
    TArray<class APawn*> spawnedEnemies;
    TArray<class UEnemyDescriptor*> TurretDescriptors;
    TArray<class UEnemyDescriptor*> GeneratorRoomTurretDescriptors;
    TArray<class UEnemyDescriptor*> EncounterEnemies;
    float EncounterDifficulty;
    FRandInterval Diversity;
    FIRandRange TurretEncountersRange;
    int32 MinimumTurretEncounters;
    FIRandRange TunnelTurretsRange;
    TArray<class AActor*> SmallGenerators;
    class ATetherStation* mainFacility;
    TArray<int32> ShieldGeneratorRooms;
    int32 MainFacilityRoom;
    bool HasRemovedMainShield;
    TArray<class AActor*> ShieldGenerators;
    class UResourceData* GoalResource;
    float AmountRequired;
    float AmountCollected;
    int32 GeneratorsActivated;

    void SpawnFacilityEncounters(class AProceduralSetup* Setup, class UEncounterManager* Encounters, class UDebrisPositioning* Positioning);
    TArray<FTransform> SpawnEndBattleTurrets(int32 amountOfTurrets, class AProceduralSetup* Setup, class UDebrisPositioning* DebrisPositioning, TSubclassOf<class AActor> terrainPlacement, const TArray<class AActor*>& existingTurrets, bool& success);
    void SetMainFacility(class ATetherStation* mainFacility);
    void SetGeneratorRooms(TArray<int32>& generatorRoomsIndicies);
    void SecondGeneratorEncounterSpawn(class APawn* spawned);
    void Receive_AddEnemies(class AProceduralSetup* Setup);
    void ProgressCurrentObjective();
    class AActor* PlaceObjectInRoom(class AProceduralSetup* Setup, const FRoomNode& RoomNode, class UDebrisPositioning* Positioning, TSubclassOf<class AActor> placementActor, FRandomStream RandomStream, const bool checkImportantLocations);
    void OnResourceChanged(class UCappedResource* Resource, float Amount);
    void OnRep_ObjectivesStage();
    void OnRep_GeneratorsActivated();
    void OnRep_AmountCollected();
    void OnCoreDeposited();
    bool IsSubObjectiveComplete(int32 objectiveIndex);
    void InitGeneratorCount(int32 generators);
    FTransform GetTurretGoal(class AProceduralSetup* Setup, const FVector& Origin, float idealRange, class UDebrisPositioning* DebrisPositioning, TSubclassOf<class AActor> terrainPlacement, bool& success);
    TArray<class AActor*> GetShieldGenerators();
    int32 GetShieldGeneratorCount();
    void GetObjectTransformInRoom(FTransform& Transform, class AProceduralSetup* Setup, const FRoomNode& RoomNode, class UDebrisPositioning* Positioning, TSubclassOf<class AActor> placementActor, FRandomStream RandomStream, const bool checkImportantLocations);
    int32 GetFacilityRoomIndex();
    FVector GetFacilityLocation();
    FSubObjective GetCurrentObjective();
    void GeneratorActivated();
    void FirstGeneratorEncounterSpawn(class APawn* spawned);
    void DropOverCharger(class AProceduralSetup* Setup, int32 roomIndex, const FVector& facilityLocation, float idealRange, float idealZDistance, class UDebrisPositioning* DebrisPositioning, TSubclassOf<class ARessuplyPod> generatorClass, bool AddImportantLocation);
    void ChangeObjective();
    void AddShieldGenerator(class AActor* charger, int32 roomIndex);
};

class UFacilityTentacleHeadAnimInstance : public UEnemyAnimInstance
{
    bool Searching;
    bool Melee;
    bool RangedAttack;

};

class UFacilityTetherDispenserAnimInstnace : public UItemDispenserAnimInstance
{
    EHackingPodState PodState;
    bool ShouldShowDispenser;
    bool ShouldCloseFromDispenser;
    bool ShouldShowButton;
    bool ShouldHideButton;

};

class UFacilityTurretAnimInstance : public UEnemyAnimInstance
{
    FRotator AimRotation;
    bool IsEngaged;

};

class UFadeScreenSubSystem : public UGameInstanceSubsystem
{
    FFadeScreenSubSystemOnFadeInComplete OnFadeInComplete;
    void FadingDone();
    FFadeData Fading;

    bool IsScreenFadingToBlack(class UObject* WorldContext);
    bool IsScreenFadingFromBlack(class UObject* WorldContext);
    bool IsScreenFading(class UObject* WorldContext);
    float GetCurrentFadeAmount();
    void FadeScreenToBlack(class UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig, class UTexture* LoadingImage);
    void FadeScreenFromBlack(class UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig);
    void BlackoutScreen(class UObject* WorldContext, bool FadeWorldOnly);
};

class UFadeVisibilitySubSystem : public UWorldSubsystem
{

    void ScalePrimitive(const class UPrimitiveComponent*& Component, FVector StartScale, FVector EndScale, float Duration);
    void ScaleOutPrimitive(const class UPrimitiveComponent*& Component, float Duration);
    void ScaleInPrimitive(const class UPrimitiveComponent*& Component, float Duration);
    void FadeOutMaterialByName(const class UMeshComponent*& Component, FName Name, FName ParameterName, float Duration);
    void FadeOutMaterialByIndex(const class UMeshComponent*& Component, int32 MaterialIndex, FName ParameterName, float Duration);
    void FadeOutLight(const class ULightComponent*& Light, float Duration);
    void FadeLightByCurve(const class ULightComponent*& Light, FRuntimeFloatCurve& Curve);
    void FadeInMaterialByName(const class UMeshComponent*& Component, FName Name, FName ParameterName, float Duration);
    void FadeInMaterialByIndex(const class UMeshComponent*& Component, int32 MaterialIndex, FName ParameterName, float Duration);
    void FadeInLight(const class ULightComponent*& Light, float Duration);
};

class UFakeFallComponent : public UActorComponent
{

    void StartFakeFall();
};

class UFakeMoverSettings : public UDataAsset
{
    DeepPathFinderSize PathfinderColiSize;
    bool StickToSurface;
    bool AlignRotationToSurface;
    float AirFriction;
    float SurfaceFriction;
    float Gravity;
    float AirGravity;
    FFakeMoverPropulsion Propulsion;
    FFakeMoverTarget NearestPlayerInfluence;
    FFakeMoverTarget TargetInfluence;

};

class UFakePhysGrabberComponent : public UGrabberComponent
{
    TArray<FGrabAvoidClassEntry> ActorTypesToAvoid;
    TArray<FAvoidActorEntry> ActorsToAvoid;

};

class UFallingStateComponent : public UCharacterStateComponent
{
    float FallDamageStartVelocity;
    float FallDamageModifier;
    float AutoClimbMinDelay;
    float AutoClimbLookForwardDistance;
    float MaxClimbHeight;
    float MinClimbHeight;
    float CapsuleCheckZOffset;
    float MinInputDotProduct;
    float JumpZVelocity;
    bool DebugAutoClimb;
    class UDialogDataAsset* FallingShout;
    float ShoutAfterDistance;
    class UUseAnimationSetting* ClimbUseSettings;
    float HoverBootAirFriction;
    float HoverBootAirControl;
    float HoverBootGravityScale;
    class UDialogDataAsset* ShoutHoverBootsBegin;
    float HoverBootActivateDuration;
    bool bHoverBootsActive;
    float HoverBootMaxDuration;
    FVector2D JumpBootsVelocityWindow;
    float JumpBootsZVelocity;
    bool JumpBootsActive;

    void ShowJumpBootsActivation();
    void Server_TakeFallDamage(float Amount);
    void Server_SetJumpPressed(bool Pressed);
    void Server_SetHoverBootsPressed(bool IsPressed);
    void Server_SetFallVelocity(float Velocity);
    void Server_ClimbLedge(bool shouldPlayAnimation);
    void Server_ActivateJumpBoots();
    void ReceiveHoverBootsTick(float DeltaSeconds);
    void ReceiveHoverBootsActiveChanged(bool IsActive);
    void OnRep_HoverBootsActive();
    void JumpReleased();
    void JumpPressed();
    void HoverBootsReleased();
    void HoverBootsPressed();
    void All_ShowJumpBootsActivation();
    void All_ShowFallImpact(class UFSDPhysicalMaterial* PhysMat, const FVector_NetQuantize& Location);
    void All_ShowClimbLedge();
};

class UFalseDamageCondition : public UDamageCondition
{
};

class UFearAoEBonus : public UDamageBonusBase
{
    float FearFactor;
    float range;

};

class UFearAoEBonusUpgrade : public UItemUpgrade
{
    float FearFactor;
    float range;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player);
};

class UFindFriendSessionsBlueprintCallProxy : public UOnlineBlueprintCallProxyBase
{
    FFindFriendSessionsBlueprintCallProxyOnSuccess OnSuccess;
    void BlueprintFindFriendSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FFindFriendSessionsBlueprintCallProxyOnFailure OnFailure;
    void BlueprintFindFriendSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    class UObject* WorldContextObject;

    class UFindFriendSessionsBlueprintCallProxy* FindFriendSessions(class UObject* WorldContextObject, FString FriendId);
};

class UFireWeaponSoundUpgradeElement : public UItemUpgradeElement
{
    class USoundCue* FireSound;

};

class UFirstPersonNiagaraComponent : public UNiagaraComponent
{

    class UNiagaraComponent* SpawnFirstPersonEmitterAttached(class UNiagaraSystem* inNiagaraSystem, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool inAutoDestroy);
};

class UFirstPersonParticleSystemComponent : public UParticleSystemComponent
{

    class UParticleSystemComponent* SpawnFirstPersonEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy);
};

class UFirstPersonPointLightComponent : public UPointLightComponent
{
};

class UFirstPersonSkeletalMeshComponent : public USkeletalMeshComponent
{

    void SetFirstPersonFOVEnabled(bool bEnabled);
    bool GetSetFirstPersonFOVEnabled();
    FVector CalcFirstPersonFOVPositionCorrection(class APlayerController* PlayerController, const FVector& origPos);
};

class UFirstPersonStaticMeshComponent : public UStaticMeshComponent
{
    bool EnabledFPFOV;

};

class UFirstPersonWidgetComponent : public UWidgetComponent
{
};

class UFlameThrowerUpgrade : public UStandardItemUpgrade
{
    EFlameThrowerUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EFlameThrowerUpgradeType upgradeType);
};

class UFlareController : public UWorldSubsystem
{
    FFlareControllerOnShadowQualityChanged OnShadowQualityChanged;
    void ShadowQualityChanged();
    TArray<FFlareMeta> FlaresMeta;

    void UnregisterFlareGunProjectile(class AFlareGunProjectile* flareprj);
    void UnregisterFlare(class AFlare* Flare);
    void RegisterFlareGunProjectile(class AFlareGunProjectile* flareprj);
    void RegisterFlare(class AFlare* Flare);
    class AActor* FindFlareNear(class UObject* WorldContextObject, FVector Pos, bool allowMoving, float maxLightRadiusFraction);
};

class UFlareGunUpgrade : public UStandardItemUpgrade
{
    EFlaregunUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, EFlaregunUpgrades upgradeType);
};

class UFlareUpgrade : public UStandardItemUpgrade
{
    EFlareUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> flareClass, EFlareUpgradeType upgradeType);
};

class UFlaregunProjectileUpgrade : public UStandardItemUpgrade
{
    EFlaregunProjectileUpgrades upgradeType;
    TSubclassOf<class AActor> ProjectileClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, TSubclassOf<class AActor> upgradedItem, class AFSDPlayerState* Player, EFlaregunProjectileUpgrades upgradeType);
};

class UFlatDamageBonus : public UDamageBonusBase
{
    float Damage;
    class UDamageClass* DamageClass;

};

class UFlatDamageUpgrade : public UItemUpgrade
{
    float Damage;
    class UDamageClass* DamageClass;
    TSubclassOf<class AActor> RequiredClass;
    bool MergeWithOtherFlatDamageUpgrades;
    class UDamageCondition* Condition;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass);
};

class UFloatPerkActivation : public UDataAsset
{

    void Receive_ActivatePerk(class APlayerCharacter* Character, float Value);
};

class UFloatPerkAsset : public UPerkAsset
{
    TArray<FFloatPerkRank> Ranks;
    TArray<FFloatPerkEffect> Effects;

    float GetPerkValue(class UObject* WorldContext);
    float GetLastTierValue();
    float GetFloatPerkValue(class UObject* WorldContext, class UFloatPerkAsset* Perk, float UnclaimedValue);
};

class UFloatPerkComponent : public UActorComponent
{
    float FloatValue;
    class APlayerCharacter* PlayerCharacter;

    void Receive_OnInitialized();
};

class UFloodFillBox : public URoomFeature
{
    class UFloodFillSettings* Noise;
    FVector Position;
    FVector Extends;
    FRotator Rotation;
    bool IsCarver;
    float NoiseRange;

};

class UFloodFillLine : public URoomFeature
{
    class UFloodFillSettings* WallNoiseOverride;
    class UFloodFillSettings* CeilingNoiseOverride;
    class UFloodFillSettings* FloorNoiseOverride;
    bool UseDetailNoise;
    TArray<FRoomLinePoint> Points;

};

class UFloodFillPillar : public URoomFeature
{
    class UFloodFillSettings* NoiseOverride;
    TArray<FRandLinePoint> Points;
    FRandRange RangeScale;
    FRandRange NoiseRangeScale;
    FRandRange EndcapScale;

};

class UFloodFillProceduralPillar : public URoomFeature
{
    TArray<FVector> Points;
    class UPillarSettings* PillarSettings;

};

class UFloodFillSettings : public UDataAsset
{
    FVector NoiseSize;
    float FreqMultiplier;
    float AmplitudeMultiplier;
    float MinValue;
    float MaxValue;
    bool Turbulence;
    bool Invert;
    int32 Octaves;
    TArray<FLayeredNoise> NoiseLayers;

};

class UFlyingBugAnimInstance : public USimpleMovingEnemyAnimInstance
{
    bool IsInAttackMode;
    bool IsStaggered;
    EFlyingBugDeathAnimationCategory DeathAnimationCategory;

    void SetDeathAnimation(EFlyingBugDeathAnimationCategory deathAnim);
    bool IsNotStaggered();
    bool IsNotInAttackMode();
};

class UFlyingFormationData : public UFormationData
{
    int32 FormationSize;
    float FormationSpread;
    float RandomSpread;

};

class UFlyingLifterAnimInstance : public USimpleMovingEnemyAnimInstance
{
    bool HasGrabbedPlayer;
    bool ToChaseLock;
    bool ChaseToWanderLock;
    bool ToCarryLock;
    EGrabberState GrabberState;

};

class UFlyingStateComponent : public UCharacterStateComponent
{
};

class UForceStationaryEncounterMutator : public UMutator
{
    class UEnemyGroupDescriptor* EnemyGroup;
    FIRandRange GroupSize;

};

class UForginSettings : public UDataAsset
{
    int32 XPRequiredPerLevel;
    TArray<ESchematicType> MasteryRewardCycle;

};

class UForgingFunctionLibrary : public UBlueprintFunctionLibrary
{

    class USchematic* PickForgingMasteryDefaultReward(class UObject* WorldContextObject, ESchematicType InType);
    FForgingResult GiveForgingXP(class UObject* WorldContextObject);
    TArray<class USchematic*> GetOwnedSchematics(class UObject* WorldContextObject);
    void GetForgingPendingMasteryRewardNewest(class UObject* WorldContextObject, bool& OutSuccess, FForgingPendingReward& OutReward);
    ESchematicType GetForgingMasteryRewardType(class UObject* WorldContextObject, int32 Level, bool ReturnDefaultIfUnavailable);
    ESchematicType GetForgingMasteryRewardDefaultType(ESchematicType InType);
    float GetForgingLevelProgress(class UObject* WorldContextObject);
    int32 GetForgingLevel(class UObject* WorldContextObject);
    bool GetForgingHasPendingMasteryRewards(class UObject* WorldContextObject);
    TArray<class USchematic*> GetForgedSchematics(class UObject* WorldContextObject);
    void ClaimForgingPendingMasteryReward(class UObject* WorldContextObject, int32 Level, class USchematic* Reward);
};

class UFormationData : public UDataAsset
{
    TArray<FFormationDataItem> FormationItems;
    FGameplayTagQuery LeaderQuery;
    FGameplayTagQuery MemberQuery;

};

class UFormationsManagerComponent : public UActorComponent
{
    class UEnemySpawnManager* SpawnManager;
    TArray<class UFormationData*> FormationData;

};

class UFragileDebrisCleaner : public USceneComponent
{
    float CleanRadius;

};

class UFriendlyHealthComponent : public UHealthComponent
{
    float MaxHealth;
    float FriendlyFireModifier;
    float NeutralDamageModifier;
    float BigHitDamageModifier;
    float BigHitDamageReductionThreshold;
    class UParticleSystem* GenericImpactParticles;

    float GetMaxHealth();
};

class UFriendlyParasiteAnimInstance : public UEnemyAnimInstance
{
    bool InFoldoutRange;
    bool InSpinRange;

};

class UFrontendBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void OpenURLInExternalBrowser(FString URL);
    bool IsShippingBuild();
    void GetStringFromClipboard(FString& fromClipboard);
    bool FSDTargetPlatformIsXSX();
    EFSDTargetPlatform FSDTargetPlatform();
    void CopyStringToClipboard(FString toClipboard);
};

class UFrozenPawnImpactComponent : public UActorComponent
{
    FFrozenPawnImpactComponentOnStartFallingEvent OnStartFallingEvent;
    void Delegate();
    FFrozenPawnImpactComponentOnFreezeImpactEvent OnFreezeImpactEvent;
    void Delegate();
    class UPhysicalMaterial* FrozenMaterial;
    class UPhysicsAsset* FrozenAsset;
    class USoundCue* FrozenDeathSound;
    class UParticleSystem* FrozenDeathparticles;

    void TriggerFrozenRagdoll();
    void OnFrozen(bool frozen);
    void OnFreezeImpact(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

class UFrozenStateComponent : public UCharacterBreakOutState
{
    class USoundBase* AudioFreeFromIce;
    class UFSDPhysicalMaterial* IcePhysicalMaterial;
    class UFSDPhysicalMaterial* DwarfFleshMaterial;
    float SlowAnimationSpeed;
    FRandRange DeFrostAmount;

    void Server_ThawPlayer(float Percent);
    void ReceiveOnDefrosting();
};

class UFuelCannisterAttachedAnimInstance : public UAnimInstance
{
    bool CanBeTaken;

    void SetCanBeTaken(bool canBeTakenValue);
};

class UFuelCannisterItemAnimInstance : public UAnimInstance
{
    bool IsOnGround;
    bool IsFull;
    bool IsShooting;

};

class UFuelLineConnectPoint : public UTrackBuilderConnectPoint
{
};

class UFuelLineStartUsable : public UTrackBuilderUsable
{
};

class UGDKRateLimiter : public UGameInstanceSubsystem
{
    class UFSDRateLimiter* Handler;

};

class UGameActivityAssignmentType : public UGameActivityType
{
};

class UGameActivityMissionType : public UGameActivityType
{
    TSoftObjectPtr<UMissionTemplate> ActivityMission;

};

class UGameActivitySettings : public UDataAsset
{
    TArray<TSoftObjectPtr<UGameActivityType>> GameActivites;

};

class UGameActivityType : public UDataAsset
{
    FString ActivityId;
    EActivityType ActivityType;
    TArray<FGameActivitySubTask> SubTasks;

};

class UGameAnimationSettings : public UDataAsset
{
};

class UGameAnimationsSettings : public UDeveloperSettings
{
    FSoftObjectPath FootstepTestingSound;
    FSoftObjectPath FootstepTestingParticles;

};

class UGameDLC : public UDLCBase
{
    bool bFakeUnlockedStateInEditor;
    bool bEditorUnlockedState;
    int32 SteamID;
    FString SteamName;
    FString OddishID;
    FString XBoxDLCName;
    TMap<class FString, class FString> SonyAdditionalContentLabelMap;
    FString UWPStoreID;
    bool ShowOnDLCScreen;
    TSoftObjectPtr<UTexture2D> banner;
    TSoftObjectPtr<UTexture2D> Banner_16_9;
    TSoftObjectPtr<UTexture2D> InfoScreenOverlay;
    TSoftClassPtr<UWindowWidget> AnnouncementWidget;
    FGuid SavegameID;
    TMap<UResourceData*, int32> Resources;
    int32 PerformancePoints;
    TSoftObjectPtr<UFileMediaSource> Movie;

    bool ShouldBeAnnounced(class UObject* WorldContext);
    bool OpenStorePage(class UObject* WorldContext);
    void MarkAnnounced(class UObject* WorldContext);
    FString GetSonyAdditionalContentId();
    class UTexture2D* GetInfoScreenOverlay();
    class UTexture2D* GetBanner_16_9();
    class UTexture2D* GetBanner();
};

class UGameDLCSettings : public UDataAsset
{
    TSet<UGameDLC*> StoreDLCs;

    TArray<class UGameDLC*> GetStoreDLCs(class UObject* WorldContext);
    TArray<class UGameDLC*> GetAnnouncableDLCs(class UObject* WorldContext);
};

class UGameData : public UObject
{
    class UKPISettings* KPI_Settings;
    FGVisibilityGroups VisibilityGroups;
    class UPromotionRewardsSettings* PromotionRewardsSettings;
    class UWeaponMaintenanceSettings* WeaponMaintenanceSettings;
    class UFSDEventCollection* FsdEventsSettings;
    class UGameActivitySettings* GameActivitySettings;
    class UDanceSettings* DanceSettings;
    class UGameAnimationSettings* AnimationSettings;
    class UEnemySettings* EnemySettings;
    class UDamageSettings* DamageSettings;
    class UPlanetZoneSetup* ZoneSettings;
    class UTreasureSettings* TreasureSettings;
    class UDrinkSettings* DrinkSettings;
    class UUpgradeSettings* UpgradeSettings;
    class USpawnSettings* SpawnSettings;
    class UVanitySettings* VanitySettings;
    class UKeyBindingSettings* KeyBindingSettings;
    class UDeepDiveSettings* DeepDiveSettings;
    class UBEESettings* BEESettings;
    class UEncounterSettings* EncounterSettings;
    class UForginSettings* ForgingSettings;
    class USchematicSettings* SchematicSettings;
    class UItemSkinSettings* SkinSettings;
    class USpecialEventSettings* SpecialEventSettings;
    class UProceduralSettings* ProceduralSettings;
    class UPickaxeSettings* PickaxeSettings;
    class UFSDTagSettings* TagSettings;
    class UItemSettings* ItemSettings;
    class UDynamicIconSettings* DynamicIconSettings;
    class UShowroomSettings* ShowroomSettings;
    class UVictoryPoseSettings* VictoryPoseSettings;
    class UFSDTutorialSettings* TutorialSettings;
    class ULegacySettings* LegacySettings;
    class UEffectSettings* EffectSettings;
    class UAfflictionSettings* AfflictionSettings;
    class UCommunityGoalSettings* CommunityGoalSettings;
    class UDailyDealSettings* DailyDealSettings;
    class UTerrainMaterialSettings* TerrainMaterialSettings;
    class USaveGameSettings* SaveGameSettings;
    FGDItemCategoryIDs ItemCategoryIDs;
    TArray<class UTexture2D*> LoadoutIconList;
    class UMinersManual* MinersManual;
    FGDDamageClasses DamageClasses;
    FGDStats Stats;
    FGDResources Resources;
    FGDTerrainTypes TerrainTypes;
    FGDGameStatsTracking GameStatsTracking;
    FGDAudio audio;
    FGDDifficulty Difficulty;
    class UStatusEffectSettings* StatusEffects;
    FGDCharacterRetirement Retirement;
    FGDPlayerAndCharacterProgression PlayerAndCharacterProgression;
    class UCharacterSettings* CharacterSettings;
    class UAchievementList* Achievements;
    class UGlobalMissionSetup* MissionSetup;
    class USeasonSettings* SeasonSettings;
    class UPlayerCharacterID* DefaultCharacterID;
    class UPlayerCharacterID* DefaultEditorCharacterID;
    FGameplayTag XBoxExcludeRoomTag;
    FAssetsToLoadSettings AssetsToLoad;

    void UnloadPreloadedAssets();
    void LoadDefaultAssetsBlocking(class UAsyncManager* AsyncManager);
    bool IsCheatConsolesEnabled();
    TArray<class UPlayerCharacterID*> GetRankedHeroIDs();
    FText GetPlayerRankName(int32 Rank);
    class UPlayerCharacterID* GetPlayerCharacterID(const FGuid& ID);
    FGDPerks GetPerkData();
    FGDMissionStats GetMissionStats();
    FGDMilestones GetMileStonesData();
    class UInventoryList* GetInventoryList(class UPlayerCharacterID* characterID);
    class UDifficultySetting* GetDifficultySetting(int32 Index);
    int32 GetDifficultyIndex(class UDifficultySetting* Difficulty);
    TSubclassOf<class APlayerCharacter> GetDefaultEditorCharacter();
    TSubclassOf<class APlayerCharacter> GetDefaultCharacter();
    FRetirementCostItem GetCharacterRetirementCost(class UObject* WorldContext, class UPlayerCharacterID* ID);
    TArray<class UHUDVisibilityGroup*> GetAllVisibilityGroups();
    TArray<class UMissionStat*> GetAllMissionStats();
    TArray<class UMilestoneAsset*> GetAllMilestones();
    TArray<class UMissionStat*> GetAllInfirmaryStats();
};

class UGameEventAnimInstance : public UAnimInstance
{
    float StageProgress;
    bool IsEventActive;
    bool AreEventStartersActive;
    bool EventFailed;

};

class UGameFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SpawnOrUpdateAudio2D(class UObject* WorldContext, class UAudioComponent*& AudioComponent, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, FName FloatParamName, float FloatParam);
    void SetUsePushToTalk(bool Enable);
    void SetGlobalGravityZ(class UObject* WorldContextObject, float GravityZ);
    void SetGlobalGravityScale(class UObject* WorldContextObject, float GravityScale);
    bool IsWorldTickEnabled(class UObject* WorldContextObject);
    void IsTearingDown(class UObject* caller, bool& IsTearingDown);
    bool IsPlayingOffline(class UObject* WorldContextObject);
    bool IsPlayInEditor(class UObject* WorldContextObject);
    class UWindowManager* GetWindowManager(class UObject* WorldContextObject);
    bool GetUsePushToTalk();
    class UWindowWidget* GetTopWindow(class UObject* WorldContextObject);
    FString GetProjectVersion();
    int32 GetNumPlayers(class UObject* WorldContext);
    int32 GetNumAdditionalPlayers(class UObject* WorldContext);
    FString GetMajorProjectVersion();
    class APlayerCharacter* GetLocalPlayerCharacter(class UObject* WorldContext);
    class UGoogleAnalyticsWrapper* GetGoogleAnalyticsWrapper(class UObject* WorldContextObject);
    float GetGlobalGravityZ(class UObject* WorldContextObject);
    class AFSDGameModeSpaceRig* GetFSDSRGameMode(class UObject* WorldContextObject);
    class UFSDSaveGame* GetFSDSaveGame(class UObject* WorldContextObject);
    class AFSDGameState* GetFSDGameState(class UObject* WorldContextObject);
    class AFSDGameMode* GetFSDGameMode(class UObject* WorldContextObject);
    class UFSDGameInstance* GetFSDGameInstance(class UObject* WorldContextObject);
    class UGameData* GetFSDGameData();
    TScriptInterface<class IMissionModeManager> GetDeepDiveManager(class UObject* WorldContextObject);
    class ADeepCSGWorld* GetCSGWorld(class UObject* WorldContextObject);
    int32 GetChangelist();
    class UCampaignManager* GetCampaingManager(class UObject* WorldContextObject);
    class UAsyncManager* GetAsyncManager(class UObject* WorldContextObject);
};

class UGameModeFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsCloseToImportantLocation(class AFSDGameState* GameState, const FVector& Location);
    FTransform FindEscapePodLocationAtDistance(class UObject* WorldContextObject, float Distance, float aboveDistanceBias, class AActor* optionalFrom);
    void AddSeamlessTravelEventKey(class UObject* WorldContextObject, class USeamlessTravelEventKey* Key);
};

class UGamepadCursorSettings : public UDeveloperSettings
{
    float MaxSpeed;
    float Acceleration;
    float StickySlowDown;
    float DeadZone;

};

class UGatheItemsObjective : public UResourceBasedObjective
{
    int32 ItemsRequired;
    float ItemsSpawnedModifier;
    int32 ItemsCollected;
    class UCollectableResourceData* ItemResource;

    void OnResourceChanged(class UCappedResource* CappedResource, float Amount);
    void OnRep_ItemsCollected(int32 prevAmount);
};

class UGatherGemsObjective : public UResourceBasedObjective
{
    int32 GemsRequired;
    float GemsSpawnedModifier;
    int32 GemsCollected;
    class UGemResourceData* GemResource;

    void OnResourceChanged(class UCappedResource* CappedResource, float Amount);
    void OnRep_GemsCollected(int32 prevAmount);
};

class UGatlingGunUpgrade : public UStandardItemUpgrade
{
    EGatlingGunUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EGatlingGunUpgrade upgradeType);
};

class UGatlingHotShellsBonus : public UDamageConversionBonus
{
};

class UGatlingHotShellsBonusUpgrade : public UItemUpgrade
{
    class UDamageClass* DamageClass;
    float ConversionPercentage;
    bool DamageIsAdded;
    float TemperatureRequired;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, class UDamageClass* DamageClass);
};

class UGemProximityTracker : public UActorComponent
{
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    TArray<FTrackPositionList> TrackerLists;

};

class UGemResourceCreator : public UDataAsset
{
    class UGemResourceData* ResourceData;
    bool CheckIfFreeSpaceAbove;
    int32 SearchSize;

};

class UGemResourceData : public UResourceData
{
    class UDebrisPositioning* DebrisPositioning;
    bool CheckIfCompletelyCoveredByTerrain;
    FIRandRange GemValue;
    class UGemResourceCreator* ResourceCreator;
    float InfluencerRange;
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    TArray<TSoftClassPtr<AGem>> GemClasses;
    float ImportantRadius;
    TArray<class TSubclassOf<AGem>> GemClassesLoaded;
    TArray<class UDebrisBase*> DebrisLoaded;

    int32 GetCollectedGemsCreditValue(class AFSDGameState* GameState);
    int32 GetCollectedGemsAmount(class AFSDGameState* GameState);
};

class UGemTracker : public UActorComponent
{
    FName TrackName;
    float CustomValue;

};

class UGeneratedMission : public UObject
{
    class UBiome* Biome;
    int32 Seed;
    int32 GlobalSeed;
    class UMissionTemplate* Template;
    FText MissionName;
    TSubclassOf<class UObjective> PrimaryObjective;
    TArray<class TSubclassOf<UObjective>> SecondaryObjectives;
    TMap<class TSubclassOf<UMutator>, class FGMMutatorItem> Mutators;
    TArray<class UMissionWarning*> MissionWarnings;
    class UMissionMutator* MissionMutator;
    class UMissionComplexity* ComplexityLimit;
    class UMissionDuration* DurationLimit;
    TSubclassOf<class UMissionDNA> MissionDNA;
    EMissionStructure MissionStructure;
    bool IsInSeasonEventZone;
    bool WouldBeInSeasonEventZone;
    bool CanHaveMutators;
    TSoftObjectPtr<ULevelSequence> LoaderLevelSequence;

    void Recieve_SetupPLS(class AProceduralSetup* pls);
    bool IsSingleMission();
    bool IsPlagueMission();
    bool IsLocked(class AFSDPlayerController* Player);
    bool IsDeepDive();
    FObjectiveMissionIcon GetSecondaryObjectiveIcon();
    TSubclassOf<class AProceduralSetup> GetPLS();
    TArray<class UMutator*> GetMutators(TSubclassOf<class UMutator> mutatorClass);
    float GetMissionScale();
    class UMissionDNA* GetMissionDNA();
    class AProceduralSetup* CreatePLS(int32 Seed);
    bool AreMissionsEqual(class UGeneratedMission* Other);
};

class UGenerationCleanupComponent : public UActorComponent
{

    void OnCarverCallback();
};

class UGenerationComponent : public UPrimitiveComponent
{
};

class UGetFriendsListBlueprintCallProxy : public UOnlineBlueprintCallProxyBase
{
    FGetFriendsListBlueprintCallProxyOnSuccess OnSuccess;
    void BlueprintGetFriendsListDelegate(const TArray<FBlueprintFriend>& Results);
    FGetFriendsListBlueprintCallProxyOnFailure OnFailure;
    void BlueprintGetFriendsListDelegate(const TArray<FBlueprintFriend>& Results);
    class UObject* WorldContextObject;

    class UGetFriendsListBlueprintCallProxy* GetFriendsList(class UObject* WorldContextObject, FString ListName);
};

class UGibPartsList : public UDataAsset
{
    TArray<class UStaticMesh*> GibMeshes;

    void SetGibMeshesAndMaterialsOnFX(class UNiagaraComponent* ns, class UMaterialInstance* Material, float Scale);
};

class UGliderBeastAnimInstance : public UEnemyAnimInstance
{
    float SyncAnimLength;
    FGliderAnimSync AnimSync;
    bool IsFrozen;

};

class UGlobalMissionParameters : public UDataAsset
{
    TArray<FResourceSpawner> DefaultResources;

};

class UGlobalMissionSetup : public UDataAsset
{
    FIRandRange ExtraBiomes;
    FIRandRange AdditionalMissionsForExtraBiomes;
    FIRandRange MissionsPerZone;
    TArray<FMissionBiomeItem> Biomes;
    TArray<FMissionTemplateItem> AvailableMissions;
    float FacilityMutatorChance;
    class UMissionNameBank* MissionNames;
    FIRandRange MutatorWarningCount;
    FIRandRange ExtraSeasonWarningCount;
    float DoubleWarningChance;
    TArray<class UMissionMutator*> Mutators;
    TArray<class UMissionWarning*> Warnings;
    TMap<class UMissionWarning*, class UMissionWarning*> IncompatibleWarnings;
    TArray<class UPlanetZone*> PlanetZones;
    TArray<FRequiredMissionItem> GlobalRequiredMissions;

    TArray<FMissionTemplateItem> GetAllPossibleMissions();
};

class UGooGunAnimInstance : public UAnimInstance
{
    bool isCharging;
    float ChargePercentVisual;
    float ChargePercent;
    float OverChargePercent;
    float BarrelRotationRate;

    void SetTargetBarrelRotationRate(float RotationRate);
};

class UGooGunProjectileUpgrade : public UStandardItemUpgrade
{
    EGooGunProjectileUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> Item, TSubclassOf<class AActor> upgradedItem, EGooGunProjectileUpgrades upgradeType);
};

class UGooGunUpgrade : public UStandardItemUpgrade
{
    EGooGunUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EGooGunUpgrades upgradeType);
};

class UGoogleAnalyticsWrapper : public UObject
{
    FString LastUnlockedWeapons;
    FString LastKnownClass;
    FString BoscoLoadOut;
    bool WasCampaign;
    FString LastCampaignName;
    int32 LastCampaignProgress;
    bool WasLastCampaignMission;
    int32 LastCampaignSize;
    FString LastWeaponsLoadout;
    FString LastUpgradesLoadout;
    FString SchematicInformation;
    FPartyAnalyticsInformation PartyInfo;
    FDeepDiveAnalyticsInformation DeepDiveInfo;
    FString DiscordCommunityTrackingID;
    FString CommunityGoalsTrackingID;
    bool ShouldUpdateSchematicTrackingInformation;

    void StartMissionPartyInfo(class AFSDGameState* GameState);
    void SetShouldUpdateSchematicInformation();
    void ResetBoscoLoadout();
    void RecordTotalTimeHit(FString Key, FString Campaign, bool Rank, int32 Time);
    void RecordOpenScreen(FString Key, bool Rank);
    void RecordMachineEventEnd(FString EventName, bool WasCompleted, float completionTime);
    void RecordKickPlayer(FString reason, class APlayerController* KickedPlayer);
    void RecordGAUserTiming(FString TimingCategory, const int32 TimingValue, FString TimingName);
    void RecordGaTreeOfVanityClaim(int32 NodeID);
    void RecordGASeasonLevelUp();
    void RecordGAMissionTotalTimeHit(FString Key, FString Campaign, bool Rank, int32 TotalTime, int32 Progress, int32 XP, int32 Credits);
    void RecordGAMissionTimeEvent(int32 Time);
    void RecordGAEvent(FString EventCategory, FString EventAction, FString EventLabel, const int32 EventValue, EFSDGoogleAnalyticsProperties Property);
    void RecordGADeepDiveStageHit(FString Key, bool Rank, int32 StageTime, int32 TimeSinceStartOfDive, int32 TotalTime, int32 NitraLeft);
    void RecordGaChallengeReroll(int32 ChallengeIndex, class USeasonChallenge* Challenge);
    void RecordExtraFailInfo(FString MissionName, FString Stage, FString ExtraText);
    void RecordCustomGAEvent(FString EventCategory, FString EventAction, FString EventLabel, const int32 EventValue, FString TrackingID);
    void RecordContinuousDamage(class AActor* DamageCauser);
    void RecordBossFightEnd(FString BossName, bool WasBossKilled, int32 BossKills);
    FString ProcessCampaignName(UClass* Campaign);
    void PlayerLatejoin();
    void PlayerDropout();
    void OnPlayerLeaveBind(class AFSDPlayerState* PlayerState);
    void OnPlayerJoinBind(class AFSDPlayerState* PlayerState);
    void HandleMatchStarted();
    FString GetAnalyticsFText(FText Text);
    void EndMissionPartyInfo();
};

class UGrabTargetValidator : public UTargetValidator
{
};

class UGrabbedStateComponent : public UCharacterStateComponent
{
};

class UGrabberComponent : public UActorComponent
{
    FGrabberComponentOnGrabbedActor OnGrabbedActor;
    void GrabbedActorSig(class AActor* aGrabbedActor);
    FGrabberComponentOnReleasedActor OnReleasedActor;
    void ReleasedActorSig(class AActor* aGrabbedActor, bool fullGrabElapsed);
    FGameplayTagQuery TagFilter;
    class UAudioComponent* GrabLoopSoundInstance;
    TWeakObjectPtr<class ADeepPathfinderCharacter> PathfinderOwner;
    TWeakObjectPtr<class USkeletalMeshComponent> OwnerMesh;
    class USoundCue* BeginGrabedSound;
    class USoundCue* GrabedLoopSound;
    class USoundCue* EndGrabedSound;
    class UDialogDataAsset* BeginGrabbedShout;
    class UDialogDataAsset* EndGrabbedShout;
    class UDialogDataAsset* AttentionGrabbedShout;
    class AActor* CurrentlyGrabbed;
    FName GrabAttachName;
    float GrabTime;
    float CarryCooldown;
    float RevivedGravePeriod;
    EOutline PlayerOutlineOnGrab;
    EGrabbedStateCameraMode CameraMode;
    bool TrackPlayerCollision;
    bool ManualGrabTime;
    bool CanPlayerShoot;
    bool HeightenSensesImmune;
    bool NeedsPathToTarget;

    void Timer_ReleaseTarget();
    void ReleaseTarget();
    void OnRep_CurrentlyGrabbed(class AActor* oldCurrentlyGrabbed);
    void OnPrimWake(class UPrimitiveComponent* WakingComponent, FName BoneName);
    bool IsGrabbedTargetValid();
    bool HasGrabbed();
    bool GrabTarget(class AActor* aGrabTarget);
    class AActor* GetGrabbedActor();
    bool CanGrabTarget(class AActor* aTarget);
};

class UGrapplingHookUpgrade : public UStandardItemUpgrade
{
    EGrapplingHookUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> Item, EGrapplingHookUpgrade upgradeType);
};

class UGravityChangedComponent : public UActorComponent
{
    bool bAwakeOnGravityChanged;
    TArray<class UPrimitiveComponent*> PrimitiveComponents;

    void OnGravityChanged(float Gravity, float Change);
};

class UGrenadeAnimationSet : public UDataAsset
{
    class UAnimMontage* FP_EquipAnimation;
    class UAnimMontage* TP_EquipAnimation;
    class UAnimMontage* FP_ThrowAnimation;
    class UAnimMontage* TP_ThrowAnimation;

};

class UGrenadeProjectionSettings : public UDataAsset
{
    TArray<FVector> SplinePoints;
    float ProjectionScale;
    float VelocityScale;
    bool ProjectionVisible;

};

class UGrenadeUpgrade : public UStandardItemUpgrade
{
    EGrenadeUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AGrenade> flareClass, EGrenadeUpgradeType upgradeType);
};

class UGroundFormationData : public UFormationData
{
    int32 FormationSize;
    float FormationSpread;
    float RandomSpread;

};

class UGroundToAirComponent : public UActorComponent
{
    FGroundToAirComponentOnChangedPathfinderState OnChangedPathfinderState;
    void ChangedStateSig();
    class UDeepPathfinderMovement* CurrentMove;
    float WalkTime;
    float WalkTimeMaxRandomOffset;
    float WalkTimeMinRandomOffset;
    bool WalkUseTimer;
    FStateStats WalkStats;
    float FlyTime;
    float FlyTimeMaxRandomOffset;
    float FlyTimeMinRandomOffset;
    bool FlyUseTimer;
    FStateStats FlyStats;
    bool IsFlying;
    TWeakObjectPtr<class ADeepPathfinderCharacter> OwningPathfinder;

    void SetIsFlying(bool aIsFlying);
    void SetAllowedToChangeState(bool aIsAllowed);
    void OnRep_StateChange();
    bool GetIsWalking();
    bool GetIsFlying();
    void Engage();
};

class UGrowthComponent : public UActorComponent
{
    class USceneComponent* ScaleComponent;
    FRuntimeFloatCurve CurrentGrowthCurve;

    void StopGrow();
    void StartGrow(class USceneComponent* aComponentToScale, FRuntimeFloatCurve aCurve);
};

class UGunLogicComponent : public UActorComponent
{
    class UWeaponFireComponent* WeaponFire;
    class UMeshComponent* Mesh;
    float RateOfFire;
    class UParticleSystem* MuzzleParticles;
    class UParticleSystem* TracerParticles;
    class USoundCue* FireSound;
    float MinTracerDistance;
    float TracerSpeed;

    void SetMesh(class UMeshComponent* Mesh);
    void OnWeaponFireEnded();
    void OnWeaponFired(const FVector& Location);
};

class UGunTowerHealthComponent : public UEnemyHealthComponent
{
};

class UGunTowerModuleAnimInstance : public UAnimInstance
{
    FRotator CurrentModuleRotation;
    FRotator CurrentLookAtRotation;
    bool IsModuleActive;
    bool AreWeakpointsExposed;

};

class UHUDActorTrackingSubsystem : public UWorldSubsystem
{
    FHUDActorTrackingSubsystemOnToggleTrackingEvent OnToggleTrackingEvent;
    void BoolDelegate(bool boolValue);
    FHUDActorTrackingSubsystemOnShowAlwaysTrackedEvent OnShowAlwaysTrackedEvent;
    void Delegate();

};

class UHUDHealthBar : public UFSDUserWidget
{
    FHUDHealthBarOnOwnerDead OnOwnerDead;
    void HUDHealthBarSignature(class UHUDHealthBar* HealthBar);
    FLinearColor BackgroundColor;
    FLinearColor HealthColor;
    FLinearColor DamageColor;
    TMap<class EHealthbarType, class FHealthBarLooks> HealthBarLooks;
    FLinearColor OutlineColor;
    int32 OutlineThickness;
    float HealthAnimationFactor;
    float HealthPerCell;
    int32 MinHealthCells;
    int32 MaxHealthCells;
    TScriptInterface<class IHealth> TargetHealth;
    float AnimatedHealth;
    float MaxHealth;

    void SetHealthComponent(const TScriptInterface<class IHealth>& Health, float Damage);
    float GetCurrentHealth();
};

class UHUDVisibilityGroup : public UDataAsset
{
    FHUDVisibilityGroupOnModeChanged OnModeChanged;
    void ModeDelegate(class UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    FHUDVisibilityGroupOnVisibilityChanged OnVisibilityChanged;
    void VisibilityDelegate(class UHUDVisibilityGroup* Group, bool IsVisible);
    EHUDVisibilityGroups GroupID;
    FText Title;
    bool AllowDynamicMode;
    bool AllowHiddenMode;
    bool bDynamicallyVisible;
    TArray<FHUDVisibilityRegisteredWidget> RegisteredWidgets;
    EHUDVisibilityMode RecommendedMode;
    EHUDVisibilityMode MinimalMode;

    void VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible);
    void SetModeFromPreset(EHUDVisibilityPresets Preset);
    void SetMode(EHUDVisibilityMode InMode);
    void SetHudGroupDynamicallyVisible(class UHUDVisibilityGroup* Group, bool IsVisible);
    void SetGroupDynamicallyVisible(bool IsVisible);
    void RegisterWidgetWithVisibilityGroup(class UWidget* Widget, class UHUDVisibilityGroup* Group, ESlateVisibility VisibleMode, ESlateVisibility HiddenMode);
    void RegisterMultipleWidgetsWithVisibilityGroup(TArray<class UWidget*> Widgets, class UHUDVisibilityGroup* Group, ESlateVisibility VisibleMode, ESlateVisibility HiddenMode);
    void ModeDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    bool IsModeAllowed(EHUDVisibilityMode InMode);
    bool IsInDynamicMode();
    bool IsHudGroupVisible(class UHUDVisibilityGroup* Group);
    bool IsGroupVisible();
    EHUDVisibilityMode GetMode();
    TArray<EHUDVisibilityMode> GetAllowedModes();
};

class UHUDWarningWidget : public UFSDUserWidget
{

    void SetData(class UTexture2D* Texture, class USoundBase* PingSound);
    void Ping(bool DestroyAfterPing);
};

class UHackableBuildingObjective : public UObjective
{

    void DropOverCharger(class AProceduralSetup* Setup, const FVector& buildingLocation, float idealRange, float idealZDistance, class UDebrisPositioning* DebrisPositioning, TSubclassOf<class ARessuplyPod> generatorClass, bool AddImportantLocation);
};

class UHackingToolWidget : public UUserWidget
{
    FHackingToolWidgetOnHackingFail OnHackingFail;
    void HackingFailDelegate(class USoundCue* InFailCue, class UDialogDataAsset* InShout);
    FHackingToolWidgetOnHackingStageCompleted OnHackingStageCompleted;
    void HackingStageCompletedDelegate(int32 InNextStage, int32 InTotalStages);
    FHackingToolWidgetOnHackingCompleted OnHackingCompleted;
    void HackingCompleteDelegate(bool InSuccess);
    FHackingToolWidgetOnRequestUnequipHackingTool OnRequestUnequipHackingTool;
    void HackingUnequipDelegate();
    TWeakObjectPtr<class UHackingUsableComponent> HackingUsable;
    TWeakObjectPtr<class AHackingToolItem> HackingTool;

    void StartHacking(class UHackingUsableComponent* InHackingUsable, class AHackingToolItem* InHackingTool);
    void RequestUnequipHackingTool();
    void ReceiveHackingToolUnequipped();
    void ReceiveHackingStarted();
    void ReceiveActionReleased();
    void ReceiveActionPressed();
    void ReceiveActionClick();
    void HackingUnequipDelegate__DelegateSignature();
    void HackingStageCompletedDelegate__DelegateSignature(int32 InNextStage, int32 InTotalStages);
    void HackingStageComplete(int32 InNextStage, int32 InTotalStages);
    void HackingFailDelegate__DelegateSignature(class USoundCue* InFailCue, class UDialogDataAsset* InShout);
    void HackingCompleteDelegate__DelegateSignature(bool InSuccess);
    void HackingComplete(bool InSuccess);
};

class UHackingUsableComponent : public UInstantUsable
{
    FHackingUsableComponentOnHacked OnHacked;
    void HackedDelegate(class APlayerCharacter* InHackedBy);
    FHackingUsableComponentBeingHackedUpdated BeingHackedUpdated;
    void ItemDelegate(class AItem* Item);
    TSoftClassPtr<AHackingToolItem> ItemType;
    TSoftClassPtr<UHackingToolWidget> HackingWidgetType;
    FHackingUsableState HackingState;

    void OnRep_HackingState(const FHackingUsableState& oldState);
    void HackedDelegate__DelegateSignature(class APlayerCharacter* InHackedBy);
    bool GetIsHacked();
    bool GetIsBeingHacked();
    TSoftClassPtr<UHackingToolWidget> GetHackingWidgetType();
    class APlayerCharacter* GetHackedBy();
};

class UHalloweenSkullAnimInstance : public UAnimInstance
{
    float JawMovementSpeedMin;
    float JawMovementSpeedMax;
    float JawMovementRange;
    float SwitchAnimationTimeMin;
    float SwitchAnimationTimeMax;
    float JawPosition;

};

class UHeadVanityItem : public UVanityItem
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    EHeadVanityType HeadVanityType;
    bool HideEyebrows;
    bool HideSideburns;
    bool HideMoustache;
    bool HideBeard;
    bool HideAll;
    bool RequiresSlimArmor;
    TArray<class UArmorVanityItem*> ForceThickAmorsHack;
    bool HideHead;
    ECharacterHeadMesh HeadMesh;
    TSoftObjectPtr<UMaterialInterface> MaterialOverride;
    TMap<class UPlayerCharacterID*, class TSoftObjectPtr<UMaterialInterface>> ClassMaterials;

};

class UHealingStatusEffectItem : public UStatusEffectItem
{
    bool HealPercentage;
    float NoDamageTimeRequired;
    class UPawnAffliction* PawnAffliction;
    FRandRange Amount;
    bool IgnoreCanTakeDamage;

};

class UHealthBarComponent : public UWidgetComponentCustomMaterial
{
};

class UHealthComponent : public UHealthComponentBase
{
    FHealthComponentOnArmorChanged OnArmorChanged;
    void HealthChangedSig(float Health);
    FHealthComponentOnArmorDamaged OnArmorDamaged;
    void DamageSig(float Amount);
    FHealthComponentOnArmorHealed OnArmorHealed;
    void ArmorHealedSig(float Amount);
    FHealthComponentOnDeathDetailed OnDeathDetailed;
    void DeathSigDetailed(class UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<class UDamageTag*>& Tags);
    FHealthComponentOnNewHealthSegment OnNewHealthSegment;
    void HealthSegmentChange(int32 currSegment, int32 prevSegment);
    float Damage;
    TArray<float> HealthSegmentSizes;
    bool CanDamageThroughSegments;
    class AActor* LastDamageCauser;
    TArray<class USubHealthComponent*> SubHealthComponents;
    bool ShouldUseLargestSubhealthDamageTaken;
    bool InvulnerableToNonDefinedResistances;
    TMap<UPawnStat*, float> Resistances;
    float EnvironmentalDamageResistance;
    bool AffectedByGlobalWeakpointDamageMultiplier;
    bool UseDormancy;
    class UPawnStatsComponent* PawnStats;

    void ToggleCanTakeDamage();
    float TakePercentDamage(float PercentOfMax, const FDamageData& DamageData);
    void Resupply(float percentage);
    void OnRep_Damage(float oldDamage);
    void HealArmor(float Amount);
    bool HasArmor();
    float GetMaxArmor();
    EHealthbarType GetHealthbarType();
    void GetCurrentHealthSegment(int32& Segment, float& segmentHealth, float& segmentHealthPercent);
    float GetArmorPct();
    float GetArmor();
    void Client_ReceivedHit(float Amount, const FDamageData& DamageData, bool anyHealthLost);
};

class UHealthComponentBase : public UActorComponent
{
    FHealthComponentBaseOnHealthChanged OnHealthChanged;
    void HealthChangedSig(float Health);
    FHealthComponentBaseOnDamageHealed OnDamageHealed;
    void DamageSig(float Amount);
    FHealthComponentBaseOnDamageTaken OnDamageTaken;
    void DamageSig(float Amount);
    FHealthComponentBaseOnHit OnHit;
    void HitSig(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    FHealthComponentBaseOnBodypartHit OnBodypartHit;
    void BodypartHitSig(float Amount, float BaseAmount, const FDamageData& DamageData);
    FHealthComponentBaseOnDeath OnDeath;
    void DeathSig(class UHealthComponentBase* HealthComponent);
    FHealthComponentBaseOnRadialDamage OnRadialDamage;
    void OnRadialDamage(float Damage, float BaseDamage, const FVector& Position, float Radius);
    FHealthComponentBaseOnHitByHitScan OnHitByHitScan;
    void OnHitByHitScan(class UHitscanBaseComponent* HitscanComponent, const FVector& Position, const FVector& Origin);
    FHealthComponentBaseOnCanTakeDamageChanged OnCanTakeDamageChanged;
    void CanTakeDamageDelegate(bool OutCanTakeDamage);
    bool ShowLaserPointMarkerWhenDead;
    bool canTakeDamage;
    bool PassthroughTemperatureDamage;

    float TakeRadialDamage(float damageAmount, FVector BlastCenter, float BlastRadius, float MaxDamageRadius, float MinDamagePct, FDamageData& DamageData);
    void TakeDamageSimple(float damageAmount, class AActor* DamageCauser, class UDamageClass* DamageClass);
    void SetHealthDirectly(float newHealthValue);
    void SetCanTakeDamage(bool canTakeDamage);
    void Kill(class AActor* DamageCauser);
    bool IsDead();
    bool IsAlive();
    float Heal(float Amount);
    bool GetShowHealthBar();
    float GetHealthPct();
    TScriptInterface<class IHealth> GetHealthComponentForCollider(class UPrimitiveComponent* Primitive);
    FVector GetHealthBarWorldOffset();
    float GetHealth();
    class UParticleSystem* GetGenericImpactParticles();
    bool GetCanTakeDamage();
    bool CanTakeDamageFrom(class UDamageClass* DamageClass);
    void CanTakeDamageDelegate__DelegateSignature(bool OutCanTakeDamage);
};

class UHealthDamageTracker : public UActorComponent
{
    FHealthDamageTrackerOnTrackedPercentageReachedEvent OnTrackedPercentageReachedEvent;
    void DamageSig(float Amount);
    float TiggerOnPercentage;
    class UHealthComponentBase* Health;

    void ResetTrackedDamage();
    void OnDamageTaken(float Amount);
};

class UHeatMaterialComponent : public UActorComponent
{
    FName ParameterName;
    float MaxEffect;
    TArray<class UMaterialInstanceDynamic*> MaterialIntances;

    void OnTemperatureChanged(float Temperature, bool overHeated);
    void AddHeatMaterial(class UMaterialInstanceDynamic* MaterialInstance);
};

class UHeatSourceStatusEffectItem : public UStatusEffectItem
{
    float Temperature;
    ETemperatureIntensity Intensity;

};

class UHeavyParticleCannonUpgrade : public UStandardItemUpgrade
{
    EHeavyParticleCannonUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EHeavyParticleCannonUpgrade upgradeType);
};

class UHeightenedSenseComponent : public UFloatPerkComponent
{
    class UPawnAffliction* HeightenSenseAffliction;
    float AlertDistance;
    TArray<FHeightenedSenseTracker> ActiveTrackers;
    bool bAfflictionActivated;

    void RemoveTracker(class AActor* TrackerActor);
    void AddTracker(class AActor* TrackerActor);
};

class UHeroEnemies : public URunningMissionBP
{
    FGameplayTagQuery AllowedQuery;
    TMap<class UEnemyDescriptor*, class FEliteEnemyEntry> Entries;

    void OnEnemySpawned(class APawn* enemy, class UEnemyDescriptor* descriptor);
};

class UHeroEnemyAfflictionEffect : public UAfflictionEffect
{
    FGameplayTag TagToAdd;

};

class UHitReactionComponent : public UActorComponent
{
    TArray<class UAnimSequenceBase*> HitReactions;
    float FirstHitReactBlendIn;
    float OverrideHitReactBlendIn;
    bool AllowHitReactions;
    class USkeletalMeshComponent* SkeletalMesh;

    void PlayHitReaction();
    void OnDamageTaken(float Amount);
};

class UHitScanImpactUpgradeElement : public UItemUpgradeElement
{
    class UFXSystemAsset* ImpactParticle;
    class USoundCue* ImpactSound;

};

class UHitscanBaseComponent : public UWeaponFireComponent
{
    FHitscanBaseComponentOnSpreadChanged OnSpreadChanged;
    void SpreadChangedDelegate(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    FHitscanBaseComponentOnFireComplete OnFireComplete;
    void Delegate();
    float SpreadPerShot;
    class UDamageComponent* DamageComponent;
    bool UseDamageComponent;
    float Damage;
    float armorDamageMultiplier;
    class UDamageClass* DamageClass;
    float WeakpointDamageMultiplier;
    int32 MaxPenetrations;
    EImpactDecalSize ImpactDecalSize;
    float FriendlyFireModifier;
    bool UseDynamicSpread;
    TArray<class AActor*> IgnoredActorsInTrace;
    float MinSpread;
    float MinSpreadWhenMoving;
    float MinSpreadWhenSprinting;
    float MaxSpread;
    FRuntimeFloatCurve SpreadCurve;
    float SpreadRecoveryPerSecond;
    float VerticalSpreadMultiplier;
    float HorizontalSpredMultiplier;
    float MaxVerticalSpread;
    float MaxHorizontalSpread;
    ERicochetBehavior RicochetBehavior;
    float RicochetChance;
    bool RicochetOnWeakspotOnly;
    float RicochetMaxRange;

    void Server_StopFire();
    void Server_RemoveDebris(int32 instance, int32 Component);
    float GetCurrentVerticalSpread();
    float GetCurrentHorizontalSpread();
};

class UHitscanBaseUpgrade : public UStandardItemUpgrade
{
    EHitScanBaseUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EHitScanBaseUpgradeType upgradeType);
};

class UHitscanComponent : public UHitscanBaseComponent
{
    FHitscanComponentOnHit OnHit;
    void HitDelegate(const FHitResult& Hit, bool alwaysPenetrate);
    bool CanHitInstigator;
    bool BulletsCanCarve;
    FIRandRange NormalBulletsPerCarvingOne;
    float CarveDiameter;
    float CarveNoise;
    float CarveDebrisSize;
    float GeneralImpactAudioVolume;
    float ImpactDelay;
    bool OnlyUseImpactEffects;
    class UFXSystemAsset* ImpactParticles;
    class USoundCue* ImpactSound;
    bool IgnoreAlwaysPenetrate;
    TArray<class AActor*> DamagedActorCache;
    TArray<FHitscanDelayedImpact> DelayedImpacts;

    void Server_RegisterRicochetHit_Terrain(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, class UFSDPhysicalMaterial* PhysMaterial);
    void Server_RegisterRicochetHit_Destructable(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, class UPrimitiveComponent* Target, class UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void Server_RegisterRicochetHit(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, class UPrimitiveComponent* Target, class UFSDPhysicalMaterial* PhysMaterial);
    void Server_RegisterHit_Terrain(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, class UFSDPhysicalMaterial* PhysMaterial);
    void Server_RegisterHit_Destructable(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, class UPrimitiveComponent* Target, class UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void Server_RegisterHit(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, class UPrimitiveComponent* Target, class UFSDPhysicalMaterial* PhysMaterial);
    void All_ShowRicochetHit_Terrain(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, class UFSDPhysicalMaterial* PhysMaterial);
    void All_ShowRicochetHit_Destructable(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, class UPrimitiveComponent* Target, class UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void All_ShowRicochetHit(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, class UFSDPhysicalMaterial* PhysMaterial);
    void All_ShowHit_Terrain(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, class UFSDPhysicalMaterial* PhysMaterial);
    void All_ShowHit_Destructable(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, class UPrimitiveComponent* Target, class UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void All_ShowHit(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, class UFSDPhysicalMaterial* PhysMaterial);
};

class UHttpUtilityLibrary : public UBlueprintFunctionLibrary
{
};

class UHugeExplosionComponent : public UActorComponent
{
    class UParticleSystem* ExplosionEffect;
    float ExplosionSpeed;
    float ExplosionSize;

    void TriggerExplosion(FVector Location);
};

class UIconGenerationCameraKey : public UDataAsset
{
};

class UIconGenerationManager : public UObject
{
    class AIconGenerationCharacter* GeneratorInst;
    class AIconGenerationPickaxe* PickaxeGeneratorInst;
    class AIconGenerationWeapon* WeaponGeneratorInst;
    TArray<FGenerateIconInfo> ItemGenerationQueue;
    TArray<EVanitySlot> VanitySlots;
    TArray<class UVanityItem*> HairColorHairItems;
    TSoftClassPtr<AIconGenerationCharacter> IconCharacter;
    TSoftClassPtr<AIconGenerationPickaxe> IconPickaxe;
    TSoftClassPtr<AIconGenerationWeapon> IconWeapon;
    class UTextureRenderTarget2D* LatestGeneratedTexture;
    class AIconGenerationBase* ActiveIconGenerator;

    void GenerateWeaponIcon_Async(class UIconGenerationManager* manager, class UItemSkin* Item, bool inShowCloseUp, class UPlayerCharacterID* Character, class UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    void GenerateVanityIcon_Async(class UIconGenerationManager* manager, class UVanityItem* Item, class UPlayerCharacterID* Character, class UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    void GeneratePickaxeSetIcon_Async(class UIconGenerationManager* manager, FPickaxeSet PickaxeSet, class UPlayerCharacterID* Character, class UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    void GeneratePickaxePartIcon_Async(class UIconGenerationManager* manager, class UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, class UPlayerCharacterID* Character, class UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
};

class UIconSceneCaptureComponent : public USceneCaptureComponent2D
{
    class UIconGenerationCameraKey* CameraKey;

};

class UImpactAudioComponent : public UAudioComponent
{
    FName AudioParameterSpeed;
    float DecelerationThreshold;
    bool ListenForDeath;

    void OnOwnerDeath(class UHealthComponentBase* HealthComponent);
    class UImpactAudioComponent* AddImpactAudioToActor(class AActor* Actor, class USceneComponent* AttachToComponent, TSubclassOf<class UImpactAudioComponent> ComponentClass);
};

class UImpactComponent : public UActorComponent
{
    FImpactComponentOnImpactedEvent OnImpactedEvent;
    void ImpactedSignature();
    FImpactComponentOnHighAcceleration OnHighAcceleration;
    void HightAccelerationSignature();
    bool DebugText;
    bool TrackAcceleration;
    bool TrackVelocity;
    float TriggerHighAccelAt;
    float TriggerAtVelocityDifference;

    void SetCheckVelocity(bool aCheckVelocity);
    void SetCheckAcceleration(bool aCheckAcceleration);
    void EnableImpactCheckhing(class USceneComponent* cmp);
    void DisableImpactChecking();
};

class UInDangerComponent : public UActorComponent
{
    FInDangerComponentOnInDanger OnInDanger;
    void IsInDangerSig();
    TWeakObjectPtr<class UHealthComponentBase> ParentHealthComponent;
    float DamageTimeLimit;
    float DamageThreshold;
    bool RunsOnClients;

    void SetIsActive(bool aFlag);
    void OnDamage(float Amount);
    bool GetIsActive();
};

class UInfectedStateComponent : public UCharacterBreakOutState
{
    FRandRange CleanseAmount;
    class USoundBase* AudioFreeOfInfection;
    class UFSDPhysicalMaterial* InfectedPhysicalMaterial;
    class UFSDPhysicalMaterial* DwarfFleshMaterial;
    class UPawnAffliction* InfectedAffliction;
    class UAnimMontage* InfectedMontage;
    class UAnimMontage* InfectedAndBreakingFreeMontage;
    float BreakingFreeMontageDuration;

    void Server_Breakout();
    void ReceiveOnCleansing();
};

class UInfectionMasterComponent : public UActorComponent
{
    TSubclassOf<class UStatusEffect> WeakpointPopSTE;
    float WeakpointPopSTERange;
    uint8 InfectionPoints;
    bool ExtraInfectionPointsWithMorePlayers;
    float SpikeScale;
    float InfectionScale;
    bool KillWhenAllPointsDestroyed;
    float ScaleDownOnDeathTime;
    class UMaterialInterface* BaseMat;
    class UMaterialInterface* GlowMat;
    TArray<class UStaticMesh*> InfectionPointMeshes;
    TArray<class UStaticMesh*> InfectionSpikeMeshes;
    class UHealthComponent* HealthComponent;
    TArray<class UStaticMeshComponent*> MeshComponents;
    uint32 RandomSeed;

    void OnRep_RandomSeed();
    void OnDeath(class UHealthComponentBase* enemy);
    void InfectionPointDestroyed(FName Name);
    void DealWeakpointDamage(const FName& SocketName);
};

class UInfectionPointCleaningComponent : public UActorComponent
{
    FInfectionPointCleaningComponentOnPointVacuumed OnPointVacuumed;
    void Delegate();
    FInfectionPointCleaningComponentOnPointFoamed OnPointFoamed;
    void Delegate();
    bool bIsInitialized;
    bool bHasBeenReplicated;
    TMap<UDifficultySetting*, int32> DifficultyModifiers;
    class UNiagaraSystem* CleanedParticles;
    float particleScale;
    bool outerLayerCleaned;
    TArray<TEnumAsByte<ECleanedStatus>> InfectionPoints;
    TArray<class UMeshComponent*> OuterLayerMeshes;
    TArray<class UMeshComponent*> InnerLayerMeshes;

    void Reset();
    void OnRep_InfectionPoints(TArray<TEnumAsByte<ECleanedStatus>> oldInfectionPoints);
    void InitInfectionPoints(const TArray<class UMeshComponent*>& outerMeshes, const TArray<class UMeshComponent*>& innerMeshes);
    int32 GetRequiredCleanCount();
    int32 GetRemainingInfectedPoints();
    int32 GetNumberOfInfectedPoints();
};

class UInfectionStatusEffectItem : public UStatusEffectItem
{
    FRandRange InfectionChangeAmount;

};

class UInfestedEnemiesMutator : public UMutator
{
    TArray<class UParticleSystem*> SpawnEffects;

    class UParticleSystem* GetParticleSystem(class AFSDPawn* enemy);
};

class UInfluencerComponent : public UDebrisActorComponent
{
    FRuntimeFloatCurve ProbabilityCurve;
    FRuntimeFloatCurve ScaleCurve;

};

class UInfluencerSpawnComponent : public USceneComponent
{
    class UCaveInfluencer* Influencer;
    float range;

};

class UInputCaptureWidget : public UUserWidget
{
    FCustomKeySetting Settings;
    EKeyBindingSlot InputSlot;
    bool bIsGamepadKey;
    bool bCapturing;

    void SetData(const FCustomKeySetting InSettings, EKeyBindingSlot InInputSlot, bool InIsGamepadKey);
    void SetCurrentBinding(const FKey& InKey);
    void ReceiveKeyChanged(FKey InKey);
    void ReceiveKeyCaptured(FKey InKey);
    void ReceiveCapturingChanged(bool InCapturing);
    FKey GetCurrentBinding();
    bool FindCurrentSettingsForKey(const FKey& InKey, FCustomKeySetting& OutSettings);
    void ClearCurrentBinding();
    void BindActionToKey(const FCustomKeySetting& InAction, const FKey& InKey, EKeyBindingSlot InSlot, bool SaveToDisk);
};

class UInputFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetMouseSmoothingOn(bool smoothingOn);
    bool IsMouseSmoothingOn();
    bool IsMouseEventAction(const FPointerEvent& MouseEvent, const FName& ActionName, bool IgnoreCustomBindings);
    bool IsKeyEventActionAny(const FKeyEvent& KeyEvent, TArray<FName> ActionNames, bool IgnoreCustomBindings);
    bool IsKeyEventAction(const FKeyEvent& KeyEvent, FName ActionName, bool IgnoreCustomBindings);
    bool IsInputActionDown(const class APlayerController* InPlayerController, FName InActionName);
    bool IsAxisMappedToDirectional(FName InActionName, FKey Key, int32 Direction, bool IgnoreCustomBindings);
    bool IsAnyInputActionDown(const class APlayerController* InPlayerController, const TArray<FName>& InActionNames);
    bool IsActionMappedTo(FName InActionName, FKey Key, bool IgnoreCustomBindings);
    bool GetAxisMapping(FName InActionName, int32 Axis, bool InGamepadKeys, FInputAxisKeyMapping& OutResult);
    bool GetActionMapping(FName InActionName, bool InGamepadKeys, FInputActionKeyMapping& OutResult);
    bool FindInputDisplay(const class APlayerController* PlayerController, FName InputName, EFSDInputSource InputSource, int32 LayoutIndex, FInputDisplay& OutInputDisplay);
    class UTexture2D* FindActionIcon(FName InActionName, bool InGamepadKeys);
};

class UInstancedMeshOnSpline : public UInstancedStaticMeshComponent
{
    class USplineComponent* Spline;
    int32 NumInstances;
    float Speed;
    float VerticalOffset;
    FVector Scale;
    TArray<FTransform> NewInstancesTransforms;
    float Phase;

    void SetSpeed(float newSpeed);
};

class UInstancedNiagaraComponent : public USceneComponent
{
    TArray<FEmitterConnection> Emitters;
    class UNiagaraComponent* NiagaraComponent;

    void SpawnParticlesFromName(const FVector Location, const FName EmitterName);
    void SpawnParticles(const FVector Location, const int32 EmitterIndex);
};

class UInstantUsable : public UUsableComponent
{
    FInstantUsableOnUsedBy OnUsedBy;
    void UsedBySignature(class APlayerCharacter* User, EInputKeys Key);
    FInstantUsableOnUsableChanged OnUsableChanged;
    void UsableChangedSignature(bool CanUse);
    bool bShowUsingUI;
    class USoundCue* AudioCompletedUse;
    bool UseDelayedAudio;
    float AudioDelay;
    bool RefreshDelayOnNewUse;
    bool Usable;
    bool TurnOffAfterUse;

    void SetCanUse(bool CanUse);
    void OnRep_Usable();
};

class UInterpolatedFirstPersonStaticMeshComponent : public UFirstPersonStaticMeshComponent
{
};

class UInventoryBase : public UActorComponent
{
    TArray<class AActor*> ActorsSelectable;
    TArray<class AActor*> ActorsNonSelectable;
    FEquippedActorData ReplicatedEquippedActor;
    class AActor* LastEquippedActors;

    void Server_SetEquippedActor(const FEquippedActorData& Actor, bool CallClientDelayed);
    void Server_EquipExternalActor(class AActor* Actor);
    void OnRep_EquippedActor(FEquippedActorData& OldActor);
    void OnRep_ActorsSelectable();
    void OnRep_ActorsNonSelectable();
    TArray<class AActor*> GetSelectableActors();
    TArray<class AActor*> GetAllItems();
    void EquipPrevious();
    void EquipNull();
    void EquipNext();
    void EquipLast();
    void EquipAtIndex(int32 Index, bool ignoreUsing);
};

class UInventoryComponent : public UInventoryBase
{
    FInventoryComponentOnItemsLoaded OnItemsLoaded;
    void InventoryItemsLoaded();
    FInventoryComponentOnItemClicked OnItemClicked;
    void ItemDelegate(class AItem* Item);
    FInventoryComponentOnItemEquipped OnItemEquipped;
    void ItemDelegate(class AItem* Item);
    FInventoryComponentOnItemUnequipped OnItemUnequipped;
    void ItemDelegate(class AItem* Item);
    FInventoryComponentOnGrenadeCountChanged OnGrenadeCountChanged;
    void GrenadesDelegate(int32 CurrentCount);
    FInventoryComponentOnFlareCountChanged OnFlareCountChanged;
    void FlaresDelegate(int32 CurrentCount, class UInventoryComponent* Inventory);
    FInventoryComponentOnMaxFlareCountChanged OnMaxFlareCountChanged;
    void FlaresDelegate(int32 CurrentCount, class UInventoryComponent* Inventory);
    FInventoryComponentOnFlareProduction OnFlareProduction;
    void FlareProductionDelegate(int32 NextIndex, float Progress);
    FInventoryComponentOnResuppliedEvent OnResuppliedEvent;
    void ResupplyDelegate(float percentage);
    FInventoryComponentOnCarriableChangedEvent OnCarriableChangedEvent;
    void CarriableChangedDelegate(class AActor* carriedActor);
    class UInventoryList* InventoryList;
    TSubclassOf<class AThrownGrenadeItem> ThrownGrenadeClass;
    TSubclassOf<class AFlare> flareClass;
    FVector FlareOffset;
    class USoundCue* OutOfFlaresSound;
    class UDialogDataAsset* OutOfFlaresShout;
    float FlareAngle;
    float FlareCooldown;
    float FlareProductionTime;
    FLinearColor FlareChromaColor;
    float FlareProductionTimeLeft;
    int32 MaxFlares;
    int32 Flares;
    float FlareCooldownRemaining;
    TArray<class UItemUpgrade*> FlareUpgrades;
    bool bItemsLoaded;
    class APickaxeItem* MiningItem;
    class AThrownGrenadeItem* GrenadeItem;
    class ALaserPointerItem* LaserPointerItem;
    class ATerrainScannerItem* TerrainScannerItem;
    class ARessuplyPodItem* ResupplyItem;
    class ARecallableSentryGunItem* RecallableSentryGunItem;

    void UpdateFromSaveGameInSlot(EItemCategory Category);
    void StartGrenadeThrow();
    void Server_ThrowItem(class AActor* Item, FVector force, bool PlayMontage);
    void Server_ThrowFlare();
    void ResupplyGrenades(float percentage);
    void Resupply(float percentage);
    void PickupItemInstance(class AItem* Item);
    class AItem* PickupItem(TSubclassOf<class AItem> itemClass);
    void OnRep_FlareClass();
    bool IsTerrainScannerEquipped();
    bool HasPickedUpItem();
    bool HasDrink();
    int32 GetTotalAmmoLeft();
    class ARecallableSentryGunItem* GetRecallableSentryGunItem();
    class AItem* GetOrCreateUnlistedItem(TSubclassOf<class AItem> ItemType);
    class AItem* GetItem(EItemCategory Category);
    class AItem* GetEquippedItem();
    class AActor* GetCarriedItem();
    bool EquipCategory(EItemCategory Category);
    void Equip(class AItem* Item);
    void EndGrenadeThrow();
    void DropPickedupItem();
    void Client_Resupply(float percentage);
    void AnimationNotify2();
    void AnimationNotify1();
    void All_PlayThrowMontage(class AActor* Item);
    void AddItemClass(TSubclassOf<class AItem> itemClass);
};

class UInventoryItemUpgrade : public UStandardItemUpgrade
{
    EInventoryItemUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EInventoryItemUpgradeType upgradeType);
};

class UInventoryList : public UDataAsset
{
    TSoftObjectPtr<UTexture2D> IconWeaponSetOutline;
    TSoftObjectPtr<UTexture2D> IconWeaponSetFill;
    TSoftObjectPtr<UMaterialInterface> LaserpointerMarkerMaterial;
    TSoftObjectPtr<UMaterialInterface> LaserpointerBeamMaterial;
    class UItemID* LaserPointerItem;
    class UItemID* TerrainScannerItem;
    class UItemID* ResupplyItem;
    TArray<class UItemID*> PrimaryWeapons;
    TArray<class UItemID*> SecondaryWeapons;
    TArray<class UItemID*> TraversalTools;
    TArray<class UItemID*> ClassTools;
    TArray<class UItemID*> Armors;
    TArray<class UItemID*> Flares;
    TArray<class UItemID*> Grenades;
    TArray<class UItemID*> MiningTools;

    class UItemID* GetPreviousUnlockedItem(class UObject* WorldContextObject, EItemCategory Category, class UItemID* currentItem);
    class UItemID* GetPreviousItem(EItemCategory Category, class UItemID* currentItem);
    int32 GetNumberOfItems(EItemCategory Category);
    class UItemID* GetNextUnlockedItem(class UObject* WorldContextObject, EItemCategory Category, class UItemID* currentItem);
    class UItemID* GetNextItem(EItemCategory Category, class UItemID* currentItem);
    TArray<class TSubclassOf<AActor>> GetLoadedItemListFiltered(EItemCategory Category, FGetLoadedItemListFilteredFilter Filter);
    TArray<class TSubclassOf<AActor>> GetLoadedItemList(EItemCategory Category);
    TArray<class UItemID*> GetItemList(EItemCategory Category);
    int32 GetItemIndex(EItemCategory Category, class UItemID* Item);
    TArray<class UItemID*> GetAllItemsList();
    void CheckForInventoryAchievements(class UObject* WorldContextObject);
};

class UItemAggregator : public UActorComponent
{
    FText CounterText;

    void UnbindAllEvents();
};

class UItemAquisitionBase : public UDataAsset
{
};

class UItemAquisitionSource : public USavableDataAsset
{
};

class UItemBlueprintReward : public UUnlockReward
{
    class UItemID* ItemID;

};

class UItemCharacterAnimationSet : public UDataAsset
{
    class UAnimSequence* FP_Idle;
    class UAnimMontage* FP_InspectWeapon;
    class UAnimSequence* FP_Walk;
    class UAnimSequence* FP_Sprint;
    class UAnimMontage* FP_JumpStart_Montage;
    class UAnimSequence* FP_JumpStart;
    class UAnimSequence* FP_JumpLoop;
    class UAnimSequence* FP_JumpLand;
    class UAnimSequence* FP_JumpLand_Aim;
    class UAnimSequence* FP_Downed;
    class UBlendSpace1D* TP_LookUpDown;
    class UBlendSpace1D* TP_LookUpDown_Aim;
    class UAnimSequence* TP_Sprint;
    class UAnimSequence* TP_Idle;
    class UAnimSequence* TP_Idle_Aim;
    class UAnimSequence* TP_LookForward;
    class UAnimSequence* TP_LookForward_Aim;
    class UAnimSequence* TP_JumpStart;
    class UAnimSequence* TP_JumpStart_Aim;
    class UAnimSequence* TP_JumpLoop;
    class UAnimSequence* TP_JumpLoop_Aim;
    class UAnimMontage* TP_JumpLand;
    class UAnimSequence* TP_Walk_Forward;
    class UAnimSequence* TP_Walk_Forward_Aim;
    class UAnimSequence* TP_Run_Forward;
    class UAnimSequence* TP_Run_Forward_Aim;
    class UAnimSequence* TP_Walk_Right;
    class UAnimSequence* TP_Walk_Right_Aim;
    class UAnimSequence* TP_Run_Right;
    class UAnimSequence* TP_Run_Right_Aim;
    class UAnimSequence* TP_Walk_Left;
    class UAnimSequence* TP_Walk_Left_Aim;
    class UAnimSequence* TP_Run_Left;
    class UAnimSequence* TP_Run_Left_Aim;
    class UAnimSequence* TP_Walk_Back;
    class UAnimSequence* TP_Walk_Back_Aim;
    class UAnimSequence* TP_Run_Back;
    class UAnimSequence* TP_Run_Back_Aim;
    class UAnimSequence* TP_Revived;
    class UAnimSequence* TP_Downed;
    class UAnimSequence* TP_Downed_Loop;
    FItemLoadoutAnimations LoadoutAnimations;
    float CameraOffset;
    class UItemCharacterAnimationSet* ParentSet;

};

class UItemData : public UPrimaryDataAsset
{
    class UItemID* ItemID;
    class UTexture2D* IconLine;
    class UTexture2D* IconBG;
    class UTexture2D* IconDetailed;
    TSoftObjectPtr<UTexture2D> PreviewImage;
    TSoftClassPtr<AActor> PreviewActor;
    FText Name;
    FText Category;
    FText Description;
    int32 CreditCost;
    TMap<UResourceData*, float> ResourceCost;
    int32 RequiredCharacterLevel;

    class UTexture2D* GetPreviewImage(class UObject* WorldContext);
    TSubclassOf<class AActor> GetPreviewActorClass();
    TArray<FCraftingCost> GetCraftingCost();
};

class UItemDispenserAnimInstance : public UAnimInstance
{
    bool IsOpen;
    bool HasItem;

};

class UItemID : public USavableDataAsset
{
    TSoftClassPtr<AActor> Item;
    class UPlayerCharacterID* ItemOwner;
    EItemCategory ItemCategory;

    bool IsItemClassChildOf(TSubclassOf<class AActor> InParentClass);
    class UItemData* GetItemData();
    TSubclassOf<class AItem> GetItemClass();
    EItemCategory GetItemCategory();
    class AItem* GetItem();
    TArray<class UItemSkin*> GetAllSkins();
    TSubclassOf<class AActor> GetActorClass();
    class AActor* GetActor();
};

class UItemPlacerAggregator : public UItemAggregator
{
    TArray<TWeakObjectPtr<AActor>> IgnoreActors;
    FItemPlacerAggregatorOnMarkerSpawned OnMarkerSpawned;
    void MarkerDelegate(class AItemMarker* Marker);
    FItemPlacerAggregatorOnPlacementChanged OnPlacementChanged;
    void PlacementUpdatedDelegate(bool InPlacementValid, const FTransform& InPlacement);
    float PlacementDistance;
    float MaxOffsetZ;
    float MinOffsetZ;
    float ItemHeight;
    class UDialogDataAsset* ShoutOnPlaced;
    TSubclassOf<class AItemMarker> MarkerType;
    bool CanOnlyPlaceOnTerrain;
    FGameplayTagQuery ExcludeTags;
    TArray<class TSubclassOf<AActor>> InvalidAroundActors;
    float InvalidAroundSize;
    class AItemMarker* PlacementMarker;
    class AItem* Item;
    bool bIsPlacementActive;
    bool bIsMarkerHidden;
    bool bIsMarkerValid;
    bool bCanPlaceMarker;
    FTransform LastPlacement;

    void ToggleValid(bool Valid);
    void TogglePlacement(bool Inactive);
    void ToggleMarkerHidden(bool InHidden);
    void PlacementUpdatedDelegate__DelegateSignature(bool InPlacementValid, const FTransform& InPlacement);
    void MarkerDelegate__DelegateSignature(class AItemMarker* Marker);
    void GetPlacementEx(FTransform& Placement, bool& OutValidLocation, bool& OutValidMarker);
    bool GetPlacement(FTransform& Placement);
    void ClearIgnoredActors();
    void AddIgnoredActor(class AActor* InActor);
};

class UItemRackComponent : public USingleUsableComponent
{
    FItemRackComponentOnHasItemChanged OnHasItemChanged;
    void ItemRackDelegate(bool HasItem);
    class UUsableComponent* UsableComponent;
    class USceneComponent* AttachToComponent;
    FName AttachPointSocket;
    bool AttachToSocket;
    int32 RackKey;
    class URackableItemComponent* Item;

    void RackItem(class AActor* Item, class APlayerCharacter* Character);
    void OnRep_Item(class URackableItemComponent* oldItem);
    void InitializeRackedItem(class URackableItemComponent* rackable);
    bool HasRackedItem();
    bool CanRackItem(class AActor* Item);
};

class UItemRefundList : public UDataAsset
{
    bool ResetListOnSave;
    TArray<TSoftObjectPtr<UObject>> Items;
    TMap<class FGuid, class FItemRefundListItem> ItemsToRefund;

};

class UItemSettings : public UDataAsset
{
    TArray<class UItemRefundList*> ItemRefunds;
    TMap<class UItemID*, class UItemData*> ItemData;

};

class UItemSkin : public USavablePrimaryDataAsset
{
    FItemSkinOnSkinUnlocked OnSkinUnlocked;
    void ItemSkinSignature(class UItemSkin* Skin);
    FItemSkinOnSkinEquipped OnSkinEquipped;
    void ItemSkinEquipSignature(const class UItemSkin* Skin);
    FItemSkinOnSkinUnequipped OnSkinUnequipped;
    void ItemSkinEquipSignature(const class UItemSkin* Skin);
    class UItemAquisitionBase* Aquisition;
    FText SkinName;
    class UItemSkinSet* SkinSet;
    class UDynamicIcon* DynamicIcon;
    class USkinEffect* SkinEffect;
    class UItemID* OwningItem;
    class UPlayerCharacterID* OwningCharacter;

    bool Unlock(class UObject* WorldContext, class UItemID* ItemID, bool broadcast);
    void Receive_SkinItem(class UObject* Skinnable);
    void Lock(class UObject* WorldContext, class UItemID* ItemID);
    void ItemSkinSignature__DelegateSignature(class UItemSkin* Skin);
    void ItemSkinEquipSignature__DelegateSignature(const class UItemSkin* Skin);
    bool IsUnlockedFromStart();
    bool IsLocked(class UObject* WorldContext, class UItemID* skinnableID);
    bool IsEquippedOnItem(class UItemID* ItemID, class AFSDPlayerState* PlayerState);
    EItemSkinType GetSkinType();
    FText GetSkinName();
    class UItemID* GetOwningItem();
    class UPlayerCharacterID* GetOwningCharacter();
    class UMaterialInstanceDynamic* CreateIcon(class UObject* Owner);
};

class UItemSkinFunctionLibrary : public UBlueprintFunctionLibrary
{
};

class UItemSkinSchematicCollection : public UDataAsset
{
    class UItemSkin* Skin;
    class USchematicCategory* Category;
    class USchematicPricingTier* PricingTier;
    class USchematicRarity* Rarity;
    EItemSkinCollectionType CollectionType;
    EItemSkinCollectionType LastGeneratedCollectionType;
    TArray<class USchematic*> Schematics;

};

class UItemSkinSet : public UDataAsset
{
    bool ColorIsLockedToSet;
    FText SkinName;
    class UDynamicIcon* PaintJobDynamicIcon;
    class UDynamicIcon* FrameworkDynamicIcon;

};

class UItemSkinSettings : public UDataAsset
{
    class UItemSkinSet* StockSet;
    TArray<class UItemSkin*> LoadedSkins;
    TArray<class UItemSkin*> FindableSkins;

};

class UItemTemperatureDamageCondition : public UDamageCondition
{
    int32 HeatThreshold;
    bool MustBeUnderThreshold;

};

class UItemUpgrade : public USavableDataAsset
{
    FItemUpgradeOnCrafted OnCrafted;
    void ItemUpgradeSignature(class UItemUpgrade* Upgrade);
    FItemUpgradeOnEquipped OnEquipped;
    void ItemUpgradeSignature(class UItemUpgrade* Upgrade);
    FItemUpgradeOnUnequipped OnUnequipped;
    void ItemUpgradeSignature(class UItemUpgrade* Upgrade);
    FText Name;
    FText Description;
    int32 Cost;
    bool UseOldCost;
    EUpgradeTiers UpgradeTier;
    EUpgradeClass upgradeClass;
    class UItemUpgradeCategory* Category;
    TMap<UResourceData*, float> UpgradeCraftingCost;
    TArray<class UResourceData*> ResourceCost;
    TArray<class UItemUpgradeElement*> Elements;
    TArray<FItemUpgradeStatText> StatTexts;

    void UnequipUpgrade(TSubclassOf<class AActor> itemClass, class AFSDPlayerState* PlayerState);
    void ItemUpgradeSignature__DelegateSignature(class UItemUpgrade* Upgrade);
    TArray<FItemUpgradeStatText> GetUpgradeStatTexts();
    FText GetUpgradeName(class UItemUpgrade* Upgrade);
    TArray<FCraftingCost> GetUpgradeCost();
    FString GetSourceName();
    FUpgradeValues GetGenericUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, class UItemUpgrade* upgradeClass);
    float GetCreditsCost();
    void EquipUpgrade(TSubclassOf<class AActor> itemClass, class AFSDPlayerState* PlayerState);
};

class UItemUpgradeCategory : public UDataAsset
{
    FText CategoryName;
    FText CategoryDescription;
    class UTexture2D* CategoryIcon;
    FColor CategoryTint;

};

class UItemUpgradeCondition : public UObject
{
};

class UItemUpgradeElement : public UDataAsset
{

    bool ElementOf(class UItemUpgrade* upg);
};

class UItemUpgradePreviewComponent : public UActorComponent
{
    FItemUpgradePreviewComponentOnPreviewUpgradeChanged OnPreviewUpgradeChanged;
    void ItemUpgradeDelegate(class UItemUpgrade* PreviewUpgrade);
    class UItemUpgrade* PreviewUpgrade;

    void SetPreviewUpgrade(class UItemUpgrade* InUpgrade);
    void RefreshPreviewUpgrade();
    void ItemUpgradeDelegate__DelegateSignature(class UItemUpgrade* PreviewUpgrade);
};

class UItemsBar : public UFSDUserWidget
{
    TSubclassOf<class UItemsBarIcon> DefaultItemWidget;
    bool bShowSupplyItem;
    TArray<class UItemsBarIcon*> ItemIcons;
    class UItemsBarIcon* SupplyIcon;
    class UItemsBarIcon* SelectedIcon;

    void OnSupplyItemUnequipped(class UItemsBarIcon* ItemIcon);
    void OnSupplyItemEquipped(class UItemsBarIcon* ItemIcon);
    void OnSupplyItemAdded(class UItemsBarIcon* ItemIcon);
    void OnItemUnequipped(class UItemsBarIcon* ItemIcon);
    void OnItemsLoaded();
    void OnItemEquipped(class UItemsBarIcon* ItemIcon);
    void OnItemClicked();
    void OnItemAdded(class UItemsBarIcon* ItemIcon);
    void OnClear();
    void ItemEquipped(class AItem* NewItem);
    void ItemClicked(class AItem* NewItem);
};

class UItemsBarIcon : public UUserWidget
{
    bool Selected;
    class UItemsBar* ItemBar;
    class APlayerCharacter* Character;
    class AItem* Item;
    int32 Index;

    void OnUnselect();
    void OnSelect();
    void OnInit();
};

class UJellyBreederAnimInstance : public UFlyingBugAnimInstance
{
    bool ReadyToSpawnEggs;

};

class UJellyEggAnimInstance : public UAnimInstance
{
    FVector force;

};

class UJellyFishAnimInstance : public UEnemyAnimInstance
{
    float HorizontalAngle;
    float VerticalSpeed;

};

class UJetBootsMovementComponent : public UActorComponent
{
    FJetBootsMovementComponentFuelUpdated FuelUpdated;
    void JetBootsDelegate(float jetFuel, bool overHeated);
    FJetBootsMovementComponentFuelUpdatedNonLocal FuelUpdatedNonLocal;
    void JetBootsDelegate(float jetFuel, bool overHeated);
    class UJetBootsSettings* Settings;
    class USoundCue* UseSound;
    class USoundCue* DeactivatedSound;
    class USoundCue* OverHeatSound;
    class UAudioComponent* UseAudioComponent;
    class UAudioComponent* OverHeatAudioComponent;
    class UAudioComponent* DeactivatedAudioComponent;
    class UAudioComponent* TP_UseAudioComponent;
    class UAudioComponent* TP_OverHeatAudioComponent;
    class UAudioComponent* TP_DeactivatedAudioComponent;
    class UNiagaraSystem* FootParticles;
    class UFXSystemAsset* FootParticlesFP;
    FName FootSocketNameLeft;
    FName FootSocketNameRight;
    class USkeletalMesh* FootAttachMesh;
    class USkeletalMeshComponent* LFootAttachMeshComponent;
    class USkeletalMeshComponent* RFootAttachMeshComponent;
    class UNiagaraComponent* LeftFootParticles;
    class UNiagaraComponent* RightFootParticles;
    class UFXSystemComponent* FPFootParticles;
    class APlayerCharacter* Character;
    float FromJumpDelay;
    float FromTerrainStartDelay;
    float OverHeatAtPercent;
    float AddPlayerAirVelocityToThrowFactor;
    float CurrentJetFuel;
    bool IsUsing;
    bool isFromTakeOff;
    bool overHeated;

    void Server_SetOverheated(bool Current);
    void Server_SetIsUsing(bool Current, bool last, bool isFromTakeOff);
    void Server_SetCurrentJetFuel(float Current);
    void RemoveJetBoots();
    void Receive_OnTakeOffLocal();
    void Receive_OnOverheatedChanged(bool overHeated);
    void Receive_OnDestroy();
    void Receive_OnCharacterSet(class APlayerCharacter* Player);
    void Receive_OnActiveChangedServer(bool IsActive, bool fromTakeOff);
    void Receive_OnActiveChangedNonLocal(bool IsActive, bool fromTakeOff);
    void Receive_OnActiveChangedLocal(bool IsActive, bool fromTakeOff);
    void OnStateChanged(ECharacterState State);
    void OnRep_OverHeated(bool lastOverheated);
    void OnRep_IsUsing(bool lastUsing);
    void OnRep_CurrentJetFuel();
    void OnPlayerCharacterHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnJumpReleased();
    void OnJumpPressed();
    void OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void Client_SetIsUsing(bool IsUsing);
};

class UJetBootsSettings : public UDataAsset
{
    float JetForce;
    float AirControlSpeed;
    float MaxAirSpeed;
    float MaxJetFuel;
    float JetFuelCost;
    float JetFuelRechargeRate;
    float JetFuelRechargeDelay;
    float OutOfFuelRechargeDelay;

};

class UJettyBootSettings : public UDataAsset
{
    TArray<FJettyBootSetting> LevelSettings;

    FJettyBootSetting GetLevelSetting(int32 InLevel);
};

class UJettyBootUsableComponent : public USingleUsableComponent
{
    int32 CreditPrice;

    bool DeductCredits(class APlayerCharacter* User, class UMissionStat* InCreditCounter);
};

class UJettyBootsArcadeWidget : public UUserWidget
{
};

class UKPISettings : public UDataAsset
{
    FGDMissionStats MissionStats;
    FGDMilestones Milestones;
    FGDPerks perks;

};

class UKeepCleaningStrategy : public UStandardExitStrategy
{
};

class UKeepInsideWorld : public UActorComponent
{
    TArray<TWeakObjectPtr<AActor>> ActorsToKeepInsideWorld;
    int32 IteratorIndex;

    void UnregisterForKeepInsideWorld(class UObject* WorldContextObject, class AActor* Actor);
    void RegisterForKeepInsideWorld(class UObject* WorldContextObject, class AActor* Actor);
};

class UKeyBindingSettings : public UDataAsset
{
    TArray<FCustomKeySetting> KeyboardMouseButtons;
    TArray<FCustomKeySetting> ControllerButtons;

};

class UKillEnemiesObjective : public UObjective
{
    int32 EnemyCount;
    int32 ExtraEnemies;
    class UDebrisPositioning* Positioning;
    class UEnemyDescriptor* EnemyTarget;
    int32 EnemiesKilled;
    int32 EnemiesToKill;

    void RegisterTargetSpawned(class APawn* Target);
    void ReceiveTargetKilled(class UHealthComponentBase* Health);
    void OnTargetKilled(class UHealthComponentBase* Health);
    void OnRep_EnemiesToKill(int32 prevAmount);
    void OnRep_EnemiesKilled(int32 prevAmount);
};

class UKillNearbyCreaturePerkComponent : public UFloatPerkComponent
{
    TSoftClassPtr<AActor> EnemyClass;

};

class UKnockbackDamageBonus : public UDamageBonusBase
{
    float KnockBackHorizontalForce;
    float KnockBackVerticalForce;
    float VerticalScaleMultiplier;
    float HorizontalScaleMultiplier;
    float MinVerticalPower;
    float MinHorizontalPower;
    float OptimalDistance;
    bool AllowForIncapacitadedPlayes;
    bool KnockThowardsInstigator;
    bool ScalePowerToInstigatorDistance;
    bool AbsoluteKnockBack;

};

class ULegacySettings : public UDataAsset
{
    TArray<TSoftObjectPtr<USkeletalMesh>> ArmorMeshes;

};

class ULevelGenerationCarverComponent : public UPrimitiveComponent
{
    class USTLMeshCarver* MeshCarver;
    class UStaticMesh* ConvexCarver;
    class UStaticMeshCarver* StaticMeshCarver;
    class UTerrainMaterialBase* TerrainMaterial;
    ECarveFilterType Filter;
    float ConvexExpensiveNoise;
    CarveOptionsCellSize CarveCellSize;
    bool PreviewEnabled;
    bool CarvingDisabled;
    bool DestroyOwnerOnCarve;
    bool DestroySelfAndChilded;
    bool SelfActivate;

    void OnCarvedCallback();
};

class ULevelGenerationCarverComponent2 : public UPrimitiveComponent
{
    TSubclassOf<class ACSGBuilder> Carver;
    bool CarvingDisabled;
    int32 PreviewSeed;
    FBakeSettings CarverSettings;
    bool SelfActivate;
    class UCSGPreviewComponent* PreviewComponent;

};

class ULevelGenerationDebris : public UActorComponent
{
    class UDebrisBase* Debris;
    class UObject* Influencer;
    float range;
    bool SelfActivate;

};

class ULightStrobingComponent : public UActorComponent
{
    FLightStrobeChannel DefaultChannel;
    float PhotosensitiveMultiplier;
    bool AutoSetup;

    FLightStrobeChannel GetChannel(int32 Index);
    void AddStrobeChannel(const FLightStrobeChannel& Channel);
    void AddMesh(class UMeshComponent* Mesh, int32 Channel);
    void AddMaterial(class UMaterialInstanceDynamic* Mid, int32 Channel);
    void AddLight(class UPointLightComponent* Light, int32 Channel);
};

class ULimbDismembermentList : public UDataAsset
{
    TArray<FName> Bones;

};

class ULineCutterProjectileUpgrade : public UStandardItemUpgrade
{
    ELineCutterProjectileUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> Item, ELineCutterProjectileUpgradeType upgradeType);
};

class ULineCutterUpgrade : public UStandardItemUpgrade
{
    ELineCutterUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> Item, ELineCutterUpgradeType upgradeType);
};

class ULineOfSightValidator : public UTargetValidator
{
};

class ULineSegmentCarverComponent : public UGenerationComponent
{
    TArray<FLineSegmentCarverPoint> LinePoints;
    bool Visible;
    int32 Layer;
    float Cielingheight;
    float FloorDepth;
    class UFloodFillSettings* CeilingNoiseOverride;
    class UFloodFillSettings* WallNoiseOverride;
    class UFloodFillSettings* FloorNoiseOverride;
    bool UseDetailNoise;

};

class ULineSegmentFillerComponent : public UGenerationComponent
{
    TArray<FLineSegmentFillerPoint> LinePoints;
    bool Visible;
    class UFloodFillSettings* NoiseOverride;
    FRandRange RangeScale;
    FRandRange NoiseRangeScale;

};

class ULineSpikeAttack : public USpecialAttackComponent
{
    class UMaterialInterface* TentacleMaterial;
    class UMaterialInstance* ActiveMaterial;
    TArray<TWeakObjectPtr<UNiagaraComponent>> ActiveParticles;
    class UNiagaraSystem* TentacleImpactParticles;
    class UNiagaraSystem* StartWaveParticles;
    class USoundCue* TentacleImpactSound;
    class USoundCue* TentacleExitSound;
    class USoundCue* StartWaveSound;
    class UNiagaraComponent* Tentacles;
    TArray<class ULineSpikeTaskBase*> Sequence;
    TArray<class AActor*> Children;
    int32 SequenceLoops;
    TSubclassOf<class AActor> SpikeClass;
    bool TentaclesBurried;
    float MaxStepUpheight;
    float firstSpikeDelay;
    float firstSpikeExtraDistance;
    float MaxDistanceToGround;
    float DistanceBetweenSpikes;
    float TimeBetweenSpikes;
    float TentacleStretchPower;
    float TentacleSearchDistance;
    float TentacleInGroundOffset;
    int32 MinSpikeCount;
    int32 MaxFails;

    void OnRep_TentaclesBurried();
    void All_PlayEffects();
};

class ULineSpikeTaskBase : public UObject
{
};

class ULoadoutFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetCurrLoadout(class UObject* WorldContextObject, class UPlayerCharacterID* PlayerId, FLoadoutCopy newLoadout);
    void RandomizeWeaponLoadout(class UObject* WorldContextObject, class UPlayerCharacterID* PlayerId, int32 loadoutIndex);
    void RandomizeAllRandomWeaponLoadout(class APlayerCharacter* Player);
    FLoadoutCopy GetCurrentLoadout(class UObject* WorldContextObject, class UPlayerCharacterID* PlayerId);
    void CopyPasteWeaponLoadout(class UObject* WorldContextObject, class UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex);
};

class ULocalizationFunctionLibrary : public UBlueprintFunctionLibrary
{

    TArray<FLocalizedLanguageInfo> GetLocalizedLanguages();
};

class ULockCountDamageCondition : public UDamageCondition
{
    int32 MinLockCount;
    bool UseTotalLockCount;

};

class ULockCountSTEBonus : public UDamageBonusBase
{
    int32 MinLockCount;
    bool UseTotalLockCount;
    TSubclassOf<class UStatusEffect> StatusEffect;

};

class ULockCountSTEBonusUpgrade : public UItemUpgrade
{
    TSubclassOf<class UStatusEffect> StatusEffect;
    bool UseTotalLockCount;
    float Amount;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, TSubclassOf<class UStatusEffect> StatusEffect);
};

class ULockOnTrackingWidget : public UActorTrackingWidget
{

    void OnLockOn(int32 numberOfLockOnsOnThisTarget, int32 totalNumberOfLockOns);
    void OnFireComplete(int32 numberOfLockOnsOnThisTarget);
    void CleanUpWidget(bool showFade);
};

class ULockOnWeaponUpgrade : public UStandardItemUpgrade
{
    ELockOnWeaponUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, ELockOnWeaponUpgrades upgradeType);
};

class ULocksRemainingDamageCondition : public UDamageCondition
{
    int32 MaxLocksRemaining;

};

class ULookingAtContentWidget : public UUserWidget
{
    TWeakObjectPtr<class AActor> CurrentTarget;
    TWeakObjectPtr<class UPawnAfflictionComponent> CurrentTargetAfflictions;
    TWeakObjectPtr<class USimpleObjectInfoComponent> CurrentTargetInfo;
    TScriptInterface<class IHealth> CurrentTargetHealth;
    TWeakObjectPtr<class UHackingUsableComponent> CurrentHackingComponent;
    TWeakObjectPtr<class UPetComponent> CurrentPetComponent;
    bool bWeakPointHit;

    void UpdateCurrentTarget(float DeltaSeconds, class AActor* InTargetActor, const TScriptInterface<class IHealth>& InTargetHealthComponent);
    void RegisterWeakPointHit();
    void ReceiveUpdateTarget(class AActor* InCurrentTarget, float DeltaTime);
    void ReceiveNewTarget(class AActor* InCurrentTarget);
    FText GetTargetOwnerName();
    FText GetTargetName();
    float GetTargetHealthPct();
};

class ULookingAtWidget : public UUserWidget
{
    float TargetSelectDuration;
    float TargetLostDuration;
    TWeakObjectPtr<class APlayerCharacter> Character;
    TWeakObjectPtr<class UCharacterSightComponent> CharacterSight;
    TWeakObjectPtr<class AActor> CurrentTarget;
    TWeakObjectPtr<class UPawnAfflictionComponent> CurrentTargetAfflictions;
    TScriptInterface<class IHealth> CurrentTargetHealth;
    bool CanCurrentTargetTakeDamage;
    float TargetLostTime;
    bool bTargetSet;

    void SetCurrentTarget(class AActor* NewActor, const TScriptInterface<class IHealth>& HealthComponent, float OverrideTargetLostTime);
    void ResetCurrentTarget();
    void ReceiveUpdateTarget(class AActor* InCurrentTarget, float DeltaTime);
    void ReceiveTargetLost();
    void ReceiveNewTarget(class AActor* InCurrentTarget);
    bool IsValidTarget(class AActor* TargetActor, const TScriptInterface<class IHealth>& TargetHealth);
    bool IsBossFight(const TScriptInterface<class IHealth>& Health);
    class UHealthComponentBase* GetLookingAtHealth();
    class AActor* GetLookingAtActor();
    bool GetCharacterTemperatureEffect(float& TemperatureEffect);
};

class ULoreScreenMasterWidget : public UUserWidget
{
    FText PageName;
    TSoftObjectPtr<UTexture2D> SolidImage;
    TSoftObjectPtr<UTexture2D> TransparentImage;
    FLinearColor BackgroundColor;

};

class UMOD_MakeEliteEnemy : public UActorComponent
{
};

class UMaggotAnimationSharingStateProcessor : public UAnimationSharingStateProcessor
{
};

class UMakeAttackableStatusEffectItem : public UStatusEffectItem
{
    float AttackCostModifier;
    TSubclassOf<class UAttackerPositioningComponent> ComponentClass;

};

class UMasteryIconWidget : public UUserWidget
{

    void ReceiveUnlocked();
};

class UMaterialDamageMultiplierCondition : public UDamageCondition
{
    FFloatInterval MultiplierRangeRequired;
    bool Invert;

};

class UMaterialSkinEffect : public USkinEffect
{
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;

};

class UMeleeAttackComponent : public UDamageAttackComponent
{
    TArray<class UAnimMontage*> Montages;
    class UTargetValidator* HitValidator;
    bool CenterOnTarget;
    TArray<class UAttackEffect*> AttackEffects;
    FMeleeAttackComponentOnAttackStartedEvent OnAttackStartedEvent;
    void MeleeAttackDelegate();
    FMeleeAttackComponentOnDamageAppliedEvent OnDamageAppliedEvent;
    void MeleeAttackDelegate();
    FMeleeAttackComponentOnAttackEndedEvent OnAttackEndedEvent;
    void MeleeAttackDelegate();

    class UAnimMontage* SelectMontage();
    void OnPerformAttack(FName Name);
    void OnMontageEnded(class UAnimMontage* Montage, bool interrupted);
};

class UMeshCarveAttackEffect : public UAttackEffect
{
    float ExpensiveNoise;
    class UStaticMesh* CarveMesh;
    float CarverOffset;
    FRotator CarverOrientation;
    FVector CarverScale;
    FName Socket;

};

class UMeshCarverComponent : public UStaticMeshComponent
{
    class UTerrainMaterialBase* TerrainMaterial;
    ECarveFilterType Filter;
    float ExpensiveNoise;
    CarveOptionsCellSize CarverSize;

    void Carve();
};

class UMessagingSubSystem : public UGameInstanceSubsystem
{
    FMessagingSubSystemOnNewMessage OnNewMessage;
    void NewMessageSig(const FFSDChatMessage& Message);

    FString MessageSenderIdAsString(const FFSDChatMessage& Msg);
    float MessageAge(const FFSDChatMessage& Msg);
    void LatestMessages(int32 Num, bool resetAge, TArray<FFSDChatMessage>& OutMessages);
    void ClearMessages();
};

class UMicroMissileLauncherAnimInstance : public UAnimInstance
{
    class AMicroMissileLauncher* Weapon;

    void OnMontageEndedInternal(class UAnimMontage* Montage, bool interrupted);
};

class UMicroMissileLauncherUpgrade : public UStandardItemUpgrade
{
    EMicroMissileLauncherUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EMicroMissileLauncherUpgrades upgradeType);
};

class UMicrowavegunUpgrade : public UStandardItemUpgrade
{
    EMicrowaveGunUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EMicrowaveGunUpgrade upgradeType);
};

class UMilestoneAsset : public UDataAsset
{
    FMilestoneAssetOnMilestoneClaimed OnMilestoneClaimed;
    void OnMilestoneClaimed(class UMilestoneAsset* Milestone, int32 ClaimedTier);
    FMilestoneAssetOnMilestoneReached OnMilestoneReached;
    void OnMilestoneReached(class UMilestoneAsset* Milestone, int32 ReachedTier);
    FGuid SavegameID;
    class UTexture2D* LargeImage;
    FText FormattedTitle;
    int32 FormattedValueOffset;
    bool CountValueAsTotal;
    class UMissionStat* TrackingStat;
    class UPlayerCharacterID* TrackingCharacterID;
    TArray<FMilestoneTier> Tiers;
    int32 LastTierReached;
    bool bPendingMilestoneReached;

    TArray<class UMilestoneAsset*> SortMilestonesByProgress(class UObject* WorldContext, TArray<class UMilestoneAsset*>& Milestones);
    void OnMissionStatChanged(class UObject* WorldContext, class UMissionStat* Stat, float Value);
    bool IsCompleted(class UObject* WorldContext);
    bool IsClaimable(class UObject* WorldContext);
    FText GetTitleForTier(int32 Tier);
    FText GetTitle(class UObject* WorldContext);
    int32 GetNextPerkPointsReward(class UObject* WorldContext);
    void GetCurrentProgress(class UObject* WorldContext, int32& Tier, float& Progress, float& CurrentCount, float& TargetCount);
    int32 GetClaimedTier(class UObject* WorldContext);
    bool GetClaimedProgress(class UObject* WorldContext, int32& Tier, float& Progress, float& CurrentCount, float& TargetCount);
    class UTexture2D* GetCategoryIcon();
    void ClearPendingMilestoneReached();
    int32 ClaimNextTier(class UObject* WorldContext);
};

class UMineralTradeData : public UDataAsset
{
    TArray<FText> MineralTradeTickerTexts;

};

class UMinersManual : public UDataAsset
{
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> BasicsPages;
    TMap<int32, FText> BasicsPageHeaders;
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> CombatPages;
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> ExtraMissionPages;
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> ResourcePages;
    TArray<class UEnemyMinersManualData*> Enemies;
    TArray<TSoftObjectPtr<UBiome>> BiomeReferences;
    TArray<TSoftObjectPtr<UMissionTemplate>> MissionReferences;
    TArray<FDamageTypeDescription> DamageTypeInfo;
    TMap<int32, FMissionTypeDescription> MissionDescriptions;
    TMap<int32, FBiomeFeatures> BiomeFeatureDescriptions;

    bool IsObjectInMinersManual(class UObject* WorldContext, class UObject* Object);
    bool IsMissionUnlocked(class UObject* WorldContext, class UMissionTemplate* mission);
    bool IsBiomeUnlocked(class UObject* WorldContext, class UBiome* Biome);
    TArray<FText> GetUnlockedCreatureLore(class UObject* WorldContext, class UEnemyMinersManualData* enemy, float& completePercentage);
    TArray<TSoftObjectPtr<UMissionTemplate>> GetMissions();
    void GetMissionInfo(int32 MissionTypeIndex, FText& InfoHeadline, FText& InfoDescription, TArray<FMissionStepDescription>& Steps);
    int32 GetEnemyKillCount(class UObject* WorldContext, FGuid EnemyID);
    TArray<class UEnemyMinersManualData*> GetEnemiesSorted();
    TArray<class UEnemyMinersManualData*> GetEnemies();
    void GetDamageTypeDescriptions(TArray<EDamageType> damageTypes, TArray<FDamageTypeDescription>& Icon);
    void GetDamageTypeDescription(EDamageType damageTypes, FDamageTypeDescription& Icon);
    TArray<TSoftObjectPtr<UBiome>> GetBiomes();
    TArray<class UMinersManualData*> GetBiomeFeatures(int32 BiomeIndex);
    TArray<FDamageTypeDescription> GetAllDamageTypeDescriptions();
};

class UMinersManualData : public UDataAsset
{
    FSoftMinersManualDescription Description;

    void GetText(FText& Headline, FText& richText);
    class UTexture2D* GetFrontImage();
    class UTexture2D* GetBackgroundImage();
};

class UMiniTimerAction : public UTickableActionBase
{
    FMiniTimerActionCompleted Completed;
    void TickDelegate(float DeltaTime, float NormalizedTime);
    FMiniTimerActionOnTick OnTick;
    void TickDelegate(float DeltaTime, float NormalizedTime);

    void TickDelegate__DelegateSignature(float DeltaTime, float NormalizedTime);
    class UMiniTimerAction* MiniTimer(class UObject* WorldContext, float InDuration);
};

class UMiningPodAnimInstance : public UAnimInstance
{
    EMiningPodRampState rampState;
    EMiningPodState PodState;

};

class UMissionComplexity : public UDataAsset
{
    FText Title;
    float HazardBonus;
    int32 NumberOfDots;
    FGuid SavegameID;

};

class UMissionDNA : public UObject
{
    float MissionScale;
    float Weight;
    class UMissionComplexity* Complexity;
    class UMissionDuration* Duration;
    TArray<FGameplayTagQuery> RoomQueries;

    float GetDurationHazardBonus();
    float GetComplexityHazardBonus();
};

class UMissionDuration : public UDataAsset
{
    FText Title;
    float HazardBonus;
    int32 NumberOfDots;
    FGuid SavegameID;

};

class UMissionFunctionLibrary : public UBlueprintFunctionLibrary
{

    FDateTime GetGlobalMissionBaseTime();
};

class UMissionGenerationManager : public UGameInstanceSubsystem
{
    TMap<int32, FGeneratedMissionGroup> AllMissionGroups;
    bool ResetSelectedMission;

    TArray<class UGeneratedMission*> GetMissions(int32 Seed);
    class UGeneratedMission* GetMissionFromSeeds(int32 GlobalSeed, int32 MissionSeed);
    TArray<class UGeneratedMission*> GetAvailableMissionsWithSeasonContentCheck(bool HasOptedOutOfSeasonContent);
    TArray<class UGeneratedMission*> GetAvailableMissions();
};

class UMissionManager : public UActorComponent
{
    TArray<class URunningMissionBP*> RunningBlueprints;

    void OnMatchStarted();
};

class UMissionMutator : public UDataAsset
{
    TSubclassOf<class URunningMissionBP> MissionBP;
    TArray<TSoftClassPtr<UObjective>> BannedObjectives;
    TArray<class UMutator*> Mutators;
    FText Title;
    FText RichDescription;
    class UTexture2D* Icon;

};

class UMissionNameBank : public UDataAsset
{
    TArray<FText> FirstNames;
    TArray<FText> LastNames;

    TArray<FText> GetRandomGeneratedNames(FRandomStream& Random, int32 Count);
};

class UMissionPlayerAndCharacterWidget : public UUserWidget
{

    void UpdateValues(int32 PlayerRank, int32 PlayerStars, int32 CharacterLevel, float CharacterProgress);
    void StepCounter(float TimeScale, bool& CounterFinished);
    void PingPlayerRank();
    void PingCharacterLevel(int32 Level, int32 Stars);
    void InitCounter(FPlayerProgress PlayerProgressStart, FCharacterProgress CharacterProgressStart, FPlayerProgress PlayerProgressFinish, FCharacterProgress CharacterProgressFinish);
};

class UMissionResultInfo : public UObject
{
    bool HasInfo;
    float MissionTime;
    float MissionTotalHazBonus;
    FText MissionHazName;
    float MissionHazBonus;
    float ComplexityBonus;
    int32 ComplexityDots;
    float LenghtBonus;
    int32 LenghtDots;
    TArray<FText> WarningTitles;
    TArray<class UTexture2D*> WarningIcons;
    TArray<float> WarningBonusses;
    float TotalCreditsSum;
    float TotalXPSum;
    bool wasSuccess;

    float GetWarningBonusSum();
};

class UMissionStat : public UDataAsset
{
    FMissionStatOnCountChanged OnCountChanged;
    void StatCountChanged(class UObject* WorldContext, class UMissionStat* MissionStat, float Value);
    FGuid SavegameID;
    FText Title;
    class UMissionStatCategory* Category;
    class UFSDAchievement* StatAchievement;
    EMissionStatType MissionStatType;
    bool DoNotShowInMissionStatView;
    bool ShowAllValuesCombined;
    bool ShowHighestValue;

    void StatCountChanged__DelegateSignature(class UObject* WorldContext, class UMissionStat* MissionStat, float Value);
    float SetStatValue(class UObject* WorldContext, class APlayerCharacter* Character, float Amount);
    FText MissionStatToText(EMissionStatType StatType, float Value);
    void Increment(class UObject* WorldContext, class UMissionStat* Stat, TSubclassOf<class APlayerCharacter> CharacterClass, float Amount);
    float GetStatMinCount(class UObject* WorldContext);
    float GetStatMaxCount(class UObject* WorldContext);
    FText GetStatCountTotalAsText(class UObject* WorldContext);
    float GetStatCountTotal(class UObject* WorldContext);
    float GetStatCountPct(class UObject* WorldContext, TSubclassOf<class APlayerCharacter> CharacterClass);
    FText GetStatCountAsText(class UObject* WorldContext, class UPlayerCharacterID* characterID);
    float GetStatCount(class UObject* WorldContext, class UPlayerCharacterID* characterID);
    FString GetSourceTitle();
    FText GetLowestStatCountAsText(class UObject* WorldContext);
    class UTexture2D* GetIcon();
    FText GetHighestStatCountAsText(class UObject* WorldContext);
    FText GetCategoryTitle();
};

class UMissionStatCategory : public UDataAsset
{
    FText Title;
    class UTexture2D* Icon;

};

class UMissionStatsCollector : public UActorComponent
{
    class APlayerCharacter* Character;

    void OnResourceIncremented(class UCappedResource* Resource, float Amount);
};

class UMissionTemplate : public USavableDataAsset
{
    TArray<FResourceSpawner> ResourceDistribution;
    TSubclassOf<class UObjective> PrimaryObjective;
    TArray<class TSubclassOf<UObjective>> SecondaryObjectives;
    TArray<class TSubclassOf<UObjective>> DeepDiveObjectives;
    TArray<class UMutator*> BaseMutators;
    TSoftClassPtr<AProceduralSetup> pls;
    TSoftObjectPtr<UWorld> Level;
    TSoftClassPtr<AFSDGameMode> GameMode;
    TArray<class UMissionComplexity*> LockedComplexities;
    TArray<class UMissionDuration*> LockedDurations;
    FText MissionName;
    TSoftObjectPtr<UTexture2D> MissionImageLarge;
    TSoftObjectPtr<UTexture2D> MissionButtonImage;
    class UTexture2D* MissionIcon;
    class UTexture2D* MissionIconSmall;
    FLinearColor MissionColor;
    int32 MissionTypeIndex;
    FString MissionTypeAnalyticsIndex;
    TArray<class TSubclassOf<UMissionDNA>> DNA;
    TArray<TSoftClassPtr<UDebrisActorComponent>> DebrisComponents;
    bool MustBeUnlocked;
    float RoomEncounerScale;
    float StationaryEnemyScale;
    TArray<TSoftClassPtr<UTutorialComponent>> Tutorials;

    void Receive_SetMissionParameters(class UGeneratedMission* mission, FRandomStream& Random);
    bool IsLocked(class UFSDSaveGame* SaveGame);
    TArray<class UMissionDuration*> GetValidDurations();
    TArray<class UMissionComplexity*> GetValidComplexities();
    TSoftClassPtr<AProceduralSetup> GetSoftReferenceToPLS();
    FObjectiveMissionIcon GetPrimaryObjectiveIconFromAsset(class UMissionTemplate* mission, bool getSmallVersion);
    FObjectiveMissionIcon GetPrimaryObjectiveIcon(bool getSmallVersion);
    TSubclassOf<class AProceduralSetup> GetPLS();
    TSubclassOf<class UObjective> GetObjectiveClass();
    int32 GetMissionTypeIndex();
    class UTexture2D* GetMissionImageLarge();
    class UTexture2D* GetMissionButtonImage();
    class UGeneratedMission* GenerateMission(const class UObject* WorldContextObject, class UBiome* Biome, int32 Seed, int32 GlobalSeed, int32 missionIndex, class UMissionComplexity* limitComplexity, class UMissionDuration* limitDuration, class UMissionMutator* Mutator, TArray<class UMissionWarning*> Warnings, TArray<class TSubclassOf<UObjective>> forceSecondary);
};

class UMissionWarning : public UDataAsset
{
    TSoftClassPtr<URunningMissionBP> MissionBP;
    TSubclassOf<class UObjective> OptionalExtraObjective;
    TArray<TSoftClassPtr<UObjective>> BannedObjectives;
    TArray<class UMissionMutator*> BannedMutators;
    bool DoubleWarning;
    TArray<class UMutator*> Mutators;
    FText Title;
    FText RichDescription;
    class UTexture2D* Icon;
    class UTexture2D* CampaignIcon;
    float HazardBonus;
    class UMissionStat* MissionCompletedStat;
    float CampaignWeight;

};

class UModifyDynamicStatusEffectDamageBonusUpgrade : public UStandardItemUpgrade
{
    EModifyStatusEffectDamageUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, TSubclassOf<class AActor> upgradedItem, class AFSDPlayerState* Player, EModifyStatusEffectDamageUpgrade upgradeType);
};

class UMolotovComponent : public UActorComponent
{
    class UDebrisPositioning* Positioning;
    TSubclassOf<class AActor> BurningFlamesClass;
    float Radius;

    void Trigger();
};

class UMotionAudioController : public UFSDAudioComponent
{
    float MaxValue;
    float IncreseSpeed;
    float DecaySpeed;
    bool DebugText;
    bool Clamp;
    bool Interp;
    float AccelerationThreshold;
    float SpeedThreshold;
    float FadeInTime;
    float FadeOutTime;
    bool AutoPlayOnSpeedThreshold;

};

class UMouseCursorWidget : public UFSDUserWidget
{
    EFSDInputSource TargetInput;
    bool bIsHovering;

    void OnUnhover();
    void OnInputSourceChanged(EFSDInputSource Source);
    void OnHover();
};

class UMoustacheVanityItem : public UVanityItem
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    bool RequiresSlimArmor;

};

class UMoveComponentToAction : public UTickableActionBase
{
    TWeakObjectPtr<class USceneComponent> Component;
    FMoveComponentToActionCompleted Completed;
    void CompletedDelegate(class USceneComponent* Component);

    class UMoveComponentToAction* EaseComponentTo(class UObject* WorldContext, class USceneComponent* InComponent, FTransform InEndTransform, TEnumAsByte<EEasingFunc::Type> InEasingMode, bool InWorldSpace, float InDuration);
    void CompletedDelegate__DelegateSignature(class USceneComponent* Component);
};

class UMoveDownedPlayerCapsule : public UCapsuleComponent
{
    TArray<class USceneComponent*> TargetLocations;

};

class UMultiDamageCondition : public UDamageCondition
{
    TArray<class UDamageCondition*> Conditions;
    bool RequireAllTrue;

};

class UMultiHitscanComponent : public UHitscanBaseComponent
{
    FMultiHitscanComponentOnHit OnHit;
    void HitDelegate(const FHitResult& Hit, bool alwaysPenetrate);
    int32 BulletsPerShot;
    float GeneralImpactAudioVolume;
    bool CountMultiHits;
    TArray<class AActor*> DamagedActorCache;
    FMultiHitScanHits Hits;
    TArray<class AActor*> ActorsHit;

    void Server_RegisterHit(const FMultiHitScanHits& hitResults);
    void All_ShowHit(const FMultiHitScanHits& hitResults);
};

class UMultiHitscanHitCountDamageCondition : public UDamageCondition
{
    int32 RequiredHitCount;

};

class UMultiHitscanUpgrade : public UStandardItemUpgrade
{
    EMultiHitscanUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EMultiHitscanUpgradeType upgradeType);
};

class UMultiTextCounterAction : public UTickableActionBase
{
    FMultiTextCounterActionCompleted Completed;
    void TickDelegate();
    FMultiTextCounterActionOnTick OnTick;
    void TickDelegate();
    class UTextBlock* TotalBlock;
    FText TotalFormat;
    TArray<FTextCounterEntry> Entries;
    float CountSpeed;
    class USoundCue* CountingSound;
    class UAudioComponent* AudioComponent;
    class UObject* WorldContext;

    void TickDelegate__DelegateSignature();
    class UMultiTextCounterAction* StartMultiTextCounter(class UObject* InWorldContext, class UTextBlock* InTotalBlock, const FText InTotalFormat, float InCountSpeed, class USoundCue* InCountingSound, const TArray<FTextCounterEntry> InEntries);
};

class UMultiprojectileSpawner : public UActorComponent
{
    TArray<FProjectileSpawnData> ProjectileData;
    bool ProjectilesIgnoreEachOther;

    bool GetIsFiring();
    void Fire(const FVector& Velocity, const FVector& Origin);
    class UMultiprojectileSpawner* FindMultiProjectileSpawner(class AActor* Actor, class UDataAsset* RangedAttack);
};

class UMusicCategory : public UDataAsset
{
    float FadeDuration;

};

class UMusicLibrary : public UDataAsset
{
    TArray<TSoftObjectPtr<USoundCue>> MusicCues;
    class UMusicCategory* Category;

};

class UMusicManager : public UWorldSubsystem
{
    TMap<class FMusicHandle, class FActiveAudioItem> ActiveAudio;

    void StopHandle(FMusicHandle Handle);
    void StopCategory(class UMusicCategory* Category);
    void SetIsPaused(bool IsPaused);
    FMusicHandle PlayLibrary(class UMusicLibrary* library, int32 musicIndex);
    FMusicHandle Play(class USoundBase* Music, class UMusicCategory* Category);
};

class UMutator : public UDataAsset
{
};

class UMuzzleEffectUpgradeElement : public UItemUpgradeElement
{
    class UFXSystemAsset* FPMuzzleFlash;
    class UFXSystemAsset* TPMuzzleFlash;

};

class UNegPointLightComponent : public UPointLightComponent
{
};

class UNetworkedRadarPointComponent : public URadarPointComponent
{
};

class UNewsTextHeadlines : public UDataAsset
{
    TArray<FText> MineralTradeTicker;

};

class UNewsTextLists : public UDataAsset
{
    TArray<FText> Verb;
    TArray<FText> Person;
    TArray<FText> Creature;
    TArray<FText> Resource;
    TArray<FText> Minerals;
    TArray<FText> MineralFactions;

};

class UNisseAnimInstance : public USimpleMovingEnemyAnimInstance
{
    ENisseState State;

    bool IsWalking();
    bool IsRunning();
    bool IsNotWalking();
    bool IsNotRunning();
    bool IsNotIdle();
    bool IsNotFrozen();
    bool IsIdle();
    bool IsFrozen();
};

class UNoHeadlightMutator : public UMutator
{
};

class UNoMovementStateComponent : public UCharacterStateComponent
{
    bool DisableHeadLightOnEnter;
    bool EnableHeadLightOnExit;

};

class UNoOxygenMutator : public UMutator
{
    float OxygenReplenishmentRate;
    TSoftClassPtr<UOxygenComponent> OxygenComponent;
    TSoftClassPtr<UStatusEffect> ReplenishOxygenEffect;

};

class UNoiseCarveAttackEffect : public UAttackEffect
{
    float ExpensiveNoise;
    float CarveDiameterCM;
    float CarveNoiseCM;
    float CarveBurnThicknessCM;
    float CarverOffset;
    FName Socket;

};

class UNoiseFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SphericalNoiseMovementComponent(class UObject* WorldContextObject, class USceneComponent* Component, FVector Center, float Radius, float Speed, float TimeOffset);
    void SphericalNoiseMovementActor(class UObject* WorldContextObject, class AActor* Actor, FVector Center, float Radius, float Speed, float TimeOffset);
    FVector NoiseSphere3D(class UObject* WorldContextObject, float Time, float Radius);
    FVector2D NoiseSphere2D(class UObject* WorldContextObject, float Time, float Radius);
    float Noise3D(class UObject* WorldContextObject, float X, float Y, float Z);
    float Noise2D(class UObject* WorldContextObject, float X, float Y);
    float Noise(class UObject* WorldContextObject, float X);
};

class UNoisyPathfinderComponent : public UActorComponent
{
};

class UNormalProjectileAttack : public UProjectileAttack
{
    TSubclassOf<class AProjectile> Projectile;
    float RandomAngle;

};

class UNotContainsNameStrategy : public USimpleNameStrategy
{
};

class UNotDLC : public UDLCBase
{
    class UDLCBase* dlc;

};

class UNotificationSubSystem : public UGameInstanceSubsystem
{
    FNotificationSubSystemOnNewSpaceRigNotificationEvent OnNewSpaceRigNotificationEvent;
    void Delegate();
    FNotificationSubSystemOnCampaignNotification OnCampaignNotification;
    void CampaignNotificationSignature(class UCampaignNotification* Notification);
    TArray<FSpaceRigNotification> SpaceRigNotifications;
    class UCampaignNotification* CampaignNotification;

    bool GetNextSpaceRigNotification(FSpaceRigNotification& NextNotification);
    void ClearCampaignNotifications();
    void AddSpaceRigNotification(FSpaceRigNotification NewNotification, FString ID, bool TriggerEvent);
};

class UObjectAttackerPositioning : public UAttackerPositioningComponent
{
    class UHealthComponentBase* Health;

};

class UObjectInfoComponent : public UActorComponent
{

    bool HasMissionControlLookAtShout(const class UPrimitiveComponent* TargetComponent);
    class UDialogDataAsset* GetMissionControlLookAtShout(const class UPrimitiveComponent* TargetComponent);
    class UDialogDataAsset* GetLookAtShout(const class UPrimitiveComponent* TargetComponent);
    bool GetIsPingableByLaserpointer(const class UPrimitiveComponent* TargetComponent);
    FText GetInGameName(const class UPrimitiveComponent* TargetComponent);
    FLinearColor GetInGameIconTint(const class UPrimitiveComponent* TargetComponent);
    class UTexture2D* GetInGameIcon(const class UPrimitiveComponent* TargetComponent);
    FText GetInGameDescription(const class UPrimitiveComponent* TargetComponent);
    class UActorContextWidget* GetContextWidget(class APlayerController* InPlayerController);
};

class UObjectTemperatureComponent : public UTemperatureComponent
{
    FObjectTemperatureComponentOnStartBurning OnStartBurning;
    void OnStartBurning();
    float TemperatureChangeScale;
    float BurnTemperature;
    float DouseFireTemperature;
    int32 CoolingRate;
    bool IsHeatsourceWhenOnFire;
    float OnFireHeatRange;

    void TimerCallback();
    void OnDeath(class UHealthComponentBase* HealthComponent);
};

class UObjective : public UActorComponent
{
    FObjectiveOnObjectiveUpdated OnObjectiveUpdated;
    void ObjectiveUpdatedSignature(class UObjective* Objective);
    TSubclassOf<class UObjectiveWidget> ObjectiveWidgetClass;
    FMissionShouts MissionShouts;
    FText MissionDescription;
    int32 CompletionRewardInCredits;
    int32 CompletionRewardInXP;
    bool ScaleObjectiveToMission;
    bool bHasReturnObjective;
    bool RequiredReturnObjectiveCompleted;
    bool ShowObjectiveInHUD;
    class UMissionStat* ObjectiveCompletedStat;
    TSoftClassPtr<UOptionalObjectiveWidget> OptionalObjectiveWidgetClass;
    int32 IsPrimaryObjective;
    bool bIsNeededForMissionCompletion;
    float MissionScale;
    TArray<class UBiome*> BannedInBiomes;

    void SignalObjectiveUpdated();
    void Receive_StartTracking();
    void OnRep_IsPrimaryObjective();
    bool IsTutorialObjective();
    bool IsPrimary();
    bool IsObjectiveResource(class UResourceData* InResource);
    bool IsNeededForMissionCompletion();
    bool IsFinalBattle();
    bool IsCompleted();
    bool HasReplicated();
    void HandleMissionEnded(bool MissionSuccess);
    TSubclassOf<class UObjectiveWidget> GetWidgetClassOrDefault(TSubclassOf<class UObjectiveWidget> DefaultWidgetClass);
    int32 GetRewardXP();
    FCreditsReward GetRewardCredits();
    TSubclassOf<class UOptionalObjectiveWidget> GetOptionalMissionWidget();
    FText GetObjectiveText();
    class UTexture2D* GetObjectiveIconFromClass(TSubclassOf<class UObjective> objectiveClass);
    class UTexture2D* GetObjectiveIcon();
    FText GetObjectiveDescriptionFromClass(TSubclassOf<class UObjective> objectiveClass, float missionLength);
    FText GetObjectiveDescription(float missionLength);
    int32 GetObjectiveAmountFromClass(TSubclassOf<class UObjective> objectiveClass, float missionLength);
    int32 GetObjectiveAmount(float missionLength);
    FObjectiveMissionIcon GetMissionIcon();
    FText GetInMissionText();
    FText GetInMissionCounterText();
    class UTexture2D* GetInMissionCounterIcon();
};

class UObjectiveWidget : public UUserWidget
{
    FObjectiveWidgetOnObjectiveWidgetUpdated OnObjectiveWidgetUpdated;
    void ObjectiveWidgetDelegate(class UObjectiveWidget* InObjectiveWidget);
    class UObjective* MissionObjective;
    bool bIsPrimaryObjective;
    FText ObjectiveText;
    FText ObjectiveCounterText;
    class UTexture2D* ObjectiveCounterIcon;
    bool bObjectiveCompleted;

    void SetText(const FText& InText, const FText& InCounterText, class UTexture2D* InCounterIcon, bool InObjectiveCompleted);
    void SetSimpleText(const FText& InText, bool InObjectiveCompleted);
    void SetObjective(class UObjective* InObjective, bool InIsPrimaryObjective);
    void ReceiveObjectiveUpdated();
    void ReceiveObjectiveInitialized();
    void OnObjectiveUpdated(class UObjective* InObjective);
    void ObjectiveWidgetDelegate__DelegateSignature(class UObjectiveWidget* InObjectiveWidget);
};

class UObjectivesManager : public UActorComponent
{
    FObjectivesManagerOnObjectivesCompleted OnObjectivesCompleted;
    void DelegateEvent();
    FObjectivesManagerOnObjectivesChanged OnObjectivesChanged;
    void DelegateEvent();
    FObjectivesManagerOnAllRequiredReturnObjectivesCompleted OnAllRequiredReturnObjectivesCompleted;
    void DelegateEvent();
    class UObjective* Objective;
    TArray<class UObjective*> SecondaryObjectives;
    bool ObjectivesInitialized;
    bool ObjectivesStarted;
    bool bCheatObjectivesCompleted;

    void OnObjectiveChanged(class UObjective* obj);
    bool HasRequiredSecondaryObjective();
    TArray<class UObjective*> GetSecondaryObjectives();
    class UObjective* GetSecondaryObjective();
    class UObjective* GetPrimaryObjective();
    void ExitPodDescending();
    void ExitPodArrived();
    void DropPodExited();
    bool AreRequiredSecondariesComplete();
};

class UOncePerPlayerUsableComponent : public UInstantUsable
{
    FOncePerPlayerUsableComponentOnUsersChangedEvent OnUsersChangedEvent;
    void UserAdded(const TArray<FUniqueNetIdRepl>& userList);
    TArray<FUniqueNetIdRepl> Users;

    void OnUsersChanged(const TArray<FUniqueNetIdRepl>& userList);
    void OnRep_Users();
};

class UOptionalBloodPhysicalMaterial : public UFSDPhysicalMaterial
{
    class UParticleSystem* BloodlessImpactParticles;

};

class UOptionalObjectiveWidget : public UUserWidget
{
    FOptionalObjectiveWidgetOnWidgetUpdated OnWidgetUpdated;
    void OptionalObjectiveWidgetDelegate(class UOptionalObjectiveWidget* InOptionalObjectiveWidget);

    void SignalWidgetUpdated();
    void SetObjective(class UObjective* obj);
    void OptionalObjectiveWidgetDelegate__DelegateSignature(class UOptionalObjectiveWidget* InOptionalObjectiveWidget);
};

class UOptionalUICategory : public UDataAsset
{
    FOptionalUICategoryOnVisibilityChanged OnVisibilityChanged;
    void VisibilityChanged(class UOptionalUICategory* Category, bool IsVisible);
    FGuid Guid;
    FText Description;

    void VisibilityChanged__DelegateSignature(class UOptionalUICategory* Category, bool IsVisible);
    void SetVisible(class UObject* WorldContext, bool IsCategoryVisible);
    bool IsVisible(class UObject* WorldContext);
};

class UOptionalUIWidget : public UUserWidget
{
    class UOptionalUICategory* Category;
    ESlateVisibility VisibleFlag;
    ESlateVisibility HiddenFlag;

    void OnVisibilityChanged(class UOptionalUICategory* UICategory, bool IsVisible);
};

class UOrDLC : public UDLCBase
{
    TArray<class UDLCBase*> DLCs;

};

class UOutlineComponent : public UActorComponent
{
    FOutlineComponentOnOutlineChanged OnOutlineChanged;
    void OutlineChanged(EOutline InOutline);
    EOutline DefaultOutline;
    bool ActiveOnHoldTAB;
    float CustomLaserPointDuration;
    int32 LockCounter;
    EOutline CurrentOutline;
    TArray<class UPrimitiveComponent*> OutlinedComponents;
    TArray<class UPrimitiveComponent*> ExcludedComponents;
    TWeakObjectPtr<class APlayerCharacter> Character;

    void UnlockOutline();
    void ToggleDefaultOutline(bool Visible);
    void SetOutline(EOutline outline);
    void RemoveFromOutline(class UPrimitiveComponent* Component);
    void OutlineChanged__DelegateSignature(EOutline InOutline);
    void OnToggleOutline(bool Visible);
    void OnOwnerDeath(class UHealthComponentBase* HealthComponent);
    void OnItemUnequipped(class AItem* Item);
    void OnItemEquipped(class AItem* Item);
    void LockOutline();
    void EnableActivateOnHoldTab();
    void DisableActiveOnHoldTab();
    void AddToOutline(class UPrimitiveComponent* Component);
    void AddActorToOutline(class AActor* Actor);
};

class UOverclockBank : public UDataAsset
{
    TMap<class UOverclockUpgrade*, class USchematic*> Overclocks;
    class UItemID* OwningItem;

};

class UOverclockShematicItem : public USchematicItem
{
    class UItemID* OwningItem;
    class UItemUpgrade* Overclock;

    class UUpgradableGearComponent* GetOwningGearComponent();
};

class UOverclockUpgrade : public UCombinedUpgrade
{
    class USchematicCategory* SchematicCategory;

};

class UOverheatingAggregator : public UItemAggregator
{
    FOverheatingAggregatorOnOverheatingProgressChanged OnOverheatingProgressChanged;
    void OverheatingProgressChanged(float Progress);
    FOverheatingAggregatorOnOverheatedChanged OnOverheatedChanged;
    void OverheatedChanged(bool overHeated);
    float HeatLossPerSecond;
    float OverheatedDuration;
    bool bIsOverheated;
    float Temperature;

    void Server_SetTemperature(float NewTemperature);
    void Server_SetIsOverheated(bool NewOverheated);
    void OverheatingProgressChanged__DelegateSignature(float Progress);
    void OverheatedChanged__DelegateSignature(bool overHeated);
    void OnRep_Temperature();
    void OnRep_IsOverheated();
    float GetTemperature();
    float GetOverheatingProgress();
    bool GetIsOverheated();
};

class UOverlapTrackingSubsystem : public UWorldSubsystem
{
    TArray<FOverlapPair> Overlaps;

};

class UOxygenComponent : public UActorComponent
{
    FOxygenComponentOnOxygenChanged OnOxygenChanged;
    void OxygenDelegate(int32 oxygenLevel);
    FOxygenComponentOnOxygenReplenishingEvent OnOxygenReplenishingEvent;
    void OxygenActiveDelegate(bool IsActive);
    float OxygenGivenOnRevive;
    float CurrentOxygen;
    float OxygenReplinishmentRate;
    int32 NetworkedOxygen;
    bool IsReplenishingOxygen;
    float OxygenDepletionPersecond;
    TArray<FOxygenCallback> Callbacks;
    TSubclassOf<class UStatusEffect> NoOxygenStatusEffect;

    void RegisterOxygenEvent(FRegisterOxygenEventOxygenCallback OxygenCallback, float oxygenLevel, bool triggerOnOxygenLoss);
    void OnRevived();
    void OnRep_NetworkedOxygen(int32 OldValue);
    void OnRep_IsReplenishingOxygen();
    void OnDeath(class UHealthComponentBase* HealthComponent);
};

class UOxygenSourceComponent : public UActorComponent
{
    float SourceRadius;
    float CenterOffset;
    FOxygenSourceComponentOnOxygenActivationChanged OnOxygenActivationChanged;
    void OxygenActiveDelegate(bool IsActive);
    class UNoOxygenMutator* Mutator;

    void OnTimerTick();
    void OnSourceActivated();
};

class UPLSEncounterComponent : public UActorComponent
{
};

class UParalyzedStateComponent : public UCharacterStateComponent
{
    TSoftClassPtr<AActor> CaveLeechClass;
    float CameraArmHeightOffset;
    float CameraArmSpeed;

};

class UPassedOutStateComponent : public UCharacterStateComponent
{
    class UDialogDataAsset* ReviveShout;
    bool bAllPlayersPassedOut;

    void ReceiveTeamPassedOut();
};

class UPassthroughSubHealthComponent : public USubHealthComponent
{
    class USceneComponent* ArmorComponent;

};

class UPathfinderCollisionComponent : public UStaticMeshComponent
{
    bool ActivatePFCollisionAtInit;
    PFCollisionType PFColiType;

    void DisablePFCollision();
    void ActivatePFCollision();
};

class UPathfinderFunctionLibrary : public UBlueprintFunctionLibrary
{

    FVector SnapToGrid(class UObject* WorldContextObject, const FVector& Origin, DeepPathFinderType PathType, DeepPathFinderSize PathSize, float maxSnapDistance);
    bool IsPathfinderReady(class UObject* WorldContextObject);
    FVector FindRandomPositionOnNavmeshAtDistance(class UObject* WorldContextObject, const FVector& Origin, float atDistance);
    FVector FindRandomNearbyPositionOnNavmesh(class UObject* WorldContextObject, const FVector& Origin, float Radius);
    FVector FindPointAlongPathTo(class UObject* WorldContextObject, const FVector& Origin, const FVector& Destination, float atDistance);
};

class UPathfinderReactiveTerrainTrackerComponent : public UReactiveTerrainTrackerComponent
{
    FRandRange CheckInterval;
    class UFSDPhysicalMaterial* CurrentPhysicalMaterial;
    class UStatusEffectsComponent* StatusEffectsComponent;

};

class UPathfinderSplineSegmentCollisionComponent : public UActorComponent
{
    float Radius;
    PFCollisionType CollisionType;

    void UpdateFromSpline(class USplineComponent* SplineComponent, int32 StartIndex);
    void Update(const FVector& SplineStart, const FVector& SplineStartTangent, const FVector& SplineEnd, const FVector& SplineEndTangent);
    void Clear();
};

class UPatrolBotAnimInstance : public USpiderAnimInstance
{
    class APatrolBot* PatrolBot;
    FRotator TurretRotation;
    float Tilt;
    bool Rolling;
    bool NotRolling;
    bool Disabled;
    bool FlyingDisable;
    FRotator WheelRotation;
    FRotator WheelCenterRotation;
    FRotator FloatCenterRotation;
    float CurrentTilt;
    float TiltSpeed;
    float WheelSpeedModifier;

};

class UPawnAffliction : public UDataAsset
{
    class UTexture2D* Icon;
    FColor IconColor;
    FColor IconColorBG;
    bool bShowPlayerIcon;
    bool bShowOnEnemyHealthbar;
    class UPlayerAfflictionOverlay* AfflictionOverlay;
    TArray<TSoftClassPtr<UAfflictionEffect>> EnemyEffects;
    TArray<TSoftClassPtr<UAfflictionEffect>> PlayerFirstPersonEffects;
    TArray<TSoftClassPtr<UAfflictionEffect>> PlayerThirdPersonEffects;
    class UDialogDataAsset* PlayerShoutOnBegin;

};

class UPawnAfflictionComponent : public UActorComponent
{
    FPawnAfflictionComponentOnAfflictionActivatedEvent OnAfflictionActivatedEvent;
    void AfflictionChangeDelegate(class UPawnAffliction* Affliction);
    FPawnAfflictionComponentOnAfflictionDeactivatedEvent OnAfflictionDeactivatedEvent;
    void AfflictionChangeDelegate(class UPawnAffliction* Affliction);
    TMap<class UPawnAffliction*, class FPawnAfflictionItem> ActiveAfflictions;
    FAfflictionEntriesArray NetworkedAfflictions;
    TSubclassOf<class UScalingMeshAfflictionEffect> FrozenEffect;
    TSubclassOf<class UBurningAfflictionEffect> BurningEffect;
    EFrozenBitsSize EffectSize;
    float BaseEffectScale;
    bool UseDormancy;

    void PushAffliction(class UPawnAffliction* Affliction, bool onlyIfNotActive);
    void PopAffliction(class UPawnAffliction* Affliction);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    bool IsAfflictedBy(class UPawnAffliction* Affliction);
    TArray<class UPawnAffliction*> GetActiveAfflictions();
};

class UPawnAlertComponent : public UActorComponent
{
    FPawnAlertComponentOnAlertedFromDamage OnAlertedFromDamage;
    void Delegate();
    bool AutoAlertAI;
    bool ShouldAlertNearby;
    float AlertRadius;

    void StopAutoAlerting();
    void OnPawnSeen(class APawn* Pawn);
    void OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void OnAlerted();
    void AleartNearby();
};

class UPawnBurningUniqueAfflictionEffect : public UAfflictionEffect
{
};

class UPawnFrozenUniqueAfflictionEffect : public UAfflictionEffect
{
};

class UPawnStat : public UDataAsset
{
    float StartingValue;
    EPawnStatType PawnStatType;
    EPawnStatType ValueModificationType;

};

class UPawnStatsComponent : public UActorComponent
{
    FPawnStatEntriesArray Stats;
    bool UseDormancy;

    void RemoveModifier(class UPawnStat* Stat, float Value);
    float GetStatValue(class UPawnStat* Stat);
    void ChangeModifier(class UPawnStat* Stat, float CurrentValue, float NewValue);
    int32 AddModifier(class UPawnStat* Stat, float Value);
};

class UPendingLatentActionLibrary : public UBlueprintFunctionLibrary
{

    void WaitOneFrame(class UObject* WorldContextObject, FLatentActionInfo LatentInfo);
};

class UPercentDamageBonus : public UDamageBonusBase
{
    float DamageMultiplier;

};

class UPerkAsset : public UDataAsset
{
    FGuid SavegameID;
    FText Title;
    class UTexture2D* Icon;
    bool bIsEquippable;
    class UDialogDataAsset* ShoutOnUseCharge;
    TArray<TSoftClassPtr<UPerkLogic>> PerkLogicClasses;
    TSoftClassPtr<UPerkHUDIconWidget> HudIconWidgetClass;
    TArray<TSoftClassPtr<UPerkHUDActivationWidget>> HudActivationWidgets;
    int32 MaxUseCharges;
    float CoolDownBetweenUse;
    bool bIsHighlighted;

    bool UseCharge(class APlayerController* PlayerController);
    bool Unequip(class UObject* WorldContext, class UPlayerCharacterID* characterID);
    void SetHighlighted(class UObject* WorldContext, bool IsHighlighted);
    void SetCharacterPerks(class UObject* WorldContext, class UPlayerCharacterID* characterID, const TArray<class UPerkAsset*>& perks);
    bool IsUsageType(EPerkUsageType InType);
    bool IsPerkAvailableInTier(int32 Tier);
    bool IsEquippedBy(class UObject* WorldContext, class UPlayerCharacterID* characterID);
    float GetUseCoolDownTimeLeft(class APlayerController* PlayerController);
    float GetUseCoolDownProgress(class APlayerController* PlayerController);
    float GetUseCoolDownDuration(class APlayerController* PlayerController);
    EPerkUsageType GetUsageType();
    EPerkTierState GetStateAtTier(class UObject* WorldContext, int32 Tier);
    int32 GetRemainingUseCharges(class APlayerController* PlayerController);
    int32 GetRankTier(int32 Rank);
    FText GetRankDescription(int32 Rank);
    int32 GetRankCost(int32 Rank);
    bool GetRankAtTier(const int32 Tier, int32& Rank);
    int32 GetMaxUseCharges(class APlayerController* PlayerController);
    int32 GetMaxRank();
    TSubclassOf<class UPerkHUDIconWidget> GetHudIconWidgetClass();
    TArray<class TSubclassOf<UPerkHUDActivationWidget>> GetHudActivationWidgets(EPerkHUDActivationLocation Location);
    class UPerkDelegateItem* GetDelegates(class UObject* WorldContext);
    int32 GetCurrentRank(class UObject* WorldContext);
    int32 GetChargesUsed(class APlayerController* PlayerController);
    FString GetAdditionalRankDescription(int32 Rank);
    bool Equip(class UObject* WorldContext, class UPlayerCharacterID* characterID);
    void CheatSetCurrentRank(class UObject* WorldContext, int32 InRank);
    bool CanUseCharge(class APlayerController* PlayerController);
    bool BuyPerkAtTier(class UObject* WorldContext, int32 Tier);
};

class UPerkDelegateItem : public UObject
{
    FPerkDelegateItemOnPerkClaimed OnPerkClaimed;
    void PerkClaimedDelegate(class UPerkAsset* Perk, int32 ClaimedTier);
    FPerkDelegateItemOnPerkEquipped OnPerkEquipped;
    void PerkEquipDelegate(class UPerkAsset* Perk, class UPlayerCharacterID* CharacterClass);
    FPerkDelegateItemOnPerkUnequipped OnPerkUnequipped;
    void PerkEquipDelegate(class UPerkAsset* Perk, class UPlayerCharacterID* CharacterClass);
    FPerkDelegateItemOnPerkHighlighted OnPerkHighlighted;
    void PerkHighlightedDelegate(class UPerkAsset* Perk, bool IsHighlighted);
    FPerkDelegateItemOnChargesUsedChanged OnChargesUsedChanged;
    void PerkIntDelegate(class UPerkAsset* Perk, int32 Value);

};

class UPerkFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SplitPerksByUsage(const TArray<class UPerkAsset*>& perks, TArray<class UPerkAsset*>& OutPassivePerks, TArray<class UPerkAsset*>& OutActivePerks);
    TArray<class UPerkAsset*> SortPerksByUsage(TArray<class UPerkAsset*>& perks);
    void RandomizePerkLoadout(class UObject* WorldContext, class UPlayerCharacterID* characterID);
    bool IsPerkTierUnLocked(class UObject* WorldContext, int32 Tier);
    int32 GetRequiredPerkClaimsForTier(int32 Tier);
    void GetPerkTierState(class UObject* WorldContext, int32 Tier, bool& TierUnLocked, int32& NextRequiredCount, int32& NextProgressCount);
    void GetPerkEquipSlots(class UObject* WorldContext, EPerkUsageType InType, TSubclassOf<class APlayerCharacter> InCharacterClass, int32& OutAvailableSlots, int32& OutUnavailableSlots, int32& OutPromotionLockedSlots);
    TArray<EPerkSlotType> GetPerkEquipSlotLayout(class UObject* WorldContext, EPerkUsageType InType, TSubclassOf<class APlayerCharacter> InCharacterClass);
    TArray<class UPerkAsset*> GetOwnedPerksByType(class UObject* WorldContext, EPerkUsageType InType);
    TArray<class UPerkAsset*> GetOwnedPerks(class UObject* WorldContext);
    int32 GetHighestPerkTier();
    TArray<class UPerkAsset*> GetCharacterNonEquippedPerks(class UObject* WorldContext, class UPlayerCharacterID* characterID);
    TArray<class UPerkAsset*> GetCharacterEquippedPerks(class UObject* WorldContext, class UPlayerCharacterID* characterID);
    TArray<class UPerkAsset*> GetAvailablePerks();
    int32 GetAmountOfPurchasedPerks(class UObject* WorldContext);
    FText FormatRichText(const FText& SourceText, bool UpperCase, const TMap<class FString, class FString> CharTagMap);
    int32 CalculateClaimablePerkPoints(class UObject* WorldContext);
};

class UPerkHUDActivationWidget : public UPerkHUDWidget
{
    EPerkHUDActivationLocation Location;

};

class UPerkHUDIconWidget : public UPerkHUDWidget
{
    float CoolDownProgress;

};

class UPerkHUDWidget : public UUserWidget
{
    class UPerkAsset* PerkAsset;

    void SetPerkAsset(class UPerkAsset* InPerk);
    void ReceivePerkAssetChanged();
    class AFSDPlayerState* GetFSDPlayerState();
    class APlayerCharacter* GetCharacter();
};

class UPerkLogic : public UActorComponent
{

    void StartLogic(int32 Rank);
    class APlayerCharacter* GetCharacter();
    FText GetAdditionalText(int32 Rank);
};

class UPerkSubsystem : public UWorldSubsystem
{
    TMap<class UPerkAsset*, class UPerkDelegateItem*> PerkDelegates;

    class UPerkDelegateItem* GetPerkDelegates(class UPerkAsset* Perk);
};

class UPerkUsageComponent : public UActorComponent
{
    TArray<FPerkUsage> PerkUsageReplicated;

    void Server_MarkPerkUsed(class UPerkAsset* Perk);
    void Server_CheatReset();
    void OnRep_PerkUsageReplicated();
};

class UPermanentItemUpgradeReward : public UUnlockReward
{
    TSubclassOf<class AActor> Item;
    class UItemUpgrade* Upgrade;

};

class UPetComponent : public UActorComponent
{
    TWeakObjectPtr<class APlayerCharacter> OwningPlayer;

    void ReceiveOwningPlayerChanged();
};

class UPheromoneSpawnerComponent : public UActorComponent
{
    FRandRange SpawnInterval;
    float AttackPositioningCostModifier;
    class UEnemyDescriptor* enemy;
    TMap<AActor*, float> InfectedActors;

};

class UPheromoneStatusEffectItem : public UStatusEffectItem
{
};

class UPhotographyStateComponent : public UCharacterStateComponent
{
};

class UPickaxeBladePart : public UPickaxeMeshPart
{
    bool RestrictedToBackside;

};

class UPickaxeFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool RemovePickaxePartFromOwned(class UObject* WorldContextObject, const class UPickaxePart* part);
    void RandomizePickaxe(class UObject* WorldContextObject, class UPlayerCharacterID* PlayerId);
    bool IsPickaxePartEquipped(class UObject* WorldContextObject, EPickaxePartLocation Location, class UPickaxePart* part, class UItemID* pickaxeID);
    void GivePickaxePart(class UObject* WorldContextObject, class UPickaxePart* part);
    TArray<class UPickaxePart*> GetUnlockedPickaxeParts(class UObject* WorldContextObject, EPickaxePartLocation Category);
    TArray<class UPickaxePart*> GetPickaxeParts(class UObject* WorldContextObject, EPickaxePartLocation Category);
    bool GetIsPickAxePartAcquired(class UObject* WorldContextObject, const class UPickaxePart* InPickaxePart);
    FPickaxeSet GetEquippedPickaxeSet(class UObject* WorldContextObject, class UItemID* pickaxeID);
    class UPickaxePart* GetEquippedPickaxePart(class UObject* WorldContextObject, EPickaxePartLocation partLocation, class UItemID* pickaxeID);
    void EquipPickaxePart(class UObject* WorldContextObject, class UPickaxePart* part, EPickaxePartLocation partLocation, class UItemID* pickaxeID);
    void CopyPastePickaxeLoadout(class UObject* WorldContextObject, class UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex);
};

class UPickaxeHandlePart : public UPickaxeMeshPart
{
};

class UPickaxeHeadPart : public UPickaxeMeshPart
{
};

class UPickaxeIconSceneCaptureComponent : public USceneCaptureComponent2D
{
    bool bIsFullView;
    EPickaxePartLocation CameraKey;

};

class UPickaxeMaterialPart : public UPickaxePartItem
{
    TSoftObjectPtr<UMaterialInterface> Material;
    class UDynamicIcon* DynamicIcon;

    class UMaterialInstanceDynamic* CreateIcon(class UObject* Owner);
};

class UPickaxeMeshPart : public UPickaxePartItem
{
    TSoftObjectPtr<UStaticMesh> Mesh;

};

class UPickaxePart : public USavablePrimaryDataAsset
{
    FText Title;
    class UItemAquisitionBase* Aquisition;
    class UPickaxePartItem* Item;

    bool GetUnlockedFromStart();
    EPickaxePartLocation GetPrefferedLocation();
};

class UPickaxePartItem : public UObject
{
};

class UPickaxePartReward : public UUnlockReward
{
    class UPickaxePart* PicaxePart;

};

class UPickaxePartRewarder : public UTreasureRewarder
{
    class UPickaxePart* PickaxePart;

};

class UPickaxePommelPart : public UPickaxeMeshPart
{
};

class UPickaxeSetReward : public UUnlockReward
{
    class UPickaxePart* BladeFront;
    class UPickaxePart* OptionalBladeBack;
    class UPickaxePart* Pommel;
    class UPickaxePart* Handle;
    class UPickaxePart* Shaft;
    class UPickaxePart* Head;
    class UPickaxePart* Material;

};

class UPickaxeSettings : public UDataAsset
{
    TMap<class UPlayerCharacterID*, class TSubclassOf<APickaxePreviewActor>> PickaxePreviewActors;
    class UAnimMontage* Salute_FP;
    class UAnimMontage* Salute_TP;
    TArray<class UPickaxePart*> Parts;
    TMap<class UItemID*, class FDefaultPickaxeParts> DefaultParts;

};

class UPickaxeShaftPart : public UPickaxeMeshPart
{
};

class UPickaxeUpgrade : public UStandardItemUpgrade
{
    EPickaxeUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EPickaxeUpgradeType upgradeType);
};

class UPillarGenerationComponent : public UGenerationComponent
{
    TArray<FVector> Points;
    bool Visible;
    class UPillarSettings* PillarSettings;

};

class UPillarSettings : public UDataAsset
{
    TArray<FPillarSegment> PillarSegments;
    FRandRange PointRange;
    FRandRange PointNoiseRange;
    FRandRange PillarRangeScale;
    FRandRange PillarNoiseRangeScale;
    class UFloodFillSettings* Noise;

};

class UPilotingStateComponent : public UCharacterStateComponent
{
    class AActor* Vehicle;

    void Server_MoveRight(float Value);
    void Server_MoveForward(float Value);
    void OnRep_Vehicle();
};

class UPipelineAnimationSharingProcessor : public UAnimationSharingStateProcessor
{
};

class UPipelineExtractorPodAnimInstance : public UAnimInstance
{
    float ConnectionRotation;
    EPipelineExtractorPodAnimState AnimState;
    ERessuplyPodState PodState;
    EPipelineBuildState PipelineState;
    ERefineryState RefineryState;
    float RotationSpeed;
    TWeakObjectPtr<class APipelineExtractorPod> Pod;
    TWeakObjectPtr<class APipelineSegment> ConnectedSegment;
    TWeakObjectPtr<class APipelineStart> PipelineStart;
    TWeakObjectPtr<class AFSDRefinery> Refinery;

};

class UPipelineSegmentEndPostAnimInstance : public UAnimInstance
{
    float AssemblyAnimLength;
    float AssemblyTimeTarget;
    float AssemblyTime;
    bool bAssembling;

};

class UPlagueObjective : public UObjective
{
    int32 StartPlagueAmount;
    int32 CurrentPlagueAmount;
    int32 TargetPlagueAmount;
    float PercentageRequiredForCompletion;
    int32 SpawningTowersCount;
    class UDialogDataAsset* NodeKilledShout;
    class UDialogDataAsset* LastNodeKilledShout;
    class UDialogDataAsset* OverridePrimaryObjCompletedShout_SelfCompleted;
    class UDialogDataAsset* OverridePrimaryObjCompletedShout_SelfNotCompleted;
    bool AllPlagueCleaned;
    class APlagueControlActor* PlagueController;
    TSoftClassPtr<APlagueControlActor> PlagueControllerClass;
    TArray<class APlagueInfectionNode*> ActivePlagueCenters;
    TSoftClassPtr<UEnemyWaveController> ScriptedPlagueWave;
    float ScriptedPlagueWaveWeight;

    void OnRep_CurrentPlagueAmount(int32 OldAmount);
    TArray<class APlagueInfectionNode*> GetPlagueCenters();
};

class UPlagueUsable : public UInstantUsable
{
    FText CanDropText;
    FText CannotDropText;

};

class UPlanetZone : public UDataAsset
{
    TArray<class UBiome*> Biomes;
    TArray<FRequiredMissionItem> RequiredMissions;
    bool MustBeUnlocked;
    FGuid SavegameID;

    bool IsUnlocked(class UFSDSaveGame* SaveGame);
    FGuid GetSavegameID();
    TArray<class UBiome*> GetBiomes();
};

class UPlanetZoneSetup : public UDataAsset
{
    TArray<class UPlanetZone*> PlanetZones;

    class UPlanetZone* GetPlanetZoneForBiome(class UBiome* Biome, int32& zoneIndex);
};

class UPlasmaCarbineDamageCondition : public UDamageCondition
{
    EPlasmaCarbineConditions WeaponCondition;
    int32 Condition;

};

class UPlasmaCarbineUpgrade : public UStandardItemUpgrade
{
    EPlasmaCarbineUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EPlasmaCarbineUpgrades upgradeType);
};

class UPlatformExclusiveDLC : public UDLCBase
{
    EFSDTargetPlatform Platform;

};

class UPlatformGunAnimInstance : public UAmmoDrivenWeaponAnimInstance
{
    float SpinRate;
    float NormalSpinRate;
    float LerpSpeed;
    float FiredSpinRate;

    void WeaponFired();
};

class UPlatformGunUpgrade : public UItemUpgrade
{
    EPlatformGunUpgrades myUpgradeType;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> Item, EPlatformGunUpgrades aUpgradeType);
};

class UPlayEffectsTask : public ULineSpikeTaskBase
{
};

class UPlayerAfflictionComponent : public UPawnAfflictionComponent
{
    FPlayerAfflictionComponentOnShowOverlay OnShowOverlay;
    void OverlayDelegate(class UPlayerAfflictionOverlay* Overlay);
    FPlayerAfflictionComponentOnHideOverlay OnHideOverlay;
    void OverlayDelegate(class UPlayerAfflictionOverlay* Overlay);
    TMap<UPlayerAfflictionOverlay*, int32> ActiveOverlays;
    TWeakObjectPtr<class APlayerCharacter> Character;

    void ShowPlayerOverlay(class UPlayerAfflictionOverlay* Overlay);
    void OverlayDelegate__DelegateSignature(class UPlayerAfflictionOverlay* Overlay);
    void HidePlayerOverlay(class UPlayerAfflictionOverlay* Overlay);
};

class UPlayerAfflictionOverlay : public UDataAsset
{
    class UTexture2D* Texture;
    FLinearColor TextureTint;
    TSubclassOf<class UPlayerAfflictionOverlayWidget> WidgetOverride;
    int32 ZOrder;
    TSoftObjectPtr<USoundCue> Audio2D_OnBegin;

};

class UPlayerAfflictionOverlayWidget : public UUserWidget
{
    bool bOverlayActive;
    class UPlayerAfflictionOverlay* Overlay;

    void ReceiveEndOverlay();
    void ReceiveBeginOverlay(class UTexture2D* InTexture, FLinearColor InTint);
    void EndOverlay();
    void BeginOverlay(class UPlayerAfflictionOverlay* InOverlay);
};

class UPlayerAnimInstance : public UAnimInstance
{
    bool IsFirstPerson;
    float WalkTreshhold;
    class APlayerCharacter* Character;
    class UParticleSystem* DefaultFootstepParticle;
    class USoundCue* DefaultFootStepSound;
    class UItemCharacterAnimationSet* AnimationSetA;
    class UItemCharacterAnimationSet* AnimationSetB;
    bool AnimationSetAIsPrimary;
    ECharacterState CharacterState;
    float Speed;
    float WalkAnimationSpeed;
    float RunAnimationSpeed;
    float WalkRate;
    float RunRate;
    float Direction;
    FRotator AimRotation;
    bool IsInitialized;
    float Pitch;
    bool IsStandingDown;
    bool IsInAir;
    bool IsMoving;
    bool IsWalking;
    bool IsSprinting;
    bool IsAiming;
    bool IsAlive;
    bool IsLyingDown;
    bool OnZipline;
    bool IsGrinding;
    bool IsParalyzed;
    bool IsGrabbed;
    bool IsAttached;
    bool BeingRevived;
    bool IsLookingAtMap;
    bool IsControllingEnemy;
    bool IsUsingJetBoots;
    bool IsUsingTraversalTool;
    float TraversalToolTargetHorizontalOffset;
    float TraversalToolTargetVerticalOffset;
    float TraversalToolSpeedRate;
    FVector ControllingEnemyRootOffset;
    FVector ControllingEnemyDirectionAlpha;
    float GliderAnimationLength;
    FGliderAnimSync GliderAnimSync;
    bool IsAllowedToPlayMovementAnim;
    float CropBeard;
    class UAnimMontage* ActiveUseMontage;
    class UUseAnimationSetting* CurrentUseSetting;
    class UAnimMontage* EndUseMontageToPlay;
    float AimDuration;
    float ReviveProgress;
    float ReviveExplicitTime;
    float IdleTimeForInspect;
    float RepeatDealayForInspect;
    ECharacterMoveDirection CharacterMoveDirection;
    float MoveAdjustmentAngle;
    class UItemCharacterAnimationSet* CarryAnimationSet;
    class UItemCharacterAnimationSet* DefaultAnimationSet;

    bool StopUseMontage(bool stopImmediately);
    void StopInspectWeapon();
    void StartInspectWeapon();
    void SetAiming();
    void PlayUseMontages(class UUseAnimationSetting* useSetting);
    bool IsPlayingMontageInGroup(FName GroupName);
    class UItemCharacterAnimationSet* GetAnimationSet();
    float CalculateDirectionVertical(const FVector& TargetDirection, const FRotator& BaseRotation);
};

class UPlayerArmorStatusEffectItem : public UStatusEffectItem
{
    FRandRange ChangeAmount;

};

class UPlayerAttackPositionComponent : public UAttackerPositioningComponent
{
    float OnZiplineFlyingModifier;
    float OnZiplineWalkingModifier;

    void SetGameplayModifier(float modifier);
};

class UPlayerBufferComponent : public UActorComponent
{
    TSubclassOf<class UStatusEffect> StatusEffect;
    class UMeshComponent* ManualMeshReference;
    FName BufferParticleSocket;
    class UParticleSystem* Particles;
    float ParticleTangentSize;
    FPlayerBufferComponentOnBuffingChangedEvent OnBuffingChangedEvent;
    void BoolDelegate(bool boolValue);
    float BuffRadius;
    int32 MaxBuffedTargets;
    int32 PushAmount;
    TArray<class APlayerCharacter*> BuffTargets;
    TArray<class UParticleSystemComponent*> ParticleInstances;

    void SetBuffingEnabled(bool Enabled);
    void ReducePushAmount();
    void OnPawnDied(class UHealthComponentBase* Health);
    void OnOwnerDied(class UHealthComponentBase* Health);
};

class UPlayerCharacterData : public UPrimaryDataAsset
{
    class UPlayerCharacterID* characterID;
    FHeroInfo HeroInfo;

    FText GetSwitchToMessage();
    class UTexture2D* GetSmallIcon();
    FText GetShortDescription();
    FText GetName();
    FText GetLongDescription();
    class UTexture2D* GetIcon();
    class UTexture2D* GetFullSizeImage();
    FLinearColor GetColor();
};

class UPlayerCharacterFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool SetPlayerVoiceMuted(class UObject* WorldContextObject, class AFSDPlayerState* PlayerState, bool Mute, bool TrySystemWide, int32 localUserNum);
    bool IsPlayerVoiceMuted(class UObject* WorldContextObject, class AFSDPlayerState* PlayerState, int32 localUserNum);
    class APlayerCharacter* GetRandomPlayer(class UObject* WorldContextObject, bool MustBeAlive, bool MustNotBeParalyzed);
    class APlayerCharacter* GetNearestVisiblePlayer(class AActor* From, float MaxDistance, bool MustBeAlive, bool MustNotBeParalyzed);
    class APlayerCharacter* GetNearestPlayerToPosition(class UObject* WorldContextObject, FVector Position, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly);
    class APlayerCharacter* GetNearestPlayerFrom(class UObject* WorldContext, FVector From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly);
    class APlayerCharacter* GetNearestPlayer(class AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly);
};

class UPlayerCharacterID : public USavableDataAsset
{
    FName AssetName;
    TSoftClassPtr<APlayerCharacter> Character;
    FString AnalyticsID;
    class UPlayerCharacterData* CharacterData;

    class UPlayerCharacterData* GetCharacterData();
    TSubclassOf<class APlayerCharacter> GetCharacterClass();
    class APlayerCharacter* GetCharacter();
};

class UPlayerCharacterMontageAfflictionEffect : public UAfflictionEffect
{
    class UAnimMontage* FP_Montage;
    class UAnimMontage* TP_Montage;
    float BlendOut;
    TArray<FName> RandomStarts;

};

class UPlayerDamageTakenMutator : public UMutator
{
    float DamageMultiplier;
    TSet<UDamageClass*> SkipDamageClasses;

};

class UPlayerFPAnimInstance : public UPlayerAnimInstance
{
    FRotator WeaponRecoil;
    float HeadBobScale;
    float WeaponSwayRecoverySpeed;
    float WeaponSwayAlphaRecoverySpeed;
    FRotator WeaponSwayAngle;
    float WeaponSwayMaxAngle;
    FRotator CameraAntiSwayAngle;
    float WeaponSwayAlpha;
    float WeaponSwayToApply;
    FVector CameraOffset;
    FVector NegativeCameraOffset;
    bool HeadOnlyMode;
    FRotator HeadRotation;
    class UAnimSequence* FP_Idle;
    class UAnimSequence* FP_Walk;
    class UAnimSequence* FP_Sprint;
    class UAnimSequence* FP_JumpStart;
    class UAnimSequence* FP_JumpLoop;
    class UAnimSequence* FP_JumpLand;
    class UAnimSequence* FP_JumpLand_Aim;
    class UAnimSequence* FP_Downed;

};

class UPlayerHealthComponent : public UHealthComponent
{
    FPlayerHealthComponentOnFullHealthCannotHeal OnFullHealthCannotHeal;
    void FullHealthSignature();
    FPlayerHealthComponentOnHealedFromCrystalEvent OnHealedFromCrystalEvent;
    void FullHealthSignature();
    FPlayerHealthComponentOnHealthRegeneratingChanged OnHealthRegeneratingChanged;
    void HealthRegeneratingChanged(bool isRegenerating);
    FPlayerHealthComponentOnPlayerHit OnPlayerHit;
    void HitSig(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    float MaxHealth;
    float MaxArmor;
    float ArmorDamage;
    float ReviveHealthReturnRatio;
    float ReviveArmorReturnRatio;
    float HealthPerCrystalVolume;
    FHealthRegenerationParams HealthRegeneration;
    class UCurveFloat* ArmorRegenCurve;
    float ShieldRegenDelay;
    class APlayerCharacter* Character;
    class UParticleSystem* GenericImpactParticles;
    class UParticleSystem* ShieldLinkEffect;
    FAudioWithCooldown AudioFriendlyFire;
    class UParticleSystemComponent* ShieldLinkInstance;
    float InvulnerabilityDuration;
    float ReviveInvulnerabilityTime;
    class UPlayerDamageTakenMutator* DamageTakenMutator;
    TSubclassOf<class UStatusEffect> IronWillStatusEffectClass;
    class UStatusEffect* IronWillStatusEffect;
    bool IronWillActive;
    float IronWillTimeToActivate;

    class UStatusEffect* SetIronWillStatusEffect(TSubclassOf<class UStatusEffect> steClass);
    void Server_TryActivateIronWill();
    void OnRep_MaxHealth();
    void OnRep_MaxArmor();
    void OnRep_ArmorDamage(float oldDamage);
    bool IsLowHealth();
    float GetRemainingIronWillActivationTime();
    bool GetIsHealthRegenerating();
    bool GetIronWillActive();
    float GetHealthRegeneratingTargetRatio();
    void Client_SetHealthRegenerating(bool isRegenerating);
    void Client_OnFriendlyFire(class AController* EventInstigator, class AActor* DamageCauser);
    void Client_HealthFullCannotHeal();
    bool CanActivateIronWill();
};

class UPlayerHealthDamageCondition : public UDamageCondition
{
    FFloatInterval HealthPercentageRequired;

};

class UPlayerImpactCooldownComponent : public UActorComponent
{
    float CoolDownTime;

    bool CheckCanImpact(class AActor* Actor);
};

class UPlayerInfectionComponent : public UActorComponent
{
    FPlayerInfectionComponentOnInfectionLevelChangedEvent OnInfectionLevelChangedEvent;
    void IntDelegate(int32 IntValue);
    FPlayerInfectionComponentOnBreakoutPercentageChanged OnBreakoutPercentageChanged;
    void FloatDelegate(float FloatValue);
    FPlayerInfectionComponentOnInfectionStateChangedEvent OnInfectionStateChangedEvent;
    void OnInfectionStateChangedDelegate(EInfectionState State);
    EInfectionState InfectionState;
    float ReductionCooldown;
    float InfectionImmunityAfterFullInfection;
    float InfectionLevel;
    float BreakoutPercentage;
    float InfectionDecreaseOverTimer;

    void Server_ClearInfection();
    void OnRep_InfectionLevel(float oldLevel);
    void IncreaseInfection(float Amount, class AActor* Source);
};

class UPlayerInfoComponent : public UObjectInfoComponent
{
    TSoftObjectPtr<UDialogDataAsset> LookAtShout;
    class APlayerCharacter* Character;

};

class UPlayerMovementComponent : public UCharacterMovementComponent
{
    bool DebugFastMove;
    class USoundBase* SlidingOnIceSound;
    float LedgeClimbZVelocity;
    float MovementPenalty;
    class APlayerCharacter* Character;
    TWeakObjectPtr<class UCharacterStateComponent> CurrentPhysUpdateState;

    void RemoveGravityModifier(class AActor* SourceActor);
    void AddGravityModifier(class AActor* SourceActor, float Effect);
};

class UPlayerProximityTracker : public UActorComponent
{
    float MaxDistanceBetweenPlayers;
    float PlayerSpheresUpdateRatePerSecond;
    TArray<FPlayerSphere> PlayerSpheres;
    TArray<FProximityTriggerItem> LocalPlayerProximityTriggers;
    TArray<FProximityTriggerItem> AnyPlayerProximityTriggers;

    void Receive_RegisterForLocalPlayerProximity(class UObject* WorldContextObject, const FVector& Location, float Distance, const FReceive_RegisterForLocalPlayerProximityProximityCallback& proximityCallback, bool triggerOnlyOnce);
    void Receive_RegisterForAnyPlayerProximity(class UObject* WorldContextObject, const FVector& Location, float Distance, const FReceive_RegisterForAnyPlayerProximityProximityCallback& proximityCallback, bool triggerOnlyOnce);
    FPlayerSphere GetPrimarySphere();
    TArray<FPlayerSphere> GetPlayerSpheres();
};

class UPlayerRankCampaignRequirement : public UCampaignRequirement
{
    int32 RankRequirement;

};

class UPlayerReactiveTerrainTrackerComponent : public UReactiveTerrainTrackerComponent
{
    class UFSDPhysicalMaterial* CurrentPhysicalMaterial;

};

class UPlayerRejoinState : public UActorComponent
{

    void Server_Reset();
    void Server_AddIntValue_Internal(const FGuid& ItemKey, const FName& ValueKey, int32 Value);
    void Server_AddFloatValue_Internal(const FGuid& ItemKey, const FName& ValueKey, float Value);
    void Client_SetValues(const TArray<FRejoinFloat>& floatValues, const TArray<FRejoinInt>& intValues);
};

class UPlayerResourceComponent : public UResourcesComponent
{

    class UPlayerResourceComponent* GetFromPlayer(class APlayerCharacter* PlayerCharacter);
};

class UPlayerShieldsDamageCondition : public UDamageCondition
{
    FFloatInterval ShieldPercentageRequired;

};

class UPlayerShieldsItemUpgradeCondition : public UItemUpgradeCondition
{
    FFloatInterval ShieldPercentageRequired;

};

class UPlayerShieldsMutator : public UMutator
{
    float ShieldModifier;

};

class UPlayerStatsComponent : public UActorComponent
{
    FPlayerStatsComponentOnKillAdded OnKillAdded;
    void Delegate();
    int32 TotalKills;
    int32 TotalRevived;
    int32 TotalDeaths;
    int32 TotalSupplypodsRequested;
    float TotalGoldMined;
    float TotalMOMsMined;
    float TotalMineralsMined;
    float TotalXPGained;
    bool EscapedInPod;
    TSubclassOf<class APlayerCharacter> LastPlayedClass;
    FEndMissionResult EndMissionResult;
    FPlayerStatsComponentOnEndMissionResultReady OnEndMissionResultReady;
    void EndMissionResultDelegate(const FEndMissionResult& Result);

    void SendMissionAnalytics(bool trackMorkite);
    void SendEndMissionResult(const FEndMissionResult& Result);
    void OnResourceMined(class UCappedResource* Resource, float Amount);
    void OnRep_EndMissionResult();
    bool IsEndMissionResultReady();
    bool GetSurvivedInPod();
    void EndMissionResultDelegate__DelegateSignature(const FEndMissionResult& Result);
};

class UPlayerTPAnimInstance : public UPlayerAnimInstance
{
    float RigidBodyBlend;
    bool RigidBodyOn;
    float UpperBodyBlend;
    float AimingValue;
    FRotator CounerMoveadjustmentAngleRotator;
    bool FullBodyAnimActive;
    float FullBodyBlendTime;
    float BodyTurnRecoverySpeed;
    float BodyTurnMaxAngle;
    float BodyTurnLerpEXP;
    float TurnAnimationDuration;
    bool bCaveLeechBiting;
    float CaveLeechBiteReactDelay;
    bool IsResettingBodyTurn;
    FRotator BodyTurn;
    FRotator CounterBodyTurn;
    bool TurningLeft;
    bool TurningRight;
    float TurnProgress;
    bool HasPickedUpItem;
    bool IsLyingDownNoTransition;
    int32 DanceMove;
    class UAnimSequence* DanceSequence;
    bool IsDancing;
    float PickedUpItemBlend;
    float AttachedBodyTurnFactor;
    float AttachedHeadTurnFactor;
    FRotator AttachedBodyRotation;
    FRotator AttachedHeadRotation;
    class UBlendSpace1D* TP_LookUpDown;
    class UBlendSpace1D* TP_LookUpDown_Aim;
    class UBlendSpace1D* A_TP_LookUpDown_Aim;
    class UBlendSpace1D* B_TP_LookUpDown_Aim;
    class UAnimSequence* TP_JumpLoop;
    class UAnimSequence* TP_JumpLoop_Aim;
    class UAnimSequence* TP_JumpStart;
    class UAnimSequence* TP_JumpStart_Aim;
    class UAnimSequence* TP_Sprint;
    class UAnimSequence* A_TP_Idle;
    class UAnimSequence* B_TP_Idle;
    class UAnimSequence* A_TP_Idle_Aim;
    class UAnimSequence* B_TP_Idle_Aim;
    class UAnimSequence* TP_LookForward;
    class UAnimSequence* A_TP_LookForward;
    class UAnimSequence* B_TP_LookForward;
    class UAnimSequence* A_TP_LookForward_Aim;
    class UAnimSequence* B_TP_LookForward_Aim;
    class UAnimSequence* A_TP_Walk_Forward;
    class UAnimSequence* B_TP_Walk_Forward;
    class UAnimSequence* A_TP_Run_Forward;
    class UAnimSequence* B_TP_Run_Forward;
    class UAnimSequence* A_TP_Walk_Forward_Aim;
    class UAnimSequence* B_TP_Walk_Forward_Aim;
    class UAnimSequence* A_TP_Run_Forward_Aim;
    class UAnimSequence* B_TP_Run_Forward_Aim;
    class UAnimSequence* A_TP_Walk_Right;
    class UAnimSequence* B_TP_Walk_Right;
    class UAnimSequence* A_TP_Run_Right;
    class UAnimSequence* B_TP_Run_Right;
    class UAnimSequence* A_TP_Walk_Right_Aim;
    class UAnimSequence* B_TP_Walk_Right_Aim;
    class UAnimSequence* A_TP_Run_Right_Aim;
    class UAnimSequence* B_TP_Run_Right_Aim;
    class UAnimSequence* A_TP_Walk_Left;
    class UAnimSequence* B_TP_Walk_Left;
    class UAnimSequence* A_TP_Run_Left;
    class UAnimSequence* B_TP_Run_Left;
    class UAnimSequence* A_TP_Walk_Left_Aim;
    class UAnimSequence* B_TP_Walk_Left_Aim;
    class UAnimSequence* A_TP_Run_Left_Aim;
    class UAnimSequence* B_TP_Run_Left_Aim;
    class UAnimSequence* A_TP_Walk_Back;
    class UAnimSequence* B_TP_Walk_Back;
    class UAnimSequence* A_TP_Run_Back;
    class UAnimSequence* B_TP_Run_Back;
    class UAnimSequence* A_TP_Walk_Back_Aim;
    class UAnimSequence* B_TP_Walk_Back_Aim;
    class UAnimSequence* A_TP_Run_Back_Aim;
    class UAnimSequence* B_TP_Run_Back_Aim;
    class UAnimSequence* TP_Revived;
    class UAnimSequence* TP_Downed;
    class UAnimSequence* TP_Downed_Loop;

    void SetOverrideFullBody(bool overrideEnabled);
};

class UPlayerTemperatureComponent : public UTemperatureComponent
{
    FPlayerTemperatureComponentOnTemperatureChanged OnTemperatureChanged;
    void PlayerTemperatureChangedSignature(float Temperature, float Change);
    FPlayerTemperatureComponentOnTemperatureStateChanged OnTemperatureStateChanged;
    void PlayerTemperatureStateChangedSignature(EPlayerTemperatureState State);
    FPlayerTemperatureComponentOnTemperatureChangeRate OnTemperatureChangeRate;
    void PlayerTemperatureChangeRateSignature(int32 ChangeRate);
    FPlayerTemperatureComponentOnDefrosting OnDefrosting;
    void PlayerDefrostingSignature(float Progress);
    FPlayerTemperatureComponentOnBarVisibilityChanged OnBarVisibilityChanged;
    void PlayerTemperatureShowBar(bool barVisible);
    float MinimumTemperature;
    float MaximumTemperature;
    float DefrostTemperature;
    float BurnTemperature;
    float DouseFireTemperature;
    float TemperaturRegainSpeed;
    float DefrostingRequired;
    TSubclassOf<class UStatusEffect> OnDefrostedStatusEffect;
    float NormalTemperature;
    float CurrentTemperature;
    float TargetTemperature;
    int8 TemperatureChangeSpeed;
    float DefrostProgress;
    bool barVisible;
    class APlayerCharacter* Character;
    EPlayerTemperatureState TemperatureState;

    void SetNormalTemperature();
    void SetFrozenTemperature();
    void OnRep_TemperatureState(EPlayerTemperatureState oldState);
    void OnRep_TemperatureChangeSpeed(int8 OldSpeed);
    void OnRep_DefrostProgress();
    void OnRep_CurrentTemperature(float OldTemperature);
    void OnDeath(class UHealthComponentBase* Health);
    int32 GetTemperatureChangedSpeed();
    float GetDefrostProgress();
    float GetCurrentTemperatureNormalized();
    void Defrost(float Amount);
};

class UPluckFromZiplineBonus : public UDamageBonusBase
{
};

class UPostfixNameStrategy : public USimpleNameStrategy
{
};

class UPreOrPostfixNameStrategy : public USimpleNameStrategy
{
};

class UPrefixNameStrategy : public USimpleNameStrategy
{
};

class UPresenceSubSystem : public UGameInstanceSubsystem
{
    class UDiscordWrapper* DiscordWI;
    class UCommunityGoalWrapper* CommunityWI;

};

class UPricingTier : public UDataAsset
{
    FString PriceKey;

};

class UProceduralController : public UActorComponent
{

    void Server_RequestTunnelData();
    void SendTunnelData();
    void SendRoomData();
    void SendRequestedPLSData();
    void SendRequestedCarverData(EDebrisItemPass pass);
    void RequestPLSData();
    void RequestCarverData(EDebrisItemPass pass);
    void ReceivedTunnelData(const TArray<FTunnelNode>& tunnels);
    void ReceivedRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& Obstacles);
    void Client_SendTunnelData(const TArray<FTunnelNode>& tunnels);
    void Client_SendRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& Obstacles);
    void Client_RecieveCarverSizes(int32 pass, int32 carverCount);
    void Client_ReceivePLSLevelCarver(int32 pass, const FLevelGenerationCarverLists& levelCarvers);
    void Client_ReceivePLSInfluencers(const FGeneratedInfluenceSets& influenceSet);
    void Client_ReceivePLSDebris(const TArray<FGeneratedDebrisItem>& levelDebris);
};

class UProceduralFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SpawnTerrainImpact(class UObject* WorldContextObject, class UFXSystemAsset* particle, const FVector& Location, FRotator Rotation);
    class AProceduralSetup* GetProceduralSetup(class UObject* WorldContextObject);
    int32 GetObjectiveXP(TSubclassOf<class UObjective> objectiveClass, float missionLength);
    int32 GetObjectiveCredits(TSubclassOf<class UObjective> objectiveClass, float missionLength);
    class UBiome* GetBiome(TSubclassOf<class AProceduralSetup> levelSetup);
    void CreateEntrances(class AProceduralSetup* pls, FRoomNode& Room, int32 exitCount, int32 entranceCount, class UDebrisPositioning* exitPositioning, class UDebrisPositioning* entrancePositioning);
    bool AllControllersFinishedTransitionToPlay(class UObject* WorldContextObject);
};

class UProceduralObjectColliders : public UActorComponent
{
};

class UProceduralResources : public UActorComponent
{

    void GenerateResources();
    void GenerateMissingCarvedResources_Async(const class AProceduralSetup*& Setup, FLatentActionInfo LatentInfo);
    void GenerateMissingCarvedResources();
    void GenerateCarvedResources_Async(const class AProceduralSetup*& Setup, FLatentActionInfo LatentInfo);
    void GenerateCarvedResources();
    void CreateResourcesFromObjectives();
    void CountGeneratedCarvedResources();
    void CountFinalGeneratedCarvedResources();
};

class UProceduralSettings : public UDataAsset
{
    class URoomDecorationObject* MiningpodCalldownLocationDecoration;
    TArray<class UMissionTemplate*> TestMissions;
    TSoftObjectPtr<UBiome> TestBiome;
    class UBiome* DefaultBiome;
    TArray<FText> GenericBiomeQuotes;
    class UMissionTemplate* DefaultMission;
    TSubclassOf<class AProceduralSetup> CaveGeneratorPLSClass;

};

class UProceduralTunnelComponent : public UActorComponent
{
    class UTunnelParameters* TunnelParameters;
    bool CreateDirt;
    class UCaveInfluencer* DirtInfluencer;
    float DirtInfluencerRange;

};

class UProceduralVeinsComponent : public UActorComponent
{
    TArray<FVeinResource> VeinResources;

    void GenerateResourceVeins_Async(const class AProceduralSetup*& Setup, FLatentActionInfo LatentInfo);
    void GenerateResourceVeins();
    void GenerateMissingResourceVeins_Async(const class AProceduralSetup*& Setup, FLatentActionInfo LatentInfo);
    void GenerateMissingResourceVeins();
    void GenerateDebrisVeins_Async(const class AProceduralSetup*& Setup, EDebrisCarvedType CarverType, FLatentActionInfo LatentInfo);
    void GenerateDebrisVeins(EDebrisCarvedType CarverType);
    void CountGeneratedResourcesInVeins();
    void CountFinalGeneratedResourcesInVeins();
    void CalculateResourceDistribution();
};

class UProfilingSubSystem : public UWorldSubsystem
{
    TArray<FProfileEntry> Entries;

    float GetTotalTime();
    TArray<FProfileEntry> GetEntries();
    TArray<FProfileCategoryTiming> GetCategoryTimings();
};

class UProjectileAttack : public UObject
{
    FFloatInterval Delay;
    bool TriggerOnEvent;
    FFloatInterval HorizontalAngleOffset;
    FFloatInterval VerticalAngleOffset;
    FName OverrideSocketName;

};

class UProjectileAttackBaseComponent : public UAttackBaseComponent
{
    TArray<class UProjectileAttack*> Projectiles;
    TArray<class UAnimMontage*> Montages;
    FName SocketName;
    EProjectileAttackRotationType RotationHandling;
    class UTargetValidator* FinalValidationCheck;
    bool ProjectilesIgnoreEachOther;
    FProjectileAttackBaseComponentOnAttackStartedEvent OnAttackStartedEvent;
    void ProjectileAttackDelegate();
    FProjectileAttackBaseComponentOnProjectileFiredEvent OnProjectileFiredEvent;
    void ProjectileAttackDelegate();
    FProjectileAttackBaseComponentOnAttackEndedEvent OnAttackEndedEvent;
    void ProjectileAttackDelegate();
    FProjectileAttackBaseComponentOnProjectileSpawnedEvent OnProjectileSpawnedEvent;
    void ProjetileSpawnedDelegate(class AProjectileBase* Projectile, class AActor* Target);

    bool TriggerMontage(class AActor* Target);
    class UAnimMontage* SelectMontage();
    void OnPerformAttack();
    void OnMontageEnded(class UAnimMontage* Montage, bool interrupted);
    void MulticastProjectileFired();
    void CancelMontage();
};

class UProjectileAttackComponent : public UProjectileAttackBaseComponent
{
    bool ManualyComplete;

    void AddAttackMontage(class UAnimMontage* attackMontage);
};

class UProjectileClassFilterItemUpgradeCondition : public UItemUpgradeCondition
{
    TArray<class TSubclassOf<AProjectileBase>> ProjectileClasses;

};

class UProjectileExplosion : public UExplosionBaseComponent
{
    FScaledEffect ExplosionEffect;
    class USoundCue* ExplosionSound;
    class UForceFeedbackEffect* ForceFeedbackEffect;
    class UForceFeedbackAttenuation* ForceFeedbackAttanuation;

    void SpawnEffectsFromHit(const FHitResult& Hit);
    void SpawnEffects(FVector Location, FVector Normal);
};

class UProjectileLauncherBaseComponent : public UWeaponFireComponent
{
    bool IgnoreCollisionWithSelf;
    bool UseProjectileUpgrades;
    bool UseSpread;
    float VerticalSpread;
    float HorizontalSpread;
    FProjectileLauncherBaseComponentOnProjectileSpawned OnProjectileSpawned;
    void ProjectileSpawned(class AProjectileBase* Projectile);
    TArray<class UItemUpgrade*> ProjectileUpgrades;
    float ArcStartAngle;
    bool TransferCharacterVelocityToProjectile;
    bool CameraToMuzzleFireCheck;

    void Server_StopFire();
    void Server_Fire(FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity, class AProjectileBase* DormentProjectile, bool notifyClients);
    void ProjectileSpawned__DelegateSignature(class AProjectileBase* Projectile);
    void All_ShowHit();
};

class UProjectileLauncherBaseUpgrade : public UStandardItemUpgrade
{
    EProjectileLauncherBaseUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EProjectileLauncherBaseUpgradeType upgradeType);
};

class UProjectileLauncherComponent : public UProjectileLauncherBaseComponent
{
    TSubclassOf<class AProjectileBase> ProjectileClass;

    void SetProjectileClass(TSubclassOf<class AProjectileBase> NewProjectileClass);
};

class UProjectileThrowerAttack : public UProjectileAttackComponent
{
    class USkeletalMesh* ThrowerMesh;
    TSubclassOf<class UAnimInstance> ThrowerAnimInstance;
    TArray<class UAnimMontage*> ThrowerMontages;
    FName ThrowerAttachPoint;
    bool RotateToTarget;
    FRotator ThrowerRotation;
    FVector ThrowerOffset;

    void OnThrowerMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
    void All_ShowThrowerAnimation();
};

class UProjectileUpgrade : public UStandardItemUpgrade
{
    EProjectileUpgrade upgradeType;
    TSubclassOf<class AActor> ProjectileClass;
    class UItemUpgradeCondition* Condition;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, TSubclassOf<class AActor> upgradedItem, class AFSDPlayerState* Player, EProjectileUpgrade upgradeType);
};

class UProjectileUpgradeElement : public UItemUpgradeElement
{
    class UParticleSystem* NewTrailParticle;

};

class UPromotionRewardsLibrary : public UBlueprintFunctionLibrary
{

    bool HasPendingPromotionRewards(class UObject* WorldContext);
    bool ClaimPromotionRewards(class UObject* WorldContext, class APlayerController* PlayerController, TArray<FClaimableRewardEntry>& OutRewards, bool& OutFirstPromotion);
};

class UPromotionRewardsSettings : public UDataAsset
{
    TArray<FClaimableRewardEntry> FirstPromotionRewards;
    TArray<FClaimableRewardEntry> SubsequentPromotionRewards;

};

class UProspectorAnimInstance : public UEnemyAnimInstance
{
    FVector2D TiltResult;
    FVector2D LookingResult;
    EProspectorRobotState ProspectorState;
    float ArmBusyness;

};

class UProspectorObjective : public UObjective
{
    TSoftClassPtr<AProspectorRobot> ProspectorClass;
    class UDebrisPositioning* DebrisPositioning;
    TWeakObjectPtr<class AProspectorRobot> ActiveProspector;

    void OnRep_ActiveProspector();
    void OnProspectorDeath(class UHealthComponentBase* Health);
    bool IsProspectorDead();
};

class UPuddleTrackerComponent : public UActorComponent
{

    void OnPuddleDestroyed(class AActor* DestroyedActor);
    void GetPuddles(TArray<class AActor*>& Locations);
    void GetPuddleLocations(TArray<FVector>& Locations);
    void AddPuddle(class AActor* puddle);
};

class UPureTextReward : public UUnlockReward
{
    FText Text;

};

class UPushDynamicStatusEffectDamageBonus : public UDamageBonusBase
{
    TSubclassOf<class UStatusEffect> BaseSTE;
    class UStatusEffect* StatusEffect;
    float Chance;

};

class UPushDynamicStatusEffectDamageBonusUpgrade : public UItemUpgrade
{
    FName Key;
    class UStatusEffectItem* StatusEffectItem;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, FName Key);
};

class UPushSatusEffectDamageBonusUpgrade : public UItemUpgrade
{
    TSubclassOf<class UStatusEffect> StatusEffect;
    float Chance;
    bool IgnoreArmorHit;
    class UDamageCondition* Condition;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, TSubclassOf<class UStatusEffect> StatusEffect);
};

class UPushStatusEffectDamageBonus : public UDamageBonusBase
{
    TSubclassOf<class UStatusEffect> StatusEffect;
    float Chance;
    bool IgnoreArmorHit;

};

class UPushingState : public UCharacterStateComponent
{
    class UUseAnimationSetting* PushingAnimation;

};

class URDGComponent : public UActorComponent
{
    FRDGComponentOnDetonated OnDetonated;
    void RDGExplodeDelegate();

};

class URGBLightManagerComponent : public UActorComponent
{
    TArray<class UPointLightComponent*> Lights;
    TArray<FLinearColor> ColorList;
    float NewColorsInterval;
    float NewColorsVariance;

    void StopRgb();
    void StartRgb();
};

class URackableItemComponent : public UActorComponent
{
    FRackableItemComponentOnRacked OnRacked;
    void Delegate();
    FRackableItemComponentOnTakenFromRack OnTakenFromRack;
    void Delegate();
    FText ItemRackedText;
    FText ItemUnRackedText;
    bool AddToCharacterInventory;
    int32 RackKey;

};

class URadarPointComponent : public UActorComponent
{
    FRadarPointComponentOnRemove OnRemove;
    void RadarPointRemovedSignature();
    float PointPriority;
    TSubclassOf<class UUserWidget> WidgetClass;

    void MapToRadarPosition(FVector playerPos, FVector playerForward, FVector Pos, bool snap, FVector& radarPos, float& alpha);
};

class URagdollManager : public UActorComponent
{
    TArray<FRagdollItem> Items;

    void StartRagdoll(class AActor* Actor, const TArray<class UMaterialInstanceDynamic*>& Materials, float desiredDuration);
};

class URandIntervalFunctionLibrary : public UBlueprintFunctionLibrary
{

    float GetFloatValue(const FRandInterval& RandInterval);
};

class URandRangeFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool TryPickRandomText(const TArray<FText>& TextArray, FRandomStream& RandomStream, FText& OutResult);
    FText PickRandomText(const TArray<FText>& TextArray, FRandomStream& RandomStream);
    int32 GetValueFromStream(FIRandRange RandRange, FRandomStream& RandomStream);
    float GetFloatValue(FRandRange RandRange);
    float GetFloatFromStream(FRandRange RandRange, FRandomStream& RandomStream);
};

class URandomDamageBonus : public UDamageBonusBase
{
    FRandRange RandomDamageRange;

};

class URandomDamageCondition : public UDamageCondition
{
    float Chance;

};

class URandomDamageUpgrade : public UItemUpgrade
{
    FRandRange DamageRange;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player);
};

class URandomFireModuleAnimInstance : public UGunTowerModuleAnimInstance
{
    FRotator OtherLookatRotation;

};

class URandomGemResourceCreator : public UGemResourceCreator
{
    class UCurveFloat* PlacementDistanceProbabilityCurve;

};

class URandomLoadoutBuff : public UTemporaryBuff
{
};

class URandomSelector : public URoomFeature
{
    int32 Min;
    int32 Max;

};

class URandomSubRoomFeature : public URoomFeature
{
    class URoomGeneratorGroup* RoomGroup;
    FGameplayTagQuery tagQuery;
    int32 Layer;
    FVector Location;
    FRotator Rotation;
    float Scale;

};

class URangedFlatDamageBonus : public UDamageBonusBase
{
    class UCurveFloat* DamageCurve;
    class UDamageClass* DamageClass;

};

class URareCritterDescriptor : public UBaseCritterDescriptor
{
    float Rarity;

};

class UReactiveTerrain : public UObject
{

    void Receive_OnActorLeft(class UStatusEffectsComponent* StatusEffects);
    void Receive_OnActorEntered(class UStatusEffectsComponent* StatusEffects);
};

class UReactiveTerrainTrackerComponent : public UActorComponent
{
};

class URefineryHintComponent : public UTutorialHintComponent
{
    TWeakObjectPtr<class AFSDRefinery> Refinery;

    void ReceiveRefinerySpawned(class AFSDRefinery* InRefinery);
    void ReceivePipelineSegmentPlaced(class APipelineSegment* InSegment);
    void ReceiveExtractorPodSpawned(class APipelineExtractorPod* InExtractorPod);
    void OnRefinerySpawned(class AFSDRefinery* InRefinery);
};

class URefineryObjective : public UObjective
{
    FRefineryObjectiveOnRefinerySpawned OnRefinerySpawned;
    void RefineryDelegate(class AFSDRefinery* InRefinery);
    TSoftClassPtr<AFSDRefinery> refineryClass;
    TWeakObjectPtr<class AFSDRefinery> Refinery;
    ERefineryState RefineryState;
    class UDebrisPositioning* RefineryPlacement;
    TSoftClassPtr<AActor> RawMaterialClass;
    class UDebrisPositioning* RawMaterialPlacement;
    int32 RawMaterialCount;
    bool bMissionCompleted;
    bool bIsFinalBattle;
    int32 OptionalTunnelRoomID;

    void SpawnWells(class AProceduralSetup* Setup, const FVector& rigLocation, float minDistanceBetween, const TArray<FVector2D>& minMaxDistancesToRig);
    void RefineryDelegate__DelegateSignature(class AFSDRefinery* InRefinery);
    void ReceiveRefinerySpawned(class AFSDRefinery* InRefinery);
    void OnRep_Refinery();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    FVector GetRefinerySpawnLocation(TSubclassOf<class AFSDRefinery> refineryClass);
    void AddMissionCriticalItems(class AProceduralSetup* Setup);
};

class UReflectionHitscanComponent : public UHitscanBaseComponent
{
    class UTerrainType* PlatformTerrainType;
    bool bPlayImpactSound;
    bool bShowImpactOnReflections;
    bool bDamageOnReflections;
    float StraightenReflectionFactor;
    int32 ReflectionCount;

    void Server_RegisterHit_Reflection(const FReflectiveHitscanHit& Hit);
    void Server_RegisterHit(const FReflectiveHitscanHit& Hit);
    void All_ShowHit(const FReflectiveHitscanHit& Hit);
};

class UReflectionHitscanUpgrade : public UStandardItemUpgrade
{
    EReflectionHitscanUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EReflectionHitscanUpgradeType upgradeType);
};

class URegisterInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase
{
    FRegisterInviteNotificationBlueprintCallProxyOnInviteReceived OnInviteReceived;
    void BlueprintRegisterInvitiNotificationDelegate(const FBlueprintFriend& Results);
    FRegisterInviteNotificationBlueprintCallProxyOnInviteAccepted OnInviteAccepted;
    void BlueprintRegisterInvitiNotificationDelegate(const FBlueprintFriend& Results);
    FRegisterInviteNotificationBlueprintCallProxyOnInviteRejected OnInviteRejected;
    void BlueprintRegisterInvitiNotificationDelegate(const FBlueprintFriend& Results);
    class UObject* WorldContextObject;

    class URegisterInviteNotificationBlueprintCallProxy* RegisterInvitiNotification(class UObject* WorldContextObject);
};

class URegisterSessionInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase
{
    FRegisterSessionInviteNotificationBlueprintCallProxyOnSessionUserInviteAccepted OnSessionUserInviteAccepted;
    void BlueprintRegisterSessionInviteNotificationDelegate(const FBlueprintSessionResult& SessionInvite);
    class UObject* WorldContextObject;

    class URegisterSessionInviteNotificationBlueprintCallProxy* RegisterSessionInviteNotification(class UObject* WorldContextObject);
};

class URejectInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase
{
    FRejectInviteBlueprintCallProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FRejectInviteBlueprintCallProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();
    class UObject* WorldContextObject;

    class URejectInviteBlueprintCallProxy* RejectInvite(class UObject* WorldContextObject, FString ListName, FString UserId);
};

class UReloadSentryUsableComponent : public UUsableComponent
{
    FText OutOfAmmoText;
    FText AmmoFullText;
    class USoundBase* AudioOutOfAmmo;
    class USoundBase* AudioReloading;
    class UAudioComponent* ReloadingAudioComponent;
    bool Usable;
    bool bReloading;
    class UAudioComponent* ReloadAudioComponent;
    float AmmoPerSec;
    TWeakObjectPtr<class APlayerCharacter> OwningPlayerCharacter;
    class ASentryGun* SentryGun;

    void SetOwningPlayerCharacter(class APlayerCharacter* Player);
    void SetCanUse(bool isUsable);
    void OnRep_Reloading();
    void OnReloadAudioFinished();
};

class URepairObjective : public UObjective
{
    int32 RepairedObjectives;
    int32 ObjectivesToRepair;
    TSoftClassPtr<AActor> RepairObjectiveClass;
    class UGemResourceData* RepairObjectiveResource;
    class UDebrisPositioning* Positioning;
    int32 RepairResourcesPerActor;
    float RepairResourceDistanceFromActor;
    float MinRepairObjectiveDistanceToLandingZone;
    TArray<class AActor*> RepairedObjectivesList;

    void OnRep_RepairedObjectives();
    void OnRep_ObjectivesToRepair();
    void OnObjectiveRepaired(class URepairableComponent* repairable);
    void AllObjectivesRepaired();
};

class URepairableComponent : public UActorComponent
{
    FRepairableComponentOnFullyRepairedEvent OnFullyRepairedEvent;
    void RepairedDelegate(class URepairableComponent* Component);
    FRepairableComponentOnAllResourcesAquiredEvent OnAllResourcesAquiredEvent;
    void RepairedDelegate(class URepairableComponent* Component);
    FRepairableComponentOnRepairedEvent OnRepairedEvent;
    void RepairedDelegate(class URepairableComponent* Component);
    class UGemResourceData* RequiresCarriedResource;
    int32 ResourcesRequired;
    bool IsFullyRepaired;

    bool TryRepair(class APlayerCharacter* User);
    void OnRep_ResourcesRequired();
    int32 GetResourcesRequired();
    void Cheat_Repair();
};

class URepairableUsable : public UInstantUsable
{
};

class UReplaceMaterialUpgradeElement : public UItemUpgradeElement
{
    class UMaterialInterface* TargetMaterial;
    class UMaterialInterface* ReplaceWithMaterial;

};

class UReplaceSkeletonMeshUpgradeElement : public UItemUpgradeElement
{
    class USkeletalMesh* TargetMesh;
    class USkeletalMesh* ReplaceWithMesh;
    TSubclassOf<class UAnimInstance> ReplaceWithAnimInstance;

};

class UReplenishOxygenStatusEffectItem : public UStatusEffectItem
{
};

class UResourceBank : public UUsableComponentBase
{
    FResourceBankOnBeginDeposite OnBeginDeposite;
    void ResourceBankEvent(class APlayerCharacter* User);
    FResourceBankOnDepositing OnDepositing;
    void ResourceBankEvent(class APlayerCharacter* User);
    FResourceBankOnEndDeposite OnEndDeposite;
    void ResourceBankEvent(class APlayerCharacter* User);
    bool OpenForDeposit;
    class AFSDGameState* GameState;
    float DepositesPerSecond;
    float DepositeAmount;
    bool CanGetStrict;
    bool AddToTeamInventory;
    class USoundBase* AudioBeginDepositing;
    class USoundBase* AudioDepositing;
    class USoundBase* AudioEndDepositing;

    void ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void All_Depositing(class APlayerCharacter* Character);
};

class UResourceBasedObjective : public UObjective
{
};

class UResourceCreator : public UDataAsset
{
};

class UResourceData : public UDataAsset
{
    FText Title;
    FText TitlePlural;
    FText Description;
    FColor Color;
    class UTexture2D* Icon;
    int32 BuyingPrice;
    int32 SellingPrice;
    class UMissionStat* MinedMissionStat;
    bool IsCraftingMaterial;
    bool IsTradable;
    bool ForceShowOnEndScreen;
    bool AffectedByMutators;
    bool ScaleToMissionLength;
    bool ScaleToHazardLevel;
    bool ShowSeparatelyInEndScreen;
    TSoftClassPtr<AFSDPhysicsActor> Spawnable;
    bool IsWholeNumberResource;
    int32 CreditValue;
    int32 XPValue;
    float SeasonXPMultiplier;
    FGuid SavegameID;

    float GetOwnedAmount(class UObject* WorldContextObject);
    bool GetIsTradableCraftingMaterial();
};

class UResourceFeature : public URoomFeature
{
    FVector Location;
    class UResourceData* Resource;
    float BaseAmount;

};

class UResourceMutator : public UMutator
{
    TArray<class UResourceData*> Resources;
    float modifier;

};

class UResourceObjective : public UResourceBasedObjective
{
    class UResourceData* Resource;
    float ResourcesRequired;
    float ResourcesCollected;
    float ResourceBuffer;
    float RoundToNearest;
    FText ObjectivesText;
    FText CreditsRewardText;

    void OnResourceChanged(class UCappedResource* CappedResource, float Amount);
    void OnRep_ResourcesCollected(float prevAmount);
    float GetRequiredAmount(float missionScaling);
};

class UResourceReward : public UReward
{
    class UResourceData* Resource;
    int32 Amount;

};

class UResourceSchematicItem : public USchematicItem
{
    int32 Credits;
    class UResourceData* Resource;
    int32 ResourceAmount;

};

class UResourceVeinMutator : public UMutator
{
    class UResourceData* Resource;
    float VeinLengthMultiplier;
    float RangeMultiplier;
    float NoiseRangeMultiplier;

};

class UResourcesComponent : public UActorComponent
{
    FResourcesComponentOnResourceChanged OnResourceChanged;
    void ResourceChangedSignature(class UCappedResource* Resource, float Amount);
    FResourcesComponentOnResourceIncreased OnResourceIncreased;
    void ResourceAddedSignature(class UCappedResource* Resource, float Amount);
    FResourcesComponentOnResourceFull OnResourceFull;
    void ResourceFullSignature(class UCappedResource* Resource);
    FResourcesComponentOnResourceAdded OnResourceAdded;
    void ResourceAdded(class UCappedResource* Resource);
    TArray<class UCappedResource*> Resources;
    float ResourceCap;

    void ResourceIncreased(class UCappedResource* Resource, float Delta);
    void ResourceFull(class UCappedResource* Resource);
    void ResourceChanged(class UCappedResource* Resource, float currentAmount);
    void OnRep_Resources();
    int32 GetXPFromResourceMap(const TMap<UResourceData*, float>& Resources);
    int32 GetXpFromMining();
    TMap<UResourceData*, float> GetSeparateResourcesFromMap(const TMap<UResourceData*, float>& Resources);
    class UCappedResource* GetResource(class UResourceData* Data, bool createIfAmountIsZero);
    float GetCapacityPct();
    TArray<class UCappedResource*> GetAllResources();
};

class URestrictedResourceBank : public UResourceBank
{
    class UResourceData* RequiredResource;

};

class URetirementCampaignRequirement : public UCampaignRequirement
{
    class UPlayerCharacterID* characterID;
    int32 LevelRequirement;

};

class URetirementReward : public UUnlockReward
{
    class UPlayerCharacterID* characterID;

};

class URevolverUpgrade : public UStandardItemUpgrade
{
    ERevolerUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, ERevolerUpgrades upgradeType);
};

class UReward : public UDataAsset
{
};

class URewardMutator : public UMutator
{
    FText RewardText;
    float XPMultiplier;
    float CreditMultiplier;

};

class URewardWidget : public UUserWidget
{
    class UReward* Reward;

    void PlayReceiveAnim();
};

class URewardsSubSystem : public UGameInstanceSubsystem
{
    FPendingRewards PendingMissionRewards;
    TArray<FClaimableRewardEntry> PendingPromotionRewards;

    bool ShouldPendingRewardsBeShown();
    bool ShouldPendingRewardsBeGiven();
    bool Receive_GetPendingRewards(class UObject* WorldContext, FPendingRewardsStats& OutStats, FPendingRewards& OutRewards);
    bool HasPendingRewards();
    bool GetPendingRewards(FPendingRewardsStats& OutStats, FPendingRewards& OutRewards);
    void ClearPendingRewards();
    void ApplyPendingRewards(class AFSDPlayerController* Controller);
};

class URichTextInputDecorator : public UCustomRichTextDecorator
{
    TSubclassOf<class URichTextInputWidget> DecoratorWidgetClass;

};

class URichTextInputWidget : public UUserWidget
{
    FName InputName;
    TMap<class FName, class FString> MetaData;
    FText Content;
    FTextBlockStyle TextStyle;
    EFSDInputSource InputSource;
    class URichTextBlock* RichTextBlock;

    void ScaleTextBlockToHeight(class UTextBlock* InTextBlock, float LineHeight);
    void ReceiveInputUnknown();
    void ReceiveInputDetails(const FInputDisplay& InDisplay);
    void OnInputSourceChanged(EFSDInputSource InSource);
    void OnCustomKeyBindsChanged();
    FVector2D MeasureTextSize(const FText& Text, float Scale);
    float GetLineHeight();
    void ApplyTextStyle(class UTextBlock* InTextBlock, const FTextBlockStyle& InTextStyle);
};

class URichTextSizable : public URichTextBlock
{
    bool bOverrideDefaultSize;
    int32 OverrideDefaultFontSize;
    bool bOverrideDefaultColor;
    FSlateColor OverrideDefaultFontColor;

    void SetDefaultFontSize(int32 inFontSize);
    void SetDefaultFontColor(const FLinearColor& InColor);
};

class URichTextStylable : public URichTextBlock
{
    FSlateFontInfo Font;
    FSlateColor FontColor;
    TMap<class FName, class FTextStyleOverride> Styles;

};

class URicochetHitCountEffect : public UWeaponHitCountEffect
{
};

class URivalBombNodeAniminstance : public UAnimInstance
{
    bool IsActive;
    bool IsFailed;
    bool isDone;
    FRotator Rotation;
    float StartOffset;

    void SetRivalBombNodeState(ERivalBombNodeState NewState);
};

class URockCrackedAnimInstance : public UAnimInstance
{
    class ARockCrackerPod* Pod;
    ERockCrackerstate PodState;
    bool IsActive;
    bool IsBroken;

};

class URoomCarverComponent : public USceneComponent
{
    class URoomGenerator* RoomGenerator;

};

class URoomDecorationObject : public UDataAsset
{
    class UDebrisPositioning* Positioning;
    TSubclassOf<class AActor> Actor;

};

class URoomFeature : public UObject
{
    TArray<class URoomFeature*> RoomFeatures;

};

class URoomGenerator : public URoomGeneratorBase
{
    TArray<class URoomFeature*> RoomFeatures;

    TArray<class URoomFeature*> GetAllRoomFeatures();
};

class URoomGeneratorBase : public UDataAsset
{
    float Bounds;
    bool CanOnlyBeUsedOnce;
    ERoomMirroringSupport MirrorSupport;
    FGameplayTagContainer RoomTags;

};

class URoomGeneratorGroup : public UDataAsset
{
    TArray<class URoomGenerator*> Rooms;

    class URoomGenerator* GetRandomRoomWithTags(FRoomGeneratorGroupInstance& groupInstance, const FGameplayTagQuery& queury, FRandomStream& RandomStream);
    class URoomGenerator* GetRandomRoom(FRandomStream& RandomStream);
    FRoomGeneratorGroupInstance CreateGroupInstance();
};

class URotateToFace : public USceneComponent
{
    FVector TargetOffset;
    class AActor* Target;
    int32 Face;

    void SetTarget(class AActor* Target);
    void SetShouldFaceAway(bool FaceAway);
};

class URotatingSceneComponent : public USceneComponent
{
    FRotator DeltaRotaion;
    float BobbingSpeed;
    float BobbingSize;
    bool Sweep;
    bool ForceParentUp;
    ETeleportType TeleportMode;

};

class URunningMissionBP : public UObject
{

    void StartLogic();
};

class USTLMeshCarver : public UObject
{
    FBox AABB;
    FDeepCSGFloatTree BSPTree;
    TArray<FVector> Vertices;

};

class USTLMeshCarverComponent : public UPrimitiveComponent
{
    class UTerrainMaterialBase* TerrainMaterial;
    class USTLMeshCarver* MeshCarver;
    ECarveFilterType Filter;
    bool PreviewEnabled;

};

class USalutePerkComponent : public UFloatPerkComponent
{
    float CoolDown;
    float FleeRadius;

    void OnSalute();
};

class USalvageObjective : public UObjective
{
    int32 SalvageActorCount;
    class UGemResourceData* LegResource;
    int32 LegCountPerActor;
    float LegDistanceToActor;
    FSalvageObjectiveOnDisableLegSpheres OnDisableLegSpheres;
    void Delegate();
    class UDebrisPositioning* Positioning;
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    TSoftClassPtr<AMiniMule> SalvageActor;
    TSoftClassPtr<ADropPod> DamagedPodClass;
    class UDebrisPositioning* DamagedPodPositioning;
    float DamagedPodMinDistanceToDropZone;
    class ADropPod* DamagedPod;
    int32 ActorsToSalvage;
    int32 ActorsSalvaged;
    int32 RepairPoints;
    int32 PointsRepaired;
    float MinSalvageActorDistanceToLandingZone;
    bool HasMuleReturnedToPod;
    TArray<class AMiniMule*> AllSalvageActors;
    TArray<class AMiniMule*> SalvagedActors;

    void PointRepaired();
    void OnRep_PointsRepaired();
    void OnRep_ActorsToSalvage(int32 prevAmount);
    void OnRep_ActorsSalvaged(int32 prevAmount);
    void OnActorRepaired(class URepairableComponent* repairable);
    FTransform FindRepairPointLocation(class AProceduralSetup* Setup, const FVector& podLocation, float Radius, float maxVerticalDistance, class UDebrisPositioning* DebrisPositioning, TSubclassOf<class AActor> terrainPlacement, const TArray<FVector>& locationsToAvoid, class UCurveFloat* AvoidCostCurve);
    void AllActorsSalvaged();
};

class USavableDataAsset : public UDataAsset
{
    bool EnableDangerousSaveGameIDEditing;
    FGuid SavegameID;
    class UBuildRestriction* BuildRestriction;

    FGuid GetSavegameID();
};

class USavableObject : public UObject
{
    bool EnableDangerousSaveGameIDEditing;
    FGuid SavegameID;

};

class USavablePrimaryDataAsset : public UPrimaryDataAsset
{
    int32 BuildRestrictions;
    int32 PlatformRestrictions;
    bool EnableDangerousSaveGameIDEditing;
    FGuid SavegameID;
    class UBuildRestriction* BuildRestriction;

};

class USaveGameLibrary : public UBlueprintFunctionLibrary
{

    bool TryGetSaveGameSnapShot(class UObject* WorldContext, FString Filename, int32 userIdx, FSaveGameSnapShot& OutSnapShot);
    TMap<class FString, class FDateTime> GetUserSaveGameSlots(FString UserId);
    TMap<class FString, class FDateTime> GetAllSaveGameSlots();
};

class USaveGameSettings : public UDataAsset
{
    TMap<class FGuid, class UVanityItem*> CampaignVanityFixupList;

};

class USaveGameStateComponent : public UActorComponent
{
    FSaveGameStateComponentOnEquippedPerksChanged OnEquippedPerksChanged;
    void ItemUpgradesChangedDelegate();
    FSaveGameStateComponentOnItemUpgradeCrafted OnItemUpgradeCrafted;
    void ItemUpgradeCraftSignature(class UItemUpgrade* Upgrade);
    FSaveGameStateComponentOnItemUpgradeUnequipped OnItemUpgradeUnequipped;
    void ItemUpgradeEquipSignature(TSubclassOf<class AActor> itemClass, class UItemUpgrade* Upgrade);
    FSaveGameStateComponentOnPlayerProgressChanged OnPlayerProgressChanged;
    void PlayerProgressChangedSignature(class AFSDPlayerState* PlayerState, FPlayerProgress Progress);
    FSaveGameStateComponentOnLoadoutChangedEvent OnLoadoutChangedEvent;
    void LoadoutChangedDelegate();
    FSaveGameStateComponentOnCharacterStatsChanged OnCharacterStatsChanged;
    void CharacterProgressChangedSignature(class AFSDPlayerState* PlayerState);
    FSaveGameStateComponentOnCreditsChanged OnCreditsChanged;
    void CreditsChangedDelegate();
    int32 Credits;
    TArray<FSaveGameStatePerkItem> EquippedPerks;
    class UVictoryPose* VictoryPose;
    FItemLoadout EquippedLoadout;
    FActiveCampaingMission ActiveCampaignMission;
    TArray<FItemUpgradeSelection> ItemUpgradeSelections;
    FPlayerProgress PlayerProgress;
    TArray<FCharacterProgress> CharacterStats;

    void SetCampaign();
    void Server_SetVictoryPose(class UVictoryPose* pose);
    void Server_SetPlayerProgress(const FPlayerProgress& Progress);
    void Server_SetLoadout(const FItemLoadout& Loadout, const TArray<FItemUpgradeSelection>& weaponLoadouts);
    void Server_SetEquippedPerks(const TArray<FSaveGameStatePerkItem>& perks);
    void Server_SetCredits(const int32 Amount);
    void Server_SetCharacterStats(const TArray<FCharacterProgress>& Stats);
    void Server_SetActiveCampaignMission(FActiveCampaingMission Data);
    void RefreshLoadoutFromSave(class UPlayerCharacterID* characterID);
    void OnRep_PlayerProgress();
    void OnRep_ItemUpgradeSelections();
    void OnRep_Credits();
    void OnRep_CharacterStats();
    void OnRep_ActiveCampaignMission();
    void ItemUpgradeEquipSignature__DelegateSignature(TSubclassOf<class AActor> itemClass, class UItemUpgrade* Upgrade);
    void ItemUpgradeCraftSignature__DelegateSignature(class UItemUpgrade* Upgrade);
    bool IsActiveCampaignMission(class UGeneratedMission* mission);
    FCharacterProgress GetCharacterStat(class UPlayerCharacterID* characterID);
    void CreditsChangedDelegate__DelegateSignature();
};

class USawedOffShotgunUpgrade : public UStandardItemUpgrade
{
    ESawedOffShotgunUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, ESawedOffShotgunUpgrades upgradeType);
};

class UScalingMeshAfflictionEffect : public UAfflictionEffect
{
    EFrozenAfflictionType AfflictionType;
    TArray<FScalingMeshAfflictionItem> IceParts;
    class UMaterialInterface* MaterialOverride;
    FName ParticleBone;
    TArray<class UMaterialInterface*> IceMaterials;

};

class USchematic : public USavableDataAsset
{
    FSchematicOnSchematicAddedToInventory OnSchematicAddedToInventory;
    void SchematicDelegate(class USchematic* Schematic);
    FSchematicOnSchematicReset OnSchematicReset;
    void SchematicDelegate(class USchematic* Schematic);
    FSchematicOnSchematicBuilt OnSchematicBuilt;
    void SchematicDelegate(class USchematic* Schematic);
    class USchematicCategory* Category;
    class USchematicPricingTier* PricingTier;
    class USchematicRarity* Rarity;
    class UPlayerCharacterID* UsedByCharacter;
    class USchematicItem* Item;
    TMap<UResourceData*, int32> CraftingCost;
    bool CostIsLocked;

    void SetCraftingMaterialCost();
    void SetCostLocked(bool IsLocked);
    void SchematicDelegate__DelegateSignature(class USchematic* Schematic);
    void ResetGivenReward(class UFSDSaveGame* SaveGame);
    void RemoveSchematicFromPlayerInventory(class UObject* WorldContext);
    void GiveRewardForFree(class UFSDSaveGame* SaveGame);
    FText GetTitle();
    ESchematicState GetSchematicState(class UObject* WorldContext);
    class USchematicItem* GetSchematicItem();
    TMap<UResourceData*, int32> GetResourceCost();
    FColor GetIconTint();
    class UTexture* GetIcon(class UObject* WorldContextObject);
    FText GetDescription();
    bool CanAffordSchematic(class UObject* WorldContext);
    void BuildSchematic(class UObject* WorldContext);
    void AddSchematicToPlayerInventory(class UObject* WorldContext);
};

class USchematicAquisition : public UItemAquisitionBase
{
    class USchematicPricingTier* PricingTier;
    class USchematicRarity* Rarity;
    TArray<class USchematic*> Schematics;

};

class USchematicBank : public USchematicBankBase
{
    TSet<USchematic*> Schematics;

    void AddSchematic(class USchematic* Schematic);
};

class USchematicBankBase : public UDataAsset
{
};

class USchematicBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void PriceSchematics(const TSet<USchematic*>& Schematics);
    void PriceAllSchematics(bool lockPrices);
    void LockSchematics(const TSet<USchematic*>& Schematics);
    bool HasAnyUnlockableSchematics(class UObject* WorldContextObject, class UPlayerCharacterID* characterID, TSet<USchematicCategory*>& Categories);
    class USchematicCategory* FindItemUpgradeSchematicCategory(class UItemUpgrade* Upgrade);
    void AddSkinSchematicCollectionToSettings(class UItemSkinSchematicCollection* Collection);
};

class USchematicCategory : public USavableDataAsset
{
    FText CategoryName;
    TSoftObjectPtr<UTexture2D> FrameTexture;
    FLinearColor FrameTint;
    FLinearColor BackgroundTint;
    ESchematicType SchematicType;
    TSoftObjectPtr<UDialogDataAsset> ShoutForging;
    class UEventRewardType* RewardType;
    int32 SortOrder;

};

class USchematicItem : public UObject
{

    FText GetTitle();
    FColor GetIconTint();
    class UTexture* GetIcon(class UObject* WorldContextObject);
    FText GetDescription();
};

class USchematicPricingTier : public UPricingTier
{
};

class USchematicRarity : public UDataAsset
{
    float Rarity;

};

class USchematicReward : public UUnlockReward
{
    ESchematicType SchematicType;
    class USchematic* RewardedSchematic;

};

class USchematicSettings : public UDataAsset
{
    class UDataTable* PricingTable;
    class USchematic* BlankSchematic;
    TSet<USchematicBank*> SchematicBanks;
    TSet<UOverclockBank*> OverclockBanks;
    TSet<UItemSkinSchematicCollection*> SkinSchematicCollections;
    TSet<USchematicBankBase*> VanitySchematicBanks;
    TMap<class ESchematicType, class FSchematicType> SchematicTypes;
    class USchematicBank* EndlessSchematics;
    TSet<USchematicCategory*> Categories;
    TArray<class USchematicCategory*> OverclockCategories;
    TArray<class USchematicCategory*> VanityCategories;
    TArray<class USchematicCategory*> EndlessCategories;
    class USchematicPricingTier* OverclockPricingTier;
    TArray<class USchematicPricingTier*> VanityPricingTiers;
    TArray<class USchematicRarity*> VanityRarity;
    TArray<class USchematicRarity*> OverclockRarity;
    TArray<class USchematicRarity*> EndlessRarity;
    class USchematicCategory* VanityCatHeadWear;
    class USchematicCategory* VanityCatMoustache;
    class USchematicCategory* VanityCatBeard;
    class USchematicCategory* VanityCatArmor;
    class USchematicCategory* VanityCatEyebrow;
    class USchematicCategory* VanityCatHairColor;
    class USchematicCategory* VanityCatSideburn;
    class USchematicCategory* VanityCatSkinColor;
    class USchematicCategory* VanityCatVictoryPose;
    class USchematicCategory* WeaponPaintJob;
    class UDataTable* SchematicGATable;
    TMap<class FGuid, class USchematic*> AllSchematicsMap;
    TSet<USchematic*> AllSchematics;

    bool ValidateVanitySchematics();
    FSchematicType GetSchematicTypeData(ESchematicType InType);
    TSet<USchematic*> GetSchematics();
    class UOverclockBank* GetOverclocksForItem(class UItemID* Item);
};

class USeamlessTravelEventActivator : public UActorComponent
{
    class USeamlessTravelEventKey* EventKey;

};

class USeamlessTravelEventKey : public UDataAsset
{
};

class USeamlessTravelStorage : public UGameInstanceSubsystem
{
    class UDifficultySetting* ChosenDifficulty;
    TMap<class UPlayer*, class bool> PlayerShouldStartInMedbay;
    TMap<UResourceData*, float> Resources;
    float MissionTime;
    TMap<FName, float> StoredFloatValues;
    TMap<FName, int32> StoredIntValues;
    TSet<USeamlessTravelEventKey*> EventKeys;

    void ClearGameStateSeamlessTravelStorage();
};

class USeason : public USavableDataAsset
{
    FText SeasonName;
    int32 SeasonNumber;
    TSoftObjectPtr<UTexture2D> SeasonIcon;
    TArray<FSeasonLevel> Levels;
    FSeasonLevel RewardAfterAllLevels;
    TArray<FUnassignedReward> UnassignedRewards;
    class UTreeOfVanity* TreeOfVanity;
    class UGameDLC* SeasonDLC;
    FRuntimeFloatCurve SpawnChanceByMissionLength;
    FRuntimeFloatCurve MinorSpawnChanceByMissionLenght;
    TArray<FSeasonalEventEntry> SeasonalEvents;
    TArray<FSeasonalEventEntry> MinorSeasonalEvents;
    TArray<FSeasonalEventEntryChance> SpawnChanceSeasonalEvents;
    int32 NumberOfScripChallenges;
    TArray<class UMissionStat*> ScripChallenges;
    TArray<FWaveEntry> SeasonSpecificWaves;
    float SeasonWaveInMissionChance;
    class UMissionWarning* SeasonWarning;

    void AddUnassignedReward(int32 Index, class UReward* Reward);
    void AddLevel(int32 Index, class UReward* Reward, class UReward* specialReward);
};

class USeasonChallenge : public USavableDataAsset
{
    FText ChallengeText;
    TSoftObjectPtr<UTexture2D> Icon;
    TSoftObjectPtr<UTexture2D> IconOutlined;
    FLinearColor Color;
    TArray<FTrackedStatInfo> TrackedStats;
    TArray<FChallengeVariation> Variations;
    int32 NumberOfChoices;
    float ChallengeWeight;
    bool bIsSpecialChallenge;
    int32 MaxOccurences;
    class USeasonChallenge* ChallengeAfterMaxOccurences;
    TArray<class TSubclassOf<UCampaign>> RequiredCampaigns;

    class UTexture2D* GetIconOutlined();
    class UTexture2D* GetIcon();
};

class USeasonEditorRewardWidget : public UUserWidget
{
    class UReward* Reward;

};

class USeasonEventData : public USavableDataAsset
{
    FText Name;
    int32 PerformancePoints;
    int32 PerformancePointsOnFail;
    TSoftObjectPtr<UTexture2D> Icon;

};

class USeasonInfinityLevelWidget : public USeasonLevelWidget
{
    int32 InfinityStartLevel;

};

class USeasonLevelWidget : public UUserWidget
{
    FSeasonLevelWidgetOnRewardClaimed OnRewardClaimed;
    void RewardClaimed(class UReward* Reward);
    int32 Level;
    int32 SeasonLevel;
    bool IsNormalClaimed;
    bool IsSpecialClaimed;
    bool IsUnlocked;
    bool IsLastInRow;
    FSeasonLevel LevelInfo;

    bool TryClaimReward(bool isNormalReward);
    void SetData(int32 InLevel, bool inLastInRow);
    void RefreshState();
    void OnDataSet();
};

class USeasonReplicatorComponent : public UActorComponent
{

    void CompleteSeasonEvent(class USeasonEventData* inEvent);
};

class USeasonSettings : public UDataAsset
{
    class USeason* CurrentSeason;
    int32 MaxActiveChallenges;
    TArray<class USeasonChallenge*> SeasonChallenges;
    int32 XPPerLevel;
    class UCurveFloat* XPToPerforcemancePointsCurve;
    int32 TreeOfVanitySnapSize;
    float SpecialChallengeChange;
    class UMissionStat* HeartsColledtedStat;
    FIntPoint SporeTowerPlagueGainRange;
    int32 HeartsPerScrip;
    int32 NumberOfScriptsFromPlague;

};

class USeasonTokenReward : public UReward
{
    int32 Amount;

};

class USeasonXPReward : public UReward
{
    int32 Amount;

};

class USeasonsSubsystem : public UGameInstanceSubsystem
{
    FSeasonsSubsystemOnXPChanged OnXPChanged;
    void OnXPChangedSignature();
    FSeasonsSubsystemOnTokensChanged OnTokensChanged;
    void OnTokensChangedSignature(int32 NumberOfTokens, int32 Change);
    FSeasonsSubsystemOnVanityTreeReset OnVanityTreeReset;
    void OnVanityTreeReset();
    FSeasonsSubsystemOnScripChallengeUpdated OnScripChallengeUpdated;
    void OnScripChallengeUpdated();
    FSeasonsSubsystemOnClaimStatusChanged OnClaimStatusChanged;
    void ClaimStatusChanged(bool AllClaimed);
    TSoftObjectPtr<USpecialEvent> forcedSeasonEvent;
    FTimespan NewChallengeTimeSpan;
    FSeasonMissionResult TempSeasonMissionResult;
    FSeasonMissionResult LatestMissionSeasonResult;

    FTimespan TimeToNewChallenge();
    void SetSeasonCompletedAnnounced(bool IsAnnounced);
    void SetHasOptedOutOfSeasonContent(bool hasOptedOut);
    void RerollChallenge(int32 Index);
    void OnStatChanged(class UObject* WorldContext, class UMissionStat* Stat, float Value);
    void OnScripChallengeCompleted(class UObject* WorldContext, class UMissionStat* Stat, float Value);
    void IsRewardClaimed(int32 Level, bool& IsNormalClaimed, bool& IsSpecialClaimed);
    bool IsNodeUnlocked(int32 TreeOfVanityNodeID);
    bool IsNodeBought(int32 TreeOfVanityNodeID);
    void InitializeStatsAndChallenges();
    bool HasUnclaimedRewards(int32& Level);
    bool HasOptedOutOfSeasonContent();
    bool HasClaimedLevelRewards(int32 startLevel, int32 numberOfLevels);
    bool HasClaimedAllRewards();
    int32 GetUnusedHearts();
    int32 GetSeasonXPFromMissionXP(class AFSDPlayerState* PlayerState);
    int32 GetSeasonXP();
    int32 GetSeasonNumber();
    FText GetSeasonName();
    FSeasonMissionResult GetSeasonMissionResult();
    void GetSeasonLevelFromXP(int32 XP, int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& LevelXPTotal);
    void GetSeasonLevel(int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& LevelXPTotal);
    bool GetSeasonExpiryDate(FDateTime& ExpiryDate);
    bool GetSeasonCompletedAnnounced();
    void GetSeasonBought(bool& isBought);
    void GetScriptChallengeInfo(int32& Completed, int32& claimed, int32& Total);
    int32 GetNumberOfTokens(class UObject* WorldContextObject);
    int32 GetNumberOfSeasonLevels();
    int32 GetNumberOfClaimedPlagueHeartScrips();
    FSeasonLevel GetNextReward();
    int32 GetLevelXP(int32 Level);
    FSeasonLevel GetLevelReward(int32 Level);
    void GetLevelProgress(int32 Level, float& levelPercent);
    TArray<class UDataAsset*> GetAssetReferences(int32 ChallengeIndex, class USeasonChallenge*& outChallenge);
    TArray<FChallengeInfo> GetActiveChallenges(bool canGenerateNewChallenge);
    class UTextureRenderTarget2D* GenerateVanityRewardIcon(class UVanityItem* Item, class UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size);
    class UTextureRenderTarget2D* GenerateSkinRewardIcon(class UItemSkin* Skin, class UPlayerCharacterID* Character, bool bShowCloseUp, FTransform Offset, bool rebuildMesh, FVector2D Size);
    class UTextureRenderTarget2D* GeneratePickaxeRewardIcon(class UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, class UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size);
    bool ConvertHeartsToScrip(int32& scripGained);
    void CompleteSeasonEvent_Server(class USeasonEventData* inEvent);
    bool ClaimScripChallenge();
    bool ClaimReward(class UObject* WorldContext, class AFSDPlayerController* Player, int32 Level, bool isNormalReward);
    void CHEAT_SetSeasonMissionResult(int32 XPFromMission, int32 numberOfChallenges, class USeasonEventData* Event);
    void CHEAT_ResetTimeToNewChallenge();
    void CHEAT_ResetReroll();
    void CHEAT_AddChallenge();
    bool CanRerollChallenge();
    bool CanOptOutOfSeasonContent();
    bool BuyTreeNode(class UObject* WorldContextObject, class AFSDPlayerController* Player, int32 TreeOfVanityNodeID);
};

class USendInviteBlueprintCallProxy : public UOnlineBlueprintCallProxyBase
{
    FSendInviteBlueprintCallProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FSendInviteBlueprintCallProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();
    class UObject* WorldContextObject;

    class USendInviteBlueprintCallProxy* SendInvite(class UObject* WorldContextObject, FString ListName, FString UserId);
};

class USendSessionInviteToFriendBlueprintCallProxy : public UOnlineBlueprintCallProxyBase
{
    FSendSessionInviteToFriendBlueprintCallProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FSendSessionInviteToFriendBlueprintCallProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();
    class UObject* WorldContextObject;

    class USendSessionInviteToFriendBlueprintCallProxy* SendSessionInviteToFriend(class UObject* WorldContextObject, FString FriendId);
};

class USentryGunAnimInstance : public UAnimInstance
{
    class ASentryGun* SentryGun;
    class ARedeployableSentryGun* RedeployableSentryGun;
    FRotator TurretRotation;
    float YawOffset;
    float BuildProgress;

};

class USentryGunTypeUpgrade : public UItemUpgrade
{
    TSubclassOf<class ARecallableSentryGun> SentryGunType;
    TSubclassOf<class AItemMarker> MarkerType;

};

class USentryGunUpgrade : public UStandardItemUpgrade
{
    ESentryGunUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, ESentryGunUpgradeType upgradeType);
};

class USessionHandling : public UBlueprintFunctionLibrary
{

    void StopVoice(class UObject* WorldContextObject);
    void StartVoice(class UObject* WorldContextObject);
    bool StartSearchForFriends(int32 localUserNum, class UFSDGameInstance* GameInstance);
    bool StartSearchForBlockedUsers(int32 localUserNum);
    void StartCheckForInstalledDLC(class UObject* WorldContextObject);
    void SortServerList(class UObject* WorldContextObject, EServerSortOrder order, bool Reverse, bool sortByFriends, TArray<FBlueprintSessionResult>& servers);
    void ShowStoreUI(class UObject* WorldContextObject);
    void ShowInviteUI(class UObject* WorldContextObject);
    void JoinOfficialXboxClub(class UObject* WorldContextObject);
    bool IsVoiceChatting();
    bool IsInActiveSession();
    bool IsDisconnectReasonAKick(EDisconnectReason reason);
    FString GetVoiceStatus();
    FText GetSessionJoinError(class UObject* WorldContextObject);
    bool GetOnlinePlayerName(int32 localUserNum, FString& Name);
    EFSDNATType GetNATType(class UObject* WorldContextObject);
    EMissionStructure GetMissionStructure(const FBlueprintSessionResult& Result);
    FString GetLoginStatus(int32 localUserNum);
    FString GetHostUsername(class UObject* WorldContextObject);
    FString GetHostUniqueId(class UObject* WorldContextObject);
    bool GetFriendsList(int32 localUserNum, TArray<FFriendInfo>& Players);
    FString GetFriendlyServerNameSanitized(class UObject* WorldContextObject);
    FString GetFriendlyServerName(class UObject* WorldContextObject);
    bool GetCurrentSessionState(FString& sessionState, FString& ID);
    bool FSDUpdateSessionInfo(class UObject* WorldContextObject);
    EFSDMissionStatus FSDMissionStatus(const FBlueprintSessionResult& Result);
    void FSDListen(class UObject* WorldContextObject);
    bool FSDIsSessionValid(const FBlueprintSessionResult& Result);
    bool FSDIsPrivateServer(const FBlueprintSessionResult& Result);
    bool FSDIsPasswordRequired(const FBlueprintSessionResult& Result);
    bool FSDIsModdedServer(const FBlueprintSessionResult& Result);
    bool FSDIsModdedSandboxServer(const FBlueprintSessionResult& Result);
    bool FSDIsFullServer(const FBlueprintSessionResult& Result);
    bool FSDIsEliteDeepDive(const FBlueprintSessionResult& Result);
    bool FSDIsClassLocked(const FBlueprintSessionResult& Result);
    bool FSDHasHiddenModsNotInstalledOnClient(const FBlueprintSessionResult& Result);
    bool FSDHasGameStarted(const FBlueprintSessionResult& Result);
    bool FSDGetServerStartTime(const FBlueprintSessionResult& Result, FDateTime& StartTime);
    FString FSDGetServerNameSanitized(const FBlueprintSessionResult& Result);
    FString FSDGetServerName(const FBlueprintSessionResult& Result);
    FString FSDGetServerID(const FBlueprintSessionResult& Result);
    TArray<FString> FSDGetRequiredModsToDownload(const FBlueprintSessionResult& Result);
    FString FSDGetRegion(const FBlueprintSessionResult& Result);
    TArray<class UPlayerCharacterID*> FSDGetPlayerClassIDs(const FBlueprintSessionResult& Result);
    TArray<class TSubclassOf<APlayerCharacter>> FSDGetPlayerClasses(const FBlueprintSessionResult& Result);
    TArray<FString> FSDGetOptionalModsInstalled(const FBlueprintSessionResult& Result, bool ExcludeVerifiedMods);
    int32 FSDGetNumPlayers(const FBlueprintSessionResult& Result);
    TArray<FString> FSDGetModsInstalled(const FBlueprintSessionResult& Result, bool ExcludeVerifiedMods);
    int32 FSDGetMissionSeed(const FBlueprintSessionResult& Result);
    FString FSDGetMapName(const FBlueprintSessionResult& Result);
    FString FSDGetHostUserID(const FBlueprintSessionResult& Result);
    int32 FSDGetGlobalMissionSeed(const FBlueprintSessionResult& Result);
    float FSDGetDistanceFloat(const FBlueprintSessionResult& Result);
    EServerDistance FSDGetDistance(const FBlueprintSessionResult& Result);
    class UDifficultySetting* FSDGetDifficulty(const FBlueprintSessionResult& Result);
    FString FSDGetBuildId(const FBlueprintSessionResult& Result);
    bool FSDCancelFindSessions(class UObject* WorldContextObject);
    bool FindBestQuickJoinServer(class UObject* WorldContextObject, TArray<FBlueprintSessionResult>& sessions, class UDifficultySetting* Difficulty, class UBiome* Biome, class UMissionTemplate* MissionTemplate, FBlueprintSessionResult& OutResult);
    bool AllowLinkToExternalFeedback(class UObject* WorldContextObject);
};

class USetCooldownPerkActivation : public UFloatPerkActivation
{
};

class USetImpulseDamageBonus : public UDamageBonusBase
{
    class UDamageImpulse* DamageImpulse;

};

class USetMaxUsesPerkActivation : public UFloatPerkActivation
{
};

class USharkAnimInstance : public USpiderAnimInstance
{
    ESharkEnemyState SharkState;
    bool IsCloseToGround;
    bool AttackConnected;
    bool IsAttackingAndAttackNotConnected;
    bool IsNotAttackingOrAttackConnected;
    bool IsFalling;
    bool IsVulnerable;
    float BendValue;
    bool IsTurning;
    float TurnSpeed;
    float IdleSpeed;

};

class UShieldBoostUsable : public UInstantUsable
{

    void OnCharacterBoosted(class APlayerCharacter* User, EInputKeys Key);
};

class UShieldGeneratorUpgrade : public UStandardItemUpgrade
{
    EShieldGeneratorUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AItem> Item, class AFSDPlayerState* Player, EShieldGeneratorUpgrades upgradeType);
};

class UShieldLinkComponent : public UFloatPerkComponent
{
    TSubclassOf<class UStatusEffect> BoostedStatusEffect;
    class UStatusEffect* BoostedStatusEffectInstance;
    float LinkDistance;
    TSet<APlayerCharacter*> LinkedCharacters;
    TSubclassOf<class UStatusEffect> LinkStatusEffect;

    void TimerFunction();
};

class UShieldLinkedAfflictionEffect : public UAfflictionEffect
{
};

class UShootTask : public ULineSpikeTaskBase
{
    bool HasToFinish;

};

class UShootingPlantAnimInstance : public UEnemyAnimInstance
{
    class AActor* Target;
    float Yaw;
    float MappedYaw;
    float Pitch;
    float YawSpeed;
    float PitchSpeed;
    bool IsVisible;
    bool LookingLeft;
    bool LookingRight;

};

class UShootingSpiderAnimInstance : public USpiderAnimInstance
{
    float LookAtBlend;
    bool CheckCurve;
    TWeakObjectPtr<class AActor> TargetActor;
    FVector LookAtLocation;

};

class UShoutStatusEffectItem : public UStatusEffectItem
{
    class UDialogDataAsset* BeginShout;

};

class UShoutWidget : public UUserWidget
{
    TWeakObjectPtr<class APlayerCharacter> Sender;
    FText Text;
    float Duration;

    void OnShout();
};

class UShowroomCameraKey : public UDataAsset
{
};

class UShowroomController : public UActorComponent
{
    class AShowroomStage* Stage;

    void SetLightChannels(class AActor* Actor);
    void RotateShowroom(float Pitch, float Yaw);
    void ResetShowroomRotation();
    FRotator GetShowroomRotation();
};

class UShowroomManager : public UActorComponent
{
    FVector ShowroomLocation;
    TSubclassOf<class AShowroomStage> CurrentStage;
    class AShowroomStage* StageInstance;
    class UTextureRenderTarget2D* RenderTarget;

    class UShowroomController* GetController();
    void ClearShowroom();
};

class UShowroomSceneCaptureComponent : public USceneCaptureComponent2D
{
    class UShowroomCameraKey* CameraKey;

};

class UShowroomSettings : public UDataAsset
{
    TSoftClassPtr<UEnemyShowroomController> EnemyShowroomController;
    TSoftClassPtr<UCharacterShowroomController> CharacterShowroomController;
    TSoftClassPtr<AShowroomStage> CharacterStage;

};

class UShredderAnimInstance : public UEnemyAnimInstance
{
    bool InFoldoutRange;
    bool InSpinRange;

};

class USideburnsVanityItem : public UVanityItem
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    bool RequiresSlimArmor;

};

class USimpleArmorDamageComponent : public UBaseArmorDamageComponent
{
    FSimpleArmorDamageComponentOnRadialArmorPartsDestroyedEvent OnRadialArmorPartsDestroyedEvent;
    void SimpleArmorRadialDamagedDelegate(const TArray<uint8>& destroyedParts);
    float ArmorStrength;
    TMap<class FName, class FDestructableBodypartItem> PhysBoneToArmor;
    FArmorDamageInfo ArmorDamageInfo;

    void OnRep_ArmorDamageInfo(FArmorDamageInfo OldArmorDamageInfo);
};

class USimpleBossFight : public UObject
{
    FBossFight BossFight;

};

class USimpleHealthComponent : public UHealthComponentBase
{
    float Damage;
    float MaxHealth;
    bool InvulnerableToNonDefinedResistances;
    float EnvironmentalDamageResistance;
    bool bShowHealthBar;
    FVector HealthBarOffsetWorld;
    TWeakObjectPtr<class UEnemyComponent> EnemyComponent;
    TMap<UPawnStat*, float> Resistances;
    TArray<class UDamageTag*> RequiredDamageTags;
    bool AutomaticFlushNetDormancy;

    void OnRep_Damage(float oldDamage);
    float HealFromDeath(float Amount);
};

class USimpleMovingEnemyAnimInstance : public UEnemyAnimInstance
{
    float Speed;
    FVector Velocity;
    float WalkCycleSpeed;
    float StartMovingSpeed;
    float StopMovingSpeed;
    float WalkCycleMinRate;
    float WalkCyclePlayRate;
    float MeshScale;
    bool IsMoving;

    void SetMeshScale(float NewScale);
    bool IsNotMoving();
};

class USimpleNameStrategy : public UValidatorStrategy
{
};

class USimpleObjectInfoComponent : public UObjectInfoComponent
{
    FText InGameName;
    FText InGameDescription;
    class UDialogDataAsset* LookAtShout;
    bool bHasMissionControlLookAtShout;
    class UDialogDataAsset* MissionControlLookAtShout;
    class UDialogDataAsset* LookAtShoutOverride;
    class UTexture2D* Icon;
    class UTexture2D* IconOverride;
    bool bIsPingableByLaserpointer;
    TSubclassOf<class UActorContextWidget> ContextWidgetClass;
    TMap<class TWeakObjectPtr<USceneComponent>, class FSimpleObjectInfoData> ComponentMap;
    class UActorContextWidget* ContextWidget;

    void SetInGameName(FString GameName);
    void SetInGameDescription(FString GameDescription);
    void SetContextWidget(class UActorContextWidget* InContextWidget);
    void OverrideLookAtShoutOrUseDefault(class UDialogDataAsset* InShout);
    void OverrideLookAtShout(class UDialogDataAsset* InShout);
    void OverrideIcon(class UTexture2D* InTexture);
    class UDialogDataAsset* GetDefaultLookAtShout();
    void ClearLookAtShoutOverride();
    void AddComponentObjectInfo(class USceneComponent* TargetComponent, const FSimpleObjectInfoData& Data);
};

class USimpleSpecialEventSpawner : public USpecialEventSpawner
{
    class UDebrisPositioning* Positioning;
    TSoftClassPtr<AActor> EventActor;
    float EventAvoidanceRadius;

};

class USingleUsableComponent : public UUsableComponent
{
    FSingleUsableComponentOnUsedBy OnUsedBy;
    void UsedBySignature(class APlayerCharacter* User, EInputKeys Key);
    FSingleUsableComponentOnUseBegin OnUseBegin;
    void UsedBySignature(class APlayerCharacter* User, EInputKeys Key);
    FSingleUsableComponentOnUseEnd OnUseEnd;
    void GenericUsableDelegate();
    FSingleUsableComponentOnProgress OnProgress;
    void ProgressSignature(float Progress);
    FSingleUsableComponentOnUsableChanged OnUsableChanged;
    void UsableChangedSignature(bool CanUse);
    FSingleUsableComponentOnUserCountChanged OnUserCountChanged;
    void UserCountChangedDelegate(int32 userCount);
    FSingleUsableComponentOnFailed OnFailed;
    void OnFailed();
    class USoundCue* AudioBeginUse;
    class USoundCue* AudioFailedUse;
    class USoundCue* AudioCompletedUse;
    class UDialogDataAsset* BoscoLaserpointerShout;
    bool CoopUse;
    class UPawnStat* UseSpeedStat;
    float CoopUseMultiplier;
    bool Usable;
    bool TurnOffAfterUse;
    bool MultipleUse;
    bool bShowUsingUI;
    TSoftObjectPtr<UTexture2D> UsableIcon;
    float useDuration;
    float Progress;
    float DesiredProgress;
    int32 userCount;
    class UAudioComponent* AudioBeginUseInstance;

    void Use(class APlayerCharacter* User, EInputKeys Key, float DeltaTime);
    void SetProgress(float Value);
    void SetCanUse(bool CanUse);
    void OnRep_UserCount();
    void OnRep_Usable();
    void OnRep_DesiredProgress();
    void Cheat_Use(class APlayerCharacter* User, EInputKeys Key);
    void All_PlayFailedAudio();
};

class USingleUsableUpgrade : public UStandardItemUpgrade
{
    ESingleUsableUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, TSubclassOf<class AActor> subItem, class AFSDPlayerState* Player, ESingleUsableUpgradeType upgradeType);
};

class USkeletalMeshSkinEffect : public USkinEffect
{
    TSoftObjectPtr<USkeletalMesh> Mesh;

};

class USkinColorVanityItem : public UVanityItem
{
    class UMaterialInterface* Material;

};

class USkinEffect : public UObject
{

    void Receive_AddToItem(class UMeshComponent* Mesh, class AActor* Skinnable, bool IsFirstPerson);
    EItemSkinType GetSkinType();
};

class USkinSchematicItem : public USchematicItem
{
    class UItemID* ItemID;
    class UItemSkin* Skin;

};

class USkinTreasureRewarder : public UTreasureRewarder
{
    class UItemSkin* GivenSkin;
    class UItemID* GivenSkinID;

};

class USkinUnlock : public UUnlockReward
{
    class UItemID* OptionalItemID;
    class UPlayerCharacterID* OptionalCharacterID;
    class UItemSkin* Skin;

};

class USkinnableComponent : public UActorComponent
{
    class UItemSkin* EquippedSkinColor;
    class UItemSkin* EquippedSkinMesh;

    void UpdateSkin(class AFSDPlayerState* Player);
    void OnLoadoutChanged();
    TArray<class UItemSkin*> GetSkinsForItem(class UItemID* ItemID, EItemSkinType skinType);
    class UItemSkin* GetEquippedSkinMesh(class UItemID* ItemID, class AFSDPlayerState* Player);
    class UItemSkin* GetEquippedSkinColor(class UItemID* ItemID, class AFSDPlayerState* Player);
    class UItemSkin* GetEquippedSkin(class UItemID* ItemID, EItemSkinType skinType, class AFSDPlayerState* Player);
    TArray<class UItemSkin*> GetEquippableColorSkins(class UItemID* ItemID, class AFSDPlayerState* Player);
    class UItemSkin* GetDefaultItemSkin(class UItemID* ItemID, EItemSkinType itemSkinType);
    class UItemSkin* GetBaseColorSkinForMeshSkin(class UItemID* ItemID, class UItemSkin* meshSkin);
    void EquipSkin(class UItemSkin* Skin, class UItemID* ItemID, class AFSDPlayerState* Player);
};

class USmartRockTerrainMaterial : public UTerrainMaterialBase
{
};

class USoundAfflictionEffect : public UAfflictionEffect
{
    class USoundCue* BeginSound;
    class USoundCue* EndSound;
    bool Attach;
    FName AttachBone;
    float FadeOnLoopEndDuration;

};

class USoundClassManager : public UGameInstanceSubsystem
{
};

class USoundClassWidget : public UUserWidget
{
};

class USoundMixManagerComponent : public UActorComponent
{
    TArray<FSoundMixManagerItem> SoundMixes;

};

class USpaceRigBarMenuItem : public UFSDUserWidget
{
    class UDrinkableDataAsset* Drink;
    bool SpecialEditionSelected;

    void Unselect();
    void Select();
    class UDrinkableDataAsset* GetSelectedDrinkableType();
};

class USpawnActorFeature : public URoomFeature
{
    FVector Location;
    TSubclassOf<class AActor> ActorToSpawn;
    FVector AdjustmentDirection;
    EItemAdjustmentType Adjustment;
    FVector ScaleMin;
    FVector ScaleMax;
    FRotator RotationDelta;

};

class USpawnActorWithDebrisPosComponent : public UActorComponent
{
    float MinDistanceBetweenSpwans;
    bool AddTerrainPlacementBlockers;
    bool AvoidImportantLocations;
    float MinDistanceToImportantLocations;

    bool PlaceActorsWithCallback(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<class AActor> SpawnedActorClass, class AProceduralSetup* Setup, float Radius, class UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, class UCurveFloat* AvoidCostCurve, FPlaceActorsWithCallbackOnSpawned OnSpawned, FVector CustomLocation);
    bool PlaceActors(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<class AActor> SpawnedActorClass, class AProceduralSetup* Setup, float Radius, class UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, class UCurveFloat* AvoidCostCurve, TArray<class AActor*>& OutSpawnedActors, FVector CustomLocation);
    void AddTerrainPlacement(class AActor* Actor, class AProceduralSetup* Setup);
};

class USpawnAtLocationParticleAfflictionEffect : public UAfflictionEffect
{
    FScaledEffect ScaledParticleEffect;

};

class USpawnEffectsComponent : public UActorComponent
{
    FSpawnEffectsArray ActiveEffects;
    class UMaterialInstance* BiomeMaterialOverride;

};

class USpawnOnImpactDamageBonus : public UDamageBonusBase
{
    TSubclassOf<class AActor> ActorToSpawn;

};

class USpawnSettings : public UDataAsset
{
    TArray<class UNiagaraSystem*> SpawnEffects;
    TArray<class USoundCue*> SpawnSounds;
    FRandRange SpawnDuration;

};

class USpawnTriggerFeature : public URoomFeature
{
    TSubclassOf<class AActor> TriggerClass;
    FTransform Transform;
    FName Message;

};

class USpawningBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SpawnEnemyGroupDescriptorSpreadOut(class UObject* WorldContextObject, class UEnemyGroupDescriptor* descriptor, float Difficulty, const TArray<FVector>& Locations, bool Alert, DeepPathFinderSize pfSize);
    void SpawnEnemyGroupDescriptor(class UObject* WorldContextObject, class UEnemyGroupDescriptor* descriptor, float Difficulty, FVector Location, bool Alert, DeepPathFinderSize pfSize);
    void SpawnEnemiesFromPool(class UObject* WorldContextObject, float Difficulty, const TArray<FVector>& Locations, bool Alert, bool isConstantPreassure);
    void SpawnEnemiesAtLocationWithCallback(class UObject* WorldContextObject, class UEnemyDescriptor* EnemyDescriptor, int32 Count, FVector Location, const FSpawnEnemiesAtLocationWithCallbackCallback& Callback, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    void SpawnEnemiesAtLocation(class UObject* WorldContextObject, class UEnemyDescriptor* EnemyDescriptor, int32 Count, FVector Location, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    void SpawnEnemiesAtEachLocation(class UObject* WorldContextObject, class UEnemyDescriptor* EnemyDescriptor, TArray<FVector> Locations, DeepPathFinderSize pfSize);
    TArray<FVector> GetSpawnPointsInRange(class UObject* WorldContextObject, float distanceToPlayers, int32 spawnPointCount, DeepPathFinderSize pfSize);
    TArray<FVector> GetSpawnPointsInCircle(class UObject* WorldContextObject, FVector Location, float Radius, int32 Count, bool scaleToDificulty, float maxSpawnAngle, DeepPathFinderSize pfSize);
    TArray<FVector> GetSpawnPointsFromLocation(class UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    TArray<FVector> GetSpawnPointsAroundLocation(class UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    FVector GetSpawnPointInRange(class UObject* WorldContextObject, float distanceToPlayers, DeepPathFinderSize pfSize);
    FVector GetSpawnPointFromLocation(class UObject* WorldContextObject, FVector Location, float Distance, DeepPathFinderSize pfSize);
};

class USpecialAttackComponent : public UAttackBaseComponent
{
    TArray<class UAnimMontage*> Montages;
    FSpecialAttackComponentOnAttackActionNotify OnAttackActionNotify;
    void NameDelegate(FName nameValue);

    void TriggerAttack(FName Name);
    class UAnimMontage* SelectMontage();
    void Receive_OnPerformAttack();
    void Receive_OnAborted();
    void OnMontageEnded(class UAnimMontage* Montage, bool interrupted);
    void OnFrozen(bool IsFrozen);
};

class USpecialDamageAttackComponent : public USpecialAttackComponent
{
    class UDamageComponent* Damage;

};

class USpecialEvent : public UDataAsset
{
    float Weight;
    TArray<class UMissionTemplate*> BannedMissions;
    class USpecialEventSpawner* EventSpawner;
    bool IsPartOfCurrentSeason;

};

class USpecialEventBlueprintLibrary : public UBlueprintFunctionLibrary
{

    class USchematic* TryGivePendingReward(class UObject* WorldContextObject);
    void StorePendingReward(class UObject* WorldContextObject, const TArray<class USchematic*>& schematicsToChooseFrom);
    void SpawnEventRewardFrame(class UObject* WorldContextObject, FVector Location);
    bool HasPendingReward(class UObject* WorldContextObject);
    TArray<class USchematic*> GetSpecialEventsRewardSchematics(class UObject* WorldContextObject);
    class USchematic* FindRandomSchematicForCharacter(class UObject* WorldContextObject, class UPlayerCharacterID* characterID, ESchematicType SchematicType);
    void ClearPendingReward(class UObject* WorldContextObject);
};

class USpecialEventSettings : public UDataAsset
{
    TArray<class USpecialEvent*> MachineEvents;
    FRuntimeFloatCurve ME_SpawnChanceMissionLengthCurve;
    TArray<class USpecialEvent*> OtherSpecialEvents;
    FRuntimeFloatCurve Other_SpawnChanceMissionLengthCurve;
    TSoftClassPtr<AEventRewardFrame> EventRewardFrameClass;
    class UDebrisPositioning* EventRewardFramePositioning;
    float EventRewardRadius;
    float CreditsReward;
    float XPReward;

};

class USpecialEventSpawner : public UObject
{
};

class USpecialEventUsableComponent : public USingleUsableComponent
{
};

class USpiderAnimInstance : public UEnemyAnimInstance
{
    float Speed;
    FVector Velocity;
    float WalkCycleSpeed;
    float StartMovingSpeed;
    float StopMovingSpeed;
    float WalkCycleMinRate;
    float WalkCyclePlayRate;
    float MeshScale;
    float Direction;
    float PathDirectionLerpSpeedIn;
    float PathDirectionLerpSpeedOut;
    float PathDirection;
    float HorizontalAngularSpeed;
    float HorizontalAngularSpeed_Abs;
    float VerticalAngularSpeed;
    EMoveDirection MoveDirection;
    bool IsMoving;
    bool IsStrafing;
    bool IsMovingAndStrafing;
    bool IsFrozen;
    bool IsStaggered;
    float StaggerStrength;
    bool IsAirborne;
    class UParticleSystem* FootstepParticle;
    class USoundCue* FootstepSound;
    FName FootStepLeftBoneName;
    FName FootStepRightBoneName;
    float FootStepParticleCullDistance;
    TMap<class UEnemyPlaySoundKey*, class USoundCue*> PlaySoundByKeyMap;
    TMap<class UEnemySpawnEffectsKey*, class UParticleSystem*> SpawnEffectsByKeyMap;
    int32 RandomWalkCycleIndex;
    TArray<FRandomWalkCycleEntry> RandomWalkCycles;
    bool TurnToIdle;
    bool IdleToTurnLeft;
    bool IdleToTurnRight;
    bool TurnToWalk;
    bool WalkToTurnRight;
    bool WalkToTurnLeft;
    bool IsInFakePhysics;
    ESpiderDeathAnimationCategory DeathAnimationCategory;

    void SetMeshScale(float NewScale);
    void SetDeathAnimationCategory(ESpiderDeathAnimationCategory Category);
    void SetDeathAnimation(class UAnimSequenceBase* Animation);
    void PlayForcedCycle(float Duration);
    bool IsNotStrafing();
    bool IsNotStaggered();
    bool IsNotMoving();
    bool IsNotFrozen();
    bool IsNotAirborne();
};

class USpiderLobberAnimInstance : public UShootingSpiderAnimInstance
{
    FVector EffectiveLiquidInBum;
    FFloatInterval LiquidInBumRange;
    float LiquidInBumEaseInExp;
    float LiquidInBumTimeToMax;
    float LiquidInBumTimeToMaxShort;

    void SetAttackIndex(int32 Index);
    void ResetLiquidInBum();
    void OnDeath(class UHealthComponentBase* InHealthComponent);
};

class USplineDecoratorComponent : public UInstancedStaticMeshComponent
{
    float DistanceBetweenInstances;
    int32 StartIndex;
    int32 EndIndex;
    bool bUpdateContinuously;
    FVector VerticalOffset;
    FVector Scale;
    float DistanceProgress;
    class USplineComponent* SplineComponent;
    TArray<FTransform> NewInstancesTransforms;
    float Phase;

    void Update(float DeltaTime);
    void SetUpdateContinuously(bool InContinuously);
    void SetSplineComponentAndMaterial(class USplineComponent* InSplineComponent, int32 ElementIndex, class UMaterialInterface* Material);
    void SetSplineComponent(class USplineComponent* InSplineComponent);
};

class USplineHookAttack : public USpecialAttackComponent
{
    class USplineMeshComponent* Spline;
    class USkeletalMeshComponent* HeadMesh;
    class USkeletalMeshComponent* TailMesh;
    class UHitReactionComponent* HitReacts;
    FRuntimeFloatCurve MovementCurve;
    TWeakObjectPtr<class AActor> SyncedTarget;
    FName TailSocket;
    FName HeadSocket;
    class UPointLightComponent* GrabLight;
    class USoundCue* GrabbedIndicationSound;
    class UAnimMontage* HeadAnimation;
    class UDamageComponent* Damage;
    float ForwardPlacement;
    float DesiredLaunchAngle;
    float MaxAngledForce;
    float AdjustmentStartDistance;
    float AttackDuration;
    float MaxAngle;
    float AttackOnProgress;
    float AttackDelay;
    float LeadMultiplier;
    float AquireLocationTime;
    float OnSuccessCooldown;
    bool ShowGrabArea;
    bool Lead;
    bool Using;

    void SetTailLight(class UPointLightComponent* Light);
    void OnRep_Using();
    FVector GetTargetLocation();
    FVector GetTargetDirection();
    bool GetHasAquiredTarget();
    void ClearSuccessCooldown();
};

class USplineTrailComponent : public USceneComponent
{
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    TArray<FSplineTrailMaterial> MaterialSettings;
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;
    TSoftObjectPtr<UFSDPhysicalMaterial> CollisionMaterial;
    float CollisionCapsuleRadius;
    float TrailLength;
    int32 TrailSubSegments;
    float TrailSegmentOverlap;
    FVector2D Scale;
    float VerticalOffset;
    float HeadBobbingLength;
    float HeadBobbingSpeed;
    FRuntimeFloatCurve ScaleCurve;
    TArray<class UCapsuleComponent*> CapsuleColliders;
    class USplineComponent* Spline;
    TArray<class USplineMeshComponent*> MeshComponents;
    TArray<FVector> LocationHistory;
    int32 Seed;

};

class USpriteRectLibrary : public UBlueprintFunctionLibrary
{

    FSpriteRect TranslateSpriteRect(FSpriteRect Rect, FVector2D Offset);
    bool SpriteRectIntersectsAny(FSpriteRect A, TArray<FSpriteRect> Others);
    bool SpriteRectIntersects(FSpriteRect A, FSpriteRect B);
    void MoveSpriteRect(FSpriteRect& Rect, FVector2D Offset);
    FSpriteRect MakeSpriteRectFromPoints(FVector2D Start, FVector2D End);
    FSpriteRect MakeSpriteRectFromCenter(FVector2D Center, FVector2D Size);
    void MakeGateSpriteRects(int32 CanvasHeight, int32 GateWidth, FVector OpeningPos, float OpeningHeight, FSpriteRect& OutTopRect, FSpriteRect& OutBottomRect);
    FVector2D GetSpriteRectSize(FSpriteRect Rect);
    FVector2D GetSpriteRectCenter(FSpriteRect Rect);
};

class USpriteRectWidget : public UUserWidget
{
    FVector2D Position;
    FVector2D Size;

    void SetSize(FVector2D InSize);
    void SetPositionAndSize(FVector2D InPosition, FVector2D InSize);
    void SetPosition(FVector2D InPosition);
    void Move(FVector2D InOffset);
    FSpriteRect GetSpriteRect();
};

class UStaggeredAfflictionEffect : public UAfflictionEffect
{
    float StaggerStrength;

};

class UStandardExitStrategy : public UAbilityExitStrategy
{
};

class UStandardItemUpgrade : public UItemUpgrade
{
    float Amount;
    bool IsPercentage;

};

class UStatChangeStatusEffectItem : public UStatusEffectItem
{
    class UPawnStat* Stat;
    float StatChange;
    bool AffectedByResistances;

};

class UStatHat : public UGameInstanceSubsystem
{

    void AddStatValue(FString Key, float Value);
    void AddStatCount(FString Key, int32 Count);
};

class UStatPerkActivation : public UFloatPerkActivation
{
    class UPawnStat* PawnStat;
    EPawnStatType StatType;

};

class UStatTemporaryBuff : public UTemporaryBuff
{
    TMap<UPawnStat*, float> ModifiedStats;

};

class UStaticObjectAfflictionComponent : public UPawnAfflictionComponent
{
    class UStaticMeshComponent* Mesh;

};

class UStatusAndStateDamageBonus : public UDamageBonusBase
{
    TArray<class TSubclassOf<UStatusEffect>> StatusEffects;
    TArray<ETargetStateDamageBonusType> TargetStates;
    float Bonus;
    class UDamageClass* DamageClass;

};

class UStatusAndStateDamageBonusUpgrade : public UItemUpgrade
{
    TArray<class TSubclassOf<UStatusEffect>> StatusEffects;
    TArray<ETargetStateDamageBonusType> TargetStates;
    float Bonus;
    class UDamageClass* DamageClass;

};

class UStatusDamageBonus : public UDamageBonusBase
{
    TArray<class TSubclassOf<UStatusEffect>> StatusEffects;
    float Bonus;
    class UDamageClass* DamageClass;

};

class UStatusDamageBonusUpgrade : public UItemUpgrade
{
    TArray<class TSubclassOf<UStatusEffect>> StatusEffects;
    float Bonus;
    class UDamageClass* DamageClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, TSubclassOf<class UStatusEffect> StatusEffect);
};

class UStatusEffect : public UObject
{
    class UPawnAffliction* PawnAffliction;
    TArray<class UStatusEffectItem*> StatusEffects;
    float MaxResistance;
    class UDamageClass* DamageClass;
    class UStatusEffectExclusiveKey* ExclusiveKey;
    bool TriggerTwiceOnPush;
    FRandRange ApplyEffectsInterval;
    bool CanStack;
    int32 MaxStack;
    float Duration;
    bool ApplyDurationAfterPop;
    bool RemoveOnDeath;
    bool RemoveOnTemperatureStateChange;
    bool AllowExternalSread;
    FGameplayTagQuery GameplayTagQuery;
    FGameplayTagContainer ExcludeTargetsWithTags;
    FGameplayTagContainer TargetRequiredTags;

    bool ShouldInstantiate();
    float GetStatusEffectDuration(TSubclassOf<class UStatusEffect> StatusEffect);
    bool CanTrigger(class AActor* Target);
};

class UStatusEffectEnemies : public URunningMissionBP
{
    TArray<class TSubclassOf<UStatusEffect>> StatusEffects;
    FGameplayTagContainer AllowedFilter;
    FGameplayTagQuery AllowedQuery;
    float ChanceToApply;
    bool OverrideReplacesDefault;
    TMap<class UEnemyDescriptor*, class TSubclassOf<UStatusEffect>> Overrides;

    void OnEnemySpawned(class APawn* enemy, class UEnemyDescriptor* descriptor);
};

class UStatusEffectExclusiveKey : public UDataAsset
{
};

class UStatusEffectItem : public UObject
{
};

class UStatusEffectMissionBP : public URunningMissionBP
{
    FGameplayTagQuery EnemyQuery;
    TSubclassOf<class UStatusEffect> StatusEffect;

    void OnEnemySpawned(class APawn* Pawn, class UEnemyDescriptor* descriptor);
};

class UStatusEffectReactiveTerrain : public UReactiveTerrain
{
    TSubclassOf<class UStatusEffect> StatusEffect;

};

class UStatusEffectSettings : public UDataAsset
{
    TSubclassOf<class UStatusEffect> EnemyOnFire;
    TSubclassOf<class UStatusEffect> frozen;

};

class UStatusEffectTriggerComponent : public UActorComponent
{
    FStatusEffectTriggerComponentOnEffectTriggered OnEffectTriggered;
    void EffectTriggeredDelegate(class AActor* TargetActor, bool entered);
    FStatusEffectTriggerComponentOnActorEnterLeave OnActorEnterLeave;
    void EffectTriggeredDelegate(class AActor* TargetActor, bool entered);
    TArray<class TSubclassOf<UStatusEffect>> StatusEffects;
    TArray<class TSubclassOf<UStatusEffect>> LeaveTriggerEffects;
    class UPrimitiveComponent* collider;
    bool RemoveStatusEffectOnEndOverlap;

    void OnOverlapEnd(class AActor* MyActor, class AActor* OtherActor);
    void OnOverlapBegin(class AActor* MyActor, class AActor* OtherActor);
    void OnComponentOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnComponentOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void AddActorToIgnoreList(class AActor* Actor);
};

class UStatusEffectsComponent : public UActorComponent
{
    TArray<FActiveStatusEffectBank> ActiveStatusEffects;
    class UHealthComponentBase* OwnerHealth;
    TSet<UStatusEffectExclusiveKey*> ActiveExclusiveKeys;
    bool IgnoreAll;

    bool TryPushActiveStatusEffect(TSubclassOf<class UStatusEffect> StatusEffect, class AActor* Target, class AActor* Owner);
    bool TryPopActiveStatusEffect(TSubclassOf<class UStatusEffect> StatusEffect, class AActor* Target, class AActor* Owner);
    bool PushActiveStatusEffectInstance(class UStatusEffect* StatusEffect, class AActor* Owner);
    bool PushActiveStatusEffect(TSubclassOf<class UStatusEffect> StatusEffect, class AActor* Owner);
    void PopAllActiveStatusEffectsOfType(TSubclassOf<class UStatusEffect> StatusEffect, class AActor* Owner);
    void PopAllActiveStatusEffects(class AActor* Owner);
    bool PopActiveStatusEffectInstance(class UStatusEffect* StatusEffect, class AActor* Owner);
    bool PopActiveStatusEffect(TSubclassOf<class UStatusEffect> StatusEffect, class AActor* Owner);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    bool HasActiveEffect(TSubclassOf<class UStatusEffect> StatusEffect);
    int32 GetStackAmount(TSubclassOf<class UStatusEffect> StatusEffect, class AActor* Owner);
    int32 GetFullStackAmount(TSubclassOf<class UStatusEffect> StatusEffect);
    class UStatusEffect* CreateStatusEffectInstance(TSubclassOf<class UStatusEffect> StatusEffect, class UObject* Owner);
};

class UStatusEffectsFunctionLibrary : public UBlueprintFunctionLibrary
{

    float GetMaxResistance(TSubclassOf<class UStatusEffect> StatusEffect);
    class UDamageClass* GetDamageClass(TSubclassOf<class UStatusEffect> StatusEffect);
    bool CanTrigger(TSubclassOf<class UStatusEffect> StatusEffect, class AActor* OtherActor);
};

class UStatusHitCountEffect : public UWeaponHitCountEffect
{
    TSubclassOf<class UStatusEffect> StatusEffect;
    float ChancePerHit;

};

class UStayAwayFromWallsComponent : public USceneComponent
{
    class AFSDGameState* GameState;
    float MaxSpeed;
    float Acceleration;
    float BackAcceleration;
    float PointOffset;
    float AvoidSpeed;
    float GoBackSpeed;
    bool Active;

    void SetIsActive(const bool IsActive);
};

class UStickyFlameSpawner : public UActorComponent
{
    FStickyFlameSpawnerOnStickyFlameSpawned OnStickyFlameSpawned;
    void StickyFlameSignature(class AStickyFlame* StickyFlame);
    TSubclassOf<class AStickyFlame> StickyFlameActor;
    float FlameLifetime;
    float StickyFlameIntervals;
    float StickyMaxSpawnPerSecond;
    float StickyFlameMinDistance;
    float StickyFlameLastTime;
    FVector StickyFlameLastLocation;

    bool TrySpawnStickyFlameHit(const FHitResult& Hit);
    bool TrySpawnStickyFlame(FVector Location, FVector Normal);
    void StickyFlameSignature__DelegateSignature(class AStickyFlame* StickyFlame);
    void ServerSpawnStickyFlame(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal);
};

class UStickyFlameStatusEffectUpgrade : public UItemUpgrade
{
    TSubclassOf<class UStatusEffect> StatusEffect;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, TSubclassOf<class UStatusEffect> StatusEffect);
};

class UStingerIdleAudioComponent : public UActorComponent
{
    TWeakObjectPtr<class UAudioComponent> AudioComponent;
    TWeakObjectPtr<class UHealthComponentBase> HealthComponent;
    float FadeInTime;
    float FadeOutTime;

};

class UStopLeadingNotify : public UAnimNotify
{
};

class UStoreBoughtAquisition : public UItemAquisitionBase
{
    int32 CreditsCost;
    TMap<UResourceData*, float> ResourceCost;
    int32 RequiredPlayerRank;

};

class USubHealthComponent : public UActorComponent
{
    FSubHealthComponentOnDamageTaken OnDamageTaken;
    void DamageSig(float Amount);
    FSubHealthComponentOnHealthChanged OnHealthChanged;
    void HealthChangedSig(float Health);
    FSubHealthComponentOnCanTakeDamageChanged OnCanTakeDamageChanged;
    void SubHealthComponentDelegate(class USubHealthComponent* subHealth);
    EHealthbarType HealthbarType;
    bool PassthroughDamageWhenDisabled;
    EEnemyHealthScaling EnemyHealthScaling;

    void SetCanTakeDamage(bool canTakeDamage);
    bool IsDead();
    bool IsAlive();
    float GetHealthPct();
    float GetHealth();
    bool GetCanTakeDamage();
};

class USubRoomFeature : public URoomFeature
{
    class URoomGenerator* RoomGenerator;
    FVector Location;
    FRotator Rotation;
    float Scale;

};

class USubsystemLoader : public UObject
{
    TArray<class TSubclassOf<USubsystem>> BlueprintSubSystems;

};

class USupplyPodMutator : public UMutator
{
    float CostModifier;

};

class UTagDamageBonus : public UDamageBonusBase
{
    TArray<class UDamageTag*> Tags;

};

class UTargetSTEDamageCondition : public UDamageCondition
{
    TArray<class TSubclassOf<UStatusEffect>> StatusEffects;

};

class UTargetSpecificDamageBonus : public UDamageBonusBase
{
    float Bonus;
    FGameplayTagQuery tagQuery;
    FName Key;

};

class UTargetSpecificDamageBonusUpgrade : public UItemUpgrade
{
    float Bonus;
    FGameplayTagQuery tagQuery;
    FName Key;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, FName Key);
};

class UTargetStateDamageBonus : public UDamageBonusBase
{
    ETargetStateDamageBonusType TargetState;
    float Bonus;
    class UDamageClass* DamageClass;

};

class UTargetStateDamageBonusUpgrade : public UItemUpgrade
{
    ETargetStateDamageBonusType TargetState;
    float Bonus;
    class UDamageClass* DamageClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<class AActor> Item, class AFSDPlayerState* Player, ETargetStateDamageBonusType TargetState);
};

class UTargetStateDamageCondition : public UDamageCondition
{
    ETargetStateDamageBonusType TargetState;

};

class UTargetTagsDamageCondition : public UDamageCondition
{
    FGameplayTagQuery tagQuery;

};

class UTargetValidator : public UObject
{

    bool ReceiveIsTargetValid(class AActor* Owner, class AActor* Target);
};

class UTeamResourcesComponent : public UResourcesComponent
{
};

class UTemperatureComponent : public UActorComponent
{
    float FrozenDamageBonusScale;

    bool TryPushHeatSource(class AActor* Target, float Temperature, ETemperatureIntensity Intensity);
    bool TryPopHeatSource(class AActor* Target, float Temperature, ETemperatureIntensity Intensity);
    void ResetTemperature();
    float GetCurrentTemperature();
    void ChangeTemperature(float Degrees, class AActor* Source);
};

class UTemperatureStatusEffectItem : public UStatusEffectItem
{
    FRandRange TemperatureChangeAmount;

};

class UTemporaryBuff : public UDataAsset
{
    FText Description;
    TSoftObjectPtr<UTexture2D> Icon;
    bool ActivatesOnlyOnceWhenDrinking;
    bool IsTodaysSpecialBuff;

    bool GetActivateOnlyWhenDrinking();
    void DeActivateBuff(class APlayerCharacter* Player);
    void ActivateBuff(class APlayerCharacter* Player);
};

class UTentacleAnimInstance : public UAnimInstance
{
    FTentacleAnimInstanceProxy AnimInstanceProxy;
    bool UseActorRotationDuringExtension;

};

class UTentacleBusyComponent : public UEnemyLineOfSightComponent
{

    void ReleasedActor(class AActor* Escape, bool fullGrab);
    void GrabbedActor(class AActor* victim);
    bool GetIsBusy();
};

class UTentacleGrabAttack : public UAttackBaseComponent
{
    class UMeshComponent* HeadMesh;
    FName TerrainCheckSocket;
    FVector TerrainCheckBox;

    bool IsHeadNearTerrain();
};

class UTentacleManagerComponent : public UActorComponent
{
    TWeakObjectPtr<class UNiagaraComponent> Tentacles;
    FRuntimeFloatCurve SpeedCurve;
    FRuntimeFloatCurve ReachCurve;
    FName Param_Speed;
    FName Param_Reach;

};

class UTerminatorAnimInstance : public UEnemyAnimInstance
{
    FRotator Lean;
    float ForwardLean;

};

class UTerminatorShoutComponent : public UActorComponent
{
    TArray<FTerminatorShoutState> States;
    FTerminatorShoutComponentOnShoutStarted OnShoutStarted;
    void Delegate();
    FTerminatorShoutComponentOnShoutEnded OnShoutEnded;
    void Delegate();
    TArray<FTerminatorTalkMaterial> TalkMaterials;
    class UPointLightComponent* TalkLight;
    float MaxRadius;
    float MaxIntensity;
    FName SoundOriginSocket;
    class UMeshComponent* OwnerMesh;
    class UAudioComponent* ShoutInstance;

    void SetShoutState(ETerminatorShoutState State, float delayShout);
    void OnShoutStart();
    void OnShoutInstancePlayStateChanged(EAudioComponentPlayState PlayState);
    void OnShoutEnd();
    void All_PlayShout(class USoundCue* Shout);
};

class UTerminatorTentacleHeadAnimInstance : public UEnemyAnimInstance
{
    bool Idle;
    bool Grabbing;
    bool Grabbed;

};

class UTerrainDetectBoxComponent : public UBoxComponent
{
    FTerrainDetectBoxComponentOnBoxExcavated OnBoxExcavated;
    void PointRemovedEvent(class USceneComponent* Point);
    bool StartDetectOnBeginPlay;
    bool OnlyDetectOnServer;
    int32 NumCornersToExcavate;
    int32 NumCornersExcavated;
    bool KillActorOnPointRemoved;

    void StartDetect();
};

class UTerrainDetectComponent : public USceneComponent
{
    FTerrainDetectComponentOnPointRemoved OnPointRemoved;
    void PointRemovedEvent(class USceneComponent* Point);
    bool StartDetectOnBeginPlay;
    bool OnlyDetectOnServer;
    bool KillActorOnPointRemoved;
    FVector ActiveDetectPos;
    int32 DetectorId;

    void UpdateDetectLocation();
    void StopDetect();
    void StartDetect();
};

class UTerrainFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool GetDebrisTransformsInSphere(class UObject* WorldContextObject, TArray<FMatrix>& outPositions, const FVector& Location, const float& Radius, const ESpecialDebrisType& debrisType, float minDistToOther, bool calcPriority);
    TArray<FVector> GetAllNavPointsInSphere(class UObject* WorldContextObject, FVector Origin, float Radius, DeepPathFinderSize pfSize, const FVector searchNormal, float maxDegreesToSearchNormal);
    TArray<FVector> FindPath(class UObject* WorldContextObject, FVector Origin, FVector Destination, DeepPathFinderSize pfSize);
    void CreateExplosionCrater2(class UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, FVector Normal, float NormalOffset, float NormalSqueeze, bool allowCustomBurntMaterial, bool DissolvePlatforms, class UTerrainMaterial* overrideBurnedMaterial);
    void CreateExplosionCrater(class UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, bool allowCustomBurntMaterial, class UTerrainMaterial* overrideBurnedMaterial);
    int32 CountDebrisOfType(class UObject* WorldContextObject, ESpecialDebrisType debrisType);
    int32 CountDebrisInSphere(class UObject* WorldContextObject, FVector Location, float Radius, ESpecialDebrisType debrisType);
};

class UTerrainLatejoinComponent : public UActorComponent
{

    void Server_TerrainLateJoinPartReceived();
    void Client_TerrainLateJoinVisibleChunks(const TArray<uint32>& VisibleChunks);
    void Client_TerrainLateJoinPart(const TArray<FGrenadeExplodeOperationData>& Explosions, const TArray<FCarveWithColliderOperationData>& ColliderCarves, const TArray<FCarveWithSTLMeshOperationData>& MeshCarves, const TArray<FPickaxeDigOperationData>& PickAxe, const TArray<FRemoveFloatingIslandOperationData>& floating, const TArray<FDrillOperationData>& Drills, const TArray<FMeltOperationData>& Melts, const TArray<FSplineSegmentCarveOperationData>& Splines, const TArray<FCSGBuildOperationData>& CSGBuilds, const TArray<FTerrainSpawnDebrisOperationData>& SpawnDebris);
    void Client_TerrainLateJoinDone();
    void Client_TerrainLateJoinDebris(const TArray<int32>& instanceComponentPairs);
};

class UTerrainMaterial : public UTerrainMaterialCore
{
    uint8 Collide;
    uint8 Diggable;
    uint8 CanBeDrilled;
    uint8 ExplosionProof;
    uint8 MeltsInFire;
    uint8 PlatformDissolvable;
    class UResourceData* ResourceData;
    int32 HitsNeededToMine;
    float PickAxeDigSize;
    bool RemoveDebrisOnFirstHit;
    class UDialogDataAsset* ShoutLookAt;
    class UDialogDataAsset* ShoutOnDig;
    class UTerrainType* TerrainType;
    FText InGameName;
    FText InGameDescription;
    uint8 Precious;
    TSoftObjectPtr<UFXSystemAsset> DigParticles;
    TSoftObjectPtr<UMaterialInstance> DigParticlesMaterialOverride;
    TSoftObjectPtr<UFXSystemAsset> PartialDigParticles;
    TSoftObjectPtr<USoundCue> CrumbleSound;
    TSoftObjectPtr<USoundCue> PartialMineSound;

    void TestMaterialEffects(class UTerrainMaterial* Material, TArray<FTestTerrainMaterialItem>& Items);
    void TestDecals(class UTerrainMaterial* Material, TArray<FTestTerrainMaterialDecalItem>& Items);
    class UFXSystemComponent* SpawnPartialDigParticles(class UObject* WorldContextObject, FVector Location, FRotator Rotation);
    class UFXSystemComponent* SpawnDigParticles(class UObject* WorldContextObject, FVector Location, FRotator Rotation, float Density);
    bool IsPrecious();
    FText GetInGameName();
    class UMaterialInstance* GetDigParticlesMaterialOverride();
};

class UTerrainMaterialSettings : public UDataAsset
{
    TArray<FDecalData> TwoHits;
    TArray<FDecalData> ThreeHits;
    TArray<FDecalData> FourHits;
    TArray<FDecalData> FiveHits;
    TArray<class UTerrainMaterial*> PlagueMaterials;
    float InfectionIncreasePerPlagueHit;

};

class UTerrainMaterialsCollection : public UDataAsset
{
    TArray<class UTerrainMaterial*> Materials;
    TArray<class UTerrainType*> TerrainTypes;

};

class UTerrainPlacementComponent : public USceneComponent
{
    TArray<FTerrainPlacementBox> TerrainCheckers;
    EDebrisColliderType CapsuleType;
    FDebrisCapsule Capsule;
    int32 BlockerIDHack;

    void RemoveBlockers();
    void AddBlockers(class AProceduralSetup* ProceduralSetup, const FTransform& Transform);
};

class UTerrainScannerSplineMesh : public USplineMeshComponent
{
    bool bVisibleAtBeginPlay;
    bool bHideOnDeath;
    bool bUseFogOfWar;
    bool bVisibleOnScanner;

    void SetVisibleOnScanner(bool InShowOnScanner);
    void OnOwnerDeath(class UHealthComponentBase* InHealthComponent);
};

class UTerrainScannerStaticMesh : public UStaticMeshComponent
{
    bool bVisibleAtBeginPlay;
    bool bHideOnDeath;
    bool bUseFogOfWar;
    bool bVisibleOnScanner;

    void SetVisibleOnScanner(bool InShowOnScanner);
    void OnOwnerDeath(class UHealthComponentBase* InHealthComponent);
};

class UTerrainType : public UDataAsset
{
    uint8 Collide;
    uint8 Diggable;
    uint8 Precious;
    class USoundCue* DebrisStandardSoundCue;
    TSoftObjectPtr<UParticleSystem> DebrisStandardParticles;

};

class UTestAnimInstance : public UAnimInstance
{
    FTestAnimInstanceProxy AnimInstanceProxy;
    float WalkCycleSpeed;
    float StartMovingSpeed;
    float StopMovingSpeed;
    float WalkCycleMinRate;
    float MeshScale;

};

class UTetherAnimInstance : public UAnimInstance
{
    bool SearchingForConnection;

};

class UTetherComponent : public UActorComponent
{
    FTetherComponentOnPowerChanged OnPowerChanged;
    void TetherPowerChanged_Delegate(bool hasPower);
    FTetherComponentOnConnectionChanged OnConnectionChanged;
    void TetherConnectionChanged_Deletage(class UTetherComponent* frontConnection, class UTetherComponent* backConnection);
    FTetherComponentOnTetherMessage OnTetherMessage;
    void TeherMessage_Delegate(const FName& Message);
    FTetherComponentOnConnectionRangeUpdated OnConnectionRangeUpdated;
    void TetherRangeChanged(float range);
    class UMeshComponent* TetherMesh;
    bool AutoSetup;
    TArray<class UTetherComponent*> ConnectionHistory;
    FName ConnectionPointName;
    class UTetherComponent* ForwardConnection;
    class UTetherComponent* backConnection;
    float ConnectionDistance;
    ETetherConnectionMode ConnectionMode;
    int32 ConnectionPriority;
    int32 ConnectionHistorySize;
    bool GeneratesPower;
    bool PeriodicConnectionValidation;
    bool hasPower;

    void ToggleConnectionValidation(bool Enabled, bool reactivate);
    void StopLoSTimer();
    void StartLoSTimer();
    void SetupConnectionpoint(class UMeshComponent* Mesh, const FName& SocketName);
    void SetConnectionRange(float range);
    void ResetConnectionHistory();
    void OnRep_HasPower();
    void OnRep_ForwardConnection();
    void OnRep_BackConnection();
    void MessageTetherLine(const FName& Message, float Delay, ETetherMessageDirection messageDirection);
    void MessageBody(const FTetherMessageSettings& Message);
    bool IsStartOfLine();
    bool IsFullyConnected();
    bool IsEndOfLine();
    bool IsConnected();
    class UTetherComponent* GetTetherlineEnd(bool front);
    bool GetHasPower();
    class UTetherComponent* GetForwardConnection();
    float GetConnectionRange();
    FVector GetConnectionPoint();
    TArray<class UTetherComponent*> GetConnectionHistory();
    class UTetherComponent* GetBackConnection();
    void DisconnectFromTetherLine(bool Deactivate);
    bool ConnectToTetherLine();
};

class UTextureDynamicIcon : public UDynamicIcon
{
    TSoftObjectPtr<UTexture2D> Texture;
    class UMaterialInstanceDynamic* PreviewInstance;

    void UpdatePreview();
};

class UThornsPerkComponent : public UFloatPerkComponent
{
    class UDamageClass* DamageClass;
    float CoolDown;
    TSubclassOf<class UStatusEffect> ThornsSTE;

    void OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
};

class UTickableActionBase : public UBlueprintAsyncActionBase
{
};

class UTimedDLC : public UDLCBase
{
    FDateTime StartDate;
    FDateTime EndDate;

};

class UTimedSpecialEventSpawner : public USpecialEventSpawner
{
    TArray<class UObject*> BlockStack;
    TSoftClassPtr<AActor> EventActor;
    float MinTime;
    float MaxTime;

    void UnblockEventSpawn(class UObject* blocker);
    void SpawnEvent();
    void BlockEventSpawn(class UObject* blocker);
    bool AreEventSpawnsBlocked();
};

class UTracerManager : public UWorldSubsystem
{
    float StartScale;
    float WhizByStartDistance;
    float WhizByMaxDistanceFromTrajectory;
    float WhizBySpeed;

    void AddTracer(FVector Origin, const FVector& Destination, float Speed, class UParticleSystem* particle, float MinDistance, float Offset, class UParticleSystem* Trail);
};

class UTracerUpgradeElement : public UItemUpgradeElement
{
    class UFXSystemAsset* Tracer;

};

class UTrackBuilderConnectPoint : public USphereComponent
{
    FTrackBuilderConnectPointOnConnectedWithSegment OnConnectedWithSegment;
    void ConnectionDelegate(class UTrackBuilderConnectPoint* InConnectPoint, class ATrackBuilderSegment* InSegment);
    TSubclassOf<class ATrackBuilderSegment> ConnectType;
    TWeakObjectPtr<class ATrackBuilderSegment> ConnectedSegment;
    float MaxConnectRadius;
    float ConnectDistance;
    FVector MaxAngles;

    void OnRep_ConnectedSegment();
    FTransform GetConnectTransform(const FTransform& FromWorldTransform);
    bool Disconnect(class ATrackBuilderSegment* InSegment);
    void ConnectionDelegate__DelegateSignature(class UTrackBuilderConnectPoint* InConnectPoint, class ATrackBuilderSegment* InSegment);
    bool Connect(class ATrackBuilderSegment* InSegment);
    bool CanConnectWith(class ATrackBuilderSegment* InSegment, const FTransform& FromWorldTransform);
};

class UTrackBuilderMovement : public UActorComponent
{
    float MovementSpeed;

};

class UTrackBuilderUsable : public UInstantUsable
{
    FTrackBuilderUsableOnNextSegmentChanged OnNextSegmentChanged;
    void SegmentDelegate(class UTrackBuilderUsable* InUsable, class ATrackBuilderSegment* InSegment);
    TSubclassOf<class ATrackBuilderItem> BuilderItemType;
    FString ColliderName;
    class USceneComponent* TrackStartComponent;
    class ATrackBuilderSegment* NextSegment;
    TWeakObjectPtr<class APlayerCharacter> InUseBy;

    void SegmentDelegate__DelegateSignature(class UTrackBuilderUsable* InUsable, class ATrackBuilderSegment* InSegment);
    void OnRep_NextSegment();
    void OnNextSegmentDestroyed(class AActor* InActor);
    FTransform GetStartTransform();
    void FinishUse(class APlayerCharacter* User, class ATrackBuilderSegment* InSegment);
};

class UTrackMovementStateComponent : public UCharacterStateComponent
{
    class UAudioComponent* AudioStartComponent;
    class UAudioComponent* AudioDuringComponent;
    class UAudioComponent* AudioStopComponent;
    class USoundBase* AudioOnStart;
    class USoundBase* AudioOnDuring;
    class USoundBase* AudioOnStop;
    float AudioOnFadeOut;
    class UDialogDataAsset* StateUpdateShout;
    float StateUpdateShoutFrequencySecsMin;
    float StateUpdateShoutFrequencySecsMax;
    float AudioDuringSlidingSpeedParam;
    float SpeedTarget;
    float SpeedMin;
    float SpeedMax;
    float AccelerationBase;
    float AccelerationMultiplier;
    float DecelerationMultiplier;
    float AccelerationOnSlopeMultiplier;
    float DecelerationOnSlopeMultiplier;
    float StoppingDeceleration;
    float StoppingDistance;
    TSoftClassPtr<AZipLineConnector> ConnectorClass;
    class AZipLineConnector* Connector;
    EExitTrackMode ExitMode;
    FPipelineMovementData TrackMovementData;

    void ServerExitMode(EExitTrackMode eMode);
    void ServerAddTemporaryAcceration(float Acceleration, float Duration);
    void OnRep_TrackMovementdata(FPipelineMovementData& oldState);
    void JumpPressed();
};

class UTrailUpgradeElement : public UItemUpgradeElement
{
    class UFXSystemAsset* Trail;

};

class UTreassureAquisition : public UItemAquisitionBase
{
    class UItemAquisitionSource* Source;

};

class UTreasureBoxAnimInstance : public UAnimInstance
{
    float BuildProgress;
    float PhysicsAlpha;
    bool IsTreasureAvailable;
    bool IsLeftInserted;
    bool IsRightInserted;

};

class UTreasureFunctionLibrary : public UBlueprintFunctionLibrary
{
};

class UTreasureRewarder : public UActorComponent
{
};

class UTreasureSettings : public UDataAsset
{
    TArray<ETreasureType> CrateTreasureTypes;
    FText CrateTreasureEmptyMsg;
    TArray<ETreasureType> LostPackTreasureTypes;
    FText LostPackEmptyMsg;
    class UItemAquisitionSource* CrateAquisitionSource;
    class UItemAquisitionSource* LostPackAquisitionSource;
    FRuntimeFloatCurve TreasureChanceMissionLengthCurve;
    TArray<class USpecialEvent*> TreasureEvents;
    TArray<FSpecialChanceEventItem> SpecialChancedEvent;
    TArray<class UVictoryPose*> VictoryPoses;
    TArray<class UItemSkinSet*> SkinSets;
    TArray<class UDrinkableDataAsset*> Drinks;

};

class UTreeOfVanity : public USavableDataAsset
{
    TArray<FVanityNode> Nodes;

    void ClearNodes();
    void AddNode(class UReward* Reward, int32 NodeID, TArray<int32> ConnectedNodes, bool isStartingNode, bool isBig, FVector2D Position);
};

class UTreeOfVanityItemWidget : public UUserWidget
{
    class UReward* Reward;
    bool bIsPrimaryReward;
    bool bIsStartingNode;
    TArray<class UTreeOfVanityItemWidget*> ConnectedNodes;
    int32 NodeID;
    bool bIsClickable;
    class UReward* DefaultReward;
    TArray<class UUserWidget*> NodeConnections;
    bool bIsBought;

    void SetIsBought(bool inIsBought);
    void SetData(class UReward* InReward, bool inIsPrimaryReward, bool inIsStartingNode, TArray<class UTreeOfVanityItemWidget*> inConnectedNodes, int32 inNodeID);
    void OnDataUpdated();
    bool GetIsBought();
};

class UTremorAttackComponent : public USpecialDamageAttackComponent
{
    bool IsAttackActive;
    class UBoxComponent* CollisionComponent;
    class UParticleSystemComponent* ParticlesComponent;
    float InitialParticlesDelay;
    float PostParticleDelay;
    float TargetMaxDistanceFromGround;
    float TimeBetweenDamageTicks;
    float LaunchForce;
    float Duration;

    void StopParticles();
    void StartParticles();
    void OnTargetExitedTrigger(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnTargetEnteredTrigger(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnRep_IsAttackActive();
    bool IsInited();
    void InitTremorAttack(class UBoxComponent* Box, class UParticleSystemComponent* Particles);
};

class UTriFacetDynamicIcon : public UTwoFacetDynamicIcon
{
    FLinearColor Primary3Tint1;
    FLinearColor Primary3Tint2;
    TSoftObjectPtr<UTexture2D> Primary3Texture;
    float Primary3Texture_BasePoint;
    float Primary3Texture_Contrast;

};

class UTriggeredStatusEffectUpgrade : public UItemUpgrade
{
    TSubclassOf<class UStatusEffect> StatusEffect;
    ETriggeredStatusEffectType upgradeType;
    float AoERange;
    TSubclassOf<class UStatusEffect> OwnerEffect;

    void OnEffectShouldTrigger(class AActor* PlayerCharacter);
    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> Item, TSubclassOf<class UStatusEffect> StatusEffect, ETriggeredStatusEffectType aUpgradeType);
};

class UTunnelParameters : public UDataAsset
{
    class UFloodFillSettings* PathfinderNoise;
    float PathZPenalty;
    float PathDirectionPenalty;
    float PathEntranceAnglePenalty;
    float ObstacleCostScale;
    bool AllowBlockedEntrances;
    bool PickBestMatchingEntrance;

};

class UTunnelSegmentSetting : public UDataAsset
{
    class UTerrainMaterial* Material;
    class UFloodFillSettings* PathfinderNoise;
    class UFloodFillSettings* CielingNoise;
    class UFloodFillSettings* WallNoise;
    class UFloodFillSettings* FloorNoise;
    FVector2D VRange;
    FVector2D HRange;
    FVector2D Cielingheight;
    FVector2D FloorHeight;
    FVector2D CielingNoiseRange;
    FVector2D WallNoiseRange;
    FVector2D FloorNoiseRange;

};

class UTunnelSetting : public UDataAsset
{
    class UFloodFillSettings* PathfinderNoise;
    class UTunnelSegmentSetting* BaseSegmentSetting;
    class UTunnelSegmentSetting* TightBendSegmentSetting;
    class UTunnelSegmentSetting* DirtSegmentSetting;
    class UTunnelSegmentSetting* DirtOffsetSetting;
    TArray<FTunnelSettingItem> VariationSegments;
    float Weight;

};

class UTunnelSettings : public UDataAsset
{
    class UTerrainMaterial* Material;
    class UFloodFillSettings* PathfinderNoise;
    class UFloodFillSettings* CielingNoise;
    class UFloodFillSettings* WallNoise;
    class UFloodFillSettings* FloorNoise;
    FVector2D VRange;
    FVector2D HRange;
    FVector2D Cielingheight;
    FVector2D FloorHeight;
    FVector2D CielingNoiseRange;
    FVector2D WallNoiseRange;
    FVector2D FloorNoiseRange;

};

class UTutorialComponent : public UActorComponent
{
    bool bTutorialEnabled;
    int32 Priority;
    float MaxDuration;
    int32 MaxViewCount;
    bool ShowInTutorialLevel;
    bool bAutoRegisterWithManager;
    bool bDebugAlwaysShow;
    bool ManuallyMarkViews;
    TWeakObjectPtr<class APlayerCharacter> PlayerCharacter;
    TWeakObjectPtr<class AFSDPlayerState> PlayerState;
    TWeakObjectPtr<class AFSDPlayerController> PlayerController;
    TWeakObjectPtr<class UFSDSaveGame> SaveGame;
    TWeakObjectPtr<class ATutorialManager> TutorialManager;
    bool bTutorialInitialized;
    bool bTutorialReady;
    bool bTutorialVisible;
    bool bTutorialActive;

    void RegisterTutorial();
    void ReceiveOnShown();
    void ReceiveOnInitialized();
    void ReceiveOnHidden();
    void OnTutorialsReset();
    void OnManagerReady(class ATutorialManager* manager);
    void MarkTutorialWatched();
    void MarkTutorialReadyNow();
    void MarkTutorialReadyInSeconds(float Delay);
    bool HasTutorialBeenShown();
    FString GetTutorialName();
    void CancelTutorial(bool CountAsViewed);
};

class UTutorialContentWidget : public UFSDUserWidget
{
    FTutorialContentWidgetOnTutorialFinished OnTutorialFinished;
    void OnTutorialFinished(class UTutorialContentWidget* TutorialWidget);

    void OnTutorialFinished__DelegateSignature(class UTutorialContentWidget* TutorialWidget);
    void OnShown();
    void OnRemoveWidget();
};

class UTutorialHintComponent : public UTutorialComponent
{
    FTutorialHint Hint;

    void SetRemainingVisibleTime(float remainingTime);
    bool IsSingleplayer(class UObject* WorldContext);
    void ChangeHint(const FTutorialHint& NewHint);
};

class UTutorialLevelWidget : public UFSDUserWidget
{
    float DelayBetweenTutorials;

    void ShowTutorialWidget(TSubclassOf<class UTutorialContentWidget> TutorialWidget, bool ignoreQueue);
    void RemoveTutorialWidget(class UTutorialContentWidget* TutorialWidget);
    void RemoveAllTutorials();
    void OnTutorialFinished(class UTutorialContentWidget* TutorialWidget);
    void OnNewActiveTutorial(class UTutorialContentWidget* Widget);
};

class UTutorialWidget : public UFSDUserWidget
{
    float RemainingVisibleTime;

    void Show(const FText& Text, const FText& Title, const FText& TaskText, class UTexture2D* Image, float Duration);
    void OnShow(const FText& Text, const FText& Title, const FText& TaskText, class UTexture2D* Image);
    void OnHide(bool watched);
    void Hide(bool watched);
    void ChangeHintDuration(float NewDuration);
};

class UTwoFacetDynamicIcon : public UDynamicIcon
{
    FLinearColor Primary1Tint1;
    FLinearColor Primary1Tint2;
    TSoftObjectPtr<UTexture2D> Primary1Texture;
    float Primary1Texture_BasePoint;
    float Primary1Texture_Contrast;
    FLinearColor Primary2Tint1;
    FLinearColor Primary2Tint2;
    TSoftObjectPtr<UTexture2D> Primary2Texture;
    float Primary2Texture_BasePoint;
    float Primary2Texture_Contrast;
    class UMaterialInstanceDynamic* PreviewInstance;

    void UpdatePreview();
};

class UUIFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetLoadoutIcon(class UObject* WorldContextObject, class UPlayerCharacterID* characterID, int32 loadoutIndex, int32 iconIndex);
    void RemoveItemUINotification(class UObject* WorldContextObject, TArray<class UObject*> Item, bool MatchChildNotifications);
    bool IsInItemUINotificationSet(class UObject* WorldContextObject, class UObject* Item);
    int64 GetUnixTimeStamp();
    int32 GetLoadoutIcon(class UObject* WorldContextObject, class UPlayerCharacterID* characterID, int32 loadoutIndex);
    TArray<FText> FormatNewsTexts(TArray<FText> texts, int32 RandomSeed, class UNewsTextLists* wordList, class UMissionNameBank* MissionNameBank);
    void ClearAllItemUINotifications(class UObject* WorldContextObject);
    void CheckItemUINotification(class UObject* WorldContextObject, TArray<class UObject*> Item, bool& HasNotification, bool MatchChildNotifications);
    void AddItemUINotification(class UObject* WorldContextObject, TArray<class UObject*> Item);
};

class UUnlockComplexityReward : public UUnlockReward
{
    class UMissionTemplate* mission;
    class UMissionComplexity* Complexity;

};

class UUnlockDifficultyReward : public UUnlockReward
{
    class UDifficultySetting* Difficulty;

};

class UUnlockDurationReward : public UUnlockReward
{
    class UMissionTemplate* mission;
    class UMissionDuration* Duration;

};

class UUnlockMissionTypeReward : public UUnlockReward
{
    class UMissionTemplate* MissionToUnlock;

};

class UUnlockPlanetZoneReward : public UUnlockReward
{
    class UPlanetZone* ZoneToUnlock;

};

class UUnlockReward : public UReward
{
};

class UUnlockedAquisition : public UItemAquisitionBase
{
};

class UUpgradableBoscoComponent : public UUpgradableGearComponent
{
};

class UUpgradableGearComponent : public UActorComponent
{
    class UItemData* ItemData;
    TArray<FUpgradeTier> UpgradeTiers;
    class UOverclockBank* OverclockBank;
    TArray<class UItemUpgrade*> AllOverclocks;
    class UTexture2D* IconLine;
    class UTexture2D* IconBG;
    class UTexture2D* IconDetailed;
    TSoftObjectPtr<UTexture2D> PreviewImage;
    TSoftClassPtr<AActor> PreviewActor;
    FText Name;
    FText Category;
    FText Description;
    int32 CreditCost;
    TMap<UResourceData*, float> ResourceCost;
    int32 RequiredCharacterLevel;
    TArray<FMasteryItem> masteryLevels;

    void SetGearStatText(FGearStatEntry& Entry, FText Text);
    bool PurchaseUpgrade(class UItemID* ItemID, class UItemUpgrade* Upgrade, class AFSDPlayerController* PlayerController, TSubclassOf<class APlayerCharacter> previewedCharacter);
    bool PurchaseItem(class UObject* WorldContextObject, class UItemID* ItemID);
    bool PlayerOwnesUpgradeInAllTiers(TSubclassOf<class AActor> itemClass, class UObject* WorldContextObject);
    void MirrorUpgradePreviewStatus(FGearStatEntry& From, FGearStatEntry& To);
    bool IsUpgradeEquipped(TSubclassOf<class AActor> itemClass, class UItemUpgrade* Upgrade, class AFSDPlayerState* Player);
    bool IsTierUnLocked(class UObject* WorldContextObject, TSubclassOf<class AActor> itemClass, int32 tierIndex, class UPlayerCharacterID* characterID);
    bool IsOverclockingEnabled(class UObject* WorldContextObject, class UPlayerCharacterID* characterID, TSubclassOf<class AActor> itemClass);
    bool IsItemUnlocked(class UObject* WorldContextObject, class UItemID* Item);
    bool IsItemOwned(class UObject* WorldContextObject, class UItemID* Item);
    bool IsItemEquipped(class UObject* WorldContextObject, class UItemID* ItemID);
    int32 GetUpgradeTier(TSubclassOf<class AActor> itemClass, class UItemUpgrade* ItemUpgrade);
    FString GetSourceGearName();
    TMap<UResourceData*, float> GetResourceCost();
    int32 GetRequiredCharacterLevel();
    class UTexture2D* GetPreviewImage();
    TSubclassOf<class AActor> GetPreviewActorClass();
    TArray<class UItemUpgrade*> GetOverClocks();
    int32 GetMasteryProgress(class UObject* WorldContextObject, class UItemID* ItemID, int32& maxMastery);
    TArray<FMasteryItem> GetMasteryLevels(class UItemID* ItemID);
    bool GetMasteryForLevel(const TArray<FMasteryItem>& masteryLevels, int32 Level, FMasteryItem& outLevel);
    TArray<FUpgradeTier> GetItemUpgradeTiers(TSubclassOf<class AActor> itemClass);
    EItemUpgradeStatus GetItemUpgradeStatus(class UObject* WorldContextObject, TSubclassOf<class AActor> itemClass, class UItemUpgrade* ItemUpgrade, class UPlayerCharacterID* characterID);
    TArray<class UItemUpgrade*> GetItemUpgradesFromSave(TSubclassOf<class AActor> itemClass, TSubclassOf<class UItemUpgrade> upgradeClass, class AFSDPlayerState* Player, uint8 upgradeIndex);
    TSubclassOf<class AActor> GetItemPreviewClassFromActor(TSubclassOf<class AActor> Actor);
    TSubclassOf<class AActor> GetItemPreviewClass(class UItemID* ItemID);
    bool GetItemMasteryForLevel(class UItemID* ItemID, int32 Level, FMasteryItem& outLevel);
    class UTexture2D* GetIconLine();
    class UTexture2D* GetIconDetailed();
    class UTexture2D* GetIconBG();
    FText GetGearStatValue(FGearStatEntry& Entry);
    TArray<FGearStatEntry> GetGearStats(class AFSDPlayerState* PlayerState, TSubclassOf<class AActor> ActorClass);
    FString GetGearSourceName(class UItemID* ItemID);
    FText GetGearName();
    FText GetGearDescription();
    FText GetGearCategory();
    TArray<class UItemUpgrade*> GetEquippedUpgrades(TSubclassOf<class AActor> itemClass, class AFSDPlayerState* Player);
    class UItemUpgrade* GetEquippedUpgradeAtTier(TSubclassOf<class AActor> itemClass, int32 tierIndex, class UPlayerCharacterID* characterID, class AFSDPlayerState* Player);
    class UItemUpgrade* GetEquippedOverclock(class UObject* WorldContextObject, TSubclassOf<class AActor> itemClass);
    TArray<class UItemUpgrade*> GetEquippableOverclocks(class UObject* WorldContextObject, TSubclassOf<class AActor> itemClass, class UPlayerCharacterID* characterID);
    int32 GetCreditCost();
    TArray<FCraftingCost> GetCraftingCost();
    int32 GetCharacterLevelRequiredForItem(class UItemID* ItemID);
    TArray<class UItemUpgrade*> GetAllUpgrades();
    void ClearEquippedUpgrade(TSubclassOf<class AActor> itemClass, int32 tierIndex, class AFSDPlayerState* Player);
    void CheckMasteryUnlocks(class UItemID* ItemID, class AFSDPlayerController* Player);
    bool CanItemOverclock(class UObject* WorldContextObject, TSubclassOf<class AActor> itemClass);
    bool CanAffordUpgrade(class UObject* WorldContextObject, class UItemUpgrade* Upgrade);
    bool CanAffordItem(class UObject* WorldContextObject, class UItemID* ItemID);
};

class UUpgradableItemComponent : public UUpgradableGearComponent
{
};

class UUpgradeSettings : public UDataAsset
{
    TArray<int32> ClassAUpgradeCosts;
    TArray<int32> ClassBUpgradeCosts;
    TArray<int32> GearAUpgradeCosts;
    TArray<int32> GearBUpgradeCosts;
    TArray<int32> ArmorUpgradeCosts;
    TArray<int32> PickaxeUpgradeCosts;
    TArray<int32> ClassBoscoUpgradeCosts;
    TArray<FUpgradeCostItem> ClassAResourceCosts;
    TArray<FUpgradeCostItem> ClassBResourceCosts;
    TArray<FUpgradeCostItem> GearAResourceCosts;
    TArray<FUpgradeCostItem> GearBResourceCosts;
    TArray<FUpgradeCostItem> ArmorResourceCosts;
    TArray<FUpgradeCostItem> PickaxeResourceCosts;
    TArray<FUpgradeCostItem> ClassBoscoResourceCosts;

};

class UUsableAggregator : public UItemAggregator
{
    FUsableAggregatorOnVisibilityChanged OnVisibilityChanged;
    void AggregatorVisibilityChangedDelegate(bool IsVisible);
    FText UsingText;

    float GetProgress();
};

class UUsableComponent : public UUsableComponentBase
{
    class UDialogDataAsset* ShoutBegin;
    FText UseText;
    bool ResetOnFail;
    bool SwitchToUsingState;

    void SetUseText(const FText& NewText);
    bool HasDuration();
};

class UUsableComponentBase : public UActorComponent
{
    FUsableComponentBaseOnClientBeginUse OnClientBeginUse;
    void UsedBySignature(class APlayerCharacter* User, EInputKeys Key);
    int32 CallbackKeys;
    float UseCooldown;
    class UUseAnimationSetting* AnimationSettings;
    int32 Priority;
    class USceneComponent* RestrictToCollider;
    bool UsableHidesPlaceables;
    bool IsRayTraceTriggered;
    bool ResetUsingOnCompletion;
    class UUseConditionSet* UseConditions;
    bool IsClientPredictive;
    bool ThirdPersonWhileUsing;

    void SetUseRestrictions(class UUseConditionSet* set);
    void SetRayTraceTriggered(bool rayTraceTriggered);
    void SetAnimationSettings(class UUseAnimationSetting* Settings);
    FText GetUseText(class APlayerCharacter* User);
    float GetUseProgressInPercent(class APlayerCharacter* User);
    class UTexture2D* GetUsableIcon();
    bool GetShowUsingUI();
    bool GetIsRayTraceTriggerd();
    bool GetHideProgressBar(class APlayerCharacter* User);
    bool GetHideActionText(class APlayerCharacter* User);
    void EndUse(class APlayerCharacter* User);
    void BeginUse(class APlayerCharacter* User, EInputKeys Key);
};

class UUseAnimationSetting : public UDataAsset
{
    class UAnimMontage* BeginFP;
    TArray<class UAnimMontage*> LoopsFP;
    class UAnimMontage* EndFP;
    class UAnimMontage* BeginTP;
    TArray<class UAnimMontage*> LoopsTP;
    class UAnimMontage* EndTP;
    bool IsManuallyControlled;
    bool BlockUseWhileActive;
    float BlockUseWhileActiveDuration;

};

class UUseConditionBase : public UObject
{
};

class UUseConditionCarriedActor : public UUseConditionBase
{
    bool Invert;
    TArray<TSoftClassPtr<AActor>> Actors;

};

class UUseConditionCharacterState : public UUseConditionBase
{
    bool Invert;
    TArray<TSoftClassPtr<UCharacterStateComponent>> CharacterStates;

};

class UUseConditionCollection : public UDataAsset
{
    TArray<class UUseConditionBase*> Conditions;

};

class UUseConditionEquippedItem : public UUseConditionBase
{
    bool Invert;
    TArray<TSoftClassPtr<AItem>> Items;

};

class UUseConditionGrounded : public UUseConditionBase
{
    bool Invert;

};

class UUseConditionGroup : public UUseConditionBase
{
    bool Invert;
    class UUseConditionCollection* Collection;

};

class UUseConditionIsCarrying : public UUseConditionBase
{
    bool Invert;

};

class UUseConditionIsOwner : public UUseConditionBase
{
    bool Invert;

};

class UUseConditionItemBlockAction : public UUseConditionBase
{
    bool Invert;

};

class UUseConditionMovementMode : public UUseConditionBase
{
    bool Invert;
    TArray<FMovementModeCombo> MovementModes;

};

class UUseConditionOwnerIsAlive : public UUseConditionBase
{
    bool Invert;

};

class UUseConditionSaluting : public UUseConditionBase
{
    bool Invert;

};

class UUseConditionSet : public UDataAsset
{
    TArray<class UUseConditionBase*> Conditions;

};

class UUsingStateComponent : public UCharacterStateComponent
{
};

class UVacuumAnimInstance : public UCleanupToolAnimInstance
{
};

class UValidDependenciesStrategy : public UValidatorStrategy
{
};

class UValidWeeklySeedCampaignRequirement : public UCampaignRequirement
{
};

class UValidationFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetSelectedAssets(TArray<FString> Paths);
};

class UValidatorStrategy : public UObject
{
};

class UVanityAnimInstance : public UAnimInstance
{
    EVanitySlot VanitySlot;
    bool ArmorCoversBeard;
    FVector ArmorChestThickness;
    FRotator ArmorChestRotation;
    FVector ExternalForce;
    float ExternalForceMultiplier;
    float MaxForce;
    bool AlwaysShowAnimEffects;
    TArray<FVanityAnimEffect> VanityAnimEffects;

    void UpdateMeshes();
};

class UVanityCollectionReward : public UUnlockReward
{
    TArray<class UVanityItem*> VanityItems;
    class UPlayerCharacterID* OptionalCharacterID;
    bool UseContextAsTargetCharacter;

};

class UVanityEventSourceDataAsset : public UDataAsset
{
    FVanityEventSource EventSource;

};

class UVanityFunctionLibrary : public UBlueprintFunctionLibrary
{

    void RandomizeVanityLoadout(class UObject* WorldContextObject, class APlayerCharacter* Character);
    void RandomizeAllRandomVanityLoadout(class APlayerCharacter* currentCharacter);
    void CopyPasteVanityLoadout(class UObject* WorldContextObject, class UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex);
};

class UVanityItem : public USavablePrimaryDataAsset
{
    FText ItemName;
    FText ItemDescription;
    FString NotesInternal;
    class UItemAquisitionBase* Aquisition;
    class UVanityEventSourceDataAsset* EventSourceAsset;
    class UIconGenerationCameraKey* IconGenerationCameraKey;
    TSet<UPlayerCharacterID*> RestrictToCharacters;

    bool RemoveFromOwned(class UObject* WorldContext);
    void PreviewItem(class AFSDPlayerState* PlayerState, bool Show);
    bool IsOwned(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    bool IsEquipped(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    bool HasEventSource();
    void GiftItem(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    EVanitySlot GetVanitySlot();
    TArray<FCraftingCost> GetResourceCost();
    int32 GetRequiredPlayerRank();
    bool GetIsUnLockedFromStart();
    class UTexture* GetIcon();
    FCraftingCost GetFashioniteCost();
    FVanityEventSource GetEventSource();
    int32 GetCraftingCreditsCost();
    FText GetCraftableName();
    FText GetCraftableDescription();
    void CraftItemWithFashionite(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    void CraftItem(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    void ChangeToItem(class UCharacterVanityComponent* Gear);
    bool CanCraftWithFashionite(class UObject* WorldContextObject);
    bool CanCraft(class UObject* WorldContextObject);
    void ApplyItemPermanently(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    void ApplyItem(class APlayerCharacter* Player, bool isPermanent);
};

class UVanityItemRewarder : public UTreasureRewarder
{
    class UVanityItem* GivenVanityItem;
    class UPlayerCharacterID* GivenCharacterID;

};

class UVanityMasteryLibrary : public UBlueprintFunctionLibrary
{

    void ResetVanityMasteryXP(class UObject* WorldContext);
    void MarkFashionitesAwardedForOldPurchasesSeen(class UObject* WorldContext);
    FVanityMasterySettings GetVanityMasterySettings();
    FVanityMasterySave GetVanityMasterySave(class UObject* WorldContext);
    int32 GetVanityMasteryFashioniteForLevel(int32 InCurrentLevel);
    int32 GetFashionitesAwaredForOldPurchases(class UObject* WorldContext);
    float CalculateVanityMasteryLevelProgress(int32 Level, int32 XP);
    FVanityMasteryResult AddVanityMasteryXPFromCost(class UObject* WorldContext, TArray<FCraftingCost> Cost, class UPlayerCharacterID* characterID);
    FVanityMasteryResult AddVanityMasteryXP(class UObject* WorldContext, int32 XP, class UPlayerCharacterID* PlayerId);
};

class UVanityReward : public UUnlockReward
{
    class UVanityItem* VanityItem;
    class UPlayerCharacterID* OptionalCharacterID;
    bool UseContextAsTargetCharacter;

};

class UVanitySchematicBank : public USchematicBankBase
{
    class USchematicCategory* SchematicCategory;
    TMap<class UVanityItem*, class FSchematicBankItem> VanityItems;

    void AppendItems(TArray<class UVanityItem*>& toArray);
};

class UVanitySchematicItem : public USchematicItem
{
    class UVanityItem* Item;

    class UVanityItem* GetVanityItem();
};

class UVanitySettings : public UDataAsset
{
    class UVanityItem* MedbayArmorItem;
    TArray<class UVanityItem*> MedbayArmorMaterials;
    class UDLCBase* AlwaysLockedDLC;
    FVanityMasterySettings MasterySettings;
    FResourceSpawner FashioniteSpawn;
    TArray<class UTexture2D*> VanityCategoryIcons;
    TSet<FGuid> ValidIDs;
    TMap<class FGuid, class UVanityItem*> ItemMap;
    TMap<class EVanitySlot, class FVanitySlotCharacter> GlobalItems;
    TMap<class EVanitySlot, class FVanitySlotCharacter> StoreItems;
    TMap<class EVanitySlot, class FVanitySlotCharacter> TreassureItems;

    bool HasNewVanityNotification(class UObject* WorldContextObject, EVanitySlot Slot, class UPlayerCharacterID* characterID);
    class UTexture2D* GetVanityCategoryIcon(EVanitySlot Slot);
    void GetUnlockedStoreVanityCount(class UObject* WorldContextObject, EVanitySlot Slot, class UPlayerCharacterID* characterID, int32& owned, int32& Total);
};

class UVanityTattoo : public UDataAsset
{
    TSoftObjectPtr<UTexture2D> Texture;
    FVector2D Location;
    float RotationAngle;
    float ScaleBase;
    float ScaleStretch;

};

class UVeinMutator : public UMutator
{
    class UVeinResourceData* VeinResource;
    float modifier;

};

class UVeinResourceCreator : public UResourceCreator
{
    class UVeinResourceData* Resource;
    class UDebrisPositioning* Positioning;
    ECarveFilterType CarveType;
    float SegmentMaxDot;
    float VeinWorldHorizontalMaxDot;
    float VeinWorldHorizontalMinDot;
    FRandRange VeinLength;
    class UFloodFillSettings* Noise;
    float range;
    float NoiseRange;
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;

};

class UVeinResourceData : public UResourceData
{
    class UTerrainMaterial* TerrainMaterial;
    float UnitsPerLenth;
    bool ScaleToResourceDistribution;
    class UVeinResourceCreator* ResourceCreator;

    class UTerrainMaterial* GetTerrainMaterial();
    float GetDesiredAmount(class AProceduralSetup* pls);
};

class UVictoryPose : public USavablePrimaryDataAsset
{
    FText Title;
    FText Description;
    class UItemAquisitionBase* Aquisition;
    TArray<TSoftObjectPtr<UAnimSequence>> Walks;
    TSoftObjectPtr<UAnimSequence> pose;
    TSoftClassPtr<AActor> Prop_Actor;
    TSoftObjectPtr<UAnimSequence> Prop_Walk;
    TSoftObjectPtr<UAnimSequence> Prop_Pose;
    TSoftObjectPtr<UAnimSequence> Prop_Idle;

    void Unlock(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    void ResetUnlock(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    bool IsUnlockedNotFromStart(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    bool IsUnlocked(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    void Equip(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
};

class UVictoryPoseFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsRandomVictoryPose(class UVictoryPose* VictoryPose);
    TArray<class UVictoryPose*> GetOwnedVictoryPoses(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
    class UVictoryPose* GetEquippedVictoryPose(class UObject* WorldContextObject, class UPlayerCharacterID* characterID);
};

class UVictoryPoseReward : public UUnlockReward
{
    class UVictoryPose* VictoryPose;
    class UPlayerCharacterID* OptionalCharacterID;

};

class UVictoryPoseRewarder : public UTreasureRewarder
{
    class UVictoryPose* GivenPose;
    class UPlayerCharacterID* GivenCharacterID;

};

class UVictoryPoseSchematicBank : public USchematicBankBase
{
    class USchematicCategory* SchematicCategory;
    TMap<class UVictoryPose*, class FSchematicBankItem> VictoryPoses;

};

class UVictoryPoseSchematicItem : public USchematicItem
{
    class UVictoryPose* VictoryPose;

};

class UVictoryPoseSettings : public UDataAsset
{
    class UTexture2D* GenericVictoryPoseIcon;
    TArray<class UVictoryPose*> LoadedVictoryPoses;
    class UVictoryPose* RandomVictoryPose;
    TArray<class TSubclassOf<UActorComponent>> ModReferencesHack;
    TArray<class TSubclassOf<AActor>> ModProxyHack;

    TArray<class UVictoryPose*> GetVictoryPoses();
};

class UWaitTask : public ULineSpikeTaskBase
{
    float WaitTime;
    bool SkipIfLast;
    bool OnlyOnce;

};

class UWalkingStateComponent : public UCharacterStateComponent
{
    bool SlidingEnabled;
    bool ShowDebug;
    float SlideAngle;
    float SlideAcceleration;
    float MaxSlideSpeed;
    float MaxClimbDistance;
    class USoundBase* AudioSliding;
    class USoundBase* IceSliding;
    class UAudioComponent* AudioComponentSliding;
    class UAudioComponent* AudioComponentIceSliding;

    void TrackGrindCallback(class APlayerCharacter* User, EInputKeys Key);
    void Server_StartTrackMovement(class UTrackBuilderMovement* InMovement);
    void Server_SetIsSliding(bool isSliding);
    void JumpPress();
};

class UWeakpointDamageCondition : public UDamageCondition
{
};

class UWeakpointGlowComponent : public UActorComponent
{
    FName EmissiveParam;
    TArray<FWeakpointChannel> Channels;
    FRuntimeFloatCurve WeakpointHitCurve;
    float CurveMultiplier;
    EWeakpointGlowMode Mode;
    class UFSDPhysicalMaterial* WeakPointMaterial;
    bool AddFirstChannelAutomatically;
    int32 ReplaceMatIndex;

    bool StopLoopingGlow(int32 aGlowID, bool aFade);
    void ShowBodypartHit(float Amount, float BaseAmount, const FDamageData& DamageData);
    void SetUpWeakPointGlowOnMeshByBone(const class USkeletalMeshComponent*& Mesh, int32 MaterialIndex, FName Bone, class UHealthComponentBase* HealthComponent);
    int32 SetUpWeakPointGlowOnMesh(class UMeshComponent* Mesh, int32 MaterialIndex, class UFSDPhysicalMaterial* PhysicalMaterial, class UHealthComponentBase* HealthComponent);
    void SetChannelEnabled(bool Enabled, int32 Channel);
    void EnableWeakpointRegistration(bool Enabled);
    void All_ShowWeakPointHit(uint8 Channel);
    void AddWeakpointGlow(bool loopIndefinitely, float LoopTime, class UCurveFloat* GrowCurve, class UCurveFloat* FadeCurve, int32 UniqueId, int32 Channel);
};

class UWeaponChargeProgressDamageBonus : public UItemUpgrade
{
    class UDamageClass* DamageClass;
    FFloatInterval ChargeRange;
    FFloatInterval DamageBonusRange;

};

class UWeaponFireComponent : public UActorComponent
{
    FWeaponFireComponentOnWeaponFired OnWeaponFired;
    void WeaponFiredDelegate(const FVector& Location);
    FWeaponFireComponentOnWeaponFireEnded OnWeaponFireEnded;
    void WeaponFireEndedDelegate();
    FWeaponFireComponentOnRicochetEvent OnRicochetEvent;
    void WeaponRicochetDelegate(const FVector& Origin, const FVector& Location, const FVector& Normal);
    TScriptInterface<class IWeaponFireOwner> Weapon;

    void StopFire();
    void Server_SetShotPower(float shotPower);
    void Fire(const FVector& Origin, const FVector_NetQuantizeNormal& Direction, bool playFireFX);
};

class UWeaponHitCountEffect : public UObject
{
    bool UsesDamageEffects;

};

class UWeaponHitCounterComponent : public UActorComponent
{
    class UWeaponHitCountEffect* HitEffect;
    bool RequiresWeakpointHit;

    void Server_OnReloading();
    void OnTargetDamaged(class UHealthComponentBase* Health, float Amount, class UPrimitiveComponent* HitComponent, class UFSDPhysicalMaterial* PhysicalMaterial);
    void OnStoppedUsing();
    void OnReloading();
    void All_ShowDamageEffects(const TArray<TWeakObjectPtr<AActor>>& Targets);
};

class UWeaponHitCounterUpgrade : public UItemUpgrade
{
    TSubclassOf<class UWeaponHitCounterComponent> ComponentClass;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> Item, TSubclassOf<class UWeaponHitCounterComponent> ComponentClass);
};

class UWeaponHitEffectComponent : public UActorComponent
{
    float EffectChance;
    TSubclassOf<class AActor> ActorToSpawn;

    void Server_SpawnEffect(const FVector_NetQuantize& Location, const FRotator& Rotation);
    void OnHit(const FHitResult& HitResult, bool isAlwaysPenetrated);
};

class UWeaponIconSceneCaptureComponent : public USceneCaptureComponent2D
{
    class UIconGenerationCameraKey* CameraKey;

};

class UWeaponImpactComponent : public UActorComponent
{
    FWeaponImpactComponentOnImpactedEvent OnImpactedEvent;
    void ImpactedSignature();
    FWeaponImpactComponentOnHighAcceleration OnHighAcceleration;
    void HightAccelerationSignature();
    bool DebugText;
    FName ImpactSocketName;
    class USkeletalMeshComponent* ActiveMesh;
    bool TrackAcceleration;
    bool TrackVelocity;
    float TriggerHighAccelAt;
    float TriggerAtVelocityDifference;

    void EnableImpactCheckhing(class USkeletalMeshComponent* cmp);
    void DisableImpactChecking();
};

class UWeaponMaintenanceAquisition : public UItemAquisitionBase
{
};

class UWeaponMaintenanceItemWidget : public UUserWidget
{
    class UItemID* WeaponID;
    class UPlayerCharacterID* characterID;
    class UItemSkin* Reward;
    class UItemData* WeaponData;
    EWeaponMaintenanceState MaintenanceState;
    int32 MaintenanceLevel;
    int32 MaintenanceXP;
    int32 MaintenanceTargetXP;

    void SetWeapon(class UObject* WorldContext, class UItemID* InWeaponID, class UPlayerCharacterID* InCharacterID);
    void RefreshFromSavegame(class UObject* WorldContext);
    void Receive_RefreshedFromSavegame();
    void Receive_CanLevelUp();
    bool LevelUp(class UObject* WorldContext);
    int32 GetMaxLevel();
};

class UWeaponMaintenanceSettings : public UDataAsset
{
    TArray<int32> LevelXPRequirements;
    TArray<class UItemSkin*> LevelRewards;
    FSpaceRigNotification WeaponUnlockedNotification;

};

class UWeaponMaintenanceTabWidget : public UWindowWidget
{

    bool HasNewNotifications(class UObject* WorldContext);
};

class UWeaponSwitchProjectileUpgrade : public UItemUpgrade
{
    FProjectileSwitch Projectile;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> Item, TSubclassOf<class UWeaponHitCounterComponent> ComponentClass);
};

class UWeeklyResourceReward : public UReward
{
    int32 ResourceCount;
    FIRandRange Amount;

    TMap<UResourceData*, float> GetRewards(class AFSDPlayerController* Player);
};

class UWeeklyTimerCampaignRequirement : public UCampaignRequirement
{

    FTimespan GetWeeklyTimeLeft(class AFSDPlayerController* Player);
    FTimespan GetTimeUntillNewCampaign(class AFSDPlayerController* Player);
    bool GetHasCompleted(class UCampaign* Campaign, class AFSDPlayerController* Player);
};

class UWeightRoomSelectorLibrary : public UBlueprintFunctionLibrary
{

    void SetupWeightedRoomSelector(FWeightedRoomSelector& Target, TArray<class URoomGenerator*>& Rooms);
    class URoomGenerator* SelectRandomRoom(FWeightedRoomSelector& Target, FRandomStream& RandomStream);
    class URoomGenerator* GetRandomRoom(TArray<class URoomGenerator*>& Rooms, bool removeChosenRoom, FRandomStream& RandomStream);
};

class UWidgetComponentCustomMaterial : public UWidgetComponent
{
    class UMaterialInterface* CustomMaterial;

};

class UWidgetToRenderTargetComponent : public UActorComponent
{
    TSubclassOf<class UUserWidget> WidgetClass;
    FIntPoint DrawSize;
    bool bManuallyRedraw;
    bool bRedrawRequested;
    float RedrawTime;
    float LastWidgetRenderTime;
    bool bWindowFocusable;
    FIntPoint CurrentDrawSize;
    bool bDrawAtDesiredSize;
    FVector2D Pivot;
    class UMaterialInterface* BaseMaterial;
    class ULocalPlayer* OwnerPlayer;
    FLinearColor BackgroundColor;
    FLinearColor TintColorAndOpacity;
    float OpacityFromTexture;
    bool bIsTwoSided;
    bool TickWhenOffscreen;
    class UUserWidget* Widget;
    class UTextureRenderTarget2D* RenderTarget;
    class UMaterialInstanceDynamic* MaterialInstance;
    bool bEditTimeUsable;

    void SetWidget(class UUserWidget* Widget);
    void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
    void SetBackgroundColor(const FLinearColor NewBackgroundColor);
    void RequestRedraw();
    class UUserWidget* GetUserWidgetObject();
    class UTextureRenderTarget2D* GetRenderTarget();
    class ULocalPlayer* GetOwnerPlayer();
    class UMaterialInstanceDynamic* GetMaterialInstance();
};

class UWindowManager : public UActorComponent
{
    FWindowManagerOnFirstWindowOpened OnFirstWindowOpened;
    void WindowManagerDelegate();
    FWindowManagerOnLastWindowClosed OnLastWindowClosed;
    void WindowManagerDelegate();
    class USoundCue* AudioWindowOpen;
    TArray<class UWindowWidget*> WindowStack;
    TMap<class TSubclassOf<UWindowWidget>, class UWindowWidget*> WindowList;
    TMap<class TSubclassOf<UUserWidget>, class TWeakObjectPtr<UUserWidget>> WidgetSingletonCache;
    bool ResolutionDownscaleActive;

    void SetSingletonWidgetVisibility(TSubclassOf<class UUserWidget> WidgetClass, ESlateVisibility Visibility);
    void ReplaceWindow(class UWindowWidget* Window);
    class UWindowWidget* OpenWindowFromClass(TSubclassOf<class UWindowWidget> WindowClass, int32 ZOrder, bool ShowCursor);
    void OpenWindow(class UWindowWidget* Window, bool PlayAudio, bool ShowCursor);
    class UWindowWidget* OpenSingleUseWindow(TSubclassOf<class UWindowWidget> WindowClass, int32 ZOrder);
    bool IsWindowOpen(class UWindowWidget* Window);
    bool IsTopWindow(class UWindowWidget* Window);
    class UUserWidget* GetOrCreateSingletonWidget(TSubclassOf<class UUserWidget> WidgetClass, bool& WidgetCreated);
    class UWindowWidget* GetCurrentWindow();
    void CloseWindow(class UWindowWidget* Window);
    void CloseTopWindow();
    void CloseAllWindows();
    void CenterCursor();
    bool AnyWindowsOpen();
};

class UWindowWidget : public UUserWidget
{
    FWindowWidgetOnWindowClosed OnWindowClosed;
    void WindowDelegate(class UWindowWidget* Window);
    bool bHandleCloseCommand;
    bool bResolutionDownscaleWhenOpen;

    void WindowDelegate__DelegateSignature(class UWindowWidget* Window);
    void ReceiveSelectPreviousCommand();
    void ReceiveSelectNextCommand();
    void ReceiveSelectCharacterCommand();
    void ReceiveOkCommand();
    void ReceiveCloseCommand();
    bool ReceiveCanCloseWindow(FName InActionName, FKey InKey, bool InIsMouseEvent);
    void OnShown();
    void OnNewTopWindow();
    void OnClosed();
    void ConsumeCommand();
    void CloseThisWindow();
};

class UWithinAngleValidator : public UTargetValidator
{
    float MaxAngle;

};

class UWoodLouseAnimInstance : public USpiderAnimInstance
{
    FVector2D AngleToTarget;
    float InterpSpeed;
    float BreakRollingWhenTimeLeft;
    EWoodLouseState RollerState;
    bool IsWalking;
    bool IsUpRight;
    bool IsDoingSpecialAttack;
    bool IsUnFolded;
    bool IsGroundValid;
    bool IsInRollState;
    bool IdleToDownTurnLeftLock;
    bool DownTurnLeftToIdleLock;
    bool DownWalkToDownTurnLeftLock;
    bool WoodlouseWalk;
    bool IdleToDownWalkLock;
    bool DownWalkToDownTurnRightLock;
    bool IdleToDownTurnRightLock;

};

class UYesNoPromptAction : public UBlueprintAsyncActionBase
{
    FYesNoPromptActionYes Yes;
    void YesNoOutputPin();
    FYesNoPromptActionNo No;
    void YesNoOutputPin();
    FYesNoPromptActionYesNoDelegate YesNoDelegate;
    void OnYesNoClickedDelegate(bool Yes);
    TWeakObjectPtr<class UYesNoPromptWidget> ActivePrompt;

    void YesNoOutputPin__DelegateSignature();
    class UYesNoPromptAction* PromptYesNo(class UObject* WorldContext, FYesNoPromptSettings Prompt);
    class UYesNoPromptAction* PromptPurchase(class UObject* WorldContext, FYesNoPromptSettings Prompt, const TMap<UResourceData*, int32>& Resources);
    void PromptCallback(bool YesClicked);
};

class UYesNoPromptWidget : public UWindowWidget
{
    bool bDestroyOnClick;
    bool bCloseAllWindows;
    FYesNoPromptWidgetOnClickedCallback OnClickedCallback;
    void OnYesNoClickedDelegate(bool Yes);

    void Show(FText Title, FText Message, const FShowOnYesNoClicked& OnYesNoClicked);
    void SetMappedResources(const TMap<UResourceData*, int32>& Resources);
    void OnYesNoClickedDelegate__DelegateSignature(bool Yes);
    void OnShow(const FText& Title, const FText& Message);
    void OnClicked(bool Yes);
    void Clicked(bool YesClicked);
};

class UZipLineStateComponent : public UCharacterStateComponent
{
    FZipLineConnectorHandler ZipLineConnector;
    float VerticalOffset;
    float HorizontalOffset;
    float TravelSpeed;
    float AccelAndDecelAlpha;
    float JumpForce;
    float SpeedBoostActivationDuration;
    float SpeedBoostActivionMinAngle;
    float BaseSpeedBoost;
    float AdditionalSpeedBoostPerAngle;
    float SpeedBoostCoolDownDuration;
    float AccelerationAlpha;
    float DecelerationAlpha;
    float MinStartDistanceToEnd;
    float ReleaseDistance;
    bool bCanActivateSpeedBoost;
    bool bShowSpeedBoostActivator;
    float SpeedBoostActivationProgress;
    class USoundBase* AudioOnStart;
    class USoundBase* AudioOnDuring;
    class USoundBase* AudioOnChangingDirection;
    class USoundBase* AudioOnStop;
    class USoundBase* AudioOnSpeedBoostActivated;
    class UDialogDataAsset* ShoutStartUsing;
    class UDialogDataAsset* ShoutSpeedBoostActivated;
    class AZipLineProjectile* ZipLineProjectile;
    FZipLine ZipLine;
    float DamageBeforeFalling;
    float FriendlyFireModifier;
    float DamageResetTime;
    class UAudioComponent* AudioComponent;

    void ServerSetSpeedBoostActivated(bool InBoostActivated);
    void ServerJumpPressed(bool JumpForward);
    void ServerForwardInputChanged(float Input);
    void ServerChangeDirection();
    void ReceiveSpeedBoostDeactivated();
    void ReceiveSpeedBoostActivated();
    void OnRep_ZipLine();
    void OnPlayerHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    bool GetSpeedBoostActivated();
    FVector GetJumpVector(FVector LookVector, FVector CurrentVelocity);
    void All_SpeedBoostChanged(bool bActive);
};

class UZipLineUsable : public UInstantUsable
{
};

class UZiplineGunUpgrade : public UStandardItemUpgrade
{
    EZiplineGunUpgrades upgradeType;
    TSubclassOf<class AZipLineProjectile> ProjectileClass;

    FUpgradeValues GetUpgradedValue(class AFSDPlayerState* Player, TSubclassOf<class AActor> Item, EZiplineGunUpgrades upgradeType);
};

class UZiplineLauncherComponent : public UWeaponFireComponent
{
    TEnumAsByte<ECollisionChannel> HitCollisionChannel;
    float ProjectileLocationOffset;
    TSubclassOf<class AZipLineProjectile> ProjectileClass;

    void Server_Fire(FVector_NetQuantize Origin, FVector_NetQuantize Destination);
    void All_ShowHit();
};

#endif
