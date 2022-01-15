#ifndef UE4SS_SDK_FSD_HPP
#define UE4SS_SDK_FSD_HPP

#include "FSD_enums.hpp"

class UAcceptInviteBlueprintCallProxy : UOnlineBlueprintCallProxyBase
{
    FAcceptInviteBlueprintCallProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FAcceptInviteBlueprintCallProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();
    UObject* WorldContextObject;

    UAcceptInviteBlueprintCallProxy* AcceptInvite(UObject* WorldContextObject, FString ListName, FString UserId);
}

class UObjective : UActorComponent
{
    FObjectiveOnObjectiveUpdated OnObjectiveUpdated;
    void ObjectiveUpdatedSignature(UObjective* Objective);
    TSubclassOf<UObjectiveWidget> ObjectiveWidgetClass;
    FMissionShouts MissionShouts;
    FText MissionDescription;
    int32 CompletionRewardInCredits;
    int32 CompletionRewardInXP;
    bool ScaleObjectiveToMission;
    bool RequiredReturnObjectiveCompleted;
    UMissionStat* ObjectiveCompletedStat;
    TSoftClassPtr<UOptionalObjectiveWidget> OptionalObjectiveWidgetClass;
    int32 IsPrimaryObjective;
    float MissionScale;
    TArray<UBiome*> BannedInBiomes;

    void SignalObjectiveUpdated();
    void Receive_StartTracking();
    void OnRep_IsPrimaryObjective();
    bool IsTutorialObjective();
    bool IsPrimary();
    bool IsObjectiveResource(UResourceData* InResource);
    bool IsFinalBattle();
    bool IsCompleted();
    bool HasReplicated();
    TSubclassOf<UObjectiveWidget> GetWidgetClassOrDefault(TSubclassOf<UObjectiveWidget> DefaultWidgetClass);
    int32 GetRewardXP();
    FCreditsReward GetRewardCredits();
    TSubclassOf<UOptionalObjectiveWidget> GetOptionalMissionWidget();
    FText GetObjectiveText();
    UTexture2D* GetObjectiveIconFromClass(TSubclassOf<UObjective> objectiveClass);
    UTexture2D* GetObjectiveIcon();
    FText GetObjectiveDescriptionFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength);
    FText GetObjectiveDescription(float missionLength);
    int32 GetObjectiveAmountFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength);
    int32 GetObjectiveAmount(float missionLength);
    FObjectiveMissionIcon GetMissionIcon();
    FText GetInMissionText();
    FText GetInMissionCounterText();
    UTexture2D* GetInMissionCounterIcon();
}

class UActivationOjective : UObjective
{
    int32 ObjectivesFound;
    int32 ObjectivesToFind;

    void OnRep_ObjectivesToFind(int32 prevAmount);
    void OnRep_ObjectivesFound(int32 prevAmount);
}

class AActivationObject : AActor
{
    USingleUsableComponent* Usable;
    bool HasBeenUsed;

    void OnUsedBy(UPlayerCharacter* User, EInputKeys Key);
}

class UActivitySubSystem : UGameInstanceSubsystem
{

    void StartActivity(const UPlayerState* PlayerState, const UGameActivityType* activity);
    void ShowPlayerReviewUI(bool ReviewActiveMatch);
    bool PlayerReviewUIAvailable(bool ReviewActiveMatch);
    void EndActivity(const UPlayerState* PlayerState, const UGameActivityType* activity);
}

class UGameActivitySettings : UDataAsset
{
    TArray<TSoftObjectPtr<UGameActivityType>> GameActivites;
}

class UGameActivityType : UDataAsset
{
    FString ActivityId;
    EActivityType ActivityType;
    TArray<FGameActivitySubTask> SubTasks;
}

class UGameActivityAssignmentType : UGameActivityType
{
}

class UGameActivityMissionType : UGameActivityType
{
    TSoftObjectPtr<UMissionTemplate> ActivityMission;
}

class UReward : UDataAsset
{
}

class UActivityCardReward : UReward
{
    UGameActivityType* activity;
}

class UActorFunctionLibrary : UBlueprintFunctionLibrary
{

    void UnlockSpecificCharacters(UObject* WorldContextObject, TArray<UPlayerCharacter*> Characters, ECharacterState UnlockIf, ECharacterState UnlockTo);
    void UnlockCharacters(UObject* WorldContextObject);
    float TimeSince(UObject* WorldContextObject, float Time);
    void SetScalarParameters(FName ParameterName, float Value, const TArray<UMaterialInstanceDynamic*>& Materials);
    void PlayCueOnClient(UPlayerController* Target, USoundCue* cue);
    void PlayCueOnAll(UObject* WorldContextObject, USoundCue* cue);
    float PingPong(float Time, float Length, bool normalize);
    float MoveTowards(float current, float End, float step);
    void LockSpecificCharactersIfState(UObject* WorldContextObject, TArray<UPlayerCharacter*> Characters, ECharacterState stateToLock);
    void LockSpecificCharacters(UObject* WorldContextObject, TArray<UPlayerCharacter*> Characters);
    bool LockSpecificCharacterIfState(UObject* WorldContextObject, UPlayerCharacter* Character, ECharacterState LockIf, ECharacterState LockTo);
    void LockCharacters(UObject* WorldContextObject);
    TSubclassOf<UWindowWidget> LoadWindowWidgetClass(SoftClassProperty WidgetClass);
    TSubclassOf<UUserWidget> LoadWidgetClass(SoftClassProperty WidgetClass);
    UClass* LoadClass(SoftClassProperty softReference);
    void KillActorWithEffects(AActor* Actor, USceneComponent* visualsToHide, USoundCue* deathSound, UFXSystemAsset* deathParticles, float particleScale, UPathfinderCollisionComponent* pathColliderToDisable);
    bool IsWeakPoint(UFSDPhysicalMaterial* Material);
    bool IsSingleplayer(UObject* WorldContextObject);
    bool IsInRangeOfLocalPlayer(AActor* toActor, float MinDistance, float MaxDistance);
    bool IsCloseToLocalPlayer(AActor* toActor, float Distance);
    int32 GetTotalHeroLevels(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    FGuid GetSaveGameIDFromCharacterID(UPlayerCharacterID* characterID);
    FGuid GetSavegameID(TSubclassOf<UObject> objectClass);
    TArray<APlayerCharacter*> GetPlayersInRange(UObject* WorldContextObject, const FVector& Origin, float Radius, bool MustBeAlive);
    UItemID* GetItemID(TSubclassOf<AActor> itemClass);
    float GetHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    FText GetHeroSwitchToMessage(TSubclassOf<UPlayerCharacter> playerClass);
    FString GetHeroSourceName(TSubclassOf<UPlayerCharacter> playerClass);
    float GetHeroProgress(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    FText GetHeroName(TSubclassOf<UPlayerCharacter> playerClass);
    int32 GetHeroLevel(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    UInventoryList* GetHeroInventoryList(UPlayerCharacterID* characterID);
    FHeroInfo GetHeroInfo(TSubclassOf<UPlayerCharacter> playerClass);
    UTexture2D* GetHeroImageSmall(TSubclassOf<UPlayerCharacter> playerClass);
    UTexture2D* GetHeroImageFullSize(TSubclassOf<UPlayerCharacter> playerClass);
    UTexture2D* GetHeroImage(TSubclassOf<UPlayerCharacter> playerClass);
    FLinearColor GetHeroColor(TSubclassOf<UPlayerCharacter> playerClass);
    UActorComponent* GetComponentFromClass(TSubclassOf<AActor> Actor, TSubclassOf<UActorComponent> ComponentClass);
    UActorComponent* GetComponentByClass(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass);
    UPlayerCharacterID* GetCharacterIDFromCharacter(UPlayerCharacter* Character);
    UPlayerCharacterID* GetCharacterID(TSubclassOf<UPlayerCharacter> playerClass);
    TArray<APlayerCharacter*> GetAllPlayerCharacters(UObject* WorldContext);
    FVector GetActorTargetCenter(AActor* TargetActor);
    void FSDRemoveBlendable(UPostProcessComponent* PostProcessComponent, InterfaceProperty InBlendableObject);
    void FSDRemoveAllWidgets(UObject* WorldContextObject);
    void FSDDumpCallStack(FString Msg);
    APlayerCharacter* FindNearestPlayerCharacter(UObject* WorldContextObject, FVector fromLocation, float MaxRadius, bool MustBeAlive, bool MustBeUnparalyzed, bool MustHaveLineOfSight);
    FVector FindLatejoinDroppodLocation(UFSDGameMode* GameMode);
    AActor* FindClosestEnemyFromLocation(const FVector& fromLocation, float range, bool LineOfSightCheck, UObject* WorldContextObject, const TArray<AActor*>& IgnoredActors, const FVector& Offset);
    AActor* FindClosestEnemyFromActor(AActor* FromActor, float range, bool LineOfSightCheck, const FGameplayTagQuery& tagQuery, const FVector& Offset);
    FVector FindCharacterTeleportLocation(UObject* WorldContextObject, const FVector& closeToLocation, float desiredDistance);
    void FadeMaterials(const UObject* WorldContextObject, const UMeshComponent*& Mesh, float Duration);
    float EvaluateRuntimeCurve(UObject* WorldContextObject, const FRuntimeFloatCurve& Curve, float Time);
    void DissolveMaterials(const UObject* WorldContextObject, const UMeshComponent*& Mesh, float Duration);
    void DamagePlayersInArea(const FVector& Origin, AActor* Instigator, const float Damage, const float Radius, UDamageClass* DamageClass);
    UHealthComponentBase* DamageIfInRange(float MaxDistance, float Damage, AActor* Target, AActor* Attacker, UDamageClass* DamageClass);
    void DamageAllInAreaExcept(const FVector Origin, AActor* Instigator, const float Damage, const float BlastRadius, const float MaxDamageRadius, const float minDamagePercent, const TArray<AActor*>& IgnoreActors, const float friendlyFireModifier, UDamageClass* DamageClass);
    void DamageAllInArea(const FVector Origin, AActor* Instigator, const float Damage, const float BlastRadius, const float MaxDamageRadius, const float minDamagePercent, const float friendlyFireModifier, UDamageClass* DamageClass);
    TArray<UMaterialInstanceDynamic*> CreateDynamicMaterialInstances(UMeshComponent* Mesh);
    float AddHeroXP(UObject* WorldContextObject, UPlayerCharacterID* characterID, float Amount);
    void AddEnemyKill(UPlayerCharacter* Instigator, UEnemyComponent* EnemyComponent, UFSDGameState* GameState);
    bool ActorMatchesTagQuery(const FGameplayTagQuery& Query, const AActor* InActor);
}

class UStatusEffectsFunctionLibrary : UBlueprintFunctionLibrary
{

    float GetMaxResistance(TSubclassOf<UStatusEffect> StatusEffect);
    UDamageClass* GetDamageClass(TSubclassOf<UStatusEffect> StatusEffect);
    bool CanTrigger(TSubclassOf<UStatusEffect> StatusEffect, AActor* OtherActor);
}

class UFrontendBlueprintLibrary : UBlueprintFunctionLibrary
{

    void OpenURLInExternalBrowser(FString URL);
    bool IsShippingBuild();
    EFSDTargetPlatform FSDTargetPlatform();
}

class UActorStateComponent : UActorComponent
{
    FActorStateComponentOnBeginState OnBeginState;
    void StateDelegate(UActorStateComponent* State);
    FActorStateComponentOnTickState OnTickState;
    void StateTickDelegate(UActorStateComponent* State, float DeltaTime);
    FActorStateComponentOnEndState OnEndState;
    void StateDelegate(UActorStateComponent* State);
    UActorStateComponent* CurrentState;
    UActorStateComponent* NextState;
    UActorStateComponent* MasterState;
    float StateActiveTime;

    void OnRep_CurrentState(UActorStateComponent* PreviousState);
    bool IsStateActive();
    void GotoState();
}

class UFSDUserWidget : UUserWidget
{
    FFSDUserWidgetOnVisibilityChanged OnVisibilityChanged;
    void VisibilityChangedDelegate(UUserWidget* Widget, bool IsVisible);
    APlayerCharacter* Character;

    void SetOpacity(float alpha);
    void ScaleByBaseResolution();
    void Refresh();
    void ReceiveNewVisibility(ESlateVisibility NewVisibility);
    void OnCloseMenuReleased(bool& Handled);
    void OnCloseMenuPressed(bool& Handled);
    bool HasCharacter();
    float GetOpacity();
    AFSDPlayerState* GetFSDPlayerState();
    AItem* GetEquippedItem();
    float GetBaseResolutionScale();
    void BP_OnRefresh();
}

class UActorTrackingWidget : UFSDUserWidget
{
    TWeakObjectPtr<USceneComponent> TargetComponent;
    float WorldHeightOffset;
    float ScaleBy;
    FMargin ScreenMargin;
    int32 WidgetZOrder;
    bool bTrackCenterOfMass;
    bool bHideWhenPlayerNearby;

    void SetTargetComponent(USceneComponent* Component);
    void SetTarget(AActor* Actor);
    void OnTargetSet(AActor* NewTarget);
    void OnTargetDistanceChanged(float Distance);
    void OnShow();
    void OnInViewChanged(bool inView, float Angle);
    AActor* GetTarget();
    FVector2D GetRenderTranslation();
    bool FindScreenPosition(UPlayerController* PlayerController, FVector WorldLocation, FMargin Margin, FVector& ScreenCord, float& Angle);
    UActorTrackingWidget* CreateTrackingWidget(UPlayerController* PlayerController, TSubclassOf<UActorTrackingWidget> WidgetType, USceneComponent* TargetComponent);
}

class UActorTrackingComponent : USceneComponent
{
    TSubclassOf<UActorTrackingWidget> WidgetType;
    bool VisibleOnHoldTAB;
    bool VisibleFromStart;
    bool bIconHidden;
    TWeakObjectPtr<UActorTrackingWidget> Widget;

    void ToggleIcon(bool Visible);
    void OnHoldTAB(bool IsDown);
    bool IsIconVisible();
}

class AAdicPuddle : AActor
{
    USphereComponent* SphereTrigger;
    USoundBase* SpawnSound;
    TSubclassOf<UStatusEffect> InflictedStatusEffect;
    float LifeTime;

    void OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}

class UAdventureObjective : UObjective
{
}

class UAfflictionEffect : UObject
{

    bool ShouldInstantiate();
    void ReceiveEndEffect(UPawnAfflictionComponent* Target);
    void ReceiveBeginEffect(UPawnAfflictionComponent* Target);
}

class UPawnFrozenUniqueAfflictionEffect : UAfflictionEffect
{
}

class UPawnBurningUniqueAfflictionEffect : UAfflictionEffect
{
}

class USpawnAtLocationParticleAfflictionEffect : UAfflictionEffect
{
    FScaledEffect ScaledParticleEffect;
}

class UAttachedParticlesAfflictionEffect : UAfflictionEffect
{
    UFXSystemAsset* ParticleEffect;
    TArray<UFXSystemAsset*> ParticleEffects;
    EAfflictionSocket Socket;
    bool ScaleToActor;
    bool UseVisibilityHack;
}

class UCharacterShoutAfflictionEffect : UAfflictionEffect
{
    UDialogDataAsset* Shout;
}

class UCameraParticleAfflictionEffect : UAfflictionEffect
{
    UParticleSystem* ParticleEffect;
}

class UShieldLinkedAfflictionEffect : UAfflictionEffect
{
}

class USoundAfflictionEffect : UAfflictionEffect
{
    USoundCue* BeginSound;
    USoundCue* EndSound;
    bool Attach;
    FName AttachBone;
    float FadeOnLoopEndDuration;
}

class UAttachMeshesAfflictionEffect : UAfflictionEffect
{
    TArray<FAttachMeshesAfflictionItem> AttachItems;
    UParticleSystem* OnRemoveEffect;
}

class UFrozenAfflictionEffect : UAfflictionEffect
{
    TArray<FFrozenAfflictionItem> IceParts;
    UMaterialInterface* MaterialOverride;
    FName ParticleBone;
    TArray<UMaterialInterface*> IceMaterials;
}

class UBurningAfflictionEffect : UAfflictionEffect
{
    EFrozenBitsSize FireParticleSize;
}

class UStaggeredAfflictionEffect : UAfflictionEffect
{
    float StaggerStrength;
}

class UBoneParticlesAfflictionEffect : UAfflictionEffect
{
    TArray<UParticleSystem*> Particles;
    USoundCue* Sound;
}

class UAnimatedItemParticleAfflictionEffect : UAfflictionEffect
{
    EItemCategory ItemCategory;
    UParticleSystem* ParticleEffect;
    FName Socket;
}

class UPlayerCharacterMontageAfflictionEffect : UAfflictionEffect
{
    UAnimMontage* FP_Montage;
    UAnimMontage* TP_Montage;
    float BlendOut;
    TArray<FName> RandomStarts;
}

class UEnemySkinAfflictionEffect : UAfflictionEffect
{
    TArray<UMaterialInterface*> NewMaterials;
}

class UEnemyScaleAfflictionEffect : UAfflictionEffect
{
    float Scale;
    bool RevertOnEndEffect;
}

class UHeroEnemyAfflictionEffect : UAfflictionEffect
{
    FGameplayTag TagToAdd;
}

class AFSDPawn : APawn
{
    FFSDPawnOnFrozenEvent OnFrozenEvent;
    void BoolDelegate(bool boolValue);
    UStatusEffectsComponent* StatusEffects;
    UEnemyTemperatureComponent* Temperature;
    FGameplayTagContainer GameplayTags;
    UEnemyDescriptor* SpawnedFromDescriptor;
    bool IsFrozen;
    bool CanFlee;
    bool FleeInsteadOfBackingOff;
    bool IsFleeing;
    UPawnStatsComponent* PawnStatsInstance;

    void UnFreeze();
    void StopFleeing();
    void StartFleeing(const FVector& fromLocation);
    void SetAlerted(bool isAlerted);
    void Receive_Alerted();
    void OnUnFrozen();
    void OnStoppedFleeing();
    void OnStartedFleeing();
    void OnRep_IsFrozen();
    void OnFrozen(AActor* Source);
    void OnFirstHostileDamageTaken();
    void OnEnemyScaled(float newScale);
    void OnArmorShattered(const FVector& Location);
    void OnAlerted();
    void MakeRagdollMesh(USkeletalMeshComponent* Mesh);
    void MakeElite();
    bool GetIsAlerted();
    UHealthComponentBase* GetHealthComponent();
    AFSDAIController* GetFSDAIController();
    EPawnAttitude GetAttitude();
    void Freeze(AActor* Source);
    void ExplodePawn();
    void BackOffFromLocation(const FVector& fromLocation);
}

class ADeepPathfinderCharacter : UFSDPawn
{
    UDeepPathfinderMovement* PathfinderMovement;
    USkeletalMeshComponent* Mesh;
    FName CenterMassSocketName;
    UDeepPatherFinderCharacterAfflictionComponent* Affliction;
    float AnimationOffset;
    bool CanPlayerStandOn;
    bool UseDormancy;
    float StaggerDurationMultiplier;
    float StaggerImunityWindow;
    bool StaggerPauseLogic;
    bool IsHidden;
    bool IsStaggered;
    bool FrozenPauseLogic;
    float AttackerRadius;
    TArray<UMaterialInterface*> CachedMaterials;
    float AllowedInFormationChance;

    bool TryJoinFormation();
    void SetHidden(bool shouldHide);
    void OnPausedMovementElapsed();
    void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
    void LeaveFormation();
}

class AEnemyDeepPathfinderCharacter : UDeepPathfinderCharacter
{
    UEnemyHealthComponent* HealthComponent;
    FQueuedMontage QueuedMontage;

    void OnRep_QueuedMontage();
}

class AAFlyingBug : UEnemyDeepPathfinderCharacter
{
    UEnemyComponent* EnemyComponent;
    UPawnStatsComponent* PawnStats;
    UOutlineComponent* outline;
    UPawnSensingComponent* Senses;
    UPawnAlertComponent* Alert;
    USphereComponent* ExplosionSphere;
    UAudioComponent* WingSoundComponent;
    UFrozenPawnImpactComponent* FrozenImpact;
    TArray<UAnimSequenceBase*> HitReactions;
    FVector_NetQuantize RagdollImpact;
    AActor* RotateTarget;
    UPhysicsAsset* PhysicalAssetAfterDeath;
    USoundBase* ChatterSound;
    float FirstHitReactBlendIn;
    float OverrideHitReactBlendIn;
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
    void SetRotateTarget(AActor* aTarget);
    void SetExternallyControlled(bool isExternallyControlled);
    void SetAttackStance(bool isAttackStance);
    void Ragdoll(bool applyForce, const FVector& force);
    void PlayVoice();
    void OnStartFalling();
    void OnRep_RagdollImpact();
    void OnRep_AttackStance();
    void OnRagdoll();
    void OnFreezeImpact();
    void OnDamaged(float Amount);
    void OnBugDeath(UHealthComponentBase* Health);
    float GetMidZpointFromCielingAndFloor(float& distanceFromCieling, float& distanceFromFloor);
    bool GetIsInAttackStance();
    void AlertNearbyEnemies();
}

class UEnemyAnimInstance : UAnimInstance
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
    UHealthComponentBase* HealthComponent;

    bool IsSlotPlayingAnyAnimation(FName SlotNodeName);
    USkeletalMeshComponent* GetSkeletalMesh();
}

class USimpleMovingEnemyAnimInstance : UEnemyAnimInstance
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

    void SetMeshScale(float newScale);
}

class UFlyingBugAnimInstance : USimpleMovingEnemyAnimInstance
{
    bool IsInAttackMode;
    bool IsStaggered;
}

class UAIFunctionLibrary : UBlueprintFunctionLibrary
{

    void SetAICanSense(bool canSense);
    int32 MakeEnemiesFleeFromArea(UObject* WorldContextObject, const FVector& Center, float Radius, int32 maxEnemiesAffected);
    void MakeEnemiesBackOutOfArea(UObject* WorldContextObject, const FVector& Center, float Radius);
    bool IsEnemyAlertet(APawn* enemy);
    APlayerCharacter* GetPlayerTarget(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
    bool GetAttackableTargetsInRange(AActor* From, TArray<UAttackerPositioningComponent*>& outArray, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
    UAttackerPositioningComponent* GetAttackableTarget(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
    APlayerCharacter* ConsiderChangingTarget(UPlayerCharacter* CurrentTarget, AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool CurrentTargetMustBeAlive, bool IsFlying);
    void AlertEnemy(APawn* enemy);
    void AlertEnemiesInRange(UObject* WorldContextObject, FVector Origin, float range, APawn* alerter);
}

class UAIPlayerControlComponent : UActorComponent
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
    UAnimMontage* GetOnMontageAI;
    UAnimMontage* GetOnMontagePlayer;
    UAnimMontage* LetGoMontageAI;
    UAnimMontage* LetGoMontagePlayer;
    UDialogDataAsset* GetOnShout;
    UDialogDataAsset* LetGoShout;
    UControlEnemyUsable* Usable;
}

class UEnemyGroupDescriptor : UDataAsset
{
    TArray<FEnemyGroupDescriptorItem> Enemies;
    FRandInterval Diversity;
}

class UAmberEventEnemyPool : UEnemyGroupDescriptor
{
    float MaxTimeBetweenSpawn;
    float MinTimeBetweenSpawn;
    int32 MaxEnemyCap;
    int32 AmbersNeededdToComplete;
    int32 AmbersNeededOnePlayer;
}

class AGameEvent : AActor
{
    FGameEventEventTriggeredDelegate EventTriggeredDelegate;
    void DelegateEvent();
    FGameEventEventFinishedDelegate EventFinishedDelegate;
    void DelegateEvent();
    FGameEventStageCompleteDelegate StageCompleteDelegate;
    void StageCompleteSig(int32 stageCompleted);
    FGameEventProgressChangedDelegate ProgressChangedDelegate;
    void ProgressChangedSig(float CurrentProgress);
    FGameEventTimeProgressChanged TimeProgressChanged;
    void ProgressChangedSig(float CurrentProgress);
    FGameEventObjectivesPerStageChanged ObjectivesPerStageChanged;
    void StageCompleteSig(int32 stageCompleted);
    TArray<AEventStarterButton*> StarterObjects;
    bool bGameEventSetup;
    FText EventName;
    FText ObjectiveText;
    FName AnalyticsName;
    FGameplayTagContainer GameplayTags;
    UChildActorComponent* StartEventObject;
    UDialogDataAsset* EventTriggeredShout;
    UDialogDataAsset* EventFinishedShout;
    UDialogDataAsset* EventFailedShout;
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
    bool SkipEventStarters;
    TArray<AActor*> EventParticipants;

    void TrySetupGameEvent();
    void TriggerEvent();
    void StartShout();
    void StageObjectiveCompleted();
    ARessuplyPod* SpawnEventPod(TSubclassOf<ARessuplyPod> podClass, const FVector& aSpawnLocation, int32 Delay);
    AActor* SpawnEventActor(TSubclassOf<AActor> eventActorClass, const FTransform& aSpawnLocation);
    void SetStageProgress(float Progress);
    void SetObjectivesPerStage(int32 objectivesPerStage);
    void RemoveParticipant(AActor* participant);
    void OnStarterObjectUsed(AEventStarterButton* eventStarter);
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
    bool IsEventActive();
    float GetStageProgress();
    bool GetShowTimeOnHUD();
    bool GetShowScoreOnHUD();
    FText GetObjectiveText();
    int32 GetObjectivesPerStage();
    FText GetEventName();
    bool GetEventFailed();
    float GetDelayUITime();
    void EndShout();
    FTransform DebreePositionPoint(AProceduralSetup* setup, const FVector& fromLocation, float MinDistance, float desiredDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, float maxPathLength);
    void BootUpEvent();
    void AddStageProgress(float progressToAdd);
}

class AAmberEvent : AGameEvent
{
    UDamageComponent* EndExplosionDamage;
    TArray<UAmberEventEnemyPool*> EnemyPools;
    TArray<AFSDPawn*> spawnedEnemies;
    TWeakObjectPtr<UAmberEventEnemyPool> CurrentPool;
    float InitialDelayBeforeSpawn;
    float MaxSpawnRange;

    void OnSpawnedDeath(UHealthComponentBase* spawnedHealthComponent);
    void OnEnemySpawned(APawn* Pawn);
}

class UAmmoCountWidget : UUserWidget
{
    APlayerCharacter* Character;
    AItem* Item;
    UItemAggregator* Aggregator;

    void OnVisibleChanged(bool Visible, bool showClipCount);
    void OnTotalVisibleChanged(bool Visible);
    void OnTotalChanged(int32 Total);
    void OnItemTotalChanged(int32 Value);
    void OnItemEquipped(AItem* NewItem);
    void OnItemAmountChanged(int32 Value);
    void OnAmountChanged(int32 count);
    void DoItemEquipped();
}

class AItem : AActor
{
    FVector FPCameraOffset;
    FAudioWithCooldown AudioFriendlyFire;
    bool EnableDangerousSaveGameIDEditing;
    FGuid SaveGameID;
    UItemID* ItemID;
    APlayerCharacter* Character;
    UUpgradableItemComponent* UpgradableItem;
    TSubclassOf<UCameraShake> CameraShake;
    bool CameraShakeOnStartUsing;
    bool CameraShakeOnEquip;
    UCurveFloat* HeatCurve;
    float ManualHeatPerUse;
    float CooldownRate;
    float ManualCooldownDelay;
    float UnjamDuration;
    float CurrentTemperature;
    USoundBase* AudioTemperature;
    float AudioTemperatureFadeout;
    FName TemperatureFloatParam;
    UAudioComponent* TemperatureAudioComponent;
    bool Overheated;
    UDialogDataAsset* ShoutOverheated;
    bool bAimAssistEnabled;
    float MovementRateWhileUsing;
    bool CanPlayLedgeClimbWhileUsing;
    bool CanInspectItem;
    bool CanSprintWithItem;
    TSubclassOf<UItemsBarIcon> CustomIconWidget;
    float AdvancedVibrationSendLevel;
    bool IsEquipped;
    bool IsUsing;

    void UpdateSkin();
    UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, uint8 LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    UAudioComponent* SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    UAudioComponent* SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
    void Server_StartUsing(bool IsUsing);
    void Resupply(float percentage);
    void RemovedFromInventory(UCharacter* oldCharacter);
    void RecieveUnequipped();
    void RecieveStopUsing();
    void RecieveStartUsing();
    void RecieveEquipped();
    void RecieveCycledItem();
    void Recieve_UpdateMeshses(bool IsFirstPerson);
    void ReceiveResupply(float percentage);
    void Receive_Overheated();
    UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
    UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
    void OnTemperatureChanged(float Temperature, bool Overheated);
    void OnSkinChanged(USkinEffect* Skin);
    void OnRep_IsUsing(bool OldValue);
    void OnOwnerDestroyed(AActor* owningActor);
    bool IsLocallyControlled();
    bool IsFirstPerson();
    TSubclassOf<AActor> GetWeaponViewClass();
    FItemLoadoutAnimations GetLoadoutAnimations();
    FText GetItemName();
    UTexture2D* GetItemIconLine();
    UTexture2D* GetItemIconBG();
    AItem* GetItemDefaultObject(TSubclassOf<AItem> itemClass);
    FText GetItemCategory();
    USceneComponent* GetHeatingAudioSceneComponent();
    UItemCharacterAnimationSet* GetCharacterAnimationSet();
    FString GetAnalyticsItemName();
    FString GetAnalyticsItemCategory();
    void AddedToInventory(UPlayerCharacter* ItemOwner);
}

class AAnimatedItem : AItem
{
    USkinnableComponent* Skinnable;
    UPlayerAnimInstance* FPAnimInstance;
    UPlayerAnimInstance* TPAnimInstance;
    USkeletalMeshComponent* FPMesh;
    USkeletalMeshComponent* TPMesh;
    UAnimMontage* FP_EquipAnimation;
    UAnimMontage* TP_EquipAnimation;
    float EquipDuration;
    UItemCharacterAnimationSet* CharacterAnimationSet;

    void OnReceiveEquippedFinished();
    FTransform GetMuzzle();
    USkeletalMeshComponent* GetItemMesh();
}

class AAmmoDrivenWeapon : UAnimatedItem
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
    UWeaponFireComponent* WeaponFire;
    UAmmoDriveWeaponAggregator* Aggregator;
    bool LoopFireAnimation;
    float LoopFireAnimationBlendoutTime;
    UAnimMontage* FP_FireAnimation;
    UAnimMontage* TP_FireAnimation;
    UAnimMontage* FP_ReloadAnimation;
    FItemAnimationItem OverheatAnimation;
    TArray<FItemAnimationItem> GunslingAnimations;
    UAnimMontage* TP_ReloadAnimation;
    UAnimMontage* WPN_Fire;
    UAnimMontage* WPN_FireLastBullet;
    UAnimMontage* WPN_Reload;
    UAnimMontage* WPN_Reload_TP;
    UFXSystemAsset* MuzzleParticles;
    UFXSystemAsset* TPMuzzleParticles;
    bool UseTriggeredMuzzleParticles;
    FTracerData Tracer;
    UParticleSystem* TracerParticles;
    UParticleSystem* TrailParticles;
    float MinTracerDistance;
    float TracerSpeed;
    float TracerOffset;
    UFXSystemAsset* CasingParticles;
    bool UseTriggeredCasingParticleSystem;
    ULightComponent* MuzzleFlashLight;
    FRuntimeFloatCurve MuzzleFlashLightCurve;
    USoundCue* FireSound;
    USoundCue* RicochetSound;
    UFXSystemAsset* RicochetParticle;
    float FireSoundDelayToTail;
    USoundCue* FireSoundTail;
    bool IsFireSoundTail2D;
    UForceFeedbackEffect* FireForceFeedbackEffect;
    TWeakObjectPtr<UAudioComponent> FireSoundInstance;
    float FireSoundFadeDuration;
    USoundCue* ReloadSound;
    int32 BulletsRemainingForNearEmptySound;
    USoundCue* NearEmptySound;
    USoundCue* WeaponEmptySound;
    UDialogDataAsset* ShoutShotFired;
    UDialogDataAsset* ShoutOutOfAmmo;
    UDialogDataAsset* ShoutReloading;
    int32 MaxAmmo;
    int32 ClipSize;
    int32 ShotCost;
    float RateOfFire;
    int32 BurstCount;
    float BurstCycleTime;
    float ReloadDuration;
    int32 AmmoCount;
    int32 ClipCount;
    float AutoReloadDuration;
    USoundCue* AutoReloadCompleteCue;
    FAmmoDrivenWeaponOnItemAutoReloaded OnItemAutoReloaded;
    void AmmoDrivenGenericEvent();
    float SupplyStatusWeight;
    float CycleTimeLeft;
    float ReloadTimeLeft;
    bool AutomaticReload;
    bool CanReload;
    FRecoilSettings RecoilSettings;
    bool HasAutomaticFire;
    bool IsFiring;
    EAmmoWeaponState WeaponState;

    void Upgraded_Blueprint_Implementation(const TArray<UItemUpgrade*>& upgrades);
    void Server_StopReload();
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
    void CustomEvent1(const UItemUpgrade* Event);
    void Client_RefillAmmo(float percentage);
    void All_StopReload();
    void All_StartReload();
    void All_PlayBurstFire(uint8 shotCount);
    void All_Gunsling(uint8 Index);
}

class UItemAggregator : UActorComponent
{
    FText CounterText;

    void UnbindAllEvents();
}

class UClipBasedItemAggregator : UItemAggregator
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

    void ReloadStarted();
    void ReloadComplete();
    int32 GetTotalAmount();
    int32 GetClipAmount();
}

class UAmmoDriveWeaponAggregator : UClipBasedItemAggregator
{
    AAmmoDrivenWeapon* Weapon;
}

class UAmmoDrivenWeaponAnimInstance : UAnimInstance
{
    AAmmoDrivenWeapon* Weapon;
    bool IsFiring;
    float ClipFullPercentage;
    bool Overheated;

    bool IsFull();
    bool isEmpty();
}

class UPlatformGunAnimInstance : UAmmoDrivenWeaponAnimInstance
{
    float SpinRate;
    float NormalSpinRate;
    float LerpSpeed;
    float FiredSpinRate;

    void WeaponFired();
}

class AAnchorTurner : AActor
{
    USceneComponent* Root;
    USkeletalMeshComponent* Mesh;
    USphereComponent* PushCollider1;
    USphereComponent* PushCollider2;
    USphereComponent* PushCollider3;
    USphereComponent* PushCollider4;
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
    void OnLeftPushpoint(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnEnteredPushpoint(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void GeneratorSpunUp();
}

class UAnchorTurnerAnimInstance : UAnimInstance
{
    float ModuleRotation;
    float Percent;
    float TurnSpeed;
    bool IsFinished;
}

class UBaseArmorDamageComponent : UActorComponent
{
    bool ArmorDamageEnabled;
    FBaseArmorDamageComponentOnArmorShatteredEvent OnArmorShatteredEvent;
    void ArmorShatterDelegate(const FVector& Location);
    TArray<UParticleSystem*> ArmorBreakParticles;
    TArray<UParticleSystem*> ArmorDisolveParticles;
    TArray<UFSDPhysicalMaterial*> ArmorPhysMats;
    USkeletalMeshComponent* Mesh;
}

class USimpleArmorDamageComponent : UBaseArmorDamageComponent
{
    FSimpleArmorDamageComponentOnRadialArmorPartsDestroyedEvent OnRadialArmorPartsDestroyedEvent;
    void SimpleArmorRadialDamagedDelegate(const TArray<uint8>& destroyedParts);
    float ArmorStrength;
    TMap<FName, FDestructableBodypartItem> PhysBoneToArmor;
    uint32 ArmorDamageIndexMask;

    void Server_SetArmorIndexDestroyed(int32 Index, bool Disolved);
    void OnRep_ArmorDamageIndexMask(uint32 OldIndexMask);
}

class UArmorHealthDamageComponent : UBaseArmorDamageComponent
{
    FArmorHealthDamageComponentOnArmorPartDestroyedEvent OnArmorPartDestroyedEvent;
    void AmorPartDestroyedDelegate(FName Name);
    FArmorHealthDamageComponentOnArmorPartDamagedEvent OnArmorPartDamagedEvent;
    void ArmorPartDamagedDelegate(FName BoneName, float Damage);
    TMap<FName, FArmorHealthItem> PhysBoneToArmor;
    uint32 ArmorDamageIndex;
    bool AffectedByAmorBreak;

    bool SetHealthOnBodypartItem(FName BoneName, float newHealth);
    void SetHealthOnAllItems(float newHealth);
    void RegrowAllArmor(float baseHealth);
    void OnRep_ArmorDamageIndex(uint32 OldValue);
}

class UCompositeArmorComponent : UBaseArmorDamageComponent
{
    FCompositeArmorComponentOnArmorPartDestroyedEvent OnArmorPartDestroyedEvent;
    void ArmorPrimitiveDestroyed(UPrimitiveComponent* collider);
    FCompositeArmorComponentOnArmorPartDamagedEvent OnArmorPartDamagedEvent;
    void ArmorPrimitiveDamagedDelegate(UPrimitiveComponent* collider, float Damage);
    UFXSystemAsset* BreakParticle;
    bool AffectedByAmorBreak;
    TArray<FCompositeArmorItem> ArmorItems;
    uint32 ArmorDamageIndex;

    void OnRep_ArmorDamageIndex(uint32 OldValue);
    void AddArmorPart(UPrimitiveComponent* Primitive, float Health);
}

class AArmorPiece : AActor
{
    UUpgradableGearComponent* Upgradable;
    TMap<UPawnStat*, float> StatModifiers;
    TSubclassOf<ALoadoutItemProxy> LoadoutProxy;
    UItemID* ItemID;
    TSubclassOf<AActor> WeaponPreviewClass;

    TSubclassOf<AActor> GetWeaponViewClass();
    AArmorPiece* GetArmorPieceDefaultObject(TSubclassOf<AArmorPiece> armorPieceClass);
}

class AAsyncLevelPersistanceActor : AActor
{
    TArray<UObject*> References;
}

class UAsyncManager : UGameInstanceSubsystem
{
    TArray<UObject*> PermanentReferences;

    void ReleaseAllHandles();
    void AsyncLoadSoftObjects(const TArray<SoftObjectProperty>& Items, EAsyncPersistence persistence, const AsyncLoadCompleteDelegate__DelegateSignature& OnLoadComplete, EAsyncLoadPriority Priority);
    void AsyncLoadSoftObject(const SoftObjectProperty Item, EAsyncPersistence persistence, const AsyncLoadCompleteDelegate__DelegateSignature& OnLoadComplete, EAsyncLoadPriority Priority);
    void AsyncLoadSoftClass(const SoftClassProperty Item, EAsyncPersistence persistence, const AsyncLoadCompleteDelegate__DelegateSignature& OnLoadComplete, EAsyncLoadPriority Priority);
    void AsyncLoadAssets(const TArray<FSoftObjectPath>& Items, EAsyncPersistence persistence, const AsyncLoadCompleteDelegate__DelegateSignature& OnLoadComplete, EAsyncLoadPriority Priority);
    void AsyncLoadAsset(const FSoftObjectPath& Item, EAsyncPersistence persistence, const AsyncLoadCompleteDelegate__DelegateSignature& OnLoadComplete, EAsyncLoadPriority Priority);
}

class UAttackBaseComponent : UActorComponent
{
    FName AttackName;
    float MaxSurfaceAngle;
    FFloatInterval range;
    float MinRange;
    float MaxRange;

    UAttackBaseComponent* ReplaceAttackComponent(UAttackBaseComponent* componentToReplace, TSubclassOf<UAttackBaseComponent> newComponentClass);
    void ReceiveCompleteAttack();
    void ReceiveAttackTarget(AActor* Target);
    void ReceiveAbortAttack();
    void CompleteAttack(bool success);
    void AttackTarget(AActor* Target);
    void AbortAttack();
}

class UAttackEffect : UObject
{
}

class UAttackCooldownComponent : UActorComponent
{
    TArray<FAttackCooldown> AttackCooldowns;

    void SetCooldown(const FName& AttackName, float cooldownSeconds);
    bool IsAttackOffCooldown(const FName& AttackName);
    bool IsAnyAttackOffCooldown();
    void AttackUsed(const FName& Name);
}

class UAttackerManagerComponent : UActorComponent
{
    TArray<UAttackerPositioningComponent*> Components;
}

class UAttackerPositioningComponent : UActorComponent
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

    void UnregisterAttacker(AActor* Attacker, bool IsFlying);
    void RegisterAttacker(AActor* Attacker, bool IsFlying);
    void OnFlyingAttackerDeath(UHealthComponentBase* HealthComponent);
    void OnAttackerDeath(UHealthComponentBase* HealthComponent);
    FVector GetFlyingAttackerPosition(AActor* Attacker, float AttackerRadius);
    FVector GetAttackerPosition(AActor* Attacker, float AttackerRadius);
}

class UPlayerAttackPositionComponent : UAttackerPositioningComponent
{
    float OnZiplineFlyingModifier;
    float OnZiplineWalkingModifier;
}

class UObjectAttackerPositioning : UAttackerPositioningComponent
{
    UHealthComponentBase* Health;
}

class UCustomObjectAttackerPositioning : UAttackerPositioningComponent
{
    UHealthComponentBase* Health;
    TArray<FVector> AttackerPositions;
}

class UEnemyAttackerPositioningComponent : UAttackerPositioningComponent
{
}

class UEscortMuleAttackerPositioning : UAttackerPositioningComponent
{
    UHealthComponentBase* Health;
    TArray<FVector> AttackerPositions;

    void SetNewMaxAttackers(int32 newMaxAttackers);
    void SetCostModifier(float newModifier);
}

class UAttackingPointInterface : UInterface
{
}

class UAudioFunctionLibrary : UBlueprintFunctionLibrary
{

    float SetSoundClassVolume(USoundClass* SoundClass, float Volume);
    void PushTimedSoundMix(UObject* contextObject, USoundMix* mix, float Duration);
    float GetSoundClassVolume(USoundClass* SoundClass);
}

class USoundClassWidget : UUserWidget
{
}

class AAutoCannon : UAmmoDrivenWeapon
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
    TSubclassOf<UStatusEffect> StatusAtFullROF;
    UAnimMontage* WPN_Fire_2;
    float CurrentFireTime;

    void Server_SetStatusActive(bool IsActive);
}

class UAutoCannonAnimInstance : UAnimInstance
{
}

class UAutoCarverComponent : UStaticMeshComponent
{
    UTerrainMaterialBase* TerrainMaterial;
    float Frequency;
    float ExpensiveNoise;
    float MinDistanceMoved;
    ECarveFilterType Filter;
    FAutoCarverComponentOnCarveDoneEvent OnCarveDoneEvent;
    void CarveDoneDelegate();

    void ForceCarve();
}

class USTLMeshCarverComponent : UPrimitiveComponent
{
    UTerrainMaterialBase* TerrainMaterial;
    USTLMeshCarver* MeshCarver;
    ECarveFilterType Filter;
    bool PreviewEnabled;
}

class UMeshCarverComponent : UStaticMeshComponent
{
    UTerrainMaterialBase* TerrainMaterial;
    ECarveFilterType Filter;
    float ExpensiveNoise;
    CarveOptionsCellSize CarverSize;

    void Carve();
}

class ULevelGenerationCarverComponent : UPrimitiveComponent
{
    USTLMeshCarver* MeshCarver;
    UStaticMesh* ConvexCarver;
    UStaticMeshCarver* StaticMeshCarver;
    UTerrainMaterialBase* TerrainMaterial;
    ECarveFilterType Filter;
    float ConvexExpensiveNoise;
    CarveOptionsCellSize CarveCellSize;
    bool PreviewEnabled;
    bool CarvingDisabled;
    bool SelfActivate;
}

class ARandomizedInstantMeshCarver : AActor
{
    TArray<UStaticMesh*> CarvingMeshes;
    TArray<USTLMeshCarver*> STLCarvingMeshes;
    TArray<UStaticMeshCarver*> StaticMeshCarvers;
    FRandRange RandomScale;
    UTerrainMaterialBase* TerrainMaterial;
    ECarveFilterType Filter;
}

class ULevelGenerationCarverComponent2 : UPrimitiveComponent
{
    TSubclassOf<ACSGBuilder> Carver;
    bool CarvingDisabled;
    int32 PreviewSeed;
    FBakeSettings CarverSettings;
    bool SelfActivate;
    UCSGPreviewComponent* PreviewComponent;
}

class UAvoidCeilingComponent : UActorComponent
{
    float MaxDuckDistance;
    float TraceVerticalStart;
    float MinVerticalSpace;
    float DuckSpeed;
    USceneComponent* ComponentToMove;
    bool IsDuckingEnabled;
}

class UBall : UActorComponent
{
}

class UWindowWidget : UUserWidget
{
    FWindowWidgetOnWindowClosed OnWindowClosed;
    void WindowDelegate(UWindowWidget* Window);
    bool bHandleCloseCommand;
    bool bResolutionDownscaleWhenOpen;

    void WindowDelegate__DelegateSignature(UWindowWidget* Window);
    void ReceiveSelectPreviousCommand();
    void ReceiveSelectNextCommand();
    void ReceiveSelectCharacterCommand();
    void ReceiveOkCommand();
    void ReceiveCloseCommand();
    void OnShown();
    void OnNewTopWindow();
    void OnClosed();
    void ConsumeCommand();
    void CloseThisWindow();
}

class UBarMenuWidget : UWindowWidget
{
    TWeakObjectPtr<ASpaceRigBar> SpaceRigBar;
}

class ABarrierProjectile : AActor
{
}

class UWeaponFireComponent : UActorComponent
{
    FWeaponFireComponentOnWeaponFired OnWeaponFired;
    void WeaponFiredDelegate(const FVector& Location);
    FWeaponFireComponentOnWeaponFireEnded OnWeaponFireEnded;
    void WeaponFireEndedDelegate();
    FWeaponFireComponentOnRicochetEvent OnRicochetEvent;
    void WeaponRicochetDelegate(const FVector& Origin, const FVector& Location, const FVector& Normal);
    TScriptInterface<IWeaponFireOwner> Weapon;

    void StopFire();
    void Server_SetShotPower(float shotPower);
    void Fire(const FVector& Origin, const FVector_NetQuantizeNormal& Direction, bool playFireFX);
}

class UBasicWeaponFireComponent : UWeaponFireComponent
{

    void Server_FireWeapon();
    void Server_EndFire();
    void All_WeaponFired();
}

class ABeltDrivenWeapon : UAmmoDrivenWeapon
{
    UAudioComponent* BarrelAudio;
    USoundCue* BarrelSound;
    float BarrelFadeIn;
    float BarrelFadeOut;
    UCurveFloat* BarrelPitchCurve;
    float BarrelSpinUpTime;
    float BarrelSpinDownTime;
    float CurrentSpinRate;
    bool Simulate_SpinBarrel;

    void Server_StopBarrel();
    void Server_StartBarrel();
}

class AGatlingGun : UBeltDrivenWeapon
{
    bool BarrelProximityDamageEnabled;
    float BarrelProximityDamageDistance;
    float BarrelProximityDamageRadius;
    float BarrelProximityDamageLength;
    float TimeBetweenProximityDamageTicks;
    float DamageMultiplierAtMaxStabilization;
    UFXSystemAsset* HotShellsTracerParticles;
    float HeatRemovedOnKill;
    bool CriticalOverheatEnabled;
    bool HotShellsOn;
    float HotShellsTemperatureRequired;
    UDamageComponent* DamageComponent;
    UDamageComponent* BarrelProximityDamageComponent;

    void Server_SetHotShellsOn(bool hotShellsIsOn);
    void OnRep_HotShellsTracerOn();
    void OnGatlingTemperatureChanged(float Temperature, bool isOverheated);
    void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
    void Client_RemoveHeat();
}

class UBeltDrivenAnimInstance : UAmmoDrivenWeaponAnimInstance
{
    float BarrelSpinRate;
    float CurrentBarrelSpinRate;
    FVector ExternalForce;
    float ExternalForceScale;
    FName ExternalForceBoneName;
}

class UBiome : UDataAsset
{
    FText BiomeName;
    FText BiomeShortName;
    FText BiomeDescription;
    FColor BiomeColor;
    int32 BiomeIndex;
    FString BiomeAnalyticsIndex;
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
    TArray<UDebrisSet*> Debris;
    TSoftClassPtr<ADebrisDataActor> DebrisActor;
    TSoftClassPtr<AActor> PostProcessActorClass;
    UTerrainMaterial* RockMaterial;
    UTerrainMaterial* DirtMaterial;
    UTerrainMaterial* BurnedMaterialOverride;
    TArray<UMaterialInstance*> FlavorMaterials;
    TArray<FBiomeNoiseItem> RoomNoises;
    UMissionStat* MissionCompleted;
    UFloodFillSettings* CeilingNoise;
    UDetailNoise* CeilingDetailNoise;
    UFloodFillSettings* WallNoise;
    UDetailNoise* WallDetailNoise;
    UFloodFillSettings* FloorNoise;
    UDetailNoise* FloorDetailNoise;
    UFloodFillSettings* PillarNoise;
    UDetailNoise* PillarDetailNoise;
    UPillarSettings* PillarSettings;
    TArray<UTunnelSetting*> TunnelSettings;
    UFloodFillSettings* TunnelCeilingNoise;
    UFloodFillSettings* TunnelWallNoise;
    UFloodFillSettings* TunnelFloorNoise;
    TArray<FResourceSpawner> Resources;
    TArray<FBiomeEnemyEntry> Enemies;
    TArray<UEnemyDescriptor*> BannedEnemies;
    TArray<UEnemyDescriptor*> StationaryEnemies;
    TArray<UCritterDescriptor*> Critters;
    TSoftObjectPtr<USoundCue> AmbientSounds;
    bool Use3DAmbient;
    FReverbSettings ReverbSettings;
    float SmallCaveReverbVolume;
    UReverbEffect* SmallCaveReverb;
    float MediumCaveReverbVolume;
    UReverbEffect* MediumCaveReverb;
    float LargeCaveReverbVolume;
    UReverbEffect* LargeCaveReverb;
    USoundCue* TunnelAmbience;
    TSoftObjectPtr<ULevelSequence> BiomeLoaderLevelSequence;
    FString BiomeLoaderLevelName;
    TArray<FText> Quotes;
    float PlanetZoneSelectionWeight;

    UTerrainMaterial* GetRockMaterial();
    TSoftClassPtr<AActor> GetPostProcessActorClass_Soft();
    UTerrainMaterial* GetDirtMaterial();
    TSoftClassPtr<ADebrisDataActor> GetDebrisActorSoftClass();
    UTexture2D* GetBiomeWorldMap();
    UTexture2D* GetBiomePicture();
    FText GetBiomeName();
    UTexture2D* GetBiomeMissionBar();
    TSubclassOf<UUserWidget> GetBiomeMapWidget();
    TArray<FSoftObjectPath> GetBiomeMapAssetList();
    UTexture2D* GetBiomeLargeImage();
    int32 GetBiomeIndex();
    UTexture2D* GetBiomeIcon();
    FString GetBiomeAnalyticsIndex();
    UParticleSystem* GetAtmosphericParticles();
    USoundCue* GetAmbientSounds();
}

class UBobbingComponent : USceneComponent
{
    FBobbingComponentOnMovedIntoSomethingEvent OnMovedIntoSomethingEvent;
    void MovedIntoSomething(bool Up);
    AActor* OwnerActor;
    bool DoOrientationChecks;
    float BobSpeed;
    float BobSize;
    float OrentationChecksPerSecond;

    void SetOwner(AActor* AActor);
}

class ABoltActionWeapon : UAmmoDrivenWeapon
{
    FBoltActionWeaponFullyFocusedEvent FullyFocusedEvent;
    void BoltActionWeaponFullyFocusedDelegate();
    FBoltActionWeaponFocusLostEvent FocusLostEvent;
    void BoltActionWeaponFullyFocusedDelegate();
    UDamageComponent* DamageComponent;
    UHitscanBaseComponent* HitscanComponent;
    TSubclassOf<UStatusEffect> FocusedHitSTE;
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
    USoundCue* ZoomedInAudio;
    UParticleSystem* ChargedShotTrailParticles;
    FTracerData ChargedShotTracer;
    USoundCue* ButtonDownFireSound;
    USoundCue* ChargedShotFireSound;
    float ChargedFoVChange;
    float ChargedFoVFadeSpeed;
    float MinCharge;
    float SlowMovementAtCharge;
    float FullChargeDamageBonus;
    float AimedShotStaggerChance;
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
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial);
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    void OnShotPowerSet();
    void OnMovementSlowed(bool isSlowed);
    void Client_OnTargetKilled(bool BoostReloadTime);
}

class UBoltActionWeaponAnimInstance : UAnimInstance
{
}

class ABomber : UAFlyingBug
{
    UAudioComponent* GooSoundComponent;
    UParticleSystemComponent* AcidEmitterLeft;
    UParticleSystemComponent* AcidEmitterRight;
    TSubclassOf<AProjectile> AcidProjectile;
    UParticleSystem* deathParticles;
    USoundBase* deathSound;
    USoundBase* DeathPanicSound;
    UParticleSystem* BleedParticles;
    USoundBase* BladderDestroyedNoise;
    TWeakObjectPtr<UParticleSystemComponent> BleedParticlesComponent;
    TWeakObjectPtr<UAudioComponent> PanicAudioComponent;
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

    void StopSpinAndDie();
    void SetDropAcid(bool dropAcid);
    void OnStartDeathPanic();
    void OnRep_DropAcid();
    void OnRep_Death();
    void OnRagdollHitGround(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnBladderDamage(float Amount);
    void OnArmorDestroyed(FName Name);
    void HideMesh();
    bool GetDropAcid();
    bool AreBladdersDestroyed();
}

class UBomberAnimInstance : UFlyingBugAnimInstance
{
    bool IsBombing;
    bool IsSpiraling;
}

class UBoolUserSettingAsset : UDataAsset
{
    FText SettingDisplayTitle;
    FName SettingID;
    bool SettingDefaultValue;

    void SetValue(bool InValue);
    bool GetValue();
}

class UBoscoAbillity : UDataAsset
{
    FName AbillityName;
    UAnimSequenceBase* AbillityAnimation;
    USoundBase* VoiceOnUse;
    EBoscoAbillityTargetPreference TargetType;
    float CoolDown;
    float WindUp;
    float Duration;
    float range;
    float RechargeTime;
    int32 MaxCharges;
    bool TargetActorIfValid;
    bool RotateTowardsTarget;
}

class UBoscoSpawnActorAbillity : UBoscoAbillity
{
    TSubclassOf<AActor> SpawnedActorClass;
}

class UBoscoProjectileAbillity : UBoscoAbillity
{
    TSubclassOf<AProjectile> projectileClass;
}

class ABosco : UDeepPathfinderCharacter
{
    UHealthComponent* HealthComponent;
    UBoscoAbillityComponent* AbillityComponent;
    UDamageComponent* Damage;
    UPawnSensingComponent* Senses;
    UDroneMiningToolBase* MiningTool;
    UBobbingComponent* BobbingComponent;
    USkeletalMeshComponent* BoscoMesh;
    UHitscanComponent* DroneHitScan;
    USpotLightComponent* SpotLightComponent;
    UPointLightComponent* PointLightComponent;
    UParticleSystemComponent* LTrail;
    UParticleSystemComponent* RTrail;
    UAudioComponent* MomentumSound;
    UDialogDataAsset* DefendDrilldozerShout;
    UDialogDataAsset* DefendGenericShout;
    UDialogDataAsset* MineOrderShout;
    UDialogDataAsset* KillOrderShout;
    UDialogDataAsset* GoToOrderShout;
    UDialogDataAsset* ReviveOrderShout;
    UDialogDataAsset* PickupGemShout;
    UDialogDataAsset* ReviveThankShout;
    UDialogDataAsset* GeneralCallShout;
    UDialogDataAsset* RocketAbillityShout;
    UDialogDataAsset* CryoGrenadeAbillityShout;
    USoundBase* MineResponse;
    USoundBase* CombatResponse;
    USoundBase* LightResponse;
    USoundBase* ReviveResponse;
    USoundBase* AbillityResponse;
    USoundBase* CurrentResponse;
    float ResponseTime;
    FBoscoOnReviveused OnReviveused;
    void ReviveUsedSig(const int32 ReviveCount);
    FBoscoOnStateChanged OnStateChanged;
    void StateChangedSig(EDroneAIState aCurrentState);
    FGameplayTagContainer LosMatchTags;
    float SeeTargetTime;
    USoundBase* AbillityErrorSound;
    float INcreasedMiningArea;
    float TimeToResetMiningBoost;
    float MiningBoosMultiplier;
    TArray<UItemUpgrade*> upgrades;
    UBoscoProjectileAbillity* RocketAbillity;
    UBoscoProjectileAbillity* CryoGrenadeAbillity;
    FGuid SaveGameID;
    UItemID* ItemID;
    UUpgradableBoscoComponent* Upgradable;
    UAnimSequenceBase* SaluteAnimation;
    UAnimSequenceBase* PickupGemAnimation;
    UAnimSequenceBase* DropGemAnimation;
    TArray<UAnimSequenceBase*> HitReaction;
    float SaluteDuration;
    UDroneSkinnableComponent* Skinnable;
    TArray<FBoscoLightSetting> LightSettings;
    int32 TargetLightSetting;
    TArray<UBoscoAbillity*> CombatAbillities;
    AActor* RotateTarget;
    FVector LookAtLocation;
    USoundCue* ShootSound;
    float ShootSoundFadeout;
    USoundCue* ShootSoundTail;
    UAudioComponent* ShootSoundInstance;
    UParticleSystem* MuzzleEffect;
    UParticleSystem* TracerEffect;
    float FireRate;
    int32 MinShotsInBurst;
    int32 MaxShotsInBurst;
    float MaxRandomBurstCooldown;
    float MinRandomBurstCooldown;
    float MaxFiringAngle;
    float MaxEngagementRange;
    float MinTracerDistance;
    float TracerSpeed;
    USoundBase* ReviveSirens;
    TWeakObjectPtr<UAudioComponent> ReviveSirensComponent;
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
    ABoscoController* DroneController;
    EDroneAIState CurrentState;

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
    void OnHit(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void OnGrabbedGem();
    void MineEffects(UTerrainMaterial* aTerrainMaterial, FVector_NetQuantize aLocation, FRotator aRotation);
    UUpgradableBoscoComponent* GetUpgradeComponent();
    int32 GetReviveCharges();
    UBoscoAbillityComponent* GetPlayerAbillity();
    EDroneAIState GetCurrentState();
    bool GetCarryInterrupted();
    bool DoPickupGemAnimation();
    void All_OnSelfDestruct();
}

class UBoscoAnimInstance : UAnimInstance
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
}

class UBoscoWeaponsFoldedOutNotify : UAnimNotify
{
}

class UBoscoWeaponsFoldedInNotify : UAnimNotify
{
}

class UBoscoAbillityComponent : UActorComponent
{
    FBoscoAbillityComponentOnAbillityChargeProgress OnAbillityChargeProgress;
    void ABillityChargeProgress(float aProgress, int32 aNextIndex);
    FBoscoAbillityComponentOnAbillityChargeUsed OnAbillityChargeUsed;
    void AbillityChargeUsedSig(int32 aCurrentCharges);
    TArray<UItemUpgrade*> upgrades;
    TSubclassOf<AProjectileBase> projectileClass;
    UAnimSequenceBase* Animation;
    USoundBase* VoiceOnUse;
    TWeakObjectPtr<AActor> Target;
    TWeakObjectPtr<ABosco> AbillityOwner;

    int32 GetMaxCharges();
    int32 GetCharges();
}

class AFSDAIController : UAIController
{
    FFSDAIControllerOnMessageBehaviorTreeEvent OnMessageBehaviorTreeEvent;
    void MessageBehaviorTree(FName Message);
    FFSDAIControllerOnAlertedEvent OnAlertedEvent;
    void Delegate();
    TEnumAsByte<ECollisionChannel> LOSTraceChannel;
    TWeakObjectPtr<APlayerCharacter> TargetedPlayer;

    void SetAlerted(bool isAlerted);
    void ResumeLogic();
    void RegisterBlackboardChanges(const FName& Key);
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void PauseLogic();
    void OnAttackingChanged(bool attacking);
    bool GetIsAlerted();
}

class ABoscoController : UFSDAIController
{
    UBehaviorTree* BehaviourTree;
    float CheckOutOfTheWayInterval;
    float DistCountAsSameHit;
    FBoscoControllerOnFollowTargetChangedDelegate OnFollowTargetChangedDelegate;
    void FollowTargetChanged(AActor* FollowTarget);
    UTerrainMaterial* HearthstoneCrystalMaterial;
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
    float ReviveHealthPercentage;
    UDroneUseComponent* CurrentUse;
    ACarriableItem* TryingToPickGem;

    void ReviveTarget();
    void ResetToFollowState();
    void RegisterPlayer(UPlayerCharacter* APlayerCharacter);
    void PickupGem();
    void OnUseDone(int32 TimesUsed);
    void OnSecondaryLaserPointer(AActor* aTarget, const FVector& aLocation);
    void OnPlayerShout(UPlayerCharacter* APlayerCharacter);
    void OnPlayerSalute(UPlayerCharacter* aCharacater);
    void OnPlayerLeave(UFSDPlayerState* APlayerState);
    void OnLaserPointer(const FLaserPointerTarget& HitInfo);
    void OnJobFinished();
    void OnEscortTargetDied(UHealthComponentBase* Health);
    FVector GetPointNearPlayers();
    AActor* GetFollowTarget();
    void GenerateRelativeLocation(AActor* aTarget, float aRange, float aHeightRestriction, float aMinRange, bool aTryToStayOutOfTheWay, bool aStayBehind);
    void GemUsed(UPlayerCharacter* usedBy, EInputKeys Key);
    void ConfirmPickup();
    void CarriableDrop();
}

class USimpleBossFight : UObject
{
    FBossFight BossFight;
}

class UBossFightSubSystem : UGameInstanceSubsystem
{
    FBossFightSubSystemOnNewBossFight OnNewBossFight;
    void BossFightDelegate(const InterfaceProperty& BossFight);
    FBossFightSubSystemOnBossFightRemoved OnBossFightRemoved;
    void BossFightDelegate(const InterfaceProperty& BossFight);
    TArray<TScriptInterface<IBossFightInterface>> ActiveBossFights;

    void RegisterBossFight(InterfaceProperty BossFight);
    void DeregisterBossFight(AActor* boss);
    void BossFightDelegate__DelegateSignature(const InterfaceProperty& BossFight);
}

class UBossFightInterface : UInterface
{

    bool IsStillValid();
    TSubclassOf<UBossFightWidget> GetWidgetClass();
    AActor* GetBossActor();
}

class UBossFightWidget : UUserWidget
{
    TScriptInterface<IBossFightInterface> BossFight;
}

class UBoxFunctionLibrary : UBlueprintFunctionLibrary
{

    FBox CreateBoxAt(FVector Location, FVector Size);
    FVector ClosestPointToBox(FVector Pos, const FBox& Box);
    float BoxSize(FBox Box);
    FVector BoxExtends(FBox Box);
    FVector BoxCenter(FBox Box);
}

class UGenerationComponent : UPrimitiveComponent
{
}

class UBoxGenerationComponent : UGenerationComponent
{
    FVector Extends;
    bool IsCarver;
    float NoiseRange;
    bool Visible;
    UFloodFillSettings* Noise;
}

class AGenerationItem : AActor
{
    bool Visible;
    bool AddToLevel;
}

class ABoxGenerationItem : AGenerationItem
{
    UBoxGenerationComponent* BoxComponent;
}

class UBTDecorator_AttackInRange : UBTDecorator_BlackboardBase
{
    FName AttackName;
}

class UBTDecorator_CanSeeTarget : UBTDecorator
{
    bool UseAsync;
    float MaxRange;
    FVector EyeLocationOffset;
    FBlackboardKeySelector TargetKey;
}

class UBTDecorator_CheckObstruction : UBTDecorator
{
    float range;
    bool UseOwnerCenterMass;
    FVector EyeLocationOffset;
    FName RangedSocket;
    FBlackboardKeySelector TargetKey;
}

class UBTDecorator_CheckPlayerCount : UBTDecorator
{
    int32 playerCount;
    bool AllowLessThanCount;
}

class UBTDecorator_ConditionalGuard : UBTDecorator
{
    FBlackboardKeySelector GuardKey;
    bool InvertLogic;
}

class UBTDecorator_FormationGuard : UBTDecorator
{
}

class UBTDecorator_InRange : UBTDecorator_BlackboardBase
{
    float MinRange;
    float MaxRange;
    FAIDistanceType GeometricDistanceType;
}

class UBTDecorator_InRangeBB : UBTDecorator_BlackboardBase
{
    FBlackboardKeySelector MinRangeKey;
    FBlackboardKeySelector MaxRangeKey;
    FAIDistanceType GeometricDistanceType;
}

class UBTDecorator_InRangeEx : UBTDecorator_BlackboardBase
{
    float MinRange;
    float MaxRange;
    FAIDistanceType GeometricDistanceType;
}

class UBTDecorator_InRangeOfTarget : UBTDecorator_BlackboardBase
{
    float MinRange;
    float MaxRange;
}

class UBTDecorator_IsFacing : UBTDecorator_BlackboardBase
{
    float MaxAngle;
}

class UBTDecorator_LockRotation : UBTDecorator
{
}

class UBTDecorator_MessageAI : UBTDecorator
{
    FName ActivationMessage;
    FName DeactivationMessage;
}

class UBTDecorator_ModifySpeed : UBTDecorator
{
    float SpeedModifier;
}

class UBTDecorator_RandomChance : UBTDecorator
{
    float Chance;
}

class UBTDecorator_RandomCooldown : UBTDecorator
{
    FRandRange CoolDownTime;
    FBlackboardKeySelector CooldownTimeModifier;
}

class UBTDecorator_SetTagRandomCooldown : UBTDecorator
{
    FGameplayTag CooldownTag;
    FRandRange CooldownDuration;
    bool bAddToExistingDuration;
    bool TriggerOnActivation;
}

class UBTDecorator_TagRandomCooldown : UBTDecorator
{
    FGameplayTag CooldownTag;
    FRandRange CooldownDuration;
    bool bAddToExistingDuration;
    bool bActivatesCooldown;
}

class UBTDecorator_RandomLoop : UBTDecorator
{
    float Chance;
}

class UBTDecorator_VariableLoop : UBTDecorator
{
    FIRandRange NumLoops;
}

class UBTDecorator_SharedCooldown : UBTDecorator
{
    FRandRange CoolDownTime;
    FBlackboardKeySelector CooldownKey;
}

class UBTDecorator_SharedAttackCooldown : UBTDecorator
{
    FRandRange CoolDownTime;
    FBlackboardKeySelector CooldownKey;
}

class UBTServer_ChaseTarget : UBTService
{
    FBlackboardKeySelector TargetKey;
    bool MustBeAlive;
    FGameplayTag SwitchTargetCooldownTag;
    FGameplayTagQuery TargetingQuery;
    bool IsFlying;
    bool CanShoot;
    float TargetingRange;
    float SwitchTargetTime;
    float SwitchTargetDeviation;
}

class UBTService_FindPlayer : UBTService
{
    FBlackboardKeySelector TargetKey;
    bool MustBeAlive;
    bool SwithToBetterTargets;
    bool RegisterForPositioning;
    bool IsFlying;
    bool CanShoot;
    float TargetingRange;
}

class UBTService_FindAttackable : UBTService
{
    FBlackboardKeySelector TargetKey;
    bool MustBeAlive;
    bool SwithToBetterTargets;
    bool RegisterForPositioning;
    bool IsFlying;
    bool CanShoot;
    float TargetingRange;
    FGameplayTagQuery TargetQuery;
}

class UBTService_SetStance : UBTService
{
    FBlackboardKeySelector TargetLocationKey;
    float Distance;
}

class UBTService_CheckPathToTarget : UBTService
{
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector ResultKey;
}

class UBTService_UpdateMoveToTarget : UBTService
{
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector TargetLocationKey;
    float LookAheadTime;
    float VerticalOffset;
}

class UBTService_UpdateFlyingMoveToTarget : UBTService
{
    FBlackboardKeySelector TargetKey;
    FBlackboardKeySelector TargetLocationKey;
    float LookAheadTime;
}

class UBTService_UpdateMoveInFormation : UBTService
{
    float LookAheadTime;
    FBlackboardKeySelector TargetLocationKey;
    float AttackerRadius;
}

class UBTTask_Attack : UBTTaskNode
{
    FBlackboardKeySelector TargetKey;
    FName AttackName;

    void OnAttackCompleted(UBehaviorTreeComponent* btComponent);
}

class UBTTask_FakePhysicsMove : UBTTask_BlackboardBase
{
    float MinTime;
    float EndMaxSpeed;
    FVector InitialLocalVelocity;
    FVector InitialGlobalVelocity;
    bool EndRequireSolidGround;
    UFakeMoverSettings* MoveSettings;
}

class UBTTask_FindPointNearCeiling : UBTTask_BlackboardBase
{
    float CloseToCeilingBias;
    float LookForCeilingLength;
    float SearchRadius;
}

class UBTTask_MoveToTarget : UBTTask_BlackboardBase
{
    float AcceptableRadius;
    bool EnterAttackStanceOnMoveFinished;
}

class UBTTask_MoveToSlot : UBTTask_BlackboardBase
{
    float AcceptableRadius;
    float LookAheadTime;
    float VerticalOffset;
    float UpdateRate;
}

class UBTTask_SetAttacking : UBTTaskNode
{
    FBlackboardKeySelector TargetKey;
}

class UBTTask_TriggerAI : UBTTaskNode
{
    FName TriggerName;
}

class UBTTask_MessageAI : UBTTaskNode
{
    FName MessageName;
}

class UBTTask_SetCondition : UBTTaskNode
{
    FBlackboardKeySelector ConditionalKey;
    bool Value;
}

class UBuildRestriction : UDataAsset
{
    int32 BuildType;
    int32 Platform;
}

class UBurrowComponent : UActorComponent
{

    void Unburrow(UAnimMontage* customMontage);
    void CallBurrow(bool isBurrowing, UAnimMontage* customMontage);
    void Burrow(UAnimMontage* customMontage);
}

class ACalldownItem : UAnimatedItem
{
    TSubclassOf<UItemPlacerAggregator> ItemPlacerClass;
    TSubclassOf<ARessuplyPod> SupplyPodClass;
    UResourceData* ResouceRequired;
    FText OrderDescription;
    FText LogText;
    TSubclassOf<AActor> ResupplyBeacon;
    UItemPlacerAggregator* ItemPlacerInstance;
    float CoolDown;
    float CooldownRemaining;

    void Server_Call_Resupply(const FVector& Location);
}

class UCampaignManager : UObject
{
    FCampaignManagerOnCampaignCompleted OnCampaignCompleted;
    void CampaignCompletedDelegate();
    FCampaignManagerOnCampaignChanged OnCampaignChanged;
    void Delegate();
    TSubclassOf<UCampaign> MainCampaign;
    TArray<TSubclassOf<UCampaign>> WeeklyCampaigns;
    TArray<TSubclassOf<UCampaign>> MatrixCoreHuntCampaigns;
    TArray<TSubclassOf<UCampaign>> SideCampaigns;
    TArray<TSubclassOf<UCampaign>> EventCampaigns;
    UCampaign* ActiveCampaign;
    int32 NumFailedRequests;
    bool WeeklyBackendDataValid;
    int32 WeeklyBackendSeed;
    FDateTime WeeklyBackendExpirationTime;
    FDateTime LastRequestTime;

    void StartNewCampaign(TSubclassOf<UCampaign> campaignClass, UFSDSaveGame* SaveGame);
    void SkipMainCampaign(UObject* WorldContextObject);
    void OnEventsRefreshed();
    bool IsWeeklyCampaignCompleted(UObject* WorldContext, ECampaignType campaigntype);
    bool IsInCampaignMission(UFSDPlayerController* Player);
    bool IsCampaignRestrictionsMet(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* optionalDifficulty);
    bool IsCampaignMission(UObject* WorldContextObject, UGeneratedMission* mission);
    bool IsActiveCampaign(UCampaign* Campaign);
    TArray<TSubclassOf<UCampaign>> GetUncompletedCampaigns(UFSDPlayerController* Player);
    UGeneratedMission* GetCampaingMissionFromSeeds(UObject* WorldContextObject, int32 GlobalSeed, int32 MissionSeed);
    UGeneratedMission* GetCampaingMission(const TArray<UGeneratedMission*>& missions, int32 MissionSeed);
    void CampaignCompletedDelegate__DelegateSignature();
    void AbortActiveCampaign(UFSDSaveGame* SaveGame);
}

class UCampaign : UObject
{
    TArray<UCampaignMission*> missions;
    TArray<UCampaignRequirement*> Requirements;
    TArray<UCampaignRequirement*> VisibilityRequirements;
    UPlayerCharacterID* RequiredCharacterID;
    TArray<UDifficultySetting*> RestrictedToDifficulties;
    int32 Progress;
    FGuid SaveGameID;
    bool CanAbort;
    bool CanSkip;
    ECampaignMutators Mutators;
    FText TitlePrefix;
    FText Title;
    FText DescriptionHeader;
    FText Description;
    FText RewardText;
    FText RewardFlavorText;
    UTexture2D* Icon;
    TSoftObjectPtr<UTexture2D> Picture;
    ECampaignType campaigntype;
    UMissionStat* CampaignCompletedMissionStat;
    UGameActivityAssignmentType* CampaignActivity;

    bool IsComplete();
    bool IsCampaignComplete(UObject* WorldContext, TSubclassOf<UCampaign> Campaign);
    UCampaign* GetReference(TSubclassOf<UCampaign> Campaign);
    UCampaignMission* GetPreviousMission();
    UTexture2D* GetPicture();
    FText GetCampaignTitle(TSubclassOf<UCampaign> Campaign);
    UCampaignMission* GetActiveMission();
    bool CanStartCampaign(UFSDPlayerController* Player);
    bool CanSeeCampaign(UPlayerController* PlayerController);
    bool AreRestrictionsMet(UFSDPlayerController* Player, UDifficultySetting* optionalDifficulty);
}

class UCampaignMission : UDataAsset
{
    UPlanetZone* PlanetZone;
    FRequiredMissionItem mission;
    TArray<UReward*> Rewards;
    UDialogDataAsset* MissionCompleteShout;

    UMissionTemplate* GetMissionTemplate();
}

class UCampaignRequirement : UObject
{

    bool IsRequirementMet(UFSDPlayerController* Player, UCampaign* Campaign);
}

class UValidWeeklySeedCampaignRequirement : UCampaignRequirement
{
}

class UCaracterLevelCampaignRequirement : UCampaignRequirement
{
    UPlayerCharacterID* characterID;
    int32 LevelRequirement;
}

class UPlayerRankCampaignRequirement : UCampaignRequirement
{
    int32 RankRequirement;
}

class URetirementCampaignRequirement : UCampaignRequirement
{
    UPlayerCharacterID* characterID;
    int32 LevelRequirement;
}

class UWeeklyTimerCampaignRequirement : UCampaignRequirement
{

    FTimespan GetWeeklyTimeLeft(UFSDPlayerController* Player);
    FTimespan GetTimeUntillNewCampaign(UFSDPlayerController* Player);
    bool GetHasCompleted(UCampaign* Campaign, UFSDPlayerController* Player);
}

class UAnyRetiredCampaignRequirement : UCampaignRequirement
{
}

class UCamapaignCompletedRequirement : UCampaignRequirement
{
    TSubclassOf<UCampaign> Campaign;
}

class UCapacityBasedItemAggregator : UItemAggregator
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
}

class UCapacityHoldingItemAggregator : UCapacityBasedItemAggregator
{
    int32 MaxAmmo;
    int32 AmmoCount;
    bool UseRejoin;

    void UseAmmo(int32 count);
    void SetMaxAmmo(int32 InMaxAmmo, bool InChangeCurrentAmount);
    void Resupply(float percentage);
    void OnRep_MaxAmmo();
    void OnRep_AmmoCount();
    void AddAmmo(int32 Amount);
}

class UCappedResource : UObject
{
    FCappedResourceOnChanged OnChanged;
    void ResourceChangedSignature(UCappedResource* Resource, float Amount);
    FCappedResourceOnIncreased OnIncreased;
    void ResourceAddedSignature(UCappedResource* Resource, float Amount);
    FCappedResourceOnFull OnFull;
    void ResourceFullSignature(UCappedResource* Resource);
    UResourceData* Data;
    float currentAmount;
    float MaxAmount;
    float TotalCollected;
    int32 FullFlag;

    float TransferAll(UCappedResource* Receiver);
    float Transfer(float Amount, UCappedResource* Receiver);
    void OnRep_FullFlag(int32 OldValue);
    void OnRep_CurrentAmount(float OldAmount);
    bool IsObjectiveResource(UObject* WorldContext, bool& IsCompleted);
    bool IsFull();
    bool isEmpty();
    bool IsCraftingResource();
    FText GetTitle();
    FColor GetColor();
    float GetCapacityPct();
    float Deduct(float Amount);
    float Add(float Amount);
}

class ACaretaker : UFSDPawn
{
    USceneComponent* Root;
    USkeletalMeshComponent* Body;
    TArray<USkeletalMeshComponent*> Eyes;
    TArray<UPassthroughSubHealthComponent*> subHealth;
    UHealthDamageTracker* DamageTracker;
    UEnemyHealthComponent* Health;
    UPawnStatsComponent* PawnStats;
    TArray<UCaretakerActionComponent*> Actions;
    UCaretakerActionComponent* CurrentAction;
    TArray<UAnimSequenceBase*> HitReactions;
    int32 CurrentStage;
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
    void OnRep_OpenEye();
    void OnRep_CurrentStage();
    void OnRep_CurrentRotation();
    void OnNewStage(int32 stageIndex);
    void OnEyeOpened(USkeletalMeshComponent* eye);
    void OnEyeClosed(USkeletalMeshComponent* eye);
    void OnDamageTaken(float Amount);
    bool IsAwake();
    bool IsAnyEyeOpen();
    void InitiateNextStage();
    void InitCaretakerActions(TArray<UCaretakerActionComponent*> carettakeractions);
    void CloseAllEyes();
}

class UCaretagerBodyAnimInstance : UEnemyAnimInstance
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
}

class UCaretakerEyeAnimInstance : UEnemyAnimInstance
{
    bool IsOpen;
}

class UCaretakerActionComponent : UActorComponent
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
    ACaretaker* GetCaretaker();
    bool CanUse();
}

class UUsableComponentBase : UActorComponent
{
    FUsableComponentBaseOnClientBeginUse OnClientBeginUse;
    void UsedBySignature(UPlayerCharacter* User, EInputKeys Key);
    int32 CallbackKeys;
    float UseCooldown;
    bool MustBeGroundedToUse;
    bool CanUseStrict;
    bool StrictOnlyAfterPickup;
    UUseAnimationSetting* AnimationSettings;
    int32 Priority;
    bool UseableByOwnerOnly;
    USceneComponent* RestrictToCollider;
    EUseRestriction UseRestrictionAllowance;
    bool IsRayTraceTriggered;
    bool ResetUsingOnCompletion;
    bool EquipOnEndUse;

    void SetRayTraceTriggered(bool rayTraceTriggered);
    FText GetUseText(UPlayerCharacter* User);
    float GetUseProgressInPercent(UPlayerCharacter* User);
    UTexture2D* GetUsableIcon();
    bool GetShowUsingUI();
    bool GetIsRayTraceTriggerd();
    bool GetHideProgressBar(UPlayerCharacter* User);
    bool GetHideActionText(UPlayerCharacter* User);
    void EndUse(UPlayerCharacter* User);
    void BeginUse(UPlayerCharacter* User, EInputKeys Key);
}

class UUsableComponent : UUsableComponentBase
{
    UDialogDataAsset* ShoutBegin;
    FText UseText;
    bool ResetOnFail;
    bool SwitchToUsingState;

    void SetUseText(const FText& NewText);
    bool HasDuration();
}

class UInstantUsable : UUsableComponent
{
    FInstantUsableOnUsedBy OnUsedBy;
    void UsedBySignature(UPlayerCharacter* User, EInputKeys Key);
    FInstantUsableOnUsableChanged OnUsableChanged;
    void UsableChangedSignature(bool CanUse);
    bool bShowUsingUI;
    bool AllowUseWhileCarrying;
    USoundCue* AudioCompletedUse;
    bool Usable;
    bool TurnOffAfterUse;

    void SetCanUse(bool CanUse);
    void OnRep_Usable();
}

class UCarriableInstantUsable : UInstantUsable
{
}

class UCarriableComponent : UActorComponent
{
    FCarriableComponentOnPickedUp OnPickedUp;
    void CarriableEvent();
    FCarriableComponentOnDropped OnDropped;
    void CarriableEvent();
    TSoftObjectPtr<UDialogDataAsset> ShoutWhileCarrying;
    APlayerCharacter* CarriedBy;
    EUseRestriction UseRestriction;
    FVector Offset;

    bool PickupItem(UPlayerCharacter* byCharacter);
    void OnRep_CarriedBy();
    void DropItem();
    void AttachChanged(bool Attached, const FVector PrevScale);
}

class UResourceData : UDataAsset
{
    FText Title;
    FText TitlePlural;
    FText Description;
    FColor Color;
    UTexture2D* Icon;
    int32 BuyingPrice;
    int32 SellingPrice;
    UMissionStat* MinedMissionStat;
    bool IsCraftingMaterial;
    bool ForceShowOnEndScreen;
    bool AffectedByMutators;
    bool ScaleToMissionLength;
    bool ScaleToHazardLevel;
    bool ShowSeparatelyInEndScreen;
    TSoftClassPtr<AResourceChunk> Spawnable;
    bool IsWholeNumberResource;
    int32 CreditValue;
    int32 XPValue;
    FGuid SaveGameID;

    float GetOwnedAmount(UObject* WorldContextObject);
}

class UCarvedResourceData : UResourceData
{
    TSoftObjectPtr<UCarvedResourceCreator> CarvedResourceCreator;
    float UnitsPerCarver;

    UCarvedResourceCreator* LoadResourceCreator();
}

class UCaveEntranceComponent : UPrimitiveComponent
{
    ECaveEntranceType Direction;
    ECaveEntrancePriority Priority;
}

class ACaveEntrance : AGenerationItem
{
    UCaveEntranceComponent* CaveEntranceComponent;
    ECaveEntranceType EntranceType;
    bool HasBeenConverted;
}

class ASpawnResourceGenerationItem : AGenerationItem
{
    UResourceData* Resource;
    float BaseAmount;
    USphereComponent* Sphere;
}

class ASpawnActorGenerationItem : AGenerationItem
{
    TSubclassOf<AActor> ActorToSpawn;
    UBoxComponent* Box;
}

class ASpawnTriggerItem : AGenerationItem
{
    TSubclassOf<AActor> Trigger;
    FName Message;
}

class ASubRoomItem : AGenerationItem
{
    URoomGenerator* RoomGenerator;
    int32 Layer;
}

class ARandomSubRoomItem : AGenerationItem
{
    URoomGeneratorGroup* RoomGroup;
    FGameplayTagQuery tagQuery;
    int32 Layer;
}

class ADropPodCalldownLocationItem : AGenerationItem
{
    TSubclassOf<AActor> CalldownClass;
}

class AProceduralSetup : AActor
{
    bool ShowItemNoisePattern;
    int32 Seed;
    bool UseRandomSeed;
    FRandomStream RandomStream;
    FRandomStream RandomStreamServer;
    FRandomStream RandomStreamAsync;
    FRandomStream RandomStreamAsyncServer;
    FProceduralSetupOnEncounterSpawnedEvent OnEncounterSpawnedEvent;
    void EncountersSpawnedDelegate(AProceduralSetup* setup);
    TArray<FEncounterSpecialItem> SpecialEncountersToSpawn;
    USpecialEvent* ForcedSpecialEvent;
    USpecialEvent* ForcedTreasure;
    UNoisyPathfinderComponent* NoisyPathfinder;
    UProceduralTunnelComponent* ProceduralTunnel;
    UProceduralObjectColliders* ObjectColliders;
    ADeepCSGWorld* CSGWorld;
    UFloodFillSettings* PathfinderNoise;
    TArray<FVeinResource> VeinResources;
    TArray<FCarvedResource> CarvedResources;
    TSubclassOf<UMissionDNA> MissionDNA;
    TArray<FGemResourceAmount> GemResourcesToGenerate;
    TArray<FCollectableSpawnableItem> CollectablesToGenerate;
    ESpawnSettings SpawnSettings;
    bool CanSpawnSpecialEvents;
    bool ShouldCarveTunnels;
    TArray<FRoomNode> Rooms;
    TArray<FRoomNode> RoomsInitialState;
    TArray<FTunnelNode> Tunnels;
    FGeneratedInfluenceSets GeneratedInfluenceSets;
    FGeneratedInstantCarvers GeneratedInstantCarvers;
    FGeneratedDebris GeneratedDebris;
    UBiome* Biome;
    float missionLength;
    TArray<FPathObstacle> PathObstacles;
    FInfluenceMap InfluenceMap;
    TArray<UResourceData*> SpawnedResources;
    float CaveDepth;
    AActor* PostProcessActor;
    USpecialEvent* SpecialEvent;
    bool IsInitialized;
    int32 CurrentRoomPass;
    bool Pass1Completed;
    bool UsePerLevelCritterSpawning;
    FString LastCompletedPLSPass;

    void StartGenerationOnClient(UFSDPlayerController* client);
    void SpawnSpecialEvents();
    void SpawnObjectiveEncounter();
    void SpawnObjectiveCriticalItems();
    void SpawnItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    void SpawnItems();
    void SpawnEncounters();
    void SpawnDebrisItems_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, EDebrisItemPass pass, int32 Depth);
    void SpawnDebrisItems(EDebrisItemPass pass);
    void SetSeed(int32 Seed);
    void SetObjectivesCompleted();
    void ResetData();
    void RemoveBLockedEntrances();
    void OnPLSDataRecieved();
    void OnObjectivesCompleted();
    void OnCarverDataRecieved(EDebrisItemPass pass);
    bool IsGeneratedDataReady();
    bool IsCarverDataReady(EDebrisItemPass pass);
    void InitializeObjectives();
    UMissionDNA* GetMissionDNA();
    TMap<FString, float> GetGemsResourceAmounts();
    ADeepCSGWorld* GetCSGWorld();
    TMap<FString, float> GetCollectablesResourceAmounts();
    void GenerateRoomsFromGraph_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo, int32 CarvePass);
    void GenerateRoomsFromGraph(int32 CarvePass);
    void GenerateResourceVeins_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    void GenerateResourceVeins();
    void GeneratePostCarveRooms_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    void GeneratePostCarveRooms();
    void GenerateLandscapeFromData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& obstacles);
    void GenerateLandscape();
    void GenerateDebrisVeins_Async(const AProceduralSetup*& setup, EDebrisCarvedType carverType, FLatentActionInfo LatentInfo);
    void GenerateDebrisVeins(EDebrisCarvedType carverType);
    FVector FindLocationInDirection(FVector Origin, FVector Direction, float horizontalDeviation, float verticalDeviation, FRandRange Distance, float additionalDistance);
    void FindEntrancesForAllConnections();
    void FillTunnels_Async(AProceduralSetup* setup, FLatentActionInfo LatentInfo);
    void FillTunnels();
    void DoneCarving();
    bool DoAsyncThreadGeneration();
    void CreateTunnelPaths();
    int32 CreateItemDepths();
    void CreateGeneratedInfluenceSet();
    void CreateAdditionalRooms();
    int32 ConnectRooms(FRoomNode& From, FRoomNode& to, bool hasDirt, UTunnelParameters* tunnelParameterOverride);
    int32 ConnectRoomIds(int32 fromID, int32 toID, bool hasDirt, UTunnelParameters* tunnelParameterOverride);
    void CommitCarving(bool finalCommit, bool generateMesh);
    void CarveWithGeneratedInstantCarvers();
    void CarveTunnels();
    void BeginLiveGeneration();
    void BeginGenerating();
    void AddRoomToInitialState(const FRoomNode& RoomNode);
    int32 AddRoom(FVector Location, bool CanHaveEnemies, URoomGeneratorBase* RoomGenerator, bool canBeRotated, FVector& outCenter, FRoomNode& outRoom, float ResourceMultiplier);
    void AddInfluenceToTunnelEntrances(UCaveInfluencer* Influencer, float range);
    void AddImportantLocation(const FVector& Location, float Radius);
    void AddEnemyDebris();
    int32 AddDebrisCollider(const FDebrisCapsule& Capsule);
    void AddCaveInfluence(UCaveInfluencer* Influencer, const FVector& Location, float range);
    int32 AddAirParticlesCollider(const FDebrisCapsule& Capsule);
}

class ACaveBurner : AProceduralSetup
{
    float RoomRadius;
    FGameplayTagContainer RoomTags;
    bool CanOnlyBeUsedOnce;
    URoomGenerator* RoomGenerator;
}

class ARoomBurner : AActor
{
    bool LiveUpdateEditor;
    ERoomMirror MirrorTest;
    URoomGenerator* RoomGenerator;
    float RoomRadius;
    ERoomMirroringSupport MirrorSupport;
    bool ShowRoomCollider;
    FGameplayTagContainer RoomTags;
    int32 Seed;
    UBiome* Biome;
    UDifficultySetting* Difficulty;
    int32 ForcePlayerCount;
    bool GenerateDebris;
    bool GenerateItems;
    bool GenerateResources;
    bool SpawnEncounters;
    UEnemyDescriptor* TestEnemy;
    int32 TestEnemyCount;
    UMissionMutator* TestMutator;
    TArray<UMissionWarning*> TestWarnings;
    USpecialEvent* TestSpecialEvent;
    USpecialEvent* TestTreasure;
    UMissionTemplate* MissionTemplate;
    UMissionTemplate* CustomMissionTemplate;
    ADeepCSGWorld* CSGWorld;
    AProceduralSetup* PLSLiveEditor;
    URoomGenerator* LiveEditRoomGenerator;

    void SpawnEncounter(AProceduralSetup* setup);
    URoomGenerator* GetRoomGenerator();
}

class AInfluenceTester : AActor
{
    UCaveInfluencer* Influencer;
    USphereComponent* Sphere;
}

class AEnemyPawn : UFSDPawn
{
    UEnemyHealthComponent* Health;
    UPawnStatsComponent* Stats;
    UEnemyPawnAfflictionComponent* Affliction;
    UEnemyComponent* enemy;
    FName CenterMassSocketName;
    FQueuedMontage QueuedMontage;
    TArray<UMaterialInterface*> CachedMaterials;

    UMeshComponent* Receive_GetMeshComponent();
    void OnRep_QueuedMontage();
    USkeletalMeshComponent* GetMesh();
}

class ACaveLeech : UEnemyPawn
{
    USkeletalMeshComponent* SkeletalMesh;
    UGrabberComponent* GrabberComponent;
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
    UPawnAffliction* CaveLeechSenseAffliction;
    float StateTime;
    ECaveLeechState State;
    FVector_NetQuantize TentacleLocation;
    FVector_NetQuantize TentacleVelocity;
    TWeakObjectPtr<AActor> Target;
    UHealthComponent* HealthTarget;
    USceneComponent* TentacleHead;

    void OnRep_State();
    FVector GetTentacleTargetLocation();
    FVector GetMouthLocation();
    AActor* GetCurrentTarget();
    void Died(UHealthComponentBase* HealthComponent);
    void Damaged(float Amount);
    void BP_OnStateChanged(ECaveLeechState NewState);
    void BP_OnBite(UHealthComponent* TargetHealth);
}

class UCaveLeechAnimInstance : UAnimInstance
{
    float HeadOffset;
    ACaveLeech* CaveLeech;
    USceneComponent* CaveLeechHead;
    FRotator BaseRotation;
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
}

class ACaveObject : AActor
{
    bool CanCharacterStandOn;

    void TriggerNetworkUpdate();
    void ResumeNetworkUpdates();
    void Recieve_OnGameStarted();
    void PauseNetworkUpdates();
}

class UCaveScriptComponent : UActorComponent
{
}

class ACaveVine : AActor
{
    TEnumAsByte<ECollisionChannel> GroundCollisionChannel;
    float IdleSwingSpeed;
    float ChaseSpeed;
    float MaxReach;
    float GroundOffset;
    float NoiseRadius;
    float NoiseSpeed;
    USplineMeshComponent* SplineMeshComponent;
    USceneComponent* VineHead;
    FVector VineVelocity;
    FVector VineLocation;
    FVector VineStartLocation;
    TWeakObjectPtr<UHealthComponent> Target;

    void BP_OnTargetChanged(UHealthComponent* NewTarget);
    void BP_OnInitialized();
}

class ACaveWorm : UDeepPathfinderCharacter
{
    USimpleHealthComponent* Health;
    float SearchChunksRadius;
    float SearchChunksInterval;

    AResourceChunk* SpawnResource(UObject* WorldContext, UResourceData* Data, float Size, FTransform Transform, FVector Impulse, FVector DropOffset);
    void Search();
    void IncrementKillCount(UHealthComponentBase* HealthComponent);
    void DropResource(UResourceData* Data, float Size, FVector Impulse, FVector DropOffset);
}

class AMaggot : UDeepPathfinderCharacter
{
    USimpleHealthComponent* HealthComponent;
}

class UCellIdFunctionLibrary : UBlueprintFunctionLibrary
{
}

class UTest : UAnimInstance
{
}

class UCharacterCameraController : UActorComponent
{
    float StartFOV;
    float targetFov;
    float TargetFOVSpeed;
    APlayerCharacter* Character;
    UCameraComponent* Camera;

    void ResetFOV(float FadeSpeed);
    void FOVChanged(float NewFOV);
    void FadeToFOVRelative(float targetFov, float FadeSpeed);
    void FadeToFOV(float targetFov, float FadeSpeed);
}

class UCharacterIntoxicationComponent : UActorComponent
{
    FCharacterIntoxicationComponentOnIntoxicationChanged OnIntoxicationChanged;
    void IntoxicationProgressSignature(UPlayerCharacter* Player, float Progress);
    FCharacterIntoxicationComponentOnPassOutDrunk OnPassOutDrunk;
    void PassOutDrunkSignature(UPlayerCharacter* Player);
    APlayerCharacter* Character;
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
    void PassOutDrunkSignature__DelegateSignature(UPlayerCharacter* Player);
    bool IsPassOutDrunk();
    bool IsOnSpaceRig();
    bool IsLocallyControlled();
    bool IsDrunk();
    void IntoxicationProgressSignature__DelegateSignature(UPlayerCharacter* Player, float Progress);
    bool HasAuthority();
    float GetSoberingUpCoolDown();
    float GetIntoxicationProgressMapped(UCurveFloat* Curve);
    float GetIntoxicationProgress();
    int32 GetAlcoholPct(EDrinkableAlcoholStrength Strength);
    void Consume(UDrinkableDataAsset* Drinkable);
    void ClearIntoxication();
}

class UCharacterRecoilComponent : UActorComponent
{
    FVector Recoil;
    FVector RecoilVelocity;
    FVector PrevError;
}

class UCharacterSettings : UDataAsset
{
    TArray<TSoftClassPtr<APlayerCharacter>> RankedHeroClasses;
    TArray<TSubclassOf<APlayerCharacter>> LoadedClasses;
    TArray<FText> PlayerRankNames;
    TArray<int32> CharacterXPLevels;
    TMap<FGuid, UPlayerCharacterID*> PlayerCharacterIDMap;
    TArray<UPlayerCharacterID*> PlayerCharacterIDs;
    UPlayerCharacterID* BoscoID;
    USkeletalMesh* NoHead;
    USkeletalMesh* DefaultHead;
    USkeletalMesh* ThickNeck;
    USkeletalMesh* ThinNeck;
    TSoftClassPtr<ACarriableItem> CarriableBagClass;
    UUseAnimationSetting* ThrowItemAnimSettings;
    TMap<UPlayerCharacterID*, UCharacterVanityItems*> CharacterVanityItems;
    UDialogDataAsset* AutoReloadShout;
    UDebrisPositioning* TeleportPositioning;
    TSubclassOf<UTerrainPlacementComponent> TeleportPlacement;

    void PreloadAllInventories(UAsyncManager* AsyncManager);
    UPlayerCharacterID* GetPlayerCharacterID(const FGuid& ID);
}

class UCharacterSightComponent : UActorComponent
{
    FCharacterSightComponentOnTargetChanged OnTargetChanged;
    void TargetChangedSignature(AActor* NewTarget, UPrimitiveComponent* NewPrimitive);
    float TargetMaxDistance;
    TEnumAsByte<ECollisionChannel> TraceChannel;
    TArray<TWeakObjectPtr<AActor>> IgnoredActors;
    APlayerCharacter* Character;
    TWeakObjectPtr<AActor> TargetActor;
    TWeakObjectPtr<UPrimitiveComponent> TargetPrimitive;
    TWeakObjectPtr<USimpleObjectInfoComponent> TargetInfo;
    TWeakObjectPtr<UTemperatureComponent> TargetTemperature;
    TWeakObjectPtr<UPawnAfflictionComponent> TargetAfflictions;
    TScriptInterface<IHealth> TargetHealth;
    TScriptInterface<ITargetable> TargetTargetable;
    float TargetTime;
    FReplicatedCharacterData ReplicatedData;

    void TargetChangedSignature__DelegateSignature(AActor* NewTarget, UPrimitiveComponent* NewPrimitive);
    void Server_UpdateTarget(AActor* NewActor, UPrimitiveComponent* NewPrimitive);
    void RemoveIgnoreActor(AActor* InActor);
    void ReceiveTargetInSightTick(float DeltaTime);
    void ReceiveTargetChanged();
    void GetSightStartAndEnd(float InMaxDistance, FVector& OutStartLocation, FVector& OutEndLocation);
    void AddIgnoreActor(AActor* InActor);
}

class UCharacterStateComponent : UActorComponent
{
    uint8 StateId;
    APlayerCharacter* Character;
    UDialogDataAsset* EnterStateShout;
    UDialogDataAsset* ExitStateShout;
    UDialogDataAsset* AttentionShout;
    UPlayerMovementComponent* PlayerMovement;

    void ReceiveStateTick(float DeltaTime);
    void ReceiveStateExit();
    void ReceiveStateEnter();
    bool IsLocallyControlled();
    bool HasAuthority();
    float GetStateTime();
    uint8 GetStateID();
    bool GetStateActive();
    UPlayerMovementComponent* GetCharacterMovement();
}

class UCharacterUseComponent : UActorComponent
{
    FCharacterUseComponentOnDepositingBegin OnDepositingBegin;
    void DepositingEvent(UResourceBank* ResourceBank);
    FCharacterUseComponentOnDepositingEnd OnDepositingEnd;
    void DepositingEvent(UResourceBank* ResourceBank);
    FCharacterUseComponentOnBeginHoveringEvent OnBeginHoveringEvent;
    void BeginUsingDelegate(UUsableComponentBase* Component);
    FCharacterUseComponentOnEndHoveringEvent OnEndHoveringEvent;
    void EndUsingDelegate();
    FCharacterUseComponentOnBeginUsingEvent OnBeginUsingEvent;
    void BeginUsingDelegate(UUsableComponentBase* Component);
    FCharacterUseComponentOnEndUsingEvent OnEndUsingEvent;
    void EndUsingDelegate();
    FCharacterUseComponentOnBeginUseNoUsable OnBeginUseNoUsable;
    void EndUsingDelegate();
    FCharacterUseComponentOnEndUseNoUsable OnEndUseNoUsable;
    void EndUsingDelegate();
    FUsableRepliactional ActiveUsablee;
    UUsableComponentBase* HoveringUsable;
    USceneComponent* HoveringUsableCollider;
    USceneComponent* ActiveUsableCollider;
    USphereComponent* UseCollider;
    USoundBase* AudioBeginDepositing;
    USoundBase* AudioEndDepositing;
    float UseDistance;
    EUseRestriction UseRestriction;
    APlayerCharacter* Character;
    TMap<UUsableComponentBase*, float> UseCooldownTracker;

    void Server_SetCanUse(EUseRestriction UseRestriction);
    void Server_EndUse();
    void Server_BeginUse(uint8 Key, UUsableComponentBase* Usable, USceneComponent* UsableCollider);
    void OnRep_ActiveUsablee(FUsableRepliactional lastUsable);
    void OnCharacterStateChanged(ECharacterState NewState);
    bool IsLookingAtUsable();
    bool IsLookingAtDepositable();
    float GetUseProgress();
    AActor* GetLookingAtActor();
    bool GetIsUsing();
    bool GetIsDepositing();
    void All_PlaySingleUse(uint8 Key, UUsableComponentBase* Usable);
    void AddCustomUsableComponent(UUsableComponentBase* Usable, ECustomUsableType eType);
}

class UCharacterVanityComponent : UActorComponent
{
    UCharacterVanityItems* AvailableVanityItems;
    UBeardColorVanityItem* ShownBeardColor;
    UMaterialInterface* ArmorMaterial;
    UMaterialInstanceDynamic* DynamicSkinMaterial;
    EHeadVanityType HeadVanityType;
    TArray<UVanityItem*> EquippedVanity;
    UMaterialInterface* SkinMaterial;
    TArray<FTattooArmorItem> Tattoos;
    TArray<UMaterialInterface*> CachedMaterials;
    TMap<EVanitySlot, USkeletalMeshComponent*> VanityMeshes;

    void UpdateMeshes();
    void UpdateEquippedVanity(bool applyItems);
    void SetEquippedVanityInViewer(const TArray<UVanityItem*>& Vanity);
    void Server_SetEquippedVanity(const TArray<UVanityItem*>& equippedItems);
    UVanityItem* Receive_GetEquippedVanityItem(UObject* WorldContextObject, UPlayerCharacterID* Character, EVanitySlot Slot);
    void OnRep_EquippedVanity();
    UVanityItem* GetEquippedVanityItem(EVanitySlot Slot);
    UCharacterVanityItems* GetAvailableVanityItems();
    void EnforceValidPaintjob();
    void CreateEquippedGear();
}

class UCharacterVanityItems : UDataAsset
{
    TArray<UHeadVanityItem*> HeadItems;
    UVanitySchematicBank* HeadSchematicBank;
    TArray<UBeardVanityItem*> BeardItems;
    UVanitySchematicBank* BeardSchematicBank;
    TArray<UArmorVanityItem*> ArmorItems;
    TArray<UArmorMaterialVanityItem*> ArmorMaterialItems;
    TArray<UArmorMaterialVanityItem*> ArmorMaterialItemsInTreassures;
    TArray<UEyeBrowsVanityItem*> EyebrowsItems;
    UVanitySchematicBank* EyebrowSchematicBank;
    TArray<UMoustacheVanityItem*> MoustacheItems;
    UVanitySchematicBank* MoustacheSchematicBank;
    TArray<USideburnsVanityItem*> SideburnItems;
    UVanitySchematicBank* SideburnSchematicBank;
    TArray<UBeardColorVanityItem*> BeardMaterialItems;
    UVanitySchematicBank* BeardMaterialSchematicBank;
    TArray<USkinColorVanityItem*> SkinMaterialItems;
    UVanitySchematicBank* SkinMaterialSchematicBank;
    TMap<FGuid, UVanityItem*> VanityMap;
    TMap<EVanitySlot, UVanityItem*> DefaultItems;

    void SortVanityItems(UObject* WorldContextObject, UPlayerCharacterID* characterID, TArray<UVanityItem*>& vanityItems);
    TArray<UVanityItem*> GetVanityItems(UObject* WorldContextObject, EVanitySlot Slot, bool onlyStoreItems, UPlayerCharacterID* characterID);
    UVanityItem* GetVanityItem(const FGuid& VanityID);
    TArray<UVanityItem*> GetUnLockedVanityItems(UObject* WorldContextObject, EVanitySlot Slot, bool onlyStoreItems, UPlayerCharacterID* characterID);
    TArray<UVanityItem*> GetLockedVanityItems(UObject* WorldContextObject, EVanitySlot Slot, UPlayerCharacterID* characterID);
    TArray<UVanityItem*> GetItems(EVanitySlot Slot, bool onlyStoreItems);
    UVanityItem* GetDefaultVanityItem(UObject* WorldContext, EVanitySlot Slot, UPlayerCharacterID* characterID);
    void Clean();
}

class ACharacterSelectionSwitcher : AActor
{

    void OnVictoryPoseChanged(UVictoryPose* VictoryPose);
    void OnVanityItemEquipped(EVanitySlot Slot);
    void Hide();
    AActor* GetViewerActor();
    APlayerCharacter* GetActiveCharacter();
}

class AChargedWeapon : UAmmoDrivenWeapon
{
    FChargedWeaponOnChargeChanged OnChargeChanged;
    void ChargeChangedSignature(float charge);
    FChargedWeaponOnHeatChanged OnHeatChanged;
    void ChargeChangedSignature(float charge);
    UAnimMontage* FP_OverheatAnim;
    UAnimMontage* FP_ChargeupMontage;
    UFXSystemAsset* ChargeupParticles;
    UFXSystemComponent* ChargeupParticleInstance;
    UFXSystemAsset* ChargeupFireMuzzleFlash;
    USoundCue* NormalFiresound;
    USoundCue* FullyChargedFireSound;
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
    void Server_SetIsCharging(bool isChargingValue);
    void RecieveChargeProgressChanged(float NewChargeProgress);
    void ReceiveOverheatedChanged(bool isOverheated);
    bool GetIsCharging();
}

class UChargedWeaponAnimInstance : UAnimInstance
{
    bool isCharging;
    float ChargeupPlayRate;
    float ChargeupPlayRateSpeedChange;
    float ChargedownPlayRateSpeedChange;
    float MaxChargeupPlayRate;
    AChargedWeapon* Weapon;
}

class AProjectileBase : AActor
{
    FProjectileImpact ProjectileImpact;
    bool IsSpawnedFromWeapon;
    bool Exploded;
    bool DoOnImpact;
    bool DoOnImpact2;
    bool DoOnImpact3;
    bool DoOnSpawnVar;
    bool IsDorment;
    USphereComponent* CollisionComponent;
    float LifeSpan;
    float VelocityMultiplier;
    float GravityMultiplier;
    bool AffectedByDifficultySpeedModifier;
    bool SetInitialSpeedToMaxSpeed;
    bool AutoDisableCollisionOnImpact;
    USoundCue* WhizbySound;
    float WhizByCooldown;
    float WhizByStartDistance;
    EOnProjectileImpactBehaviourEnum EOnImpactBehaviour;

    UTerrainMaterial* TryGetTerrainMaterial();
    void StopMovement();
    void Server_SetState(FVector_NetQuantize Position, FVector_NetQuantize Velocity);
    void Server_Penetrated(const FProjectileImpact& Impact);
    void Server_Impacted(const FProjectileImpact& Impact);
    void OnUpgradeElementAdded(UProjectileUpgradeElement* element);
    void OnRep_ProjectileImpact();
    void OnRep_IsDorment(const bool wasDorment);
    void OnPenetrated(bool PredictedPenetration, const FHitResult& HitResult);
    void OnInitialized();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void MakeBouncy();
    void InitState(const FVector& ShootDirection, const FVector& initialBonusVelocity);
    void InitComponents();
    void IgnoreCollision(UPrimitiveComponent* otherCollider);
    bool HasImpactAuthority();
    float GetGameTimeSinceActivation();
    int32 GetBoneIndex();
    void DoOnSpawn();
    void DisableProjectileCollision(AProjectileBase* projectileA, AProjectileBase* projectileB);
    void DisableAndDestroy();
    void DamageArmor(UDamageComponent* DamageComponent, const FHitResult& HitResult);
    void CustomEvent(const UItemUpgrade* Event);
    void Client_DrawServersDebugPath(FVector Location);
    void Activate(AActor* owningActor, FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity);
}

class AProjectile : AProjectileBase
{
    FProjectileState State;
    bool UseArmorDamageBoneCheck;
    TArray<TSubclassOf<AActor>> IgnoreActorClasses;
    UFSDProjectileMovementComponent* MovementComponent;

    AProjectileBase* SpawnProjectileFromSelf(UObject* WorldContextObject, TSubclassOf<AProjectileBase> projectileClass, FVector Origin, FRotator velocityDirection);
    AProjectileBase* SpawnProjectile(UObject* WorldContextObject, TSubclassOf<AProjectileBase> projectileClass, APawn* projectileOwner, FVector Origin, FRotator velocityDirection);
    AProjectileBase* SpawnBallisticProjectile(UObject* WorldContextObject, TSubclassOf<UProjectile> projectileClass, APawn* projectileOwner, FVector Origin, FVector Velocity);
    void SetHomingTargetComponent(USceneComponent* HomingTargetComponent, float Delay);
    void Server_DisableHoming();
    void OnRep_State(const FProjectileState& oldState);
    void OnPenetration(const FHitResult& HitResult);
    void OnImpact(const FHitResult& HitResult);
    void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    UFSDPhysicalMaterial* FindBoneIndexFromArmor(const FHitResult& HitResult, int32& outBoneIndex);
}

class AChargedProjectile : UProjectile
{
    bool ExplodesWhenDead;
    bool PersistentExplosion;
    bool AoEDamageInFlight;
    float DirectDamageReduction;

    void OnAoEDamageEnabled();
}

class UClaimableRewardEntryWidget : UUserWidget
{
    FClaimableRewardEntryWidgetOnRewardClaimed OnRewardClaimed;
    void WidgetDelegate(UClaimableRewardEntryWidget* EntryWidget);
    FClaimableRewardEntry Data;

    void WidgetDelegate__DelegateSignature(UClaimableRewardEntryWidget* EntryWidget);
    void SignalRewardClaimed();
    void SetData(FClaimableRewardEntry InData);
    void ReceiveDataChanged();
}

class UClaimableRewardViewWidget : UUserWidget
{
    FClaimableRewardView Data;

    void ReceiveEndFlow();
    void ReceiveDataChanged();
    void ReceiveBeginFlow();
    void EndRewardFlow();
    void BeginRewardFlow(FClaimableRewardView InViewData);
}

class AExampleActor : AActor
{
    FExampleActorOnExampleUpdatedEvent OnExampleUpdatedEvent;
    void ExampleUpdatedDelegate();
    float Field;

    void Server_ExampleFunction();
    void Client_ExampleFunction();
    void All_ExampleFunction();
}

class UCollectableResourceData : UResourceData
{
    UDebrisPositioning* Positioning;
    float Rarity;
    float InfluenceRadius;
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    bool UseTerrainPlacement;
    TArray<TSoftClassPtr<AActor>> CollectableClasses;
    TArray<TSubclassOf<AActor>> CollectableClassesLoaded;
}

class UCharacterShoutsData : UDataAsset
{
    FCharacterShouts Shouts;
}

class UShoutWidget : UUserWidget
{
    TWeakObjectPtr<APlayerCharacter> Sender;
    FText Text;
    float Duration;
    bool IsSubtitle;

    void OnShout();
    FString GetTimeString(int32 Seconds);
    void GetSplitTimeString(int32 Seconds, FString& MinutesString, FString& SecondsString);
    FString GetCountDownString(int32 Seconds);
}

class UCommunicationComponent : UActorComponent
{
    FCommunicationComponentOnMissionShout OnMissionShout;
    void MissionShoutDelegate(const FText& Text, float Duration);
    FCommunicationComponentOnMissionShoutEnd OnMissionShoutEnd;
    void MissionShoutEndDelegate();
    FCommunicationComponentOnMixerAnnouncement OnMixerAnnouncement;
    void MixerAnnouncementDelegate(const FMixerAnnouncement& Announcement);
    FCommunicationComponentOnMissionControlFinished OnMissionControlFinished;
    void MissionShoutEndDelegate();
    bool ShoutingEnabled;
    TSubclassOf<UShoutWidget> ShoutWidgetType;
    UCharacterShoutsData* CharacterShouts;
    float PitchMultiplier;
    float MinShoutDelay;
    float CloseRangeShoutDistance;
    TMap<UDialogDataAsset*, float> DelayedShouts;
    FGameplayTagContainer KillShoutAllowedTags;
    bool bMissionControlPaused;
    UAudioComponent* MissionControlAudioComponent;
    TMap<APlayerCharacter*, UShoutWidget*> ActiveShouts;
    TArray<FActiveOutline> ActiveOutlines;
    APlayerCharacter* Character;
    UDialogDataAsset* LastShout;
    UAudioComponent* ShoutAudioComponent;
    TMap<UDialogDataAsset*, float> ShoutHistory;
    TArray<FMissionShoutQueueItem> MissionShoutQueue;

    void ShoutCustomOrDefault(UDialogDataAsset* CustomShout, EShoutType DefaultShout);
    void ShoutCustomLocalOnly(UDialogDataAsset* Shout);
    void ShoutCustomClosestDwarf(UObject* WorldContext, UDialogDataAsset* Shout, FVector TargetLocation);
    void ShoutCustom(UDialogDataAsset* Shout);
    void Shout(EShoutType Shout);
    void SetMissionControlPaused(bool IsPaused);
    void ServerShout(UDialogDataAsset* Shout);
    void ServerMixerAnnouncement(const FMixerAnnouncement& Announcement);
    void ServerMissionShout(UDialogDataAsset* Shout, int32 Index, bool bPriority);
    UAudioComponent* PlayPitchedByClass(UObject* WorldContextObject, TSubclassOf<UPlayerCharacter> CharacterClass, USoundBase* Sound, UDialogDataAsset* Shout, EShoutType ShoutType, UAudioComponent* AudioComponent);
    void PlayPitchedAsync(UDialogDataAsset* Shout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject, float shoutVolumeMultiplier);
    UAudioComponent* PlayPitched(USoundBase* Sound, UDialogDataAsset* Shout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject);
    void MixerAnnouncementLocalOnly(UObject* WorldContext, const FMixerAnnouncement& Announcement);
    void MixerAnnouncement(UObject* WorldContext, const FMixerAnnouncement& Announcement);
    int32 MissionShoutLocally(UObject* WorldContext, UDialogDataAsset* Shout);
    void MissionShout(UObject* WorldContext, UDialogDataAsset* Shout, bool bPriority);
    bool IsMissionControlSpeaking();
    void ClientShout(UPlayerCharacter* Sender, UDialogDataAsset* Shout, int32 Index);
    void ClientMixerAnnouncement(const FMixerAnnouncement& Announcement);
    void ClientMissionShout(UDialogDataAsset* Shout, int32 Index, bool bPriority);
}

class UCommnuityRewardBundle : UDataAsset
{
    TArray<FCommunityReward> Rewards;

    void AwardRewards(UObject* WorldContext);
}

class UCommnuityRewardSetup : UDataAsset
{
    TArray<UCommnuityRewardBundle*> TierRewards;

    TMap<UResourceData*, int32> GetResourcesTierOnlyReward(int32 Tier);
    TMap<UResourceData*, int32> GetResourcesReward(int32 Tier);
    void AwardTierRewards(UObject* WorldContext, int32 Tier);
}

class UCommunityGoalCategory : UDataAsset
{
    FText Title;
}

class UCommunityGoalFaction : UDataAsset
{
    FText Title;
    FText Description;
    FText ShortDescription;
    FText JoinHeader;
    FText JoinBody;
    UTexture2D* Icon;
    UTexture2D* Frame;
    FSlateColor Color;
    EFSDFaction FactionID;
}

class UCommunityGoal : UDataAsset
{
    bool TierValuesAreInitialized;
    FGuid SaveGameID;
    bool Active;
    FText Title;
    FText MetaDescription;
    UCommunityGoalCategory* Category;
    ECommunityGoalType CommunityGoalType;
    float GoalPerMemberTier1;
    float GoalPerMemberTier2;
    float GoalPerMemberTier3;
    UCommnuityRewardSetup* RewardSetup;

    float TotalTierProgress(float Value, int32 Members);
    float TierValue(ECommunityGoalTier Tier, float Value, int32 Members);
    float TierProgress(ECommunityGoalTier Tier, float Value, int32 Members);
    float TierGoal(ECommunityGoalTier Tier, int32 Members);
    int32 RewardTier(float Value, int32 Members);
    void IncrementGoal(UObject* WorldContext, float Value);
    FText GoalToText(ECommunityGoalType StatType, float Value);
    FText GetCategoryTitle();
    bool AreTiersInitialized();
}

class UCommunityGoalWrapper : UObject
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
    void InitializeGoalTierTargetValues(UCommunityGoal* goalToInitialize);
    UCommunityGoalFaction* GetPlayerCurrentFaction(UObject* WorldContext);
    void ClaimRewardMessage(UObject* WorldContext, FCommunityRewardNotification rewardNotification);
    void ClaimReward();
    void CheckUI();
}

class UControllerIconSettings : UDeveloperSettings
{
    FInputTranslationTable InputTranslationTable;
    TArray<FActionIconMapping> Xbox_KeyIcons;
    TArray<FActionIconMapping> Playstation_KeyIcons;
    TArray<FActionIconMapping> Playstation5_KeyIcons;
    TArray<FActionIconMapping> MouseKeyboard_KeyIcons;

    bool FindMouseKeyboardKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    bool FindKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    bool FindControllerKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
}

class AConvertedRobot : UEnemyDeepPathfinderCharacter
{
    UEnemyComponent* EnemyComponent;
    UPawnStatsComponent* PawnStats;
    UOutlineComponent* outline;
    UHitscanComponent* HitScan;
    USingleUsableComponent* Usable;
    USceneComponent* TurretRoot;
    USkeletalMeshComponent* TurretMesh;
    UPointLightComponent* MuzzleFlash;
    USpotLightComponent* SpotLight;
    UStaticMeshComponent* LightCone;
    UStaticMeshComponent* LaserBeam;
    USceneComponent* ShieldRoot;
    UStaticMeshComponent* InnerShield;
    UStaticMeshComponent* OuterShield;
    UAudioComponent* PulsatingSoundComp;
    UAudioComponent* LaserWarningSound;
    UDamageComponent* Damage;
    FConvertedRobotOnStateChanged OnStateChanged;
    void RobotStateChangedSig(uint8 aState);
    FConvertedRobotOnShieldChanged OnShieldChanged;
    void RobotShieldSwitchSig(bool aIsGrowing);
    FConvertedRobotOnIntroductionStart OnIntroductionStart;
    void IntroductionStarted();
    bool ForceSit;
    USoundBase* LaserSound;
    USoundBase* LastPowerDownSound;
    USoundBase* PowerUpSound;
    TWeakObjectPtr<UAudioComponent> LaserSoundComp;
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
    USoundBase* GrenadeFireSound;
    UParticleSystem* GrenadeFireParticle;
    bool IsFiring;
    float TurretSpinSpeed;
    TArray<AActor*> Parasites;
    int32 SpawnParasiteNumer;
    int32 MaxParasiteSlots;
    float ChanceToSpawnParasite;
    TSubclassOf<AParasiteEnemy> ParasiteClass;
    bool SpinTurret;
    TSubclassOf<AProjectile> SpecialAttackProjectile;
    TSubclassOf<AProjectile> FriendlyProjectile;
    bool HasLockedOn;
    USoundBase* TargetingSound;
    UAnimSequenceBase* GrenadeShotAnimation;
    float LockOnTime;
    USoundCue* ShootSound;
    float ShootSoundFadeout;
    UAudioComponent* ShootSoundInstance;
    USoundCue* ShootSoundTail;
    UParticleSystem* MuzzleEffect;
    UParticleSystem* TracerEffect;
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
    UStaticMeshComponent* TurretRotation;
    AActor* CurrentTarget;

    void UpdateGunsInsideTerrain();
    void StartBossFight();
    void ParasiteDamaged(float aDamage);
    void OnWeaponsFired(const FVector& aHitResult);
    void OnUsed(UPlayerCharacter* aUser, EInputKeys Key);
    void OnSeePawn(APawn* APawn);
    void OnRep_TeamState();
    void OnRep_Target();
    void OnRep_SpinTurret();
    void OnRep_IsIntroducting();
    void OnRep_IsFiring();
    void OnRep_IsDoingSpecialAttack();
    void OnParasiteDeath(AActor* AParasiteEnemy);
    ERobotState GetTeamState();
    FVector GetPlayerMediumPoint();
    TArray<AActor*> GetParasites();
    bool GetHasPoweredDown();
    void DestroyAttatchPoint(USceneComponent* aComponent);
    void CannonEffects();
    void BP_OnStateChanged(ERobotState TeamState);
    void BP_OnShieldChanged(bool isGrowing);
    void BP_OnInstroduce();
}

class UConvertedRobotAnimInstance : UAnimInstance
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
}

class UConvertedRobotTurretAnimInstance : UAnimInstance
{
    bool ReplaceBurstAttack;
    bool IsFiringGrenades;
    bool IsDoingSpecialAttack;
    bool ShouldFireBullets;
    bool StopFiringBullets;
    bool ShouldCannonDeploy;
}

class AEnemyAIController : UFSDAIController
{
}

class AConvertedRobotController : UEnemyAIController
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
    UBehaviorTree* BehaviourTree;
    float UpdateTargetInterval;
    float PowerDownAfterSeconds;

    void ResetCloseTimer();
}

class UCoolDownItemAggregator : UItemAggregator
{
    float CooldownDuration;
    USoundBase* AudioCoolDownFinished;
    float CooldownRemaining;
    bool CoolDownIsPaused;
    AItem* Item;

    void SetPaused(bool IsPaused);
    bool IsCoolingDown();
    float GetCoolDownProgress();
    void ActivateCoolDown(bool startPaused);
}

class UCoolDownProgressWidget : UUserWidget
{
    FCoolDownProgressStyle Style;
    TWeakObjectPtr<UObject> CoolDownObject;
    bool bIsFinished;

    void UpdateProgress(float Progress);
    void ReceiveUpdateProgress(float InProgress);
    void ReceiveInitWidget();
    void Init(UObject* InCoolDownObject, const FCoolDownProgressStyle& InStyle);
}

class UPricingTier : UDataAsset
{
    FString PriceKey;
}

class USchematicPricingTier : UPricingTier
{
}

class UCreditsResourceData : UResourceData
{
}

class UCritterManager : UActorComponent
{
    bool DisableCritters;
    float ActivationRange;
}

class UCrosshairWidget : UUserWidget
{

    void SetData(AItem* Item);
    void OnUpgraded(AItem* Item);
}

class UCrosshairAggregator : UItemAggregator
{
    FCrosshairAggregatorOnCrosshairCreated OnCrosshairCreated;
    void CrosshairCreated(UUserWidget* Crosshair);
    UUserWidget* CrosshairWidget;
    TSubclassOf<UUserWidget> CrossHairType;

    void SetCrosshair(UUserWidget* Widget);
    UUserWidget* GetOrCreateCrosshair();
}

class ACryosprayItem : UAmmoDrivenWeapon
{
    UProjectileLauncherComponent* ProjectileLauncher;
    UDamageComponent* DamageComponent;
    UStickyFlameSpawner* StickyFlames;
    UDamageComponent* AoEColdDamageComponent;
    UMotionAudioController* VelocityAudio;
    UParticleSystemComponent* FlameParticleComponent;
    bool PressurizedProjectileEnabled;
    float PressurizedProjectileDelay;
    int32 PressurizeProjectileFullCost;
    UParticleSystem* ChargeupParticles;
    UParticleSystemComponent* ChargeupParticleInstance;
    FDecalData ImpactDecal;
    float DecalDelay;
    UParticleSystem* ImpactParticles;
    UParticleSystemComponent* ImpactParticleInstance;
    TArray<FName> FlameParameterNames;
    float DamageSphereRadius;
    float MaxFlameDistance;
    float FlameGrowthPerSecond;
    float friendlyFireModifier;
    float ChargeupTime;
    float ChargeDownTime;
    bool isCharging;
    float ChargeProgress;
    bool bRepressurerising;
    float RepressurerisingDoneAtPct;
    float ChargeUpFadeOutTime;
    UFSDAudioComponent* ChargeUpAudioComponent;
    float PressureTime;
    float PressureDropMultiplier;
    float PressureGainMultiplier;
    float CurrentPressure;
    float RePressureDuration;
    float RePressureProgress;
    TArray<UItemUpgrade*> upgrades;
    bool LongReachEnabled;
    bool AoEColdEnabled;

    void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End, uint8 Power);
    void Server_TriggerAoECold();
    void Server_PreLaunchProjectile();
    void ReceiveRepressurisingChanged(bool Value);
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    void OnRep_IsCharging(bool OldValue);
    void OnProjectileSpawned(AProjectileBase* Projectile);
    void OnProjectileLaunched(const FVector& Location);
    void OnPressurizedPartileShoot();
    void OnPreProjectileLaunch();
    void All_PreLaunchProjectile();
}

class UCryoSprayAnimInstance : UAnimInstance
{
    ACryosprayItem* Weapon;
    bool IsFiring;
    float ChargeProgress;
    FRotator ChargeRotation;
    float ChargeBlend;
    float Pressure;
}

class UCustomKeyBindingLibrary : UBlueprintFunctionLibrary
{
}

class UKeyBindingSettings : UDataAsset
{
    TArray<FCustomKeySetting> KeyboardMouseButtons;
    TArray<FCustomKeySetting> ControllerButtons;
}

class UCustomRichTextDecorator : URichTextBlockDecorator
{
    URichTextBlock* RichTextBlock;
}

class UDailyDealSettings : UDataAsset
{
    TArray<FDailyDealSetup> DailyDeals;

    bool IsDailyDealBought(UObject* WorldContextObject);
    int32 GetDailyDealSeed();
    void GetDailyDeal(FDailyDeal& outDeal);
    bool CanAffordDailyDeal(UObject* WorldContextObject);
    bool BuyDailyDeal(UObject* WorldContextObject);
}

class UDamageAttackComponent : UAttackBaseComponent
{
    UDamageComponent* Damage;
}

class UDamageBonusBase : UDataAsset
{
    UDamageCondition* Condition;

    UDamageBonusBase* AddDamageBonusToComponent(TSubclassOf<UDamageBonusBase> damageBonusClass, UDamageComponent* DamageComponent);
}

class UFlatDamageBonus : UDamageBonusBase
{
    float Damage;
    UDamageClass* DamageClass;
}

class URangedFlatDamageBonus : UDamageBonusBase
{
    UCurveFloat* DamageCurve;
    UDamageClass* DamageClass;
}

class UTargetSpecificDamageBonus : UDamageBonusBase
{
    float Bonus;
    FGameplayTagQuery tagQuery;
    FName Key;
}

class UDamageConversionBonus : UDamageBonusBase
{
    UDamageClass* DamageClass;
    float ConversionPercentage;
    bool DamageIsAdded;
}

class UTargetStateDamageBonus : UDamageBonusBase
{
    ETargetStateDamageBonusType TargetState;
    float Bonus;
    UDamageClass* DamageClass;
}

class UStatusDamageBonus : UDamageBonusBase
{
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    float Bonus;
    UDamageClass* DamageClass;
}

class UStatusAndStateDamageBonus : UDamageBonusBase
{
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    TArray<ETargetStateDamageBonusType> TargetStates;
    float Bonus;
    UDamageClass* DamageClass;
}

class UPushStatusEffectDamageBonus : UDamageBonusBase
{
    TSubclassOf<UStatusEffect> StatusEffect;
    float Chance;
    bool IgnoreArmorHit;
}

class UPushDynamicStatusEffectDamageBonus : UDamageBonusBase
{
    TSubclassOf<UStatusEffect> BaseSTE;
    UStatusEffect* StatusEffect;
    float Chance;
}

class UFearAoEBonus : UDamageBonusBase
{
    float FearFactor;
    float range;
}

class UAmmoLeftDamageBonus : UFlatDamageBonus
{
    UCurveFloat* AmmoDamageCurve;
}

class UAmmoUsedDamageBonus : UDamageBonusBase
{
    float DamageBonusPerRoundFired;
}

class URandomDamageBonus : UDamageBonusBase
{
    FRandRange RandomDamageRange;
}

class UPercentDamageBonus : UDamageBonusBase
{
    float DamageMultiplier;
}

class UGatlingHotShellsBonus : UDamageConversionBonus
{
}

class UBreakIceBonus : UDamageBonusBase
{
    float DeFrostAmount;
}

class UKnockbackDamageBonus : UDamageBonusBase
{
    float KnockBackHorizontalForce;
    float KnockBackVerticalForce;
}

class UCarryElementalStatus : UDamageBonusBase
{
    float CarryBonusAmount;
    UDamageClass* CarriedClass;
}

class ULockCountSTEBonus : UDamageBonusBase
{
    int32 MinLockCount;
    bool UseTotalLockCount;
    TSubclassOf<UStatusEffect> StatusEffect;
}

class UTagDamageBonus : UDamageBonusBase
{
    TArray<UDamageTag*> Tags;
}

class USpawnOnImpactDamageBonus : UDamageBonusBase
{
    TSubclassOf<AActor> ActorToSpawn;
}

class UDamageClass : UDataAsset
{
    UPawnStat* ResistanceStat;
    float RagdollScale;
    bool BypassesShield;
    bool AffectedByFriendlyFire;
    UTexture2D* IndicatorImage;
    UDialogDataAsset* DamageShout;
}

class UDamageComponent : UActorComponent
{
    FDamageComponentOnTargetKilledEvent OnTargetKilledEvent;
    void OnEnemyKilledDelegate(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial);
    FDamageComponentOnTargetDamagedEvent OnTargetDamagedEvent;
    void OnEnemyDamagedDelegate(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysicalMaterial);
    FDamageComponentOnNoTargetHitEvent OnNoTargetHitEvent;
    void OnNoTargetHit();
    FDamageComponentOnHitDeadTarget OnHitDeadTarget;
    void OnNoTargetHit();
    EDamageComponentType DamageComponentType;
    float Damage;
    float ArmorDamageMultiplier;
    bool ShattersArmor;
    UDamageClass* DamageClass;
    float WeakpointDamageMultiplier;
    float FrozenDamageBonusScale;
    float friendlyFireModifier;
    float SelfFriendlyFireMultiplier;
    FGameplayTag FriendlyFireTag;
    bool StaggerOnlyOnWeakpointHit;
    float StaggerChance;
    float StaggerDuration;
    float FearFactor;
    TArray<UDamageBonusBase*> DamageBonuses;
    TArray<UDamageModifier*> DamageModifiers;
    TArray<UDamageTag*> DamageTags;
    bool UseAreaOfEffect;
    float RadialDamage;
    bool NoFriendlyFireFromRadial;
    UDamageClass* RadialDamageClass;
    float MinDamagePct;
    float DamageRadius;
    float MaxDamageRadius;

    void PreTestDamageConditions();
    UDamageComponent* GetDamageComponentCDO(TSubclassOf<UDamageComponent> DamageComponent);
    float GetDamage();
    void DamageTargetFromHit(const FHitResult& HitResult);
    void DamageTarget(AActor* Target, const FVector& Location, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysMat);
    void DamageArmor_Server(AActor* Target, UPrimitiveComponent* collider, int32 BoneIndex, const FVector& impactLocation);
    void DamageArmor_All(AActor* Target, UPrimitiveComponent* collider, int32 BoneIndex);
    bool ArmorSupportsLocalOnlyCall(AActor* Target);
}

class UDamageCondition : UObject
{
}

class UFalseDamageCondition : UDamageCondition
{
}

class UMultiDamageCondition : UDamageCondition
{
    TArray<UDamageCondition*> Conditions;
    bool RequireAllTrue;
}

class URandomDamageCondition : UDamageCondition
{
    float Chance;
}

class ULockCountDamageCondition : UDamageCondition
{
    int32 MinLockCount;
    bool UseTotalLockCount;
}

class ULocksRemainingDamageCondition : UDamageCondition
{
    int32 MaxLocksRemaining;
}

class UTargetStateDamageCondition : UDamageCondition
{
    ETargetStateDamageBonusType TargetState;
}

class UTargetSTEDamageCondition : UDamageCondition
{
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
}

class UTargetTagsDamageCondition : UDamageCondition
{
    FGameplayTagQuery tagQuery;
}

class UWeakpointDamageCondition : UDamageCondition
{
}

class UDirectDamageCondition : UDamageCondition
{
    EDirectDamageConditionEnum Type;
}

class UClipStatusDamageCondition : UDamageCondition
{
    int32 BulletAmount;
    bool CountBulletsLeft;
}

class UItemTemperatureDamageCondition : UDamageCondition
{
    int32 HeatThreshold;
    bool MustBeUnderThreshold;
}

class UPlayerShieldsDamageCondition : UDamageCondition
{
    FFloatInterval ShieldPercentageRequired;
}

class UPlayerHealthDamageCondition : UDamageCondition
{
    FFloatInterval HealthPercentageRequired;
}

class UCooldownDamageCondition : UDamageCondition
{
    float CoolDown;
}

class UBoltActionWeaponDamageCondition : UDamageCondition
{
    EBoltActionWeaponConditions WeaponCondition;
}

class UPlasmaCarbineDamageCondition : UDamageCondition
{
    EPlasmaCarbineConditions WeaponCondition;
    int32 Condition;
}

class UMaterialDamageMultiplierCondition : UDamageCondition
{
    FFloatInterval MultiplierRangeRequired;
    bool Invert;
}

class UDamageFunctionLibrary : UBlueprintFunctionLibrary
{

    bool IsCorrosiveDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags);
}

class UDamageModifier : UDataAsset
{
    UDamageCondition* Condition;
    TArray<FDamageModifierItem> Modifiers;
}

class UDamageSettings : UDataAsset
{
    float TemperatureChangePerColdDamagePoint;
    float TemperatureChangePerIceDamagePoint;
    float TemperatureChangePerHeatDamagePoint;
    float TemperatureChangePerFireDamagePoint;
    float TemperatureShockActivationWindow;
    float FrozenDamageBonus;
    TSubclassOf<UStatusEffect> EnemyOnFireStatusEffect;
    TSubclassOf<UStatusEffect> PlayerOnFireStatusEffect;
    TSubclassOf<UStatusEffect> TemperatureShockFromFrozenStatusEffect;
    TSubclassOf<UStatusEffect> TemperatureShockFromBurningStatusEffect;
    UDamageComponent* ArmorShatterDamage;
    UNiagaraSystem* ArmorShatterEmitter;
    USoundCue* ArmorShatterSound;
    TArray<FDecalData> ImpactDecals;
    FRuntimeFloatCurve ArmorToArmorDamageBreakingCurve;
    UDamageTag* DetonateFrozen;
    UDamageTag* DetonateOnFire;
    UDamageTag* DirectHit;
    UDamageTag* MeltTarget;
    UDamageTag* IgnoreBodypartDamageReduction;
}

class UDamageSubsystem : UGameInstanceSubsystem
{
    TArray<FDamageSubsystemItem> Items;
}

class UDamageTag : UDataAsset
{
}

class UDanceSettings : UDataAsset
{
    TArray<FDanceItem> DanceMoves;
}

class UDashPoints : UActorComponent
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
    void OnParentDeath(UHealthComponentBase* Health);
    FVector GetDashPoint(AActor* fromTarget, bool& success);
}

class UDeadStateComponent : UCharacterStateComponent
{
    float respawnDelay;

    void SetDeathParameters(float respawnDelay, float effectDelay, UAnimMontage* deathMontage, UParticleSystem* deathEffect, bool useAnimationTimeAsRespawnTime);
}

class UDealWidget : UUserWidget
{

    void UpdateDealText();
}

class UFSDDebrisSettings : UDeveloperSettings
{
    FSoftObjectPath DefaultInfluencerDensityCurve;
    FSoftObjectPath DefaultInfluencerSizeCurve;
}

class UCSGTriangleMapper : UDataAsset
{
    bool Enabled;
    UTerrainMaterial* AttachToMaterial;
    TArray<UTerrainType*> AttachToTypes;
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
}

class UDebrisBase : UCSGTriangleMapper
{
    UObject* CaveInfluencer;
    FRuntimeFloatCurve InfluencerDensityCurve;
    FRuntimeFloatCurve InfluencerSizeCurve;
    UCurveFloat* CaveInfluenceCurve;
    UCurveFloat* CaveInflunceSizeCurve;
}

class UDebrisCarved : UDebrisBase
{
    EDebrisCarvedType carverType;
    TArray<FUDebrisCarveMesh> Meshes;
    UTerrainMaterial* TerrainMaterial;
    FDebrisInfluence CaveInfluenceToAdd;
    ECarveFilterType Filter;
    float ExpensiveNoise;
    CarveOptionsCellSize CarveCellSize;
    int32 MinNumCarves;
    int32 MaxNumCarves;
    float CarveOffsetRadius;
    TSubclassOf<AActor> SpawnAttachClass;
    float AttachSpawnOffsetDistance;
}

class UDebrisActorComponent : USceneComponent
{
    bool Enabled;
}

class UDebrisItemComponent : UDebrisActorComponent
{
    UDebrisPositioning* Debris;
    TArray<FDebrisItemActorItem> Actors;
    EDebrisItemPass ItemPass;
    float InfluenceRange;
    float MinDistanceToImportantLocations;
    bool UseAmount;
    FIRandRange Amount;
    int32 AmountSearchMultiplier;
}

class UDebrisDataComponent : UDebrisActorComponent
{
    UDebrisBase* Debris;
}

class UDebrisVeinComponent : UDebrisActorComponent
{
    UTerrainMaterial* Material;
    EDebrisCarvedType carverType;
    UVeinResourceCreator* VeinCreator;
}

class UDebrisPatchComponent : UDebrisActorComponent
{
    UTerrainMaterial* Material;
    UPatchResourceCreator* PatchCreator;
}

class UInfluencerComponent : UDebrisActorComponent
{
    FRuntimeFloatCurve ProbabilityCurve;
    FRuntimeFloatCurve ScaleCurve;
}

class UDebrisProbabilityComponent : UDebrisActorComponent
{
    FRandRange ProbabilityRange;
    bool IsProbabilityShared;
}

class ADebrisDataActor : AActor
{
}

class UDebrisInstances : UHierarchicalInstancedStaticMeshComponent
{
    UDebrisBase* DebrisBase;
    int32 DebrisIndex;
}

class UDebrisMesh : UDebrisBase
{
    TArray<FDebrisStaticMesh> Meshes;
    UMaterialInterface* CommonMaterial;
    FText InGameName;
    FName GemTrackerName;
    FText InGameDescription;
    float StartCullDistance;
    float EndCullDistance;
}

class UDebrisCellNoise : UDataAsset
{
    int32 Seed;
    FVector CellSize;
    int32 NumValues;
    FVector InvCellSize;
    bool Initialized;
}

class UDebrisPositioning : UDebrisBase
{
}

class UDebrisSet : UDataAsset
{
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
}

class UDebrisStaticCarved : UDebrisBase
{
    EDebrisCarvedType carverType;
    TArray<FUDebrisStaticCarveMesh> Meshes;
    UTerrainMaterial* TerrainMaterial;
    FDebrisInfluence CaveInfluenceToAdd;
    ECarveFilterType Filter;
    float CarveOffsetRadius;
    TSubclassOf<AActor> SpawnAttachClass;
    float AttachSpawnOffsetDistance;
}

class UCustomItemPlacementHandling : UInterface
{
}

class UInfluencerSpawnComponent : USceneComponent
{
    UCaveInfluencer* Influencer;
    float range;
}

class UDecalManager : UActorComponent
{

    void SpawnDecal(const FVector& Location, const FVector& Normal, UFSDPhysicalMaterial* PhysMat);
}

class ADeepCSGWorld : AActor
{
    UTerrainMaterial* DebugCarveInsideTerrainMaterial;
    UTerrainMaterial* DebugCarveOutsizeTerrainMaterial;
    UTerrainMaterial* DebugCarveEdgeTerrainMaterial;
    UTerrainMaterial* GoldTerrainMaterial;
    UTerrainMaterial* MOMTerrrainMaterial;
    UTerrainMaterial* NitraTerrrainMaterial;
    UTerrainMaterial* EmptyTerrainMaterial;
    UTerrainMaterial* DefaultBurntTerrainMaterial;
    UTerrainMaterial* DefaultHardRockMaterial;
    UTerrainMaterial* DefaultBedRockMaterial;
    UTerrainType* GoldTerrainType;
    UTerrainType* MOMTerrainType;
    UTerrainType* RockTerrainType;
    UTerrainType* CrystalTerrainType;
    UTerrainType* EmptyTerrainType;
    UTerrainType* DirtTerrainType;
    UTerrainType* DefaultBurntTerrainType;
    UTerrainMaterialsCollection* TerrainMaterials;
    TArray<UDebrisSet*> StandardDebrisSets;
    TArray<UDebrisBase*> AddedDebris;
    TArray<UDebrisBase*> DebrisLevelGenerationCarved;
    TArray<UDebrisBase*> DebrisLargeCarved;
    TArray<UDebrisBase*> DebrisSmallCarved;
    TArray<UDebrisBase*> DebrisMeshes;
    UMaterialInterface* DefaultScannerMaterial;
    ADebrisDataActor* DebrisActorInstance;
    int32 DebrisActorIndex;
    AProceduralSetup* ProceduralSetup;
    TArray<UObject*> TerrainMaterialAssets;
    UAsyncPathRequests* AsyncPathRequests;
    FDeepCSGWorldOnBaseLayerCommitDone OnBaseLayerCommitDone;
    void TerrainBaseDone();
    FDeepCSGWorldOnBaseLayerFinalCommitDone OnBaseLayerFinalCommitDone;
    void TerrainBaseDone();
    TArray<AActor*> TerrainAttachedActors;
    TArray<TWeakObjectPtr<UObject>> TerrainListeners;
    TArray<UDebrisBase*> RegisteredDebrisList;
    TArray<FDebrisWhenCarving> DebrisWhenCarvingList;
    TArray<UDebrisInstances*> DebrisInstanceList;
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowAlwaysScannerComponents;
    TArray<TWeakObjectPtr<UPrimitiveComponent>> FogOfWarScannerComponents;
    TArray<UDebrisBase*> DebrisHandles;
    FTerrainLateJoinData LateJoinData;
    TArray<FEncodedChunkId> visibleChunks;

    void UnRegisterScannerComponent(UPrimitiveComponent* Component);
    void TerrainOp_RemoveFloating(const FRemoveFloatingIslandOperationData& Data);
    void TerrainOp_PickAxe(const FPickaxeDigOperationData& Data);
    void TerrainOp_Melt(const FMeltOperationData& Data);
    void TerrainOp_Explode(const FGrenadeExplodeOperationData& Data);
    void TerrainOp_Drill(const FDrillOperationData& Data);
    void TerrainOp_CarveSTLMesh(const FCarveWithSTLMeshOperationData& Data);
    void TerrainOp_CarveSplineSegment(const FSplineSegmentCarveOperationData& Data);
    void TerrainOp_CarveCollider(const FCarveWithColliderOperationData& Data);
    void TerrainMaterialDataLoaded();
    void SetVisibleToScanner(const FVector& Center, const FVector& range);
    void SelectDebrisSettings();
    void ResetEntireWorld();
    void RemoveDebrisInstance_TerrainOp2(int32 instance, int32 Component);
    void RemoveDebrisInSphere(const FVector& Position, float Radius, bool onlyFragile, bool alsoDurable);
    void RegisterScannerComponent(UPrimitiveComponent* Component, bool useFogOfWar);
    bool Raycast(FVector Start, FVector Direction, float MaxDistance, FCSGRaycastHitInfo& HitInfo, ELandscapeCellFilter Filter);
    bool Linecast(FVector Start, FVector End, FCSGRaycastHitInfo& HitInfo, ELandscapeCellFilter Filter);
    bool IsPositionVisibleToScanner(const FVector& Pos);
    bool IsPointInsideTerrain(const FVector& Pos);
    bool IsComponentRegisteredWithScanner(UPrimitiveComponent* Component);
    int32 GetTerrainHash();
    int32 GetShadowQuality();
    ADebrisDataActor* GetDebrisDataActor();
    void GetAllTerrainActorsAroundPoint(const FVector& Center, const FVector& range, TArray<AActor*>& TerrainActors);
    void GenerateAllMeshes();
    void FinishGeneration_Blocking();
    float FindTotalVolumeOfMaterialInWorld(UTerrainMaterial* Material);
    void CarveWithSTLMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    void CarveWithSTLMeshUsingTransform(USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious);
    void CarveWithSTLMesh_Wait(ADeepCSGWorld* CSGWorld, USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    void CarveWithSTLMesh(USTLMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious);
    void CarveWithStaticMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    void CarveWithStaticMeshUsingTransform(UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, EPreciousMaterialOptions Precious);
    void CarveWithStaticMesh(UStaticMeshCarver* MeshCarver, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious);
    void CarveWithSplineSegments(const TArray<FCarveSplineSegment>& Segments, UTerrainMaterial* Material, ECarveFilterType CarveFilter, EPreciousMaterialOptions Precious);
    void CarveWithSplineSegment(const FVector& SplineStart, const FVector& SplineStartTangent, const FVector& SplineEnd, const FVector& SplineEndTangent, float Radius, UTerrainMaterial* Material, ECarveFilterType CarveFilter, EPreciousMaterialOptions Precious);
    void CarveWithMeshUsingTransform_Wait(ADeepCSGWorld* CSGWorld, UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, float ExpensiveNoise, EPreciousMaterialOptions Precious, FLatentActionInfo LatentInfo);
    void CarveWithMeshUsingTransform(UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, const FTransform& Transform, float ExpensiveNoise, EPreciousMaterialOptions Precious, CarveOptionsCellSize CarverSize);
    void CarveWithMesh_Wait(ADeepCSGWorld* CSGWorld, UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, FLatentActionInfo LatentInfo);
    void CarveWithMesh(UStaticMesh* StaticMesh, UTerrainMaterial* Material, ECarveFilterType CarveFilter, FVector Pos, FQuat Orientation, FVector Scale, EPreciousMaterialOptions Precious);
    float CalcApproximateTerrainDensity(FVector Pos, float Radius);
    void BaseLayerCommitFinal(bool blocking);
    void BaseLayerCommit(bool blocking, bool scheduleTesselation);
    void AttachActorToTerrain(AActor* Actor, FVector Pos);
    void ApplyBaseDebrisCarvers(const TArray<UDebrisBase*>& Carvers);
}

class USavableDataAsset : UDataAsset
{
    bool EnableDangerousSaveGameIDEditing;
    FGuid SaveGameID;
    UBuildRestriction* BuildRestriction;

    FGuid GetSavegameID();
}

class UDeepDiveTemplate : USavableDataAsset
{
    TArray<UDifficultySetting*> Difficulties;
    TArray<FDeepDiveTemplateItem> missions;
    TArray<ESchematicType> Rewards;
    int32 CreditsPerPrimaryObjective;
    int32 CreditsPerSecondaryObjective;
    int32 XPPerPrimaryObjective;
    int32 XPPerSecondaryObjective;
    float HazardBonus;
    FRandInterval MutatorCount;
    FRandInterval WarningCount;

    ESchematicType GetStageRewardType(int32 stageIndex);
}

class UDeepDiveSettings : UDataAsset
{
    UDeepDiveTemplate* NormalTemplate;
    UDeepDiveTemplate* HardTemplate;
    TArray<UMutator*> BaseMutators;
    TArray<UMissionMutator*> Mutators;
    TArray<UMissionWarning*> Warnings;
    TArray<UDialogDataAsset*> DeepDiveMissionCompleteShouts;
    TArray<FDeepDiveLoaderSequence> LoaderSequnces;
    UMissionNameBank* DeepDiveNameBank;
}

class UDeepDiveFunctionLibrary : UBlueprintFunctionLibrary
{

    bool IsDeepDiveElite(UObject* WorldContextObject, UDeepDive* DeepDive);
    bool GetHasEverCompletedDeepDive(UObject* WorldContextObject, UDeepDiveTemplate* DeepDive);
}

class UDeepDiveManager : UObject
{
    FDeepDiveManagerOnDeepDivesRefresh OnDeepDivesRefresh;
    void DeepDiveRefreshDelegate();
    UDeepDive* ActiveNormalDeepDive;
    UDeepDive* ActiveHardDeepDive;
    UDeepDive* ActiveDeepDive;
    UGeneratedMission* CurrentMission;
    float currentDepth;
    TMap<int32, FDeepDiveBank> DeepDiveBank;
    int32 NumFailedRequests;
    int32 BackendDataValid;
    int32 BackendSeed;
    bool LockSeed;
    FDateTime BackendExpirationTime;
    FDateTime LastRequestTime;

    void StartDeepDive(UDeepDive* DeepDive);
    void ReInitialize();
    void MarkGivenRewards();
    bool IsEliteDeepDive(UGeneratedMission* mission);
    UDeepDive* GetDeepDiveFromMission(UGeneratedMission* mission);
    UGeneratedMission* GetCurrentSingleMission();
    int32 GetCurrentDeepDiveStage();
    UDeepDive* GetActiveNormalDeepDive();
    UDeepDive* GetActiveHardDeepDive();
    UDeepDive* GetActiveDeepDive();
    void DeepDiveRefreshDelegate__DelegateSignature();
    bool CompleteCurrentSingleMission();
    bool AreAllSelectedClassesQualified();
}

class UDeepDive : UObject
{
    TArray<UGeneratedMission*> missions;
    UBiome* Biome;
    TArray<FDeepDiveRewardItem> GivenRewards;
    int32 MissionsCompleted;
    TArray<int32> StagesCompleted;
    int32 CurrentMissionIndex;
    UDeepDiveTemplate* Template;
    FText DeepDiveName;
    int32 BestTime;

    bool IsCompleted();
    bool HasCompletedStage(int32 stageIndex);
    FDeepDiveRewardItem GetGivenRewardAtStage(int32 stageIndex);
}

class UAsyncPathRequestsInterface : UInterface
{
}

class UAsyncPathRequests : UActorComponent
{
    TArray<TWeakObjectPtr<UObject>> RequestListeners;
}

class UDeepPathfinderSceneComponent : USceneComponent
{
}

class AFlyingEnemyDeepPathfinderCharacter : UEnemyDeepPathfinderCharacter
{
    UPhysicalMaterial* FrozenMaterial;
    UPhysicsAsset* FrozenAsset;
    USoundCue* FrozenDeathSound;
    UParticleSystem* FrozenDeathparticles;

    void TriggerFrozenRagdoll();
    void OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BP_FreezeImpact();
}

class UFrozenPawnImpactComponent : UActorComponent
{
    FFrozenPawnImpactComponentOnStartFallingEvent OnStartFallingEvent;
    void Delegate();
    FFrozenPawnImpactComponentOnFreezeImpactEvent OnFreezeImpactEvent;
    void Delegate();
    UPhysicalMaterial* FrozenMaterial;
    UPhysicsAsset* FrozenAsset;
    USoundCue* FrozenDeathSound;
    UParticleSystem* FrozenDeathparticles;

    void TriggerFrozenRagdoll();
    void OnFrozen(bool frozen);
    void OnFreezeImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
}

class UDeepPathfinderMovement : UPawnMovementComponent
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
    ADeepCSGWorld* CSGWorld;
    uint32 PathMovedDist;
    uint32 LocalPathMovedDist;
    FDeepRepPath Path;
    UFakeMoverSettings* MoveSettings;
    AActor* TargetActor;
    int32 CurrentPathIndex;
    float CurrentPathFraction;
    FVector Destination;
    AActor* DestinationActor;
    float AcceptanceRadius;
    bool OnlyPartPath;
    float PauseMovementTime;
    EDeepMovementMode MoveMode;
    UPawnStatsComponent* PawnStats;
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

    void UpdateTargetActor(AActor* NewTarget);
    void UpdateDestination(const FVector& Dest);
    void UnPauseMovement();
    void TeleportTo(const FVector& destLoc, const FRotator& destRot);
    void StopMove();
    void StopAttackStance();
    bool StartMoveToActor(AActor* Dest, float AcceptanceRadius);
    bool StartMoveTo(const FVector& Dest, float AcceptanceRadius);
    bool StartFleeFrom(const FVector& dangerPos, float Distance);
    void StartFakePhysicsMoveSet(UFakeMoverSettings* MoveSettings);
    void StartFakePhysics(const FVector& Vel);
    void StartAttackStance(const FVector& stancePos);
    void SnapToPathfinder();
    void SetSlowDownAngles(const float Min, const float Max);
    void SetMaxSpeed(const float Speed);
    void SetHandleRotation(const bool flag);
    void SetFreezeAlignment(bool Freeze);
    void SetControlledExternally(bool controlled);
    void PauseMovement(float Time);
    bool PathExistTo(const FVector& Dest);
    bool PathExistsBetween(const FVector& From, const FVector& to);
    void OnRep_PathMovedDist(uint32 lastPathMovedDist);
    void OnRep_Path(const FDeepRepPath& oldPath);
    void OnRep_MoveSettings(const UFakeMoverSettings* MoveSettings);
    bool IsFreezeAlignmentSet();
    float GetVerticalAngleSpeed();
    void GetRandomSpawnPointAtApproximateDistance_Async(const FVector& Origin, float Distance, bool& success, FVector& outPos, FLatentActionInfo LatentInfo);
    void GetRandomReachablePointAtApproximateDistance_Async(const FVector& Origin, float Distance, bool& success, FVector& outPos, FLatentActionInfo LatentInfo);
    bool GetRandomReachablePointAtApproximateDistance(const FVector& Origin, float Distance, FVector& outPos);
    FVector GetPathForwardDirection();
    DeepPathFinderType GetPathfinderType();
    DeepPathFinderSize GetPathfinderSize();
    EDeepMovementState GetMovementState();
    bool GetIsStrafing();
    float GetHorizontalAngleSpeed();
    UFakeMoverSettings* GetCurrentFakePhysicsMoveSet();
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
}

class ADefenseEvent : AGameEvent
{
    float DefendDuration;
    TSubclassOf<UWidget> DefendWidget;
    float Progress;

    void OnRep_Progress(float OldValue);
}

class ADefensePointActor : AActor
{
    TSubclassOf<AGameEvent> DefenseEvent;
    AGameEvent* ActiveDefenceEvent;
    EDefendPointState DefendState;
    USingleUsableComponent* DefendPointUsable;

    void SetState(EDefendPointState State);
    void OnRep_DefendState();
    void OnDefensePointActivated(UPlayerCharacter* Player, EInputKeys Key);
    void DefenseStart();
    void DefenseFail();
    void DefenseComplete();
}

class UDefenseObjective : UObjective
{
    int32 DefensePoints;
    int32 PointsDefended;
    TArray<TSoftClassPtr<ADefensePointActor>> ObjectiveDefenseClasses;
    TArray<ADefensePointActor*> ActiveObjectiveDefenseActors;
    UDebrisPositioning* DebrisPositioning;

    void PointDefended();
    void OnRep_PointsRepaired();
    void OnDefensePointsSpawned();
}

class UDestinationActorComponent : UActorComponent
{
    TWeakObjectPtr<AActor> DestinationActor;

    float GetDistToDestinationActor();
}

class ADetPack : AActor
{
    float UpgradedStaggerChance;
    float UpgradedStaggerDuration;
    float UpgradedFearFactor;
    float VisualDamageRadius;
    float IncreasedFearRadius;
    float IncreasedStaggerRadius;
    UProjectileMovementComponent* Movement;
    UExplosionComponent* Explosion;
    USingleUsableComponent* UseComp;
    USimpleHealthComponent* SimpleHealth;
    ADetPackItem* Detonator;
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
    void OnDetPackPickedUp(UPlayerCharacter* User, EInputKeys Key);
    void OnDetPackDeath(UHealthComponentBase* HealthComponent);
}

class ADetPackItem : UAnimatedItem
{
    TSubclassOf<ADetPack> DetPackClass;
    TSubclassOf<AItem> LoadoutProxy;
    UAnimMontage* FPThrowMontage;
    UAnimMontage* TPThrowMontage;
    UAnimMontage* FP_DetonateAnim;
    UAnimMontage* WPN_DetonateAnim;
    UAnimMontage* FP_EquipDetonatorAnimation;
    UAnimMontage* WPN_EquipDetonatorAnimation;
    USkeletalMeshComponent* DetonatorFPMesh;
    USkeletalMeshComponent* DetonatorTPMesh;
    UForceFeedbackEffect* DetonatorTriggerForceFeedback;
    UCapacityHoldingItemAggregator* Capacity;
    float SupplyStatusWeight;
    float ThrowVelocity;
    float EnheiritOwnerVelocityScale;
    float ThrowAngle;
    float CooldownAfterThrow;
    float CooldownAfterDetonation;
    float ThrowDelay;
    float ThrowZOffset;
    UDialogDataAsset* ShoutDetPackPlaced;
    UDialogDataAsset* ShoutOutOfAmmo;
    float CooldownLeft;
    TArray<ADetPack*> ThrownPacks;
    TArray<UItemUpgrade*> DetPackUpgrades;
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
}

class UDialogDataAsset : UDataAsset
{
    bool Enabled;
    bool AudioOnly;
    float ShoutDelay;
    float ShoutCoolDown;
    float ShoutChance;
    TArray<FDialogStruct> Entries;
    TArray<USoundSubmixBase*> SubmixSends;
    TArray<int32> ShuffledIndices;

    int32 SelectIndex(UObject* WorldContext);
    bool SelectEntry(UObject* WorldContext, FDialogStruct& Dialog);
    FDialogStruct GetShout(int32 Index);
}

class UDifficultyManager : UActorComponent
{
    float MinModifierEnemyCount;
    float MinModifierAttackCooldown;
    float MinModifierSpeed;
    int32 ForcedPlayerCount;
    AFSDGameMode* GameMode;
    AFSDGameState* GameState;

    UDifficultySetting* SelectDifficulty(int32 Index);
    float GetSmallEnemyDamageResistance();
    float GetPointExtractionScaler();
    float GetExtraLargeEnemyDamageResistanceD();
    float GetExtraLargeEnemyDamageResistanceC();
    float GetExtraLargeEnemyDamageResistanceB();
    float GetExtraLargeEnemyDamageResistance();
    float GetEnemyDamageResistance();
    float GetEnemyDamageModifier();
    float GetEnemyCountModifier();
    UDifficultySetting* GetCurrentDifficulty();
    float GetBossDifficultyScaler();
}

class UDifficultySetting : USavableDataAsset
{
    FText DifficultyName;
    FText ShortDifficultyName;
    FText UnlockRequirementDescription;
    TSubclassOf<UCampaign> CampaignRequirement;
    TSubclassOf<UCampaign> SelectedByDefaultCampaignRequirement;
    float EnvironmentalDamageModifier;
    TArray<float> ExtraLargeEnemyDamageResistance;
    TArray<float> ExtraLargeEnemyDamageResistanceB;
    TArray<float> ExtraLargeEnemyDamageResistanceC;
    TArray<float> ExtraLargeEnemyDamageResistanceD;
    TArray<float> EnemyDamageResistance;
    TArray<float> SmallEnemyDamageResistance;
    TArray<float> EnemyDamageModifier;
    TArray<float> EnemyCountModifier;
    float BossDifficultyScaler;
    float PointExtractionScaler;
    FRandInterval EncounterDifficulty;
    FRandInterval StationaryDifficulty;
    float SpecialEncounterModifier;
    float HazardBonus;
    float friendlyFireModifier;
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
    TArray<UMissionStat*> MissionCompletedStats;
    bool UseSharedHealthPool;
    float HeathRegenerationMax;
    float ReviveHealthRatio;
    float EliteChanceModifier;
    float EliteCooldown;
    int32 MaxActiveElites;

    bool IsUnlocked(UObject* WorldContext);
    float AddHazardBonus(float BaseValue);
}

class UDiscordWrapper : UObject
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
}

class UDoubleDrillAggregator : UCapacityBasedItemAggregator
{
}

class ADualAnimatedItem : AItem
{
    UAnimInstance* FPAnimInstance;
    UPlayerAnimInstance* TPAnimInstance;
    USkeletalMeshComponent* FPRMesh;
    USkeletalMeshComponent* FPLMesh;
    USkeletalMeshComponent* TPRMesh;
    USkeletalMeshComponent* TPLMesh;
    UAnimMontage* FP_EquipAnimation;
    UAnimMontage* TP_EquipAnimation;
    float EquipDuration;
    UItemCharacterAnimationSet* CharacterAnimationSet;

    USkeletalMeshComponent* GetRItemMesh();
    USkeletalMeshComponent* GetLItemMesh();
}

class ADoubleDrillItem : UDualAnimatedItem
{
    UFirstPersonParticleSystemComponent* FP_Left_DrillParticles;
    UFirstPersonParticleSystemComponent* FP_Right_DrillParticles;
    UDamageComponent* DamageComponent;
    UFSDAudioComponent* AudioComponent;
    UDoubleDrillAggregator* Aggregator;
    UAnimMontage* FPMineMontage;
    UAnimMontage* TPMineMontage;
    UAnimMontage* FPOverheat;
    UAnimMontage* TPOverheat;
    UAnimMontage* FPGunsling;
    UAnimMontage* TPGunsling;
    FName MiningSpeedAudioParamterName;
    UParticleSystem* DrillParticles;
    UForceFeedbackEffect* DrillRumble;
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
    float ArmorDamageMultiplier;
    UDamageClass* DamageClass;
    float friendlyFireModifier;
    float MaxFuel;
    float Fuel;
    float FuelUsePerDig;
    float FuelUsePerMelee;
    float SupplyStatusWeight;
    UDialogDataAsset* ShoutOutOfFuel;
    TArray<FHitResult> HitCache;
    TArray<FDoubleDrillDamageItem> DamageCache;
    float DrillParticlesDuration;
    bool IsMining;
    bool IsGunslinging;

    void Server_StopMining();
    void Server_StartMining();
    void Server_DoDamage(const TArray<FDoubleDrillDamageItem>& Targets);
    void Server_DigBlock(FVector_NetQuantize Start, FVector_NetQuantize End);
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
    void OnStopDrilling();
    void OnStartDrilling();
    void OnRep_SimulatingMining();
    void OnRep_IsGunslinging();
    void OnDrillParticlesTimerElapsed();
    void Client_Resupply(float percentage);
    void BP_OnDrillDamage();
    void All_SimulateDigDebris(FVector_NetQuantize Position, int32 DebrisIndex);
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32 Material);
    void All_SimulateDamage(const TArray<FDoubleDrillDamageItem>& Targets);
}

class UDoubleDrillAnimInstance : UAnimInstance
{
    float DrillSpeed;
    bool IsMining;
    bool IsGunslinging;
    ADoubleDrillItem* Item;
}

class UDownedStateComponent : UCharacterStateComponent
{
    FDeathIntroSettings Intro;
    float DownedHealthLossPerSecond;
    float TerrainRemovedFallThreshold;
    bool DownedBombActive;
    UDamageComponent* DownedBombDamage;
    FDownedStateComponentOnEnableDownedBombUIEvent OnEnableDownedBombUIEvent;
    void EnableDownedBombUIDelegate(bool Active);

    void TriggerDownedBombDamage();
    void Server_TriggerDownedBomb();
    void Receive_TriggerDownedBomb();
    UDamageComponent* CreateDownedBombDamage(TSubclassOf<UDamageComponent> DamageClass);
}

class ADrinkableActor : AActor
{
    UDrinkableDataAsset* DrinkableData;

    void Pickup(UPlayerCharacter* byCharacter);
    void OnRep_DrinkableData();
    void Fill();
}

class UDrinkableDataAsset : USavableDataAsset
{
    FText DrinkableName;
    FText DrinkableDescription;
    int32 DrinkablePrice;
    TSoftObjectPtr<UTexture2D> DrinkableIcon;
    int32 RequiredPlayerRank;
    bool ParticipatesInFreeBeerEvent;
    EDrinkableAlcoholStrength AlcoholStrength;
    UDrinkableDataAsset* SupporterEdition;
    bool bPlayFireworks;
    UMissionStat* StatConsumed;
    UMissionStat* StatRoundOrdered;
    TSoftClassPtr<ADrinkableActor> DrinkableActorClass;
    TSoftClassPtr<ADrinkableItem> DrinkableItemClass;
    UDialogDataAsset* OrderShout;
    UDialogDataAsset* OrderCheeringShout;
    UDialogDataAsset* DrinkSaluteShout;
    UTemporaryBuff* buff;
    TSoftClassPtr<UDrinkEffectComponent> DrinkEffect;
    TMap<UResourceData*, int32> UnlockCost;
    TMap<UResourceData*, int32> PurchaseCost;

    bool TryUnlockSpecialDrinks(UObject* WorldContext);
    bool TryUnlockDrink(UObject* WorldContext);
    bool TryPurchaseDrink(UObject* WorldContext);
    void OnRoundOrdered(UPlayerCharacter* Character);
    bool MustBeUnlocked();
    bool IsUnlocked(UObject* WorldContext);
    bool IsDrinkFree(UObject* WorldContext);
    bool HasSupporterEdition();
    UTexture2D* GetDrinkableIcon();
    UDrinkableDataAsset* GetDrinkableEdition(UObject* WorldContext, UPlayerController* Player);
    bool AreSpecialDrinksUnlocked(UObject* WorldContext);
}

class UDrinkEffectComponent : UActorComponent
{
    float BeerEffectDurationSeconds;
    bool AutoDestroy;
    bool EffectIsActive;

    void StopEffect();
    void OnStopEffect();
    void OnStartEffect(UPlayerCharacter* Character);
    void OnChangedCharacter(UPlayerCharacter* changedToCharacter, TSubclassOf<UObject> DrinkEffectClass);
}

class ADrinkableItem : UAnimatedItem
{
    UDrinkableDataAsset* DrinkableData;

    void OnRep_DrinkableData();
    void Consume();
    void ClientConsumed();
    bool CheckCanSalute();
}

class UDrinkSettings : UDataAsset
{
    TArray<FBarleySpawnItem> BarleySpawns;
    FRandInterval BarleyAmount;
    TMap<UResourceData*, int32> SpecialBeerUnlockCost;
    TArray<UDrinkableDataAsset*> Drinkables;

    TArray<UDrinkableDataAsset*> GetBarDrinkables(UObject* WorldContext, bool IncludeDailySpecial, bool includeNotUnlocked, bool includePlayerRankTooLow);
    UDrinkableDataAsset* GetBarDailySpecial(UObject* WorldContext);
}

class UDroneAbillityStatsComponent : UActorComponent
{
    bool UseOwnArmorDamageMultiplier;
}

class ADroneCharacter : UDeepPathfinderCharacter
{
    UHealthComponent* HealthComponent;
    UOutlineComponent* OutlineComponent;
    USimpleObjectInfoComponent* ObjectInfo;
}

class UDroneDisplayActionComponent : USceneComponent
{
    UTextRenderComponent* DisplayText;

    void SetMode(EDroneActions droneAction);
}

class ADroneFlame : AActor
{
    UParticleSystemComponent* FlameParticles;
    UDamageComponent* Damage;
    TArray<FName> FlameParameterNames;
    TSubclassOf<UStatusEffect> OnFireStatusEffect;
    float DamageTickRate;
    float Duration;
    float FlameDiameter;
    float range;
}

class UDroneMiningToolBase : UActorComponent
{
    FDroneMiningToolBaseHitSomething HitSomething;
    void MineHitEvent(UTerrainMaterial* TerrainMaterial, const FVector& Location);
    float range;
    float SameHitDistance;
    float MineRadius;
    int32 MineStrength;

    void StopMining();
    void StartMining();
    void SpawnEffects(UTerrainMaterial* aTerrainMaterial, bool aParialHit, FVector_NetQuantize aLocation, FVector_NetQuantize aImpactNormal);
}

class UDroneUseComponent : UActorComponent
{
    FDroneUseComponentOnUsed OnUsed;
    void DroneFinishedUsing(int32 TimesUsed);
    FDroneUseComponentOnBeginUse OnBeginUse;
    void DelegateEvent();
    FDroneUseComponentOnStopUse OnStopUse;
    void DelegateEvent();
    FDroneUseComponentOnProgress OnProgress;
    void DroneUseProgress(float Progress);
    UDialogDataAsset* BoscoLaserpointerShout;
    TWeakObjectPtr<USingleUsableComponent> SyncToUsable;
    float Progress;
    float useDuration;
    bool ResetOnFail;
    bool CanUse;

    void SyncedUsableUserCountChangedResponse(int32 userCount);
    void SyncedUsableUsedResponse(UPlayerCharacter* User, EInputKeys Key);
    void SyncedUsableBeginUseResponse(UPlayerCharacter* User, EInputKeys Key);
    void SetUseDuration(float useDuration);
    void SetCanUse(bool CanUse);
    float GetProgress();
    void EndUse();
    void BeginUse();
}

class ADropPod : AActor
{
    float DropHeight;
    FVector TargetLocation;
    UAutoCarverComponent* AutoCarver;
    UCurveFloat* DepartCurve;
    float CarverRotationSpeed;
    FVector CarverScale;
    float DepartureTime;
    FVector StartLocation;
    EDropPodState State;
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
    ADropPod* DropToMission(UObject* WorldContextObject, TSubclassOf<ADropPod> podClass, const FVector& Location);
    void Depart();
}

class AFSDMiningHead : ADropPod
{
    UResourceBank* ResourceBank;
}

class UDropToTerrainComponent : UActorComponent
{
    float FallVelocity;
    float TerrainTraceMaxDistance;
    FDropToTerrainComponentOnFallToTerrainStateChanged OnFallToTerrainStateChanged;
    void OnIsFallingToTerrainChanged(bool IsFalling);
    FVector CurrentLocation;
    FVector DropTarget;
    bool IsDetecting;

    void StopDropDetection(bool stopFalling);
    void SetParentPositionOnAll(FVector CurrentParentLocation);
    void OnTerrainRemoved();
    void BeginDropDetection();
}

class ADualWieldWeapon : UAmmoDrivenWeapon
{
    UFirstPersonSkeletalMeshComponent* FPMeshLeft;
    USkeletalMeshComponent* TPMeshLeft;
    UAnimMontage* WPN_Left_Reload;
    UAnimMontage* WPN_Left_TP_Reload;
    UFXSystemAsset* CasingParticlesLeft;
    FName MuzzleLeft;
}

class UDualWieldAnimInstance : UAnimInstance
{
}

class ADualMachinePistols : UDualWieldWeapon
{
    TSubclassOf<UStatusEffect> EmptyClipStatusEffect;

    void Server_TriggerStatusEffect();
}

class UDynamicReverbComponent : UActorComponent
{
    float LargeCaveValue;
    float MediumCaveValue;
    float SmallCaveValue;
    float FadeTime;
    float Priority;
    float TunnelAmbienceFadeIn;
    float TunnelAmbienceFadeOut;
    UAudioComponent* TunnelSoundInstance;

    void TunnelTimerTriggered();
    void TimerTriggered();
}

class UEffectSettings : UDataAsset
{
    TArray<TSoftObjectPtr<UNiagaraSystem>> ParticlesForShaderGeneration;

    bool NeedsShadeGeneration();
    void MarkShadersGenerated();
    void CompileShaders();
}

class AElectroBeam : AActor
{
    UCapsuleComponent* collider;
    TArray<AActor*> ParentPlants;
    FVector LocationOffset;
    FVector_NetQuantize SourceLocation;
    FVector_NetQuantize TargetLocation;
    USceneComponent* DelaySource;
    USceneComponent* DelayTarget;
    UParticleSystemComponent* BeamEffect;
    UAudioComponent* ZappSound;
    TArray<TSubclassOf<UStatusEffect>> StatusEffectsToApply;
    float MaxLitTime;
    float MinLitTime;
    float MaxUnlitTime;
    float MinUnlitTime;
    bool ShouldFlicker;
    bool IsLit;

    void SetTarget(USceneComponent* TargetPoint);
    void SetSource(USceneComponent* SourcePoint);
    void SetParents(AActor* firstParent, AActor* secondParent);
    void RecalculateBeam();
    void OnRep_TargetLocation();
    void OnRep_SourceLocation();
    void OnRep_Flag();
    void OnParentTwoDeath(UHealthComponentBase* HealthComponent);
    void OnParentOneDeath(UHealthComponentBase* HealthComponent);
    UParticleSystemComponent* GetParticleEffect();
    UCapsuleComponent* GetCollider();
    UAudioComponent* GetAudio();
    void DelayedSetTarget(USceneComponent* TargetPoint);
    void DelayedSetSource(USceneComponent* SourcePoint);
    void DeactivateCollisionAndEffect();
}

class ASentryElectroBeam : AElectroBeam
{
    TArray<ARedeployableSentryGun*> Sentries;
}

class AElevatorPlant : AActor
{
    FElevatorPlantOnStartTimelineEvent OnStartTimelineEvent;
    void StartTimelineEvent();
    FElevatorPlantCOnStateChangedEvent COnStateChangedEvent;
    void COnStateChanged(bool IsIdling);
    UAudioComponent* MovingSoundComponent;
    USoundCue* GrabSound;
    FVector RestPositionOffset;
    FVector RelativeRestLocation;
    FVector RelativeDestinationLocation;
    FVector BaseTangentDirectionOffset;
    FVector LeafTangentDirectionOffset;
    FVector LeafLocationNoise;
    FRotator LeafNoiseRotator;
    float BaseTangentLength;
    USplineMeshComponent* CSplineMesh;
    USceneComponent* CVineBase;
    USceneComponent* CVineLeaf;
    float InitialBaseTangentLength;
    float LeafLocationNoiseSize;
    float VineMovementAlpha;
    bool IsMoving;
    bool IsOpen;
    bool Extend;
    UCurveFloat* DipOffsetCurve;
    UCurveFloat* LocationLerpCurve;

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
}

class UEliminationObjective : UObjective
{
    int32 ObjectCount;
    UDebrisPositioning* Positioning;
    TArray<int32> ExcludeRoomIDs;
    TSoftClassPtr<AActor> ObjectToSpawn;
    UCaveInfluencer* CaveInfluencer;
    float DebrisRadius;
    TArray<TSoftObjectPtr<UDebrisBase>> ObjectDebris;
    int32 EnemiesKilled;
    int32 EnemiesToKill;
    TArray<FEliminationDescriptors> TargetDescriptors;
    TArray<FEliminationDescriptors> TargetQueue;
    TArray<FEliminationTarget> ActiveEliminationTargets;

    void RegisterEliminationTargets(const TArray<UFSDPawn*>& Targets);
    void ReceiveTargetSpawned();
    void ReceiveTargetKilled();
    void OnTargetKilled(UHealthComponentBase* Health);
    void OnRep_EnemiesToKill(int32 prevAmount);
    void OnRep_EnemiesKilled(int32 prevAmount);
    TArray<UEnemyDescriptor*> GetNextTargetInQueue();
}

class AEncounterActor : AActor
{

    void Receive_EncounterHasSpawned(APawn* spawnedPawn);
}

class UEncounterManager : UActorComponent
{
    float SpawnDistanceFromRoomBounds;
    TArray<FEncounterManagerItem> Encounters;
    AProceduralSetup* ProceduralSetup;
    UEnemySpawnManager* SpawnManager;
    TArray<UEnemyDescriptor*> EnemyPool;
    TArray<UEnemyDescriptor*> EncounterPool;
    TArray<UCritterDescriptor*> CritterPool;

    void ShowSpawnLocations();
    TArray<UEnemyDescriptor*> GetEnemyPool();
    TArray<UEnemyDescriptor*> GetEncounterPool();
    TArray<UCritterDescriptor*> GetCritterPool();
}

class UEncounterSettings : UDataAsset
{
    FIRandRange StationaryEnemyCount;
    TArray<UEnemyDescriptor*> CommonEnemies;
    TArray<UEnemyDescriptor*> SpecialEnemies;
    TArray<UEnemyDescriptor*> DisruptiveEnemies;
    TArray<UEnemyDescriptor*> StationaryEnemies;
    TArray<UCritterDescriptor*> CommonCritters;
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
    TMap<UEnemyDescriptor*, FEliteEnemyEntry> HeroEnemies;
    FRandInterval HeroEnemySpawn;
    UMutator* TestMutator;
}

class UEnemyFamily : UDataAsset
{
    UTexture2D* Icon;
    FText Name;
}

class UObjectInfoComponent : UActorComponent
{

    UDialogDataAsset* GetLookAtShout(const UPrimitiveComponent* TargetComponent);
    bool GetIsPingableByLaserpointer(const UPrimitiveComponent* TargetComponent);
    FText GetInGameName(const UPrimitiveComponent* TargetComponent);
    UTexture2D* GetInGameIcon(const UPrimitiveComponent* TargetComponent);
    FText GetInGameDescription(const UPrimitiveComponent* TargetComponent);
    UActorContextWidget* GetContextWidget(UPlayerController* InPlayerController);
}

class USimpleObjectInfoComponent : UObjectInfoComponent
{
    FText InGameName;
    FText InGameDescription;
    UDialogDataAsset* LookAtShout;
    UDialogDataAsset* LookAtShoutOverride;
    UTexture2D* Icon;
    bool bIsPingableByLaserpointer;
    TSubclassOf<UActorContextWidget> ContextWidgetClass;
    TMap<TWeakObjectPtr<USceneComponent>, FSimpleObjectInfoData> ComponentMap;
    UActorContextWidget* ContextWidget;

    void SetInGameName(FString GameName);
    void SetInGameDescription(FString GameDescription);
    void SetContextWidget(UActorContextWidget* InContextWidget);
    void OverrideLookAtShoutOrUseDefault(UDialogDataAsset* InShout);
    void OverrideLookAtShout(UDialogDataAsset* InShout);
    UDialogDataAsset* GetDefaultLookAtShout();
    void ClearLookAtShoutOverride();
    void AddComponentObjectInfo(USceneComponent* TargetComponent, const FSimpleObjectInfoData& Data);
}

class UEnemyComponent : USimpleObjectInfoComponent
{
    UEnemyFamily* Family;
    UDialogDataAsset* KillShout;
    UEnemyID* EnemyID;
    FString mixerName;
    FEnemyComponentOnMixerNameChange OnMixerNameChange;
    void MixerEnemyNameChange(FString mixerName);

    UEnemyID* GetID();
    FText GetFamilyName();
    UTexture2D* GetFamilyIcon();
}

class UTestAnimInstance : UAnimInstance
{
    FTestAnimInstanceProxy AnimInstanceProxy;
    float WalkCycleSpeed;
    float StartMovingSpeed;
    float StopMovingSpeed;
    float WalkCycleMinRate;
    float MeshScale;
}

class UJellyFishAnimInstance : UEnemyAnimInstance
{
    float HorizontalAngle;
    float VerticalSpeed;
}

class UGliderBeastAnimInstance : UEnemyAnimInstance
{
    float SyncAnimLength;
    FGliderAnimSync AnimSync;
    bool IsFrozen;
}

class UEnemyAttacker : UInterface
{

    float GetAttackDamageModifier();
}

class UEnemyControlStateComponent : UCharacterStateComponent
{
    bool UseThirdPersonCam;
    FControlEnemyState StateData;
    EEnemyControlState ControlState;
    FQuat AngularVelocity;
    FQuat ControlRotation;

    void ServerExit();
    void OnRep_StateData(const FControlEnemyState& oldState);
    void OnRep_ControlState(EEnemyControlState oldState);
    void OnEnemyCrashMontageEnded(UAnimMontage* Montage, bool interrupted);
    void OnControllingEnemyAttached();
    void OnControllingEnemy(bool IsControlling);
    void JumpPressed();
    UAIPlayerControlComponent* GetAiPlayerControlComponent();
}

class UEnemyDescriptor : UDataAsset
{
    UEnemyID* EnemyID;
    TSoftClassPtr<APawn> EnemyClass;
    EVeteranScaling VeteranScaling;
    TArray<UEnemyDescriptor*> VeteranClasses;
    TMap<UBiome*, TSoftClassPtr<APawn>> BiomeEnemyClassOverrides;
    TSoftClassPtr<APawn> EliteEnemyClass;
    TSet<UMissionTemplate*> BannedMissionTypes;
    EEnemySignificance EnemySignificance;
    FVector SpawnOffset;
    bool UsesSpawnEffects;
    ECreatureSize CreatureSize;
    UDebrisPositioning* Positioning;
    int32 PlacementCategories;
    UCaveInfluencer* CaveInfluencer;
    TArray<FEnemyDebris> Debris;
    float InfluencerRange;
    TSubclassOf<AActor> PlacementCarver;
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

    TSubclassOf<APawn> GetEnemyClass(UBiome* Biome, bool isElite);
}

class UBaseCritterDescriptor : UDataAsset
{
    TSoftClassPtr<AFSDPawn> CritterClass;
    TMap<UBiome*, TSoftClassPtr<AFSDPawn>> BiomeClassOverrides;
    UDebrisPositioning* Positioning;
    DeepPathFinderType PathfinderType;
}

class UCritterDescriptor : UBaseCritterDescriptor
{
    FIRandRange SpawnAmountPerRoom;
    float SpawnChancePerRoom;
    FIRandRange SpawnAmountPerLevel;
}

class URareCritterDescriptor : UBaseCritterDescriptor
{
    float Rarity;
}

class UEnemyMinersManualData : UDataAsset
{
    UEnemyID* EnemyID;
    FText Name;
    FText RichDescription;
    TArray<FText> GameplayTips;
    EEnemyFamily Family;
    EEnemyType EnemyType;
    TArray<FEnemyAttackDescription> AttackType;
    TArray<FEnemyAttackDescription> SpecialAttacks;
    TArray<UAnimSequenceBase*> AttackAnimations;
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

    UTexture2D* GetEnemyIcon();
}

class UHealthComponentBase : UActorComponent
{
    FHealthComponentBaseOnHealthChanged OnHealthChanged;
    void HealthChangedSig(float Health);
    FHealthComponentBaseOnDamageHealed OnDamageHealed;
    void DamageSig(float Amount);
    FHealthComponentBaseOnDamageTaken OnDamageTaken;
    void DamageSig(float Amount);
    FHealthComponentBaseOnHit OnHit;
    void HitSig(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    FHealthComponentBaseOnBodypartHit OnBodypartHit;
    void BodypartHitSig(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    FHealthComponentBaseOnDeath OnDeath;
    void DeathSig(UHealthComponentBase* HealthComponent);
    FHealthComponentBaseOnRadialDamage OnRadialDamage;
    void OnRadialDamage(float Damage, float BaseDamage, const FVector& Position, float Radius);
    FHealthComponentBaseOnCanTakeDamageChanged OnCanTakeDamageChanged;
    void CanTakeDamageDelegate(bool OutCanTakeDamage);
    bool ShowLaserPointMarkerWhenDead;
    bool canTakeDamage;
    bool PassthroughTemperatureDamage;

    float TakeRadialDamage(float damageAmount, FVector BlastCenter, float BlastRadius, float MaxDamageRadius, float MinDamagePct, AController* EventInstigator, AActor* DamageCauser, UPrimitiveComponent* HitComponent, UDamageClass* DamageClass);
    void TakeDamageSimple(float damageAmount, AActor* DamageCauser, UDamageClass* DamageClass);
    void SetHealthDirectly(float newHealthValue);
    void SetCanTakeDamage(bool canTakeDamage);
    void Kill(AActor* DamageCauser);
    bool IsDead();
    bool IsAlive();
    float Heal(float Amount);
    bool GetShowHealthBar();
    float GetHealthPct();
    TScriptInterface<IHealth> GetHealthComponentForCollider(UPrimitiveComponent* Primitive);
    FVector GetHealthBarWorldOffset();
    float GetHealth();
    UParticleSystem* GetGenericImpactParticles();
    bool GetCanTakeDamage();
    bool CanTakeDamageFrom(UDamageClass* DamageClass);
    void CanTakeDamageDelegate__DelegateSignature(bool OutCanTakeDamage);
}

class UHealthComponent : UHealthComponentBase
{
    FHealthComponentOnArmorChanged OnArmorChanged;
    void HealthChangedSig(float Health);
    FHealthComponentOnArmorDamaged OnArmorDamaged;
    void DamageSig(float Amount);
    FHealthComponentOnArmorHealed OnArmorHealed;
    void ArmorHealedSig(float Amount);
    FHealthComponentOnDeathDetailed OnDeathDetailed;
    void DeathSigDetailed(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<UDamageTag*>& Tags);
    FHealthComponentOnNewHealthSegment OnNewHealthSegment;
    void HealthSegmentChange(int32 currSegment, int32 prevSegment);
    float Damage;
    TArray<float> HealthSegmentSizes;
    bool CanDamageThroughSegments;
    TArray<USubHealthComponent*> SubHealthComponents;
    bool ShouldUseLargestSubhealthDamageTaken;
    bool InvulnerableToNonDefinedResistances;
    TMap<UPawnStat*, float> Resistances;
    bool AffectedByGlobalWeakpointDamageMultiplier;
    bool UseDormancy;
    UPawnStatsComponent* PawnStats;

    void ToggleCanTakeDamage();
    void Resupply(float percentage);
    void OnRep_Damage(float oldDamage);
    void HealArmor(float Amount);
    bool HasArmor();
    float GetMaxArmor();
    EHealthbarType GetHealthbarType();
    void GetCurrentHealthSegment(int32& Segment, float& segmentHealth, float& segmentHealthPercent);
    float GetArmorPct();
    float GetArmor();
    void Client_ReceivedHit(float Amount, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
}

class UEnemyHealthComponent : UHealthComponent
{
    FVector KillImpactNormal;
    EEnemyHealthScaling EnemyHealthScaling;
    float Courage;
    float MaxHealth;
    bool bShowHealthBar;
    FVector HealthBarOffsetWorld;
    bool bIsBossFight;
    int32 BossFightHealthBarSegments;
    bool bRegisterEnemy;

    float GetMaxHealth();
}

class UEnemyMeleeAttackAnimNotify : UAnimNotify
{
    FName AttackTag;
}

class UEnemyRangedAttackAnimNotify : UAnimNotify
{
}

class UStopLeadingNotify : UAnimNotify
{
}

class UEnemySettings : UDataAsset
{
    TArray<UEnemyDescriptor*> EnemiesAllowedInWaves;
    FRandRange EnemyWaveRange;
    TMap<UEnemyID*, UEnemyDescriptor*> EnemyDescriptor;
    FGameplayTagQuery EliteAllowQuery;
    TMap<UEnemyDescriptor*, FEliteEnemyEntry> HeroEnemies;
    FRandFloatInterval HeroEnemySpawn;
    int32 EliteRequiredCampaignProgress;
    TArray<TSubclassOf<UDamageComponent>> ExplodingEnemiesDamageComponents;
}

class USpawnSettings : UDataAsset
{
    TArray<UParticleSystem*> SpawnEffects;
    TArray<USoundCue*> SpawnSounds;
    FRandRange SpawnDuration;
}

class UEnemySpawnManager : UActorComponent
{
    FEnemySpawnManagerOnEnemyDestroyed OnEnemyDestroyed;
    void EnemyDestroyedSignature(APawn* enemy);
    FEnemySpawnManagerOnEnemyDied OnEnemyDied;
    void EnemyDestroyedSignature(APawn* enemy);
    FEnemySpawnManagerOnEnemySpawned OnEnemySpawned;
    void EnemySpawnedSignature(APawn* enemy, UEnemyDescriptor* descriptor);
    USpawnEffectsComponent* SpawnEffects;
    TArray<APawn*> ActiveEnemies;
    TArray<APawn*> ActiveSwarmerEnemies;
    TArray<TSubclassOf<UStatusEffect>> ActiveGlobalStatusEffects;
    TMap<UEnemyDescriptor*, FSpawnRarityModifierItem> SpawnRarityModifiers;
    TArray<APawn*> ActiveCritters;
    TArray<APawn*> CritcalEnemies;
    int32 MaxActiveEnemies;
    int32 MaxActiveSwarmers;
    int32 MaxActiveCritters;
    float MaxDistanceBeforeCleanup;
    FGameplayTag SwarmerTag;
    FGameplayTag RegularTag;
    FGameplayTag CritterTag;
    AProceduralSetup* ProceduralSetup;
    TArray<FSpawnQueueItem> SpawnQueue;
    bool bDestroyingAllEnemies;

    void SpawnerDestroyed(APawn* Actor);
    bool SpawnEnemy(UEnemyDescriptor* descriptor, const FTransform& Transform, const EnemySpawnedDelegate__DelegateSignature& Callback, bool useSpawnFX, bool Alert);
    void SetSpawningEnabled(bool newSpawningEnabled);
    void RemoveGlobalStatusEffect(TSubclassOf<UStatusEffect> StatusEffect);
    void RegisterSpawner(APawn* Actor);
    void RegisterSpawnedEnemy(AActor* enemy);
    void PromoteToCritical(APawn* Pawn);
    void OnMatchStarted();
    void OnMatchEnded();
    bool GetSpawningEnabled();
    void EnemyDestroyed(AActor* Actor);
    void EnemyDeath(UHealthComponentBase* HealthComponent);
    void DestroyAllEnemies();
    bool CanSpawn(UEnemyDescriptor* EnemyDescriptor);
    void AddGlobalStatusEffect(TSubclassOf<UStatusEffect> StatusEffect);
}

class USpawnEffectsComponent : UActorComponent
{
    FSpawnEffectsArray ActiveEffects;
    UMaterialInstance* BiomeMaterialOverride;
}

class UPheromoneSpawnerComponent : UActorComponent
{
    FRandRange SpawnInterval;
    float AttackPositioningCostModifier;
    UEnemyDescriptor* enemy;
    TMap<AActor*, float> InfectedActors;
}

class UEnemyDetonationSetting : UDataAsset
{
    UDamageComponent* FireDamage;
    UNiagaraSystem* FireParticles;
    USoundCue* FireSound;
    UDamageComponent* IceDamage;
    UNiagaraSystem* IceParticles;
    USoundCue* IceSound;
}

class UTemperatureComponent : UActorComponent
{
    float FrozenDamageBonusScale;

    bool TryPushHeatSource(AActor* Target, float Temperature, ETemperatureIntensity Intensity);
    bool TryPopHeatSource(AActor* Target, float Temperature, ETemperatureIntensity Intensity);
    void ResetTemperature();
    float GetCurrentTemperature();
    void ChangeTemperature(float Degrees, AActor* Source);
}

class UEnemyTemperatureComponent : UTemperatureComponent
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
    UEnemyDetonationSetting* DetonationSetting;
    UPawnStatsComponent* PawnStats;
    int32 WarmingCooldown;
    uint8 FireDetonationStack;
    uint8 IceDetonationStack;

    void TimerCallback();
    void OnDeath(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<UDamageTag*>& Tags);
    void DoTemperatureShock(UStatusEffectsComponent* Status);
    void All_IceDetonation();
    void All_FireDetonation();
}

class UEnemyTemperatureReplicatorComponent : UActorComponent
{
    FEnemyTemperatureReplicatorComponentOnTemperatureEffectChanged OnTemperatureEffectChanged;
    void FloatDelegate(float FloatValue);
    FEnemyTemperatureReplicatorComponentOnIsFrozenChanged OnIsFrozenChanged;
    void FloatDelegate(float FloatValue);
    FEnemyTemperatureReplicatorComponentOnIsOnFireChanged OnIsOnFireChanged;
    void FloatDelegate(float FloatValue);
    TWeakObjectPtr<UEnemyTemperatureComponent> EnemyTemperatureComponent;
    int32 TemperatureEffect;
    bool bIsFrozen;
    bool bIsOnFire;

    void OnRep_TemperatureEffect();
    void OnRep_IsOnFire();
    void OnRep_IsFrozen();
    bool IsOnFire();
    bool IsFrozen();
    float GetTemperatureEffect();
    void BoolDelegate__DelegateSignature(bool Value);
}

class UEnemyWaveController : UObject
{
    bool IsComplete;
    bool IsSuitableForSolo;

    void StartWave();
    void ResumeWave();
    void PauseWave();
    void OnWaveCompleted();
}

class UEnemyWaveManager : UActorComponent
{
    TArray<FWaveEntry> ScriptedWaves;
    TArray<FWaveEntry> EndMissionWaves;
    TArray<UEnemyWaveController*> ActiveScriptedWaves;
    float StartDelay;
    float spawnRadiusFromSpawnPoint;
    bool ScriptedWavesEnabled;
    bool NormalWavesEnabled;
    bool OverrideDifficultyScriptedWaveInternal;
    FRandRange OverrideScriptedWaveInterval;
    AFSDGameMode* GameMode;
    UEnemySpawnManager* SpawnManager;
    TArray<UObject*> NormalWavesBlockStack;
    TArray<UObject*> ScriptedWavesBlockStack;

    UEnemyWaveController* TriggerWave(TSubclassOf<UEnemyWaveController> waveClass);
    void TriggerEndWave(bool cancelAllWaves);
    void SpawnScriptedWave();
    void PushDisableScriptedWaves(UObject* Owner);
    void PushDisableNormalWaves(UObject* Owner);
    void PopDisableScriptedWaves(UObject* Owner);
    void PopDisableNormalWaves(UObject* Owner);
    void OnMatchEnded();
    void OnEnemySpawned(APawn* enemy);
    bool AreScriptedWavesBlocked();
    bool AreNormalWavesBlocked();
}

class AEscortMuleAIController : UFSDAIController
{
    TArray<FVector> CurrentPath;
    TArray<FVector> GaragePath;
    int32 PathIndex;
    int32 CurrentRoom;
    UEscortObjective* EscortObj;
    int32 TunnelStartIndex;
    int32 TunnelEndIndex;
    FRandomStream RandomStream;

    void SetDozerNextPathSegment();
    void OnPathComplete();
    TArray<FVector> GetPathForDebug(int32 Segment);
    FVector GetPathEndTagent();
    void FindDozerPath(FVector StartPosition);
}

class UEscortObjective : UObjective
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
    UDebrisPositioning* Positioning;
    UDebrisPositioning* EscortMulePositioning;
    UCurveFloat* CostDistanceCurve;
    float DebrisRadius;
    TArray<UDebrisBase*> ObjectDebris;
    TSoftClassPtr<AActor> RefuelObjectClass;
    TSoftClassPtr<AEscortDestination> DestinationClass;
    int32 AreasScanned;
    EEscortMissionState State;
    bool FinalBattle;
    UCarvedResourceData* FuelResource;
    UResourceData* GemResource;
    FEscortObjectiveOnCannisterRegistered OnCannisterRegistered;
    void CannisterRegistered(UExtractorItem* Item);
    float ServerShellProgress;
    int32 SecondsToDestroyHeartstone;
    int32 FullCanistersRequired;
    int32 FullCanisters;
    int32 FuelResourceAmount;
    TSoftClassPtr<AActor> GarageDropCarver;
    TSoftClassPtr<AActor> EscortMuleDropBeaconClass;
    TSoftClassPtr<AActor> GarageClass;
    FVector EscortMuleDropLocation;
    AEscortMule* EscortMule;
    AEscortDestination* EscortDestination;

    void SyncProgressTimer();
    void StartShellBreak();
    void SpawnGarage();
    void SetState(EEscortMissionState State);
    void SetShellBreakPaused(bool newPaused);
    void SetEscortMule(UEscortMule* MULE);
    void RegisterFuelCannister(UExtractorItem* extractor);
    void RecordFailStage(bool muleDied);
    void OnResourceChanged(UCappedResource* CappedResource, float Amount);
    void OnRep_FullCanisters();
    void OnRep_EscortState();
    void OnRep_EscortMule();
    void OnRep_AreasToScan(int32 prevAmount);
    void OnRep_AreasScanned(int32 prevAmount);
    void OnMuleDied(UHealthComponentBase* HealthComponent);
    void OnHealthChanged(float Health);
    void OnFullCanistersChanged(int32 Amount);
    void OnEscortMuleSpawnedEvent();
    float GetShellBreakProgress();
    bool DoesPathExist(FVector Start, FVector End);
}

class AEscortMule : UFSDPawn
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
    UFriendlyHealthComponent* HealthComponent;
    USimpleObjectInfoComponent* ObjectInfo;
    URestrictedResourceBank* ResourceBank;
    FTransform TargetTransform;
    FTransform PreviousTransform;
    FEscortMuleMovementState MovementState;
    float SpeedModifier;
    USkeletalMeshComponent* Mesh;
    UOutlineComponent* OutlineComponent;
    float HealPerTickNormal;
    float HealPerTickUnderAttack;
    bool CannisterVisible_Left;
    bool CannisterVisible_Right;
    FVector NextStop;
    bool IsCarvingTunnel;
    int32 FullCanisters;
    TArray<FEscortMuleExtractorSlot> ExtractorSlots;

    bool TryHeal(UPlayerCharacter* User, float Amount);
    void SetTargetTransform(FTransform InTransform);
    void SetSpeedModifier(float inSpeedModifier);
    void SetFullExtracterAttached(UInstantUsable* Usable);
    void SetExtractorDetached(UInstantUsable* Usable);
    void SetExitGaragePath(const TArray<FVector> Path);
    void ResetExtractors();
    void PathIsReady();
    void OnRep_SpeedModifier();
    void OnRep_MovementState();
    void OnRep_IsCarvingTunnel();
    void OnRep_ExtractorSlots();
    void OnObjectiveStateChanged(EEscortMissionState NewState);
    void OnExtractorSlotChanged(const FEscortMuleExtractorSlot& Slot, int32 Index);
    void OnExtractorDetached(UExtractorItem* Item);
    void ObjectiveStateChange(EEscortMissionState NewState);
    EEscortExtractorState GetExtractorState(UInstantUsable* Usable);
    void ActivateMule();
}

class AEscortMuleTrack : AActor
{
    FGameplayTagContainer GameplayTags;
}

class AEscortDestination : AActor
{
    FEscortDestinationOnShellCracked OnShellCracked;
    void ShellCrackedSignature(int32 numberOfShellsCracked);
    UDamageComponent* EndExplosionDamage;
    float NextBreakpoint;
    int32 StageForAnalytics;
    int32 SecondsToDestroyHeartstone;
    TArray<float> BreakpointsPercent;
    float Radius;
    float ShellThickness;

    void MeltPlatforms(ADeepCSGWorld* CSGWorld, TArray<FVector> meltPoints, float meltRadius);
    UTerrainMaterial* GetTerrainMaterialByHandle(ADeepCSGWorld* CSGWorld, int32 materialHandle);
    int32 GetSecondsToDestroyObjective();
    FVector GetClosestPointOnRadius(FVector CurrentLocation, int32 numberOfShellsCracked, FVector& dirFromCenter);
}

class AFSDPhysicsActor : AActor
{
    int32 MovementUpdateFrequency;
    int32 MovementUpdateEventTriggeredFrequency;

    void ForceMovementUpdate();
}

class ACarriableItem : AFSDPhysicsActor
{
    FCarriableItemOnAttachedChangeDelegate OnAttachedChangeDelegate;
    void AttachChangeSig(bool Attached, FVector PrevScale);
    FCarriableItemOnCarriableDeposited OnCarriableDeposited;
    void OnCarriableDeposited(UPlayerCharacter* fromCharacter);
    bool StrictDeposit;

    void Throw(FVector force);
    void Receive_OnDeposited(UPlayerCharacter* fromPlayer);
    void OnAttachChanged(bool Attached);
}

class ADorrettaHead : UCarriableItem
{
    UCarriableInstantUsable* Usable;
    UCarriableComponent* CarriableComponent;
}

class UFuelCannisterAttachedAnimInstance : UAnimInstance
{
    bool CanBeTaken;

    void SetCanBeTaken(bool canBeTakenValue);
}

class UFuelCannisterItemAnimInstance : UAnimInstance
{
    bool IsOnGround;
    bool IsFull;
    bool IsShooting;
}

class UEscortMuleAnimInstance : UAnimInstance
{
    bool LeftCannistersVisible;
    bool RightCannistersVisible;
    bool IsEngineRunning;
    bool IsBeingRefueled;
    bool PlatformOut;

    void OnTookDamage(UHealthComponent* Health);
}

class AExplosiveBarrelEvent : AGameEvent
{
    UDamageComponent* EndDamage;
}

class AExtractorItem : UAnimatedItem
{
    FExtractorItemOnCurrentLoadChangedEvent OnCurrentLoadChangedEvent;
    void FloatDelegate(float FloatValue);
    FExtractorItemOnCharacterEquipChange OnCharacterEquipChange;
    void CharacterChangedDelegate(UCharacter* Character);
    UBoxComponent* DroppedCollider;
    USkeletalMeshComponent* DroppedMesh;
    UFirstPersonParticleSystemComponent* FP_DrillParticles;
    UFSDAudioComponent* AudioComponent;
    UPointLightComponent* SurfaceLight;
    UParticleSystemComponent* MeltingParticles;
    UParticleSystemComponent* InvalidSurfaceParticles;
    UParticleSystemComponent* FPMuzzleParticles;
    UParticleSystemComponent* FPMuzzleInvalidParticles;
    UParticleSystemComponent* TPMuzzleParticles;
    UParticleSystemComponent* TPMuzzleInvalidParticles;
    UAnimMontage* FPMineMontage;
    UAnimMontage* TPMineMontage;
    UAnimMontage* FPGunsling;
    UAnimMontage* TPGunsling;
    FName MiningSpeedAudioParamterName;
    UParticleSystem* DrillParticles;
    UForceFeedbackEffect* DrillRumble;
    float BlockParticlesScaleFP;
    float BlockParticlesScaleTP;
    EExtractorState State;
    float MovementPenalty;
    float CarverRayCastLength;
    float CarveTerrainDistanceCheck;
    float CurrentDrillSpeed;
    float DrillParticlesDuration;
    UResourceData* ExtractetMaterial;
    float TimeBeforeInvalidShout;
    UDialogDataAsset* InvalidSurfaceShout;
    UDialogDataAsset* ShoutFull;
    USoundCue* DigSound;
    bool IsMining;
    bool IsGunslinging;
    bool ReadyToExtract;
    UParticleSystem* VacuumEffect;
    UParticleSystem* ChunkSplatEffect;
    USoundCue* ChunkSplatSound;
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
    void Server_CollectChunk(UResourceChunk* chunk);
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
    UBoxComponent* GetRootCollider();
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32 Material);
    void All_ChunkSplat(UResourceChunk* chunk);
    void AddResource(float Amount);
}

class AExtruderPlant : AActor
{
    USkeletalMeshComponent* SkeletalMesh;
    UAnimationAsset* ExtrudeAnimation;
    UAnimationAsset* RetractAnimation;
    UAudioComponent* Audio;
}

class AFacilityGeneratorLine : AActor
{
    FTransform StartTransform;
    TArray<FTransform> EndTransforms;
    float HeightOffsetMin;
    float HeightOffsetMax;
    float MaxSegmentLength;
    float CarveRadius;
    USplineComponent* SplineComponent;
    USplineDecoratorComponent* SplineDecorator;
    TSoftObjectPtr<UStaticMesh> LineMeshPtr;
    TSoftObjectPtr<UMaterialInterface> MaterialConnected;
    TSoftObjectPtr<UMaterialInterface> MaterialUnconnected;
    ATetherStation* Station;
    UStaticMesh* MeshInstance;
    TArray<FVector> ReplicatedPath;
    bool Connected;

    void SetConnected(bool InConnected);
    void ReceiveBeginPathFinding();
    void OnRep_Path();
    void OnRep_Connected();
}

class ARessuplyPod : AActor
{
    FRessuplyPodOnStateChanged OnStateChanged;
    void RessuplyPodStateDelegate(ARessuplyPod* InPod, ERessuplyPodState InState);
    FGameplayTagContainer GameplayTags;
    UDamageComponent* Damage;
    float KillRadius;
    float DropHeight;
    float DropDelay;
    float MissionShoutDelay;
    UDialogDataAsset* DialogOrderAccepted;
    UDialogDataAsset* DialogPodArrived;
    UDialogDataAsset* CurrentMissionShout;
    FVector StartLocation;
    FVector TargetLocation;
    ERessuplyPodState State;
    float TargetDropTime;
    float ServerDropProgress;
    UCurveFloat* DropCurve;
    AActor* PlayerSpawnPoint;
    float CloseToImpactDistance;

    void SetIdling();
    void RessuplyPodStateDelegate__DelegateSignature(ARessuplyPod* InPod, ERessuplyPodState InState);
    void OnTunnelBLocked();
    void OnRep_State(ERessuplyPodState oldState);
    void OnDropStarted();
    void OnDroppodImpact();
    void OnDroppodCloseToImpact();
    AActor* DropToTarget(UObject* WorldContextObject, TSubclassOf<ARessuplyPod> podClass, const FVector& Location, AActor* requester);
}

class AFacilityHackingPod : ARessuplyPod
{
    FFacilityHackingPodOnHackingPodStateChanged OnHackingPodStateChanged;
    void HackingPod_Delegate(EHackingPodState State);
    EHackingPodState PodState;

    void SetState(EHackingPodState aState);
    void OnRep_PodState(EHackingPodState oldState);
    void OnExitState(EHackingPodState oldState);
    void OnEnterState(EHackingPodState NextState);
    EHackingPodState GetState();
}

class UFacilityHackingPodAnimInstance : UAnimInstance
{
    AActor* SaluteTarget;
    FRotator LookingDirection;
    FRotator TargetRotation;
    bool IsHacking;
    EHackingPodState PodState;
    float RadarDishAngle;

    void SetSaluter(AActor* salutingTarget);
    void ResetSaluteTarget();
}

class UItemDispenserAnimInstance : UAnimInstance
{
    bool IsOpen;
    bool HasItem;
}

class UFacilityTetherDispenserAnimInstnace : UItemDispenserAnimInstance
{
    EHackingPodState PodState;
    bool ShouldShowDispenser;
    bool ShouldCloseFromDispenser;
    bool ShouldShowButton;
    bool ShouldHideButton;
}

class UFacilityObjective : UObjective
{
    TSoftClassPtr<ARessuplyPod> generatorClass;
    TSoftClassPtr<AActor> GeneratorBeaconClass;
    int32 GeneratorCount;
    int32 ObjectivesStage;
    TArray<FSubObjective> SubObjectives;
    FFacilityObjectiveOnFirstEncounterDroneSpawned_Delegate OnFirstEncounterDroneSpawned_Delegate;
    void EnemySpawnedDelegate(APawn* enemy);
    FFacilityObjectiveOnSecondEncounterDroneSpawned_Delegate OnSecondEncounterDroneSpawned_Delegate;
    void EnemySpawnedDelegate(APawn* enemy);
    TArray<APawn*> spawnedEnemies;
    TArray<UEnemyDescriptor*> TurretDescriptors;
    TArray<UEnemyDescriptor*> GeneratorRoomTurretDescriptors;
    TArray<UEnemyDescriptor*> EncounterEnemies;
    float EncounterDifficulty;
    FRandInterval Diversity;
    FIRandRange TurretEncountersRange;
    int32 MinimumTurretEncounters;
    FIRandRange TunnelTurretsRange;
    TArray<AActor*> SmallGenerators;
    ATetherStation* mainFacility;
    TArray<int32> ShieldGeneratorRooms;
    int32 MainFacilityRoom;
    TArray<AActor*> ShieldGenerators;
    UResourceData* GoalResource;
    float AmountRequired;
    float AmountCollected;
    int32 GeneratorsActivated;

    void SpawnFacilityEncounters(AProceduralSetup* setup, UEncounterManager* Encounters, UDebrisPositioning* Positioning);
    TArray<FTransform> SpawnEndBattleTurrets(int32 amountOfTurrets, AProceduralSetup* setup, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, const TArray<AActor*>& existingTurrets, bool& success);
    void SetMainFacility(ATetherStation* mainFacility);
    void SetGeneratorRooms(TArray<int32>& generatorRoomsIndicies);
    void SecondGeneratorEncounterSpawn(APawn* spawned);
    void Receive_AddEnemies(AProceduralSetup* setup);
    void ProgressCurrentObjective();
    AActor* PlaceObjectInRoom(AProceduralSetup* setup, const FRoomNode& RoomNode, UDebrisPositioning* Positioning, TSubclassOf<AActor> placementActor);
    void OnResourceChanged(UCappedResource* Resource, float Amount);
    void OnRep_ObjectivesStage();
    void OnRep_GeneratorsActivated();
    void OnRep_AmountCollected();
    void OnCoreDeposited();
    bool IsSubObjectiveComplete(int32 objectiveIndex);
    void InitGeneratorCount(int32 generators);
    FTransform GetTurretGoal(AProceduralSetup* setup, const FVector& Origin, float idealRange, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, bool& success);
    TArray<AActor*> GetShieldGenerators();
    int32 GetShieldGeneratorCount();
    int32 GetFacilityRoomIndex();
    FVector GetFacilityLocation();
    FSubObjective GetCurrentObjective();
    void GeneratorActivated();
    void FirstGeneratorEncounterSpawn(APawn* spawned);
    void DropOverCharger(AProceduralSetup* setup, int32 roomIndex, const FVector& facilityLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> generatorClass);
    void ChangeObjective();
    void AddShieldGenerator(AActor* charger, int32 roomIndex);
}

class UHackableBuildingObjective : UObjective
{

    void DropOverCharger(AProceduralSetup* setup, const FVector& buildingLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> generatorClass);
}

class AFacilityPowerStation : AActor
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
}

class AFacilityShieldGenerator : AActor
{
    FGameplayTagContainer GameplayTags;
}

class ATentacleBase : UEnemyPawn
{
    USplineComponent* SplineComponent;
    FTransform RestTransform;
    FTransform LastTransform;
    FTransform DesiredTransform;
    FTentacleTarget DesiredTarget;
    FVector TargetLocation;
    float MovementAlpha;
    float HeadMovementDuration;
    float CanSwayCooldown;
    FVector2D SwayRange;
    float NeckBaseTangentLength;
    FVector NeckBasePositionOffset;
    FVector NeckBaseTangentOffset;
    float NeckTopTangentLength;
    FVector NeckTopPositionOffset;
    FVector NeckTopTangentOffset;
    float DurationTentacleRetract;
    float DurationTentacleFoldout;
    USceneComponent* HeadRoot;
    USceneComponent* HeadRotator;

    void Recieve_OnRep_Owner();
    void OnRep_DesiredTarget();
    void MoveHydraHead(FTransform newDesiredTransform, float newCanSwayCooldown, float newHeadMovementDuration, bool UseSpring);
    AStabberVineRoot* GetStabberVineRoot();
    USceneComponent* GetHeadRotator();
    USceneComponent* GetHeadRoot();
}

class AFacilityTentacle : UTentacleBase
{
    float SwaySpeed;
    bool Extended;
    TArray<UAnimMontage*> HitReactions;
    EFacilityTentacleState TentacleState;
    USkeletalMeshComponent* HeadMesh;

    void PlayHitReaction(float Amount);
    void OnStateChanged(EFacilityTentacleState NewState);
    void OnRep_TentacleState();
    bool FindBurrowLocation(UDebrisPositioning* Debris, const FVector& Origin, float Radius, FVector& OutLocation);
}

class UFacilityTentacleHeadAnimInstance : UEnemyAnimInstance
{
    bool Searching;
    bool Melee;
    bool RangedAttack;
}

class AFacilityTurretController : UFSDAIController
{
    UAIPerceptionComponent* Perception;
    float RememberTargetTime;
    float RetargetOnAttackChance;
    bool RespectAttack;

    void OnTurretsAttackingChanged(bool IsAttacking);
    void OnTargetRevived();
    void OnTargetDied(UHealthComponentBase* Health);
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
}

class AFacilityTurret : UEnemyPawn
{
    USceneComponent* Root;
    USkeletalMeshComponent* Mesh;
    float IndicatorActivationDelay;
    bool FinishAttackIgnoreLoS;
    bool InvulnerableOnInactive;
    float FoldOutTime;
    USoundCue* EngagedAudio;
    float Offset;
    float AimAcceleration;
    FRuntimeFloatCurve AimSpeedCurve;
    AActor* CurrentTarget;
    bool TurretEngaged;
    bool AlwaysActive;

    void SetIsAttacking(bool IsAttacking);
    void OnRep_TurretEngaged();
    void OnProjectileSpawned();
    void OnEngagedChanged(bool engaged);
    void OnAttack();
    FRotator GetLookingDirection();
}

class ASpinningFacilityturret : UFacilityTurret
{
    FRotator TargetRotation;
    FRandRange AimAtTargetEveryTurn;
    float TurnCooldown;
    float TurnTimer;
    float Acceptance;
    float TurnSpeed;
}

class AAimingFacilityTurret : UFacilityTurret
{
    bool IsLockedOn;
    UParticleSystemComponent* aimIndicator;
    UParticleSystemComponent* aimIndicatorLock;
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

    void SetupAimindicator(UParticleSystemComponent* aimIndicator, UParticleSystemComponent* aimIndicatorLock);
    void OnRep_IsLockedOn();
    void OnRep_IndicatorMode();
    void OnLockedOn(bool lockedOn);
}

class UFacilityTurretAnimInstance : UEnemyAnimInstance
{
    FRotator AimRotation;
    bool IsEngaged;
}

class UFadeVisibilitySubSystem : UWorldSubsystem
{

    void ScalePrimitive(UPrimitiveComponent* Component, FVector StartScale, FVector EndScale, float Duration);
    void ScaleOutPrimitive(UPrimitiveComponent* Component, float Duration);
    void ScaleInPrimitive(UPrimitiveComponent* Component, float Duration);
    void FadeOutLight(ULightComponent* Light, float Duration);
    void FadeInMaterialByName(UMeshComponent* Component, FName Name, FName ParameterName, float Duration);
    void FadeInMaterialByIndex(UMeshComponent* Component, int32 MaterialIndex, FName ParameterName, float Duration);
    void FadeInLight(ULightComponent* Light, float Duration);
}

class UFakeFallComponent : UActorComponent
{

    void StartFakeFall();
}

class UFakeMoverSettings : UDataAsset
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
}

class AFakePhysicsMover : AActor
{
    USceneComponent* Root;
    FFakeMoverState MoverState;
    FFakeMoveState posVel;
    UFakeMoverSettings* MoveSettings;
    float SyncTime;

    void Teleport(const FVector& Pos, const FVector& Vel);
    void OnRep_PosVel(const FFakeMoveState& posVel);
    void OnRep_MoveSettings(const UFakeMoverSettings* MoveSettings);
    void ApplyImpulse(const FVector& Impulse);
}

class UFallingStateComponent : UCharacterStateComponent
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
    UDialogDataAsset* FallingShout;
    float ShoutAfterDistance;
    UUseAnimationSetting* ClimbUseSettings;
    float HoverBootAirFriction;
    float HoverBootAirControl;
    float HoverBootGravityScale;
    UDialogDataAsset* ShoutHoverBootsBegin;
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
    void All_ShowClimbLedge();
}

class UFindFriendSessionsBlueprintCallProxy : UOnlineBlueprintCallProxyBase
{
    FFindFriendSessionsBlueprintCallProxyOnSuccess OnSuccess;
    void BlueprintFindFriendSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FFindFriendSessionsBlueprintCallProxyOnFailure OnFailure;
    void BlueprintFindFriendSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    UObject* WorldContextObject;

    UFindFriendSessionsBlueprintCallProxy* FindFriendSessions(UObject* WorldContextObject, FString FriendId);
}

class UFirstPersonSkeletalMeshComponent : USkeletalMeshComponent
{

    FVector CalcFirstPersonFOVPositionCorrection(UPlayerController* PlayerController, const FVector& origPos);
}

class UFirstPersonStaticMeshComponent : UStaticMeshComponent
{
    bool EnabledFPFOV;
}

class UFirstPersonWidgetComponent : UWidgetComponent
{
}

class UFirstPersonParticleSystemComponent : UParticleSystemComponent
{

    UParticleSystemComponent* SpawnFirstPersonEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, uint8 LocationType, bool bAutoDestroy);
}

class UFirstPersonNiagaraComponent : UNiagaraComponent
{

    UNiagaraComponent* SpawnFirstPersonEmitterAttached(UNiagaraSystem* inNiagaraSystem, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, uint8 LocationType, bool inAutoDestroy);
}

class UFirstPersonPointLightComponent : UPointLightComponent
{
}

class AFlameThrowerItem : UAmmoDrivenWeapon
{
    UParticleSystemComponent* FlameParticleComponent;
    UDamageComponent* DamageComponent;
    UStickyFlameSpawner* StickyFlames;
    UDamageComponent* AoEHeatDamageComponent;
    UDamageComponent* ExplodingTargetsDamageComponent;
    UMotionAudioController* MotionAudio;
    int32 ShotCostProjectile;
    FDecalData ImpactDecal;
    float DecalDelay;
    float CurrentDecalDelay;
    UParticleSystem* ImpactParticles;
    UParticleSystemComponent* ImpactParticleInstance;
    UParticleSystem* FP_LongReachParticles;
    UParticleSystem* TP_LongReachParticles;
    float VeryLongReachThreshold;
    UParticleSystem* FP_VeryLongReachParticles;
    UParticleSystem* TP_VeryLongReachParticles;
    TArray<FName> FlameParameterNames;
    float DamageSphereRadius;
    float MaxFlameDistance;
    float FlameGrowthPerSecond;
    float FlameEndPointResponsiveness;
    float FlameIntensityPerSecond;
    TSubclassOf<UStatusEffect> OnFireStatusEffect;
    float ChanceToFleeOnDamage;
    float MeltPointRadius;
    float MeltPointBuildTime;
    float MeltCarveTime;
    UParticleSystem* MeltSteamParticle;
    TArray<UItemUpgrade*> upgrades;
    bool LongReachEnabled;
    bool AoEHeatEnabled;
    float KilledTargetsExplosionChance;
    float ShowDamageParticle;
    UParticleSystem* DamangeTargetsParticles;
    UParticleSystem* KilledTargetsExplodingParticles;
    USoundCue* KilledTargetsExplodingSound;
    UProjectileLauncherBaseComponent* ProjectileLancher;

    void TriggerAoEHeat();
    void ServerMeltIce(const TArray<FVector>& meltPoints);
    void ServerDoDamage(FVector_NetQuantize Start, FVector_NetQuantize End);
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    void All_ShowTargetBurstIntoFire(FVector_NetQuantize Location, FRotator Rotation);
    void All_FlameFeedback(FVector_NetQuantize Location, FRotator Rotation);
}

class AFlameWallProjectile : UProjectile
{
    TSubclassOf<AFlameWallSegment> SegmentParticleClass;
    int32 SegmentCount;
    float WallWidth;
    TSubclassOf<AActor> ImpactClass;
}

class AFlameWallSegment : AActor
{
    USphereComponent* CollisionComponent;
}

class AFlare : AFSDPhysicsActor
{
    float InitialSpeed;
    float InitialAngularImpulse;
    float InitialAngularImpulseRandomScale;
    int32 MaxFlares;
    float ProductionTime;
    float Duration;
    FLinearColor ChromaColor;
    bool IsFlareOn;
    AActor* DamageCauser;
    TSubclassOf<AActor> WeaponPreviewClass;
    TSubclassOf<AItem> LoadoutItem;
    UItemID* ItemID;
    USoundCue* ImpactGroundSound;

    void OnUpdateShadowRadius();
    void OnRep_IsFlareOn();
    void OnFlareSpawnCompleted();
    void OnFlareIgnite();
    void OnFlareExtinguish();
    void Inhibit();
    TSubclassOf<AActor> GetWeaponViewClass();
    AFlare* GetFlareDefaultObject(TSubclassOf<UFlare> flareClass);
    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void ActivateFlare();
}

class AFlareGunProjectile : UProjectile
{
    float Duration;
    bool IsFlareOn;

    void OnUpdateShadowRadius();
    void OnRep_IsFlareOn();
    void OnFlareIgnite();
    void OnFlareExtinguish();
    void OnDroppodImpact(AMiningPod* DropPod);
    void Inhibit();
    void ActivateFlare();
}

class UFlareController : UActorComponent
{
    FFlareControllerOnShadowQualityChanged OnShadowQualityChanged;
    void ShadowQualityChanged();
    TArray<FFlareMeta> FlaresMeta;

    void UnregisterFlareGunProjectile(UFlareGunProjectile* flareprj);
    void UnregisterFlare(UFlare* Flare);
    void RegisterFlareGunProjectile(UFlareGunProjectile* flareprj);
    void RegisterFlare(UFlare* Flare);
    AActor* FindFlareNear(UObject* WorldContextObject, FVector Pos, bool allowMoving, float maxLightRadiusFraction);
}

class UNegPointLightComponent : UPointLightComponent
{
}

class UPerkAsset : UDataAsset
{
    FGuid SaveGameID;
    FText Title;
    UTexture2D* Icon;
    bool bIsEquippable;
    UDialogDataAsset* ShoutOnUseCharge;
    TArray<TSoftClassPtr<UPerkLogic>> PerkLogicClasses;
    TSoftClassPtr<UPerkHUDIconWidget> HudIconWidgetClass;
    TArray<TSoftClassPtr<UPerkHUDActivationWidget>> HudActivationWidgets;
    int32 MaxUseCharges;
    float CoolDownBetweenUse;
    bool bIsHighlighted;

    bool UseCharge(UPlayerController* PlayerController);
    bool Unequip(UObject* WorldContext, UPlayerCharacterID* characterID);
    void SetHighlighted(UObject* WorldContext, bool IsHighlighted);
    void SetCharacterPerks(UObject* WorldContext, UPlayerCharacterID* characterID, const TArray<UPerkAsset*>& perks);
    bool IsUsageType(EPerkUsageType InType);
    bool IsPerkAvailableInTier(int32 Tier);
    bool IsEquippedBy(UObject* WorldContext, UPlayerCharacterID* characterID);
    float GetUseCoolDownTimeLeft(UPlayerController* PlayerController);
    float GetUseCoolDownProgress(UPlayerController* PlayerController);
    float GetUseCoolDownDuration(UPlayerController* PlayerController);
    EPerkUsageType GetUsageType();
    EPerkTierState GetStateAtTier(UObject* WorldContext, int32 Tier);
    int32 GetRemainingUseCharges(UPlayerController* PlayerController);
    int32 GetRankTier(int32 Rank);
    FText GetRankDescription(int32 Rank);
    int32 GetRankCost(int32 Rank);
    bool GetRankAtTier(const int32 Tier, int32& Rank);
    int32 GetMaxUseCharges(UPlayerController* PlayerController);
    TSubclassOf<UPerkHUDIconWidget> GetHudIconWidgetClass();
    TArray<TSubclassOf<UPerkHUDActivationWidget>> GetHudActivationWidgets(EPerkHUDActivationLocation Location);
    UPerkDelegateItem* GetDelegates(UObject* WorldContext);
    int32 GetCurrentRank(UObject* WorldContext);
    int32 GetChargesUsed(UPlayerController* PlayerController);
    FString GetAdditionalRankDescription(int32 Rank);
    bool Equip(UObject* WorldContext, UPlayerCharacterID* characterID);
    bool CanUseCharge(UPlayerController* PlayerController);
    bool BuyPerkAtTier(UObject* WorldContext, int32 Tier);
}

class UFloatPerkAsset : UPerkAsset
{
    TArray<FFloatPerkRank> Ranks;
    TArray<FFloatPerkEffect> Effects;

    float GetPerkValue(UObject* WorldContext);
    float GetLastTierValue();
    float GetFloatPerkValue(UObject* WorldContext, UFloatPerkAsset* Perk, float UnclaimedValue);
}

class UFloatPerkActivation : UDataAsset
{

    void Receive_ActivatePerk(UPlayerCharacter* Character, float Value);
}

class UStatPerkActivation : UFloatPerkActivation
{
    UPawnStat* PawnStat;
    EPawnStatType StatType;
}

class UFloatPerkComponent : UActorComponent
{
    float FloatValue;
    APlayerCharacter* PlayerCharacter;

    void Receive_OnInitialized();
}

class UCreateComponentPerkActivation : UFloatPerkActivation
{
    TSoftClassPtr<UFloatPerkComponent> ComponentClass;
}

class UEscapableGrabberEnemyActivation : UFloatPerkActivation
{
    TSoftClassPtr<AActor> EnemyGrabberClass;
}

class USetCooldownPerkActivation : UFloatPerkActivation
{
}

class USetMaxUsesPerkActivation : UFloatPerkActivation
{
}

class UKillNearbyCreaturePerkComponent : UFloatPerkComponent
{
    TSoftClassPtr<AActor> EnemyClass;
}

class UBezerkPerkComponent : UFloatPerkComponent
{
    UPawnStat* BoostedStat;
    float AmountPerValue;

    void OnHealthChanged(float Health);
}

class UEyeForEyePerkComponent : UFloatPerkComponent
{
    float CoolDown;
    TSoftClassPtr<UStatusEffect> EyeForEyeSTE;
    TSubclassOf<UStatusEffect> LoadedSTE;

    void OnHit(float Damage, UDamageClass* inDamageClass, AActor* DamageCauser, bool anyHealthLost);
}

class UThornsPerkComponent : UFloatPerkComponent
{
    UDamageClass* DamageClass;
    float CoolDown;
    TSubclassOf<UStatusEffect> ThornsSTE;

    void OnHit(float Damage, UDamageClass* inDamageClass, AActor* DamageCauser, bool anyHealthLost);
}

class USalutePerkComponent : UFloatPerkComponent
{
    float CoolDown;
    float FleeRadius;

    void OnSalute();
}

class UShieldLinkComponent : UFloatPerkComponent
{
    TSubclassOf<UStatusEffect> BoostedStatusEffect;
    UStatusEffect* BoostedStatusEffectInstance;
    float LinkDistance;
    TSet<APlayerCharacter*> LinkedCharacters;
    TSubclassOf<UStatusEffect> LinkStatusEffect;

    void TimerFunction();
}

class UBeastMasterComponent : UFloatPerkComponent
{
    bool ShowCanCharmIcon;

    void SetDamage(UDamageComponent* cmp, float dmg);
    UActorComponent* AddPetComponent(TSubclassOf<UActorComponent> ComponentClass, UFSDPawn* targetPet, UPlayerCharacter* petOwner);
}

class UPetComponent : UActorComponent
{
    TWeakObjectPtr<APlayerCharacter> OwningPlayer;

    void ReceiveOwningPlayerChanged();
}

class UBeastMasterUseSphere : USphereComponent
{
}

class UFloodFillSettings : UDataAsset
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
}

class UDetailNoise : UFloodFillSettings
{
    float NoiseRange;
}

class UFlyingStateComponent : UCharacterStateComponent
{
}

class UForgingFunctionLibrary : UBlueprintFunctionLibrary
{

    void SortSchematicDelegate__DelegateSignature(const USchematic* Schematic1, const USchematic* Schematic2, bool& FirstIsLarger);
    USchematic* GiveForginMasteryReward(UObject* WorldContextObject);
    bool GiveForgingXP(UObject* WorldContextObject);
    TArray<USchematic*> GetOwnedSchematicsSorted(UObject* WorldContextObject, bool SmallestFirst, const SortSchematicDelegate__DelegateSignature& IsLargerThan);
    TArray<USchematic*> GetOwnedSchematics(UObject* WorldContextObject);
    ESchematicType GetNextForgingMasterRewardType(UObject* WorldContextObject);
    int32 GetForgingXP(UObject* WorldContextObject);
    float GetForgingLevelProgress(UObject* WorldContextObject);
    int32 GetForgingLevel(UObject* WorldContextObject);
    TArray<USchematic*> GetForgedSchematics(UObject* WorldContextObject);
    TArray<USchematic*> GetAllSchematicsSorted(UObject* WorldContextObject, bool SmallestFirst, const SortSchematicDelegate__DelegateSignature& IsLargerThan);
    TArray<USchematic*> GetAllSchematics(UObject* WorldContextObject);
}

class UFormationData : UDataAsset
{
    TArray<FFormationDataItem> FormationItems;
    FGameplayTagQuery LeaderQuery;
    FGameplayTagQuery MemberQuery;
}

class UGroundFormationData : UFormationData
{
    int32 FormationSize;
    float FormationSpread;
    float RandomSpread;
}

class UFlyingFormationData : UFormationData
{
    int32 FormationSize;
    float FormationSpread;
    float RandomSpread;
}

class UFormationsManagerComponent : UActorComponent
{
    UEnemySpawnManager* SpawnManager;
    TArray<UFormationData*> FormationData;
}

class UFragileDebrisCleaner : USceneComponent
{
    float CleanRadius;
}

class UFriendlyHealthComponent : UHealthComponent
{
    float MaxHealth;
    float friendlyFireModifier;
    float NeutralDamageModifier;
    float BigHitDamageModifier;
    float BigHitDamageReductionThreshold;
    UParticleSystem* GenericImpactParticles;

    float GetMaxHealth();
}

class UFrozenStateComponent : UCharacterStateComponent
{
    FRandRange DeFrostAmount;
    USoundBase* AudioFreeFromIce;
    UFSDPhysicalMaterial* IcePhysicalMaterial;
    UFSDPhysicalMaterial* DwarfFleshMaterial;
    float SlowAnimationSpeed;

    void Server_ThawPlayer();
    void ReceiveOnDefrosting();
}

class UFSDAchievement : USavableDataAsset
{
    FString SteamAPIAchievementName;
    FString SteamAPIStatName;
    FString XboxAchievementID;
    float AchievementTargetValue;
    EFSDAchievementType AchievementType;

    void SetAchievementProgressForEntireServer(float Progress, UObject* WorldContext);
    void SetAchievementProgress(float Progress, const UFSDPlayerController* Player, UObject* WorldContext);
    void ResetStatForAchievement(UFSDAchievement* AchievementToReset, const UFSDPlayerController* Player);
    float GetAchievementTargetValue();
}

class UAchievementList : UDataAsset
{
    UFSDAchievement* WeakspotAchievement;
    UFSDAchievement* MissionTimeAchievement;
    UFSDAchievement* MissionHosterAchievement;
    UFSDAchievement* RollerCoasterAchievement;
    UFSDAchievement* DrillByShootingAchievement;
    UFSDAchievement* BarrelKickerAchievement;
    UFSDAchievement* Hazard3CompletedAchievement;
    UFSDAchievement* Hazard3StreakAchievement;
    UFSDAchievement* Hazard4CompletedAchievement;
    UFSDAchievement* Hazard4StreakAchievement;
    UFSDAchievement* Hazard5CompletedAchievement;
    UFSDAchievement* Hazard5StreakAchievement;
    UFSDAchievement* Hazard3NoKillNoSupplyAchievement;
    UFSDAchievement* Hazard4NoKillNoSupplyAchievement;
    UFSDAchievement* Hazard5NoKillNoSupplyAchievement;
    UFSDAchievement* PlayedWithLowerRankAchievement;
    UFSDAchievement* MilestoneAchievementPerfMatters;
    UFSDAchievement* MilestoneAchievement;
    UFSDAchievement* OwnedPerkAchievement;
    UFSDAchievement* MovingOnUpAchievement;
    UFSDAchievement* CorporateClimberAchievement;
    UFSDAchievement* HatTrickAchievement;
    UFSDAchievement* FullTeamAchievement;
    UFSDAchievement* SilverTierEmployeeAchievement;
    UFSDAchievement* ProTeamAchievement;
    UFSDAchievement* GoldTierEmployeeAchievement;
    UFSDAchievement* LegendaryTeamAchievement;
    UFSDAchievement* AllVanityEquippedAchievement;
    UFSDAchievement* MoustacheBuyerAchievement;
    UFSDAchievement* MutatorAchievement;
    UFSDAchievement* StateOfTheArtAchievement;
    UFSDAchievement* ExploringMyOptionsAchievement;
    UFSDAchievement* AdvancedRoboticsAchievement;
    UFSDAchievement* WithoutAPaddleAchievement;
    UFSDAchievement* FirstMissionCompleted;
    UFSDAchievement* HundredMissionsCompleted;
    UFSDAchievement* TenSoloMissionsCompleted;
    UFSDAchievement* SupplyPodsCalledStat;
    UFSDAchievement* LootbugsKilledStat;
    UFSDAchievement* PraetoriansKilledStat;
    UFSDAchievement* NormalDeepDiveCompleted;
    UFSDAchievement* EliteDeepDiveCompleted;
    UFSDAchievement* DeepDiveCompletedUnderTime;
    UFSDAchievement* DeepDivesCompleted;
    TArray<UFSDAchievement*> AllAchievements;
}

class UFSDAdvancedLabel : UUserWidget
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
    UTextBlock* CreateTextBlock(FString Text, FSlateFontInfo InFontInfo, FLinearColor Color);
    UImage* CreateImageSized(UTexture2D* Texture, int32 Width, int32 Height);
    UImage* CreateImage(UTexture2D* Texture, bool MatchSize);
    UHorizontalBox* CreateHorizontalBox();
}

class UGamepadCursorSettings : UDeveloperSettings
{
    float MaxSpeed;
    float Acceleration;
    float StickySlowDown;
    float DeadZone;
}

class UFSDAnimNotify_PlaySound : UAnimNotify_PlaySound
{
}

class UAnimNotify_PlaySound2D : UAnimNotify
{
    USoundBase* Sound;
    float VolumeMultiplier;
    float PitchMultiplier;
}

class UAnimNotifyState_PlaySound : UAnimNotifyState
{
    USoundCue* Sound;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
}

class UAnimNotify_FSDPlayParticleEffect : UAnimNotify
{
    UFXSystemAsset* PSTemplate;
    FVector LocationOffset;
    FRotator RotationOffset;
    bool AlwaysZUp;
    FVector Scale;
    uint8 Attached;
    FName SocketName;
    bool IsFirstPerson;
    bool UseTerainMaterial;
}

class UAnimNotifyState_FSDTimedNiagaraEffect : UAnimNotifyState
{
    UNiagaraSystem* Template;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
    bool IsFirstPerson;
    bool bDestroyAtEnd;
}

class UEnemyPlaySoundKey : UDataAsset
{
}

class UEnemyPlaySoundByKeyAnimNotify : UAnimNotify
{
    UEnemyPlaySoundKey* SoundKey;
    float VolumeMultiplier;
    float PitchMultiplier;
    uint8 bFollow;
    FName AttachName;
}

class UAnimNotify_PushSoundMix : UAnimNotify
{
    USoundMix* SoundMix;
    float MaxDistance;
}

class UAnimNotifyState_SoundMix : UAnimNotifyState
{
    USoundMix* SoundMix;
    float MaxDistance;
}

class UEnemySpawnEffectsKey : UDataAsset
{
}

class UEnemySpawnEffectsByKeyAnimNotify : UAnimNotify
{
    UEnemySpawnEffectsKey* EffectKey;
    uint8 Attached;
    FName SocketName;
}

class UAnimNotifyState_EnemyPlaySoundByKey : UAnimNotifyState
{
    UEnemyPlaySoundKey* SoundKey;
    float FadeOut;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
}

class UAnimNotify_CameraShake : UAnimNotify
{
    float InnerRadius;
    float OuterRadius;
    bool ControllerOnly;
    TSubclassOf<UCameraShake> CameraShake;
}

class UAnimNotify_Shout : UAnimNotify
{
    UDialogDataAsset* Shout;
    bool ShoutNetworked;
    float LocalShoutVolumeMultiplier;
}

class UAnimNotify_FootStep : UAnimNotify
{
    bool IsLeft;
}

class UAnimNotify_MessageOwner : UAnimNotify
{
    FName Message;
}

class UAnimNotify_TerrainFootStep : UAnimNotify
{
    UParticleSystem* ParticleTemplate;
    FName BoneName;
}

class UAnimNotify_SpawnActor : UAnimNotify
{
    TSubclassOf<AActor> Actor;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
}

class UAnimNotify_HideBones : UAnimNotify
{
    TArray<FName> TargetBoneNames;
}

class UAnimNotify_HideBone : UAnimNotify
{
    FName BoneName;
}

class UAnimNotify_UnHideBone : UAnimNotify
{
    FName BoneName;
}

class UCopyBoneVisibilityCompleted : UInterface
{

    void CopyBoneVisibilityCompleted(int32 BoneIndex);
}

class UAnimNotify_CopyBoneVisibility : UAnimNotify
{
    FName SourceBoneName;
    TArray<FName> TargetBoneNames;
    bool HideSourceBone;
}

class UAnimNotifyState_SpawnMesh : UAnimNotifyState
{
    UStaticMesh* Mesh;
    bool UseFirstPersonComponent;
    FName SocketName;
    FVector ScaleOverride;
    FVector LocationOffset;
    FRotator RotationOffset;
}

class UAnimNotifyState_SpawnSkeletalMesh : UAnimNotifyState
{
    USkeletalMesh* Mesh;
    UAnimSequenceBase* AnimationToPlay;
    bool UseFirstPersonComponent;
    FName SocketName;
    FVector ScaleOverride;
    FVector LocationOffset;
    FRotator RotationOffset;
}

class UAnimNotifyState_SpawnSkinnedMesh : UAnimNotifyState
{
    EItemCategory ItemCategory;
    bool UseFirstPersonComponent;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
}

class UAnimNotifyState_HideBone : UAnimNotifyState
{
    FName BoneName;
}

class UAnimNotifyState_Salute : UAnimNotifyState
{
    FName BoneName;
    bool FirstPerson;
}

class UAnimNotifyState_InputWindow : UAnimNotifyState
{
}

class USpawnReleasedActor : UInterface
{

    bool Released();
    bool Attached(AActor* Parent);
}

class UAnimNotifyState_SpawnAndReleaseActor : UAnimNotifyState
{
    TSubclassOf<AActor> Actor;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
}

class UAnimNotifyState_HideEquippedItem : UAnimNotifyState
{
}

class UAnimNotifyState_OverrideItemOffset : UAnimNotifyState
{
    FVector CameraOffset;
}

class UAnimNotifyState_WeaponReload : UAnimNotifyState
{
}

class UAnimNotifyState_ConstrainItem : UAnimNotifyState
{
    FName OldConstraint;
    FName NewConstraint;
}

class UGameAnimationsSettings : UDeveloperSettings
{
    FSoftObjectPath FootstepTestingSound;
    FSoftObjectPath FootstepTestingParticles;
}

class UDynamicMeshScaler : UActorComponent
{
}

class UAnimNotifyState_TimedParticleEffectWithImpactDecals : UAnimNotifyState_TimedParticleEffect
{
    UMaterialInterface* DecalMaterial;
    float DecalSize;
    float FadeStartDelay;
    float FadeDuration;

    void OnParticleCollision(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);
}

class UFSDAnimationFunctionLibrary : UBlueprintFunctionLibrary
{

    float GetAnimSequenceLength(const UAnimSequence* AnimSequence);
}

class UFSDAssetManager : UAssetManager
{
}

class UFSDAudioComponent : UAudioComponent
{
}

class UFSDBehaviorTreeComponent : UBehaviorTreeComponent
{
}

class UFSDCheatManager : UCheatManager
{
    int32 RoomJumpCount;
    float PreviousMaxDistanceBeforeCleanup;
    bool UnlimitedScoutFlareDuration;
    FFSDCheatManagerToggleHoopGameMovement ToggleHoopGameMovement;
    void CheatEvent();
    AActor* SpawnPosMarker;
    bool EscortShowSmartRockDebug;
    bool IsUsingSavedCheats;

    void SwitchCharacter(UPlayerCharacterID* characterID);
    void SpawnEnemies(UEnemyDescriptor* desscriptor, int32 count);
    void SpawnCritters(UBaseCritterDescriptor* descriptor, int32 count);
    void SpawnBosco(SoftClassProperty droneClass, TSubclassOf<UFSDAIController> aControllerClass);
    void ShowTutorialDebug();
    void SetStandingDown(bool standingDown);
    void SetSpawnEnemies(bool SpawnEnemies);
    bool SetSavedCheatValue(const FName CheatName, const int32& ValueToSet);
    void SetQuadPickAxe(bool quad);
    void SetHUDVisible(bool ShowHUD);
    void SetGodMode(bool God);
    void SetFastMovement(bool fast);
    void ResetTutorials();
    void ResetSpacerigIntroMessage();
    void R_RemoveResources(int32 Number);
    void R_RemoveCredits(int32 Number);
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
    void R_Add_BitterGem(int32 Amount);
    void R_Add_Aquarq(int32 Amount);
    bool IsInGodMode();
    bool GetSavedCheatValue(const FName CheatName, int32& ValueToGet);
    void GetListOfRoomNames(TArray<FString>& roomNames);
    void DestroyAllInstances(TSubclassOf<AActor> destroy);
    void D_Rejoin_RestoreState();
    void D_MovieModeStartWithCameraShake(bool Value);
    void D_MovieModeStartAtOrigin(bool Value);
    void D_EnableMovieModeInSpacerig(bool Value);
    void D_EnableMovieMode(bool Value);
    void Cheat_UnlockAllWeapons(UObject* WorldContextObject);
    void Cheat_UnlockAllUpgrades(UObject* WorldContextObject);
    void Cheat_UnlockAll_Poses(UObject* WorldContextObject);
    void Cheat_UnlockAll_Beers(UObject* WorldContextObject);
    void Cheat_SetSpawnPosMarker(AActor* Actor);
    void Cheat_SetHealth(float newHealthValue, UPlayerCharacter* Player);
    void Cheat_Schematic_UnlockAll(UObject* WorldContextObject);
    void Cheat_Schematic_ResetAll(UObject* WorldContextObject);
    void Cheat_Schematic_GiveRandom(UObject* WorldContextObject);
    void Cheat_Schematic_ForgeAll(UObject* WorldContextObject);
    void Cheat_Resources(UObject* WorldContextObject, float Amount);
    void Cheat_ResetEquippedUpgrades(UObject* WorldContextObject);
    void Cheat_RemoveResources(UObject* WorldContextObject, int32 Amount);
    void Cheat_PickAxeVanity_UnlockAll(UObject* WorldContextObject);
    void Cheat_PickAxeVanity_ResetAll(UObject* WorldContextObject);
    void Cheat_MinersManual_ShowAll(UObject* WorldContextObject);
    void Cheat_GenerateNewMissionSeed(UObject* WorldContextObject, bool Enabled);
    void Cheat_ForceTreasure(UObject* WorldContextObject);
    void Cheat_ForceLostPack(UObject* WorldContextObject);
    void Cheat_DeepDives_Refresh(UObject* WorldContextObject);
    void Cheat_Campaign_Complete(UObject* WorldContextObject);
    void Cheat_Campaign_Advance(UObject* WorldContextObject);
    void Cheat_AddXP(UObject* WorldContextObject, int32 Amount);
    void Cheat_AddPerkPoints(UObject* WorldContextObject, int32 Amount);
    void Cheat_AddCredits(UObject* WorldContextObject, int32 Amount);
    void C_Windows_PrintStack();
    void C_Windows_CloseAll();
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
    void C_Treasures_Track(bool Track);
    void C_Treasures_Reward(int32 count);
    void C_ToggleHoopGameMovement();
    void C_ToggleFadingEnabled();
    void C_ToggleFadingDebug();
    void C_ToggleCanShowBlood();
    void C_StopMovement(bool shouldMove);
    void C_SpawnScriptedWaveIndex(int32 Index);
    void C_SpawnScriptedWave();
    void C_SpawnNormalWave();
    void C_SpawnEvenRewarder();
    void C_SpawnBarrelOnPlayer(int32 Amount);
    void C_SetUseSavedCheatsByDefault(bool useSavedCheats);
    void C_SetTestMission(int32 missionIndex);
    void C_SetSavedCheats();
    void C_SetPlayers(int32 Number);
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
    void C_Seasons_IncrementChallenge(int32 Index);
    void C_Seasons_CompleteScripChallenge(int32 Number);
    void C_Seasons_ClearChallenges();
    void C_Seasons_ClearAllProgress();
    void C_Seasons_AddXP(int32 Number);
    void C_Seasons_AddChallenge();
    void C_ScoutFlareInfiniteDuration(bool Enabled);
    void C_Schematics_UnlockAll();
    void C_Schematics_ResetAll();
    void C_Schematics_ForgeAll();
    void C_Schematics_ClearHasSeenFirstMessage();
    void C_Schematic_GiveRandom();
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
    void C_Reset_PickaxeParts();
    void C_Reset_Perks();
    void C_Reset_MinersManual();
    void C_Reset_EnemyKillCount();
    void C_Reset_Drinks();
    void C_RemovePlayerRanks(int32 Number);
    void C_RemoveAllWidgets();
    void C_RefreshDailyDeal(int32 Seed);
    void C_Refinery_BreakPipes();
    void C_RecordMode();
    void C_Promotion_SetLevelSpecific(UPlayerCharacter* onCharacter, int32 Number);
    void C_Promotion_SetLevel(int32 Number);
    void C_Promotion_SetCampaignComplete();
    void C_Promotion_ClearRewardsSeen();
    void C_ProjectileDrawPaths();
    void C_ProjectileDebugPrintToggle();
    void C_MissionMap_TestDistribution();
    void C_MissionMap_ForceWarning(int32 Index);
    void C_MissionMap_ForceAnomaly(int32 Index);
    void C_MissionMap_DoubleWarning(int32 indexA, int32 indexB);
    void C_MinersManual_EnableWorkInProgress(UObject* WorldContextObject);
    void C_MachineEvents_Track(bool Track);
    void C_MachineEvents_FinishCurrent();
    void C_LevelUpCharacter(int32 Amount);
    void C_KillTeam();
    void C_KillPlayer();
    void C_KillAll();
    void C_JumpToNextRoom();
    void C_IncrementAllMissionStats(int32 Amount);
    void C_GodMode();
    void C_GiveAllGenericHeroItems();
    void C_GameDLC_ResetAnnouncements();
    void C_FSDEvent_SetDebugEvent(FString EventName);
    void C_FSDEvent_ClearSeenRewards();
    void C_ForceCrash();
    void C_FixedPLSSeed(int32 Seed);
    void C_FixedMissionSeed(int32 Seed);
    void C_FailMission();
    void C_FadeFromBlack(UObject* WorldContextObject);
    void C_Facility_DisableShields();
    void C_Escort_ShowSmartRockDebug(bool shouldShow);
    void C_Escort_SetMuleSpeed(UObject* WorldContextObject, float Speed);
    void C_Escort_JumpToNextPhase(UObject* WorldContextObject);
    void C_Escort_AddOilShale(int32 Number);
    void C_DeepDives_UnlockAll();
    void C_DeepDives_SetSeed(int32 Seed);
    void C_DeepDives_Reset();
    void C_DeepDives_Refresh();
    void C_DeepDives_List();
    void C_CompleteObjectives();
    void C_CompleteMission();
    void C_ClearAllMissionStats();
    void C_ClearAllMilestones();
    void C_ChangeIntoxication(int32 Percent);
    void C_Campaign_ResetProgress();
    void C_Campaign_ResetCompleted();
    void C_Campaign_CompleteMain();
    void C_Campaign_CompleteCurrent();
    void C_Campaign_Advance();
    void C_AutoRotateMissionMap(bool Enabled);
    void C_AddXP(int32 Number);
    void C_AddUncappedXP(int32 Amount);
    void C_AddForgingXP(int32 Number);
    void AddResourceToTeamDeposit(UResourceData* Resource, float Amount);
}

class UFSDCloudLoadSave : UObject
{
    FFSDCloudLoadSaveOnCloudLoadAll OnCloudLoadAll;
    void SDCloudLoad(const TArray<UFSDSaveGame*>& savegames);
    FFSDCloudLoadSaveOnCloudLoadAllFailed OnCloudLoadAllFailed;
    void SDCloudFailed();
    int32 NumFailedSaves;

    void StartCloudLoadAll(UObject* WorldContextObject, int32 Index, int32 Offset);
}

class UFSDConversionLibrary : UBlueprintFunctionLibrary
{

    FVector_NetQuantizeNormal VectorToNetQuantizeNormal(FVector Vec);
    FVector_NetQuantize VectorToNetQuantize(FVector Vec);
    FVector QuatToVector(FQuat Quat);
    FRotator QuatToRotator(FQuat Quat);
    FVector_NetQuantizeNormal QuadToNetQuantizeNormal(FQuat Quat);
    FVector ComponentToWorldLocation(USceneComponent* Component);
    FVector ActorToWorldLocation(AActor* Actor);
}

class UFSDCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FFSDCreateSessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FFSDCreateSessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();

    UFSDCreateSessionCallbackProxy* FSDCreateSession(UObject* WorldContextObject, UPlayerController* PlayerController, int32 PublicConnections, bool bUseLAN, bool bFriendsOnly);
}

class UFSDCustomDPIScalingRule : UDPICustomScalingRule
{
}

class UFSDEvent : UDataAsset
{
    FFSDEventOnActiveChanged OnActiveChanged;
    void FSDEventActivateChanged(const UFSDEvent* InFsdEvent, bool InIsActive);
    FName EventName;
    FGuid SaveGameID;
    bool bHasClaimableRewards;
    bool bFreeBeerEvent;
    TArray<TSoftClassPtr<ADebrisDataActor>> EventDebris;
    TArray<TSoftObjectPtr<UWorld>> SpacerigSublevels;
    FClaimableRewardView ClaimableRewards;
    TArray<TSoftClassPtr<UCampaign>> Campaigns;

    void MarkClaimableRewardsSeen(UObject* WorldContext);
    bool IsFsdEventActive(UObject* WorldContext, const UFSDEvent* FSDEvent);
    bool HasUnseenClaimableRewards(UObject* WorldContext);
    bool GiveRewards(UPlayerController* PlayerController);
    bool GetIsActive(UObject* WorldContext);
}

class UFSDEventCollection : UDataAsset
{
    TSet<UFSDEvent*> Events;
    FFSDEventCollectionOnEventActiveChanged OnEventActiveChanged;
    void FSDEventActivateChanged(const UFSDEvent* InFsdEvent, bool InIsActive);

    UFSDEvent* FindEventHandler(const FName& EventName);
    TArray<UFSDEvent*> FindAllEventHandlers(const FName& EventName);
}

class UFSDEventManager : UGameInstanceSubsystem
{
    FFSDEventManagerOnFSDEventsRefresh OnFSDEventsRefresh;
    void FSDEventsRefreshDelegate();
    FFSDEventManagerOnEventActiveChanged OnEventActiveChanged;
    void FSDEventActivateChanged(const UFSDEvent* InFsdEvent, bool InIsActive);
    TSet<FName> PendingActiveEvents;
    TSet<FName> ActiveEvents;
    int32 NumFailedRequests;
    bool BackendDataValid;
    FDateTime LastRequestTime;
    float NextCheckTime;

    bool IsEventActive(const UFSDEvent* FSDEvent);
    TArray<UFSDEvent*> GetActiveEventHandlers();
    void FSDEventsRefreshDelegate__DelegateSignature();
    bool FSDEventsReady();
}

class UFSDFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FFSDFindSessionsCallbackProxyOnSuccess OnSuccess;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FFSDFindSessionsCallbackProxyOnFailure OnFailure;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FFSDFindSessionsCallbackProxyOnRefresh OnRefresh;
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    UObject* WorldContextObject;
    UFSDFindSteamSessions* FSDFindSteamSessions;

    void OnFSDCompleted(bool bSuccess, const TArray<FBlueprintSessionResult>& Results);
    void ManualRefreshServerList();
    UFSDFindSessionsCallbackProxy* FSDFindSessions(UObject* WorldContextObject, UPlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
    UFSDFindSessionsCallbackProxy* FSDFindFullSessions(UObject* WorldContextObject, UPlayerController* PlayerController, int32 MaxResults);
}

class UFSDFindSteamSessions : UObject
{
    FFSDFindSteamSessionsOnFindResult OnFindResult;
    void indSteamSessionsResult(bool success, const TArray<FBlueprintSessionResult>& Results);
}

class AFSDFlyingBugController : UFSDAIController
{
    UBehaviorTree* BehaviourTree;
    float UpdateLosInterval;
    bool SetTargetOnAlert;
    bool SyncTargetWithBB;

    void OnFlyingBugAlerted();
}

class ADashingFlyingBugController : UFSDFlyingBugController
{
}

class UFSDFriendsAndInvites : UObject
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
}

class UMissionResultInfo : UObject
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
    TArray<UTexture2D*> WarningIcons;
    TArray<float> WarningBonusses;
    float TotalCreditsSum;
    float TotalXPSum;
    bool WasSuccess;

    float GetWarningBonusSum();
}

class UCampaignNotification : UObject
{
    UCampaign* Campaign;
    UCampaignMission* mission;
    int32 Progress;
    bool bIsCampaignCompleted;
}

class UFSDGameInstance : UGameInstance
{
    FFSDGameInstanceOnTemporaryBuffChanged OnTemporaryBuffChanged;
    void TemporaryBuffChanged(UTemporaryBuff* buff, UPlayerCharacter* AffectedPlayer);
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
    void OnLoaderStartSig(ULevelSequence* LoaderLevelSequence);
    FFSDGameInstanceOnPlayLevelSequenceInCharacterWorld OnPlayLevelSequenceInCharacterWorld;
    void OnPlayLevelSequenceInCharacterWorldSig(ULevelSequence* CharacterLevelSequence);
    FFSDGameInstanceOnLoaderStop OnLoaderStop;
    void GenericSignature();
    FFSDGameInstanceOnCharacterSelectionStart OnCharacterSelectionStart;
    void ShowCharacterWorldSignature(ECharselectionCameraLocation selectionLocation);
    FFSDGameInstanceOnStartForging OnStartForging;
    void StartForging();
    FFSDGameInstanceOnForgingDone OnForgingDone;
    void ForgingDone();
    FFSDGameInstanceOnCharacterSelectionStop OnCharacterSelectionStop;
    void GenericSignature();
    FFSDGameInstanceOnShowCharacterSelectionRefresh OnShowCharacterSelectionRefresh;
    void GenericSignature();
    FFSDGameInstanceOnTutorialManagerSet OnTutorialManagerSet;
    void TutorialManagerSignature(ATutorialManager* NewManager);
    FFSDGameInstanceOnLocalPlayerCharacterSet OnLocalPlayerCharacterSet;
    void PlayerCharacterSignature(UPlayerCharacter* PlayerCharacter);
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
    void NewPostProcessingManager(APostProcessingManager* PostProcessingManager);
    FFSDGameInstanceOnPreviewSkinChanged OnPreviewSkinChanged;
    void SkinSignature(UItemSkin* Skin);
    bool ShowingReconnectScreen;
    FPendingRewards PendingMissionRewards;
    TArray<FClaimableRewardEntry> PendingPromotionRewards;
    TWeakObjectPtr<UMouseCursorWidget> MouseCursorWidget;
    FFSDGameInstanceOnShowCharacterSelector OnShowCharacterSelector;
    void ShowCharacterSelectorSignature(TSubclassOf<UPlayerCharacter> NewCharacter, ECharselectionCameraLocation selectionLocation);
    FFSDGameInstanceOnShowViewer3D OnShowViewer3D;
    void ShowViewer3DSignature(TSubclassOf<AActor> Actor, ECharselectionCameraLocation selectionLocation);
    FFSDGameInstanceOnShowCharacterSelectorEquipSlot OnShowCharacterSelectorEquipSlot;
    void ShowCharacterSelectorEqiupSlotSignature(int32 EquipSlot);
    FFSDGameInstanceOnShowCharacterSelectorEquip OnShowCharacterSelectorEquip;
    void ShowCharacterSelectorEquipSignature(TSubclassOf<AItem> itemClass, int32 EquipSlot);
    FFSDGameInstanceOnShowCharacterSelectorRotate OnShowCharacterSelectorRotate;
    void ShowCharacterSelectorRotateSignature(float Pitch, float Yaw);
    FFSDGameInstanceOnShowEndScreen OnShowEndScreen;
    void ShowCharacterSelectorEndScreenSignature(FCharacterViewScene viewScene);
    AProceduralSetup* ProceduralSetup;
    bool HasStartedAMission;
    FString FSDPassword;
    bool FSDPrivateServer;
    bool SoloSession;
    bool IsJoiningInvite;
    bool FirstTimeInFrontend;
    bool SessionFirstStartOnSpaceRig;
    bool ShowFirstCharacterSelector;
    bool ShowSaveWarning;
    AActor* WorldViewTargetDummy;
    UMissionResultInfo* MissionResultInfo;
    bool LoaderSequencePlaying;
    FString LastPerksLoadout;
    AActor* CharacterSelectionLastViewTarget;
    bool HasSeenInfoScreen;
    FTransform CharacterSelectionViewTargetTransform;
    FTransform LoaderViewTargetTransform;
    FFSDGameInstanceOnGeneratedMissionChanged OnGeneratedMissionChanged;
    void GeneratedMissionSignature(UGeneratedMission* OutGeneratedMission);
    FGameStateSeamlessTravelStorage GameStateSeamlessTravelStorage;
    FFSDGameInstanceOnDonkeyChanged OnDonkeyChanged;
    void DonkeyCharacterDelegate(UMolly* InDonkey);
    TWeakObjectPtr<AMolly> Donkey;
    FFSDGameInstanceOnBoscoChanged OnBoscoChanged;
    void BoscoChanged(UBosco* Bosco);
    bool DEBUGSpawnRandomMissions;
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
    TMap<FString, FString> FriendSessions;
    FFSDGameInstanceOnNewSpaceRigNotification OnNewSpaceRigNotification;
    void NewSpaceRigNotification(UFSDGameInstance* GameInstance);
    UGoogleAnalyticsWrapper* GoogleAnalyticsWI;
    USpecialEvent* ForcedSpecialEvent;
    bool ShowMinerManualWorkInProgress;
    FFSDGameInstanceOnCampaignNotification OnCampaignNotification;
    void CampaignNotificationSignature(UCampaignNotification* Notification);
    FFSDGameInstanceOnMinersManualNotification OnMinersManualNotification;
    void MinersManualNotification(EMinersManualSection Section, FGuid ObjectID, FText Text);
    FFSDGameInstanceOnNewHUDWarning OnNewHUDWarning;
    void NewHUDWarningDelegate(UHUDWarningWidget* newWidget);
    float LastDreadnaughtKillTime;
    TWeakObjectPtr<UWindowWidget> ActiveEscapeMenu;
    UCampaignNotification* CampaignNotification;
    TWeakObjectPtr<APostProcessingManager> PostProcessingManager;
    FFadeData Fading;
    TArray<FSpaceRigNotification> SpaceRigNotifications;
    TWeakObjectPtr<ABosco> Drone;
    TWeakObjectPtr<APlayerCharacter> LocalPlayerCharacter;
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    ACharacterSelectionSwitcher* CharacterSelectionSwitcher;
    bool bGameSettingsChanged;
    FFSDServerSearchOptions ServerSearchOptions;
    bool ServerSearchActive;
    FFSDGameInstanceOnPrivilegeCheckComplete OnPrivilegeCheckComplete;
    void OnPrivilegeCheckComplete();
    bool IsOnPressStartScreen;
    bool HasSeenStartScreen;
    TSubclassOf<AProceduralSetup> ProceduralLevel;
    TSubclassOf<UIconGenerationManager> IconGenerationManagerClass;
    UIconGenerationManager* IconGenerationManager;
    UCampaignManager* CampaignManager;
    UDeepDiveManager* DeepDiveManager;
    UGeneratedMission* GeneratedMission;
    UDifficultySetting* DesiredDifficulty;
    UFSDSaveGame* SaveGame;
    EDisconnectReason DisconnectReason;
    TArray<UWorld*> AlwaysLoadedWorlds;
    bool ShowCharacterSelectionWorld;
    TSubclassOf<AActor> Viewer3DClass;
    bool ShowLoaderWorld;
    bool CharacterSelectionWorldActive;
    bool MixerInteractivityEnabled;
    bool LoaderWorldActive;
    bool ResetHUDWhenReturning;
    bool MovieModeActive;
    bool MovieModeActiveInSpacerig;
    bool MovieModeStartAtOrigin;
    bool MovieModeStartWithCameraShake;
    USchematic* ActiveForgeSchematic;
    UFSDCloudLoadSave* FSDCloudLoadSave;
    UFSDSessionUpdater* SessionUpdater;
    UFSDSendToURL* SendToURL;
    UFSDFriendsAndInvites* FriendsAndInvites;
    double SessionStartTime;
    int32 SessionStartTimestamp;
    float InKBytesPerSecond;
    float OutKBytesPerSecond;
    bool PreSpawnNigaraParticles;
    UTemporaryBuff* TemporaryBuff;
    TSoftObjectPtr<ULevelSequence> NextLoaderSequence;
    EAlwaysLoadedWorlds NextLoaderLevel;
    TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence;
    TSoftObjectPtr<ULevelSequence> DeepDiveLoaderSequence2;
    USoundSubmix* ControllerVibrationSubmix;
    USoundSubmix* ControllerSpeakerSubmix;

    void UpdateGlobelMissionSeed();
    void StopPhotographyInputProcessor();
    void StopPersonalAnalytics();
    void SteamServerJoinStatusDelegate__DelegateSignature(ESteamServerJoinStatus Status);
    void SteamSearchRegionDelegate__DelegateSignature(ESteamSearchRegion Region);
    void StartPhotographyInputProcessor();
    void StartPersonalAnalytics();
    AProceduralSetup* SpawnProcedural();
    bool ShouldPendingRewardsBeShown();
    bool ShouldPendingRewardsBeGiven();
    void SetViewer3DClass(TSubclassOf<AActor> NewClass, ECharselectionCameraLocation Location);
    void SetSteamServerJoinStatus(ESteamServerJoinStatus NewStatus);
    void SetSteamSearchRegion(ESteamSearchRegion NewRegion);
    void SetServerSearchOptions(const FFSDServerSearchOptions& options);
    void SetServerSearchActive(bool Active);
    void SetSelectedMission(UGeneratedMission* mission, bool updateSessionSettings);
    void SetProceduralMap(TSubclassOf<AProceduralSetup> procedural);
    void SetPendingInviteJoinModding(const FBlueprintSessionResult& Result);
    void SetMinersManualNotification(EMinersManualSection Section, UObject* IdentifyingObject, FText Text);
    void SetLoaderWorldVisible(bool V, bool resetHud);
    void SetIsUsingOnlineFeatures(bool bIsOnlineFeatureUsed);
    void SetHasSeenInfoScreen();
    void SetFSDPassword(FString pw);
    void SetEligableForRetirementAssignment(bool eligable);
    void SetCharacterSelectionWorldVisible(bool V, ECharselectionCameraLocation cameraLocation, bool resetHud, ECharacterSelectorItemStatus itemStatus);
    void SetCharacterSelectionSwitcher(ACharacterSelectionSwitcher* switcher);
    void SendSteamInfo();
    void ScheduleResetOfWorldsAndGameDataThenOpenLevel(FName LevelName);
    void RestoreCursors();
    void ResetViewer3DClass();
    void ResetSaveGame();
    void ResetAlwaysLoadedWorldsAndGameData();
    void RemoveRemporaryBuff();
    void RemoveBosco();
    void RefreshIsGameModded();
    void PostInit(bool reload);
    void PairingUsePreviousProfile();
    void PairingUseNewProfile();
    void OnStartSearchForFriendsComplete__DelegateSignature(bool bWasSuccessful, FString ErrorStr);
    void OnNewFSDSessionID(FString sessionId);
    void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, uint8 failType, FString errorMessage);
    void OnLoadComplete(FString MapName);
    void NewHUDWarningDelegate__DelegateSignature(UHUDWarningWidget* newWidget);
    void LoadSaveGame(UFSDSaveGame* toLoad);
    bool IsScreenFadingToBlack(UObject* WorldContext);
    bool IsScreenFadingFromBlack(UObject* WorldContext);
    bool IsScreenFading(UObject* WorldContext);
    bool IsPendingInvitePasswordProtected();
    bool IsPendingInviteModded();
    bool IsMutatorActive(TSubclassOf<UMutator> mutatorClass);
    bool IsGameModded();
    bool IsFreeBeerRewardActive();
    bool IsCampaignMission();
    bool HasTooManyModsEnabled();
    bool HasSignedIn();
    bool HasPendingInvite();
    bool HasPendingActivity();
    bool HasAnalytics();
    void GraphicsUserSettingsChanged();
    void GiveTemporaryBuff(UTemporaryBuff* buff, UPlayerCharacter* Player);
    FVector2D GetViewportSize();
    TSoftClassPtr<AProceduralSetup> GetSoftReferenceToPLS();
    TArray<FBlueprintSessionResult> GetServersFriendsArePlaying(TArray<FBlueprintSessionResult> servers);
    bool GetPendingRewards(FPendingRewardsStats& OutStats, FPendingRewards& OutRewards);
    bool GetNextSpaceRigNotification(FSpaceRigNotification& NextNotification);
    TArray<UMutator*> GetMutators(TSubclassOf<UMutator> mutatorClass);
    int32 GetMaxPublicConnections();
    int32 GetMaxAllowedMods();
    AFSDPlayerController* GetLocalFSDPlayerController();
    UIconGenerationManager* GetIconGenerationManager();
    bool GetHasSeenInfoScreen();
    int32 GetGlobalMissionSeed();
    UGeneratedMission* GetGeneratedMission();
    UMutator* GetFirstMutator(TSubclassOf<UMutator> mutatorClass);
    float GetCurrentFadeAmount();
    TArray<FNetworkConnectionInfo> GetConnectionInfo();
    APlayerCharacter* GetCharacterSelectorCharacter();
    void GameUserSettingsChanged();
    void FadeScreenToBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig, UTexture* loadingImage);
    void FadeScreenFromBlack(UObject* WorldContext, float FadeTime, float Delay, bool ResetExistingFades, bool CapFramerate, bool FadeWorldOnly, bool ToSpaceRig);
    void DonkeyCharacterDelegate__DelegateSignature(UMolly* InDonkey);
    void CloseSessionLobby();
    void ClearPendingRewards();
    void ClearGameStateSeamlessTravelStorage();
    void ClearCampaignNotifications();
    void ChangeSkinPreview(UItemSkin* PreviewSkin);
    void CancelJoin();
    void BlackoutScreen(UObject* WorldContext, bool FadeWorldOnly);
    UHUDWarningWidget* AddWarningToHUD(TSubclassOf<UHUDWarningWidget> WidgetClass, UTexture2D* Texture, USoundBase* PingSound);
    void AddToFriendSessions(FString friendSessionId, FString friendName);
    void AddStatValue(FString Key, float Value);
    void AddStatCount(FString Key, int32 count);
    void AddSpaceRigNotification(FSpaceRigNotification NewNotification, FString ID, bool TriggerEvent);
}

class AFSDGameMode : UGameMode
{
    FFSDGameModeOnMatchStarted OnMatchStarted;
    void MatchStartedSignature();
    FFSDGameModeOnAllControllersReady OnAllControllersReady;
    void AllReadySignature();
    FFSDGameModeOnPlayerLoggedIn OnPlayerLoggedIn;
    void PlayerLoggedIn(UFSDPlayerController* Controller);
    FFSDGameModeOnDonkeyCalled OnDonkeyCalled;
    void CallDonkey(FVector Position, UPlayerCharacter* requester);
    bool GenerationStarted;
    UPheromoneSpawnerComponent* PheromoneComponent;
    UEnemySpawnManager* EnemySpawnManager;
    UObjectivesManager* ObjectivesManager;
    UKeepInsideWorld* KeepInsideWorld;
    UMissionManager* MissionManager;
    UEncounterManager* EncounterManagerComponent;
    UCritterManager* CritterManager;
    TArray<AFSDPlayerController*> PlayerControllers;
    UFormationsManagerComponent* FormationsManager;
    TSoftClassPtr<AMiningPod> DropPodClass;
    TSoftClassPtr<AMolly> MuleClass;
    TSoftClassPtr<AMiningPod> DropodEscapeClass;
    TSoftClassPtr<ABosco> droneClass;
    TSoftClassPtr<UWidget> CheatUI;
    float ContinueCountdown;
    bool PreventAllLatejoin;
    bool PreventLateJoinOnMissionStart;
    float PlayerSpawnHeightOffset;
    float FriendlyFireGracePeriod;
    TArray<UEnemyDescriptor*> ForcedEnemyPool;
    bool UseNormalEncounters;
    bool UseStationaryEncounter;
    bool AllowSpecialEncounters;
    UEnemyWaveManager* CachedWaveManager;

    void StartGame();
    void SpawnMissionCriticalItems();
    void SignalEndLevelToClients();
    void ResetDeaths();
    void RecieveEndLevel();
    void RecieveAllDwarvesDown();
    void Recieve_ContinueTimerEnded();
    void ReceivePostSeamlessTravel();
    void OnObjectivesInitialized();
    void OnLevelGenerationComplete(int32 pass);
    void OnControllerDestroyed(AActor* Controller);
    void LoadSpaceRig();
    void LoadMission(FString MapName, SoftClassProperty optionalGameMode);
    void HostAbortMission();
    UEnemyWaveManager* GetWaveManager();
    AActor* GetPlayerStart(UFSDPlayerController* Controller);
    TSubclassOf<AMolly> GetMuleClass();
    UEncounterManager* GetEncounterManager();
    FSoftObjectPath GetDropPodPath();
    FSoftObjectPath GetDropPodEscapePath();
    TSubclassOf<AMiningPod> GetDropPodEscapeClass();
    TSubclassOf<AMiningPod> GetDropPodClass();
    FSoftObjectPath GetDronePath();
    TSubclassOf<ABosco> GetDroneClass();
    UDifficultyManager* GetDifficultyManager();
    int32 GetCurrentLevel();
    bool FSDSetPause(UPlayerController* PC, EPauseReason pauseReason);
    bool FSDKickPlayer(UPlayerController* KickedPlayer, const FText& KickReason);
    bool FSDClearPause(EPauseReason pauseReason);
    void EndLevel();
    void DonkeyButtonPressed();
    void DestroyNonLocalPlayers();
    void Debug_ShowPlayerSpheres();
    bool AllPlayersHaveSelectedCharacter();
    bool AllPlayersHaveGeneratedLevel();
    void AddControllerForGracePeriod(UPlayerCharacter* APlayerCharacter);
    void AboutMission();
}

class AFSDGameModeSpaceRig : UFSDGameMode
{
    uint8 AmountOfPlayersSpawnedInMedbay;
    bool StartedSession;

    AActor* GetFreeSpawnOfType(ESpacerigStartType aType, UFSDPlayerController* AController);
}

class UFSDGameplayStatics : UBlueprintFunctionLibrary
{

    UFXSystemComponent* SpawnScaledEmitterAtLocation(UObject* WorldContextObject, FScaledEffect ScaledEffect, FVector Location, FRotator Rotation, bool bAutoDestroy);
    UDecalComponent* SpawnDecalData(const UObject* WorldContextObject, const FVector& Location, const FVector& upVector, const FDecalData& DecalData);
    UDecalComponent* SpawnDecalAtActor(AActor* Actor, UMaterialInterface* DecalMaterial, float Size, float Duration, float FadeDuration);
    UDecalComponent* SpawnDecal(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, const FVector& Location, const FVector& upVector, float Size, float Duration, float FadeDuration);
    void SetControllerVibrationSubmixSend(const UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel);
    void SetControllerSpeakerSubmixSend(const UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel);
}

class UFSDTagSettings : UDataAsset
{
    FGameplayTagQuery IsFriendlyQuery;
    FGameplayTagQuery IsNeutralQuery;
    FGameplayTagQuery IsHostileQuery;
    FFSDTagsRoot Root;
}

class AFSDGameSession : UGameSession
{
    TArray<FUniqueNetIdRepl> BannedPlayers;
}

class AGameStats : AInfo
{
    int32 NumberOfPlayersEscapedInPod;
    float TotalGoldMined;
    int32 TotalEnemiesKilled;
    int32 MissionHaz;

    void OnPlayerMinedGold(UCappedResource* Resource, float Amount);
}

class AFSDGameState : UGameState
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
    void PlayerDelegate(UFSDPlayerState* PlayerState);
    FFSDGameStateOnPlayerLeave OnPlayerLeave;
    void PlayerDelegate(UFSDPlayerState* PlayerState);
    FFSDGameStateOnContinueActive OnContinueActive;
    void DelegateEvent();
    FFSDGameStateOnContinueCountdownChanged OnContinueCountdownChanged;
    void DelegateEvent();
    FFSDGameStateOnAllDwarvesDown OnAllDwarvesDown;
    void DelegateEvent();
    FFSDGameStateOnTeamMemberCampaignMissionChanged OnTeamMemberCampaignMissionChanged;
    void DelegateEvent();
    FFSDGameStateOnEnemyKilledEvent OnEnemyKilledEvent;
    void EnemyKilledDelegate(const FGameplayTagContainer& enemyTags, AActor* killedEnemy);
    FFSDGameStateOnPlayerCharacterRegistered OnPlayerCharacterRegistered;
    void PlayerCharacterDelegate(UPlayerCharacter* PlayerCharacter);
    int32 CurrentLevel;
    AMiningPod* EscapePod;
    FString FSDSessionID;
    FFSDGameStateOnBoscoReviveCounterChanged OnBoscoReviveCounterChanged;
    void BoscoReviveCounterChanged(int32 RevivesLeft);
    bool bTeamDown;
    FFSDGameStateOnTeamDown OnTeamDown;
    void BoolDelegate(bool boolValue);
    FFSDGameStateOnObjectivesCompleted OnObjectivesCompleted;
    void DelegateEvent();
    FFSDGameStateOnObjectiveAdded OnObjectiveAdded;
    void ObjectivesDelegate(UObjective* Objective);
    FFSDGameStateOnDifficultyChanged OnDifficultyChanged;
    void DifficultyDelegate(UDifficultySetting* Setting);
    FFSDGameStateOnCountdownStarted OnCountdownStarted;
    void CountDownStarted(const FText& countdownText);
    FFSDGameStateOnCountdownTimeChanged OnCountdownTimeChanged;
    void Countdown(int32 SecondsLeft);
    FFSDGameStateOnCountdownFinished OnCountdownFinished;
    void DelegateEvent();
    ADeepCSGWorld* CSGWorld;
    int32 LastSupplyPodTimeStamp;
    AProceduralSetup* ProceduralSetup;
    bool DelayLateJoin;
    UPrimitiveComponent* FakeMovementBase;
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
    USpawnEffectsComponent* SpawnEffects;
    UDynamicMeshScaler* MeshScaler;
    UFlareController* FlareController;
    UGemProximityTracker* GemProximityTracker;
    UAttackerManagerComponent* AttackerManager;
    UDifficultyManager* DifficultyManagerComponent;
    USoundMixManagerComponent* SoundMixManager;
    USeasonReplicatorComponent* SeasonReplicatorComponent;
    UTeamResourcesComponent* TeamResources;
    bool IsOnSpaceRig;
    bool PlayerMadeItToDropPod;
    TArray<APlayerCharacter*> ActivePlayerCharacters;
    FReplicatedObjectives Objectives;
    FText CompletedGameEventName;
    FGeneratedMissionSeed GeneratedMissionSeed;
    bool objectivesCompleted;
    UDifficultySetting* CurrentDifficultySetting;
    bool RememberDifficulty;
    UPlayerProximityTracker* ProximityTracker;
    UShowroomManager* ShowroomManager;
    AGameStats* GameStats;
    uint32 MissionTime;
    uint32 MissionStartTime;
    uint32 MissionHaz;
    bool PreventLatejoinCharacterDuplication;
    bool StartPressed;
    bool ContinuePressed;
    int32 ContinuesCountdown;
    bool AllDwarvesDown;
    bool MissionAborted;
    int32 CountdownRemaining;
    FText countdownText;
    bool CanCarryOverResources;
    FFSDGameStateSessionLeaderChanged SessionLeaderChanged;
    void CurrentLeaderChanged(const UPlayerState* PlayerState);
    APlayerState* CurrentPlayerSessionLeader;

    void StartCountdown(int32 Duration, const FText& countdownName);
    void SetPreventLatejoinCharacterDuplication(bool prevent);
    void SetPlayersHaveReachedDroppod(bool newHasPlayerReached);
    void SetGeneratedMissionParameters(UGeneratedMission* mission);
    void SetCurrentDifficulty(UDifficultySetting* Setting, bool updateSessionSettings);
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
    AFSDPlayerState* GetServerPlayerState();
    UObjective* GetSecondaryObjective();
    AProceduralSetup* GetProceduralSetup();
    UObjective* GetPrimaryObjective();
    bool GetPreventLatejoinCharacterDuplication();
    bool GetPlayersHaveReachedDroppod();
    TArray<TSubclassOf<APlayerCharacter>> GetPlayableCharacters();
    TArray<UPlayerCharacterID*> GetPlayableCharacterIDs();
    TArray<UObjective*> GetObjectives();
    TArray<AFSDPlayerState*> GetNetworkSortedPlayerArray();
    int32 GetMissionTime();
    bool GetMissionSuccessful();
    int32 GetMissionStartTime();
    int32 GetMissionRewardCreditSum();
    TArray<FCreditsReward> GetMissionRewardCredits();
    bool GetMissionCompletedCreditReward(bool primary, int32& OutReward);
    int32 GetGlobalMissionSeed();
    AGameStats* GetGameStats();
    TMap<UResourceData*, float> GetEndscreenResources();
    UDifficultyManager* GetDifficultyManager();
    TMap<UResourceData*, float> GetCollectedResources();
    TArray<UFSDEvent*> GetActiveEventsFromMission();
    void ClientNewMessage(const FFSDChatMessage& Msg);
    void Client_StartPressed();
    void Client_NewLocalizedMessage(const FFSDLocalizedChatMessage& Msg);
    bool AllMissionEndResultsReceived();
    void All_SpawnScaledEffectAt(FScaledEffect effect, FVector_NetQuantize Location);
    void All_SpawnScaledEffectAndCueAt(FScaledEffect effect, USoundCue* Audio, FVector_NetQuantize Location);
}

class UFSDGameUserSettings : UGameUserSettings
{
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
    TMap<FName, bool> NamedBoolSettings;
    FModdingUISettings ModdingUISettings;
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
    USoundClass* soundClassCharacterVoices;
    USoundClass* soundClassMissionControl;
    USoundClass* soundClassMaster;
    USoundClass* soundClassSFX;
    USoundClass* soundClassUI;
    USoundClass* soundClassMusic;
    USoundClass* soundClassVoice;
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

    void UpdateVolumeSettings(USoundClass* CharacterVoices, USoundClass* MissionControl, USoundClass* Master, USoundClass* Music, USoundClass* SFX, USoundClass* UI, USoundClass* Voice);
    void UpdateForceFeedbackScaleOnController(UPlayerController* Controller);
    bool ToggleTranslatorDebugMode();
    bool ToggleShowUpgradeExtraDetails();
    void ToggleModdingServerFilter(uint8 ServerFilter, bool Enable);
    void SetZiplineGunAutoSwitch(bool shouldAutoSwitch);
    void SetVSyncEnabledToBeApplied(bool bEnable);
    void SetVolume(EVolumeType volumeType, float Volume);
    void SetVoiceChatEnabled(bool bEnable);
    void SetUseToggleTerrainScanner(bool useToggleTerrainScanner);
    void SetUseToggleLaserpointer(bool UseToggleLaserpointer);
    void SetUseStreamerProgram(bool UseStreamerProgram);
    void SetUseSeparateSensitivity(bool newSetting);
    void SetUseProfanityFilter(bool shouldUse);
    void SetUseHoldToRun(bool UseHoldToRun);
    void SetUseDefaultAudioOutputDevice(UObject* WorldContextObject, bool UseDefault);
    void SetUseCustomUIScale(bool UseCustomScale);
    void SetUIDPIScale(float uiscale);
    void SetTutorialHintsEnabled(bool Enabled);
    void SetTemporalAAUpscalingEnabled(bool bEnable);
    void SetSwapControllerThumbsticks(bool InSwapThumbsticks);
    void SetSteamSearchRegion(ESteamSearchRegion InRegion);
    void SetShowUIAnimations(bool shouldShow);
    void SetShowSubtitles(bool Show);
    void SetShowSandboxLabel(bool InShowLabel);
    void SetShowNetInfoLevel(int32 Level);
    void SetShowFPS(bool Visible);
    void SetSharpening(float Sharpening);
    void SetServerSearchPasswordRequired(bool InPasswordRequired);
    void SetScreenResolutionToBeApplied(FIntPoint Resolution);
    void SetPushToTalk(bool bEnable);
    void SetPreventLatejoinCharacterDuplication(bool prevent);
    void SetPlaySoundOnChatMessage(bool playSoundOnMessage);
    void SetPhotosensitiveMode(bool modeOn);
    void SetMouseYSensitivity(float newSensitivity);
    void SetMouseXSensitivity(float newSensitivity);
    void SetModdingSortBy(uint8 SortField, bool SortAscending);
    void SetJukeboxStreamerMode(bool InStreamerMode);
    void SetInvertMouseWheel(bool invertMouseWheel);
    void SetInvertMouse(bool InvertMouse);
    void SetInvertFlightControls(bool Invert);
    void SetInputSource(EFSDInputSource NewSource);
    void SetHeadBobbingScale(float HeadbobbingScale);
    void SetHDRColorGamma(float Gamma);
    void SetGrapplingHookAutoSwitch(bool shouldAutoSwitch);
    void SetGamma(float gamme);
    void SetGameServerName(const int32 localUserNum, FString Name);
    void SetFullscreenModeToBeApplied(uint8 InFullscreenMode);
    void SetFOV(float FOV);
    void SetForceFeedbackScale(float Scale);
    void SetDx12EnabledToBeApplied(bool bEnable);
    void SetDownCameraTurnDirection(EFSDInputSource InputSource, float InDirection);
    void SetDisableMasterEQ(bool B);
    void SetDifficultySelected(UDifficultySetting* Difficulty, bool IsSelected);
    void SetDebugLocalizerMode(bool bEnable);
    void SetCurrentUserSaveSlotName(UObject* WorldContextObject, FString saveSlotName, ESaveSlotChangeProcedure changeProcedure);
    void SetConsoleGraphicsMode(EConsoleGraphicsMode Mode);
    void SetCheckForOutOfBoundsEnabled(bool Enabled);
    void SetChatFontSize(int32 inFontSize);
    void SetChatFadeTime(float FadeTime);
    void SetCanShowBlood(bool bloodAllowed);
    void SetCameraShakeScale(float CameraShakeScale);
    void SetAutoRefreshServerlist(bool Value);
    bool SetAudioOutputDevice(UObject* WorldContextObject, FString DeviceID);
    bool SetAudioInputDevice(FString DeviceName);
    void SetAppearOffline(bool bEnable);
    void SetAntiAliasingType(int32 AntiAliasingType);
    void SetAimSensitivity(float NewValue);
    void SetAimOuterAcceleration(float NewValue);
    void SetAimDeadZone(float NewValue);
    void ResetGraphicsChanges();
    void ResetControllerSettings();
    void PostInitFSDUserSettings(UObject* WorldContextObject);
    bool IsVoiceChatEnabled();
    bool IsDx12Enabled();
    bool IsDebugLocalizerModeEnabled();
    bool IsCurrentInputSource(EFSDInputSource InputSource);
    void InitializeDifficultySelection(UObject* WorldContext, const TArray<UDifficultySetting*> StartSelection);
    bool HasAudioOutputDeviceChanged(FString& AudioDeviceChangedTo);
    bool GetZiplineGunAutoSwitch();
    bool GetVSyncEnabledToBeApplied();
    float GetVolume(EVolumeType volumeType);
    bool GetUseToggleTerrainScanner();
    bool GetUseToggleLaserpointer();
    bool GetUseStreamerProgram();
    bool GetUseSeparateSensitivity();
    bool GetUseProfanityFilter();
    bool GetUseHoldToRun();
    bool GetUseDefaultAudioOutputDevice();
    bool GetUseCustomUIScale();
    float GetUIDPIScale();
    bool GetTutorialHintsEnabled();
    bool GetTemporalAAUpscalingEnabled();
    ESteamSearchRegion GetSteamSearchRegion();
    bool GetShowUIAnimations();
    bool GetShowSubtitles();
    bool GetShowSandboxLabel();
    int32 GetShowNetInfoLevel();
    bool GetShowFPS();
    float GetSharpening();
    FIntPoint GetScreenResolutionToBeApplied();
    bool GetPushToTalk();
    bool GetPreventLatejoinCharacterDuplication();
    bool GetPlaySoundOnChatMessage();
    bool GetPhotosensitiveMode();
    float GetMouseYSensitivity();
    float GetMouseXSensitivity();
    bool GetModdingServerFilterEnabled(uint8 ServerFilter);
    bool GetIsDifficultySelected(UDifficultySetting* Difficulty);
    bool GetInvertMouseWheel();
    bool GetInvertMouse();
    bool GetInvertFlightControls();
    EFSDInputSource GetInputSource();
    float GetHeadBobbingScale();
    float GetHDRColorGamma();
    bool GetGrapplingHookAutoSwitch();
    float GetGamma();
    TEnumAsByte<EWindowMode::Type> GetFullscreenModeToBeApplied();
    UFSDGameUserSettings* GetFSDGameUserSettings();
    float GetFOV();
    float GetForceFeedbackScale();
    bool GetDx12EnabledToBeApplied();
    float GetDownCameraTurnDirection(EFSDInputSource InputSource);
    bool GetDisableMasterEQ();
    FString GetCurrentUserSaveSlotName();
    EFSDInputSource GetCurrentInputSource();
    bool GetCurrentAudioOutputDevice(UObject* WorldContextObject, FString& AudioDevice);
    FString GetCurrentAudioInputDeviceName();
    float GetCurrentAudioInputDeviceAmplitude(int32 localUserId);
    EConsoleGraphicsMode GetConsoleGraphicsMode();
    bool GetCheckForOutOfBounds();
    int32 GetChatFontSize();
    float GetChatFadeTime();
    float GetCameraShakeScale();
    bool GetAvaliableAudioOutputDevices(UObject* WorldContextObject, TArray<FString>& AudioDevices);
    bool GetAvaliableAudioInputDevices(TArray<FString>& AudioDevices);
    bool GetAvailableScreenResolutionsForNonPrimaryMonitors(TArray<FIntPoint>& Resolutions);
    bool GetAutoRefreshServerlist();
    FString GetAudioOutputDeviceName(UObject* WorldContextObject, FString DeviceID);
    bool GetAppearOffline();
    int32 GetAntiAliasingType();
    float GetAimSensitivity();
    float GetAimOuterAcceleration();
    float GetAimDeadZone();
    FString GameServerNameFiltered();
    FString GameServerName();
    bool FSDSetCurrentLanguage(UObject* WorldContextObject, FString Culture);
    UFSDGameUserSettings* FSDGameUserSettings();
    bool ConsoleGraphicsModeAvailable(EConsoleGraphicsMode Mode);
    void ClearCustomKeyBindings(bool InGamepadKeys);
    bool CanShowBlood();
    void ApplyGraphicsChanges();
    void ApplyConsoleGraphicsMode();
}

class AFSDHUD : AHUD
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
    void RadarPointAdded(URadarPointComponent* radarPoint);
    void PlayerSpawned(UPlayerCharacter* Player);
    void OnVisibilityChanged();
    bool IsHUDVisibleFlagSet(EHUDVisibilityReason reason);
    void HudVisibilityChanged__DelegateSignature(bool InHudVisible);
    void HandleSeamlessTravel();
    bool GetHUDVisible();
    AFSDHUD* GetFSDHUD(UPlayerController* InPlayerController);
    void CameraDroneSpawned(UPlayerCameraDrone* Drone);
}

class ASpaceRigHUD : UFSDHUD
{
    TArray<UObject*> NotificationQueue;
    bool bNotificationQueueActive;

    void SetNotificationQueueActive(bool Inactive);
    void ReceiveNotificationQueueActivated();
    void ReceiveNotificationAdded(UObject* InNotification);
    UWindowWidget* QueueWindowClass(SoftClassProperty InWindowType);
    void QueueWindow(UWindowWidget* InWindow);
    void QueueNotificationObject(UObject* InObject);
    void QueueMissionShout(SoftObjectProperty InShout);
    bool IsNotificationQueueEmpty();
    UObject* DequeueNotificationObject();
}

class UFSDMainHUDWidget : UUserWidget
{

    void OnRadarPointAdded(URadarPointComponent* Point);
    void AddRadarPoint(URadarPointComponent* Point);
}

class UFSDInWorldWidget : UUserWidget
{
    bool bHUDVisibile;

    void ReceiveHUDVisibilityChanged(bool InHudVisible);
    void CallbackHUDVisibilityChanged(bool InHudVisible);
}

class UFSDJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FFSDJoinSessionCallbackProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FFSDJoinSessionCallbackProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();
    UObject* WorldContextObject;

    UFSDJoinSessionCallbackProxy* FSDJoinSession(UObject* WorldContextObject, UPlayerController* PlayerController, const FBlueprintSessionResult& SearchResult, FString FSDPassword, bool fromInvite);
}

class UFSDKismetArrayExtensionFunctions : UKismetArrayLibrary
{

    void Array_GetRandom(const TArray<int32>& TargetArray, int32& Item);
}

class UFSDLookupSessionId : UOnlineBlueprintCallProxyBase
{
    FFSDLookupSessionIdOnSuccess OnSuccess;
    void FoundSessionResult(FBlueprintSessionResult Result);
    FFSDLookupSessionIdOnFailure OnFailure;
    void EmptyOnlineDelegate();

    UFSDLookupSessionId* FSDLookupSessionId(UObject* WorldContextObject, FString SessionKey);
}

class UFSDMatchmakingCallbackProxy : UOnlineBlueprintCallProxyBase
{
    FFSDMatchmakingCallbackProxyOnSuccess OnSuccess;
    void MatchmakingResultDelegate();
    FFSDMatchmakingCallbackProxyOnFailure OnFailure;
    void MatchmakingResultDelegate();
    FFSDMatchmakingCallbackProxyOnCancelled OnCancelled;
    void MatchmakingResultDelegate();
    FFSDMatchmakingCallbackProxyFailDelegateHandle FailDelegateHandle;
    void MatchmakingResultFunction(FString Description, int32 Status);
    UMissionTemplate* mission;
    UBiome* Biome;
    UDifficultySetting* Difficulty;

    UFSDMatchmakingCallbackProxy* FSDMatchmaking(UObject* WorldContextObject, UPlayerController* PlayerController, const MatchmakingResultFunction__DelegateSignature& FailDelegate, UDifficultySetting* DesiredDifficulty, UBiome* desiredBiome, UMissionTemplate* desiredMission);
    void CancelMatchmaking();
}

class UFSDMath : UBlueprintFunctionLibrary
{

    FVector SphericalToCartesian(float Radius, float azimuth, float elecation);
    bool PercentageCheck(float percentage);
    void GetAzimuthAndElevation(const FVector& Direction, const FTransform& coordinateSystem, float& azimuth, float& elevation);
    float CubicSegmentLength(FVector p0, FVector tangent1, FVector p1, FVector tangent2);
    FVector CubicInterpBlueprint(FVector p0, FVector tangent1, FVector p1, FVector tangent2, float alpha);
    void CartesianToSpherical(FVector Location, float& outAzimuth, float& outElevation, float& outRadius);
}

class UFSDOnlineSessionClient : UOnlineSessionClient
{
}

class UFSDOnlineSystemUtils : UBlueprintFunctionLibrary
{

    void TryToResolvePrivilege(const UPlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, EBlueprintablePrivilegeResults reason);
    void ShowUpgradeAccountUI();
    void ShowAccountPicker(UFSDGameInstance* gInstance, const int32 GamePlayerID);
    void OpenURLInOverlay(FString URL, OnShowWebUrlClosedBP__DelegateSignature OnOverlayClosed);
    void OpenProfileByUserId(UPlayerState* Requestor, FString RequesteeUserID);
    void OpenProfile(UPlayerState* Requestor, UPlayerState* Requestee);
    FText OnlinePlayBlockReasonToString(EBlueprintablePrivilegeResults reason);
    void GetOnlinePlayBlockReasons(TArray<EBlueprintablePrivilegeResults>& reasons);
    void GetIsPrivilegeAllowed(const UPlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, const OnGetUserPrivilegeCompleteBPDelegate__DelegateSignature& Delegate);
    FText GetInviteFeatureBlockReason(UObject* WorldContextObject, EInviteBlockReason reason);
    EInviteBlockReason CanPlayerInvite(UObject* WorldContextObject);
}

class UFSDPhysicalMaterial : UPhysicalMaterial
{
    float BreakingDecelerationScale;
    float BreakingFrictionScale;
    float MaxAccelerationScale;
    bool RepulsePlayer;
    FFloatInterval RepulsePlayerVelocity;
    float RepulsePlayerRandomDegreeOffset;
    USoundCue* RepulsePlayerSound;
    UFXSystemAsset* RepulsePlayerParticle;
    UFXSystemAsset* ImpactParticles;
    UNiagaraSystem* ImpactNParticles;
    UMaterialInstance* ImpactMaterialOverride;
    USoundCue* ImpactSound;
    USoundCue* MeleeImpactSound;
    bool UseImpactDecalOverrides;
    TArray<FDecalData> ImpactDecals;
    USoundCue* FirstPersonDamageIndicatorSound;
    bool IsWeakPoint;
    bool IsSubhealthCollider;
    float DamageMultiplier;
    UFXSystemAsset* FootstepParticle;
    UMaterialInstance* FootstepMaterialOverride;
    FDecalData LeftFootprintDecal;
    FDecalData RightFootprintDecal;
    USoundCue* FootstepSound;
    float ExtraFallVelocity;
    UFXSystemAsset* FallImpactEffect;
    USoundCue* FallImpactSound;
    bool AlwaysPenetrate;
    TSubclassOf<UReactiveTerrain> ReactiveTerrain;

    UFXSystemComponent* SpawnImpactParticlesFromHit(UObject* WorldContextObject, const FHitResult& HitResult);
    UFXSystemComponent* SpawnImpactParticles(UObject* WorldContextObject, FVector Location, FVector Normal);
    UFSDPhysicalMaterial* GetPhysicalMaterialFromPrimitive(UPrimitiveComponent* Component);
}

class UOptionalBloodPhysicalMaterial : UFSDPhysicalMaterial
{
    UParticleSystem* BloodlessImpactParticles;
}

class AFSDPlayerCameraManager : APlayerCameraManager
{
}

class AFSDPlayerControllerBase : UPlayerController
{
    UMaterialParameterCollection* GlobalMaterialParameterCollection;
    FFSDPlayerControllerBaseOnPlayerVoiceStatusChanged OnPlayerVoiceStatusChanged;
    void LocalVoiceStatus(bool voiceChatting);
    bool bStartWithBlackScreen;
    UWindowManager* WindowManager;
    TArray<FPlatformComponent> PlatformComponentClasses;

    void ToggleAnalogCursor(bool Visible);
    void StopAspectRatioAxisConstraint();
    void StartAspectRatioAxisConstraint();
    void SetHUDVisible(bool IsVisible, EHUDVisibilityReason reason);
    void Server_Cheat_SwitchCharacter(UPlayerCharacterID* NewCharacter);
    void RecievePreClientTravel();
    void RecieveHUDVisibilityChanged(bool IsVisible);
    bool IsHUDVisibleFlagSet(EHUDVisibilityReason reason);
    void Client_WasKicked(EDisconnectReason reason);
}

class AFSDPlayerController : UFSDPlayerControllerBase
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
    void OnShowTutorialHint(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image, float Duration);
    FFSDPlayerControllerOnShowTutorialWidget OnShowTutorialWidget;
    void OnChangeTutorialWidget(TSubclassOf<UTutorialContentWidget> TutorialWidget, bool bIgnoreQueue);
    FFSDPlayerControllerOnChangeTutorialHintDuration OnChangeTutorialHintDuration;
    void OnChangeTutorialHintDuration(float NewDuration);
    FFSDPlayerControllerOnHideCurrentTutorialHint OnHideCurrentTutorialHint;
    void OnHideTutorialHint(bool wasWatched);
    FFSDPlayerControllerOnPlayerCharacterPossesed OnPlayerCharacterPossesed;
    void OnPlayerCharacterPossesed();
    UPerkUsageComponent* PerkUsageComponent;
    bool IsOnSpaceRig;
    bool bReceivedEndLevel;
    TArray<USoundMix*> InitialSoundMixes;
    bool ServerTravelDone;
    FFSDPlayerControllerOnChatOpened OnChatOpened;
    void ChatOpenedDelegate();
    UFSDWidgetEffectsComponent* WidgetEffects;
    ESpacerigStartType SpacerigSpawnType;
    bool bDetectGravityChanges;

    void ToggleVoiceOn(bool Enabled);
    void ShowTutorialWidget(TSubclassOf<UTutorialContentWidget> TutorialWidget, bool ignoreQueue);
    void ShowTutorialHint(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image, float Duration);
    void SetPlayerStart(AActor* Start);
    void SetAchievementProgressFromServer(UFSDAchievement* AchievementToSet, float Progress);
    void ServerSetUserHoldToRun(bool Value);
    void Server_TravelDone();
    void Server_TerrainLateJoinPartReceived();
    void Server_SetLateJoinDone();
    void Server_SetGenerationStatus(FString Status, float Fraction);
    void Server_SetGenerationFraction(float Fraction);
    void Server_SetGenerationDone();
    void Server_SetExtraEndScreenTime(float extraTime);
    void Server_SetControllerReady();
    void Server_ResetHUD();
    void Server_NewMessage(FString Sender, FString Text, EChatSenderType SenderType);
    void Server_DrawProjectileDebugPath(bool bDraw);
    void Server_ActivateTemporaryBuff(UTemporaryBuff* buff);
    void SendLevelUpStatistics(const int32 currentRank);
    void RecievePawnDestroyed();
    void RecieveOnControllerReady();
    void RecieveClientTravelDone();
    void ReceivingVoiceSignature__DelegateSignature(bool isRecieving);
    void ReceiveEndLevel();
    void ReceivedEndLevelDelegate__DelegateSignature();
    void Receive_EndLevel_WaitForData(bool areObjectivesCompleted, int32 numberOfPlayersInPod);
    void ReadyToContinueFromEndScreen();
    void OnShowTutorialHint__DelegateSignature(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image, float Duration);
    void OnSaveGamePlayerProgressChanged(int32 Rank, int32 Stars);
    void OnSaveGameCreditsChanged(int32 Credits);
    void OnSaveGameCharacterProgressChanged(TSubclassOf<UPlayerCharacter> CharacterClass, int32 Level, float Progress);
    void OnPlayerStateSelectedCharacterChanged(TSubclassOf<UPlayerCharacter> CharacterClass);
    void OnPlayerSpawnBegin(int32 PlayerId);
    void OnHideTutorialHint__DelegateSignature(bool wasWatched);
    void OnGenerationDone();
    void OnChangeTutorialWidget__DelegateSignature(TSubclassOf<UTutorialContentWidget> TutorialWidget, bool bIgnoreQueue);
    void OnChangeTutorialHintDuration__DelegateSignature(float NewDuration);
    void LevelFinishedSignature__DelegateSignature();
    void HideTutorialHint(bool watched);
    bool HasPendingRewards();
    bool GetUseToggleTerrainScanner();
    bool GetUseToggleLaserpointer();
    bool GetUseHoldToRun();
    AActor* GetPlayerStart();
    bool GetPendingRewards(FPendingRewardsStats& OutStats, FPendingRewards& OutRewards);
    AFSDPlayerState* GetFSDPlayerState();
    void FlushRender();
    AActor* FindPlayerStart(UPlayerCharacterID* characterID);
    void EndLevel();
    void Client_TerrainLateJoinVisibleChunks(const TArray<uint32>& visibleChunks);
    void Client_TerrainLateJoinPart(const TArray<FGrenadeExplodeOperationData>& explosions, const TArray<FCarveWithColliderOperationData>& colliderCarves, const TArray<FCarveWithSTLMeshOperationData>& meshCarves, const TArray<FPickaxeDigOperationData>& pickAxe, const TArray<FRemoveFloatingIslandOperationData>& floating, const TArray<FDrillOperationData>& drills, const TArray<FMeltOperationData>& melts, const TArray<FSplineSegmentCarveOperationData>& splines);
    void Client_TerrainLateJoinDone();
    void Client_TerrainLateJoinDebris(const TArray<int32>& instanceComponentPairs);
    void Client_PlayCue(USoundCue* SoundCue);
    void Client_EndLevel_WaitForData(bool areObjectivesCompleted, int32 numberOfPlayersInPod);
    void Client_DeductResource(UResourceData* Resource, int32 Amount);
    void Client_CollectVanityItem(UTreasureRewarder* rewarder, UVanityItem* targetItem, UPlayerCharacterID* targetCharacter);
    void Client_CollectTreasureVictoryPose(UTreasureRewarder* rewarder, UVictoryPose* targetPose, UPlayerCharacterID* targetCharacter);
    void Client_CollectTreasureSkin(UTreasureRewarder* rewarder, UItemSkin* targetSkin, UItemID* targetItem);
    void Client_CollectTreasureDrink(UTreasureRewarder* rewarder, UDrinkableDataAsset* Drinkable);
    void Client_CollectPickaxePart(const UTreasureRewarder* rewarder, UPickaxePart* targetPart);
    void ApplyPendingRewards();
}

class AFSDPlayerStart : AActor
{
    UPlayerCharacterID* PrefferedClassID;
    AFSDPlayerController* usedBy;
}

class ASpacerigStart : UPlayerStart
{
    FSpacerigStartOnPlayerSpawn OnPlayerSpawn;
    void PlayerSpawnInHub(UFSDPlayerController* Controller);
    FSpacerigStartOnPlayerLeave OnPlayerLeave;
    void PlayerSpawnInHub(UFSDPlayerController* Controller);
    AFSDPlayerController* usedBy;
    ESpacerigStartType StartType;
}

class AFSDPlayerState : UPlayerState
{
    FFSDPlayerStateOnPlayerCharacterSpawned OnPlayerCharacterSpawned;
    void PlayerSpawnedSignature(UPlayerCharacter* PlayerCharacter);
    FFSDPlayerStateOnPlayerTalkingChanged OnPlayerTalkingChanged;
    void PlayerVoiceSignature(bool IsTalking);
    FFSDPlayerStateOnSelectedCharacterChanged OnSelectedCharacterChanged;
    void SelectedCharacterChangedDelegate(TSubclassOf<UPlayerCharacter> NewCharacter);
    float FractionLevelGenerated;
    FString LevelGenerationState;
    FFSDPlayerStateOnSupplyStatusChangedEvent OnSupplyStatusChangedEvent;
    void SupplyStatusChangedDelegate(float ammoStatus01, float healthStatus01);
    FFSDPlayerStateOnEnemyKilledEvent OnEnemyKilledEvent;
    void EnemyKilledSignature(const FGameplayTagContainer& enemyTags, AActor* enemy, UDamageClass* DamageClass);
    TArray<UVanityItem*> LatestEquipedVanity;
    TSubclassOf<APlayerCharacter> SelectedCharacter;
    bool bIsServer;
    bool ShouldCopyProperties;
    uint8 gameOwnerStatus;
    bool IsOnSpaceRig;
    UPlayerStatsComponent* PlayerStatsComponent;
    UPlayerRejoinState* RejoinState;
    USaveGameStateComponent* SaveGameStateComponent;
    APlayerCharacter* PlayerCharacter;
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
    UPlayerResourceComponent* PlayerResources;
    uint8 SupplyAmmoStatus;
    uint8 SupplyHealthStatus;
    FRewardTexts RewardTexts;

    void SetSelectedCharacterID(UPlayerCharacterID* characterID);
    void SetSelectedCharacter(TSubclassOf<UPlayerCharacter> NewCharacter);
    void SetHasGeneratedLevel(bool hasgenerated);
    void SetCanOnlySpectate(bool canOnlySpectate);
    void ServerSetSelectedCharacter(TSubclassOf<UPlayerCharacter> NewCharacter);
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
    UPlayerCharacterID* GetSelectedCharacterID();
    TSubclassOf<APlayerCharacter> GetSelectedCharacter();
    FCharacterProgress GetSelectCharacterProgress();
    UPlayerResourceComponent* GetPlayerResourceComponent();
    int32 GetPlayerRank();
    AFSDPlayerController* GetPlayerController();
    bool GetHasGeneratedLevel();
    bool GetGameOwnerStatus(EGameOwnerStatus Status);
    TArray<FCreditsReward> GetDeepDiveCreditsReward(int32 StagesCompleted, int32 goldCollected);
    EChatSenderType GetChatSenderType();
    FCharacterProgress GetCharacterProgress(UPlayerCharacterID* characterID);
    int32 GetCharacterLevel(UPlayerCharacterID* characterID);
    void CharacterSelected();
}

class AFSDPostProcessingActor : AActor
{
    EPostProcessingType PostProcessingType;
    UPostProcessComponent* PostProcessComponent;
    FWeightedBlendables InitialBlendables;

    void UnapplyPostProcessingBlendablesByType(UObject* WorldContext, EPostProcessingType Type);
    void UnapplyPostProcessingBlendablesByID(UObject* WorldContext, const FName InID);
    void UnapplyPostProcessingBlendable(UObject* WorldContext, EPostProcessingType Type, InterfaceProperty InBlendableObject);
    void UnapplyAllPostProcessingBlendables(UObject* WorldContext);
    void SetupHDRColorGamma();
    void SetPostProcessManager(APostProcessingManager* InManager);
    UMaterialInstanceDynamic* GetPostProcessingMaterialInstance(UObject* WorldContext, UMaterialInterface* Material);
    UMaterialInstanceDynamic* ApplyPostProcessingMaterial(UObject* WorldContext, EPostProcessingType Type, UMaterialInterface* Material, float InWeight, const FName InID);
    void ApplyPostProcessingBlendable(UObject* WorldContext, EPostProcessingType Type, InterfaceProperty InBlendableObject, float InWeight, const FName InID);
}

class UFSDProjectileMovementComponent : UProjectileMovementComponent
{
    FFSDProjectileMovementComponentOnProjectilePenetrate OnProjectilePenetrate;
    void OnProjectilePenetrateDelegate(const FHitResult& ImpactResult);
    FFSDProjectileMovementComponentOnProjectileOutOfPropulsion OnProjectileOutOfPropulsion;
    void OnProjectileOutOfPropulsion();
    uint8 bShouldPenetrate;
    TArray<TSubclassOf<AActor>> IgnoreCollisionAgainst;
    bool InvertIgnoreCollisionAgainst;
    UCurveFloat* AccelerationCurve;
    float AccelerationMultiplier;
    float MaxPropulsionTime;
    uint8 bCancelPenetration;
}

class AFSDRefinery : ADropPod
{
    FFSDRefineryOnRefineryStateChanged OnRefineryStateChanged;
    void RefineryStateDelegate(ERefineryState InRefineryState);
    FFSDRefineryOnRefineryProgressChanged OnRefineryProgressChanged;
    void RefineryProgressDelegate(float InProgress01);
    FFSDRefineryOnPipelineRegistered OnPipelineRegistered;
    void RefineryPipelineDelegate(APipelineStart* InPipelineStart);
    FFSDRefineryOnPipelineSegmentPlaced OnPipelineSegmentPlaced;
    void RefineryPipelineSegmentDelegate(UPipelineSegment* InSegment);
    FFSDRefineryOnExtractorPodSpawned OnExtractorPodSpawned;
    void RefineryExtractPodDelegate(UPipelineExtractorPod* InExtractorPod);
    USingleUsableComponent* UsableStartRefining;
    USingleUsableComponent* UsableLaunchRocket;
    TMap<float, UDialogDataAsset*> ProgressMissionShouts;
    UDialogDataAsset* LaunchRocketButtonPressedShout;
    TSubclassOf<ATrackBuilderItem> BuilderItem;
    float RefiningTotalDuration;
    FFloatRange PipelineBreakCoolDown;
    float PipelineBreakTimePenaltyPerAdditionalPlayers;
    FInt32Range MaxSegmentBreakDowns;
    int32 SegmentBreakDownPenaltyPerAdditionalPlayers;
    ERefineryState RefineryState;
    ERefineryState PreviousRefineryState;
    uint8 RefiningProgressReplicated;
    TArray<APipelineStart*> PipelineStarts;

    void SetRefineryState(ERefineryState InState);
    void RefineryStateDelegate__DelegateSignature(ERefineryState InRefineryState);
    void RefineryProgressDelegate__DelegateSignature(float InProgress01);
    void RefineryPipelineSegmentDelegate__DelegateSignature(UPipelineSegment* InSegment);
    void RefineryPipelineDelegate__DelegateSignature(APipelineStart* InPipelineStart);
    void RefineryExtractPodDelegate__DelegateSignature(UPipelineExtractorPod* InExtractorPod);
    void ReceiveRefineryStateChanged(ERefineryState InState);
    void ReceivePipelineStateChanged(APipelineStart* InPipeline, EPipelineBuildState InState);
    void ReceivePipelineStartReady(APipelineStart* InPipelineStart);
    void OnStartRefiningPressed(UPlayerCharacter* InCharacter, EInputKeys Key);
    void OnRep_RefineryState(ERefineryState InOldState);
    void OnPlayerCharacterRegistered(UPlayerCharacter* InCharacter);
    void OnPipelineStateChanged(APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    void OnObjectivesChanged();
    void OnLaunchRocketPressed(UPlayerCharacter* InCharacter, EInputKeys Key);
    float GetRefiningProgress();
}

class UFSDRefineryAnimInstance : UAnimInstance
{
    ERefineryState RefineryState;
}

class UTutorialComponent : UActorComponent
{
    bool bTutorialEnabled;
    int32 Priority;
    float MaxDuration;
    int32 MaxViewCount;
    bool ShowInTutorialLevel;
    bool bAutoRegisterWithManager;
    bool bDebugAlwaysShow;
    bool ManuallyMarkViews;
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    TWeakObjectPtr<AFSDPlayerState> PlayerState;
    TWeakObjectPtr<AFSDPlayerController> PlayerController;
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    bool bTutorialInitialized;
    bool bTutorialReady;
    bool bTutorialVisible;
    bool bTutorialActive;

    void RegisterTutorial();
    void ReceiveOnShown();
    void ReceiveOnInitialized();
    void ReceiveOnHidden();
    void OnTutorialsReset();
    void OnManagerReady(ATutorialManager* Manager);
    void MarkTutorialWatched();
    void MarkTutorialReadyNow();
    void MarkTutorialReadyInSeconds(float Delay);
    bool HasTutorialBeenShown();
    FString GetTutorialName();
    void CancelTutorial(bool CountAsViewed);
}

class UTutorialHintComponent : UTutorialComponent
{
    FTutorialHint Hint;

    void SetRemainingVisibleTime(float remainingTime);
    bool IsSingleplayer(UObject* WorldContext);
    void ChangeHint(const FTutorialHint& NewHint);
}

class URefineryHintComponent : UTutorialHintComponent
{
    TWeakObjectPtr<AFSDRefinery> Refinery;

    void ReceiveRefinerySpawned(UFSDRefinery* InRefinery);
    void ReceivePipelineSegmentPlaced(UPipelineSegment* InSegment);
    void ReceiveExtractorPodSpawned(UPipelineExtractorPod* InExtractorPod);
    void OnRefinerySpawned(UFSDRefinery* InRefinery);
}

class UFSDSaveGame : USaveGame
{
    FFSDSaveGameOnCreditsChanged OnCreditsChanged;
    void CreditsChangedSignature(int32 Credits);
    FFSDSaveGameOnCharacterSaveChanged OnCharacterSaveChanged;
    void CharacterProgressChangedSignature(TSubclassOf<UPlayerCharacter> CharacterClass, int32 Level, float Progress);
    FFSDSaveGameOnCharacterCanRetire OnCharacterCanRetire;
    void CharacterSignature(TSubclassOf<UPlayerCharacter> CharacterClass);
    FFSDSaveGameOnCharacterRetired OnCharacterRetired;
    void RetirementSignature(TSubclassOf<UPlayerCharacter> CharacterClass, int32 RetirementCount);
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
    void ResourceAmountChangedDelegate(UResourceData* Resource, float currentAmount);
    FFSDSaveGameOnSkinUnlocked OnSkinUnlocked;
    void SkinSignature(UItemSkin* Skin, UItemID* ItemID);
    FDateTime SaveSlotTimeStamp;
    FFSDSaveGameOnPerkPointsChanged OnPerkPointsChanged;
    void PerkPointsChangedSignature(int32 PerkPoints, int32 Change);
    FMissionStatSave MissionStatsSave;
    FMilestoneSave Milestones;
    FPerkClaimsSave OwnedPerks;
    FCharacterPerksSave EquippedPerks;
    FAchievementSave AchievementSave;
    TArray<FCharacterPerksSave> EquippedPerkLoadouts;
    FSchematicSave SchematicSave;
    FPromotionRewardsSave PromotionRewardsSave;
    FFSDEventRewardsSave FSDEventRewardsSave;
    FSeasonSave SeasonSave;
    FGameDLCSave GameDLCSave;
    int32 SaveCreatedInPatch;
    FString AnonymousID;
    int32 PerkPoints;
    bool HasRecievedDiscordReward;
    EFSDFaction Faction;
    TArray<FGuid> UnLockedMissions;
    TMap<FGuid, FUnLockedMissionParameters> UnLockedMissionParameters;
    TArray<FGuid> UnLockedPlanetZones;
    FCampaignSave CampaignSave;
    FDeepDiveSave DeepDiveSave;
    TArray<FCharacterSave> CharacterSaves;
    int32 Credits;
    int32 LastBoughtDailyDealSeed;
    FForgingSave Forging;
    FDrinkSave Drinks;
    TMap<FGuid, FItemUpgradeSelection> ItemUpgradeSelections;
    TArray<FUpgradeLoadout> ItemUpgradeLoadouts;
    TArray<FGuid> PurchasedItemUpgrades;
    TArray<FGuid> UnLockedItemUpgrades;
    TArray<FGuid> UnlockedItems;
    TArray<FGuid> OwnedItems;
    TMap<FGuid, int32> EnemiesKilled;
    TMap<FGuid, FItemNotificationInfo> ItemsWithNotification;
    TMap<FGuid, FSkinList> UnlockedItemSkins;
    TSet<FGuid> UnlockedPickaxeParts;
    TArray<UVanityItem*> UnLockedVanityItems;
    TArray<FGuid> UnLockedVanityItemIDs;
    TArray<FGuid> HiddenUICategories;
    int32 LastCollectedCommunityRewardPeriodID;
    TSet<FGuid> MinersManualKnownObjects;
    FEventRewardSave EventRewardSave;
    FItemUINotifications ItemUINotifications;
    FString RejoinSessionId;
    bool FirstRejoinAttempt;
    bool HaveSkinsBeenReset;
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
    bool HasRefundedUpgradeCostDifference;
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
    UPlayerCharacterID* LastPlayedCharacter;
    bool ShowInfoScreen;
    FString LastShownVersion;
    FSonyInputSettings SonyInputSettings;
    UFSDGameInstance* FSDGameInstance;

    void TutorialsResetDelegate__DelegateSignature();
    bool TrySellResource(UResourceData* Resource, int32 Amount, int32& Price);
    bool TryDeductResources(const TMap<UResourceData*, int32>& Resources);
    bool TryDeductCredits(int32 Amount);
    bool TryBuyResource(UResourceData* Resource, int32 Amount, int32& Price);
    void SkinSignature__DelegateSignature(UItemSkin* Skin, UItemID* ItemID);
    bool ShouldDisplayFirstSchematicMessage();
    void SetSonyInputSettingMotionXMapping(ESonyControllerMotionMapping NewValue);
    void SetSonyInputSettingLightMode(ESonyControllerLightMode NewValue);
    void SetSonyInputSettingFloat(UObject* WorldContext, ESonyInputSettingsFloats Setting, float NewValue);
    void SetSonyInputSettingBool(ESonyInputSettingsBools Setting, bool NewValue);
    bool SetPersonalAnalytics(bool State);
    void SetIsModded(bool modded);
    void SetIndexAndName(int32 Index, FString Name);
    void SetHasSentSteamInfo();
    void SetHasJoinedXboxClub();
    void SetHasClaimSteamGroupLoot();
    void SetFaction(EFSDFaction newFaction, bool Reasign);
    void SetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId, TSubclassOf<AActor> Item);
    void SetDiscordReward(bool State);
    void SetCharacterLoadout(UPlayerCharacterID* characterID, int32 loadoutNumber);
    void SetBoscoAllowed(bool aIsBoscoAllowed);
    bool SetAnonymousAnalytics(bool State);
    void SaveToDisk();
    bool SaveSlotToDisk(UFSDSaveGame* SaveSlot, FString slotName, int32 userIdx);
    void RetirementSignature__DelegateSignature(TSubclassOf<UPlayerCharacter> CharacterClass, int32 RetirementCount);
    int32 RetireCharacter(UPlayerCharacterID* characterID);
    void ResourceAmountChangedDelegate__DelegateSignature(UResourceData* Resource, float currentAmount);
    void ResetTutorials();
    void ResetSonyTouchSettings();
    void ResetSonyMotionSettings();
    void ResetSonyDualSenseSettings();
    void ResetRejoinSessionId();
    void RejoinAttempted();
    void RefreshLoadoutFromCharacter(UPlayerCharacterID* characterID);
    bool RecievedDiscordReward();
    FString PromotedClassesString();
    void PlayerProgressChangedSignature__DelegateSignature(int32 Rank, int32 Stars);
    void PersonalMatricsChangedSignature__DelegateSignature(bool AllowPersonalMetrics);
    void PerkPointsChangedSignature__DelegateSignature(int32 PerkPoints, int32 Change);
    void MarkRetirementRewardScreenSeen(UPlayerCharacterID* characterID);
    void MarkFirstSchematicMessageSeen();
    void ItemUnlockedDelegate__DelegateSignature();
    void ItemUINotificationDelegate__DelegateSignature();
    bool IsObsolete();
    bool IsInMinersManual(FGuid ObjectID);
    bool IsFirstRejoinAttempt();
    bool HasSeenRetirementRewardScreen();
    bool HasCharacterRetired(UPlayerCharacterID* characterID);
    bool HasCharacterCompletedRetirementCampaign(UPlayerCharacterID* characterID);
    bool HasBackupWithMoreProgress(UFSDGameInstance* GameInstance);
    bool HasAnyCharacterRetired();
    int32 GetTotalGamesPlayed();
    int32 GetTotalCharacterXP();
    ESonyControllerMotionMapping GetSonyInputSettingMotionXMapping();
    ESonyControllerLightMode GetSonyInputSettingLightMode();
    float GetSonyInputSettingFloat(ESonyInputSettingsFloats Setting);
    bool GetSonyInputSettingBool(ESonyInputSettingsBools Setting);
    FDateTime GetSlotTimeStamp();
    FString GetSlotLoadedFrom();
    int32 GetSelectedLoadoutIndex(UPlayerCharacterID* characterID);
    FString GetSaveSlotName(int32 userIdx);
    int32 GetResourceSellingPrice(UResourceData* Resource, int32 Amount);
    int32 GetResourceBuyingPrice(UResourceData* Resource, int32 Amount);
    float GetResourceAmount(const UResourceData* Resource);
    int32 GetRequiredXPForLevel(int32 Level);
    FString GetRejoinSessionId();
    int32 GetPurchasableItemCount();
    int32 GetPlayerRetirementRank();
    int32 GetPlayerRank();
    int32 GetPerkPoints();
    FString GetName();
    int32 GetMaxSaveSlots();
    int32 GetMainSaves(UFSDGameInstance* GameInstance, TArray<UFSDSaveGame*>& outMainSaves);
    bool GetIsModded();
    int32 GetIndex();
    bool GetHasSentSteamInfo();
    bool GetHasClaimedSteamGroupLoot();
    EFSDFaction GetFaction();
    UItemID* GetEquippedItemID(EItemCategory Category, UPlayerCharacterID* PlayerId);
    TSubclassOf<AActor> GetEquippedItem(EItemCategory Category, UPlayerCharacterID* PlayerId);
    int32 GetCredits();
    int32 GetClassXP(UPlayerCharacterID* characterID);
    int32 GetClassLevel(UPlayerCharacterID* characterID);
    int32 GetCharacterRetirementCount(const FGuid& PlayerId);
    bool GetBoscoAllowed();
    int32 GetAvailableUserSlotIndex(UFSDGameInstance* GameInstance);
    TArray<UFSDSaveGame*> GetAllSavesFromDisk(UFSDGameInstance* GameInstance);
    void ForgingXPDelegate__DelegateSignature(float XP);
    void ForceSetIsModded(bool modded);
    void FixNamingOfMainSave(UFSDSaveGame* mainsave);
    bool DeleteFromDisk(UFSDGameInstance* GameInstance, FString slotName, int32 userIdx);
    bool DeductPerkPoints(int32 Amount);
    void CreditsChangedSignature__DelegateSignature(int32 Credits);
    void CheckPromotionAchievementProgress(UObject* WorldContext, bool IsRetroactive);
    void CharacterSignature__DelegateSignature(TSubclassOf<UPlayerCharacter> CharacterClass);
    void CharacterProgressChangedSignature__DelegateSignature(TSubclassOf<UPlayerCharacter> CharacterClass, int32 Level, float Progress);
    bool CanAfford(const TMap<UResourceData*, int32>& Resources);
    void AnonymousMatricsChangedSignature__DelegateSignature(bool AllowAnonymousMetrics);
    void AddPerkPoints(int32 Amount);
    void AddGamePlayed();
    int32 AddCredits(int32 Amount);
}

class UOptionalUICategory : UDataAsset
{
    FOptionalUICategoryOnVisibilityChanged OnVisibilityChanged;
    void VisibilityChanged(UOptionalUICategory* Category, bool IsVisible);
    FGuid Guid;
    FText Description;

    void VisibilityChanged__DelegateSignature(UOptionalUICategory* Category, bool IsVisible);
    void SetVisible(UObject* WorldContext, bool IsCategoryVisible);
    bool IsVisible(UObject* WorldContext);
}

class UItemRefundList : UDataAsset
{
    bool ResetListOnSave;
    TArray<TSoftObjectPtr<UObject>> Items;
    TMap<FGuid, FItemRefundListItem> ItemsToRefund;
}

class UFSDSendToURL : UObject
{
}

class UFSDSessionUpdater : UObject
{
    FFSDSessionUpdaterOnNewFSDSessionID OnNewFSDSessionID;
    void NewFSDSessionID(FString sessionId);
}

class UFSDSkeletalMeshComponent : USkeletalMeshComponent
{
}

class UFSDSplineLibrary : UBlueprintFunctionLibrary
{

    bool SplineComponentSphereTrace(const USplineComponent*& SplineComponent, float Radius, uint8 TraceType, float StepSize, TArray<AActor*> IgnoreActors, FHitResult& OutHitResult, FVector Offset);
    TArray<FTransform> GetSplineComponentTransforms(const USplineComponent*& SplineComponent, float StepSize, uint8 Space);
    void GetLocationAndTangentsAtSplinePoint(const USplineComponent* Spline, int32 PointIndex, FVector& Location, FVector& ArriveTangent, FVector& LeaveTangent, uint8 CoordinateSpace);
    void ConvertSplineDistanceToInputKey(USplineComponent*& SplineComponent, USplineComponent* OptionalTargetSpline);
    bool CarveAroundSplinePoints(UObject* WorldContext, const FVector& InStartLocation, const FVector& InStartTangent, const FVector& InEndLocation, const FVector& InEndTangent, float InRadius, UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious);
    bool CarveAroundSplineMesh(USplineMeshComponent* InMesh, float InRadius, UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious);
    float ApproximateSplineDistanceAtWorldLocation(const USplineComponent* Spline, const FVector& WorldLocation);
}

class UFSDSteamUserStats : UActorComponent
{
}

class UFSDSteamUtils : UBlueprintFunctionLibrary
{

    bool PlayerIsFollowingUsOnSteam();
    void OpenURLInSteamBrowser(FString URL);
    bool IsTextFilteringInitialized();
    bool IsSteamLoaded();
    bool IsDev(UPlayerState* PlayerState);
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
}

class UFSDPS4Utils : UBlueprintFunctionLibrary
{

    void SetUGCAllowed(bool bAllowed);
    bool IsUGCAllowed();
    bool IsPS4SystemLoaded();
}

class UFSDTutorialSettings : UDataAsset
{
    int32 RequiredCPTreasures;
    int32 RequiredCPMachineEvents;
    int32 RequiredCPVeterans;
    TArray<FNewPlayerMutator> FirstMissionsMutators;
}

class UFSDLevelLoadingPersistentWidget : UUserWidget
{

    void SetFadeProgress(float Fade, bool ToSpaceRig, UTexture* loadingImage);
}

class UFSDLabelWidget : UTextBlock
{

    void SetWrapTextAt(float WrapAt);
    void SetWrappingPolicy(ETextWrappingPolicy Policy);
    void SetMargin(FMargin NewMargin);
    void SetLineHeightPercentage(float percentage);
    void SetFontSize(int32 Size);
    int32 GetFontSize();
}

class UFSDWidgetBlueprintLibrary : UBlueprintFunctionLibrary
{

    void WidgetDelegate__DelegateSignature(UUserWidget* Widget);
    void WidgetCreatedOrReusedDelegate__DelegateSignature(bool WasCreated, UUserWidget* Widget, int32 ActiveIndex);
    void ToggleAnimationLooping(UObject* WorldContext, UWidgetAnimation* InAnimation, FWidgetAnimationSettings InSettings, bool InLoop, bool& OutPlayingChanged, bool& OutIsPlaying);
    bool TextSmallerThan(const FText& Text1, const FText& Text2);
    bool TextGreaterThan(const FText& Text1, const FText& Text2);
    TArray<UWidget*> SortWidgetArray(const TArray<UWidget*>& InWidgets, const CompareWidgetsDelegate__DelegateSignature& InCompareFunction);
    void SimpleBox(FPaintContext& Context, FVector2D Position, FVector2D Size, FLinearColor Tint);
    FTimerHandle SetTimerForNextTick(UObject* WorldContext, const TimerDynamicDelegate__DelegateSignature& TimerDelegate);
    void SetSizeBoxSettings(USizeBox*& InSizeBox, const FSizeBoxSettings& InSettings);
    void SetMousePosition(UObject* WorldContextObject, int32 X, int32 Y);
    void SetChildrenVisibility(UPanelWidget* Panel, ESlateVisibility Visibility, int32 StartIndex, TSubclassOf<UUserWidget> OptionalClassFilter);
    void ScrubAnimation(UObject* WorldContext, UWidgetAnimation* InAnimation, float Progress01);
    void ScaleTextBlockToHeight(UTextBlock* TextBlock, float TargetHeight, bool SetMinimimumWidth);
    void ScaleImageToHeight(UImage* Image, float TargetHeight);
    void PrintStrings(UObject* WorldContextObject, const TArray<FString>& InStrings, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    FString MidIgnoringWhiteSpace(FString Source, int32 Index, int32 count);
    FVector2D MeasureTextSize(const FText& Text, const FSlateFontInfo& Font);
    FVector2D MeasureTextBlockSize(const UTextBlock* TextBlock);
    void Line(FPaintContext& Context, FVector2D Pos1, FVector2D Pos2, FLinearColor Tint);
    FLinearColor LerpColors(const TArray<FLinearColor>& Colors, bool Interpolate, float Progress01);
    int32 LengthIgnoringWhitespace(FString Source);
    bool IsWindowsPlatform(UObject* WorldContextObject);
    bool IsWhiteSpaceAt(FString Source, int32 Index);
    bool IsWhiteSpace(FString Source);
    bool IsHUDVisible(UObject* WorldContextObject);
    FString IntToRomanNumeral(int32 Value);
    bool HasAnyVisibleChildren(UPanelWidget* Panel, int32 StartIndex, TSubclassOf<UUserWidget> OptionalClassFilter);
    FString GetShortTimeString(int32 TotalSeconds, bool BlinkDelimiter);
    UWindowWidget* GetParentWindowWidget(UUserWidget* InWidget);
    UUserWidget* GetParentUserWidget(UUserWidget* InWidget);
    AFSDPlayerState* GetOwningFSDPlayerState(UWidget* Target);
    FText GetKeyName(const FKey& Key);
    float GetFontMaxHeight(const FSlateFontInfo& Font);
    float GetFontBaseline(const FSlateFontInfo& Font);
    UWidget* GetFocusedWidget(UObject* WorldContextObject, UPlayerController* Controller);
    UUserWidget* GetFocusableParentUserWidget(UUserWidget* InWidget);
    FVector2D GetDrawSize(FPaintContext& InContext);
    UFSDCheatManager* GetCheatManager(UObject* WorldContextObject);
    UWidget* FindChildWidget(UPanelWidget*& ParentWidget, TSubclassOf<UUserWidget> WidgetClass, bool SearchChildren);
    UVerticalBox* CreateVerticalBox(UObject* WorldContext);
    UTextBlock* CreateTextBlock(UObject* WorldContext, FText Text, FSlateFontInfo Font, uint8 Justification, FLinearColor Color, bool WrapText);
    USpacer* CreateSpacer(UObject* WorldContext, FVector2D Size);
    TArray<UUserWidget*> CreateOrReuseChildrenWithCallbackEx(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass, const WidgetCreatedOrReusedDelegate__DelegateSignature& OnCreatedOrReused, const WidgetDelegate__DelegateSignature& OnCollapsed);
    TArray<UUserWidget*> CreateOrReuseChildrenWithCallback(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass, const WidgetCreatedOrReusedDelegate__DelegateSignature& OnCreatedOrReused);
    TArray<UUserWidget*> CreateOrReuseChildren(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass);
    UImage* CreateImageSized(UObject* WorldContext, UTexture2D* Texture, FLinearColor Tint, FVector2D Size);
    UImage* CreateImage(UObject* WorldContext, UTexture2D* Texture, FLinearColor Tint, bool AutoSize);
    UHorizontalBox* CreateHorizontalBox(UObject* WorldContext);
    bool CompareWidgetsDelegate__DelegateSignature(const UWidget* InFirstWidget, const UWidget* InSecondWidget);
    FText ClampTextLength(const FText& Text, int32 MaxLength, const FText& CutOffIndicator);
    void Box(FPaintContext& Context, FVector2D Position, FVector2D Size, const FSlateBrush& Brush, FLinearColor Tint);
    UWidget* AddWidgetToRow(UVerticalBox* VerticalBox, UWidget* Widget, int32 MaxWidgetsPerRow, float WidgetSpacing, float RowSpacing, UHorizontalBoxSlot*& OutSlot, UHorizontalBox*& OutRow);
    UWidget* AddChildToVerticalBoxEx(UVerticalBox* VerticalBox, UWidget* Widget, uint8 HorizontalAlignment, uint8 VerticalAlignment, float Size, FMargin Padding, UVerticalBoxSlot*& OutSlot, UVerticalBox*& OutVerticalBox);
    UWidget* AddChildToUniformGridEx(UUniformGridPanel* GridPanel, UWidget* Widget, uint8 HorizontalAlignment, uint8 VerticalAlignment, int32 Column, int32 Row, UUniformGridSlot*& OutSlot, UUniformGridPanel*& OutGridPanel);
    UWidget* AddChildToHorizontalBoxEx(UHorizontalBox* HorizontalBox, UWidget* Widget, uint8 HorizontalAlignment, uint8 VerticalAlignment, float Size, FMargin Padding, UHorizontalBoxSlot*& OutSlot, UHorizontalBox*& OutHorizontalBox);
}

class UFSDWidgetEffectsComponent : UActorComponent
{
    TArray<FWidgetPing> WidgetPings;
    TArray<FWidgetFade> WidgetFades;
    TArray<FWidgetTextCounter> WidgetTextCounters;
    TArray<FCustomCounter> CustomCounters;
    TArray<FWidgetMover> WidgetMovers;

    void StartTextCounter(UObject* WorldContext, UTextBlock*& Widget, float Start, float End, float Duration, int32 MaxDigits, float StartDelay);
    void StartCounter(UObject* WorldContext, UObject* Owner, float Start, float End, float Duration, const CustomCounterDelegate__DelegateSignature& OnCount, float StartDelay);
    void PingWidget(UObject* WorldContext, UWidget* Widget, float Amount, float Duration, EPingType PingType, float StartDelay);
    void MoveWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D Start, FVector2D End, float Duration, EMoveType MoveType, float StartDelay);
    void MoveOutWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveToOffset, float Duration, float StartDelay);
    void MoveInWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveFromOffset, float Duration, float StartDelay);
    void FadeWidget(UObject* WorldContext, UUserWidget* Widget, float StartFade, float EndFade, float Duration, float StartDelay);
    void FadeOutWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay);
    void FadeInWidget(UObject* WorldContext, UUserWidget* Widget, float Duration, float StartDelay);
}

class UFSDXboxUtils : UBlueprintFunctionLibrary
{

    void ShowStoreUIForStoreItem(UObject* WorldContextObject, FString storeItemName);
    void ShowStoreUI(UObject* WorldContextObject);
    bool ShowCheatTerminal();
    bool IsDCLCheckComplete(UObject* WorldContextObject);
}

class UFSDPFPUtils : UBlueprintFunctionLibrary
{

    bool IsPlayfabLoaded();
    FString GetPlayfabUserId();
}

class ATrackBuilderItem : UAnimatedItem
{
    UCrosshairAggregator* CrosshairAggregator;
    EPlaceableObstructionType ObstructionType;
    FVector ObstructionLocation;
    FVector GroundNormal;
    TSubclassOf<ATrackBuilderSegment> DefaultSegmentType;
    ATrackBuilderSegment* NextSegment;
    bool bIsPlacingSegment;

    void UpdatePlacement(const FTransform& InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool bPlacementValid, bool InUpdateServer);
    void ServerUpdatePlacement(const FTransform& InTransform, const bool bPlacementValid, UTrackBuilderConnectPoint* InConnectPoint);
    void ServerFinishPlacement(const FTransform& FinalLocation, UTrackBuilderConnectPoint* ConnectPoint);
    void ServerCancelPlacement();
    void ServerBeginPlaceSegment(UTrackBuilderUsable* InUsable);
    void ReceiveBeginPlaceSegment();
    void OnRep_NextSegment();
    TSubclassOf<ATrackBuilderSegment> GetSegmentType();
    void FinishPlacement(const FTransform& FinalLocation, UTrackBuilderConnectPoint* ConnectPoint);
    void CancelPlacement();
    FVector AdjustInitialLocation(const FVector& Location);
}

class AFuelLineBuilderItem : UTrackBuilderItem
{
    UItemPlacerAggregator* SegmentPlacer;

    void ReceivePlacementUpdated(bool InCanPlace, bool InConnecting, float InDistanceProgress);
}

class AFuelLineEndPoint : AActor
{
    UFuelLineConnectPoint* ConnectPoint;
    UStaticMeshComponent* StaticMesh;

    void ReceivePing(bool InValidPlacement);
    void CallbackConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
}

class UTrackBuilderConnectPoint : USphereComponent
{
    FTrackBuilderConnectPointOnConnectedWithSegment OnConnectedWithSegment;
    void ConnectionDelegate(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    TSubclassOf<ATrackBuilderSegment> ConnectType;
    TWeakObjectPtr<ATrackBuilderSegment> ConnectedSegment;
    float MaxConnectRadius;
    float ConnectDistance;
    FVector MaxAngles;

    void OnRep_ConnectedSegment();
    FTransform GetConnectTransform(const FTransform& FromWorldTransform);
    bool Disconnect(ATrackBuilderSegment* InSegment);
    void ConnectionDelegate__DelegateSignature(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    bool Connect(ATrackBuilderSegment* InSegment);
    bool CanConnectWith(ATrackBuilderSegment* InSegment, const FTransform& FromWorldTransform);
}

class UFuelLineConnectPoint : UTrackBuilderConnectPoint
{
}

class ATrackBuilderSegment : AActor
{
    UTrackBuilderUsable* NextSegmentUsable;
    TWeakObjectPtr<APlayerCharacter> BuiltByCharacter;
    TWeakObjectPtr<UTrackBuilderUsable> BuiltFromUsable;
    FTrackBuilderPoint SegmentEndTransform;
    FTrackBuilderPoint ServerSegmentEndTransform;

    bool UpdatePlacement(const FTransform& InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool InPlacementValid, AItem* PlaceableItem);
    void ReceivPlacementValidChanged(bool InIsValid);
    void ReceivePlacementStateChanged(ETrackBuildPlacementState NewState);
    void ReceivePlacementChangedEnd(const FTransform& NewEndTransform, UTrackBuilderConnectPoint* InConnectPoint);
    void ReceivePlacementChangedBegin(const FTransform& NewEndTransform, UTrackBuilderConnectPoint* InConnectPoint);
    bool ReceiveCanPlaceAt(const FTransform& InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint);
    void OnRep_SegmentEndTransform();
    UTrackBuilderUsable* GetTrackStartUsable();
    AActor* GetTrackStartActor();
    FTransform GetStartTransform();
    FTransform GetSegmentEndTransform();
    ETrackBuildPlacementState GetPlacementState();
    ATrackBuilderSegment* GetNextSegment(bool bForward);
    bool GetIsSegmentEndTransformValid();
    UTrackBuilderConnectPoint* GetConnectPoint();
    bool CanPlaceAt(const FTransform& InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint, AItem* PlaceableItem);
}

class AFuelLineSegment : ATrackBuilderSegment
{
    USplineMeshComponent* FuelLineSplineMesh;
    USplineComponent* FuelLineSplineComponent;
    UStaticMeshComponent* FuelLineEndPostMesh;
    USimpleHealthComponent* DeconstructHealthComponent;
    USceneComponent* PreviewEndPostLocation;
    float EndPostHeightOffset;
    float MaxLength;
    bool bHasMaxTurnAngle;
    float MaxTurnAngle;

    void ClientUpdateStartTransform(const FVector& NewStartLocation);
    void ChangeStartTransform(const FTransform& ChangedStartLocation);
    void CallbackOnDeath(UHealthComponentBase* InHealthComponent);
    void CallbackCanStartNextSegmentChanged(bool InCanStart);
}

class AFuelLineStart : AActor
{
    FFuelLineStartOnFuelLineConnected OnFuelLineConnected;
    void FuelLineStartDelegate(AFuelLineStart* InFuelLineStart);
    UStaticMeshComponent* StaticMesh;
    UOutlineComponent* OutlineComponent;
    USimpleObjectInfoComponent* ObjectInfoComponent;
    UFuelLineStartUsable* UsableStartFuelLine;
    bool bFuelLineConnected;

    void ReceiveFuelLineConnected();
    void OnRep_FuelLineConnected();
    void FuelLineStartDelegate__DelegateSignature(AFuelLineStart* InFuelLineStart);
    void CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
}

class UTrackBuilderUsable : UInstantUsable
{
    FTrackBuilderUsableOnNextSegmentChanged OnNextSegmentChanged;
    void SegmentDelegate(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
    TSubclassOf<ATrackBuilderItem> BuilderItemType;
    FString ColliderName;
    USceneComponent* TrackStartComponent;
    ATrackBuilderSegment* NextSegment;
    TWeakObjectPtr<APlayerCharacter> InUseBy;

    void SegmentDelegate__DelegateSignature(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
    void OnRep_NextSegment();
    void OnNextSegmentDestroyed(AActor* InActor);
    FTransform GetStartTransform();
    void FinishUse(UPlayerCharacter* User, ATrackBuilderSegment* InSegment);
}

class UFuelLineStartUsable : UTrackBuilderUsable
{
}

class UStatusEffectSettings : UDataAsset
{
    TSubclassOf<UStatusEffect> frozen;
}

class UGameAnimationSettings : UDataAsset
{
}

class UUpgradeSettings : UDataAsset
{
    TArray<TSoftObjectPtr<UItemUpgrade>> UpgradesToCostRefund;
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
    TArray<FUpgradeCostItem> OldClassAResourceCosts;
    TArray<FUpgradeCostItem> OldClassBResourceCosts;

    void AddUpgradesFromItems(const TArray<TSubclassOf<AActor>>& Items);
}

class UAfflictionSettings : UDataAsset
{
    TArray<FRuntimeFloatCurve> IceScalers;
    TArray<UStaticMesh*> IceMeshes;
    FRandRange ScaleDelay;
    USoundCue* FreezeSound;
    USoundCue* IceBreakSound;
    USoundCue* BurningSound;
    USoundCue* EletrocutedSound;
    float HeavyStaggerMinTime;
    float MediumStaggerMinTime;
    UPawnAffliction* HeavyStaggerAffliction;
    UPawnAffliction* MediumStaggerAffliction;
    UPawnAffliction* ShortStaggerAffliction;
    TArray<UParticleSystem*> FreezeParticles;
    TArray<UParticleSystem*> IceBreakParticles;
    TArray<UParticleSystem*> BurningParticles;
    TArray<UParticleSystem*> EletrocutedParticles;
    TArray<UParticleSystem*> ExplodingParticles;
    TArray<USoundCue*> ExplodingSounds;
}

class UCommunityGoalSettings : UDataAsset
{
    TArray<UCommunityGoalFaction*> ActiveCommunityFactions;
    TArray<UCommunityGoal*> ActiveCommunityGoals;
    UCommunityGoal* DSMUGoal;

    UCommunityGoal* GetGoal(ECommunityGoalIndex Goal);
    UCommunityGoal* FindGoal(FString Goal);
}

class UGameData : UObject
{
    TSoftClassPtr<AActor> BarrelClass;
    FGVisibilityGroups VisibilityGroups;
    UNiagaraParameterCollection* NiagaraParameterCollection;
    UDLCBase* AlwaysLockedDLC;
    UPromotionRewardsSettings* PromotionRewardsSettings;
    UFSDEventCollection* FsdEventsSettings;
    UGameActivitySettings* GameActivitySettings;
    UDanceSettings* DanceSettings;
    UGameAnimationSettings* AnimationSettings;
    UEnemySettings* EnemySettings;
    UDamageSettings* DamageSettings;
    UPlanetZoneSetup* ZoneSettings;
    UTreasureSettings* TreasureSettings;
    UDrinkSettings* DrinkSettings;
    UUpgradeSettings* UpgradeSettings;
    USpawnSettings* SpawnSettings;
    UKeyBindingSettings* KeyBindingSettings;
    UDeepDiveSettings* DeepDiveSettings;
    UEncounterSettings* EncounterSettings;
    UForginSettings* ForgingSettings;
    USchematicSettings* SchematicSettings;
    UItemSkinSettings* SkinSettings;
    USpecialEventSettings* SpecialEventSettings;
    UProceduralSettings* ProceduralSettings;
    UPickaxeSettings* PickaxeSettings;
    UFSDTagSettings* TagSettings;
    UItemSettings* ItemSettings;
    UShowroomSettings* ShowroomSettings;
    UVictoryPoseSettings* VictoryPoseSettings;
    UFSDTutorialSettings* TutorialSettings;
    ULegacySettings* LegacySettings;
    UEffectSettings* EffectSettings;
    UAfflictionSettings* AfflictionSettings;
    UCommunityGoalSettings* CommunityGoalSettings;
    UDailyDealSettings* DailyDealSettings;
    FGDMissionStats MissionStats;
    FGDMilestones Milestones;
    FGDPerks perks;
    FGDItemCategoryIDs ItemCategoryIDs;
    TArray<UTexture2D*> LoadoutIconList;
    UMinersManual* MinersManual;
    FGDDamageClasses DamageClasses;
    FGDStats Stats;
    FGDResources Resources;
    FGDTerrainTypes TerrainTypes;
    FGDGameStatsTracking GameStatsTracking;
    FGDAudio Audio;
    FGDDifficulty Difficulty;
    UStatusEffectSettings* StatusEffects;
    FGDCharacterRetirement Retirement;
    FGDPlayerAndCharacterProgression PlayerAndCharacterProgression;
    UCharacterSettings* CharacterSettings;
    UAchievementList* Achievements;
    UDataTable* SchematicGATable;
    TArray<UMissionTemplate*> TestMissions;
    TSoftObjectPtr<UBiome> TestBiome;
    UGlobalMissionSetup* MissionSetup;
    TSoftClassPtr<UCampaignManager> CampaignManagerClass;
    UPlayerCharacterID* BoscoID;
    TMap<UPlayerCharacterID*, UInventoryList*> InventoryLists;
    UBiome* DefaultBiome;
    TArray<FText> GenericBiomeQuotes;
    UMissionTemplate* DefaultMission;
    USeasonSettings* SeasonSettings;
    TSubclassOf<AProceduralSetup> CaveGeneratorPLSClass;
    TArray<UItemRefundList*> ItemRefunds;
    TArray<TSubclassOf<USubsystem>> BlueprintSubSystems;
    UPlayerCharacterID* DefaultCharacterID;
    UPlayerCharacterID* DefaultEditorCharacterID;
    FGameplayTag XBoxExcludeRoomTag;

    void UnloadPreloadedAssets();
    void LoadDefaultAssetsBlocking(UAsyncManager* AsyncManager);
    bool IsPerkTierUnLocked(UObject* WorldContext, int32 Tier);
    bool IsCheatConsolesEnabled();
    int32 GetRequiredPerkClaimsForTier(int32 Tier);
    TArray<UPlayerCharacterID*> GetRankedHeroIDs();
    TArray<TSubclassOf<APlayerCharacter>> GetRankedHeroClasses();
    FText GetPlayerRankName(int32 Rank);
    TSubclassOf<APlayerCharacter> GetPlayerClassFromID(UPlayerCharacterID* ID);
    UPlayerCharacterID* GetPlayerCharacterID(const FGuid& ID);
    void GetPerkTierState(UObject* WorldContext, int32 Tier, bool& TierUnLocked, int32& NextRequiredCount, int32& NextProgressCount);
    UInventoryList* GetInventoryList(UPlayerCharacterID* characterID);
    int32 GetHighestPerkTier();
    UDifficultySetting* GetDifficultySetting(int32 Index);
    int32 GetDifficultyIndex(UDifficultySetting* Difficulty);
    TSubclassOf<APlayerCharacter> GetDefaultEditorCharacter();
    TSubclassOf<APlayerCharacter> GetDefaultCharacter();
    FRetirementCostItem GetCharacterRetirementCost(UObject* WorldContext, UPlayerCharacterID* ID);
    TArray<UPerkAsset*> GetCharacterNonEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID);
    TArray<UPerkAsset*> GetCharacterEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID);
    TArray<UPerkAsset*> GetAvailablePerks();
    int32 GetAmountOfPurchasedPerks(UObject* WorldContext);
    TArray<UHUDVisibilityGroup*> GetAllVisibilityGroups();
    TArray<UMissionStat*> GetAllMissionStats();
    TArray<UMissionStat*> GetAllInfirmaryStats();
    int32 CalculateClaimablePerkPoints(UObject* WorldContext);
}

class UDLCBase : UDataAsset
{

    void QueryAllDLC();
    bool IsUnlocked();
    bool IsDLCUnLocked(UDLCBase* dlc);
}

class UGameDLC : UDLCBase
{
    int32 SteamID;
    FString SteamName;
    FString OddishID;
    FString XBoxDLCName;
    TMap<FString, FString> SonyAdditionalContentLabelMap;
    FString UWPStoreID;
    bool ShowOnDLCScreen;
    TSoftObjectPtr<UTexture2D> Banner;
    TSoftObjectPtr<UTexture2D> Banner_16_9;
    TSoftClassPtr<UWindowWidget> AnnouncementWidget;
    FGuid SaveGameID;
    TMap<UResourceData*, int32> Resources;
    int32 PerformancePoints;
    TSoftObjectPtr<UFileMediaSource> Movie;

    bool ShouldBeAnnounced(UObject* WorldContext);
    bool OpenStorePage(UObject* WorldContext);
    void MarkAnnounced(UObject* WorldContext);
    FString GetSonyAdditionalContentId();
    UTexture2D* GetBanner_16_9();
    UTexture2D* GetBanner();
}

class UGameDLCSettings : UDataAsset
{
    TSet<UGameDLC*> StoreDLCs;

    TArray<UGameDLC*> GetStoreDLCs(UObject* WorldContext);
    TArray<UGameDLC*> GetAnnouncableDLCs(UObject* WorldContext);
}

class UTimedDLC : UDLCBase
{
    FDateTime StartDate;
    FDateTime EndDate;
}

class UAlwaysLockedDLC : UDLCBase
{
}

class UPlatformExclusiveDLC : UDLCBase
{
    EFSDTargetPlatform Platform;
}

class UAndDLC : UDLCBase
{
    TArray<UDLCBase*> DLCs;
}

class UOrDLC : UDLCBase
{
    TArray<UDLCBase*> DLCs;
}

class UNotDLC : UDLCBase
{
    UDLCBase* dlc;
}

class AEventRewardFrame : AActor
{
    USpecialEventUsableComponent* EventUsable;
    TArray<AEventRewardDispenser*> Dispensers;
    bool keyInserted;
    TArray<FString> EventPlayerIDs;

    void TurnOff();
    void SetKeyInserted(bool keyInserted);
    void SetDispenseRewards(bool dispensRewards);
    void RegisterDispenser(AEventRewardDispenser* Dispenser);
    bool GetDispensRewards();
}

class AEventRewardDispenser : AActor
{
    FUniqueNetIdRepl PlayerId;
    AEventRewardFrame* DispenserFrame;
    bool PoweredUp;
    bool IsActivated;
    USchematic* SelectedReward;

    void SetSelectedReward(USchematic* InReward);
    bool PowerUp(UPlayerCharacter* InPlayerCharacter);
    void OnRewardSelected();
    void OnRep_SelectedReward();
    void OnRep_PoweredUp();
    void OnRep_PlayerId();
    void OnRep_IsActivated();
    void OnPoweredUp();
    void OnOwnerAssigned();
    void OnOpenDispenser();
    bool IsOwningPlayer(UPlayerCharacter* PlayerCharacter);
    APlayerCharacter* GetPlayerCharacter();
    AFSDPlayerState* GetPlayer();
}

class UEventRewardType : UDataAsset
{
    FText Title;
    TSoftObjectPtr<UTexture2D> IconFront;
    TSoftObjectPtr<UTexture2D> IconBack;
    FLinearColor IconFrontTint;
    FLinearColor IconBackTint;
    FLinearColor BackgroundTint;
}

class AEventStarterButton : AActor
{
    USceneComponent* Root;
    USingleUsableComponent* Usable;
    FEventStarterButtonOnBootupEvent OnBootupEvent;
    void BootUpDelegate(AEventStarterButton* pushedButton);
    bool Booted;
    bool IsOpenForUse;
    bool IsEventActive;

    void SetIsEventActive(bool IsEventActive);
    void OnUseProgress(float Progress);
    void OnRep_OpenForUse();
    void OnRep_Booted();
    void OnOpenedForUse(bool wasOpened);
    void OnBooted();
    void CloseForUse(UPlayerCharacter* User, EInputKeys Key);
    void BootUpEvent();
}

class UGameEventAnimInstance : UAnimInstance
{
    float StageProgress;
    bool IsEventActive;
    bool AreEventStartersActive;
    bool EventFailed;
}

class UEventStarterAnimInstance : UAnimInstance
{
    float UseProgress;
    bool IsOpenForUse;
    bool IsBooted;
    bool IsEventActive;
}

class UCoreInfuserAnimInstance : UAnimInstance
{
    bool PoweredUp;
    bool IsOpen;
    bool IsRewardSelected;

    void OnRewardSelected();
}

class UCoreInfuserPlatformAnimInstance : UAnimInstance
{
    bool keyInserted;
    bool dispensRewards;
}

class UEventParticipant : UInterface
{

    bool SetupEvent(AGameEvent* GameEvent);
    void OnEventTriggered();
    void OnEventProgress(float Progress);
    void OnEventOpened();
    void OnEventFinished(bool eventSuccess);
    bool AdvanceOneObjective();
    bool AddEventProgress(float Progress);
}

class UGameFunctionLibrary : UBlueprintFunctionLibrary
{

    void SpawnOrUpdateAudio2D(UObject* WorldContext, UAudioComponent*& AudioComponent, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, FName FloatParamName, float FloatParam);
    void SetUsePushToTalk(bool Enable);
    void SetGlobalGravityZ(UObject* WorldContextObject, float GravityZ);
    void SetGlobalGravityScale(UObject* WorldContextObject, float GravityScale);
    bool IsWorldTickEnabled(UObject* WorldContextObject);
    void IsTearingDown(UObject* caller, bool& IsTearingDown);
    bool IsPlayingOffline(UObject* WorldContextObject);
    bool IsPlayInEditor(UObject* WorldContextObject);
    UWindowManager* GetWindowManager(UObject* WorldContextObject);
    bool GetUsePushToTalk();
    UWindowWidget* GetTopWindow(UObject* WorldContextObject);
    FString GetProjectVersion();
    int32 GetNumPlayers(UObject* WorldContext);
    int32 GetNumAdditionalPlayers(UObject* WorldContext);
    FString GetMajorProjectVersion();
    APlayerCharacter* GetLocalPlayerCharacter(UObject* WorldContext);
    UGoogleAnalyticsWrapper* GetGoogleAnalyticsWrapper(UObject* WorldContextObject);
    float GetGlobalGravityZ(UObject* WorldContextObject);
    AFSDGameModeSpaceRig* GetFSDSRGameMode(UObject* WorldContextObject);
    UFSDSaveGame* GetFSDSaveGame(UObject* WorldContextObject);
    AFSDGameState* GetFSDGameState(UObject* WorldContextObject);
    AFSDGameMode* GetFSDGameMode(UObject* WorldContextObject);
    UFSDGameInstance* GetFSDGameInstance(UObject* WorldContextObject);
    UGameData* GetFSDGameData();
    UDeepDiveManager* GetDeepDiveManager(UObject* WorldContextObject);
    ADeepCSGWorld* GetCSGWorld(UObject* WorldContextObject);
    int32 GetChangelist();
    UCampaignManager* GetCampaingManager(UObject* WorldContextObject);
    UAsyncManager* GetAsyncManager(UObject* WorldContextObject);
}

class UGameModeFunctionLibrary : UBlueprintFunctionLibrary
{

    FTransform FindRandomEscapePodLocation(UObject* WorldContextObject);
    FTransform FindEscapePodLocationAtDistance(UObject* WorldContextObject, float Distance, float aboveDistanceBias, AActor* optionalFrom);
}

class UResourceBasedObjective : UObjective
{
}

class UGatherGemsObjective : UResourceBasedObjective
{
    int32 GemsRequired;
    float GemsSpawnedModifier;
    int32 GemsCollected;
    UGemResourceData* GemResource;

    void OnResourceChanged(UCappedResource* CappedResource, float Amount);
    void OnRep_GemsCollected(int32 prevAmount);
}

class UGatheItemsObjective : UResourceBasedObjective
{
    int32 ItemsRequired;
    float ItemsSpawnedModifier;
    int32 ItemsCollected;
    UCollectableResourceData* ItemResource;

    void OnResourceChanged(UCappedResource* CappedResource, float Amount);
    void OnRep_ItemsCollected(int32 prevAmount);
}

class ABasicThrowableItem : UCarriableItem
{
    UBoxComponent* BoxComp;
    USphereComponent* UseSphere;
    UCarriableComponent* CarriableComp;
    UInstantUsable* UsableComp;
    UStaticMeshComponent* WorldMeshComp;
    UFirstPersonStaticMeshComponent* ViewMeshComp;
    USoundCue* ImpactSound;
    float SquaredMinImpactForce;
    float ImpactAudioResetTime;
    float SquaredMinThrowforce;

    void ThrowItem(const FVector& throwForce);
    void ResetImpactSound();
    void OnUsed(UPlayerCharacter* User, EInputKeys Key);
    void OnUsableChanged(bool CanUse);
    void OnPickedUp();
    void OnDropped();
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
}

class AGem : UCarriableItem
{
    UCarriableInstantUsable* Usable;
    UResourceData* ResourceType;
    float ResourceAmount;
    bool hasBeenReleased;

    void SetHasBeenReleased(bool hasBeenReleased);
    bool GetHasBeenReleased();
}

class AResourcePouch : UCarriableItem
{
    UCarriableInstantUsable* Usable;
    USoundCue* ImpactGroundSound;

    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
}

class UGemTracker : UActorComponent
{
    FName TrackName;
}

class UGemProximityTracker : UActorComponent
{
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    TArray<FTrackPositionList> TrackerLists;
}

class UGemResourceData : UResourceData
{
    UDebrisPositioning* DebrisPositioning;
    bool CheckIfCompletelyCoveredByTerrain;
    FIRandRange GemValue;
    UGemResourceCreator* ResourceCreator;
    float InfluencerRange;
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    TArray<TSoftClassPtr<AGem>> GemClasses;
    TArray<TSubclassOf<AGem>> GemClassesLoaded;
    TArray<UDebrisBase*> DebrisLoaded;

    int32 GetCollectedGemsCreditValue(UFSDGameState* GameState);
    int32 GetCollectedGemsAmount(UFSDGameState* GameState);
}

class UGemResourceCreator : UDataAsset
{
    UGemResourceData* ResourceData;
    bool CheckIfFreeSpaceAbove;
    int32 SearchSize;
}

class URandomGemResourceCreator : UGemResourceCreator
{
    UCurveFloat* PlacementDistanceProbabilityCurve;
}

class UDistributedGemResourceCreator : UGemResourceCreator
{
    UCurveFloat* PlacementDistanceProbabilityCurve;
}

class UGeneratedMission : UObject
{
    UBiome* Biome;
    int32 Seed;
    int32 GlobalSeed;
    UMissionTemplate* Template;
    FText MissionName;
    TSubclassOf<UObjective> PrimaryObjective;
    TSubclassOf<UObjective> SecondaryObjective;
    TMap<TSubclassOf<UMutator>, FGMMutatorItem> Mutators;
    TArray<UMissionWarning*> MissionWarnings;
    UMissionMutator* MissionMutator;
    UMissionComplexity* ComplexityLimit;
    UMissionDuration* DurationLimit;
    TSubclassOf<UMissionDNA> MissionDNA;
    EMissionStructure MissionStructure;
    TSoftObjectPtr<ULevelSequence> LoaderLevelSequence;

    void Recieve_SetupPLS(AProceduralSetup* pls);
    bool IsSingleMission();
    bool IsLocked(UFSDPlayerController* Player);
    bool IsDeepDive();
    FObjectiveMissionIcon GetSecondaryObjectiveIcon();
    TSubclassOf<AProceduralSetup> GetPLS();
    TArray<UMutator*> GetMutators(TSubclassOf<UMutator> mutatorClass);
    float GetMissionScale();
    UMissionDNA* GetMissionDNA();
    AProceduralSetup* CreatePLS(int32 Seed);
    bool AreMissionsEqual(UGeneratedMission* Other);
}

class ARoomGenerationItem : AGenerationItem
{
}

class UGetFriendsListBlueprintCallProxy : UOnlineBlueprintCallProxyBase
{
    FGetFriendsListBlueprintCallProxyOnSuccess OnSuccess;
    void BlueprintGetFriendsListDelegate(const TArray<FBlueprintFriend>& Results);
    FGetFriendsListBlueprintCallProxyOnFailure OnFailure;
    void BlueprintGetFriendsListDelegate(const TArray<FBlueprintFriend>& Results);
    UObject* WorldContextObject;

    UGetFriendsListBlueprintCallProxy* GetFriendsList(UObject* WorldContextObject, FString ListName);
}

class UGlobalMissionSetup : UDataAsset
{
    FIRandRange ExtraBiomes;
    FIRandRange AdditionalMissionsForExtraBiomes;
    FIRandRange MissionsPerZone;
    TArray<FMissionBiomeItem> Biomes;
    TArray<FMissionTemplateItem> AvailableMissions;
    FMissionTemplateItem FacilityMission;
    float FacilityMutatorChance;
    UMissionNameBank* MissionNames;
    FIRandRange MutatorWarningCount;
    float DoubleWarningChance;
    TArray<UMissionMutator*> Mutators;
    TArray<UMissionWarning*> Warnings;
    TMap<UMissionWarning*, UMissionWarning*> IncompatibleWarnings;
    TArray<UPlanetZone*> PlanetZones;
    TArray<FRequiredMissionItem> GlobalRequiredMissions;

    TArray<FMissionTemplateItem> GetAllPossibleMissions();
}

class AGlowPlant : AActor
{
    UStaticMeshComponent* TrunkMesh;
    UPointLightComponent* MainLight;
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
    void OnDamage(UPrimitiveComponent* hitSphere);
}

class UGoogleAnalyticsWrapper : UObject
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

    void StartMissionPartyInfo(UFSDGameState* GameState);
    void SetShouldUpdateSchematicInformation();
    void ResetBoscoLoadout();
    void RecordTotalTimeHit(FString Key, FString Campaign, bool Rank, int32 Time);
    void RecordOpenScreen(FString Key, bool Rank);
    void RecordMachineEventEnd(FString EventName, bool WasCompleted, float completionTime);
    void RecordKickPlayer(FString reason, UPlayerController* KickedPlayer);
    void RecordGAUserTiming(FString TimingCategory, const int32 TimingValue, FString TimingName);
    void RecordGaTreeOfVanityClaim(int32 NodeID);
    void RecordGASeasonLevelUp();
    void RecordGAMissionTotalTimeHit(FString Key, FString Campaign, bool Rank, int32 totalTime, int32 Progress, int32 XP, int32 Credits);
    void RecordGAMissionTimeEvent(int32 Time);
    void RecordGAEvent(FString EventCategory, FString EventAction, FString EventLabel, const int32 EventValue, EFSDGoogleAnalyticsProperties Property);
    void RecordGADeepDiveStageHit(FString Key, bool Rank, int32 stageTime, int32 timeSinceStartOfDive, int32 totalTime, int32 nitraLeft);
    void RecordGaChallengeReroll(int32 challengeIndex, USeasonChallenge* challenge);
    void RecordExtraFailInfo(FString MissionName, FString Stage, FString ExtraText);
    void RecordCustomGAEvent(FString EventCategory, FString EventAction, FString EventLabel, const int32 EventValue, FString TrackingId);
    void RecordContinuousDamage(AActor* DamageCauser);
    void RecordBossFightEnd(FString BossName, bool WasBossKilled, int32 BossKills);
    FString ProcessCampaignName(TSubclassOf<UObject> Campaign);
    void PlayerLatejoin();
    void PlayerDropout();
    void OnPlayerLeaveBind(UFSDPlayerState* PlayerState);
    void OnPlayerJoinBind(UFSDPlayerState* PlayerState);
    void HandleMatchStarted();
    FString GetAnalyticsFText(FText Text);
    void EndMissionPartyInfo();
}

class AGooGun : UAmmoDrivenWeapon
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
    USoundCue* FullyChargedFireSound;
    int32 ChargedShotCount;
    float BuckShotSpreadV;
    float BuckShotSpreadH;
    float BuckshotArcCompensation;
    UFXSystemAsset* ChargeupParticles;
    UFXSystemAsset* ChargeupFireMuzzleFlash;
    UFXSystemComponent* ChargeupParticleInstance;
    UAnimMontage* FP_ChargeupMontage;
    UAnimMontage* TP_ChargeupMontage;

    float GetOverChargeProgress();
    bool GetIsCharging();
    float GetChargeProgress();
    void ChargingDelegate__DelegateSignature();
    void ChargeChangedDelegate__DelegateSignature(float charge);
}

class AGooGunProjectile : UProjectile
{
    float PuddleLifeTime;
    int32 FragmentCount;

    AGooGunPuddle* SpawnPuddle(FTransform Transform, TSubclassOf<AGooGunPuddle> PuddleClass);
}

class AGooGunPuddle : AActor
{
    USphereComponent* SphereTrigger;
    USimpleHealthComponent* SimpleHealth;
    USoundBase* SpawnSound;
    TArray<FGooPuddleStatusEffectTrigger> StatusEffectTriggers;
    TArray<TSubclassOf<UStatusEffect>> InflictedStatusEffects;
    int32 ActiveStatusEffectTriggersMask;
    float LifeTime;

    void SetStatusEffect(TSubclassOf<UStatusEffect> NewStatusEffect);
    void OnStatusEffectAdded(const FGooPuddleStatusEffectTrigger& Trigger);
    void OnRep_ActiveStatusEffectTriggersMask(int32 PreviousMask);
    void OnPuddleEndOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnPuddleBeginOverLap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void AddStatusEffect(TSubclassOf<UStatusEffect> NewStatusEffect);
}

class UGooGunAnimInstance : UAnimInstance
{
    bool isCharging;
    float ChargePercentVisual;
    float ChargePercent;
    float OverChargePercent;
    float BarrelRotationRate;

    void SetTargetBarrelRotationRate(float RotationRate);
}

class UGrabbedStateComponent : UCharacterStateComponent
{
    TWeakObjectPtr<UGrabberComponent> CurrentGrabber;

    void OnRep_Grabber();
}

class AFlyingLifter : UAFlyingBug
{
    UGrabberComponent* GrabberComp;
    UCapsuleComponent* GrabCapsule;
    UAudioComponent* GrabStart;
    UAudioComponent* GrabEnd;
    UAudioComponent* GrabbedIdleLoop;
    UInDangerComponent* InDanger;
    UAudioComponent* ScreamComponent;
    FFlyingLifterOnGrabSuccess OnGrabSuccess;
    void GrabSuccess();
    float PreventGrabAfterSpawn;
    bool ShouldScream;
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
    USoundBase* ScreamSound;
    USoundBase* FleeSound;
    UAnimSequenceBase* FleeAnimation;
    UCapsuleComponent* GrabberCollider;
    bool ParalyzeOnGrab;
    float ExtraUpForce;
    float ScreamDistance;
    UPointLightComponent* GrabLight;

    void SetLight(UPointLightComponent* ALight);
    bool SelectAnotherTarget();
    void OnStateBroke(AActor* aReleasedPlayer);
    void OnRep_State();
    void OnRep_ShouldScream();
    void OnInDanger();
    void OnActorLeftGrabZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnActorEnterGrabZone(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    bool GetJustGrabbed();
    void DropTarget();
    void ChangeState(EGrabberState aGrabberState);
}

class UFlyingLifterAnimInstance : USimpleMovingEnemyAnimInstance
{
    bool HasGrabbedPlayer;
    bool ToChaseLock;
    bool ChaseToWanderLock;
    bool ToCarryLock;
    EGrabberState GrabberState;
}

class UGrabberComponent : UActorComponent
{
    FGrabberComponentOnGrabbedActor OnGrabbedActor;
    void GrabbedActorSig(AActor* aGrabbedActor);
    FGrabberComponentOnReleasedActor OnReleasedActor;
    void ReleasedActorSig(AActor* aGrabbedActor);
    FGameplayTagQuery TagFilter;
    TWeakObjectPtr<AActor> GrabbedActor;
    TWeakObjectPtr<ADeepPathfinderCharacter> PathfinderOwner;
    TWeakObjectPtr<USkeletalMeshComponent> OwnerMesh;
    TArray<UPrimitiveComponent*> TargetClippingWith;
    USoundCue* BeginGrabedSound;
    USoundCue* GrabedLoopSound;
    USoundCue* EndGrabedSound;
    UDialogDataAsset* BeginGrabbedShout;
    UDialogDataAsset* EndGrabbedShout;
    UDialogDataAsset* AttentionGrabbedShout;
    AActor* CurrentlyGrabbed;
    EUseRestriction UseRestriction;
    FName GrabAttachName;
    float GrabTime;
    float CarryCooldown;
    EOutline PlayerOutlineOnGrab;
    EGrabbedStateCameraMode CameraMode;
    bool TrackPlayerCollision;
    bool ManualGrabTime;
    bool CanPlayerShoot;
    bool NeedsPathToTarget;

    void SetPlayerReleased();
    bool SetPlayerGrabbed();
    void ReleaseTarget();
    void OnRep_CurrentlyGrabbed();
    void OnPrimWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    void OnParentDestroyed(AActor* Actor);
    bool IsGrabbedTargetValid();
    bool HasGrabbed();
    bool GrabTarget(AActor* aGrabTarget);
    bool CanGrabTarget(AActor* aTarget);
}

class UFakePhysGrabberComponent : UGrabberComponent
{
    TArray<FGrabAvoidClassEntry> ActorTypesToAvoid;
    TArray<FAvoidActorEntry> ActorsToAvoid;
}

class AGrapplingHookGun : UAnimatedItem
{
    UCoolDownItemAggregator* CoolDownAggregator;
    float MaxDistance;
    UAnimMontage* FPReloadAnim;
    UAnimMontage* TPReloadAnim;
    UAnimMontage* FPGunslingAnim;
    UAnimMontage* TPGunslingAnim;
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
    float GetCooldownDuration(TSubclassOf<UGrapplingHookGun> GrapplingHookGun);
}

class UGravityChangedComponent : UActorComponent
{
    bool bAwakeOnGravityChanged;
    TArray<UPrimitiveComponent*> PrimitiveComponents;

    void OnGravityChanged(float Gravity, float Change);
}

class UGrenadeAnimationSet : UDataAsset
{
    UAnimMontage* FP_EquipAnimation;
    UAnimMontage* TP_EquipAnimation;
    UAnimMontage* FP_ThrowAnimation;
    UAnimMontage* TP_ThrowAnimation;
}

class AGrenade : AActor
{
    UProjectileMovementComponent* Movement;
    float Duration;
    float ExplosionDelay;
    bool ExplodeOnImpact;
    int32 MaxGrenades;
    bool HasExploded;
    bool EnableDangerousSaveGameIDEditing;
    FGuid SaveGameID;
    UItemID* ItemID;
    TSubclassOf<AActor> WeaponPreviewClass;
    TSubclassOf<ALoadoutItemProxy> LoadoutProxy;
    UStaticMesh* HandAttachMesh;
    USoundCue* ImpactGroundSound;
    UParticleSystem* ImpactGroundParticles;
    UGrenadeAnimationSet* GrenadeAnimationSetOverride;

    void OnRep_HasExploded();
    void OnExploded();
    bool IsNonFriendlyPawn(AActor* Actor);
    bool IsNonFriendly(AActor* Actor);
    TSubclassOf<AActor> GetWeaponViewClass();
    AGrenade* GetGrenadeDefaultObject(TSubclassOf<AGrenade> GrenadeClass);
    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
}

class UMolotovComponent : UActorComponent
{
    UDebrisPositioning* Positioning;
    TSubclassOf<AActor> BurningFlamesClass;
    float Radius;

    void Trigger();
}

class UAreaSpawnerComponent : UActorComponent
{
    TSubclassOf<AActor> ActorToSpawn;
    DeepPathFinderSize PathfinderSize;
    float ChanceToSpawn;

    void SpawnInArea(const FVector& Origin, float Radius, float maxVerticalDistance, APawn* Instigator);
}

class UHugeExplosionComponent : UActorComponent
{
    UParticleSystem* ExplosionEffect;
    float ExplosionSpeed;
    float ExplosionSize;

    void TriggerExplosion(FVector Location);
}

class UGroundToAirComponent : UActorComponent
{
    FGroundToAirComponentOnChangedPathfinderState OnChangedPathfinderState;
    void ChangedStateSig();
    UDeepPathfinderMovement* CurrentMove;
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
    TWeakObjectPtr<ADeepPathfinderCharacter> OwningPathfinder;

    void SetIsFlying(bool aIsFlying);
    void SetAllowedToChangeState(bool aIsAllowed);
    void OnRep_StateChange();
    bool GetIsWalking();
    bool GetIsFlying();
    void Engage();
}

class UGrowthComponent : UActorComponent
{
    USceneComponent* ScaleComponent;
    FRuntimeFloatCurve CurrentGrowthCurve;

    void StopGrow();
    void StartGrow(USceneComponent* aComponentToScale, FRuntimeFloatCurve aCurve);
}

class AGuntowerActivationPlatform : AActor
{
    USceneComponent* Root;
    USkeletalMeshComponent* SKMesh;
    UCapsuleComponent* Trigger;
    FGuntowerActivationPlatformOnProgressUpdatedDelegate OnProgressUpdatedDelegate;
    void ProgressUpdated(float Progress);
    FGuntowerActivationPlatformOnPlayersInsideChangedDelegate OnPlayersInsideChangedDelegate;
    void PlayersInsideChanged(int32 playerCount);
    FGuntowerActivationPlatformOnProgressFilled OnProgressFilled;
    void OnFinished();
    AGuntowerModule* AssignedModule;
    float DoneAt;
    float DisabledTime;
    int32 PlayersInside;
    bool Disabled;
    bool IsShutDown;

    void UpdatePlayersInside(UPlayerCharacter* Character);
    void ShutDown();
    void SetPlatformActive(bool IsActive);
    void ReEnable();
    void OnShutDown();
    void OnRep_PlayersInside();
    void OnRep_IsShutDown();
    void OnRep_Disabled();
    void OnPlayersInsideChanged(int32 PlayersInside);
    void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnFinished();
    void OnDisabledChanged(bool IsDisabled);
    void ModuleDestroyed(UHealthComponentBase* Health);
    AGuntowerModule* GetAssignedModule();
    void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    bool CanWidgetAppear();
    void AssignModule(UGuntowerModule* towerModule);
}

class AGuntowerEvent : AGameEvent
{
    USceneComponent* Root;
    USkeletalMeshComponent* BaseMesh;
    UDamageComponent* EndExplosionDamage;
    TArray<FGuntowerModuleLevel> GuntowerLevels;
    FName ModuleAttachBone;
    float TowerExplodeDelay;
    float DelayBetweenExplosions;
    TArray<AGuntowerModule*> TowerModules;
    int32 ActiveHostileModules;

    void OnRep_ModuleActive();
    void OnModulesSpawned();
    void OnModuleExploded(UGuntowerModule* explodedModule);
}

class ATowerModuleBase : UFSDPawn
{
    USceneComponent* Root;
    USkeletalMeshComponent* ModuleMesh;
    TArray<UStaticMeshComponent*> ArmorPlates;
    UEnemyHealthComponent* Health;
    FRotator ModuleRotation;
    USkeletalMesh* DestroyedMesh;
    USoundCue* deathSound;
    UParticleSystem* deathParticles;
    float ArmorLaunchPower;
    float HideArmorTime;
    float ModuleRotationSpeed;
    bool ConstantRotation;
    EGuntowerModuleState State;

    void SetState(EGuntowerModuleState State);
    void OnRep_State(EGuntowerModuleState prevState);
    void HideArmorPlates();
    void DoAttack();
}

class AAimingTowerModule : UTowerModuleBase
{
    AActor* Target;
    FRotator AimRotation;
    float BurstTime;
    float AttackTime;
    int32 BurstSize;
}

class AGuntowerModule : UFSDPawn
{
    USoundCue* ExposeWeakpointSound;
    USoundCue* deathSound;
    UParticleSystem* deathParticles;
    TArray<AActor*> WeakpointActors;
    FName BodyBone;
    FName TopConnectionPointName;
    FRotator CurrentTurretRotation;
    UAnimSequenceBase* IntroductionAnimation;
    UStaticMeshComponent* ArmorPiece1;
    UStaticMeshComponent* ArmorPiece2;
    UStaticMeshComponent* ArmorPiece3;
    USkeletalMeshComponent* ModuleMesh;
    UGunTowerHealthComponent* GuntowerModuleHealth;
    AGuntowerEvent* OwningEvent;
    AGuntowerModule* ChildModule;
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
}

class AHostileGuntowerModule : UGuntowerModule
{
    USkeletalMeshComponent* DestroyedMesh;
    UParticleSystemComponent* DestroyedSmoke;
    UEnemyComponent* EnemyComponent;
    float ModuleMaxHealth;
    FRotator CurrentAimRotation;

    void OnWeakpointDied(UHealthComponentBase* Health);
    void OnRep_ModuleMaxHealth();
    void OnModuleDied(UHealthComponentBase* Health);
}

class AHostileTargetingGuntowerModule : UHostileGuntowerModule
{
    TArray<AActor*> SensedTargets;
    float TurretRotationSpeed;
    AActor* TargetedActor;
    float TargetingRotationSpeed;
    FName TargetingFromBone;
    float TimeUntilForgetTarget;
    bool AlwaysUpdateAimRotation;

    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
}

class ALMGGuntoweModule : UHostileTargetingGuntowerModule
{
    UHitscanComponent* HitScanComp;
    UDamageComponent* DamageComp;
    USceneComponent* AimAtWhenNoTarget;
    UAudioComponent* FireAudio;
    UParticleSystem* TracerEffect;
    UParticleSystem* MuzzleEffect;
    USoundCue* ShootTailSound;
    int32 BurstSize;
    float MaxAimOffset;
    float IdleAimRotationSpeed;
    float TimeBetweenShots;
    float TimeBetweenBursts;
    float AimSpeed;
    bool IsFiresoundPlaying;

    void ShowShot(const FVector& Location);
    void OnRep_IsFiresoundPlaying();
}

class ARandomFiringGuntowerModule : UHostileGuntowerModule
{
    UStaticMeshComponent* LaserFrontTop;
    UStaticMeshComponent* LaserFrontBottom;
    UStaticMeshComponent* LaserBackTop;
    UStaticMeshComponent* LaserBackBottom;
    UParticleSystemComponent* FrontTopLaserMuzzle;
    UParticleSystemComponent* FrontBottomLaserMuzzle;
    UParticleSystemComponent* BackTopLaserMuzzle;
    UParticleSystemComponent* BackBottomLaserMuzzle;
    FRotator OtherCurrentRotation;
    UParticleSystem* LaserImpact;
    UAudioComponent* LaserSound;
    UDamageComponent* Damage;
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
}

class ARadialFireModule : UHostileGuntowerModule
{
    TSubclassOf<AProjectile> projectileClass;
    FRotator AttackEndRotation;
    float RotationSpeedTurret;
    float DelayBetweenShots;
    bool IsAttacking;
    FName LeftFireSocket;
    FName RightFireSocket;
    FName FrontFireSocket;
    FName BackFireSocket;

    void OnFire();
}

class AHomingFireModule : UHostileTargetingGuntowerModule
{
    FName ShootDroneSocket;
    TSubclassOf<AProjectile> HomingProjectileClass;
    float TimeBetweenShots;
}

class AHomingDroneBomb : UProjectile
{
    UEnemyHealthComponent* Health;
    USoundCue* ArmingSound;
    float HomingUpdateInterval;
    float TargetSearchInterval;
    float ArmTime;
    FGameplayTagContainer GameplayTags;
    float HomingAccelerationMagnitude;

    void UpdateHomingSpeed();
    void SearchForTarget();
    void OnRep_HomingAccelerationMagnitude();
}

class UGunTowerModuleAnimInstance : UAnimInstance
{
    FRotator CurrentModuleRotation;
    FRotator CurrentLookAtRotation;
    bool IsModuleActive;
    bool AreWeakpointsExposed;
}

class URandomFireModuleAnimInstance : UGunTowerModuleAnimInstance
{
    FRotator OtherLookatRotation;
}

class AGuntowerWeakPoint : UFSDPawn
{
    USceneComponent* Root;
    UEnemyHealthComponent* Health;
    UStaticMeshComponent* Mesh;
    UWeakpointGlowComponent* HitGlow;
    TWeakObjectPtr<UEnemyHealthComponent> ParentHealth;
    UDamageClass* DamageToParent;
    UParticleSystem* deathParticles;
    USoundCue* deathSound;

    void OnExposedChanged(bool isExposed);
    void OnDeath(UHealthComponentBase* HealthComponent);
    void DamageParent(float ammount);
}

class UGunTowerHealthComponent : UEnemyHealthComponent
{
}

class AHackingToolItem : UAnimatedItem
{
    TWeakObjectPtr<UHackingUsableComponent> HackingUsable;

    void Server_HackingCompleted(bool InHackingSuccessful);
    void ReceiveHackingStarted();
    void ReceiveClick();
    void OnRep_HackingUsable();
    void HackingCompleted(bool InHackingSuccessful);
}

class UHackingUsableComponent : UInstantUsable
{
    FHackingUsableComponentOnHacked OnHacked;
    void HackedDelegate(UPlayerCharacter* InHackedBy);
    TSoftClassPtr<AHackingToolItem> ItemType;
    TSoftClassPtr<UHackingToolWidget> HackingWidgetType;
    FHackingUsableState HackingState;

    void OnRep_HackingState(const FHackingUsableState& oldState);
    void HackedDelegate__DelegateSignature(UPlayerCharacter* InHackedBy);
    bool GetIsHacked();
    bool GetIsBeingHacked();
    TSoftClassPtr<UHackingToolWidget> GetHackingWidgetType();
    APlayerCharacter* GetHackedBy();
}

class UHackingToolWidget : UUserWidget
{
    FHackingToolWidgetOnHackingFail OnHackingFail;
    void HackingFailDelegate(USoundCue* InFailCue, UDialogDataAsset* InShout);
    FHackingToolWidgetOnHackingStageCompleted OnHackingStageCompleted;
    void HackingStageCompletedDelegate(int32 InNextStage, int32 InTotalStages);
    FHackingToolWidgetOnHackingCompleted OnHackingCompleted;
    void HackingCompleteDelegate(bool InSuccess);
    FHackingToolWidgetOnRequestUnequipHackingTool OnRequestUnequipHackingTool;
    void HackingUnequipDelegate();
    TWeakObjectPtr<UHackingUsableComponent> HackingUsable;
    TWeakObjectPtr<AHackingToolItem> HackingTool;

    void StartHacking(UHackingUsableComponent* InHackingUsable, UHackingToolItem* InHackingTool);
    void RequestUnequipHackingTool();
    void ReceiveHackingToolUnequipped();
    void ReceiveHackingStarted();
    void ReceiveClick();
    void HackingUnequipDelegate__DelegateSignature();
    void HackingStageCompletedDelegate__DelegateSignature(int32 InNextStage, int32 InTotalStages);
    void HackingStageComplete(int32 InNextStage, int32 InTotalStages);
    void HackingFailDelegate__DelegateSignature(USoundCue* InFailCue, UDialogDataAsset* InShout);
    void HackingCompleteDelegate__DelegateSignature(bool InSuccess);
    void HackingComplete(bool InSuccess);
}

class UWidgetComponentCustomMaterial : UWidgetComponent
{
    UMaterialInterface* CustomMaterial;
}

class UHealthBarComponent : UWidgetComponentCustomMaterial
{
}

class UHealthDamageTracker : UActorComponent
{
    FHealthDamageTrackerOnTrackedPercentageReachedEvent OnTrackedPercentageReachedEvent;
    void DamageSig(float Amount);
    float TiggerOnPercentage;
    UHealthComponentBase* Health;

    void ResetTrackedDamage();
    void OnDamageTaken(float Amount);
}

class UPlayerCharacterData : UDataAsset
{
    FHeroInfo HeroInfo;

    FText GetSwitchToMessage();
    UTexture2D* GetSmallIcon();
    FText GetShortDescription();
    FText GetName();
    FText GetLongDescription();
    UTexture2D* GetIcon();
    UTexture2D* GetFullSizeImage();
    FLinearColor GetColor();
}

class UHitscanBaseComponent : UWeaponFireComponent
{
    FHitscanBaseComponentOnSpreadChanged OnSpreadChanged;
    void SpreadChangedDelegate(float HorizontalSpread, float VerticalSpread, bool isAtRest);
    FHitscanBaseComponentOnFireComplete OnFireComplete;
    void Delegate();
    float SpreadPerShot;
    UDamageComponent* DamageComponent;
    float Damage;
    float ArmorDamageMultiplier;
    UDamageClass* DamageClass;
    float WeakpointDamageMultiplier;
    int32 MaxPenetrations;
    EImpactDecalSize ImpactDecalSize;
    float friendlyFireModifier;
    bool UseDynamicSpread;
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
}

class UHitscanComponent : UHitscanBaseComponent
{
    FHitscanComponentOnHit OnHit;
    void HitDelegate(const FHitResult& Hit, bool AlwaysPenetrate);
    bool BulletsCanCarve;
    FIRandRange NormalBulletsPerCarvingOne;
    float CarveDiameter;
    float CarveNoise;
    float CarveDebrisSize;
    float GeneralImpactAudioVolume;
    float ImpactDelay;
    bool OnlyUseImpactEffects;
    UFXSystemAsset* ImpactParticles;
    USoundCue* ImpactSound;
    bool IgnoreAlwaysPenetrate;
    TArray<AActor*> DamagedActorCache;

    void Server_RegisterRicochetHit_Terrain(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial);
    void Server_RegisterRicochetHit_Destructable(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void Server_RegisterRicochetHit(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial);
    void Server_RegisterHit_Terrain(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UFSDPhysicalMaterial* PhysMaterial);
    void Server_RegisterHit_Destructable(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void Server_RegisterHit(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial);
    void All_ShowRicochetHit_Terrain(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, UFSDPhysicalMaterial* PhysMaterial);
    void All_ShowRicochetHit_Destructable(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void All_ShowRicochetHit(FVector_NetQuantize Origin, FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial);
    void All_ShowHit_Terrain(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, uint8 MaterialID, UFSDPhysicalMaterial* PhysMaterial);
    void All_ShowHit_Destructable(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, UPrimitiveComponent* Target, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void All_ShowHit(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal, bool SpawnDecal, UFSDPhysicalMaterial* PhysMaterial);
}

class AHostileGuntowerModuleController : UFSDAIController
{
    UAIPerceptionComponent* Perception;

    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
}

class UHttpUtilityLibrary : UBlueprintFunctionLibrary
{
}

class UHUDHealthBar : UFSDUserWidget
{
    FHUDHealthBarOnOwnerDead OnOwnerDead;
    void HUDHealthBarSignature(UHUDHealthBar* HealthBar);
    FLinearColor BackgroundColor;
    FLinearColor HealthColor;
    FLinearColor DamageColor;
    TMap<EHealthbarType, FHealthBarLooks> HealthBarLooks;
    FLinearColor OutlineColor;
    int32 OutlineThickness;
    float HealthAnimationFactor;
    float HealthPerCell;
    int32 MinHealthCells;
    int32 MaxHealthCells;
    TScriptInterface<IHealth> TargetHealth;
    float AnimatedHealth;
    float MaxHealth;

    void SetHealthComponent(const InterfaceProperty& Health, float Damage);
    float GetCurrentHealth();
}

class UHUDVisibilityGroup : UDataAsset
{
    FHUDVisibilityGroupOnModeChanged OnModeChanged;
    void ModeDelegate(UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    FHUDVisibilityGroupOnVisibilityChanged OnVisibilityChanged;
    void VisibilityDelegate(UHUDVisibilityGroup* Group, bool IsVisible);
    EHUDVisibilityGroups GroupID;
    FText Title;
    bool AllowDynamicMode;
    bool AllowHiddenMode;
    bool bDynamicallyVisible;
    TArray<FHUDVisibilityRegisteredWidget> RegisteredWidgets;
    EHUDVisibilityMode RecommendedMode;
    EHUDVisibilityMode MinimalMode;

    void VisibilityDelegate__DelegateSignature(UHUDVisibilityGroup* Group, bool IsVisible);
    void SetModeFromPreset(EHUDVisibilityPresets Preset);
    void SetMode(EHUDVisibilityMode InMode);
    void SetHudGroupDynamicallyVisible(UHUDVisibilityGroup* Group, bool IsVisible);
    void SetGroupDynamicallyVisible(bool IsVisible);
    void RegisterWidgetWithVisibilityGroup(UWidget* Widget, UHUDVisibilityGroup* Group, ESlateVisibility VisibleMode, ESlateVisibility HiddenMode);
    void RegisterMultipleWidgetsWithVisibilityGroup(TArray<UWidget*> Widgets, UHUDVisibilityGroup* Group, ESlateVisibility VisibleMode, ESlateVisibility HiddenMode);
    void ModeDelegate__DelegateSignature(UHUDVisibilityGroup* Group, EHUDVisibilityMode Mode);
    bool IsModeAllowed(EHUDVisibilityMode InMode);
    bool IsInDynamicMode();
    bool IsHudGroupVisible(UHUDVisibilityGroup* Group);
    bool IsGroupVisible();
    EHUDVisibilityMode GetMode();
    TArray<EHUDVisibilityMode> GetAllowedModes();
}

class UHUDWarningWidget : UFSDUserWidget
{

    void SetData(UTexture2D* Texture, USoundBase* PingSound);
    void Ping(bool DestroyAfterPing);
}

class AHydraWeedCore : UEnemyPawn
{

    void WakupCore();
    void OnShooterKilled(UHydraWeedShooter* shooter);
    void OnHealerKilled(UHydraWeedHealer* healer);
}

class AShootingPlant : UEnemyPawn
{
    bool IsVisible;
    AActor* Target;

    void SetTarget(AActor* Target);
    void OnRep_Target();
}

class AHydraWeedShooter : UShootingPlant
{
    AHydraWeedCore* Core;
}

class AHydraWeedHealer : UEnemyPawn
{
    AHydraWeedCore* Core;
}

class AHydraWeedSpawnProjectile : UProjectile
{
    FVector TargetLocation;
}

class UTriggerAI : UInterface
{

    bool OnTriggerAI(FName TriggerName);
    void OnMessageAI(FName TriggerName);
}

class UIconGenerationManager : UObject
{
    AIconGenerationCharacter* GeneratorInst;
    AIconGenerationPickaxe* PickaxeGeneratorInst;
    AIconGenerationWeapon* WeaponGeneratorInst;
    TArray<FGenerateIconInfo> ItemGenerationQueue;
    TArray<EVanitySlot> VanitySlots;
    TArray<UVanityItem*> HairColorHairItems;
    TSoftClassPtr<AIconGenerationCharacter> IconCharacter;
    TSoftClassPtr<AIconGenerationPickaxe> IconPickaxe;
    TSoftClassPtr<AIconGenerationWeapon> IconWeapon;
    UTextureRenderTarget2D* LatestGeneratedTexture;
    AIconGenerationBase* ActiveIconGenerator;

    void GenerateWeaponIcon_Async(UIconGenerationManager* Manager, UItemSkin* Item, bool inShowCloseUp, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    void GenerateVanityIcon_Async(UIconGenerationManager* Manager, UVanityItem* Item, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    void GeneratePickaxeSetIcon_Async(UIconGenerationManager* Manager, FPickaxeSet PickaxeSet, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    void GeneratePickaxePartIcon_Async(UIconGenerationManager* Manager, UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
}

class UIconGeneratable : UInterface
{
}

class UCraftable : UInterface
{

    void PreviewItem(UFSDPlayerState* PlayerState, bool Show);
    bool IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    TArray<FCraftingCost> GetResourceCost();
    int32 GetRequiredPlayerRank();
    int32 GetCraftingCreditsCost();
    FText GetCraftableName();
    UTexture2D* GetCraftableIcon();
    FText GetCraftableDescription();
    void CraftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    bool CanCraft(UObject* WorldContextObject);
}

class UFootStepNotifyTarget : UInterface
{
}

class UHealth : UInterface
{

    bool IsDead();
    bool IsAlive();
    AActor* GetOwner();
    float GetMaxHealth();
    EHealthbarType GetHealthbarType();
    float GetHealth();
}

class UInputCompatible : UInterface
{
}

class UImpactComponent : UActorComponent
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
    void EnableImpactCheckhing(USceneComponent* cmp);
    void DisableImpactChecking();
}

class UWeaponImpactComponent : UActorComponent
{
    FWeaponImpactComponentOnImpactedEvent OnImpactedEvent;
    void ImpactedSignature();
    FWeaponImpactComponentOnHighAcceleration OnHighAcceleration;
    void HightAccelerationSignature();
    bool DebugText;
    FName ImpactSocketName;
    USkeletalMeshComponent* ActiveMesh;
    bool TrackAcceleration;
    bool TrackVelocity;
    float TriggerHighAccelAt;
    float TriggerAtVelocityDifference;

    void EnableImpactCheckhing(USkeletalMeshComponent* cmp);
    void DisableImpactChecking();
}

class UImpactAudioComponent : UAudioComponent
{
    FName AudioParameterSpeed;
    float DecelerationThreshold;
    bool ListenForDeath;

    void OnOwnerDeath(UHealthComponentBase* HealthComponent);
    UImpactAudioComponent* AddImpactAudioToActor(AActor* Actor, USceneComponent* AttachToComponent, TSubclassOf<UImpactAudioComponent> ComponentClass);
}

class AFSDReverbVolume : AActor
{
    USphereComponent* Collision;
    UReverbEffect* Reverb;
    float Priority;
}

class UInDangerComponent : UActorComponent
{
    FInDangerComponentOnInDanger OnInDanger;
    void IsInDangerSig();
    TWeakObjectPtr<UHealthComponentBase> ParentHealthComponent;
    float DamageTimeLimit;
    float DamageThreshold;
    bool RunsOnClients;

    void SetIsActive(bool aFlag);
    void OnDamage(float Amount);
    bool GetIsActive();
}

class UNetMontageAble : UInterface
{

    float QueueMontage(UAnimMontage* Montage);
    USkeletalMeshComponent* GetSkeletalMesh();
    UAnimInstance* GetAnimInstance();
}

class UNotifyMessageReceiver : UInterface
{

    bool OnNotifyMessageReceived(FName TriggerName);
}

class UInputCaptureWidget : UUserWidget
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
}

class UInputFunctionLibrary : UBlueprintFunctionLibrary
{

    void SetMouseSmoothingOn(bool smoothingOn);
    bool IsMouseSmoothingOn();
    bool IsMouseEventAction(const FPointerEvent& MouseEvent, const FName& ActionName, bool IgnoreCustomBindings);
    bool IsKeyEventActionAny(const FKeyEvent& KeyEvent, TArray<FName> ActionNames, bool IgnoreCustomBindings);
    bool IsKeyEventAction(const FKeyEvent& KeyEvent, FName ActionName, bool IgnoreCustomBindings);
    bool IsAxisMappedToDirectional(FName InActionName, FKey Key, int32 Direction, bool IgnoreCustomBindings);
    bool IsActionMappedTo(FName InActionName, FKey Key, bool IgnoreCustomBindings);
    TArray<FKey> GetInputKeysBoundToAction(const FName& ActionName, EKeyBindingAxis Axis, bool IsGamePadKey);
    bool GetAxisMapping(FName InActionName, int32 Axis, bool InGamepadKeys, FInputAxisKeyMapping& OutResult);
    bool GetActionMapping(FName InActionName, bool InGamepadKeys, FInputActionKeyMapping& OutResult);
    bool FindInputDisplay(const UPlayerController* PlayerController, FName InputName, EFSDInputSource InputSource, int32 LayoutIndex, FInputDisplay& OutInputDisplay);
}

class AInsectSwarmEnemy : UEnemyDeepPathfinderCharacter
{
    UParticleSystemComponent* SwarmParticles;
}

class AInsectSwarmSpawner : UEnemyPawn
{
    TSubclassOf<AInsectSwarmEnemy> SwarmType;
    float SpawnHeightOffset;
    float AlertDistance;
    float respawnDelay;
    TWeakObjectPtr<AInsectSwarmEnemy> SwarmInstance;

    UStaticMeshComponent* Receive_GetStaticMesh();
    void OnSwarmSpawned(UInsectSwarmEnemy* Swarm);
    void OnSwarmDestroyed(AActor* DestroyedActor);
}

class UInstancedMeshOnSpline : UInstancedStaticMeshComponent
{
    USplineComponent* Spline;
    int32 NumInstances;
    float Speed;
    float VerticalOffset;
    FVector Scale;
    TArray<FTransform> NewInstancesTransforms;
    float Phase;

    void SetSpeed(float newSpeed);
}

class UInventoryComponent : UActorComponent
{
    FInventoryComponentOnItemsLoaded OnItemsLoaded;
    void InventoryItemsLoaded();
    FInventoryComponentOnItemClicked OnItemClicked;
    void ItemDelegate(AItem* Item);
    FInventoryComponentOnItemEquipped OnItemEquipped;
    void ItemDelegate(AItem* Item);
    FInventoryComponentOnItemUnequipped OnItemUnequipped;
    void ItemDelegate(AItem* Item);
    FInventoryComponentOnGrenadeCountChanged OnGrenadeCountChanged;
    void GrenadesDelegate(int32 CurrentCount);
    FInventoryComponentOnFlareCountChanged OnFlareCountChanged;
    void FlaresDelegate(int32 CurrentCount, UInventoryComponent* Inventory);
    FInventoryComponentOnMaxFlareCountChanged OnMaxFlareCountChanged;
    void FlaresDelegate(int32 CurrentCount, UInventoryComponent* Inventory);
    FInventoryComponentOnFlareProduction OnFlareProduction;
    void FlareProductionDelegate(int32 NextIndex, float Progress);
    FInventoryComponentOnResuppliedEvent OnResuppliedEvent;
    void ResupplyDelegate(float percentage);
    FInventoryComponentOnCarriableChangedEvent OnCarriableChangedEvent;
    void CarriableChangedDelegate(AActor* carriedActor);
    bool bItemsLoaded;
    UInventoryList* InventoryList;
    TSubclassOf<AThrownGrenadeItem> ThrownGrenadeClass;
    TArray<AItem*> Items;
    TArray<AItem*> UnlistedItems;
    APickaxeItem* MiningItem;
    AThrownGrenadeItem* GrenadeItem;
    ALaserPointerItem* LaserPointerItem;
    ATerrainScannerItem* TerrainScannerItem;
    ARecallableSentryGunItem* RecallableSentryGunItem;
    AItem* PickedUpItem;
    ARessuplyPodItem* ResupplyItem;
    AItem* PreviousItem;
    TArray<AItem*> EquipHistory;
    FCarriedItemState CarriedItem;
    FVector FlareOffset;
    USoundCue* OutOfFlaresSound;
    UDialogDataAsset* OutOfFlaresShout;
    float FlareAngle;
    float FlareCooldown;
    float FlareProductionTime;
    FLinearColor FlareChromaColor;
    float FlareProductionTimeLeft;
    int32 MaxFlares;
    int32 Flares;
    float FlareCooldownRemaining;
    TSubclassOf<AFlare> flareClass;
    TArray<UItemUpgrade*> FlareUpgrades;
    AItem* EquippedItem;

    void UpdateFromSaveGameInSlot(EItemCategory Category);
    void StartGrenadeThrow();
    void Server_ThrowFlare();
    void Server_Equip(AItem* Item);
    void Server_DropCarriedItem();
    void Resupply(float percentage);
    void PickupItemInstance(AItem* Item);
    AItem* PickupItem(TSubclassOf<AItem> itemClass);
    void OnRep_PickedUpItem();
    void OnRep_Items();
    void OnRep_EquippedItem(AItem* oldItem);
    void OnRep_CarriedItem(FCarriedItemState& LastCarriedItem);
    void OnCharacterStateChanged(ECharacterState NewState);
    bool IsTerrainScannerEquipped();
    bool HasPickedUpItem();
    bool HasDrink();
    int32 GetTotalAmmoLeft();
    ARecallableSentryGunItem* GetRecallableSentryGunItem();
    AItem* GetItem(EItemCategory Category);
    AActor* GetCarriedItem();
    TArray<AItem*> GetAllItems();
    void EquipLastItem(bool ignoreUsing);
    bool EquipCategory(EItemCategory Category);
    void EquipAtIndex(int32 Index, bool ignoreUsing);
    void Equip(AItem* Item, bool ignoreIsUsing);
    void EndGrenadeThrow();
    void DropPickedupItem();
    void CreateStartingEquipmentWhenItemsLoaded();
    void Client_Resupply(float percentage);
    void Client_DropPickedUpItem();
    void AnimationNotify2();
    void AnimationNotify1();
}

class UInventoryList : UDataAsset
{
    TSoftObjectPtr<UTexture2D> IconWeaponSetOutline;
    TSoftObjectPtr<UTexture2D> IconWeaponSetFill;
    TSoftObjectPtr<UMaterialInterface> LaserpointerMarkerMaterial;
    TSoftObjectPtr<UMaterialInterface> LaserpointerBeamMaterial;
    UItemID* LaserPointerItem;
    UItemID* TerrainScannerItem;
    UItemID* ResupplyItem;
    TArray<UItemID*> PrimaryWeapons;
    TArray<UItemID*> SecondaryWeapons;
    TArray<UItemID*> TraversalTools;
    TArray<UItemID*> ClassTools;
    TArray<UItemID*> Armors;
    TArray<UItemID*> Flares;
    TArray<UItemID*> Grenades;
    TArray<UItemID*> MiningTools;

    UItemID* GetPreviousUnlockedItem(UObject* WorldContextObject, EItemCategory Category, UItemID* currentItem);
    UItemID* GetPreviousItem(EItemCategory Category, UItemID* currentItem);
    int32 GetNumberOfItems(EItemCategory Category);
    UItemID* GetNextUnlockedItem(UObject* WorldContextObject, EItemCategory Category, UItemID* currentItem);
    UItemID* GetNextItem(EItemCategory Category, UItemID* currentItem);
    TArray<TSubclassOf<AActor>> GetLoadedItemListFiltered(EItemCategory Category, ItemFilterDelegate__DelegateSignature Filter);
    TArray<TSubclassOf<AActor>> GetLoadedItemList(EItemCategory Category);
    TArray<UItemID*> GetItemList(EItemCategory Category);
    int32 GetItemIndex(EItemCategory Category, UItemID* Item);
    TArray<UItemID*> GetAllItemsList();
    void CheckForInventoryAchievements(UObject* WorldContextObject);
}

class UPlaySoundInterface : UInterface
{
}

class UProjectileSpawner : UInterface
{
}

class URejoinListener : UInterface
{
}

class UTargetable : UInterface
{

    void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
    UHealthComponentBase* GetTargetHealthComponent();
    FVector GetTargetCenterMass();
    bool GetIsTargetable();
}

class UAnimNotify_CycleItemComplete : UAnimNotify
{
}

class UHeatMaterialComponent : UActorComponent
{
    FName ParameterName;
    float MaxEffect;
    TArray<UMaterialInstanceDynamic*> MaterialIntances;

    void OnTemperatureChanged(float Temperature, bool Overheated);
    void AddHeatMaterial(UMaterialInstanceDynamic* MaterialInstance);
}

class UItemAquisitionSource : USavableDataAsset
{
}

class UItemCharacterAnimationSet : UDataAsset
{
    UAnimSequence* FP_Idle;
    UAnimMontage* FP_InspectWeapon;
    UAnimSequence* FP_Walk;
    UAnimSequence* FP_Sprint;
    UAnimMontage* FP_JumpStart_Montage;
    UAnimSequence* FP_JumpStart;
    UAnimSequence* FP_JumpLoop;
    UAnimSequence* FP_JumpLand;
    UAnimSequence* FP_JumpLand_Aim;
    UAnimSequence* FP_Downed;
    UBlendSpace1D* TP_LookUpDown;
    UBlendSpace1D* TP_LookUpDown_Aim;
    UAnimSequence* TP_Sprint;
    UAnimSequence* TP_Idle;
    UAnimSequence* TP_Idle_Aim;
    UAnimSequence* TP_LookForward;
    UAnimSequence* TP_LookForward_Aim;
    UAnimSequence* TP_JumpStart;
    UAnimSequence* TP_JumpStart_Aim;
    UAnimSequence* TP_JumpLoop;
    UAnimSequence* TP_JumpLoop_Aim;
    UAnimMontage* TP_JumpLand;
    UAnimSequence* TP_Walk_Forward;
    UAnimSequence* TP_Walk_Forward_Aim;
    UAnimSequence* TP_Run_Forward;
    UAnimSequence* TP_Run_Forward_Aim;
    UAnimSequence* TP_Walk_Right;
    UAnimSequence* TP_Walk_Right_Aim;
    UAnimSequence* TP_Run_Right;
    UAnimSequence* TP_Run_Right_Aim;
    UAnimSequence* TP_Walk_Left;
    UAnimSequence* TP_Walk_Left_Aim;
    UAnimSequence* TP_Run_Left;
    UAnimSequence* TP_Run_Left_Aim;
    UAnimSequence* TP_Walk_Back;
    UAnimSequence* TP_Walk_Back_Aim;
    UAnimSequence* TP_Run_Back;
    UAnimSequence* TP_Run_Back_Aim;
    UAnimSequence* TP_Revived;
    UAnimSequence* TP_Downed;
    UAnimSequence* TP_Downed_Loop;
    FItemLoadoutAnimations LoadoutAnimations;
    float CameraOffset;
    UItemCharacterAnimationSet* ParentSet;
}

class UItemData : UPrimaryDataAsset
{
    UItemID* ItemID;
    UTexture2D* IconLine;
    UTexture2D* IconBG;
    UTexture2D* IconDetailed;
    TSoftObjectPtr<UTexture2D> PreviewImage;
    TSoftClassPtr<AActor> PreviewActor;
    FText Name;
    FText Category;
    FText Description;
    int32 CreditCost;
    TMap<UResourceData*, float> ResourceCost;
    int32 RequiredCharacterLevel;

    TSubclassOf<AActor> GetPreviewActorClass();
    TArray<FCraftingCost> GetCraftingCost();
}

class AItemDispenser : AActor
{
    USceneComponent* Root;
    UInstantUsable* Usable;
    FItemDispenserOnItemSpawned OnItemSpawned;
    void ItemDispenserDelegate(AActor* spawnedItem);
    FItemDispenserOnItemTaken OnItemTaken;
    void ItemDispenserDelegate(AActor* spawnedItem);
    TArray<AActor*> ItemHistory;
    TSubclassOf<ACarriableItem> itemClass;
    AActor* spawnedItem;
    float ItemSpawnTime;
    float InitialItemSpawnTime;
    bool IsOpen;
    bool KillItemsOnDestuction;

    void SpawnItem();
    void Open();
    void OnUsed(UPlayerCharacter* User, EInputKeys Key);
    void OnRep_SpawnedItem(AActor* oldItem);
    void OnRep_IsOpen();
    void OnPickedUpItem(AActor* Item);
    void OnOpenChanged(bool Open);
    void OnItemSpawnedEvent(AActor* Item);
    bool HasItem();
    AActor* GetItem();
    void Close();
}

class AItemMarker : AActor
{
    bool bMarkerValid;
    bool bMarkerVisible;

    void OnMarkerVisibilityChanged(bool Visible);
    void OnMarkerValidChanged(bool Valid);
}

class UItemPlacerAggregator : UItemAggregator
{
    TArray<TWeakObjectPtr<AActor>> IgnoreActors;
    FItemPlacerAggregatorOnMarkerSpawned OnMarkerSpawned;
    void MarkerDelegate(AItemMarker* Marker);
    FItemPlacerAggregatorOnPlacementChanged OnPlacementChanged;
    void PlacementUpdatedDelegate(bool InPlacementValid, const FTransform& InPlacement);
    float PlacementDistance;
    float MaxOffsetZ;
    float MinOffsetZ;
    float ItemHeight;
    UDialogDataAsset* ShoutOnPlaced;
    TSubclassOf<AItemMarker> MarkerType;
    bool CanOnlyPlaceOnTerrain;
    FGameplayTagQuery ExcludeTags;
    AItemMarker* PlacementMarker;
    AItem* Item;
    bool bIsPlacementActive;
    bool bIsMarkerHidden;
    bool bIsMarkerValid;
    bool bCanPlaceMarker;
    FTransform LastPlacement;

    void ToggleValid(bool Valid);
    void TogglePlacement(bool Inactive);
    void ToggleMarkerHidden(bool InHidden);
    void PlacementUpdatedDelegate__DelegateSignature(bool InPlacementValid, const FTransform& InPlacement);
    void MarkerDelegate__DelegateSignature(AItemMarker* Marker);
    void GetPlacementEx(FTransform& Placement, bool& OutValidLocation, bool& OutValidMarker);
    bool GetPlacement(FTransform& Placement);
    void ClearIgnoredActors();
    void AddIgnoredActor(AActor* InActor);
}

class AItemPreviewActor : AActor
{
    UItemSkin* CurrentSkinColor;
    UItemSkin* CurrentSkinMesh;
    TSubclassOf<AActor> itemClass;
    UIconGenerationCameraKey* CameraKey_Normal;
    UIconGenerationCameraKey* CameraKey_CloseUp;

    void SkinItem(USkinEffect* Skin);
    void SetItemClass(TSubclassOf<AActor> itemClass);
    void OnSkinPreviewChanged(UItemSkin* PreviewSkin);
    void OnSkinItem(USkinEffect* Skin);
    void OnSkinChanged();
    void ChangeSkin(UItemSkin* skinMesh, UItemSkin* skinColor, bool isPreview);
}

class UItemsBarIcon : UUserWidget
{
    bool Selected;
    UItemsBar* ItemBar;
    APlayerCharacter* Character;
    AItem* Item;
    int32 Index;

    void OnUnselect();
    void OnSelect();
    void OnInit();
}

class UItemsBar : UFSDUserWidget
{
    TSubclassOf<UItemsBarIcon> DefaultItemWidget;
    bool bShowSupplyItem;
    TArray<UItemsBarIcon*> ItemIcons;
    UItemsBarIcon* SupplyIcon;
    UItemsBarIcon* SelectedIcon;

    void OnSupplyItemUnequipped(UItemsBarIcon* ItemIcon);
    void OnSupplyItemEquipped(UItemsBarIcon* ItemIcon);
    void OnSupplyItemAdded(UItemsBarIcon* ItemIcon);
    void OnItemUnequipped(UItemsBarIcon* ItemIcon);
    void OnItemsLoaded();
    void OnItemEquipped(UItemsBarIcon* ItemIcon);
    void OnItemClicked();
    void OnItemAdded(UItemsBarIcon* ItemIcon);
    void OnClear();
    void ItemEquipped(AItem* NewItem);
    void ItemClicked(AItem* NewItem);
}

class UItemSettings : UDataAsset
{
    TMap<UItemID*, UItemData*> ItemData;
}

class UItemSkinSet : UDataAsset
{
    bool ColorIsLockedToSet;
}

class USavablePrimaryDataAsset : UPrimaryDataAsset
{
    int32 BuildRestrictions;
    int32 PlatformRestrictions;
    bool EnableDangerousSaveGameIDEditing;
    FGuid SaveGameID;
    UBuildRestriction* BuildRestriction;
}

class UItemSkin : USavablePrimaryDataAsset
{
    FItemSkinOnSkinUnlocked OnSkinUnlocked;
    void ItemSkinSignature(UItemSkin* Skin);
    FItemSkinOnSkinEquipped OnSkinEquipped;
    void ItemSkinEquipSignature(const UItemSkin* Skin);
    FItemSkinOnSkinUnequipped OnSkinUnequipped;
    void ItemSkinEquipSignature(const UItemSkin* Skin);
    bool UnlockedFromStart;
    UDLCBase* RequiredDLC;
    EItemSkinType SkinType;
    FText SkinName;
    UItemSkinSet* SkinSet;
    UMaterialInterface* SkinIconMaterial;
    TArray<USkinEffect*> SkinEffects;
    UItemID* OwningItem;
    UPlayerCharacterID* OwningCharacter;

    bool Unlock(UObject* WorldContext, UItemID* ItemID, bool broadcast);
    void Receive_SkinItem(UObject* Skinnable);
    void ItemSkinSignature__DelegateSignature(UItemSkin* Skin);
    void ItemSkinEquipSignature__DelegateSignature(const UItemSkin* Skin);
    bool IsLocked(UObject* WorldContext, UItemID* skinnableID);
    bool IsEquippedOnItem(UItemID* ItemID, UFSDPlayerState* PlayerState);
    UItemID* GetOwningItem();
    UPlayerCharacterID* GetOwningCharacter();
}

class UItemSkinSettings : UDataAsset
{
    UItemSkinSet* StockSet;
    TArray<UItemSkin*> LoadedSkins;
}

class UItemSkinFunctionLibrary : UBlueprintFunctionLibrary
{
}

class UItemSkinSchematicCollection : UDataAsset
{
    UItemSkin* Skin;
    USchematicCategory* Category;
    USchematicPricingTier* PricingTier;
    USchematicRarity* Rarity;
    EItemSkinCollectionType CollectionType;
    EItemSkinCollectionType LastGeneratedCollectionType;
    TArray<USchematic*> Schematics;
}

class UItemUpgrade : USavableDataAsset
{
    FItemUpgradeOnCrafted OnCrafted;
    void ItemUpgradeSignature(UItemUpgrade* Upgrade);
    FItemUpgradeOnEquipped OnEquipped;
    void ItemUpgradeSignature(UItemUpgrade* Upgrade);
    FItemUpgradeOnUnequipped OnUnequipped;
    void ItemUpgradeSignature(UItemUpgrade* Upgrade);
    FText Name;
    FText Description;
    int32 Cost;
    bool UseOldCost;
    EUpgradeTiers UpgradeTier;
    EUpgradeClass upgradeClass;
    UItemUpgradeCategory* Category;
    TMap<UResourceData*, float> UpgradeCraftingCost;
    TArray<UResourceData*> ResourceCost;
    TArray<UItemUpgradeElement*> Elements;
    TArray<FItemUpgradeStatText> StatTexts;

    void UnequipUpgrade(TSubclassOf<AActor> itemClass, UFSDPlayerState* PlayerState);
    void ItemUpgradeSignature__DelegateSignature(UItemUpgrade* Upgrade);
    TArray<FItemUpgradeStatText> GetUpgradeStatTexts();
    FText GetUpgradeName(UItemUpgrade* Upgrade);
    TArray<FCraftingCost> GetUpgradeCost();
    FString GetSourceName();
    FUpgradeValues GetGenericUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, UItemUpgrade* upgradeClass);
    float GetCreditsCost();
    void EquipUpgrade(TSubclassOf<AActor> itemClass, UFSDPlayerState* PlayerState);
    void CraftItem(UItemID* ItemID, UFSDPlayerController* PlayerController, TSubclassOf<UPlayerCharacter> previewedCharacter);
}

class UCombinedUpgrade : UItemUpgrade
{
    TArray<TSoftObjectPtr<UItemUpgrade>> CombinedUpgrades;
    TArray<UItemUpgrade*> LoadedUpgrades;

    TArray<UItemUpgrade*> GetUpgrades();
}

class UOverclockUpgrade : UCombinedUpgrade
{
    USchematicCategory* SchematicCategory;
}

class UItemUpgradeCategory : UDataAsset
{
    FText CategoryName;
    FText CategoryDescription;
    UTexture2D* CategoryIcon;
    FColor CategoryTint;
}

class UItemUpgradeCondition : UObject
{
}

class UPlayerShieldsItemUpgradeCondition : UItemUpgradeCondition
{
    FFloatInterval ShieldPercentageRequired;
}

class UProjectileClassFilterItemUpgradeCondition : UItemUpgradeCondition
{
    TArray<TSubclassOf<AProjectileBase>> ProjectileClasses;
}

class UItemUpgradeElement : UDataAsset
{

    bool ElementOf(UItemUpgrade* upg);
}

class UMuzzleEffectUpgradeElement : UItemUpgradeElement
{
    UFXSystemAsset* FPMuzzleFlash;
    UFXSystemAsset* TPMuzzleFlash;
}

class UFireWeaponSoundUpgradeElement : UItemUpgradeElement
{
    USoundCue* FireSound;
}

class UTracerUpgradeElement : UItemUpgradeElement
{
    UFXSystemAsset* Tracer;
}

class UHitScanImpactUpgradeElement : UItemUpgradeElement
{
    UFXSystemAsset* ImpactParticle;
    USoundCue* ImpactSound;
}

class UTrailUpgradeElement : UItemUpgradeElement
{
    UFXSystemAsset* Trail;
}

class UReplaceMaterialUpgradeElement : UItemUpgradeElement
{
    UMaterialInterface* TargetMaterial;
    UMaterialInterface* ReplaceWithMaterial;
}

class UReplaceSkeletonMeshUpgradeElement : UItemUpgradeElement
{
    USkeletalMesh* TargetMesh;
    USkeletalMesh* ReplaceWithMesh;
    TSubclassOf<UAnimInstance> ReplaceWithAnimInstance;
}

class UProjectileUpgradeElement : UItemUpgradeElement
{
    UParticleSystem* NewTrailParticle;
}

class UItemUpgradePreviewComponent : UActorComponent
{
    FItemUpgradePreviewComponentOnPreviewUpgradeChanged OnPreviewUpgradeChanged;
    void ItemUpgradeDelegate(UItemUpgrade* PreviewUpgrade);
    UItemUpgrade* PreviewUpgrade;

    void SetPreviewUpgrade(UItemUpgrade* InUpgrade);
    void RefreshPreviewUpgrade();
    void ItemUpgradeDelegate__DelegateSignature(UItemUpgrade* PreviewUpgrade);
}

class UStandardItemUpgrade : UItemUpgrade
{
    float Amount;
    bool IsPercentage;
}

class UAmmoDrivenWeaponUpgrade : UStandardItemUpgrade
{
    EAmmoDrivenWeapnUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EAmmoDrivenWeapnUpgradeType upgradeType);
}

class UWeaponHitCounterUpgrade : UItemUpgrade
{
    TSubclassOf<UWeaponHitCounterComponent> ComponentClass;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> ComponentClass);
}

class UBeltDrivenWeaponUpgrade : UStandardItemUpgrade
{
    EBeltDrivenWeaponUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EBeltDrivenWeaponUpgrade upgradeType);
}

class UGatlingGunUpgrade : UStandardItemUpgrade
{
    EGatlingGunUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EGatlingGunUpgrade upgradeType);
}

class UAssaultRifleUpgrade : UStandardItemUpgrade
{
    EAssaultRifleUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EAssaultRifleUpgrade upgradeType);
}

class UBoltActionRifleUpgrade : UStandardItemUpgrade
{
    EBoltActionRifleUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EBoltActionRifleUpgrades upgradeType);
}

class UDualMachinePistolsUpgrade : UStandardItemUpgrade
{
    EDualMachinePistolsUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EDualMachinePistolsUpgrades upgradeType);
}

class UChargedWeaponUpgrade : UStandardItemUpgrade
{
    EChargedWeaponUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EChargedWeaponUpgrades upgradeType);
}

class UAutoCannonUpgrade : UStandardItemUpgrade
{
    EAutoCannonUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EAutoCannonUpgrades upgradeType);
}

class USawedOffShotgunUpgrade : UStandardItemUpgrade
{
    ESawedOffShotgunUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, ESawedOffShotgunUpgrades upgradeType);
}

class UBurstWeaponUpgrade : UStandardItemUpgrade
{
    EBurstWeaponUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EBurstWeaponUpgrades upgradeType);
}

class UAutoShotgunUpgrade : UStandardItemUpgrade
{
    EAutoShotgunUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EAutoShotgunUpgrades upgradeType);
}

class UBasicPistolUpgrade : UStandardItemUpgrade
{
    EBasicPistol upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EBasicPistol upgradeType);
}

class URevolverUpgrade : UStandardItemUpgrade
{
    ERevolerUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, ERevolerUpgrades upgradeType);
}

class UCryoSprayUpgrade : UStandardItemUpgrade
{
    ECryoSprayUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, ECryoSprayUpgrades upgradeType);
}

class UCryoSprayProjectileUpgrade : UItemUpgrade
{
    float MaxFireCost;
    float BaseArch;
    TSubclassOf<AProjectile> projectileClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, TSubclassOf<UProjectile> projectileClass);
}

class UPickaxeUpgrade : UStandardItemUpgrade
{
    EPickaxeUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EPickaxeUpgradeType upgradeType);
}

class UFlameThrowerUpgrade : UStandardItemUpgrade
{
    EFlameThrowerUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EFlameThrowerUpgradeType upgradeType);
}

class UStickyFlameStatusEffectUpgrade : UItemUpgrade
{
    TSubclassOf<UStatusEffect> StatusEffect;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, TSubclassOf<UStatusEffect> StatusEffect);
}

class UDoubleDrillUpgrade : UStandardItemUpgrade
{
    EDoubleDrillUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EDoubleDrillUpgradeType upgradeType);
}

class UInventoryItemUpgrade : UStandardItemUpgrade
{
    EInventoryItemUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EInventoryItemUpgradeType upgradeType);
}

class UCapacityUpgrade : UStandardItemUpgrade
{

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, int32 componentIndex);
}

class UCooldownUpgrade : UStandardItemUpgrade
{

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player);
}

class UMultiHitscanUpgrade : UStandardItemUpgrade
{
    EMultiHitscanUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EMultiHitscanUpgradeType upgradeType);
}

class UHitscanBaseUpgrade : UStandardItemUpgrade
{
    EHitScanBaseUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EHitScanBaseUpgradeType upgradeType);
}

class UDamageUpgrade : UStandardItemUpgrade
{
    EDamageUpgrade upgradeType;
    EDamageComponentType DamageComponentType;
    TSubclassOf<AActor> RequiredClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, UFSDPlayerState* Player, EDamageUpgrade upgradeType, EDamageComponentType DamageComponentType);
}

class UFlatDamageUpgrade : UItemUpgrade
{
    float Damage;
    UDamageClass* DamageClass;
    TSubclassOf<AActor> RequiredClass;
    UDamageCondition* Condition;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, UDamageClass* DamageClass);
}

class URandomDamageUpgrade : UItemUpgrade
{
    FRandRange DamageRange;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player);
}

class UDamageConversionUpgrade : UItemUpgrade
{
    UDamageClass* DamageClass;
    float ConversionPercentage;
    bool DamageIsAdded;
    TSubclassOf<AActor> RequiredClass;
    UDamageCondition* Condition;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, UFSDPlayerState* Player, UDamageClass* DamageClass);
}

class UGatlingHotShellsBonusUpgrade : UItemUpgrade
{
    UDamageClass* DamageClass;
    float ConversionPercentage;
    bool DamageIsAdded;
    float TemperatureRequired;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, UDamageClass* DamageClass);
}

class UTargetSpecificDamageBonusUpgrade : UItemUpgrade
{
    float Bonus;
    FGameplayTagQuery tagQuery;
    FName Key;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, FName Key);
}

class UTargetStateDamageBonusUpgrade : UItemUpgrade
{
    ETargetStateDamageBonusType TargetState;
    float Bonus;
    UDamageClass* DamageClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, ETargetStateDamageBonusType TargetState);
}

class UStatusDamageBonusUpgrade : UItemUpgrade
{
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    float Bonus;
    UDamageClass* DamageClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, TSubclassOf<UStatusEffect> StatusEffect);
}

class UStatusAndStateDamageBonusUpgrade : UItemUpgrade
{
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    TArray<ETargetStateDamageBonusType> TargetStates;
    float Bonus;
    UDamageClass* DamageClass;
}

class UPushSatusEffectDamageBonusUpgrade : UItemUpgrade
{
    TSubclassOf<UStatusEffect> StatusEffect;
    float Chance;
    bool IgnoreArmorHit;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, TSubclassOf<UStatusEffect> StatusEffect);
}

class UPushDynamicStatusEffectDamageBonusUpgrade : UItemUpgrade
{
    FName Key;
    UStatusEffectItem* StatusEffectItem;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, FName Key);
}

class UModifyDynamicStatusEffectDamageBonusUpgrade : UStandardItemUpgrade
{
    EModifyStatusEffectDamageUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, UFSDPlayerState* Player, EModifyStatusEffectDamageUpgrade upgradeType);
}

class ULockCountSTEBonusUpgrade : UItemUpgrade
{
    TSubclassOf<UStatusEffect> StatusEffect;
    bool UseTotalLockCount;
    float Amount;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, TSubclassOf<UStatusEffect> StatusEffect);
}

class UDamageTagBonusUpgrade : UItemUpgrade
{
    TArray<UDamageTag*> Tags;
}

class UConditionalDamageTagBonusUpgrade : UItemUpgrade
{
    TArray<UDamageTag*> Tags;
    UDamageCondition* Condition;
}

class UConditionalDamageModifierUpgrade : UItemUpgrade
{
    UDamageCondition* Condition;
    TArray<FDamageModifierItem> Modifiers;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player);
}

class UFearAoEBonusUpgrade : UItemUpgrade
{
    float FearFactor;
    float range;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player);
}

class USingleUsableUpgrade : UStandardItemUpgrade
{
    ESingleUsableUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> subItem, UFSDPlayerState* Player, ESingleUsableUpgradeType upgradeType);
}

class UFlareUpgrade : UStandardItemUpgrade
{
    EFlareUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> flareClass, EFlareUpgradeType upgradeType);
}

class UGrenadeUpgrade : UStandardItemUpgrade
{
    EGrenadeUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AGrenade> flareClass, EGrenadeUpgradeType upgradeType);
}

class ULineCutterUpgrade : UStandardItemUpgrade
{
    ELineCutterUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> Item, ELineCutterUpgradeType upgradeType);
}

class ULineCutterProjectileUpgrade : UStandardItemUpgrade
{
    ELineCutterProjectileUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> Item, ELineCutterProjectileUpgradeType upgradeType);
}

class UProjectileUpgrade : UStandardItemUpgrade
{
    EProjectileUpgrade upgradeType;
    TSubclassOf<AActor> projectileClass;
    UItemUpgradeCondition* Condition;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, UFSDPlayerState* Player, EProjectileUpgrade upgradeType);
}

class UFlareGunUpgrade : UStandardItemUpgrade
{
    EFlaregunUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, EFlaregunUpgrades upgradeType);
}

class UFlaregunProjectileUpgrade : UStandardItemUpgrade
{
    EFlaregunProjectileUpgrades upgradeType;
    TSubclassOf<AActor> projectileClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, UFSDPlayerState* Player, EFlaregunProjectileUpgrades upgradeType);
}

class UChargedProjectileUpgrade : UStandardItemUpgrade
{
    EChargedProjectileUpgrades upgradeType;
    TSubclassOf<AActor> projectileClass;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, TSubclassOf<AActor> upgradedActor, UFSDPlayerState* Player, EChargedProjectileUpgrades upgradeType);
}

class UElectricalSMGUpgrade : UStandardItemUpgrade
{
    EElectricalSMGUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> Item, EElectricalSMGUpgrades upgradeType);
}

class UZiplineGunUpgrade : UStandardItemUpgrade
{
    EZiplineGunUpgrades upgradeType;
    TSubclassOf<AZipLineProjectile> projectileClass;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> Item, EZiplineGunUpgrades upgradeType);
}

class UGrapplingHookUpgrade : UStandardItemUpgrade
{
    EGrapplingHookUpgrade upgradeType;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> Item, EGrapplingHookUpgrade upgradeType);
}

class USentryGunUpgrade : UStandardItemUpgrade
{
    ESentryGunUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, ESentryGunUpgradeType upgradeType);
}

class USentryGunTypeUpgrade : UItemUpgrade
{
    TSubclassOf<ARecallableSentryGun> SentryGunType;
    TSubclassOf<AItemMarker> MarkerType;
}

class UShieldGeneratorUpgrade : UStandardItemUpgrade
{
    EShieldGeneratorUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EShieldGeneratorUpgrades upgradeType);
}

class UAddComponentUpgrade : UItemUpgrade
{
    TSubclassOf<UActorComponent> ComponentClass;
    bool ServerOnly;

    bool GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, TSubclassOf<UActorComponent> ComponentClass, bool includePreview);
}

class UTriggeredStatusEffectUpgrade : UItemUpgrade
{
    TSubclassOf<UStatusEffect> StatusEffect;
    ETriggeredStatusEffectType upgradeType;
    float AoERange;
    TSubclassOf<UStatusEffect> OwnerEffect;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UStatusEffect> StatusEffect, ETriggeredStatusEffectType aUpgradeType);
}

class UArmorUpgrade : UStandardItemUpgrade
{
    EArmorUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> armorClass, EArmorUpgradeType aUpgradeType);
}

class UArmorStatUpgrade : UStandardItemUpgrade
{
    UPawnStat* Stat;

    FUpgradeValues GetUpgradedStatValue(UFSDPlayerState* Player, TSubclassOf<AActor> armorClass, UPawnStat* Stat);
}

class UBoscoUpgrade : UStandardItemUpgrade
{
    EBoscoUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> Item, EBoscoUpgrades upgradeType);
}

class UPlatformGunUpgrade : UItemUpgrade
{
    EPlatformGunUpgrades myUpgradeType;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> Item, EPlatformGunUpgrades aUpgradeType);
}

class UDetPackUpgrade : UStandardItemUpgrade
{
    EDetPackUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, UFSDPlayerState* Player, EDetPackUpgrades upgradeType);
}

class UBonusDamageUpgrade : UItemUpgrade
{
    UDamageBonusBase* DamageBonus;
}

class UProjectileLauncherBaseUpgrade : UStandardItemUpgrade
{
    EProjectileLauncherBaseUpgradeType upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EProjectileLauncherBaseUpgradeType upgradeType);
}

class UMicroMissileLauncherUpgrade : UStandardItemUpgrade
{
    EMicroMissileLauncherUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EMicroMissileLauncherUpgrades upgradeType);
}

class UWeaponSwitchProjectileUpgrade : UItemUpgrade
{
    FProjectileSwitch Projectile;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<UWeaponHitCounterComponent> ComponentClass);
}

class UGooGunUpgrade : UStandardItemUpgrade
{
    EGooGunUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EGooGunUpgrades upgradeType);
}

class UGooGunProjectileUpgrade : UStandardItemUpgrade
{
    EGooGunProjectileUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(UFSDPlayerState* Player, TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, EGooGunProjectileUpgrades upgradeType);
}

class ULockOnWeaponUpgrade : UStandardItemUpgrade
{
    ELockOnWeaponUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, ELockOnWeaponUpgrades upgradeType);
}

class UPlasmaCarbineUpgrade : UStandardItemUpgrade
{
    EPlasmaCarbineUpgrades upgradeType;

    FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, UFSDPlayerState* Player, EPlasmaCarbineUpgrades upgradeType);
}

class UWeaponChargeProgressDamageBonus : UItemUpgrade
{
    UDamageClass* DamageClass;
    FFloatInterval ChargeRange;
    FFloatInterval DamageBonusRange;
}

class UUpgradable : UInterface
{

    void Upgraded(const TArray<UItemUpgrade*>& upgrades);
}

class UUpgradableGear : UInterface
{

    void GetGearStatEntry(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
}

class AJellyBreeder : UAFlyingBug
{
    UAnimSequenceBase* EggSpawnAnimation;
    UParticleSystem* EggParticles;
    USoundBase* EggSound;
    UEnemyDescriptor* EnemyToSpawn;
    TSubclassOf<AProjectile> EggClass;
    float TimeBetweenBursts;
    float TimeBetweenEggs;
    float CloseToSpawnEggTime;
    UPhysicalMaterial* WeakPointMaterial;
    UPhysicalMaterial* UnWeakPointMaterial;
    int32 EggBurstSize;
    int32 MaxJellies;
    float MultiplierOnHighPlayerCount;
    bool IsInBreedMode;

    void SpawnEnemies(UProjectile* Egg, int32 AmountToSpawn);
    void PlaySpawnEggAnim();
    void OnRep_BreedMode();
    void OnJellyDestroyed(AActor* AActor);
    void BreedModeFlipped(bool aIsLayingEggs);
}

class UJellyBreederAnimInstance : UFlyingBugAnimInstance
{
    bool ReadyToSpawnEggs;
}

class UJellyEggAnimInstance : UAnimInstance
{
    FVector force;
}

class AJetPackItem : UAnimatedItem
{
    float ActiveTime;
    UCurveFloat* VerticalAccelerationCurve;
    float VerticalAcceleration;
    float MaxVerticalSpeed;
    float MaxHorizontalSpeed;
    float MaxHorizontalDrift;
    float BurnDuration;
    float RechargeDuration;
    float Fuel;
    bool Active;
    UPlayerMovementComponent* CharacterMovement;

    void Server_StopThruster();
    void Server_StartThruster();
    void OnRep_Fuel(float OldFuel);
    void OnRep_Active();
    void OnFuelChanged(float Value, float Delta);
}

class UKeepInsideWorld : UActorComponent
{
    TArray<TWeakObjectPtr<AActor>> ActorsToKeepInsideWorld;
    int32 IteratorIndex;

    void UnregisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
    void RegisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
}

class UKillEnemiesObjective : UObjective
{
    int32 EnemyCount;
    int32 ExtraEnemies;
    UDebrisPositioning* Positioning;
    UEnemyDescriptor* EnemyTarget;
    int32 EnemiesKilled;
    int32 EnemiesToKill;

    void RegisterTargetSpawned(APawn* Target);
    void ReceiveTargetKilled(UHealthComponentBase* Health);
    void OnTargetKilled(UHealthComponentBase* Health);
    void OnRep_EnemiesToKill(int32 prevAmount);
    void OnRep_EnemiesKilled(int32 prevAmount);
}

class ALaserPointerMarker : AActor
{
    FLaserPointerData LookAtData;
    AActor* LookAtActor;
    UPrimitiveComponent* LookAtComponent;
    UTerrainMaterial* LookAtTerrainMaterial;

    APlayerCharacter* GetCharacter();
}

class ALaserPointerWaypoint : AActor
{
    TWeakObjectPtr<APlayerCharacter> Character;
    TWeakObjectPtr<ALaserPointerItem> LaserPointer;
    FVector Normal;
    int32 Index;

    void OnShow();
    void OnHide();
}

class ALaserPointerItem : UAnimatedItem
{
    FLaserPointerItemOnMarkerPlaced OnMarkerPlaced;
    void MarkerPlacedDelegate(FVector Location, const FText& Name, FLinearColor Color, AActor* Target, ELaserPointerTargetType TypeOfTarget);
    TSubclassOf<ALaserPointerMarker> MarkerType;
    TSubclassOf<ALaserPointerMarker> SecondaryMarkerType;
    TWeakObjectPtr<ALaserPointerMarker> ActiveMarker;
    TSubclassOf<ALaserPointerWaypoint> WaypointType;
    int32 MaxWaypoints;
    TArray<ALaserPointerWaypoint*> Waypoints;
    int32 NextWaypointIndex;
    float MarkerLifeTime;
    FLinearColor ColorMinerals;
    FLinearColor ColorEnemy;
    FLinearColor ColorOther;
    UDialogDataAsset* DefaultLookAtShout;
    UDialogDataAsset* DefaultEnemyShout;
    USceneComponent* PointerComponent;
    FHitResult LookAtHit;
    TWeakObjectPtr<UObjectInfoComponent> LookAtInfo;
    TWeakObjectPtr<UTerrainMaterial> LookAtTerrainMaterial;
    FLaserPointerData LookAtData;
    float LookAtDistance;
    UDialogDataAsset* LookAtShout;
    AFSDGameState* GameState;

    void UnlockToMinersManual(UObject* WorldContextObject, FGuid ObjectID);
    void ToggleLaserVisible(bool aVisible);
    void ServerPlaceMarker(FVector Location, AActor* Actor, UPrimitiveComponent* Cmponent, UTerrainMaterial* TerrainMaterial, ELaserPointerMarkerType eMarkerType);
    void Server_SecondaryUse();
    void OnPointOfInterest(AActor* TargetActor, FVector TargetLocation, UTexture2D* TargetIcon);
    void OnDeath(UHealthComponentBase* Health);
    void GetPointTransform(FTransform& PointTransform);
}

class ULegacySettings : UDataAsset
{
    TArray<TSoftObjectPtr<USkeletalMesh>> ArmorMeshes;
}

class ULevelGenerationDebris : UActorComponent
{
    UDebrisBase* Debris;
    UObject* Influencer;
    float range;
    bool SelfActivate;
}

class ULineSegmentCarverComponent : UGenerationComponent
{
    TArray<FLineSegmentCarverPoint> LinePoints;
    bool Visible;
    int32 Layer;
    float Cielingheight;
    float FloorDepth;
    UFloodFillSettings* CeilingNoiseOverride;
    UFloodFillSettings* WallNoiseOverride;
    UFloodFillSettings* FloorNoiseOverride;
    bool UseDetailNoise;
}

class ALineSegmentCarver : AGenerationItem
{
    ULineSegmentCarverComponent* LineComponent;
}

class ALineCutterProjectile : UProjectile
{
    FScaledEffect EletricHitEffect;
    FScaledEffect ProjectileDisappearEffect;
    float SwipeRadius;
    float DoubleLineDistanceMultiplier;
    float OverlapRadius;
    bool DestroyOnTerrainCollision;
    bool IsDead;
    bool bHasReversedDirection;
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
    USceneComponent* LineRoot;
    USceneComponent* LeftSphere;
    USceneComponent* RightSphere;
    USceneComponent* LeftSphere2;
    USceneComponent* RightSphere2;
    USceneComponent* LeftSphere3;
    USceneComponent* RightSphere3;
    UParticleSystemComponent* BeamParticle;
    UParticleSystemComponent* BeamParticle2;
    UParticleSystemComponent* BeamParticle3;
    UParticleSystemComponent* LeftHitParticles;
    UParticleSystemComponent* RightHitParticles;
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
    UDamageComponent* DamageComponent;
    UDamageComponent* InitialDamageComponent;
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
}

class AGuntowerLineProjectile : UProjectile
{
    FGuntowerLineProjectileOnLineDestroy OnLineDestroy;
    void LineDestroy(FHitResult Result);
    USceneComponent* LeftLinePoint;
    USceneComponent* RightLinePoint;
    UDamageComponent* DamageComponent;
    UParticleSystemComponent* BeamParticles;
    float PlatformDissolveRadius;
    float PlatformDissolveSqueeze;
    UParticleSystemComponent* HitParticles;
    float TimeBetweenLineChecks;

    void TurnOffParticles();
    void LineDestroy__DelegateSignature(FHitResult Result);
    void Fire(const FVector& Origin, const FVector& Direction, float Distance);
}

class ULineSegmentFillerComponent : UGenerationComponent
{
    TArray<FLineSegmentFillerPoint> LinePoints;
    bool Visible;
    UFloodFillSettings* NoiseOverride;
    FRandRange RangeScale;
    FRandRange NoiseRangeScale;
}

class ALineSegmentFiller : AGenerationItem
{
    ULineSegmentFillerComponent* LineComponent;
}

class ULoadoutItem : UInterface
{

    TSubclassOf<AItem> GetLoadoutItemClass();
}

class ALoadoutItemProxy : AItem
{
    UItemCharacterAnimationSet* AnimationSet;
    FItemLoadoutAnimations LoadoutAnimations;

    TSubclassOf<AItem> GetLoadoutItemFromClass(TSubclassOf<AActor> ActorClass);
}

class ULocalizationFunctionLibrary : UBlueprintFunctionLibrary
{

    TArray<FLocalizedLanguageInfo> GetLocalizedLanguages();
}

class UFSDLocalizationSettings : UDeveloperSettings
{
    TArray<FFSDTranslationProgress> CommunityTranslationProgress;
}

class ALockOnBeam : AActor
{
    USplineComponent* BeamSpline;
    USplineMeshComponent* BeamMeshComponent01;
    USplineMeshComponent* BeamMeshComponent02;
    USplineMeshComponent* BeamMeshComponent03;
    USceneComponent* BlockedNodeComponent;
    USceneComponent* PreviewLocationComponent;
    UMaterialInterface* BeamMaterial;
    UMaterialInterface* BlockedBeamMaterial;
    UMaterialInterface* SeekerMaterial;
    float BeamThicknessScale;
    TWeakObjectPtr<ALockOnWeapon> Item;
    TWeakObjectPtr<AActor> TargetActor;
    FBeamCollision Collision;

    void ReceiveItemSet();
}

class ALockOnWeapon : UAmmoDrivenWeapon
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
    AActor* AimTarget;
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
    TSubclassOf<UActorTrackingWidget> TrackingWidgetClass;
    TSubclassOf<ALockOnBeam> LockOnBeamClass;
    TSubclassOf<AActor> AoeActorClass;
    int32 AoeHitCountThreshhold;
    bool UseLockOnTargetStatusEffect;
    TSubclassOf<UStatusEffect> LockOnTargetStatusEffect;
    int32 PushStatusEffectEveryXLock;
    int32 LockOnCount;
    UDamageComponent* DamageComponent;
    UHitscanComponent* HitscanComponent;
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
    void Server_PushStatusEffect(AActor* Target);
    void Server_PopStatusEffect(AActor* Target);
    void Server_FiringComplete(int32 ShotsFired);
    void RefundAmmo();
    void OnRep_AimTarget();
    void OnMovementSlowed(bool isSlowed);
    void OnHitDeadTarget();
    void OnHit(const FHitResult& Hit, bool AlwaysPenetrate);
    void OnAsyncFireComplete();
    void MuzzleLerpToTarget(FVector TargetLocation);
    void MaxTargetsDelegate__DelegateSignature(int32 InMaxTargets);
    void LockonTargetRotationUpdated__DelegateSignature(bool hasTargetLockon, FRotator socketRotation);
    void LockOnRifleLockingOnState__DelegateSignature();
    void LockOnCountDelegate__DelegateSignature(int32 InCurrentCount);
}

class ULockOnTrackingWidget : UActorTrackingWidget
{

    void OnLockOn(int32 numberOfLockOnsOnThisTarget, int32 totalNumberOfLockOns);
    void OnFireComplete(int32 numberOfLockOnsOnThisTarget);
    void CleanUpWidget(bool showFade);
}

class ULoginBlueprintCallProxy : UOnlineBlueprintCallProxyBase
{
    FLoginBlueprintCallProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FLoginBlueprintCallProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();
    UObject* WorldContextObject;

    ULoginBlueprintCallProxy* Login(UObject* WorldContextObject);
}

class ULookingAtWidget : UUserWidget
{
    float TargetSelectDuration;
    float TargetLostDuration;
    TWeakObjectPtr<APlayerCharacter> Character;
    TWeakObjectPtr<UCharacterSightComponent> CharacterSight;
    TWeakObjectPtr<AActor> CurrentTarget;
    TWeakObjectPtr<UPawnAfflictionComponent> CurrentTargetAfflictions;
    TScriptInterface<IHealth> CurrentTargetHealth;
    bool CanCurrentTargetTakeDamage;
    float TargetLostTime;
    bool bTargetSet;

    void SetCurrentTarget(AActor* NewActor, const InterfaceProperty& HealthComponent, float OverrideTargetLostTime);
    void ResetCurrentTarget();
    void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
    void ReceiveTargetLost();
    void ReceiveNewTarget(AActor* InCurrentTarget);
    bool IsValidTarget(AActor* TargetActor, const InterfaceProperty& TargetHealth);
    bool IsBossFight(const InterfaceProperty& Health);
    UHealthComponentBase* GetLookingAtHealth();
    AActor* GetLookingAtActor();
    bool GetCharacterTemperatureEffect(float& TemperatureEffect);
}

class ULookingAtContentWidget : UUserWidget
{
    TWeakObjectPtr<AActor> CurrentTarget;
    TWeakObjectPtr<UPawnAfflictionComponent> CurrentTargetAfflictions;
    TWeakObjectPtr<USimpleObjectInfoComponent> CurrentTargetInfo;
    TScriptInterface<IHealth> CurrentTargetHealth;
    TWeakObjectPtr<UHackingUsableComponent> CurrentHackingComponent;
    TWeakObjectPtr<UPetComponent> CurrentPetComponent;
    bool bWeakPointHit;

    void UpdateCurrentTarget(float DeltaSeconds, AActor* InTargetActor, const InterfaceProperty& InTargetHealthComponent);
    void RegisterWeakPointHit();
    void ReceiveUpdateTarget(AActor* InCurrentTarget, float DeltaTime);
    void ReceiveNewTarget(AActor* InCurrentTarget);
    FText GetTargetOwnerName();
    FText GetTargetName();
    float GetTargetHealthPct();
}

class ATreasureBeacon : AActor
{
    USceneComponent* RootComp;
    UTerrainPlacementComponent* terrainPlacement;
    UDebrisPositioning* TreasurePositioning;
    UDebrisPositioning* DebrisPartsPositioning;
    UCurveFloat* AvoidCostCurve;
    UCurveFloat* AvoidCostCurveDebris;
    float MaxRange;
    float MinRange;
    float DebrisSpawnRange;
    TSubclassOf<AActor> DebrisPartClass;
    int32 DebrisPartsToSpawn;
    int32 MaxSpawnLocationTries;
    TSubclassOf<ATreasureContainer> TreasureClass;
    ATreasureContainer* TreasureInstance;

    void SpawnDebreeParts();
    void ActivateTreasure();
}

class ATreasureContainer : AActor
{
    USceneComponent* Root;
    UOncePerPlayerUsableComponent* CollectUsable;
    UItemAquisitionSource* AquisitionSource;
    TArray<APlayerCharacter*> Collectors;
    APlayerCharacter* LastJoiner;
    TArray<FTreasureWeight> PossibleRewarders;
    UTreasureRewarder* TreasureRewarder;
    bool PreventLatejoiners;

    void TestAwardTreasure();
    void SetPreventFurtherLatejoiners(bool prevent);
    void SetCanCollectTreasure(bool canCollect);
    void OnRep_LastJoiner();
    void OnRep_Collectors();
    void OnPlayerLatejoined(UPlayerCharacter* joiner);
    void OnPlayerCollectedTreasure(UPlayerCharacter* collector, EInputKeys Key);
    void OnLocalPlayerCollectedTreasure(UPlayerCharacter* Player);
    void OnDisableChestLocally();
    void OnContainerActivated();
    bool GetPreventFurtherLatejoiners();
}

class ALostPack : AActor
{
}

class UMasteryIconWidget : UUserWidget
{

    void ReceiveUnlocked();
}

class UMeleeAttackComponent : UDamageAttackComponent
{
    TArray<UAnimMontage*> Montages;
    bool CenterOnTarget;
    TArray<UAttackEffect*> AttackEffects;
    FMeleeAttackComponentOnAttackStartedEvent OnAttackStartedEvent;
    void MeleeAttackDelegate();
    FMeleeAttackComponentOnDamageAppliedEvent OnDamageAppliedEvent;
    void MeleeAttackDelegate();
    FMeleeAttackComponentOnAttackEndedEvent OnAttackEndedEvent;
    void MeleeAttackDelegate();

    UAnimMontage* SelectMontage();
    void OnPerformAttack(FName Name);
    void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
}

class UMeshCarveAttackEffect : UAttackEffect
{
    float ExpensiveNoise;
    UStaticMesh* CarveMesh;
    float CarverOffset;
    FRotator CarverOrientation;
    FVector CarverScale;
    FName Socket;
}

class UMessagingSubSystem : UGameInstanceSubsystem
{
    FMessagingSubSystemOnNewMessage OnNewMessage;
    void NewMessageSig(const FFSDChatMessage& Message);

    float MessageAge(const FFSDChatMessage& Msg);
    void LatestMessages(int32 Num, bool resetAge, TArray<FFSDChatMessage>& OutMessages);
    void ClearMessages();
}

class AMicroMissileLauncher : UAmmoDrivenWeapon
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
    UAnimMontage* WPN_Fire_Empty_Mag;
    UAnimMontage* WPN_Fire_Level2;
    UAnimMontage* WPN_Fire_Level2_Empty_Mag;
    UAnimMontage* WPN_Fire_Level3;
    UAnimMontage* WPN_Fire_Level3_Empty_Mag;
    UAnimMontage* WPN_Mag_Feed;
    UAnimMontage* WPN_Mag_And_Barrel_Feed;
    USoundCue* ChargedMissileFireSound;

    void Server_SetIsCharging(bool isCharging);
    void Server_SetChargedMissile(bool isCharged);
    bool IsNextShotBuckShot();
    int32 GetChargeCurrentFireCount();
    void ChargingDelegate__DelegateSignature();
    void All_SetChargedMissile(bool isCharged);
}

class UMicroMissileLauncherAnimInstance : UAnimInstance
{
    AMicroMissileLauncher* Weapon;

    void OnMontageEndedInternal(UAnimMontage* Montage, bool interrupted);
}

class UMilestoneAsset : UDataAsset
{
    FMilestoneAssetOnMilestoneClaimed OnMilestoneClaimed;
    void OnMilestoneClaimed(UMilestoneAsset* Milestone, int32 ClaimedTier);
    FMilestoneAssetOnMilestoneReached OnMilestoneReached;
    void OnMilestoneReached(UMilestoneAsset* Milestone, int32 ReachedTier);
    FGuid SaveGameID;
    UTexture2D* LargeImage;
    FText FormattedTitle;
    int32 FormattedValueOffset;
    bool CountValueAsTotal;
    UMissionStat* TrackingStat;
    UPlayerCharacterID* TrackingCharacterID;
    TArray<FMilestoneTier> Tiers;
    UFSDGameInstance* GameInstance;
    int32 LastTierReached;
    bool bPendingMilestoneReached;

    TArray<UMilestoneAsset*> SortMilestonesByProgress(UObject* WorldContext, TArray<UMilestoneAsset*>& Milestones);
    void OnMissionStatChanged(UMissionStat* Stat, float Value);
    bool IsCompleted(UObject* WorldContext);
    bool IsClaimable(UObject* WorldContext);
    FText GetTitleForTier(int32 Tier);
    FText GetTitle(UObject* WorldContext);
    int32 GetNextPerkPointsReward(UObject* WorldContext);
    void GetCurrentProgress(UObject* WorldContext, int32& Tier, float& Progress, float& CurrentCount, float& TargetCount);
    int32 GetClaimedTier(UObject* WorldContext);
    bool GetClaimedProgress(UObject* WorldContext, int32& Tier, float& Progress, float& CurrentCount, float& TargetCount);
    UTexture2D* GetCategoryIcon();
    void ClearPendingMilestoneReached();
    int32 ClaimNextTier(UObject* WorldContext);
}

class UMineralTradeData : UDataAsset
{
    TArray<FText> MineralTradeTickerTexts;
}

class UMinersManualData : UDataAsset
{
    FSoftMinersManualDescription Description;

    void GetText(FText& Headline, FText& richText);
    UTexture2D* GetFrontImage();
    UTexture2D* GetBackgroundImage();
}

class ULoreScreenMasterWidget : UUserWidget
{
    FText PageName;
    TSoftObjectPtr<UTexture2D> SolidImage;
    TSoftObjectPtr<UTexture2D> TransparentImage;
    FLinearColor BackgroundColor;
}

class UMinersManual : UDataAsset
{
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> BasicsPages;
    TMap<int32, FText> BasicsPageHeaders;
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> CombatPages;
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> ExtraMissionPages;
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> ResourcePages;
    TArray<UEnemyMinersManualData*> Enemies;
    TArray<TSoftObjectPtr<UBiome>> BiomeReferences;
    TArray<TSoftObjectPtr<UMissionTemplate>> MissionReferences;
    TArray<FDamageTypeDescription> DamageTypeInfo;
    TMap<int32, FMissionTypeDescription> MissionDescriptions;
    TMap<int32, FBiomeFeatures> BiomeFeatureDescriptions;

    bool IsObjectInMinersManual(UObject* WorldContext, UObject* Object);
    bool IsMissionUnlocked(UObject* WorldContext, UMissionTemplate* mission);
    bool IsBiomeUnlocked(UObject* WorldContext, UBiome* Biome);
    TArray<FText> GetUnlockedCreatureLore(UObject* WorldContext, UEnemyMinersManualData* enemy, float& completePercentage);
    TArray<TSoftObjectPtr<UMissionTemplate>> GetMissions();
    void GetMissionInfo(int32 MissionTypeIndex, FText& InfoHeadline, FText& InfoDescription, TArray<FMissionStepDescription>& Steps);
    int32 GetEnemyKillCount(UObject* WorldContext, FGuid EnemyID);
    TArray<UEnemyMinersManualData*> GetEnemiesSorted();
    TArray<UEnemyMinersManualData*> GetEnemies();
    void GetDamageTypeDescriptions(TArray<EDamageType> damageTypes, TArray<FDamageTypeDescription>& Icon);
    void GetDamageTypeDescription(EDamageType damageTypes, FDamageTypeDescription& Icon);
    TArray<TSoftObjectPtr<UBiome>> GetBiomes();
    TArray<UMinersManualData*> GetBiomeFeatures(int32 BiomeIndex);
    TArray<FDamageTypeDescription> GetAllDamageTypeDescriptions();
}

class AMiningPodCalldownLocation : AActor
{
}

class AMiningPod : AActor
{
    float DropHeight;
    FVector TargetLocation;
    UAutoCarverComponent* AutoCarver;
    UCurveFloat* DropCurve;
    UCurveFloat* DepartCurve;
    UCurveFloat* CarverDropCurve;
    float CarverRotationSpeed;
    FVector CarverScale;
    FGameplayTagContainer GameplayTags;
    UBoxComponent* DwarfCheckerBox;
    float DepartureTime;
    FText DepartueCountdownName;
    FMiningPodDialogs Dialogs;
    EMiningPodMission MissionType;
    bool HasLanded;
    UOutlineComponent* PodOutline;
    FVector StartLocation;
    EMiningPodState State;
    EMiningPodRampState rampState;
    float TargetDropTime;
    float TargetDepartureTime;
    float TimeToDrop;
    UObjectivesManager* ObjectivesManager;

    AMiningPod* SpawnPodAtLocation(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FTransform& Transform);
    void SetRampState(EMiningPodRampState rampState);
    void SetMuleInstance(UMolly* Donkey);
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
    FVector GetDonkeyReturnPickupLocation();
    void ForceTakeoff();
    void ExitSpacerig();
    void DropToTarget(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FTransform& dropLocation, int32 DropDelay);
    AMiningPod* DropToMission(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FVector& Location);
    void DepositAllPlayersMaterials();
    void Depart();
    void CorrectLocationsForSpawnedOnLocation();
    FVector AdjustLandingLocationToGround(UObject* WorldContextObjet, const FVector& initialLocation);
}

class UMiningPodAnimInstance : UAnimInstance
{
    EMiningPodRampState rampState;
    EMiningPodState PodState;
}

class UMissionChallenge : UDataAsset
{
}

class UMissionFunctionLibrary : UBlueprintFunctionLibrary
{

    int32 GetGlobalMissionSeed();
}

class UMissionGenerationManager : UGameInstanceSubsystem
{
    TMap<int32, FGeneratedMissionGroup> AllMissionGroups;
    bool ResetSelectedMission;

    TArray<UGeneratedMission*> GetMissions(int32 Seed);
    UGeneratedMission* GetMissionFromSeeds(int32 GlobalSeed, int32 MissionSeed);
    TArray<UGeneratedMission*> GetAvailableMissions();
}

class UMissionManager : UActorComponent
{
    TArray<URunningMissionBP*> RunningBlueprints;

    void OnMatchStarted();
}

class UMissionMutator : UDataAsset
{
    TSubclassOf<URunningMissionBP> MissionBP;
    TArray<TSoftClassPtr<UObjective>> BannedObjectives;
    TArray<UMutator*> Mutators;
    FText Title;
    FText RichDescription;
    UTexture2D* Icon;
}

class UMutator : UDataAsset
{
}

class UVeinMutator : UMutator
{
    UVeinResourceData* VeinResource;
    float Modifier;
}

class UCraftingMaterialMutator : UMutator
{
    float Modifier;
}

class UResourceMutator : UMutator
{
    TArray<UResourceData*> Resources;
    float Modifier;
}

class USupplyPodMutator : UMutator
{
    float CostModifier;
}

class UPlayerShieldsMutator : UMutator
{
    float ShieldModifier;
}

class UEnemyRarityMutator : UMutator
{
    float RarityMultiplier;
    float SpawnAmountMultiplier;
    float DifficultyMultiplier;
    UEnemyDescriptor* EnemyDescriptor;
}

class UForceStationaryEncounterMutator : UMutator
{
    UEnemyGroupDescriptor* EnemyGroup;
    FIRandRange GroupSize;
}

class UEncounterOverrideMutator : UMutator
{
    float MobileEncounterScale;
    float StationaryEncounterScale;
}

class UNoHeadlightMutator : UMutator
{
}

class UDifficultyMutator : UMutator
{
    float ExtraLargeEnemyDamageResistanceMultiplier;
    float EnemyDamageResistanceMultiplier;
    float SmallEnemyDamageResistanceMultiplier;
    float EnemyDamageModifierMultiplier;
    float EnemyCountModifierMultiplier;
    float WeakpointDamageMultiplier;
    float HazardBonus;
    float FriendlyFireModifierMultiplier;
    float EnemyWaveIntervalModifier;
    float EnemyNormalWaveIntervalModifier;
    float EnemyNormalWaveDifficultyMultiplier;
    float ProjectileSpeedModifier;
    float AttackCooldownModifier;
    float SpeedModifier;
}

class UResourceVeinMutator : UMutator
{
    UResourceData* Resource;
    float VeinLengthMultiplier;
    float RangeMultiplier;
    float NoiseRangeMultiplier;
}

class URewardMutator : UMutator
{
    FText RewardText;
    float XPMultiplier;
    float CreditMultiplier;
}

class UCommunicationMutator : UMutator
{
    float PitchMultiplier;
}

class UExplosiveEnemiesMutator : UMutator
{
}

class UInfestedEnemiesMutator : UMutator
{
    TArray<UParticleSystem*> SpawnEffects;

    UParticleSystem* GetParticleSystem(UFSDPawn* enemy);
}

class URunningMissionBP : UObject
{

    void StartLogic();
}

class UStatusEffectMissionBP : URunningMissionBP
{
    FGameplayTagQuery EnemyQuery;
    TSubclassOf<UStatusEffect> StatusEffect;

    void OnEnemySpawned(APawn* Pawn, UEnemyDescriptor* descriptor);
}

class UNoOxygenMutator : UMutator
{
    float OxygenReplenishmentRate;
    TSoftClassPtr<UOxygenComponent> OxygenComponent;
    TSoftClassPtr<UStatusEffect> ReplenishOxygenEffect;
}

class UPlayerDamageTakenMutator : UMutator
{
    float DamageMultiplier;
    TSet<UDamageClass*> SkipDamageClasses;
}

class UCaveItemsMutator : UMutator
{
    TSubclassOf<UDebrisItemComponent> Item;
}

class UEliteEnemiesMutator : UMutator
{
    float SpawnChanceModifier;
    int32 MaxElites;
    float EliteCooldown;
}

class UMissionMutatorManager : UActorComponent
{
}

class UMissionPlayerAndCharacterWidget : UUserWidget
{

    void UpdateValues(int32 PlayerRank, int32 PlayerStars, int32 CharacterLevel, float CharacterProgress);
    void StepCounter(float TimeScale, bool& CounterFinished);
    void PingPlayerRank();
    void PingCharacterLevel(int32 Level, int32 Stars);
    void InitCounter(FPlayerProgress PlayerProgressStart, FCharacterProgress CharacterProgressStart, FPlayerProgress PlayerProgressFinish, FCharacterProgress CharacterProgressFinish);
}

class UFSDMissionSettings : UDeveloperSettings
{
    FSoftObjectPath DefaultRoomGenerator;
    TMap<int32, FMissionHazardSetting> MissionComplexitySettings;
    TMap<int32, FMissionHazardSetting> MissionDurationSettings;

    float GetTotalHazardBonus(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* DifficultySetting);
}

class UMissionStatCategory : UDataAsset
{
    FText Title;
    UTexture2D* Icon;
}

class UMissionStat : UDataAsset
{
    FMissionStatOnCountChanged OnCountChanged;
    void StatCountChanged(UMissionStat* MissionStat, float Value);
    FGuid SaveGameID;
    FText Title;
    UMissionStatCategory* Category;
    UFSDAchievement* StatAchievement;
    EMissionStatType MissionStatType;
    bool DoNotShowInMissionStatView;
    bool ShowAllValuesCombined;
    bool ShowHighestValue;

    void StatCountChanged__DelegateSignature(UMissionStat* MissionStat, float Value);
    FText MissionStatToText(EMissionStatType StatType, float Value);
    void Increment(UObject* WorldContext, UMissionStat* Stat, TSubclassOf<UPlayerCharacter> CharacterClass, float Amount);
    float GetStatMinCount(UObject* WorldContext);
    float GetStatMaxCount(UObject* WorldContext);
    FText GetStatCountTotalAsText(UObject* WorldContext);
    float GetStatCountTotal(UObject* WorldContext);
    float GetStatCountPct(UObject* WorldContext, TSubclassOf<UPlayerCharacter> CharacterClass);
    FText GetStatCountAsText(UObject* WorldContext, UPlayerCharacterID* characterID);
    float GetStatCount(UObject* WorldContext, UPlayerCharacterID* characterID);
    FString GetSourceTitle();
    FText GetLowestStatCountAsText(UObject* WorldContext);
    UTexture2D* GetIcon();
    FText GetHighestStatCountAsText(UObject* WorldContext);
    FText GetCategoryTitle();
}

class UMissionStatsCollector : UActorComponent
{
    APlayerCharacter* Character;

    void OnResourceIncremented(UCappedResource* Resource, float Amount);
}

class UGlobalMissionParameters : UDataAsset
{
    TArray<FResourceSpawner> DefaultResources;
}

class UMissionTemplate : USavableDataAsset
{
    TArray<FResourceSpawner> ResourceDistribution;
    TSubclassOf<UObjective> PrimaryObjective;
    TArray<TSubclassOf<UObjective>> SecondaryObjectives;
    TArray<TSubclassOf<UObjective>> DeepDiveObjectives;
    TArray<UMutator*> BaseMutators;
    TSoftClassPtr<AProceduralSetup> pls;
    TSoftObjectPtr<UWorld> Level;
    TSoftClassPtr<AFSDGameMode> GameMode;
    TArray<UMissionComplexity*> LockedComplexities;
    TArray<UMissionDuration*> LockedDurations;
    FText MissionName;
    TSoftObjectPtr<UTexture2D> MissionImageLarge;
    TSoftObjectPtr<UTexture2D> MissionButtonImage;
    UTexture2D* MissionIcon;
    UTexture2D* MissionIconSmall;
    FLinearColor MissionColor;
    int32 MissionTypeIndex;
    FString MissionTypeAnalyticsIndex;
    TArray<TSubclassOf<UMissionDNA>> DNA;
    TArray<TSoftClassPtr<UDebrisActorComponent>> DebrisComponents;
    bool MustBeUnlocked;
    float RoomEncounerScale;
    float StationaryEnemyScale;
    TArray<TSoftClassPtr<UTutorialComponent>> Tutorials;

    void Receive_SetMissionParameters(UGeneratedMission* mission, FRandomStream& Random);
    bool IsLocked(UFSDSaveGame* SaveGame);
    TArray<UMissionDuration*> GetValidDurations();
    TArray<UMissionComplexity*> GetValidComplexities();
    TSoftClassPtr<AProceduralSetup> GetSoftReferenceToPLS();
    FObjectiveMissionIcon GetPrimaryObjectiveIconFromAsset(UMissionTemplate* mission, bool getSmallVersion);
    FObjectiveMissionIcon GetPrimaryObjectiveIcon(bool getSmallVersion);
    TSubclassOf<AProceduralSetup> GetPLS();
    int32 GetMissionTypeIndex();
    UTexture2D* GetMissionImageLarge();
    UTexture2D* GetMissionButtonImage();
    UGeneratedMission* GenerateMission(const UObject* WorldContextObject, UBiome* Biome, int32 Seed, int32 GlobalSeed, int32 missionIndex, UMissionComplexity* limitComplexity, UMissionDuration* limitDuration, UMissionMutator* Mutator, TArray<UMissionWarning*> Warnings, TSubclassOf<UObjective> forceSecondary);
}

class UMissionNameBank : UDataAsset
{
    TArray<FText> FirstNames;
    TArray<FText> LastNames;

    TArray<FText> GetRandomGeneratedNames(FRandomStream& Random, int32 count);
}

class UMissionComplexity : UDataAsset
{
    FText Title;
    float HazardBonus;
    int32 NumberOfDots;
    FGuid SaveGameID;
}

class UMissionDuration : UDataAsset
{
    FText Title;
    float HazardBonus;
    int32 NumberOfDots;
    FGuid SaveGameID;
}

class UMissionDNA : UObject
{
    float MissionScale;
    float Weight;
    UMissionComplexity* Complexity;
    UMissionDuration* Duration;
    TArray<FGameplayTagQuery> RoomQueries;

    float GetDurationHazardBonus();
    float GetComplexityHazardBonus();
}

class UEscortMissionDNA : UMissionDNA
{
    int32 RefuelLocations;
}

class ADNATester : AActor
{
    TSubclassOf<UMissionDNA> DNA;
    URoomGeneratorGroup* Group;
}

class UMissionWarning : UDataAsset
{
    TSoftClassPtr<URunningMissionBP> MissionBP;
    TArray<TSoftClassPtr<UObjective>> BannedObjectives;
    TArray<UMissionMutator*> BannedMutators;
    TArray<UMutator*> Mutators;
    FText Title;
    FText RichDescription;
    UTexture2D* Icon;
    float HazardBonus;
    UMissionStat* MissionCompletedStat;
}

class UStatusEffectEnemies : URunningMissionBP
{
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    FGameplayTagContainer AllowedFilter;
    FGameplayTagQuery AllowedQuery;
    float ChanceToApply;
    bool OverrideReplacesDefault;
    TMap<UEnemyDescriptor*, TSubclassOf<UStatusEffect>> Overrides;

    void OnEnemySpawned(APawn* enemy, UEnemyDescriptor* descriptor);
}

class UHeroEnemies : URunningMissionBP
{
    FGameplayTagQuery AllowedQuery;
    TMap<UEnemyDescriptor*, FEliteEnemyEntry> Entries;

    void OnEnemySpawned(APawn* enemy, UEnemyDescriptor* descriptor);
}

class UExterminationReward : URunningMissionBP
{
    UResourceData* Resource;
    float AwardSize;
    FGameplayTagContainer AllowedFilter;

    void OnEnemyKilled(const FGameplayTagContainer& GameplayTags, AActor* killedEnemy);
}

class UMOD_MakeEliteEnemy : UActorComponent
{
}

class AMULE : UDeepPathfinderCharacter
{
    UHealthComponent* HealthComponent;
    USimpleObjectInfoComponent* ObjectInfo;
    bool IsDown;

    void SetIsDown(bool IsDown);
    void SetControlledByDropShip(bool Control);
    void OnRep_IsDown();
}

class AMolly : UMULE
{
    FMollyOnCalledByChanged OnCalledByChanged;
    void CalledByDelegate(UPlayerCharacter* InPlayer);
    UResourceBank* ResourceBank;
    UOutlineComponent* OutlineComponent;
    FMollyOnReachedDropShip OnReachedDropShip;
    void Delegate();
    TWeakObjectPtr<APlayerCharacter> CalledBy;

    void SetOpenForDeposit(bool Open);
    void SetGotoDropShip(const FVector& Location);
    void SetCalledBy(UPlayerCharacter* InPlayer);
    void OnRep_CalledBy();
    UDialogDataAsset* GetCallingShout();
    void EnableButton();
    void CalledByDelegate__DelegateSignature(UPlayerCharacter* InPlayer);
}

class AMiniMule : UMULE
{
    TArray<AGem*> LostLegs;

    void SetLegsVisibleOnScanner();
    void OnLegsSetVisible();
    TArray<AGem*> FindLegsInLevelSortedByDistance();
}

class UMotionAudioController : UFSDAudioComponent
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
}

class AMountedGun : AActor
{
    USkeletalMeshComponent* Mesh;
    UWeaponFireComponent* WeaponFire;
    UGunLogicComponent* GunLogic;

    void Server_Test();
}

class UGunLogicComponent : UActorComponent
{
    UWeaponFireComponent* WeaponFire;
    UMeshComponent* Mesh;
    float RateOfFire;
    UParticleSystem* MuzzleParticles;
    UParticleSystem* TracerParticles;
    USoundCue* FireSound;
    float MinTracerDistance;
    float TracerSpeed;

    void SetMesh(UMeshComponent* Mesh);
    void OnWeaponFireEnded();
    void OnWeaponFired(const FVector& Location);
}

class UMouseCursorWidget : UFSDUserWidget
{
    EFSDInputSource TargetInput;
    bool bIsHovering;

    void OnUnhover();
    void OnInputSourceChanged(EFSDInputSource Source);
    void OnHover();
}

class UMultiHitscanComponent : UHitscanBaseComponent
{
    FMultiHitscanComponentOnHit OnHit;
    void HitDelegate(const FHitResult& Hit, bool AlwaysPenetrate);
    int32 BulletsPerShot;
    float MuzzleRadius;
    float GeneralImpactAudioVolume;
    TArray<AActor*> DamagedActorCache;
    FMultiHitScanHits Hits;
    TArray<AActor*> ActorsHit;

    void Server_RegisterHit(const FMultiHitScanHits& hitResults);
    void All_ShowHit(const FMultiHitScanHits& hitResults);
}

class UMultiprojectileSpawner : UActorComponent
{
    TArray<FProjectileSpawnData> ProjectileData;
    bool ProjectilesIgnoreEachOther;

    bool GetIsFiring();
    void Fire(const FVector& Velocity, const FVector& Origin);
    UMultiprojectileSpawner* FindMultiProjectileSpawner(AActor* Actor, UDataAsset* RangedAttack);
}

class UMusicLibrary : UDataAsset
{
    TArray<USoundCue*> MusicCues;
    UMusicCategory* Category;
}

class UMusicCategory : UDataAsset
{
    float FadeDuration;
}

class AMusicReplicator : AActor
{
    TArray<FActiveMusicItem> ActiveMusic;

    void OnRep_ActiveMusic();
}

class UMusicManager : UWorldSubsystem
{
    TMap<FMusicHandle, FActiveAudioItem> ActiveAudio;

    void StopHandle(FMusicHandle Handle);
    void StopCategory(UMusicCategory* Category);
    void SetIsPaused(bool IsPaused);
    FMusicHandle PlayLibrary(UMusicLibrary* library);
    FMusicHandle Play(USoundBase* Music, UMusicCategory* Category);
}

class UNewsTextLists : UDataAsset
{
    TArray<FText> Verb;
    TArray<FText> Person;
    TArray<FText> Creature;
    TArray<FText> Resource;
}

class UNewsTextHeadlines : UDataAsset
{
    TArray<FText> MineralTradeTicker;
}

class UNoiseCarveAttackEffect : UAttackEffect
{
    float ExpensiveNoise;
    float CarveDiameterCM;
    float CarveNoiseCM;
    float CarveBurnThicknessCM;
    float CarverOffset;
    FName Socket;
}

class UNoiseFunctionLibrary : UBlueprintFunctionLibrary
{

    void SphericalNoiseMovementComponent(UObject* WorldContextObject, USceneComponent* Component, FVector Center, float Radius, float Speed, float TimeOffset);
    void SphericalNoiseMovementActor(UObject* WorldContextObject, AActor* Actor, FVector Center, float Radius, float Speed, float TimeOffset);
    FVector NoiseSphere3D(UObject* WorldContextObject, float Time, float Radius);
    FVector2D NoiseSphere2D(UObject* WorldContextObject, float Time, float Radius);
    float Noise3D(UObject* WorldContextObject, float X, float Y, float Z);
    float Noise2D(UObject* WorldContextObject, float X, float Y);
    float Noise(UObject* WorldContextObject, float X);
}

class ANoiseVisualizor : AActor
{
    UFloodFillSettings* FloodFillSettings;
    float FreqMultiplier;
    float AmplitudeMultiplier;
    FVector NoiseSize;
    float PointSize;
    float PostNoiseAmplitude;
    int32 Octaves;
    FVector Origin;
    bool ShowNoise;
    bool ShowTerrainNoise;
}

class UNoisyPathfinderComponent : UActorComponent
{
}

class ANoisyPathfinderTest : AActor
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
    TArray<FPathObstacle> obstacles;
    UTunnelSegmentSetting* TunnelSettings;
    UTunnelParameters* TunnelParameters;
    int32 StepSize;
    bool Realtime;
    bool CarvePath;
    bool CanDiagonal;
    UFloodFillSettings* FloodFillSettings;
    ADeepCSGWorld* CSGWorld;
}

class UNoMovementStateComponent : UCharacterStateComponent
{
    bool DisableHeadLightOnEnter;
    bool EnableHeadLightOnExit;
}

class UAttachedStateComponent : UCharacterStateComponent
{
    bool DisableHeadLightOnEnter;
    bool EnableHeadLightOnExit;
    float MaxPitch;
}

class UOxygenComponent : UActorComponent
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
    TSubclassOf<UStatusEffect> NoOxygenStatusEffect;

    void RegisterOxygenEvent(OxygenTriggerDelegate__DelegateSignature OxygenCallback, float oxygenLevel, bool triggerOnOxygenLoss);
    void OnRevived();
    void OnRep_NetworkedOxygen(int32 OldValue);
    void OnRep_IsReplenishingOxygen();
    void OnDeath(UHealthComponentBase* HealthComponent);
}

class UOxygenSourceComponent : UActorComponent
{
    float SourceRadius;
    float CenterOffset;
    FOxygenSourceComponentOnOxygenActivationChanged OnOxygenActivationChanged;
    void OxygenActiveDelegate(bool IsActive);
    UNoOxygenMutator* Mutator;

    void OnTimerTick();
    void OnSourceActivated();
}

class UPlayerCharacterID : UDataAsset
{
    FGuid SaveGameID;
    FName AssetName;
    TSoftClassPtr<APlayerCharacter> Character;
    FString AnalyticsID;
    UPlayerCharacterData* CharacterData;

    TSubclassOf<APlayerCharacter> GetCharacterClass();
    APlayerCharacter* GetCharacter();
}

class UItemID : USavableDataAsset
{
    TSoftClassPtr<AActor> Item;
    UPlayerCharacterID* ItemOwner;
    EItemCategory ItemCategory;

    TSubclassOf<AItem> GetItemClass();
    EItemCategory GetItemCategory();
    AItem* GetItem();
    TSubclassOf<AActor> GetActorClass();
    AActor* GetActor();
}

class UEnemyID : USavableDataAsset
{
}

class UCategoryID : UDataAsset
{
    FGuid SaveGameID;
}

class UActorContextWidget : UUserWidget
{
    AActor* ContextActor;
    UPrimitiveComponent* ContextPrimitive;

    void Update(UPrimitiveComponent* InContextPrimitive);
    void Show(UPrimitiveComponent* InContextPrimitive);
    void ReceiveUpdate(UPrimitiveComponent* InContextPrimitive);
    void ReceiveShow(UPrimitiveComponent* InContextPrimitive);
    void ReceiveContextActorChanged(AActor* InContextActor);
}

class UObjectiveWidget : UUserWidget
{
    FObjectiveWidgetOnObjectiveWidgetUpdated OnObjectiveWidgetUpdated;
    void ObjectiveWidgetDelegate(UObjectiveWidget* InObjectiveWidget);
    UObjective* MissionObjective;
    bool bIsPrimaryObjective;
    FText ObjectiveText;
    FText ObjectiveCounterText;
    UTexture2D* ObjectiveCounterIcon;
    bool bObjectiveCompleted;

    void SetText(const FText& InText, const FText& InCounterText, UTexture2D* InCounterIcon, bool InObjectiveCompleted);
    void SetSimpleText(const FText& InText, bool InObjectiveCompleted);
    void SetObjective(UObjective* InObjective, bool InIsPrimaryObjective);
    void ReceiveObjectiveUpdated();
    void ReceiveObjectiveInitialized();
    void OnObjectiveUpdated(UObjective* InObjective);
    void ObjectiveWidgetDelegate__DelegateSignature(UObjectiveWidget* InObjectiveWidget);
}

class UOptionalObjectiveWidget : UUserWidget
{
    FOptionalObjectiveWidgetOnWidgetUpdated OnWidgetUpdated;
    void OptionalObjectiveWidgetDelegate(UOptionalObjectiveWidget* InOptionalObjectiveWidget);

    void SignalWidgetUpdated();
    void SetObjective(UObjective* obj);
    void OptionalObjectiveWidgetDelegate__DelegateSignature(UOptionalObjectiveWidget* InOptionalObjectiveWidget);
}

class UObjectivesManager : UActorComponent
{
    FObjectivesManagerOnObjectivesCompleted OnObjectivesCompleted;
    void DelegateEvent();
    FObjectivesManagerOnObjectivesChanged OnObjectivesChanged;
    void DelegateEvent();
    FObjectivesManagerOnAllRequiredReturnObjectivesCompleted OnAllRequiredReturnObjectivesCompleted;
    void DelegateEvent();
    UObjective* Objective;
    TArray<UObjective*> SecondaryObjectives;
    bool ObjectivesInitialized;
    bool ObjectivesStarted;
    bool bCheatObjectivesCompleted;

    void OnObjectiveChanged(UObjective* obj);
    UObjective* GetSecondaryObjective();
    UObjective* GetPrimaryObjective();
    void ExitPodDescending();
    void ExitPodArrived();
    void DropPodExited();
}

class UObjectTemperatureComponent : UTemperatureComponent
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
    void OnDeath(UHealthComponentBase* HealthComponent);
}

class UObstructionChecker : USceneComponent
{
    FObstructionCheckerOnObstructionChangedEvent OnObstructionChangedEvent;
    void ObstructionDelegate(float Distance);
    float DistanceToCheck;
    float CheckInterval;
    TArray<FVector> RayOffsets;

    void Timer_Tick();
    void Timer_Result();
    void CheckForObstructions();
}

class AOldZiplineSalvage : AActor
{
    TSubclassOf<AZipLineProjectile> ZiplineProjectileClass;
    FVector RelativeDestinationLocation;

    void OnMatchStarted();
}

class UOptionalUIWidget : UUserWidget
{
    UOptionalUICategory* Category;
    ESlateVisibility VisibleFlag;
    ESlateVisibility HiddenFlag;

    void OnVisibilityChanged(UOptionalUICategory* UICategory, bool IsVisible);
}

class UOutlineComponent : UActorComponent
{
    FOutlineComponentOnOutlineChanged OnOutlineChanged;
    void OutlineChanged(EOutline InOutline);
    EOutline DefaultOutline;
    bool ActiveOnHoldTAB;
    float CustomLaserPointDuration;
    int32 LockCounter;
    EOutline CurrentOutline;
    TArray<UPrimitiveComponent*> OutlinedComponents;
    TArray<UPrimitiveComponent*> ExcludedComponents;
    TWeakObjectPtr<APlayerCharacter> Character;

    void UnlockOutline();
    void ToggleDefaultOutline(bool Visible);
    void SetOutline(EOutline outline);
    void RemoveFromOutline(UPrimitiveComponent* Component);
    void OutlineChanged__DelegateSignature(EOutline InOutline);
    void OnToggleOutline(bool Visible);
    void OnOwnerDeath(UHealthComponentBase* HealthComponent);
    void OnLocalPlayerSet(UPlayerCharacter* PlayerCharacter);
    void OnItemUnequipped(AItem* Item);
    void OnItemEquipped(AItem* Item);
    void LockOutline();
    void EnableActivateOnHoldTab();
    void AddToOutline(UPrimitiveComponent* Component);
    void AddActorToOutline(AActor* Actor);
}

class UOverclockBank : UDataAsset
{
    TMap<UOverclockUpgrade*, USchematic*> Overclocks;
    UItemID* OwningItem;
}

class UOverheatingAggregator : UItemAggregator
{
    FOverheatingAggregatorOnOverheatingProgressChanged OnOverheatingProgressChanged;
    void OverheatingProgressChanged(float Progress);
    FOverheatingAggregatorOnOverheatedChanged OnOverheatedChanged;
    void OverheatedChanged(bool Overheated);
    float HeatLossPerSecond;
    float OverheatedDuration;
    bool bIsOverheated;
    float Temperature;

    void Server_SetTemperature(float NewTemperature);
    void Server_SetIsOverheated(bool NewOverheated);
    void OverheatingProgressChanged__DelegateSignature(float Progress);
    void OverheatedChanged__DelegateSignature(bool Overheated);
    void OnRep_Temperature();
    void OnRep_IsOverheated();
    float GetTemperature();
    float GetOverheatingProgress();
    bool GetIsOverheated();
}

class UParalyzedStateComponent : UCharacterStateComponent
{
    TSoftClassPtr<AActor> CaveLeechClass;
    float CameraArmHeightOffset;
    float CameraArmSpeed;
}

class AParasiteEnemy : UEnemyPawn
{
    USceneComponent* Root;
    USkeletalMeshComponent* Mesh;
    UStaticMeshComponent* Tentacles1;
    UStaticMeshComponent* Tentacles2;
    UOutlineComponent* outline;
    UParticleSystem* deathParticles;
    USoundBase* deathSound;

    void OnSelfDeath(UHealthComponentBase* aHealthComponent);
}

class UPassedOutStateComponent : UCharacterStateComponent
{
    UDialogDataAsset* ReviveShout;
    bool bAllPlayersPassedOut;

    void ReceiveTeamPassedOut();
}

class UPathfinderCollisionComponent : UStaticMeshComponent
{
    bool ActivatePFCollisionAtInit;
    PFCollisionType PFColiType;

    void DisablePFCollision();
    void ActivatePFCollision();
}

class UPathfinderSplineSegmentCollisionComponent : UActorComponent
{
    float Radius;
    PFCollisionType CollisionType;

    void UpdateFromSpline(USplineComponent* SplineComponent, int32 StartIndex);
    void Update(const FVector& SplineStart, const FVector& SplineStartTangent, const FVector& SplineEnd, const FVector& SplineEndTangent);
    void Clear();
}

class APathfinderDebugProbe : AActor
{
    AActor* Dest;
}

class ARaycastDebugProbe : AActor
{
    UTerrainType* TerrainType;
}

class AFindPointKeepingDistanceProbe : AActor
{
    float MinDistance;
    float MaxDistance;
    AActor* Target;
    float IdealTargetDist;
}

class UPathfinderFunctionLibrary : UBlueprintFunctionLibrary
{

    FVector SnapToGrid(UObject* WorldContextObject, const FVector& Origin, DeepPathFinderType pathType, DeepPathFinderSize pathSize, float maxSnapDistance);
    bool IsPathfinderReady(UObject* WorldContextObject);
    FVector FindRandomPositionOnNavmeshAtDistance(UObject* WorldContextObject, const FVector& Origin, float atDistance);
    FVector FindRandomNearbyPositionOnNavmesh(UObject* WorldContextObject, const FVector& Origin, float Radius);
    FVector FindPointAlongPathTo(UObject* WorldContextObject, const FVector& Origin, const FVector& Destination, float atDistance);
}

class APathfinderVehicle : APawn
{
    UDeepPathfinderMovement* PathfinderMovement;
    USkeletalMeshComponent* Mesh;
    UHealthComponent* HealthComponent;
    float Speed;
}

class APatrolBot : UEnemyDeepPathfinderCharacter
{
    UHackingUsableComponent* HackingUsable;
    UPawnSensingComponent* PawnSensing;
    USphereComponent* CollisionSphere;
    USphereComponent* NearTargetSphere;
    UParticleSystemComponent* LaserBeam;
    UParticleSystemComponent* TearingGroundParticles;
    UEnemyComponent* EnemyComponent;
    UDamageComponent* Damage;
    UDamageComponent* BumpDamage;
    UPawnAlertComponent* Alert;
    UPlayerImpactCooldownComponent* ImpactCooldown;
    UAvoidCeilingComponent* CeilingAvoidance;
    UAudioComponent* RollingAudio;
    UAudioComponent* FlyingAudio;
    UProjectileAttackComponent* RollingRangedAttack;
    UProjectileAttackComponent* FlyingRangedAttack;
    UProjectileAttackComponent* MissileAttack;
    float MaxMotionSoundVelThresholdFlying;
    float MaxMotionSoundVelThreshold;
    float MaxTurningMotionSoundVelThreshold;
    bool DebugAudio;
    float HackedAttackMultiplier;
    bool IsLockedOn;
    float DelayAfterLockOn;
    USoundCue* ImpactCue;
    USoundCue* JumpSound;
    USoundCue* StartupAccelerationSound;
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
    UFakeMoverSettings* RollSettings;
    UFakeMoverSettings* JumpSettings;
    UFakeMoverSettings* SpawnRocketsSettings;
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
    AActor* CurrentTarget;

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
    void OnDeath(UHealthComponentBase* aHealthComponent);
    void OnControlStateChanged(EPatrolBotControlState ControlState);
    void OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Jumped();
    bool IsHacked();
    void ImpactSound();
    void EndFireRockets();
    void DisableDrone();
}

class USpiderAnimInstance : UEnemyAnimInstance
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
    UParticleSystem* FootstepParticle;
    USoundCue* FootstepSound;
    FName FootStepLeftBoneName;
    FName FootStepRightBoneName;
    float FootStepParticleCullDistance;
    TMap<UEnemyPlaySoundKey*, USoundCue*> PlaySoundByKeyMap;
    TMap<UEnemySpawnEffectsKey*, UParticleSystem*> SpawnEffectsByKeyMap;
    int32 RandomWalkCycleIndex;
    TArray<FRandomWalkCycleEntry> RandomWalkCycles;
    bool TurnToIdle;
    bool IdleToTurnLeft;
    bool IdleToTurnRight;
    bool TurnToWalk;
    bool WalkToTurnRight;
    bool WalkToTurnLeft;
    bool IsInFakePhysics;

    void SetMeshScale(float newScale);
    void SetDeathAnimation(UAnimSequenceBase* Animation);
    void PlayForcedCycle(float Duration);
}

class UPatrolBotAnimInstance : USpiderAnimInstance
{
    FRotator TurretRotation;
    float Tilt;
    bool Rolling;
    bool Disabled;
    bool FlyingDisable;
    FRotator WheelRotation;
    float CurrentTilt;
    float TiltSpeed;
    float WheelSpeedModifier;
}

class UPawnAffliction : UDataAsset
{
    UTexture2D* Icon;
    FColor IconColor;
    FColor IconColorBG;
    bool bShowPlayerIcon;
    bool bShowOnEnemyHealthbar;
    UPlayerAfflictionOverlay* AfflictionOverlay;
    TArray<TSubclassOf<UAfflictionEffect>> EnemyEffects;
    TArray<TSubclassOf<UAfflictionEffect>> PlayerFirstPersonEffects;
    TArray<TSubclassOf<UAfflictionEffect>> PlayerThirdPersonEffects;
    UDialogDataAsset* PlayerShoutOnBegin;
}

class UAfflictionFunctionLibrary : UBlueprintFunctionLibrary
{

    void PlayEnemyExplosionEffects(UFSDPawn* enemy);
}

class UPawnAfflictionComponent : UActorComponent
{
    FPawnAfflictionComponentOnAfflictionActivatedEvent OnAfflictionActivatedEvent;
    void AfflictionChangeDelegate(UPawnAffliction* Affliction);
    FPawnAfflictionComponentOnAfflictionDeactivatedEvent OnAfflictionDeactivatedEvent;
    void AfflictionChangeDelegate(UPawnAffliction* Affliction);
    TMap<UPawnAffliction*, FPawnAfflictionItem> ActiveAfflictions;
    FAfflictionEntriesArray NetworkedAfflictions;
    TSubclassOf<UFrozenAfflictionEffect> FrozenEffect;
    TSubclassOf<UBurningAfflictionEffect> BurningEffect;
    EFrozenBitsSize EffectSize;
    float BaseEffectScale;
    bool UseDormancy;

    void PushAffliction(UPawnAffliction* Affliction, bool onlyIfNotActive);
    void PopAffliction(UPawnAffliction* Affliction);
    void OnDeath(UHealthComponentBase* HealthComponent);
    bool IsAfflictedBy(UPawnAffliction* Affliction);
    TArray<UPawnAffliction*> GetActiveAfflictions();
}

class UPlayerAfflictionOverlay : UDataAsset
{
    UTexture2D* Texture;
    FLinearColor TextureTint;
    TSubclassOf<UPlayerAfflictionOverlayWidget> WidgetOverride;
    int32 ZOrder;
    TSoftObjectPtr<USoundCue> Audio2D_OnBegin;
}

class UPlayerAfflictionComponent : UPawnAfflictionComponent
{
    FPlayerAfflictionComponentOnShowOverlay OnShowOverlay;
    void OverlayDelegate(UPlayerAfflictionOverlay* Overlay);
    FPlayerAfflictionComponentOnHideOverlay OnHideOverlay;
    void OverlayDelegate(UPlayerAfflictionOverlay* Overlay);
    TMap<UPlayerAfflictionOverlay*, int32> ActiveOverlays;
    TWeakObjectPtr<APlayerCharacter> Character;

    void ShowPlayerOverlay(UPlayerAfflictionOverlay* Overlay);
    void OverlayDelegate__DelegateSignature(UPlayerAfflictionOverlay* Overlay);
    void HidePlayerOverlay(UPlayerAfflictionOverlay* Overlay);
}

class UEnemyPawnAfflictionComponent : UPawnAfflictionComponent
{
}

class UDeepPatherFinderCharacterAfflictionComponent : UPawnAfflictionComponent
{
    ADeepPathfinderCharacter* Character;
}

class UStaticObjectAfflictionComponent : UPawnAfflictionComponent
{
    UStaticMeshComponent* Mesh;
}

class UAnimatedObjectAfflictionComponent : UPawnAfflictionComponent
{
    USkeletalMeshComponent* Mesh;
}

class UPlayerAfflictionOverlayWidget : UUserWidget
{
    bool bOverlayActive;
    UPlayerAfflictionOverlay* Overlay;

    void ReceiveEndOverlay();
    void ReceiveBeginOverlay(UTexture2D* InTexture, FLinearColor InTint);
    void EndOverlay();
    void BeginOverlay(UPlayerAfflictionOverlay* InOverlay);
}

class UPawnAlertComponent : UActorComponent
{
    FPawnAlertComponentOnAlertedFromDamage OnAlertedFromDamage;
    void Delegate();
    bool AutoAlertAI;
    bool ShouldAlertNearby;
    float AlertRadius;

    void StopAutoAlerting();
    void OnPawnSeen(APawn* Pawn);
    void OnHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void OnAlerted();
    void AleartNearby();
}

class UPawnStat : UDataAsset
{
    float StartingValue;
    EPawnStatType PawnStatType;
    EPawnStatType ValueModificationType;
}

class UPawnStatsComponent : UActorComponent
{
    FPawnStatEntriesArray Stats;
    bool UseDormancy;

    void RemoveModifier(UPawnStat* Stat, float Value);
    float GetStatValue(UPawnStat* Stat);
    void ChangeModifier(UPawnStat* Stat, float CurrentValue, float NewValue);
    int32 AddModifier(UPawnStat* Stat, float Value);
}

class UPerkLogic : UActorComponent
{

    void StartLogic(int32 Rank);
    APlayerCharacter* GetCharacter();
    FText GetAdditionalText(int32 Rank);
}

class UPerkDelegateItem : UObject
{
    FPerkDelegateItemOnPerkClaimed OnPerkClaimed;
    void PerkClaimedDelegate(UPerkAsset* Perk, int32 ClaimedTier);
    FPerkDelegateItemOnPerkEquipped OnPerkEquipped;
    void PerkEquipDelegate(UPerkAsset* Perk, UPlayerCharacterID* CharacterClass);
    FPerkDelegateItemOnPerkUnequipped OnPerkUnequipped;
    void PerkEquipDelegate(UPerkAsset* Perk, UPlayerCharacterID* CharacterClass);
    FPerkDelegateItemOnPerkHighlighted OnPerkHighlighted;
    void PerkHighlightedDelegate(UPerkAsset* Perk, bool IsHighlighted);
    FPerkDelegateItemOnChargesUsedChanged OnChargesUsedChanged;
    void PerkIntDelegate(UPerkAsset* Perk, int32 Value);
}

class UPerkSubsystem : UWorldSubsystem
{
    TMap<UPerkAsset*, UPerkDelegateItem*> PerkDelegates;

    UPerkDelegateItem* GetPerkDelegates(UPerkAsset* Perk);
}

class UPerkHUDWidget : UUserWidget
{
    UPerkAsset* PerkAsset;

    void SetPerkAsset(UPerkAsset* InPerk);
    void ReceivePerkAssetChanged();
    AFSDPlayerState* GetFSDPlayerState();
    APlayerCharacter* GetCharacter();
}

class UPerkHUDIconWidget : UPerkHUDWidget
{
    float CoolDownProgress;
}

class UPerkHUDActivationWidget : UPerkHUDWidget
{
    EPerkHUDActivationLocation Location;
}

class UPerkFunctionLibrary : UBlueprintFunctionLibrary
{

    void SplitPerksByUsage(const TArray<UPerkAsset*>& perks, TArray<UPerkAsset*>& OutPassivePerks, TArray<UPerkAsset*>& OutActivePerks);
    TArray<UPerkAsset*> SortPerksByUsage(TArray<UPerkAsset*>& perks);
    void GetPerkEquipSlots(UObject* WorldContext, EPerkUsageType InType, TSubclassOf<UPlayerCharacter> InCharacterClass, int32& OutAvailableSlots, int32& OutUnavailableSlots, int32& OutPromotionLockedSlots);
    TArray<EPerkSlotType> GetPerkEquipSlotLayout(UObject* WorldContext, EPerkUsageType InType, TSubclassOf<UPlayerCharacter> InCharacterClass);
    TArray<UPerkAsset*> GetOwnedPerksByType(UObject* WorldContext, EPerkUsageType InType);
    TArray<UPerkAsset*> GetOwnedPerks(UObject* WorldContext);
    FText FormatRichText(const FText& SourceText, bool UpperCase, const TMap<FString, FString> CharTagMap);
}

class UPerkUsageComponent : UActorComponent
{
    TArray<FPerkUsage> PerkUsageReplicated;

    void Server_MarkPerkUsed(UPerkAsset* Perk);
    void Server_CheatReset();
    void OnRep_PerkUsageReplicated();
}

class UPhotographyStateComponent : UCharacterStateComponent
{
}

class UPickaxeFunctionLibrary : UBlueprintFunctionLibrary
{

    bool RemovePickaxePartFromOwned(UObject* WorldContextObject, const UPickaxePart* part);
    bool IsPickaxePartEquipped(UObject* WorldContextObject, EPickaxePartLocation Location, UPickaxePart* part, UItemID* pickaxeID);
    TArray<UPickaxePart*> GetUnlockedPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category);
    TArray<UPickaxePart*> GetPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category);
    bool GetIsPickAxePartAcquired(UObject* WorldContextObject, const UPickaxePart* InPickaxePart);
    FPickaxeSet GetEquippedPickaxeSet(UObject* WorldContextObject, UItemID* pickaxeID);
    UPickaxePart* GetEquippedPickaxePart(UObject* WorldContextObject, EPickaxePartLocation partLocation, UItemID* pickaxeID);
    void EquipPickaxePart(UObject* WorldContextObject, UPickaxePart* part, EPickaxePartLocation partLocation, UItemID* pickaxeID);
}

class APickaxeItem : AItem
{
    bool QuadDamageCarving;
    FPickaxeItemActiveMiningEvent ActiveMiningEvent;
    void ActiveMiningDelegate(bool success);
    USceneComponent* FP_Root;
    USceneComponent* TP_Root;
    USceneComponent* FP_Scale;
    USceneComponent* TP_Scale;
    UPlayerAnimInstance* FPAnimInstance;
    UPlayerAnimInstance* TPAnimInstance;
    UAnimMontage* FP_EquipAnimation;
    UAnimMontage* TP_EquipAnimation;
    float EquipDuration;
    UItemCharacterAnimationSet* CharacterAnimationSet;
    UDamageComponent* DamageComponent;
    UDamageComponent* SpecialDamageComponent;
    float SpecialCooldown;
    float SpecialCooldownRemaining;
    FCoolDownProgressStyle SpecialCooldownUI;
    int32 RockMiningBonus;
    int32 DirtMiningBonus;
    float DamageRange;
    float DamageRadius;
    TSubclassOf<UStatusEffect> OnDamageEnemySlowdownEffect;
    FGameplayTagContainer WideDamageTrackingTags;
    USoundCue* MiningSound;
    UForceFeedbackEffect* MineRumble;
    UForceFeedbackEffect* PartialMineRumble;
    UForceFeedbackEffect* DamageRumble;
    float GeneralImpactAudioVolume;
    float HitCooldown;
    float MiningDuration;
    float DistanceConsideredSameHit;
    float BlockParticlesScaleFP;
    float BlockParticlesScaleTP;
    EPickaxeState State;
    bool ActiveMiningEnabled;
    int32 MaxActiveMiningCount;
    float ActiveMiningSpeedBoost;
    bool PreventQMining;
    float QMiningExpectedDelay;
    float QMiningInitialDelay;
    float QMiningReducedPlayRatePct;
    double QMiningLastHitTime;
    USoundCue* ActiveMiningSucceedSound;
    USoundCue* ActiveMiningFailedSound;
    bool CanBezerk;
    TSubclassOf<UStatusEffect> BezerkStatusEffect;
    bool PowerAttackEnabled;
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;
    UMaterialInterface* EquippedMaterial;

    void SpecialTargetDamageEffects(const FVector& ImpactPoint, const FVector& ImpactNormal);
    void SetSpecialCoolDownDuration(float newCooldownDuration);
    void Server_TriggerBezerk();
    void Server_SetState(EPickaxeState NewState);
    void Server_RemoveDebrisInstance(FVector_NetQuantize HitPos, int32 DebrisIndex, int32 remappedIndex);
    void Server_HitBlock(FVector_NetQuantize Position, int32 Material, bool removeDebris, bool isSpecial);
    void Server_DoPowerAttack();
    void Server_DigBlock2(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial);
    void Server_DamageTarget(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void RefreshSpecialCooldown();
    void OnRep_State(EPickaxeState oldState);
    void OnLoadoutChanged();
    float GetSpecialCooldownProgress();
    void All_SimulateHitBlock(FVector_NetQuantize Position, int32 materia, bool removeDebris, bool isSpecial);
    void All_SimulateDigDebris(FVector_NetQuantize Position, UParticleSystem* Particles, USoundCue* cue);
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32 Material, float Density, bool isSpecial);
    void All_SimulateDamageTarget(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    void All_DoPowerAttack();
}

class APickaxePreviewActor : AActor
{
    USceneComponent* TP_Root;
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;
    UItemID* ItemID;
    UMaterialInterface* EquippedMaterial;

    void PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart);
    void EquipParts();
}

class UPickaxePart : USavablePrimaryDataAsset
{
    FText Title;
    UPickaxePartItem* Item;
    UItemAquisitionSource* AquisitionSource;
    bool UnlockedFromStart;
    UDLCBase* RequiredDLC;

    EPickaxePartLocation GetPrefferedLocation();
}

class UPickaxePartItem : UObject
{
}

class UPickaxeMaterialPart : UPickaxePartItem
{
    TSoftObjectPtr<UMaterialInterface> Material;
    TSoftObjectPtr<UMaterialInterface> IconMaterial;
}

class UPickaxeMeshPart : UPickaxePartItem
{
    TSoftObjectPtr<UStaticMesh> Mesh;
}

class UPickaxeHeadPart : UPickaxeMeshPart
{
}

class UPickaxeBladePart : UPickaxeMeshPart
{
    bool RestrictedToBackside;
}

class UPickaxeShaftPart : UPickaxeMeshPart
{
}

class UPickaxeHandlePart : UPickaxeMeshPart
{
}

class UPickaxePommelPart : UPickaxeMeshPart
{
}

class UPickaxeSettings : UDataAsset
{
    TMap<UPlayerCharacterID*, TSubclassOf<APickaxePreviewActor>> PickaxePreviewActors;
    UAnimMontage* Salute_FP;
    UAnimMontage* Salute_TP;
    TArray<UPickaxePart*> Parts;
    TMap<UItemID*, FDefaultPickaxeParts> DefaultParts;
}

class UPickaxePartEquip : UInterface
{
}

class UPillarSettings : UDataAsset
{
    TArray<FPillarSegment> PillarSegments;
    FRandRange PointRange;
    FRandRange PointNoiseRange;
    FRandRange PillarRangeScale;
    FRandRange PillarNoiseRangeScale;
    UFloodFillSettings* Noise;
}

class UPillarGenerationComponent : UGenerationComponent
{
    TArray<FVector> Points;
    bool Visible;
    UPillarSettings* PillarSettings;
}

class APillarGenerationItem : AGenerationItem
{
    UPillarGenerationComponent* PillarComponent;
}

class UPilotingStateComponent : UCharacterStateComponent
{
    AActor* Vehicle;

    void Server_MoveRight(float Value);
    void Server_MoveForward(float Value);
    void OnRep_Vehicle();
}

class APipelineBuilderItem : UTrackBuilderItem
{
    UItemPlacerAggregator* SegmentPlacer;
}

class APipelineFinish : AActor
{
    UTrackBuilderConnectPoint* PipelineEndConnection;
    USingleUsableComponent* UsableOrderExtractor;
    TSubclassOf<APipelineExtractorPod> ExtractPodClass;
    APipelineExtractorPod* ExtractorPod;
    bool bPipelineCompleted;

    void ReceivePipelineCompleted();
    void ReceiveExtractorPodSpawned(UPipelineExtractorPod* InExtractorPod);
    void OnRep_PipelineCompleted();
    void OnRep_ExtractorPod();
    void OnExtractorPodStateChanged(ARessuplyPod* InExtractorPod, ERessuplyPodState InState);
    void OnExtractorPodOrdered(UPlayerCharacter* InUser, EInputKeys Key);
    void OnConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    void OnConnectedSegmentActivated(UPipelineSegment* InSegment);
    FVector GetLandingOffset();
}

class APipelineExtractorPod : ARessuplyPod
{
    TWeakObjectPtr<APipelineSegment> ConnectedSegment;
    float TargetRotation;

    void SetTargetRotation(UPipelineSegment* InPipelineSegment);
    void ReceiveConnectedToSegment(UPipelineSegment* InConnectedSegment);
    void OnRep_ConnectedSegment();
    void ExtractorPodOrderedEvent(UPlayerCharacter* InUser);
}

class UPipelineExtractorPodAnimInstance : UAnimInstance
{
    float ConnectionRotation;
    EPipelineExtractorPodAnimState AnimState;
    ERessuplyPodState PodState;
    EPipelineBuildState PipelineState;
    ERefineryState RefineryState;
    float RotationSpeed;
    TWeakObjectPtr<APipelineExtractorPod> Pod;
    TWeakObjectPtr<APipelineSegment> ConnectedSegment;
    TWeakObjectPtr<APipelineStart> PipelineStart;
    TWeakObjectPtr<AFSDRefinery> Refinery;
}

class APipelineSegment : ATrackBuilderSegment
{
    FPipelineSegmentOnPipelineBroken OnPipelineBroken;
    void PipelineSegmentDelegate(UPipelineSegment* InPipelineSegment);
    FPipelineSegmentOnPipelineRepaired OnPipelineRepaired;
    void PipelineSegmentDelegate(UPipelineSegment* InPipelineSegment);
    FPipelineSegmentOnPipelineActivated OnPipelineActivated;
    void PipelineSegmentDelegate(UPipelineSegment* InPipelineSegment);
    FPipelineSegmentOnPipelineStateChanged OnPipelineStateChanged;
    void PipelineStateDelegate(EPipelineBuildState InPipelineState);
    UStaticMesh* StaticMeshUnassembled;
    UStaticMesh* StaticMeshAssembled;
    UStaticMesh* StaticMeshFinal;
    FVector EditorEndLocation;
    TEnumAsByte<ETraceTypeQuery> CarvingTraceType;
    UMaterialInterface* NumberMaterial;
    USingleUsableComponent* RepairSegmentUsable;
    USingleUsableComponent* ActivateSegmentUsable;
    UDroneUseComponent* DroneUsable;
    USimpleHealthComponent* SegmentHealthComponent;
    USplineComponent* MovementSpline;
    USplineComponent* MovementSplineRight;
    USplineComponent* MovementSplineLeft;
    USplineMeshComponent* PipelineMesh;
    USplineMeshComponent* PipelineOuterMesh;
    USkeletalMeshComponent* PipelineCapMesh;
    USkeletalMeshComponent* EndPostMesh;
    UStaticMeshComponent* EndPostMeshStatic;
    UPathfinderSplineSegmentCollisionComponent* PathfinderComponent;
    bool bSegmentBroken;
    float SegmentActivatedProgress;
    EPipelineBuildState PipelineState;
    TWeakObjectPtr<APipelineStart> PipelineStart;
    float MinValidLength;
    float MaxValidLength;
    float TooSharpExtraLength;
    float TooSteepExtraLength;
    float BlockedSphereSize;
    int32 BlockedExtraRaytraceRotationOffset;
    float BlockedExtraRaytraces;
    float BlockedExtraRaytraceDist;
    float BlockedRayTraceSuccesses;

    void UpdateSplineMesh(USplineMeshComponent* InMesh, float InProgress, bool InMoveEndCap);
    void SetSegmentBroken(UPlayerCharacter* InUser, bool InSegmentBroken);
    void SetPipelineNumberMaterial(UMaterialInterface* InNumberMaterial);
    void SetEndPostVisible(bool InVisible);
    void ReceiveSegmentBrokenChanged(bool InSegmentBroken);
    void ReceiveSegmentActivatedProgress(float InProgress);
    void ReceiveSegmentActivated();
    void ReceivePlacementFinished();
    void ReceivePlacementBegin();
    void PipelineStateDelegate__DelegateSignature(EPipelineBuildState InPipelineState);
    void PipelineSegmentDelegate__DelegateSignature(UPipelineSegment* InPipelineSegment);
    void OnRepaired(UPlayerCharacter* InUser);
    void OnRep_SegmentBroken();
    void OnRep_SegmentActivatedProgress();
    APipelineStart* GetPipelineStart();
    APipelineSegment* GetNextPipelineSegment(bool bForward);
    bool GetIsSegmentActivated();
    void CallbackSegmentRepaired(UPlayerCharacter* InUser, EInputKeys Key);
    void CallbackSegmentDestroyed(UHealthComponentBase* InHealth);
    void CallbackSegmentActivatedProgress(float InProgress);
    void CallbackSegmentActivated(UPlayerCharacter* InUser, EInputKeys Key);
    void CallbackPipelineStateChanged(APipelineStart* InPipelineStart, EPipelineBuildState InState);
    void CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
    void CallbackDroneUsed(int32 TimesUsed);
}

class UPipelineSegmentEndPostAnimInstance : UAnimInstance
{
    float AssemblyAnimLength;
    float AssemblyTimeTarget;
    float AssemblyTime;
    bool bAssembling;
}

class APipelineStart : AActor
{
    FPipelineStartOnBuildStateChanged OnBuildStateChanged;
    void PipelineStartStateDelegate(APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    int32 PipelineID;
    UTrackBuilderUsable* PipelineStartUsable;
    EPipelineBuildState BuildState;
    APipelineFinish* PipelineFinish;
    AFSDRefinery* Refinery;
    TArray<TWeakObjectPtr<APipelineSegment>> BrokenSegments;

    void ReceiveBuildStateChanged(EPipelineBuildState InBuildState);
    void PipelineStartStateDelegate__DelegateSignature(APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState);
    void PipelineCompleted(APipelineFinish* InPipelineFinish);
    void OnRep_BuildState();
    void OnNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
    TArray<APipelineSegment*> GetAllPipelineSegments();
}

class UPlaceableInterface : UInterface
{
}

class APlaceableItem : UAnimatedItem
{
    UCapacityHoldingItemAggregator* Capacity;
    UItemPlacerAggregator* ItemPlacer;
    TSubclassOf<AActor> PlacableClass;

    void Server_SpawnItem(FVector Location);
    void ReceiveItemSpawned(AActor* SpawnedActor);
    void OnCarriedAmountChanged(int32 newAmount);
}

class UPlanetZoneSetup : UDataAsset
{
    TArray<UPlanetZone*> PlanetZones;

    UPlanetZone* GetPlanetZoneForBiome(UBiome* Biome);
}

class UPlanetZone : UDataAsset
{
    TArray<UBiome*> Biomes;
    TArray<FRequiredMissionItem> RequiredMissions;
    bool MustBeUnlocked;
    FGuid SaveGameID;

    bool IsUnlocked(UFSDSaveGame* SaveGame);
    FGuid GetSavegameID();
    TArray<UBiome*> GetBiomes();
}

class APlasmaCarbine : UAmmoDrivenWeapon
{
    float RateOfFireBoostOnFullShield;
    bool RemoveShieldOnOverheat;
    bool RemoveShieldOnReload;
    float HeatEffectsThreshold;
    UAnimMontage* FP_CharacterOverheatEndMontage;
    UAnimMontage* TP_CharacterOverheatEndMontage;
    UAnimMontage* WPN_ItemOverheatEndMontage;
    UAnimMontage* FP_CharacterReloadEndMontage;
    UAnimMontage* TP_CharacterReloadEndMontage;
    UAnimMontage* WPN_ItemReloadEndMontage;

    void ApplyShieldDamage();
}

class UPlayerAnimInstance : UAnimInstance
{
    bool IsFirstPerson;
    float WalkTreshhold;
    APlayerCharacter* Character;
    UParticleSystem* DefaultFootstepParticle;
    USoundCue* DefaultFootStepSound;
    UItemCharacterAnimationSet* AnimationSetA;
    UItemCharacterAnimationSet* AnimationSetB;
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
    FVector ControllingEnemyRootOffset;
    FVector ControllingEnemyDirectionAlpha;
    float GliderAnimationLength;
    FGliderAnimSync GliderAnimSync;
    bool IsAllowedToPlayMovementAnim;
    float CropBeard;
    UAnimMontage* ActiveUseMontage;
    UUseAnimationSetting* CurrentUseSetting;
    UAnimMontage* EndUseMontageToPlay;
    float AimDuration;
    float ReviveProgress;
    float ReviveExplicitTime;
    float IdleTimeForInspect;
    float RepeatDealayForInspect;
    ECharacterMoveDirection CharacterMoveDirection;
    float MoveAdjustmentAngle;
    UItemCharacterAnimationSet* CarryAnimationSet;
    UItemCharacterAnimationSet* DefaultAnimationSet;

    bool StopUseMontage(bool stopImmediately);
    void StopInspectWeapon();
    void StartInspectWeapon();
    void SetAiming();
    void PlayUseMontages(UUseAnimationSetting* useSetting);
    bool IsPlayingMontageInGroup(FName GroupName);
    UItemCharacterAnimationSet* GetAnimationSet();
}

class UPlayerFPAnimInstance : UPlayerAnimInstance
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
    UAnimSequence* FP_Idle;
    UAnimSequence* FP_Walk;
    UAnimSequence* FP_Sprint;
    UAnimSequence* FP_JumpStart;
    UAnimSequence* FP_JumpLoop;
    UAnimSequence* FP_JumpLand;
    UAnimSequence* FP_JumpLand_Aim;
    UAnimSequence* FP_Downed;
}

class UPlayerTPAnimInstance : UPlayerAnimInstance
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
    UAnimSequence* DanceSequence;
    bool IsDancing;
    float PickedUpItemBlend;
    float AttachedBodyTurnFactor;
    float AttachedHeadTurnFactor;
    FRotator AttachedBodyRotation;
    FRotator AttachedHeadRotation;
    UBlendSpace1D* TP_LookUpDown;
    UBlendSpace1D* TP_LookUpDown_Aim;
    UBlendSpace1D* A_TP_LookUpDown_Aim;
    UBlendSpace1D* B_TP_LookUpDown_Aim;
    UAnimSequence* TP_JumpLoop;
    UAnimSequence* TP_JumpLoop_Aim;
    UAnimSequence* TP_JumpStart;
    UAnimSequence* TP_JumpStart_Aim;
    UAnimSequence* TP_Sprint;
    UAnimSequence* A_TP_Idle;
    UAnimSequence* B_TP_Idle;
    UAnimSequence* A_TP_Idle_Aim;
    UAnimSequence* B_TP_Idle_Aim;
    UAnimSequence* TP_LookForward;
    UAnimSequence* A_TP_LookForward;
    UAnimSequence* B_TP_LookForward;
    UAnimSequence* A_TP_LookForward_Aim;
    UAnimSequence* B_TP_LookForward_Aim;
    UAnimSequence* A_TP_Walk_Forward;
    UAnimSequence* B_TP_Walk_Forward;
    UAnimSequence* A_TP_Run_Forward;
    UAnimSequence* B_TP_Run_Forward;
    UAnimSequence* A_TP_Walk_Forward_Aim;
    UAnimSequence* B_TP_Walk_Forward_Aim;
    UAnimSequence* A_TP_Run_Forward_Aim;
    UAnimSequence* B_TP_Run_Forward_Aim;
    UAnimSequence* A_TP_Walk_Right;
    UAnimSequence* B_TP_Walk_Right;
    UAnimSequence* A_TP_Run_Right;
    UAnimSequence* B_TP_Run_Right;
    UAnimSequence* A_TP_Walk_Right_Aim;
    UAnimSequence* B_TP_Walk_Right_Aim;
    UAnimSequence* A_TP_Run_Right_Aim;
    UAnimSequence* B_TP_Run_Right_Aim;
    UAnimSequence* A_TP_Walk_Left;
    UAnimSequence* B_TP_Walk_Left;
    UAnimSequence* A_TP_Run_Left;
    UAnimSequence* B_TP_Run_Left;
    UAnimSequence* A_TP_Walk_Left_Aim;
    UAnimSequence* B_TP_Walk_Left_Aim;
    UAnimSequence* A_TP_Run_Left_Aim;
    UAnimSequence* B_TP_Run_Left_Aim;
    UAnimSequence* A_TP_Walk_Back;
    UAnimSequence* B_TP_Walk_Back;
    UAnimSequence* A_TP_Run_Back;
    UAnimSequence* B_TP_Run_Back;
    UAnimSequence* A_TP_Walk_Back_Aim;
    UAnimSequence* B_TP_Walk_Back_Aim;
    UAnimSequence* A_TP_Run_Back_Aim;
    UAnimSequence* B_TP_Run_Back_Aim;
    UAnimSequence* TP_Revived;
    UAnimSequence* TP_Downed;
    UAnimSequence* TP_Downed_Loop;

    void SetOverrideFullBody(bool overrideEnabled);
}

class APlayerCameraDrone : APawn
{
    UPawnMovementComponent* Movement;
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
    TSubclassOf<AActor> VanitySpawnable;
    TSubclassOf<AActor> Flare;
    TSubclassOf<AActor> BounceFlare;
    TSubclassOf<AActor> Spline;
    TSubclassOf<AActor> SplineMesh;

    bool ToggleSplineMeshVisibility();
    void SetRotationalPivotToPlayer();
    void SetFlareLightSettings(float Intensity, float range, float Color);
    bool SetCameraShakeAmount(float Value);
    void SetBounceFlareLightSettings(float Intensity, float range, float Color);
    void SaveLightConfig();
    void ResetFollowVariables();
    void ResetAllLights();
    void OnFlareHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    void LoadLightConfig();
    FVector GetFlareLightSettings();
    UCameraComponent* GetCamera();
    FVector GetBounceFlareLightSettings();
    void CreateHUD();
    void ClearFocusPoint();
    void BeginCountdown();
}

class APlayerCharacter : UCharacter
{
    FPlayerCharacterOnStartedUsingItem OnStartedUsingItem;
    void ItemUseDelegate(AItem* Item);
    FPlayerCharacterOnStoppedUsingItem OnStoppedUsingItem;
    void ItemUseDelegate(AItem* Item);
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
    FPlayerCharacterOnCollectedEverything OnCollectedEverything;
    void CollectedEverythingEvent(FText InMessage);
    FPlayerCharacterOnCollectedSchematic OnCollectedSchematic;
    void SchematicEvent(USchematic* Schematic);
    FPlayerCharacterOnCollectedSkin OnCollectedSkin;
    void SkinEvent(UItemSkin* Skin, UItemID* ItemID);
    FPlayerCharacterOnCollectedDrink OnCollectedDrink;
    void CollectedDrinkDelegate(UDrinkableDataAsset* Drinkable);
    FPlayerCharacterOnCollectedVictoryPose OnCollectedVictoryPose;
    void CollectedVictoryPoseEvent(UVictoryPose* pose, UPlayerCharacterID* characterID);
    FPlayerCharacterOnCollectedPickaxePart OnCollectedPickaxePart;
    void CollectedPickaxePartDelegate(UPickaxePart* PickaxePart);
    FPlayerCharacterOnCollectedVanityItem OnCollectedVanityItem;
    void CollectedVanityItemDeledate(UVanityItem* Item, UPlayerCharacterID* characterID);
    FPlayerCharacterOnCameraModeChanged OnCameraModeChanged;
    void CameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    FPlayerCharacterOnDownCameraTargetChanged OnDownCameraTargetChanged;
    void DownCameraTargetChanged(UPlayerCharacter* Target);
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
    FPlayerCharacterOnDropItem OnDropItem;
    void CharacterDelegate();
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
    FPlayerCharacterOnToggleOutline OnToggleOutline;
    void ToggleOutlineSignature(bool Visible);
    FPlayerCharacterOnToggleMapTool OnToggleMapTool;
    void ToggleMapToolSignature(bool Visible);
    FPlayerCharacterOnToggleScanTool OnToggleScanTool;
    void ToggleMapToolSignature(bool Visible);
    FPlayerCharacterOnDepthChanged OnDepthChanged;
    void DepthSignature(int32 Depth);
    FPlayerCharacterOnCharacterStateChanged OnCharacterStateChanged;
    void OnCharacterStateChangedSignature(ECharacterState NewState);
    FPlayerCharacterOnCharacterDeathChange OnCharacterDeathChange;
    void OnCharacterDeathChangeSignature(UPlayerCharacter* Character);
    FPlayerCharacterOnDamagedEnemy OnDamagedEnemy;
    void DamagedEnemyEvent(const InterfaceProperty& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
    FPlayerCharacterOnLaserPointerEvent OnLaserPointerEvent;
    void LaserPointerEvent(const FLaserPointerTarget& HitInfo);
    FPlayerCharacterOnSecondaryLaserPointerEvent OnSecondaryLaserPointerEvent;
    void LaserPointerSecondary(AActor* aTarget, const FVector& aTargetLocation);
    FPlayerCharacterOnSaluteEvent OnSaluteEvent;
    void SaluteEvent();
    FPlayerCharacterOnPlayerShout OnPlayerShout;
    void OnPlayerShoutEvent(UPlayerCharacter* ShoutingPlayer);
    FPlayerCharacterOnBoscoSalute OnBoscoSalute;
    void OnPlayerShoutEvent(UPlayerCharacter* ShoutingPlayer);
    FPlayerCharacterOnRevivedEvent OnRevivedEvent;
    void CharacterDelegate();
    FPlayerCharacterOnReviveCallEvent OnReviveCallEvent;
    void ReviveCallEvent(AActor* ReviveTarget);
    FPlayerCharacterOnRevivedOtherCharacter OnRevivedOtherCharacter;
    void PlayerCharacterEvent();
    FPlayerCharacterOnHeadlightOnChanged OnHeadlightOnChanged;
    void HeadlightOnChangedEvent(bool IsOn);
    FPlayerCharacterOnCallDonkey OnCallDonkey;
    void OnCallDonkeySignature();
    FGameplayTagContainer GameplayTags;
    UZipLineStateComponent* ZipLineStateComponent;
    TArray<TSubclassOf<AActor>> EscapableGrabberEnemies;
    FPlayerCharacterOnEnemyStartedTracking OnEnemyStartedTracking;
    void CharacterTrackingDelegate(AActor* InTrackingEnemy);
    FPlayerCharacterOnEnemyEndedTracking OnEnemyEndedTracking;
    void CharacterTrackingDelegate(AActor* InTrackingEnemy);
    FPlayerCharacterOnKilledGrabber OnKilledGrabber;
    void KilledGrabber(AActor* Grabber);
    FPlayerCharacterOnPerkActivationTimerFinished OnPerkActivationTimerFinished;
    void OnPerkActivationTimerFinished();
    UPerkHUDActivationWidget* BoundPerkActivationW;
    float PerkActivationTimer;
    FPlayerCharacterOnCanEscapeGrabberChanged OnCanEscapeGrabberChanged;
    void CanEscapeGrabberDelegate(bool bCanEscape);
    TSubclassOf<AActor> GrabbedByClass;
    USoundCue* PowerAttackRefreshedSound;
    FPlayerCharacterOnCoolDownProgress OnCoolDownProgress;
    void CoolDownProgressDelegate(UObject* CoolDownObject, const FCoolDownProgressStyle& Style, float Progress);
    bool bIsBeingBittenByCaveLeech;
    UWidgetInteractionComponent* WidgetInteraction;
    TArray<FPlatformComponent> PlatformComponentClasses;
    FDownCameraSettings DownCameraSettings;
    TArray<TWeakObjectPtr<AShieldGeneratorActor>> ActiveShieldGenerators;
    FGuid SaveGameID;
    FVector EstimatedVelocity;
    FHoldButton FlareHeadlightButton;
    FHoldButton CycleItemButton;
    FHoldButton ToggleHUDButton;
    float EquipLaserpointerHoldDuration;
    bool IsPressingMovementInputKey;
    UPlayerCharacterID* characterID;
    TSoftClassPtr<ATutorialManager> TutorialManagerType;
    TSoftClassPtr<ATutorialManager> TutorialManagerSpacerig;
    USkeletalMeshComponent* FPMesh;
    UCameraComponent* FirstPersonCamera;
    USceneComponent* FirstPersonRoot;
    UActorTrackingComponent* ActorTracking;
    UCharacterIntoxicationComponent* IntoxicationComponent;
    UMissionStatsCollector* MissionStatsCollector;
    USpringArmComponent* ThirdPersonSpringArm;
    UCameraComponent* ThirdPersonCamera;
    UPointLightComponent* ThirdPersonLight;
    USpringArmComponent* FollowSpringArm;
    UCameraComponent* FollowCamera;
    UCameraComponent* DownCamera;
    UCharacterCameraController* CameraController;
    UPlayerHealthComponent* HealthComponent;
    UCharacterSightComponent* SightComponent;
    UInventoryComponent* InventoryComponent;
    UCharacterUseComponent* UseComponent;
    USingleUsableComponent* UsableComponent;
    UOutlineComponent* OutlineComponent;
    UTrailComponent* TrailComponent;
    UCharacterRecoilComponent* RecoilComponent;
    UStatusEffectsComponent* StatusEffectsComponent;
    UPawnStatsComponent* PawnStatsComponent;
    UPlayerAfflictionComponent* PawnAfflictionComponent;
    UPlayerAttackPositionComponent* AttackerPositioningComponent;
    UCommunicationComponent* CommunicationComponent;
    UPlayerTemperatureComponent* TemperatureComponent;
    UPlayerReactiveTerrainTrackerComponent* ReactiveTerrainTracker;
    UInstantUsable* TrackGrindUsableComponent;
    float RunningSpeed;
    float RunBoost;
    float RunBoostChargeTime;
    USoundCue* RunBoostActivationSound;
    UParticleSystem* RunBoostParticles;
    UPawnAffliction* RunBoostAffliction;
    UPhysicsAsset* HangingPhysicsAsset;
    float HangingSimulationBlend;
    bool IsPlayableCharacter;
    UAudioComponent* SprintSoundComponent;
    USoundCue* SpringSound;
    FAnalogAimSettings AimSettings;
    float DownedCameraMinPitch;
    float DownedCameraMaxPitch;
    float TurnToFaceScannerAngularSpeed;
    float CarryingMovementSpeedPenalty;
    float CarryingMaxFallVelocity;
    float MaxThrowProgress;
    float MaxThrowHoldDuration;
    float CarryingThrowMinForce;
    float CarryingThrowMaxForce;
    TSubclassOf<UStatusEffect> CarryingThrowingStatusEffect;
    float ThrowCarriableProgress;
    TMap<uint8, UCharacterStateComponent*> CharacterStates;
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    UCharacterStateComponent* ActiveCharacterState;
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
    TSubclassOf<UStatusEffect> DashStatusEffect;
    float ForwardInput;
    float RightInput;
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
    bool IsStandingDown;
    bool InDanceRange;
    bool IsDancing;
    float DanceStartTime;
    UFSDAchievement* HappyFeetAchievement;
    int32 DanceMove;
    ECharacterCameraMode CameraMode;
    bool IsInCharacterSelectionWorld;
    float IdleTime;
    UAnimMontage* FPDrinkSalute;
    UAnimMontage* TPDrinkSalute;
    UDialogDataAsset* SaluteShout;
    UDialogDataAsset* DrinkShout;
    UAnimMontage* CurrentSaluteMontage;
    TArray<UMaterialInterface*> CachedMaterials;
    bool BlockTrackGrindOnLanded;
    FHeroInfo HeroInfo;
    FString SteamClassID;
    UMaterialInstanceDynamic* RadarMaterialInstance;
    int32 RadarMaterialAngleParameterIndex;
    FVector LastUpdateVisibiltyPos;
    FVector SpawnLocation;
    UFSDPhysicalMaterial* FallbackPhysicalMaterial;
    bool ClientReady;
    UCharacterStateComponent* NextCharacterState;
    bool PlayerIsLeavingInDroppod;
    bool CanInstantRevive;
    bool HasInitializedPerks;
    UCharacterVanityComponent* CharacterVanity;
    FCameraSpringSettings CameraSpringSettings;

    void UseZipLine(AZipLineProjectile* ZipLine, const FVector& Start, const FVector& End);
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
    void StartPerkActivation(UPerkHUDActivationWidget* PerkActivationWidget, float HoldTime);
    UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, float PriorityOverride, FName AttachPointName, FVector Location, FRotator Rotation, uint8 LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    UAudioComponent* SpawnSoundAtLocation(USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy, bool SendVibration);
    UAudioComponent* SpawnSound2D(USoundBase* Sound, float PriorityOverride, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy, bool SendVibration);
    void ShowSimpleHoldProgress(UPlayerController* PlayerController, const FText& InDescription, float InProgress);
    void SetStandingDown(bool standingDown);
    void SetRadarMaterialInstance(UMaterialInstanceDynamic* matInstance);
    void SetOutsideShieldGenerator(UShieldGeneratorActor* Shield);
    void SetIsCharacterSelectionModel();
    void SetInsideShieldGenerator(UShieldGeneratorActor* Shield);
    void SetInCharacterSelectionWorld();
    void SetHeadLight(bool On);
    void SetFallbackPhysicalMaterial(UFSDPhysicalMaterial* PhysMat);
    void SetCameraMode(ECharacterCameraMode NewCameraMode);
    void SetAttached(USceneComponent* AttachTo, bool DelayUntilLanded);
    void Server_TriggerDash();
    void Server_ThrowCarriedItem(FVector_NetQuantize force);
    void Server_StartSalute(UAnimMontage* startSalute);
    void Server_Shouted();
    void Server_SetUsing(bool characterIsUsing);
    void Server_SetRunning(bool characterIsRunning);
    void Server_SetRunBoostActive(bool IsActive);
    void Server_SetIsThrowingCarriable(bool isThrowing);
    void Server_SetIsPressingMovementInput(bool aIsPushingInput);
    void Server_SetIsJumpPressed(bool InJumpPressed);
    void Server_SetDispenserReward(AEventRewardDispenser* Dispenser, USchematic* Reward);
    void Server_SetClientReady();
    void Server_InstantRevive(UPlayerCharacter* ReviveTarget, EInputKeys Key);
    void Server_EscapeFromGrabber();
    void Server_CancelThrowingCarriable();
    void Server_CallDonkey();
    void Server_AddImpulseToActor(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse);
    void Server_AddImpulse(const FVector_NetQuantizeNormal& Direction, float force);
    void SendLevelUpStatistics(const int32 currentRank);
    void ReviveProgress(float Progress);
    void RequestChangeInGravityScale(float newGravityScale);
    void RejectInvite();
    void ReceiveOnHeadlightOn();
    void ReceiveEscapedFromGrabber();
    void Receive_ShowFieldMedicInstantReviveEffects();
    void PrepareForEndScreen();
    void PilotVehicle(AActor* Vehicle);
    void Paralyze(AActor* ParalyzedBy);
    void OpenChat();
    void OnResourceFull(UCappedResource* Resource);
    void OnRep_IsStandingDown();
    void OnRep_IsDancing();
    void OnRep_HeadLightOn();
    void OnRep_DanceMove();
    void OnRep_CharacterState(UCharacterStateComponent* oldState);
    void OnPerkActivationFinished();
    void OnItemEquipped(AItem* Item);
    void OnCharacterUsed(UPlayerCharacter* User, EInputKeys Key);
    void OnCharacterBeginUse(UPlayerCharacter* User, EInputKeys Key);
    void MouseWheelUp();
    void MouseWheelDown();
    bool LockIfState(ECharacterState LockIf, ECharacterState LockTo, bool canMoveAndAim);
    void KilledGrabber__DelegateSignature(AActor* Grabber);
    void JumpRelease();
    void JumpPress();
    void ItemUseDelegate__DelegateSignature(AItem* Item);
    bool IsWithinDistance(AActor* Source, float Distance);
    bool IsWalking();
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
    bool IsDown();
    bool IsAlive();
    void IgnoreInvite();
    bool HasBeenRevived();
    UTrailComponent* GetTrailComponent();
    UPlayerTPAnimInstance* GetTPAnimInstance();
    float GetTimeSinceLastRevival();
    ECharacterState GetPreviousState();
    AFSDPlayerState* GetPlayerState();
    FString GetPlayerName();
    AFSDPlayerController* GetPlayerController();
    UInventoryList* GetInventoryList();
    FText GetHeroSwitchToMessage();
    FText GetHeroName();
    UTexture2D* GetHeroIcon();
    FLinearColor GetHeroColor();
    UPlayerFPAnimInstance* GetFPAnimInstance();
    AItem* GetEquippedItem();
    float GetDownTime();
    APlayerCharacter* GetDownCameraTarget();
    USceneComponent* GetDownCameraRotationPoint();
    USceneComponent* GetDownCameraAttachPoint();
    ECharacterState GetCurrentState();
    float GetClassXP();
    UCharacterVanityComponent* GetCharacterVanity();
    UCharacterStateComponent* GetCharacterStateComponent(ECharacterState State);
    float GetBeginRevivedProgress();
    FString GetAnalyticsClass();
    FRotator GetAimRotation();
    FVector GetActorGroundLocation();
    TArray<AShieldGeneratorActor*> GetActiveShieldGenerators();
    UPlayerAnimInstance* GetActiveAnimInstance();
    void ForceIsPressingMovementInputKey();
    void FirePressedDelegate__DelegateSignature();
    void ExitVehicle();
    void CycleItemUp();
    void CycleItemReleased();
    void CycleItemPressed();
    void CycleItemDown();
    void ConsumeCycleItemButton();
    void Client_TargetDamaged(UObject* Health, float Damage, float DamageModifier, bool IsWeakPoint, bool IsRadial);
    void Client_AddImpulse(const FVector_NetQuantizeNormal& Direction, float force);
    void CheckWithoutAPaddleAchievement();
    void CheatRevive();
    void CheatGodMode();
    void CharacterTrackingDelegate__DelegateSignature(AActor* InTrackingEnemy);
    void ChangeState(ECharacterState NewState);
    void ChangeIfDifferentState(ECharacterState NewState);
    void CanEscapeGrabberDelegate__DelegateSignature(bool bCanEscape);
    bool CanEscapeFromGrabber();
    void CallDonkeyReleased();
    void CallDonkeyPressed();
    void BP_OnUpdateMeshes();
    void BP_OnControllerReady();
    void AnnounceSchematicCollected(USchematic* InSchematic);
    void All_StartSalute(UAnimMontage* saluteMontage);
    void All_ShowImpactEffects(UParticleSystem* Particles, FVector_NetQuantize Location, FVector_NetQuantizeNormal Orientation);
    void All_ShowFieldMedicInstantReviveEffects();
    void AddImpulseToActor(AFSDPhysicsActor* Target, FVector_NetQuantize Impulse, FVector_NetQuantize Location, FVector_NetQuantize AngularImpulse);
    void AddImpulseFromVector(const FVector& Vector);
    void AddImpulseFromDirectionAndForce(const FVector& Direction, float force);
    float AddClassXP(float Amount);
    void AcknowledgeCharacterState(ECharacterState eState);
    void AcceptInvite();
}

class UPlayerCharacterFunctionLibrary : UBlueprintFunctionLibrary
{

    bool SetPlayerVoiceMuted(UObject* WorldContextObject, UFSDPlayerState* PlayerState, bool Mute, bool TrySystemWide, int32 localUserNum);
    bool IsPlayerVoiceMuted(UObject* WorldContextObject, UFSDPlayerState* PlayerState, int32 localUserNum);
    APlayerCharacter* GetRandomPlayer(UObject* WorldContextObject, bool MustBeAlive, bool MustNotBeParalyzed);
    APlayerCharacter* GetNearestVisiblePlayer(AActor* From, float MaxDistance, bool MustBeAlive, bool MustNotBeParalyzed);
    APlayerCharacter* GetNearestPlayerToPosition(UObject* WorldContextObject, FVector Position, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly);
    APlayerCharacter* GetNearestPlayerFrom(UObject* WorldContext, FVector From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly);
    APlayerCharacter* GetNearestPlayer(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly);
}

class UPlayerHealthComponent : UHealthComponent
{
    FPlayerHealthComponentOnFullHealthCannotHeal OnFullHealthCannotHeal;
    void FullHealthSignature();
    FPlayerHealthComponentOnHealedFromCrystalEvent OnHealedFromCrystalEvent;
    void FullHealthSignature();
    FPlayerHealthComponentOnHealthRegeneratingChanged OnHealthRegeneratingChanged;
    void HealthRegeneratingChanged(bool isRegenerating);
    FPlayerHealthComponentOnPlayerHit OnPlayerHit;
    void HitSig(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    float MaxHealth;
    float MaxArmor;
    float ArmorDamage;
    float ReviveHealthReturnRatio;
    float ReviveArmorReturnRatio;
    float HealthPerCrystalVolume;
    FHealthRegenerationParams HealthRegeneration;
    UCurveFloat* ArmorRegenCurve;
    float ShieldRegenDelay;
    APlayerCharacter* Character;
    UParticleSystem* GenericImpactParticles;
    UParticleSystem* ShieldLinkEffect;
    FAudioWithCooldown AudioFriendlyFire;
    UParticleSystemComponent* ShieldLinkInstance;
    float InvulnerabilityDuration;
    float ReviveInvulnerabilityTime;
    UPlayerDamageTakenMutator* DamageTakenMutator;
    TSubclassOf<UStatusEffect> IronWillStatusEffectClass;
    UStatusEffect* IronWillStatusEffect;
    bool IronWillActive;
    float IronWillTimeToActivate;

    UStatusEffect* SetIronWillStatusEffect(TSubclassOf<UStatusEffect> steClass);
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
    void Client_OnFriendlyFire(AController* EventInstigator, AActor* DamageCauser);
    void Client_HealthFullCannotHeal();
    bool CanActivateIronWill();
}

class UPlayerImpactCooldownComponent : UActorComponent
{
    float CoolDownTime;

    bool CheckCanImpact(AActor* Actor);
}

class UPlayerMovementComponent : UCharacterMovementComponent
{
    bool DebugFastMove;
    USoundBase* SlidingOnIceSound;
    float LedgeClimbZVelocity;
    float MovementPenalty;
    APlayerCharacter* Character;
    TWeakObjectPtr<UCharacterStateComponent> CurrentPhysUpdateState;

    void RemoveGravityModifier(AActor* SourceActor);
    void AddGravityModifier(AActor* SourceActor, float effect);
}

class UPlayerProximityTracker : UActorComponent
{
    float MaxDistanceBetweenPlayers;
    float PlayerSpheresUpdateRatePerSecond;
    TArray<FPlayerSphere> PlayerSpheres;
    TArray<FProximityTriggerItem> LocalPlayerProximityTriggers;
    TArray<FProximityTriggerItem> AnyPlayerProximityTriggers;

    void Receive_RegisterForLocalPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const PlayerProximityDelegate__DelegateSignature& proximityCallback, bool triggerOnlyOnce);
    void Receive_RegisterForAnyPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const PlayerProximityDelegate__DelegateSignature& proximityCallback, bool triggerOnlyOnce);
    FPlayerSphere GetPrimarySphere();
    TArray<FPlayerSphere> GetPlayerSpheres();
}

class UPlayerRejoinState : UActorComponent
{

    void Server_Reset();
    void Server_AddIntValue_Internal(const FGuid& ItemKey, const FName& ValueKey, int32 Value);
    void Server_AddFloatValue_Internal(const FGuid& ItemKey, const FName& ValueKey, float Value);
    void Client_SetValues(const TArray<FRejoinFloat>& floatValues, const TArray<FRejoinInt>& intValues);
}

class UResourcesComponent : UActorComponent
{
    FResourcesComponentOnResourceChanged OnResourceChanged;
    void ResourceChangedSignature(UCappedResource* Resource, float Amount);
    FResourcesComponentOnResourceIncreased OnResourceIncreased;
    void ResourceAddedSignature(UCappedResource* Resource, float Amount);
    FResourcesComponentOnResourceFull OnResourceFull;
    void ResourceFullSignature(UCappedResource* Resource);
    FResourcesComponentOnResourceAdded OnResourceAdded;
    void ResourceAdded(UCappedResource* Resource);
    TArray<UCappedResource*> Resources;
    float ResourceCap;

    void ResourceIncreased(UCappedResource* Resource, float Delta);
    void ResourceFull(UCappedResource* Resource);
    void ResourceChanged(UCappedResource* Resource, float currentAmount);
    void OnRep_Resources();
    int32 GetXPFromResourceMap(const TMap<UResourceData*, float>& Resources);
    int32 GetXpFromMining();
    TMap<UResourceData*, float> GetSeparateResourcesFromMap(const TMap<UResourceData*, float>& Resources);
    UCappedResource* GetResource(UResourceData* Data, bool createIfAmountIsZero);
    float GetCapacityPct();
    TArray<UCappedResource*> GetAllResources();
}

class UPlayerResourceComponent : UResourcesComponent
{

    UPlayerResourceComponent* GetFromPlayer(UPlayerCharacter* PlayerCharacter);
}

class UPlayerStatsComponent : UActorComponent
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
    TSubclassOf<APlayerCharacter> LastPlayedClass;
    FEndMissionResult EndMissionResult;
    FPlayerStatsComponentOnEndMissionResultReady OnEndMissionResultReady;
    void EndMissionResultDelegate(const FEndMissionResult& Result);

    void SendMissionAnalytics(bool trackMorkite);
    void SendEndMissionResult(const FEndMissionResult& Result);
    void OnResourceMined(UCappedResource* Resource, float Amount);
    void OnRep_EndMissionResult();
    bool IsEndMissionResultReady();
    bool GetSurvivedInPod();
    void EndMissionResultDelegate__DelegateSignature(const FEndMissionResult& Result);
}

class UPlayerTemperatureComponent : UTemperatureComponent
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
    TSubclassOf<UStatusEffect> OnDefrostedStatusEffect;
    float NormalTemperature;
    float CurrentTemperature;
    float TargetTemperature;
    int8 TemperatureChangeSpeed;
    float DefrostProgress;
    bool barVisible;
    APlayerCharacter* Character;
    EPlayerTemperatureState TemperatureState;

    void SetNormalTemperature();
    void SetFrozenTemperature();
    void OnRep_TemperatureState(EPlayerTemperatureState oldState);
    void OnRep_TemperatureChangeSpeed(int16 OldSpeed);
    void OnRep_DefrostProgress();
    void OnRep_CurrentTemperature(float OldTemperature);
    void OnDeath(UHealthComponentBase* Health);
    int32 GetTemperatureChangedSpeed();
    float GetDefrostProgress();
    float GetCurrentTemperatureNormalized();
    void Defrost(float Amount);
}

class APlayerTriggerBox : UTriggerBox
{
    FPlayerTriggerBoxOnPlayerEntered OnPlayerEntered;
    void TriggerBoxPlayerEvent(UPlayerCharacter* Player);
    FPlayerTriggerBoxOnPlayerExited OnPlayerExited;
    void TriggerBoxPlayerEvent(UPlayerCharacter* Player);
    FPlayerTriggerBoxOnAllPlayersEntered OnAllPlayersEntered;
    void TriggerBoxEvent();
    FPlayerTriggerBoxOnAllPlayersExited OnAllPlayersExited;
    void TriggerBoxEvent();
    TArray<APlayerCharacter*> PlayersInside;

    void TriggerBoxPlayerEvent__DelegateSignature(UPlayerCharacter* Player);
    void TriggerBoxEvent__DelegateSignature();
    bool IsAnyPlayerInside(bool excludingDeadPlayers);
    void BP_OnPlayerExited(UPlayerCharacter* Player);
    void BP_OnPlayerEntered(UPlayerCharacter* Player);
    void BP_OnAllPlayersExited();
    void BP_OnAllPlayersEntered();
    bool AreAllPlayersInside(bool excludingDeadPlayers);
}

class UPlayerTriggerComponent : UActorComponent
{
    FPlayerTriggerComponentOnTriggerBeginEvent OnTriggerBeginEvent;
    void PlayerTriggerDelegate();
    FPlayerTriggerComponentOnTriggerEndEvent OnTriggerEndEvent;
    void PlayerTriggerDelegate();
    UPrimitiveComponent* collider;

    void SetCollider(UPrimitiveComponent* collider);
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}

class APLSTester : AActor
{
    int32 PLSSeed;
    int32 MissionSeed;
    int32 GlobalSeed;
    int32 GlobalMissionIndex;
    UMissionComplexity* limitComplexity;
    UMissionDuration* limitDuration;
    UMissionMutator* Mutator;
    TArray<UMissionWarning*> Warnings;
    UBiome* Biome;
    UMissionTemplate* MissionTemplate;
    UMissionTemplate* CustomMissionTemplate;
    UDifficultySetting* OverrideDifficulty;
    int32 SimulatePlayerCount;
    FText CustomMissionName;
}

class ADeepDiveTester : AActor
{
    UBiome* Biome;
    int32 Seed;
    EMissionStructure MissionStructure;
    TArray<FDeepDiveTesterItem> Stages;
}

class APostProcessingManager : AActor
{
    TArray<TWeakObjectPtr<AFSDPostProcessingActor>> RegisteredActors;
    TArray<FPostProcessingBlendable> CurrentBlendables;
    TArray<UMaterialInstanceDynamic*> Materials;
}

class UPresenceSubSystem : UGameInstanceSubsystem
{
    UDiscordWrapper* DiscordWI;
    UCommunityGoalWrapper* CommunityWI;
}

class UProceduralController : UActorComponent
{

    void Server_RequestTunnelData();
    void SendTunnelData();
    void SendRoomData();
    void SendRequestedPLSData();
    void SendRequestedCarverData(EDebrisItemPass pass);
    void RequestPLSData();
    void RequestCarverData(EDebrisItemPass pass);
    void ReceivedTunnelData(const TArray<FTunnelNode>& Tunnels);
    void ReceivedRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& obstacles);
    void Client_SendTunnelData(const TArray<FTunnelNode>& Tunnels);
    void Client_SendRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& obstacles);
    void Client_RecieveCarverSizes(int32 pass, int32 carverCount);
    void Client_ReceivePLSLevelCarver(int32 pass, const FLevelGenerationCarverLists& levelCarvers);
    void Client_ReceivePLSInfluencers(const FGeneratedInfluenceSets& influenceSet);
    void Client_ReceivePLSDebris(const TArray<FGeneratedDebrisItem>& levelDebris);
}

class UProceduralObjectColliders : UActorComponent
{
}

class UProceduralSettings : UDataAsset
{
    URoomDecorationObject* MiningpodCalldownLocationDecoration;
}

class UCaveInfluencer : UDataAsset
{
}

class UProceduralTunnelComponent : UActorComponent
{
    UTunnelParameters* TunnelParameters;
    bool CreateDirt;
    UCaveInfluencer* DirtInfluencer;
    float DirtInfluencerRange;
}

class UProfilingSubSystem : UWorldSubsystem
{
    TArray<FProfileEntry> Entries;

    float GetTotalTime();
    TArray<FProfileEntry> GetEntries();
    TArray<FProfileCategoryTiming> GetCategoryTimings();
}

class AFakePhysicsProjectile : AProjectileBase
{
    FFakeMoverState MoverState;
    FFakeMoveState posVel;
    UFakeMoverSettings* MoveSettings;
    float InitialSpeed;
    float DampOmega;
    float SyncTime;

    void SphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnRep_PosVel(const FFakeMoveState& posVel);
}

class UProjectileAttack : UObject
{
    FFloatInterval Delay;
    bool TriggerOnEvent;
    FFloatInterval HorizontalAngleOffset;
    FFloatInterval VerticalAngleOffset;
    FName OverrideSocketName;
}

class UNormalProjectileAttack : UProjectileAttack
{
    TSubclassOf<AProjectile> Projectile;
    float RandomAngle;
}

class UBallisticProjectileAttack : UProjectileAttack
{
    TSubclassOf<AProjectile> Projectile;
    float ProjectileArc;
    float Gravity;
}

class UProjectileAttackBaseComponent : UAttackBaseComponent
{
    TArray<UProjectileAttack*> Projectiles;
    TArray<UAnimMontage*> Montages;
    FName SocketName;
    bool UseSocketForRotation;
    bool ProjectilesIgnoreEachOther;
    FProjectileAttackBaseComponentOnAttackStartedEvent OnAttackStartedEvent;
    void ProjectileAttackDelegate();
    FProjectileAttackBaseComponentOnProjectileFiredEvent OnProjectileFiredEvent;
    void ProjectileAttackDelegate();
    FProjectileAttackBaseComponentOnAttackEndedEvent OnAttackEndedEvent;
    void ProjectileAttackDelegate();

    bool TriggerMontage(AActor* Target);
    UAnimMontage* SelectMontage();
    void OnPerformAttack();
    void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
    void MulticastProjectileFired();
    void CancelMontage();
}

class UProjectileAttackComponent : UProjectileAttackBaseComponent
{
    bool ManualyComplete;

    void AddAttackMontage(UAnimMontage* attackMontage);
}

class UExplosionBaseComponent : UActorComponent
{
    float CarveDiameterCM;
    float CarveNoiseCM;
    float CarveBurnThicknessCM;
    float CarveNormalOffsetCM;
    float CarveNormalSqueeze;

    void DamageOnlyFromHit(const FHitResult& HitResult, UDamageComponent*& DamageComponent);
    void DamageOnly(FVector Location, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UDamageComponent*& DamageComponent);
    void DamageArmorClients(const FHitResult& HitResult, UDamageComponent*& DamageComponent);
    void DamageAndCarveFromHit(const FHitResult& HitResult, UDamageComponent*& DamageComponent);
    void DamageAndCarve(FVector Location, FVector ImpactNormal, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UDamageComponent*& DamageComponent);
    void CarveOnly(FVector Location, FVector ImpactNormal);
}

class UExplosionComponent : UExplosionBaseComponent
{
}

class UProjectileExplosion : UExplosionBaseComponent
{
    FScaledEffect ExplosionEffect;
    USoundCue* ExplosionSound;
    UForceFeedbackEffect* ForceFeedbackEffect;
    UForceFeedbackAttenuation* ForceFeedbackAttanuation;

    void SpawnEffectsFromHit(const FHitResult& Hit);
    void SpawnEffects(FVector Location, FVector Normal);
}

class UProjectileLauncherBaseComponent : UWeaponFireComponent
{
    bool UseSpread;
    float VerticalSpread;
    float HorizontalSpread;
    FProjectileLauncherBaseComponentOnProjectileSpawned OnProjectileSpawned;
    void ProjectileSpawned(AProjectileBase* Projectile);
    TArray<UItemUpgrade*> ProjectileUpgrades;
    float ArcStartAngle;
    bool TransferCharacterVelocityToProjectile;
    bool CameraToMuzzleFireCheck;

    void Server_StopFire();
    void Server_Fire(FVector Origin, FVector_NetQuantizeNormal Direction, FVector_NetQuantizeNormal initialBonusVelocity, AProjectileBase* DormentProjectile, bool notifyClients);
    void ProjectileSpawned__DelegateSignature(AProjectileBase* Projectile);
    void All_ShowHit();
}

class UProjectileLauncherComponent : UProjectileLauncherBaseComponent
{
    TSubclassOf<AProjectileBase> projectileClass;

    void SetProjectileClass(TSubclassOf<AProjectileBase> NewProjectileClass);
}

class UChargedProjectileLauncherComponent : UProjectileLauncherBaseComponent
{
    TSubclassOf<AProjectileBase> NormalProjectileClass;
    TSubclassOf<AProjectileBase> ChargedProjectileClass;
    float ProjectileChangeChargeValue;

    void SetProjectileClassCharged(TSubclassOf<AProjectileBase> NewProjectileClass);
    void SetProjectileClass(TSubclassOf<AProjectileBase> NewProjectileClass);
}

class UPromotionRewardsSettings : UDataAsset
{
    TArray<FClaimableRewardEntry> FirstPromotionRewards;
    TMap<int32, FPromotionRewardsRank> PromotionRanks;
}

class UPromotionRewardsLibrary : UBlueprintFunctionLibrary
{

    bool ClaimPromotionRewards(UObject* WorldContext, UPlayerController* PlayerController, TArray<FClaimableRewardEntry>& OutRewards, bool& OutFirstPromotion);
}

class AProspectorRobot : UEnemyDeepPathfinderCharacter
{
    float WorkingArmSpeed;
    float EnginePowerMultiplier;
    AActor* Target;
    float HeadResponsiveness;
    float HeadSearchSpeed;
    float HeadSearchMaxAngle;
    UMaterialInstanceDynamic* EngineMaterial;
    EProspectorRobotState ProspectorState;

    void SetTarget(AActor* Target);
    void SetArmSpeed(float Speed);
    void OnStateEnd(EProspectorRobotState oldState);
    void OnStateBegin(EProspectorRobotState NewState);
    void OnRep_ProspectorState(EProspectorRobotState oldState);
    bool IsStateActive(EProspectorRobotState State);
    void ChangeState(EProspectorRobotState NewState);
}

class UProspectorAnimInstance : UEnemyAnimInstance
{
    FVector2D TiltResult;
    FVector2D LookingResult;
    EProspectorRobotState ProspectorState;
    float ArmBusyness;
}

class UPushingState : UCharacterStateComponent
{
    UUseAnimationSetting* PushingAnimation;
}

class URadarPointComponent : UActorComponent
{
    FRadarPointComponentOnRemove OnRemove;
    void RadarPointRemovedSignature();
    float PointPriority;
    TSubclassOf<UUserWidget> WidgetClass;

    void MapToRadarPosition(FVector playerPos, FVector playerForward, FVector Pos, bool snap, FVector& radarPos, float& alpha);
}

class UNetworkedRadarPointComponent : URadarPointComponent
{
}

class URagdollManager : UActorComponent
{
    TArray<FRagdollItem> Items;

    void StartRagdoll(AActor* Actor, const TArray<UMaterialInstanceDynamic*>& Materials, float desiredDuration);
}

class ARandomSelectorItem : AGenerationItem
{
    int32 Min;
    int32 Max;
}

class URandRangeFunctionLibrary : UBlueprintFunctionLibrary
{

    bool TryPickRandomText(const TArray<FText>& TextArray, FRandomStream& RandomStream, FText& OutResult);
    FText PickRandomText(const TArray<FText>& TextArray, FRandomStream& RandomStream);
    int32 GetValueFromStream(FIRandRange RandRange, FRandomStream& RandomStream);
    float GetFloatValue(FRandRange RandRange);
    float GetFloatFromStream(FRandRange RandRange, FRandomStream& RandomStream);
}

class URandIntervalFunctionLibrary : UBlueprintFunctionLibrary
{

    float GetFloatValue(const FRandInterval& RandInterval);
}

class URDGComponent : UActorComponent
{
    FRDGComponentOnDetonated OnDetonated;
    void RDGExplodeDelegate();
}

class ARDGLauncher : UAmmoDrivenWeapon
{
    TArray<URDGComponent*> ActiveGrenades;

    void Server_DetonateAll();
    void RegisterGrenade(URDGComponent* Grenade);
}

class UReactiveTerrain : UObject
{

    void Receive_OnActorLeft(UStatusEffectsComponent* StatusEffects);
    void Receive_OnActorEntered(UStatusEffectsComponent* StatusEffects);
}

class UStatusEffectReactiveTerrain : UReactiveTerrain
{
    TSubclassOf<UStatusEffect> StatusEffect;
}

class UReactiveTerrainTrackerComponent : UActorComponent
{
}

class UPlayerReactiveTerrainTrackerComponent : UReactiveTerrainTrackerComponent
{
    UFSDPhysicalMaterial* CurrentPhysicalMaterial;
}

class UPathfinderReactiveTerrainTrackerComponent : UReactiveTerrainTrackerComponent
{
    FRandRange CheckInterval;
    UFSDPhysicalMaterial* CurrentPhysicalMaterial;
    UStatusEffectsComponent* StatusEffectsComponent;
}

class ARecallableActor : UDeepPathfinderCharacter
{
    FRecallableActorOnStateChanged OnStateChanged;
    void RecallableActorStateChanged(URecallableActor* Sender, ERecallableActorState State);
    FRecallableActorOnReturnFinish OnReturnFinish;
    void ReturnedSignature(AActor* Sender, bool Succes);
    FRecallableActorOnRelocateFinished OnRelocateFinished;
    void ReturnedSignature(AActor* Sender, bool Succes);
    float AcceptanceRadius;
    float AutoRecallDistance;
    float RelocateLandingHeight;
    TSubclassOf<AActor> RelocationMarkerType;
    TWeakObjectPtr<AActor> RecallTarget;
    ERecallableActorState State;
    FTransform RelocateTransform;
    bool RelocateLanded;
    TWeakObjectPtr<AActor> RelocationMarker;
    bool bInitialized;

    void SetRecallTarget(AActor* NewTarget);
    void Relocate(FVector NewLocation, FRotator NewRotation);
    void ReceiveOnStateChanged();
    void RecallableActorStateChanged__DelegateSignature(URecallableActor* Sender, ERecallableActorState State);
    void Recall();
    void OnReturnSucceeded();
    void OnReturnFailed();
    void OnRep_State(ERecallableActorState oldState);
    void OnRep_RecallTarget();
    void OnRelocated();
    void OnRecallTargetChanged(AActor* NewTarget);
    void OnPathFinished(bool success);
    void OnMoving();
    void OnMoveRequested();
    void OnMoveFinished(bool returnedHome);
    bool GetIsReturning();
    bool GetIsMovingOrMoveRequested();
    bool GetIsMoving();
    bool GetIsMoveRequested();
    void BeginMove();
}

class ARecallableItem : UAnimatedItem
{
    TSubclassOf<ARecallableActor> ItemType;
    TArray<TWeakObjectPtr<ARecallableActor>> ActiveItems;

    void ServerSpawnItem(const FVector& Location, const FRotator& Rotation);
    void ReceiveOnItemSpawned(URecallableActor* Item);
    void OnRep_ActiveItems();
    void ItemReturnFinished(AActor* Item, bool success);
    bool CanSpawnItem(const FVector& Location, const FRotator& Rotation);
}

class ASentryGun : AActor
{
    FSentryGunOnEnabledChanged OnEnabledChanged;
    void EnabledChanged(bool IsEnabled);
    FSentryGunOnAmmoCountChanged OnAmmoCountChanged;
    void AmmoCountChangedEvent(int32 AmmoCount, int32 Change);
    FSentryGunOnMaxAmmoCountChanged OnMaxAmmoCountChanged;
    void AmmoCountChangedEvent(int32 AmmoCount, int32 Change);
    USkeletalMeshComponent* SentryGunMesh;
    TArray<FSentryGunMuzzleSetup> SentryGunMuzzels;
    TSubclassOf<AProjectile> projectileClass;
    USoundCue* ShootingSound;
    UParticleSystem* MuzzleFlash;
    FTracerData TracerData;
    UParticleSystem* Tracer;
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
    USoundBase* AudioOnTurn;
    FGameplayTagContainer DissallowedTargetTags;
    int32 AmmoCount;
    int32 MaxAmmoCount;
    float Damage;
    float TargetYaw;
    float TargetPitch;
    TWeakObjectPtr<UHealthComponentBase> LastTarget;
    TWeakObjectPtr<UHealthComponentBase> PrioritizedTarget;
    UWeaponFireComponent* WeaponFire;
    UAudioComponent* ShootingAudioComponent;

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
    void Force_Fire(AActor* Target);
    void EnabledChanged__DelegateSignature(bool IsEnabled);
    void AmmoSpent();
}

class ARedeployableSentryGun : ASentryGun
{
    FRedeployableSentryGunOnStateChanged OnStateChanged;
    void OnStateChanged(URedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    FRedeployableSentryGunOnDeployFinished OnDeployFinished;
    void OnDeployFinished();
    FRedeployableSentryGunOnDismantleFinished OnDismantleFinished;
    void OnDismantleFinished();
    FRedeployableSentryGunOnDeployProgressEvent OnDeployProgressEvent;
    void OnDeployProgress(float Progress);
    UActorTrackingComponent* ActorTrackingIcon;
    UOutlineComponent* outline;
    TWeakObjectPtr<APlayerCharacter> SentryGunOwner;
    bool bOutlineAndIconVisible;
    ERedeployableSentryGunState State;
    float PlasmaLineMaxRange;
    TArray<ASentryElectroBeam*> PlasmaLines;
    TSubclassOf<ASentryElectroBeam> PlasmaBeamClass;
    TSubclassOf<AActor> ElectrocutionActorClass;
    AActor* ElectrocutionActor;
    TSubclassOf<AActor> EMPDischargeActorClass;
    float EMPDiscargeCooldown;

    void ToggleOutlineAndIcon(bool Visible);
    void SetSentryGunOwner(UPlayerCharacter* Character);
    void ReceiveOnStateChanged();
    void ReceiveOnSentryGunOwnerChanged();
    void ReceiveOnDismantled();
    void ReceiveOnDismantle();
    void ReceiveOnDeployed();
    void ReceiveOnDeploy();
    void OnStateChanged__DelegateSignature(URedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void OnRep_State(ERedeployableSentryGunState oldState);
    void OnRep_SentryGunOwner();
    void OnElectrocutionActorDestroyed(AActor* Actor);
    void OnDismantleFinished__DelegateSignature();
    void OnDeployProgress__DelegateSignature(float Progress);
    void OnDeployFinished__DelegateSignature();
    bool GetIsDismantled();
    bool GetIsDeployed();
    float GetAnimDuration(USkeletalMeshComponent* Mesh);
    void DismantleFinished();
    void Dismantle();
    void DeployFinished();
    void Deploy();
    void ActivateSpecialAttack();
}

class URefineryObjective : UObjective
{
    FRefineryObjectiveOnRefinerySpawned OnRefinerySpawned;
    void RefineryDelegate(UFSDRefinery* InRefinery);
    TSoftClassPtr<AFSDRefinery> refineryClass;
    TWeakObjectPtr<AFSDRefinery> Refinery;
    ERefineryState RefineryState;
    UDebrisPositioning* RefineryPlacement;
    TSoftClassPtr<AActor> RawMaterialClass;
    UDebrisPositioning* RawMaterialPlacement;
    int32 RawMaterialCount;
    bool bMissionCompleted;
    bool bIsFinalBattle;
    int32 OptionalTunnelRoomID;

    void SpawnWells(AProceduralSetup* setup, const FVector& rigLocation, float minDistanceBetween, const TArray<FVector2D>& minMaxDistancesToRig);
    void RefineryDelegate__DelegateSignature(UFSDRefinery* InRefinery);
    void ReceiveRefinerySpawned(UFSDRefinery* InRefinery);
    void OnRep_Refinery();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    FVector GetRefinerySpawnLocation(TSubclassOf<UFSDRefinery> refineryClass);
    void AddMissionCriticalItems(AProceduralSetup* setup);
}

class URegisterInviteNotificationBlueprintCallProxy : UOnlineBlueprintCallProxyBase
{
    FRegisterInviteNotificationBlueprintCallProxyOnInviteReceived OnInviteReceived;
    void BlueprintRegisterInvitiNotificationDelegate(const FBlueprintFriend& Results);
    FRegisterInviteNotificationBlueprintCallProxyOnInviteAccepted OnInviteAccepted;
    void BlueprintRegisterInvitiNotificationDelegate(const FBlueprintFriend& Results);
    FRegisterInviteNotificationBlueprintCallProxyOnInviteRejected OnInviteRejected;
    void BlueprintRegisterInvitiNotificationDelegate(const FBlueprintFriend& Results);
    UObject* WorldContextObject;

    URegisterInviteNotificationBlueprintCallProxy* RegisterInvitiNotification(UObject* WorldContextObject);
}

class URegisterSessionInviteNotificationBlueprintCallProxy : UOnlineBlueprintCallProxyBase
{
    FRegisterSessionInviteNotificationBlueprintCallProxyOnSessionUserInviteAccepted OnSessionUserInviteAccepted;
    void BlueprintRegisterSessionInviteNotificationDelegate(const FBlueprintSessionResult& SessionInvite);
    UObject* WorldContextObject;

    URegisterSessionInviteNotificationBlueprintCallProxy* RegisterSessionInviteNotification(UObject* WorldContextObject);
}

class URejectInviteBlueprintCallProxy : UOnlineBlueprintCallProxyBase
{
    FRejectInviteBlueprintCallProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FRejectInviteBlueprintCallProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();
    UObject* WorldContextObject;

    URejectInviteBlueprintCallProxy* RejectInvite(UObject* WorldContextObject, FString ListName, FString UserId);
}

class URepairableComponent : UActorComponent
{
    FRepairableComponentOnFullyRepairedEvent OnFullyRepairedEvent;
    void RepairedDelegate(URepairableComponent* Component);
    FRepairableComponentOnAllResourcesAquiredEvent OnAllResourcesAquiredEvent;
    void RepairedDelegate(URepairableComponent* Component);
    FRepairableComponentOnRepairedEvent OnRepairedEvent;
    void RepairedDelegate(URepairableComponent* Component);
    UGemResourceData* RequiresCarriedResource;
    int32 ResourcesRequired;
    bool IsFullyRepaired;

    bool TryRepair(UPlayerCharacter* User);
    void OnRep_ResourcesRequired();
    int32 GetResourcesRequired();
    void Cheat_Repair();
}

class URepairObjective : UObjective
{
    int32 RepairedObjectives;
    int32 ObjectivesToRepair;
    TSoftClassPtr<AActor> RepairObjectiveClass;
    UGemResourceData* RepairObjectiveResource;
    UDebrisPositioning* Positioning;
    int32 RepairResourcesPerActor;
    float RepairResourceDistanceFromActor;
    float MinRepairObjectiveDistanceToLandingZone;
    TArray<AActor*> RepairedObjectivesList;

    void OnRep_RepairedObjectives();
    void OnRep_ObjectivesToRepair();
    void OnObjectiveRepaired(URepairableComponent* repairable);
    void AllObjectivesRepaired();
}

class UResourceBank : UUsableComponentBase
{
    FResourceBankOnBeginDeposite OnBeginDeposite;
    void ResourceBankEvent(UPlayerCharacter* User);
    FResourceBankOnDepositing OnDepositing;
    void ResourceBankEvent(UPlayerCharacter* User);
    FResourceBankOnEndDeposite OnEndDeposite;
    void ResourceBankEvent(UPlayerCharacter* User);
    bool OpenForDeposit;
    AFSDGameState* GameState;
    float DepositesPerSecond;
    float DepositeAmount;
    bool CanGetStrict;
    bool AddToTeamInventory;
    USoundBase* AudioBeginDepositing;
    USoundBase* AudioDepositing;
    USoundBase* AudioEndDepositing;

    void ResourceBankEvent__DelegateSignature(UPlayerCharacter* User);
    void All_Depositing(UPlayerCharacter* Character);
}

class URestrictedResourceBank : UResourceBank
{
    UResourceData* RequiredResource;
}

class AResourceChunk : AFSDPhysicsActor
{
    float CollectDuration;
    bool CanBeCollectedNormally;
    bool CanBeCollected;
    USimpleObjectInfoComponent* InfoComponent;
    float ResourceAmount;
    USoundCue* PickupSound;
    UResourceData* ResourceData;
    TArray<APlayerCharacter*> OverlappingPlayers;
    TWeakObjectPtr<APlayerCharacter> CollectedBy;

    void SetCollectOpen();
    void OnRep_CollectedBy();
    UResourceData* GetResourceData();
    float GetResourceAmount();
    void CalcMovement(float InProgress, const FVector& InVector, FVector& OutVelocity, FVector& OutAngularVelocity);
}

class UResourceCreator : UDataAsset
{
}

class UVeinResourceCreator : UResourceCreator
{
    UVeinResourceData* Resource;
    UDebrisPositioning* Positioning;
    ECarveFilterType CarveType;
    float SegmentMaxDot;
    float VeinWorldHorizontalMaxDot;
    float VeinWorldHorizontalMinDot;
    FRandRange VeinLength;
    UFloodFillSettings* Noise;
    float range;
    float NoiseRange;
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
}

class UPatchResourceCreator : UResourceCreator
{
    UDebrisPositioning* Positioning;
    ECarveFilterType CarveType;
    UFloodFillSettings* PatchNoise;
    UFloodFillSettings* CarverNoise;
    float range;
    float NoiseRange;
    float NoiseScale;
    float Size;
    TArray<UDebrisBase*> VeinDebris;
}

class UCarvedResourceCreator : UResourceCreator
{
    UCarvedResourceData* Resource;
    bool ScaleToResourceDistribution;
    UDebrisPositioning* Positioning;
    FIRandRange NumCarvers;
    float ExpensiveNoise;
    float CarveOffsetRadius;
    TSubclassOf<AActor> SpawnAttachClass;
    float AttachSpawnOffsetDistance;
    UTerrainMaterial* TerrainMaterial;
    ECarveFilterType Filter;
    CarveOptionsCellSize CarveCellSize;
    TArray<FUDebrisCarveMesh> Meshes;
    TArray<FResourceDebris> Debris;
}

class UBaseResource : UDataAsset
{
}

class UResourceObjective : UResourceBasedObjective
{
    UResourceData* Resource;
    float ResourcesRequired;
    float ResourcesCollected;
    float ResourceBuffer;
    float RoundToNearest;
    FText ObjectivesText;
    FText CreditsRewardText;

    void OnResourceChanged(UCappedResource* CappedResource, float Amount);
    void OnRep_ResourcesCollected(float prevAmount);
    float GetRequiredAmount(float missionScaling);
}

class ARessuplyPodSpawn : ARessuplyPod
{

    void SetController(UFSDPlayerController* Controller);
    void SetCharacter(UPlayerCharacter* Character);
}

class ARessuplyPodItem : UAnimatedItem
{
    TSubclassOf<AActor> ResupplyBeacon;
    TSubclassOf<UItemPlacerAggregator> ItemPlacerClass;
    UItemPlacerAggregator* ItemPlacerInstance;
    TSubclassOf<ARessuplyPod> SupplyPodClass;
    int32 ResourceCost;
    FText OrderDescription;
    FText LogText;
    float CoolDown;
    bool Used;

    void Server_Call_Resupply(const FVector& Location);
    void ReceiveItemPlacerSpawned(UItemPlacerAggregator* InItemPlacer);
    void OnRep_Used();
    int32 GetResourceCost(UObject* WorldContextObject);
    UItemPlacerAggregator* GetActiveAggregator();
}

class UUnlockReward : UReward
{
}

class UUnlockPlanetZoneReward : UUnlockReward
{
    UPlanetZone* ZoneToUnlock;
}

class UUnlockMissionTypeReward : UUnlockReward
{
    UMissionTemplate* MissionToUnlock;
}

class UUnlockComplexityReward : UUnlockReward
{
    UMissionTemplate* mission;
    UMissionComplexity* Complexity;
}

class UUnlockDurationReward : UUnlockReward
{
    UMissionTemplate* mission;
    UMissionDuration* Duration;
}

class UUnlockDifficultyReward : UUnlockReward
{
    UDifficultySetting* Difficulty;
}

class UResourceReward : UReward
{
    UResourceData* Resource;
    int32 Amount;
}

class UWeeklyResourceReward : UReward
{
    int32 ResourceCount;
    FIRandRange Amount;

    TMap<UResourceData*, float> GetRewards(UFSDPlayerController* Player);
}

class URetirementReward : UUnlockReward
{
    UPlayerCharacterID* characterID;
}

class UItemBlueprintReward : UUnlockReward
{
    TSoftClassPtr<AActor> ItemToUnlock;

    AActor* GetActorDefaultObject();
    TSubclassOf<AActor> GetActorClass();
}

class USchematicReward : UUnlockReward
{
    ESchematicType SchematicType;
    USchematic* RewardedSchematic;
}

class USkinUnlock : UUnlockReward
{
    UItemID* OptionalItemID;
    UPlayerCharacterID* OptionalCharacterID;
    UItemSkin* Skin;
}

class UPermanentItemUpgradeReward : UUnlockReward
{
    TSubclassOf<AActor> Item;
    UItemUpgrade* Upgrade;
}

class UOverclockingUnlockReward : UUnlockReward
{
    TSubclassOf<AActor> Item;
}

class UPureTextReward : UUnlockReward
{
    FText Text;
}

class UVanityReward : UUnlockReward
{
    UVanityItem* VanityItem;
    UPlayerCharacterID* OptionalCharacterID;
    bool UseContextAsTargetCharacter;
}

class UVanityCollectionReward : UUnlockReward
{
    TArray<UVanityItem*> vanityItems;
    UPlayerCharacterID* OptionalCharacterID;
    bool UseContextAsTargetCharacter;
}

class UVictoryPoseReward : UUnlockReward
{
    UVictoryPose* VictoryPose;
    UPlayerCharacterID* OptionalCharacterID;
}

class UPickaxePartReward : UUnlockReward
{
    UPickaxePart* PicaxePart;
}

class UPickaxeSetReward : UUnlockReward
{
    UPickaxePart* BladeFront;
    UPickaxePart* OptionalBladeBack;
    UPickaxePart* Pommel;
    UPickaxePart* Handle;
    UPickaxePart* Shaft;
    UPickaxePart* Head;
    UPickaxePart* Material;
}

class USeasonTokenReward : UReward
{
    int32 Amount;
}

class URewardWidget : UUserWidget
{
    UReward* Reward;

    void PlayReceiveAnim();
}

class URichTextInputDecorator : UCustomRichTextDecorator
{
    TSubclassOf<URichTextInputWidget> DecoratorWidgetClass;
}

class URichTextInputWidget : UUserWidget
{
    FName InputName;
    TMap<FName, FString> MetaData;
    FText Content;
    FTextBlockStyle TextStyle;
    EFSDInputSource InputSource;
    URichTextBlock* RichTextBlock;

    void ScaleTextBlockToHeight(UTextBlock* InTextBlock, float LineHeight);
    void ReceiveInputUnknown();
    void ReceiveInputDetails(const FInputDisplay& InDisplay);
    void OnInputSourceChanged(EFSDInputSource InSource);
    void OnCustomKeyBindsChanged();
    FVector2D MeasureTextSize(const FText& Text, float Scale);
    float GetLineHeight();
    void ApplyTextStyle(UTextBlock* InTextBlock, const FTextBlockStyle& InTextStyle);
}

class URichTextStylable : URichTextBlock
{
    FSlateFontInfo Font;
    FSlateColor FontColor;
    TMap<FName, FTextStyleOverride> Styles;
}

class URichTextSizable : URichTextBlock
{
    bool bOverrideDefaultSize;
    int32 OverrideDefaultFontSize;
    bool bOverrideDefaultColor;
    FSlateColor OverrideDefaultFontColor;

    void SetDefaultFontSize(int32 inFontSize);
    void SetDefaultFontColor(const FLinearColor& InColor);
}

class UFSDRichTextFunctionlibrary : UBlueprintFunctionLibrary
{

    void SplitRichText(const FRichTextParseResult& Parser, int32 SplitIndex, bool bKeepLeftFormatting, bool bKeepRightFormatting, FText& OutLeftText, FText& OutRightText);
    FRichTextParseResult ParseRichText(const FText& InText);
    FText MidRichText(const FRichTextParseResult& Parser, int32 StartIndex, int32 count, bool bKeepFormatting);
}

class ARockEnemiesEvent : AGameEvent
{
    TSubclassOf<AProjectile> PowerUpClass;
    float PowerUpGenerationTime;
    TArray<int32> KillAmountPerPlayer;
    TArray<int32> MaxEnemyCountPerPlayer;
    TArray<APawn*> SpawnedRockEnemies;
    USkeletalMeshComponent* Mesh;
    UParticleSystem* MuzzleEffect;
    int32 PowerUpsPerGeneration;
    int32 GruntPointsAward;
    int32 TankPointsAward;
    UEnemyGroupDescriptor* RockEnemies;

    void StopPowerupGeneration();
    void StartPowerupGeneration();
    void SpawnRockEnemies(float Difficulty, const TArray<FVector>& Locations);
    void ShowFireEffects(int32 selectedBone);
    void RockEnemySpawned(APawn* spawnedEnemy);
    void RockEnemyDied(UHealthComponentBase* Health);
    void OnShoot();
    void EnemySpawnedAfterComplete(APawn* spawnedEnemy);
}

class URoomCarverComponent : USceneComponent
{
    URoomGenerator* RoomGenerator;
}

class URoomDecorationObject : UDataAsset
{
    UDebrisPositioning* Positioning;
    TSubclassOf<AActor> Actor;
}

class URoomFeature : UObject
{
    TArray<URoomFeature*> RoomFeatures;
}

class URandomSelector : URoomFeature
{
    int32 Min;
    int32 Max;
}

class UFloodFillLine : URoomFeature
{
    UFloodFillSettings* WallNoiseOverride;
    UFloodFillSettings* CeilingNoiseOverride;
    UFloodFillSettings* FloorNoiseOverride;
    bool UseDetailNoise;
    TArray<FRoomLinePoint> Points;
}

class UFloodFillPillar : URoomFeature
{
    UFloodFillSettings* NoiseOverride;
    TArray<FRandLinePoint> Points;
    FRandRange RangeScale;
    FRandRange NoiseRangeScale;
    FRandRange EndcapScale;
}

class UFloodFillProceduralPillar : URoomFeature
{
    TArray<FVector> Points;
    UPillarSettings* PillarSettings;
}

class UFloodFillBox : URoomFeature
{
    UFloodFillSettings* Noise;
    FVector Position;
    FVector Extends;
    FRotator Rotation;
    bool IsCarver;
    float NoiseRange;
}

class UEntranceFeature : URoomFeature
{
    FVector Location;
    FRotator Direction;
    ECaveEntranceType EntranceType;
    ECaveEntrancePriority Priority;
}

class UResourceFeature : URoomFeature
{
    FVector Location;
    UResourceData* Resource;
    float BaseAmount;
}

class USpawnActorFeature : URoomFeature
{
    FVector Location;
    TSubclassOf<AActor> ActorToSpawn;
    FVector AdjustmentDirection;
    EItemAdjustmentType Adjustment;
    FVector ScaleMin;
    FVector ScaleMax;
    FRotator RotationDelta;
}

class USpawnTriggerFeature : URoomFeature
{
    TSubclassOf<AActor> TriggerClass;
    FTransform Transform;
    FName Message;
}

class ASpawnTrigger : AActor
{
    FName Message;
}

class USubRoomFeature : URoomFeature
{
    URoomGenerator* RoomGenerator;
    FVector Location;
    FRotator Rotation;
    float Scale;
}

class URandomSubRoomFeature : URoomFeature
{
    URoomGeneratorGroup* RoomGroup;
    FGameplayTagQuery tagQuery;
    int32 Layer;
    FVector Location;
    FRotator Rotation;
    float Scale;
}

class UDropPodCalldownLocationFeature : URoomFeature
{
    FVector Location;
    TSubclassOf<AActor> CalldownClass;
}

class URoomGeneratorBase : UDataAsset
{
    float Bounds;
    bool CanOnlyBeUsedOnce;
    ERoomMirroringSupport MirrorSupport;
    FGameplayTagContainer RoomTags;
}

class URoomGenerator : URoomGeneratorBase
{
    TArray<URoomFeature*> RoomFeatures;

    TArray<URoomFeature*> GetAllRoomFeatures();
}

class URoomGeneratorGroup : UDataAsset
{
    TArray<URoomGenerator*> Rooms;

    URoomGenerator* GetRandomRoomWithTags(FRoomGeneratorGroupInstance& groupInstance, const FGameplayTagQuery& queury, FRandomStream& RandomStream);
    URoomGenerator* GetRandomRoom(FRandomStream& RandomStream);
    FRoomGeneratorGroupInstance CreateGroupInstance();
}

class URotateToFace : USceneComponent
{
    FVector TargetOffset;
    AActor* Target;
    int32 Face;

    void SetTarget(AActor* Target);
    void SetShouldFaceAway(bool FaceAway);
}

class USalvageObjective : UObjective
{
    int32 SalvageActorCount;
    UGemResourceData* LegResource;
    int32 LegCountPerActor;
    float LegDistanceToActor;
    FSalvageObjectiveOnDisableLegSpheres OnDisableLegSpheres;
    void Delegate();
    UDebrisPositioning* Positioning;
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    TSoftClassPtr<AMiniMule> SalvageActor;
    TSoftClassPtr<AMiningPod> DamagedPodClass;
    UDebrisPositioning* DamagedPodPositioning;
    float DamagedPodMinDistanceToDropZone;
    AMiningPod* DamagedPod;
    int32 ActorsToSalvage;
    int32 ActorsSalvaged;
    int32 RepairPoints;
    int32 PointsRepaired;
    float MinSalvageActorDistanceToLandingZone;
    TArray<AMiniMule*> AllSalvageActors;
    TArray<AMiniMule*> SalvagedActors;

    void PointRepaired();
    void OnRep_PointsRepaired();
    void OnRep_ActorsToSalvage(int32 prevAmount);
    void OnRep_ActorsSalvaged(int32 prevAmount);
    void OnActorRepaired(URepairableComponent* repairable);
    FTransform FindRepairPointLocation(AProceduralSetup* setup, const FVector& podLocation, float Radius, float maxVerticalDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve);
    void AllActorsSalvaged();
}

class ASalvageFuelPod : ARessuplyPod
{

    void ReceiveFuelLineStarted(bool InFuelLineStarted);
    void ReceiveFuelLineConnected(AFuelLineEndPoint* InFuelLine);
    void ReceiveFirstFuelLineSegment(UFuelLineSegment* InFirstSegment);
}

class USavableObject : UObject
{
    bool EnableDangerousSaveGameIDEditing;
    FGuid SaveGameID;
}

class ASavableActor : AActor
{
    bool EnableDangerousSaveGameIDEditing;
    FGuid SaveGameID;
}

class USaveGameIDInterface : UInterface
{
}

class URefundableInterface : USaveGameIDInterface
{
}

class UItemIDInterface : UInterface
{
}

class USaveGameLibrary : UBlueprintFunctionLibrary
{

    bool TryGetSaveGameSnapShot(UObject* WorldContext, FString Filename, int32 userIdx, FSaveGameSnapShot& OutSnapShot);
    TMap<FString, FDateTime> GetUserSaveGameSlots(FString UserId);
    TMap<FString, FDateTime> GetAllSaveGameSlots();
}

class USaveGameStateComponent : UActorComponent
{
    FSaveGameStateComponentOnEquippedPerksChanged OnEquippedPerksChanged;
    void ItemUpgradesChangedDelegate();
    FSaveGameStateComponentOnItemUpgradeCrafted OnItemUpgradeCrafted;
    void ItemUpgradeCraftSignature(UItemUpgrade* Upgrade);
    FSaveGameStateComponentOnItemUpgradeEquipped OnItemUpgradeEquipped;
    void ItemUpgradeEquipSignature(TSubclassOf<AActor> itemClass, UItemUpgrade* Upgrade);
    FSaveGameStateComponentOnItemUpgradeUnequipped OnItemUpgradeUnequipped;
    void ItemUpgradeEquipSignature(TSubclassOf<AActor> itemClass, UItemUpgrade* Upgrade);
    FSaveGameStateComponentOnPlayerProgressChanged OnPlayerProgressChanged;
    void PlayerProgressChangedSignature(UFSDPlayerState* PlayerState, FPlayerProgress Progress);
    FSaveGameStateComponentOnLoadoutChangedEvent OnLoadoutChangedEvent;
    void LoadoutChangedDelegate();
    FSaveGameStateComponentOnCharacterStatsChanged OnCharacterStatsChanged;
    void CharacterProgressChangedSignature(UFSDPlayerState* PlayerState);
    FSaveGameStateComponentOnCreditsChanged OnCreditsChanged;
    void CreditsChangedDelegate();
    int32 Credits;
    TArray<FSaveGameStatePerkItem> EquippedPerks;
    UVictoryPose* VictoryPose;
    FItemLoadout EquippedLoadout;
    FActiveCampaingMission ActiveCampaignMission;
    TArray<FItemUpgradeSelection> ItemUpgradeSelections;
    FPlayerProgress PlayerProgress;
    TArray<FCharacterProgress> CharacterStats;

    void SetCampaign();
    void Server_SetVictoryPose(UVictoryPose* pose);
    void Server_SetPlayerProgress(const FPlayerProgress& Progress);
    void Server_SetLoadout(const FItemLoadout& Loadout, const TArray<FItemUpgradeSelection>& weaponLoadouts);
    void Server_SetEquippedPerks(const TArray<FSaveGameStatePerkItem>& perks);
    void Server_SetCredits(const int32 Amount);
    void Server_SetCharacterStats(const TArray<FCharacterProgress>& Stats);
    void Server_SetActiveCampaignMission(FActiveCampaingMission Data);
    void RefreshLoadoutFromSave(UPlayerCharacterID* characterID);
    void OnRep_PlayerProgress();
    void OnRep_ItemUpgradeSelections();
    void OnRep_Credits();
    void OnRep_CharacterStats();
    void OnRep_ActiveCampaignMission();
    void ItemUpgradeEquipSignature__DelegateSignature(TSubclassOf<AActor> itemClass, UItemUpgrade* Upgrade);
    void ItemUpgradeCraftSignature__DelegateSignature(UItemUpgrade* Upgrade);
    FCharacterProgress GetCharacterStat(UPlayerCharacterID* characterID);
    UGeneratedMission* GetActiveCampaignMission();
    void CreditsChangedDelegate__DelegateSignature();
}

class USchematicRarity : UDataAsset
{
    float Rarity;
}

class USchematic : USavableDataAsset
{
    FSchematicOnSchematicAddedToInventory OnSchematicAddedToInventory;
    void SchematicDelegate(USchematic* Schematic);
    FSchematicOnSchematicReset OnSchematicReset;
    void SchematicDelegate(USchematic* Schematic);
    FSchematicOnSchematicBuilt OnSchematicBuilt;
    void SchematicDelegate(USchematic* Schematic);
    USchematicCategory* Category;
    USchematicPricingTier* PricingTier;
    USchematicRarity* Rarity;
    UPlayerCharacterID* UsedByCharacter;
    USchematicItem* Item;
    TMap<UResourceData*, int32> CraftingCost;
    bool CostIsLocked;

    void SetCraftingMaterialCost();
    void SetCostLocked(bool IsLocked);
    void SchematicDelegate__DelegateSignature(USchematic* Schematic);
    bool HasBeenForged(UObject* WorldContext);
    bool HasBeenAwardedOrForged(UObject* WorldContext);
    bool HasBeenAwarded(UObject* WorldContext);
    FText GetTitle();
    ESchematicState GetSchematicState(UObject* WorldContext);
    USchematicItem* GetSchematicItem();
    TMap<UResourceData*, int32> GetResourceCost();
    FColor GetIconTint();
    UTexture* GetIcon(UObject* WorldContextObject);
    FText GetDescription();
    bool CanAffordSchematic(UObject* WorldContext);
    void BuildSchematic(UObject* WorldContext);
    void AddSchematicToPlayerInventory(UObject* WorldContext);
}

class USchematicBankBase : UDataAsset
{
}

class USchematicBank : USchematicBankBase
{
    TSet<USchematic*> Schematics;

    void AddSchematic(USchematic* Schematic);
}

class USchematicBankInterface : UInterface
{
}

class USchematicCategory : USavableDataAsset
{
    FText CategoryName;
    TSoftObjectPtr<UTexture2D> FrameTexture;
    FLinearColor FrameTint;
    FLinearColor BackgroundTint;
    ESchematicType SchematicType;
    TSoftObjectPtr<UDialogDataAsset> ShoutForging;
    UEventRewardType* RewardType;
}

class USchematicBlueprintLibrary : UBlueprintFunctionLibrary
{

    void PriceAllSchematics(bool lockPrices);
    bool IsSchematicOwnedOrForged(UObject* WorldContextObject, USchematic* Schematic);
    bool IsSchematicOwned(UObject* WorldContextObject, USchematic* Schematic);
    bool IsSchematicForged(UObject* WorldContextObject, USchematic* Schematic);
    bool HasAnyUnlockableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, SetProperty& Categories);
    TArray<USchematic*> GetRewardableSchematics(UObject* WorldContextObject, UPlayerCharacterID* characterID, USchematicCategory* Category);
    TArray<USchematic*> GetForgedSchematic(UObject* WorldContextObject);
    USchematicCategory* FindItemUpgradeSchematicCategory(UItemUpgrade* Upgrade);
    void AddSkinSchematicCollectionToSettings(UItemSkinSchematicCollection* Collection);
}

class USchematicItem : UObject
{

    FText GetTitle();
    FColor GetIconTint();
    UTexture* GetIcon(UObject* WorldContextObject);
    FText GetDescription();
}

class UOverclockShematicItem : USchematicItem
{
    UItemID* OwningItem;
    UItemUpgrade* Overclock;

    UUpgradableGearComponent* GetOwningGearComponent();
}

class UVanitySchematicItem : USchematicItem
{
    UVanityItem* Item;

    UVanityItem* GetVanityItem();
}

class UVictoryPoseSchematicItem : USchematicItem
{
    UVictoryPose* VictoryPose;
}

class UDrinkableSchematicItem : USchematicItem
{
    UDrinkableDataAsset* Drinkable;
}

class USkinSchematicItem : USchematicItem
{
    UItemID* ItemID;
    UItemSkin* Skin;
}

class UResourceSchematicItem : USchematicItem
{
    int32 Credits;
    UResourceData* Resource;
    int32 ResourceAmount;
}

class UBlankSchematicItem : USchematicItem
{
    FText Title;
    FText Description;
    UTexture2D* Icon;
}

class USchematicSettings : UDataAsset
{
    UDataTable* PricingTable;
    USchematic* BlankSchematic;
    TSet<USchematicBank*> SchematicBanks;
    TSet<UOverclockBank*> OverclockBanks;
    TSet<UItemSkinSchematicCollection*> SkinSchematicCollections;
    TSet<USchematicBankBase*> VanitySchematicBanks;
    TMap<ESchematicType, FSchematicType> SchematicTypes;
    USchematicBank* EndlessSchematics;
    TSet<USchematicCategory*> Categories;
    TArray<USchematicCategory*> OverclockCategories;
    TArray<USchematicCategory*> VanityCategories;
    TArray<USchematicCategory*> EndlessCategories;
    USchematicPricingTier* OverclockPricingTier;
    TArray<USchematicPricingTier*> VanityPricingTiers;
    TArray<USchematicRarity*> VanityRarity;
    TArray<USchematicRarity*> OverclockRarity;
    TArray<USchematicRarity*> EndlessRarity;

    FSchematicType GetSchematicTypeData(ESchematicType InType);
    TSet<USchematic*> GetSchematics();
}

class UForginSettings : UDataAsset
{
    int32 XPRequiredPerLevel;
    TArray<ESchematicType> MasteryRewardCycle;
}

class USeason : USavableDataAsset
{
    FText SeasonName;
    int32 SeasonNumber;
    TArray<FSeasonLevel> Levels;
    FSeasonLevel RewardAfterAllLevels;
    TArray<FUnassignedReward> UnassignedRewards;
    UTreeOfVanity* TreeOfVanity;
    UGameDLC* SeasonDLC;
    FRuntimeFloatCurve SpawnChanceByMissionLength;
    TArray<FSeasonalEventEntry> SeasonalEvents;
    int32 NumberOfScripChallenges;
    TArray<UMissionStat*> ScripChallenges;

    void AddUnassignedReward(int32 Index, UReward* Reward);
    void AddLevel(int32 Index, UReward* Reward, UReward* specialReward);
}

class USeasonChallenge : USavableDataAsset
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
    USeasonChallenge* ChallengeAfterMaxOccurences;
    TArray<TSubclassOf<UCampaign>> RequiredCampaigns;

    UTexture2D* GetIconOutlined();
    UTexture2D* GetIcon();
}

class USeasonEditorRewardWidget : UUserWidget
{
    UReward* Reward;
}

class USeasonLevelWidget : UUserWidget
{
    FSeasonLevelWidgetOnRewardClaimed OnRewardClaimed;
    void RewardClaimed(UReward* Reward);
    int32 Level;
    int32 SeasonLevel;
    bool IsNormalClaimed;
    bool IsSpecialClaimed;
    bool IsUnlocked;
    FSeasonLevel LevelInfo;

    bool TryClaimReward(bool isNormalReward);
    void SetData(int32 inLevel, bool LastInRow);
    void RefreshState();
    void OnDataSet();
}

class USeasonInfinityLevelWidget : USeasonLevelWidget
{
    int32 InfinityStartLevel;
}

class USeasonSettings : UDataAsset
{
    USeason* CurrentSeason;
    int32 MaxActiveChallenges;
    TArray<USeasonChallenge*> SeasonChallenges;
    int32 XPPerLevel;
    UCurveFloat* XPToPerforcemancePointsCurve;
    int32 TreeOfVanitySnapSize;
    float SpecialChallengeChange;
}

class USeasonReplicatorComponent : UActorComponent
{

    void CompleteSeasonEvent(USeasonEventData* inEvent);
}

class USeasonsSubsystem : UGameInstanceSubsystem
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
    int32 ForceSeasonEventIndex;
    FSeasonMissionResult TempSeasonMissionResult;
    FSeasonMissionResult LatestMissionSeasonResult;

    FTimespan TimeToNewChallenge();
    void RerollChallenge(int32 Index);
    void OnStatChanged(UMissionStat* Stat, float Value);
    void OnScripChallengeCompleted(UMissionStat* Stat, float Value);
    void IsRewardClaimed(int32 Level, bool& IsNormalClaimed, bool& IsSpecialClaimed);
    bool IsNodeUnlocked(int32 TreeOfVanityNodeID);
    bool IsNodeBought(int32 TreeOfVanityNodeID);
    void InitliazeStats();
    bool HasClaimedLevelRewards(int32 startLevel, int32 numberOfLevels);
    bool HasClaimedAllRewards();
    int32 GetSeasonXPFromMissionXP(UFSDPlayerState* PlayerState);
    int32 GetSeasonXP();
    int32 GetSeasonNumber();
    FText GetSeasonName();
    FSeasonMissionResult GetSeasonMissionResult();
    void GetSeasonLevelFromXP(int32 XP, int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& LevelXPTotal);
    void GetSeasonLevel(int32& Level, float& currentLevelPercent, int32& currentLevelXP, int32& LevelXPTotal);
    void GetSeasonBought(bool& isBought);
    void GetScriptChallengeInfo(int32& Completed, int32& claimed, int32& Total);
    int32 GetNumberOfTokens(UObject* WorldContextObject);
    int32 GetNumberOfSeasonLevels();
    FSeasonLevel GetNextReward();
    int32 GetLevelXP(int32 Level);
    FSeasonLevel GetLevelReward(int32 Level);
    void GetLevelProgress(int32 Level, float& levelPercent);
    TArray<UDataAsset*> GetAssetReferences(int32 challengeIndex, USeasonChallenge*& outChallenge);
    TArray<FChallengeInfo> GetActiveChallenges(bool canGenerateNewChallenge);
    UTextureRenderTarget2D* GenerateVanityRewardIcon(UVanityItem* Item, UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size);
    UTextureRenderTarget2D* GenerateSkinRewardIcon(UItemSkin* Skin, UPlayerCharacterID* Character, bool bShowCloseUp, FTransform Offset, bool rebuildMesh, FVector2D Size);
    UTextureRenderTarget2D* GeneratePickaxeRewardIcon(UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, FTransform Offset, bool rebuildMesh, FVector2D Size);
    void CompleteSeasonEvent_Server(USeasonEventData* inEvent);
    bool ClaimScripChallenge();
    bool ClaimReward(UObject* WorldContext, UFSDPlayerController* Player, int32 Level, bool isNormalReward);
    void CHEAT_SetSeasonMissionResult(int32 XPFromMission, int32 numberOfChallenges, USeasonEventData* Event);
    void CHEAT_ResetTimeToNewChallenge();
    void CHEAT_ResetReroll();
    void CHEAT_AddChallenge();
    bool CanRerollChallenge();
    bool BuyTreeNode(UObject* WorldContextObject, UFSDPlayerController* Player, int32 TreeOfVanityNodeID);
}

class USeasonEventData : USavableDataAsset
{
    FText Name;
    int32 PerformancePoints;
    int32 PerformancePointsOnFail;
    TSoftObjectPtr<UTexture2D> Icon;
}

class USendInviteBlueprintCallProxy : UOnlineBlueprintCallProxyBase
{
    FSendInviteBlueprintCallProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FSendInviteBlueprintCallProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();
    UObject* WorldContextObject;

    USendInviteBlueprintCallProxy* SendInvite(UObject* WorldContextObject, FString ListName, FString UserId);
}

class USendSessionInviteToFriendBlueprintCallProxy : UOnlineBlueprintCallProxyBase
{
    FSendSessionInviteToFriendBlueprintCallProxyOnSuccess OnSuccess;
    void EmptyOnlineDelegate();
    FSendSessionInviteToFriendBlueprintCallProxyOnFailure OnFailure;
    void EmptyOnlineDelegate();
    UObject* WorldContextObject;

    USendSessionInviteToFriendBlueprintCallProxy* SendSessionInviteToFriend(UObject* WorldContextObject, FString FriendId);
}

class ASentryAttachment : AActor
{
}

class USentryGunAnimInstance : UAnimInstance
{
    ASentryGun* SentryGun;
    ARedeployableSentryGun* RedeployableSentryGun;
    FRotator TurretRotation;
    float YawOffset;
    float BuildProgress;
}

class ARecallableSentryGun : URecallableActor
{
    FRecallableSentryGunOnSentryIndexChanged OnSentryIndexChanged;
    void SentryIndexChanged(int32 Index);
    int32 SentryIndex;

    void SentryIndexChanged__DelegateSignature(int32 Index);
    void ReceiveOnSentryReady(ASentryGun* SentryGun, UPlayerCharacter* PlayerCharacter);
    void OnRep_SentryIndex();
    void GetStateDescription(FText& Description);
    TSubclassOf<ASentryGun> GetSentryGunClass();
    ASentryGun* GetSentryGun();
}

class UReloadSentryUsableComponent : UUsableComponent
{
    FText OutOfAmmoText;
    FText AmmoFullText;
    USoundBase* AudioOutOfAmmo;
    USoundBase* AudioReloading;
    UAudioComponent* ReloadingAudioComponent;
    bool Usable;
    bool bReloading;
    UAudioComponent* ReloadAudioComponent;
    float AmmoPerSec;
    TWeakObjectPtr<APlayerCharacter> OwningPlayerCharacter;
    ASentryGun* SentryGun;

    void SetOwningPlayerCharacter(UPlayerCharacter* Player);
    void SetCanUse(bool isUsable);
    void OnRep_Reloading();
    void OnReloadAudioFinished();
}

class ASentryGunItem : UPlaceableItem
{
    TArray<UItemUpgrade*> upgrades;
}

class ARecallableSentryGunItem : URecallableItem
{
    FRecallableSentryGunItemOnActiveItemsChanged OnActiveItemsChanged;
    void RecallableSentryGunItemSignature(URecallableSentryGunItem* Item);
    FRecallableSentryGunItemOnSelectedItemChanged OnSelectedItemChanged;
    void RecallableSentryGunSignature(URecallableSentryGun* SentryGun);
    int32 MaxSentryCount;
    float MinDistanceBetweenSentries;
    FText RecallHoldDescription;
    float RecallHoldDuration;
    UCapacityHoldingItemAggregator* AmmoCapacity;
    UItemPlacerAggregator* ItemPlacer;
    TArray<UItemUpgrade*> upgrades;
    TSubclassOf<AItem> LoadoutClass;
    float SupplyStatusWeight;
    float SentryAngleRestriction;
    bool bIsUpgraded;

    void ReceiveItemUpgraded();
    void RecallableSentryGunSignature__DelegateSignature(URecallableSentryGun* SentryGun);
    void RecallableSentryGunItemSignature__DelegateSignature(URecallableSentryGunItem* Item);
    bool HasAmmoLeft();
    ARecallableSentryGun* GetSelectedSentryGun();
    TArray<ARecallableSentryGun*> GetActiveSentryGuns();
    bool AreAllSentriesPlaced();
}

class USessionHandling : UBlueprintFunctionLibrary
{

    void StopVoice(UObject* WorldContextObject);
    void StartVoice(UObject* WorldContextObject);
    bool StartSearchForFriends(int32 localUserNum, UFSDGameInstance* GameInstance);
    void StartCheckForInstalledDLC(UObject* WorldContextObject);
    void SortServerList(UObject* WorldContextObject, EServerSortOrder order, bool Reverse, bool sortByFriends, TArray<FBlueprintSessionResult>& servers);
    void ShowStoreUI(UObject* WorldContextObject);
    void ShowInviteUI(UObject* WorldContextObject);
    void JoinOfficialXboxClub(UObject* WorldContextObject);
    bool IsVoiceChatting();
    bool IsInActiveSession();
    bool IsDisconnectReasonAKick(EDisconnectReason reason);
    FString GetVoiceStatus();
    FText GetSessionJoinError(UObject* WorldContextObject);
    bool GetOnlinePlayerName(int32 localUserNum, FString& Name);
    EFSDNATType GetNATType(UObject* WorldContextObject);
    EMissionStructure GetMissionStructure(const FBlueprintSessionResult& Result);
    FString GetLoginStatus(int32 localUserNum);
    FString GetHostUsername(UObject* WorldContextObject);
    FString GetHostUniqueId(UObject* WorldContextObject);
    bool GetFriendsList(int32 localUserNum, TArray<FFriendInfo>& Players);
    FString GetFriendlyServerNameSanitized(UObject* WorldContextObject);
    FString GetFriendlyServerName(UObject* WorldContextObject);
    bool GetCurrentSessionState(FString& sessionState, FString& ID);
    bool FSDUpdateSessionInfo(UObject* WorldContextObject);
    EFSDMissionStatus FSDMissionStatus(const FBlueprintSessionResult& Result);
    void FSDListen(UObject* WorldContextObject);
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
    TArray<FString> FSDGetVerifiedModsInstalled(const FBlueprintSessionResult& Result);
    bool FSDGetServerStartTime(const FBlueprintSessionResult& Result, FDateTime& StartTime);
    FString FSDGetServerNameSanitized(const FBlueprintSessionResult& Result);
    FString FSDGetServerName(const FBlueprintSessionResult& Result);
    FString FSDGetServerID(const FBlueprintSessionResult& Result);
    FString FSDGetRegion(const FBlueprintSessionResult& Result);
    TArray<UPlayerCharacterID*> FSDGetPlayerClassIDs(const FBlueprintSessionResult& Result);
    TArray<TSubclassOf<APlayerCharacter>> FSDGetPlayerClasses(const FBlueprintSessionResult& Result);
    int32 FSDGetNumPlayers(const FBlueprintSessionResult& Result);
    TArray<FString> FSDGetModsInstalled(const FBlueprintSessionResult& Result, bool ExcludeVerifiedMods);
    int32 FSDGetMissionSeed(const FBlueprintSessionResult& Result);
    FString FSDGetMapName(const FBlueprintSessionResult& Result);
    FString FSDGetHostUserID(const FBlueprintSessionResult& Result);
    int32 FSDGetGlobalMissionSeed(const FBlueprintSessionResult& Result);
    float FSDGetDistanceFloat(const FBlueprintSessionResult& Result);
    EServerDistance FSDGetDistance(const FBlueprintSessionResult& Result);
    UDifficultySetting* FSDGetDifficulty(const FBlueprintSessionResult& Result);
    FString FSDGetBuildId(const FBlueprintSessionResult& Result);
    bool FSDCancelFindSessions(UObject* WorldContextObject);
    bool FindBestQuickJoinServer(UObject* WorldContextObject, TArray<FBlueprintSessionResult>& sessions, UDifficultySetting* Difficulty, UBiome* Biome, UMissionTemplate* MissionTemplate, FBlueprintSessionResult& OutResult);
    bool AllowLinkToExternalFeedback(UObject* WorldContextObject);
}

class ASharkEnemy : UEnemyDeepPathfinderCharacter
{
    UPawnSensingComponent* PawnSensing;
    USphereComponent* CollisionSphere;
    USphereComponent* NearTargetSphere;
    UParticleSystemComponent* TearingGroundParticles;
    UParticleSystemComponent* AirTrailParticles;
    UInDangerComponent* Danger;
    UEnemyComponent* EnemyComponent;
    UDamageComponent* Damage;
    UDamageComponent* BumpDamage;
    UFakePhysGrabberComponent* RestrictedGrabberComponent;
    float RagdollSpeedFactor;
    USoundCue* ImpactCue;
    USoundCue* JumpSound;
    float DiveForSeconds;
    FVector_NetQuantize RagdollImpact;
    float LaunchPower;
    float GrabTime;
    float StopSpeedThreshold;
    float UpsideDownTime;
    float RaiseSpeed;
    float TiltInSpeed;
    float TiltOutSpeed;
    float SafeTimeAfterVounerable;
    float RaiseHeight;
    float AttackDuration;
    float HitLaunchPower;
    float ChanceToGrab;
    float MinTimeBetweenBumps;
    float ChanceForJump;
    float MinJumpCooldown;
    float MaxJumpCooldown;
    float JumpForce;
    float TimeBeforeGroundCheck;
    float MinCirclingTime;
    float MaxCirclingTime;
    UFakeMoverSettings* CircleSetttings;
    UFakeMoverSettings* AttackSettings;
    UFakeMoverSettings* PostHitSettings;
    UFakeMoverSettings* JumpSettings;
    UFakeMoverSettings* VounerableSettings;
    float MaxInGroundTime;
    float MinInGroundTime;
    float StartParticleTime;
    float EndParticleTime;
    UParticleSystem* DiveParticles;
    ESharkEnemyState State;

    void SetVulnerable();
    void ReleasePlayer(AActor* playerchar);
    void PopRecentlyBumpedPlayer();
    void OnStateChangedEvent(ESharkEnemyState CurrentState);
    void OnSeePawn(APawn* APawn);
    void OnRep_State(ESharkEnemyState oldState);
    void OnRep_RagdollImpact();
    void OnRep_DiveTime();
    void OnNearTarget(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnLandedEvent();
    void OnJumpEvent();
    void OnGrabbedEvent();
    void OnExitState(ESharkEnemyState State);
    void OnEnterState(ESharkEnemyState State);
    void OnDeath(UHealthComponentBase* aHealthComponent);
    void OnDamaged(float aAmount);
    void OnCollided(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Jumped();
    void ImpactSound();
    void DiveShow();
    void DiveHide();
    void ActivateDanger();
}

class USharkAnimInstance : USpiderAnimInstance
{
    ESharkEnemyState SharkState;
    bool IsCloseToGround;
    bool AttackConnected;
    float BendValue;
}

class AThrowableItem : UAnimatedItem
{
    TSubclassOf<AThrowableActor> ThrowableClass;
    UAnimMontage* FPThrowMontage;
    UAnimMontage* TPThrowMontage;
    float ThrowVelocity;
    float InheritOwnerVelocityScale;
    float ThrowAngle;
    float CooldownAfterThrow;
    float CooldownAfterDetonation;
    bool CanThrowBeforeEquipAnimFinish;
    float ThrowDelay;
    float ThrowZOffset;
    float CooldownLeft;
    TArray<UItemUpgrade*> upgrades;
    TSubclassOf<AItem> LoadoutItem;
    TArray<TWeakObjectPtr<AThrowableActor>> ThrownActors;

    void Simulate_Throw(TSubclassOf<AThrowableActor> ActorClass);
    void Server_Throw(TSubclassOf<AThrowableActor> ActorClass);
    void ReceiveItemThrown(AThrowableActor* thrownActor);
    void ReceiveItemSpawned(AThrowableActor* thrownActor);
    void OnThrownActorDestroyed(AActor* Actor);
    FVector GetThrowLocation();
}

class AShieldGeneratorItem : UThrowableItem
{
    UCapacityHoldingItemAggregator* ChargeCapacity;
    UCapacityHoldingItemAggregator* CarryCapacity;
    float RechargeDuration;
    int32 UnchargedCount;
    float RechargeProgress;
    float SupplyStatusWeight;
    UDialogDataAsset* ShoutRecarged;
    FCoolDownProgressStyle RechargeProgressUI;

    void ReceiveGeneratorReturned();
    void ReceiveGeneratorRechargeProgress(float Progress);
    void ReceiveGeneratorRecharged();
    void OnRep_UnchargedCount(int32 OldCount);
    bool GetIsRecharging();
    void GeneratorReturned();
}

class AThrowableActor : AActor
{
    UProjectileMovementComponent* Movement;
    bool IsMoving;
    bool IgnoreFellOutOfWorld;
    bool IgnoreOwnersCollision;

    void ReceiveIgnoreCharacter(UPlayerCharacter* Character);
    void ReceiveHitObject();
    void OnRep_IsMoving();
}

class AShieldGeneratorActor : AThrowableActor
{
    float GeneratorRadius;
    float DeployDelay;
    bool bPushStatusEffectOnExit;
    float GeneratorLifetime;
}

class UShootingPlantAnimInstance : UEnemyAnimInstance
{
    AActor* Target;
    float Yaw;
    float Pitch;
    float YawSpeed;
    float PitchSpeed;
    bool IsVisible;
}

class AShowroomItem : AActor
{
    TSoftClassPtr<AShowroomStage> ShowroomStage;
}

class AEnemyShowroomItem : AShowroomItem
{
    EShowroomScaling Scaling;
}

class UShowroomController : UActorComponent
{
    AShowroomStage* Stage;

    void SetLightChannels(AActor* Actor);
    void RotateShowroom(float Pitch, float Yaw);
    void ResetShowroomRotation();
    FRotator GetShowroomRotation();
}

class UEnemyShowroomController : UShowroomController
{
    AEnemyShowroomItem* EnemyInstance;

    void Receive_PlayAttack(UAnimSequenceBase* attackAnimation);
    void PlayAttack(UAnimSequenceBase* Animation);
    UEnemyShowroomController* DisplayEnemy(UObject* WorldContextObject, SoftClassProperty EnemyPreviewActor);
}

class UShowroomCameraKey : UDataAsset
{
}

class UShowroomSceneCaptureComponent : USceneCaptureComponent2D
{
    UShowroomCameraKey* CameraKey;
}

class UCharacterShowroomController : UShowroomController
{
    APlayerCharacter* CharacterInstance;

    void Receive_CharacterShown();
    void EquipWeapon(EItemCategory Category);
    UCharacterShowroomController* DisplayCharacter(UObject* WorldContextObject, UPlayerCharacterID* characterID, UShowroomCameraKey* Key);
}

class UShowroomManager : UActorComponent
{
    FVector ShowroomLocation;
    TSubclassOf<AShowroomStage> CurrentStage;
    AShowroomStage* StageInstance;
    UTextureRenderTarget2D* RenderTarget;

    UShowroomController* GetController();
    void ClearShowroom();
}

class UShowroomSettings : UDataAsset
{
    TSoftClassPtr<UEnemyShowroomController> EnemyShowroomController;
    TSoftClassPtr<UCharacterShowroomController> CharacterShowroomController;
    TSoftClassPtr<AShowroomStage> CharacterStage;
}

class AShowroomStage : AActor
{
    USceneCaptureComponent2D* SceneCapure;
    USceneCaptureComponent2D* ActiveCaptureComponent;
    TSubclassOf<UShowroomController> ControllerClass;
    UShowroomController* ControllerInstance;
    USceneCaptureComponent2D* SceneCapture;
    float MinPitch;
    float MaxPitch;
    USceneComponent* CameraFocusPoint;

    void ReceiveInitialize(UTextureRenderTarget2D* RenderTarget);
    USceneCaptureComponent2D* GetActiveCaptureComponent();
    UTextureRenderTarget2D* CreateRenderTarget();
}

class AShredder : UEnemyDeepPathfinderCharacter
{
    float FoldoutRange;
    float SpinRange;
    AActor* CurrentTarget;
}

class UShredderAnimInstance : UEnemyAnimInstance
{
    bool InFoldoutRange;
    bool InSpinRange;
}

class USimpleHealthComponent : UHealthComponentBase
{
    float Damage;
    float MaxHealth;
    bool InvulnerableToNonDefinedResistances;
    bool bShowHealthBar;
    FVector HealthBarOffsetWorld;
    TWeakObjectPtr<UEnemyComponent> EnemyComponent;
    TMap<UPawnStat*, float> Resistances;
    TArray<UDamageTag*> RequiredDamageTags;
    bool AutomaticFlushNetDormancy;

    void OnRep_Damage(float oldDamage);
    float HealFromDeath(float Amount);
}

class UMaggotAnimationSharingStateProcessor : UAnimationSharingStateProcessor
{
}

class UPipelineAnimationSharingProcessor : UAnimationSharingStateProcessor
{
}

class USkinEffect : UObject
{

    void Receive_AddToItem(UMeshComponent* Mesh, AActor* Skinnable, bool IsFirstPerson);
}

class UMaterialSkinEffect : USkinEffect
{
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
}

class USkeletalMeshSkinEffect : USkinEffect
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
}

class USkinnable : UInterface
{
}

class USkinnableComponent : UActorComponent
{
    UItemSkin* EquippedSkinColor;
    UItemSkin* EquippedSkinMesh;

    void UpdateSkin(UFSDPlayerState* Player);
    void OnLoadoutChanged();
    TArray<UItemSkin*> GetSkinsForItem(UItemID* ItemID, EItemSkinType SkinType);
    UItemSkin* GetEquippedSkinMesh(UItemID* ItemID, UFSDPlayerState* Player);
    UItemSkin* GetEquippedSkinColor(UItemID* ItemID, UFSDPlayerState* Player);
    UItemSkin* GetEquippedSkin(UItemID* ItemID, EItemSkinType SkinType, UFSDPlayerState* Player);
    TArray<UItemSkin*> GetEquippableColorSkins(UItemID* ItemID, UFSDPlayerState* Player);
    UItemSkin* GetDefaultItemSkin(UItemID* ItemID, EItemSkinType itemSkinType);
    UItemSkin* GetBaseColorSkinForMeshSkin(UItemID* ItemID, UItemSkin* meshSkin);
    void EquipSkin(UItemSkin* Skin, UItemID* ItemID, UFSDPlayerState* Player);
}

class UDroneSkinnableComponent : USkinnableComponent
{
}

class USoundClassManager : UGameInstanceSubsystem
{
}

class USoundMixManagerComponent : UActorComponent
{
    TArray<FSoundMixManagerItem> SoundMixes;
}

class ASpaceRigBar : AActor
{
    FSpaceRigBarOnNewDrinkableSpecial OnNewDrinkableSpecial;
    void DrinkableSignature(UDrinkableDataAsset* Drinkable);
    UInstantUsable* BarUsable;
    UBoxComponent* BarUsableCollider;
    TSubclassOf<UBarMenuWidget> BarMenuWidget;
    TArray<FVector> DrinkServingLocations;
    TArray<FDrinkableBarSlot> DrinkableBarSlots;
    UDrinkableDataAsset* DrinkableSpecial;

    void SpawnDrinkables(UDrinkableDataAsset* Drinkable, UPlayerCharacter* User);
    void ReceiveFinishedSpawningDrinkables(UDrinkableDataAsset* DrinkableData, UPlayerCharacter* Customer);
    void ReceiveDrinkableSpawned(ADrinkableActor* Drinkable, UPlayerCharacter* Customer, int32 LocationIndex);
    void ReceiveBeginSpawningDrinkables(UDrinkableDataAsset* DrinkableData, UPlayerCharacter* Customer);
    void PlayBartenderTip(UPlayerCharacter* User);
    void PayTip(UPlayerCharacter* Character, int32 Credits);
    void OnRep_DrinkableSpecial();
    bool HasUnclaimedDrinkables();
    bool HasSpaceForMoreDrinkables();
    int32 GetAvailableDrinkableSlots();
    void DrinkableSignature__DelegateSignature(UDrinkableDataAsset* Drinkable);
}

class USpaceRigBarMenuItem : UFSDUserWidget
{
    UDrinkableDataAsset* Drink;

    void Unselect();
    void Select();
}

class USpawnActorWithDebrisPosComponent : UActorComponent
{
    float MinDistanceBetweenSpwans;
    bool AddTerrainPlacementBlockers;
    bool AvoidImportantLocations;
    float MinDistanceToImportantLocations;

    bool PlaceActorsWithCallback(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve, SpawnActorDelegate__DelegateSignature OnSpawned, FVector CustomLocation);
    bool PlaceActors(int32 NumToSpawn, int32 NumToSpawnMin, int32 NumAllowedChecks, TSubclassOf<AActor> SpawnedActorClass, AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve, TArray<AActor*>& OutSpawnedActors, FVector CustomLocation);
    void AddTerrainPlacement(AActor* Actor, AProceduralSetup* setup);
}

class USpawningBlueprintLibrary : UBlueprintFunctionLibrary
{

    void SpawnEnemyGroupDescriptorSpreadOut(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, const TArray<FVector>& Locations, bool Alert, DeepPathFinderSize pfSize);
    void SpawnEnemyGroupDescriptor(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, FVector Location, bool Alert, DeepPathFinderSize pfSize);
    void SpawnEnemiesFromPool(UObject* WorldContextObject, float Difficulty, const TArray<FVector>& Locations, bool Alert, bool isConstantPreassure);
    void SpawnEnemiesAtLocationWithCallback(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, const EnemySpawnedDelegate__DelegateSignature& Callback, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    void SpawnEnemiesAtLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    void SpawnEnemiesAtEachLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, TArray<FVector> Locations, DeepPathFinderSize pfSize);
    TArray<FVector> GetSpawnPointsInRange(UObject* WorldContextObject, float distanceToPlayers, int32 spawnPointCount, DeepPathFinderSize pfSize);
    TArray<FVector> GetSpawnPointsInCircle(UObject* WorldContextObject, FVector Location, float Radius, int32 count, bool scaleToDificulty, float maxSpawnAngle, DeepPathFinderSize pfSize);
    TArray<FVector> GetSpawnPointsFromLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    TArray<FVector> GetSpawnPointsAroundLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    FVector GetSpawnPointInRange(UObject* WorldContextObject, float distanceToPlayers, DeepPathFinderSize pfSize);
    FVector GetSpawnPointFromLocation(UObject* WorldContextObject, FVector Location, float Distance, DeepPathFinderSize pfSize);
}

class USpecialAttackComponent : UAttackBaseComponent
{
    TArray<UAnimMontage*> Montages;
    FSpecialAttackComponentOnAttackActionNotify OnAttackActionNotify;
    void NameDelegate(FName nameValue);

    void TriggerAttack(FName Name);
    UAnimMontage* SelectMontage();
    void Receive_OnPerformAttack();
    void Receive_OnAborted();
    void OnMontageEnded(UAnimMontage* Montage, bool interrupted);
    void OnFrozen(bool IsFrozen);
}

class USpecialDamageAttackComponent : USpecialAttackComponent
{
    UDamageComponent* Damage;
}

class USpecialEventBlueprintLibrary : UBlueprintFunctionLibrary
{

    USchematic* TryGivePendingReward(UObject* WorldContextObject);
    void StorePendingReward(UObject* WorldContextObject, const TArray<USchematic*>& schematicsToChooseFrom);
    void SpawnEventRewardFrame(UObject* WorldContextObject, FVector Location);
    bool HasPendingReward(UObject* WorldContextObject);
    TArray<USchematic*> GetSpecialEventsRewardSchematics(UObject* WorldContextObject);
    void ClearPendingReward(UObject* WorldContextObject);
}

class USpecialEventSpawner : UObject
{
}

class USimpleSpecialEventSpawner : USpecialEventSpawner
{
    UDebrisPositioning* Positioning;
    TSoftClassPtr<AActor> EventActor;
    float EventAvoidanceRadius;
}

class UEncounterSpecialEventSpawner : USpecialEventSpawner
{
    FEncounterSpecialItem Encounter;
}

class USpecialEvent : UDataAsset
{
    float Weight;
    USpecialEventSpawner* EventSpawner;
}

class USpecialEventSettings : UDataAsset
{
    TArray<USpecialEvent*> SpecialEvents;
    TSoftClassPtr<AEventRewardFrame> EventRewardFrameClass;
    UDebrisPositioning* EventRewardFramePositioning;
    float EventRewardRadius;
    float CreditsReward;
    float XPReward;
    FRuntimeFloatCurve SpawnChanceMissionLengthCurve;
}

class UShootingSpiderAnimInstance : USpiderAnimInstance
{
    float LookAtBlend;
    bool CheckCurve;
    TWeakObjectPtr<AActor> TargetActor;
    FVector LookAtLocation;
}

class ASpiderEnemy : UEnemyDeepPathfinderCharacter
{
    UPawnStatsComponent* PawnStats;
    TArray<UAnimSequenceBase*> HitReactions;
    float FirstHitReactBlendIn;
    float OverrideHitReactBlendIn;
    UStaticMesh* GoreMesh;
    bool ApplyDifficultySpeedModifier;
    float AttackDamageModifier;
    bool LimitRagdollSpeed;
    float MaxRagdollSpeed;

    void PlayHitReaction();
    void OnDamaged(float Damage);
    UStaticMeshComponent* CreateHeadGore();
    void AlertNearbyEnemies();
}

class UEnemyBufferComponent : UActorComponent
{
    TSubclassOf<UStatusEffect> StatusEffect;
    FName BufferParticleSocket;
    UParticleSystem* Particles;
    float ParticleTangentSize;
    FEnemyBufferComponentOnBuffingChangedEvent OnBuffingChangedEvent;
    void BuffingChangedDelegate(bool isBuffing);
    float BuffRadius;
    int32 MaxBuffedTargets;
    FGameplayTagQuery BuffQuery;
    TArray<AFSDPawn*> BuffTargets;
    TArray<UParticleSystemComponent*> ParticleInstances;

    void SetBuffingEnabled(bool Enabled);
    void OnPawnDied(UHealthComponentBase* Health);
    void OnOwnerDied(UHealthComponentBase* Health);
}

class UAlignEnemyComponent : UActorComponent
{
    bool RotateWhileStationary;

    void SetRotateWhileStationary(bool Value);
    void OnRep_RotateWhileStationary();
}

class USplineDecoratorComponent : UInstancedStaticMeshComponent
{
    float DistanceBetweenInstances;
    int32 StartIndex;
    int32 EndIndex;
    bool bUpdateContinuously;
    FVector VerticalOffset;
    FVector Scale;
    float DistanceProgress;
    USplineComponent* SplineComponent;
    TArray<FTransform> NewInstancesTransforms;
    float Phase;

    void Update(float DeltaTime);
    void SetUpdateContinuously(bool InContinuously);
    void SetSplineComponentAndMaterial(USplineComponent* InSplineComponent, int32 ElementIndex, UMaterialInterface* Material);
    void SetSplineComponent(USplineComponent* InSplineComponent);
}

class ASplinePlant : AActor
{
    USplineComponent* PlantSpline;
    USceneComponent* PlantEndPoint;
    UAudioComponent* AudioComponent;
    TSoftObjectPtr<USoundCue> CueExtending;
    TSoftObjectPtr<USoundCue> CueRetracting;
    USoundCue* AudioExtending;
    USoundCue* AudioRetracting;
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
    TArray<USplineMeshComponent*> SegmentMeshCache;
    TArray<USplineMeshComponent*> CollisionMeshCache;
    USplineComponent* SplineInstance;
    UStaticMesh* SegmentMesh;
    int32 Seed;

    void SetTargetPlantLengthPercent(float InTargetPercent, float InPercentPerSecond, float InEaseExp);
    void SetTargetPlantLength(float InTargetLength, float InDistancePerSecond, float InEaseExp);
    void SetPlantLengthPercent(float InPercent);
    void ResetSpline();
    void ResetScale();
    void ReceivePrepareSpline(USplineComponent* InSplineComponent, int32 InSeed);
    void ReceiveMovementUpdated(float InDistanceProgress);
    void ReceiveMovementStarted(float InTargetDistance);
    void ReceiveMovementFinished(float InDistanceProgress);
    float GetPlantTargetLengthPercent();
    float GetPlantLengthPercent();
    FTransform GetNearestLocationToLocalPlayer();
    float GetFullPlantLength();
}

class AStabberVineRoot : UEnemyPawn
{

    void RemoveVine(UStabberVine* vine);
}

class AStabberVine : UTentacleBase
{
}

class UStatHat : UGameInstanceSubsystem
{

    void AddStatValue(FString Key, float Value);
    void AddStatCount(FString Key, int32 count);
}

class UStatusEffectExclusiveKey : UDataAsset
{
}

class UStatusEffect : UObject
{
    UPawnAffliction* PawnAffliction;
    TArray<UStatusEffectItem*> StatusEffects;
    float MaxResistance;
    UDamageClass* DamageClass;
    UStatusEffectExclusiveKey* ExclusiveKey;
    FRandRange ApplyEffectsInterval;
    bool CanStack;
    float Duration;
    bool ApplyDurationAfterPop;
    bool RemoveOnDeath;
    bool RemoveOnTemperatureStateChange;
    FGameplayTagQuery GameplayTagQuery;
    FGameplayTagContainer ExcludeTargetsWithTags;
    FGameplayTagContainer TargetRequiredTags;

    bool ShouldInstantiate();
    float GetStatusEffectDuration(TSubclassOf<UStatusEffect> StatusEffect);
    bool CanTrigger(AActor* Target);
}

class UStatusEffectItem : UObject
{
}

class UDotStatusEffectItem : UStatusEffectItem
{
    FRandRange damageAmount;
}

class UDotEnemyArmorStatusEffectItem : UStatusEffectItem
{
    FRandRange damageAmount;
}

class UPlayerArmorStatusEffectItem : UStatusEffectItem
{
    FRandRange ChangeAmount;
}

class UHealingStatusEffectItem : UStatusEffectItem
{
    bool HealPercentage;
    float NoDamageTimeRequired;
    UPawnAffliction* PawnAffliction;
    FRandRange Amount;
    bool IgnoreCanTakeDamage;
}

class UStatChangeStatusEffectItem : UStatusEffectItem
{
    UPawnStat* Stat;
    float StatChange;
    bool AffectedByResistances;
}

class UTemperatureStatusEffectItem : UStatusEffectItem
{
    FRandRange TemperatureChangeAmount;
}

class UHeatSourceStatusEffectItem : UStatusEffectItem
{
    float Temperature;
    ETemperatureIntensity Intensity;
}

class UPheromoneStatusEffectItem : UStatusEffectItem
{
}

class UMakeAttackableStatusEffectItem : UStatusEffectItem
{
    float AttackCostModifier;
    TSubclassOf<UAttackerPositioningComponent> ComponentClass;
}

class UFSDPawnStatusEffectItem : UStatusEffectItem
{
    float StaggerDurationMultiplier;
    float AttackSpeedModifier;
}

class UReplenishOxygenStatusEffectItem : UStatusEffectItem
{
}

class UEnemyTemperatureStatusEffectItem : UStatusEffectItem
{
    float WarmingRate;
    float UnFreezeTemperature;
    float TemperatureChangeScaleModifier;
}

class UEnemyDetonationStatusEffectItem : UStatusEffectItem
{
    bool FireDetonation;
    bool IceDetonation;
}

class UShoutStatusEffectItem : UStatusEffectItem
{
    UDialogDataAsset* BeginShout;
}

class UStatusEffectsComponent : UActorComponent
{
    TArray<FActiveStatusEffectBank> ActiveStatusEffects;
    UHealthComponentBase* OwnerHealth;
    TSet<UStatusEffectExclusiveKey*> ActiveExclusiveKeys;
    bool IgnoreAll;

    bool TryPushActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Target, AActor* Owner);
    bool TryPopActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Target, AActor* Owner);
    bool PushActiveStatusEffectInstance(UStatusEffect* StatusEffect, AActor* Owner);
    bool PushActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Owner);
    void PopAllActiveStatusEffects(AActor* Owner);
    bool PopActiveStatusEffectInstance(UStatusEffect* StatusEffect, AActor* Owner);
    bool PopActiveStatusEffect(TSubclassOf<UStatusEffect> StatusEffect, AActor* Owner);
    void OnDeath(UHealthComponentBase* HealthComponent);
    bool HasActiveEffect(TSubclassOf<UStatusEffect> StatusEffect);
    UStatusEffect* CreateStatusEffectInstance(TSubclassOf<UStatusEffect> StatusEffect, UObject* Owner);
}

class UStatusEffectTriggerComponent : UActorComponent
{
    FStatusEffectTriggerComponentOnEffectTriggered OnEffectTriggered;
    void EffectTriggeredDelegate(AActor* TargetActor, bool entered);
    FStatusEffectTriggerComponentOnActorEnterLeave OnActorEnterLeave;
    void EffectTriggeredDelegate(AActor* TargetActor, bool entered);
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    TArray<TSubclassOf<UStatusEffect>> LeaveTriggerEffects;
    UPrimitiveComponent* collider;
    bool RemoveStatusEffectOnEndOverlap;

    void OnOverlapEnd(AActor* MyActor, AActor* OtherActor);
    void OnOverlapBegin(AActor* MyActor, AActor* OtherActor);
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}

class UStayAwayFromWallsComponent : USceneComponent
{
    AFSDGameState* GameState;
    float MaxSpeed;
    float Acceleration;
    float BackAcceleration;
    float PointOffset;
    float AvoidSpeed;
    float GoBackSpeed;
    bool Active;

    void SetIsActive(const bool IsActive);
}

class USteerable : UInterface
{
}

class AStickyFlame : AActor
{
    UParticleSystemComponent* FlameParticles;
    UAudioComponent* Audio;
    UStatusEffectTriggerComponent* StatusTriggerComponent;
    FDecalData Decal;
    float FlameLifetime;
    float FlameExtinguishTime;
    float AudioFadeOutTime;
    bool IsActive;

    void OnRep_IsActive();
    void OnExtinguisFlame();
}

class UStickyFlameSpawner : UActorComponent
{
    FStickyFlameSpawnerOnStickyFlameSpawned OnStickyFlameSpawned;
    void StickyFlameSignature(AStickyFlame* StickyFlame);
    TSubclassOf<AStickyFlame> StickyFlameActor;
    float FlameLifetime;
    float StickyFlameIntervals;
    float StickyFlameMinDistance;
    float StickyFlameLastTime;
    FVector StickyFlameLastLocation;

    bool TrySpawnStickyFlameHit(const FHitResult& Hit);
    bool TrySpawnStickyFlame(FVector Location, FVector Normal);
    void StickyFlameSignature__DelegateSignature(AStickyFlame* StickyFlame);
    void ServerSpawnStickyFlame(FVector_NetQuantize Location, FVector_NetQuantizeNormal Normal);
}

class USTLMeshCarver : UObject
{
    FBox AABB;
    FDeepCSGFloatTree BSPTree;
    TArray<FVector> Vertices;
}

class USubHealthComponent : UActorComponent
{
    FSubHealthComponentOnDamageTaken OnDamageTaken;
    void DamageSig(float Amount);
    FSubHealthComponentOnHealthChanged OnHealthChanged;
    void HealthChangedSig(float Health);
    FSubHealthComponentOnCanTakeDamageChanged OnCanTakeDamageChanged;
    void SubHealthComponentDelegate(USubHealthComponent* subHealth);
    EHealthbarType HealthbarType;
    EEnemyHealthScaling EnemyHealthScaling;

    void SetCanTakeDamage(bool canTakeDamage);
    bool IsDead();
    bool IsAlive();
    float GetHealthPct();
    float GetHealth();
    bool GetCanTakeDamage();
}

class UDestructibleSubHealthComponent : USubHealthComponent
{
    float MaxHealth;
    float RadialDamageResistance;
    bool AllowInderectDamage;
    bool PassthroughDamageWhenDisabled;
    float Damage;
    USceneComponent* ArmorComponent;
    FDestructibleSubHealthComponentOnDestroyed OnDestroyed;
    void SubHealthDestroyed(UDestructibleSubHealthComponent* subHealth);

    void SubHealthDestroyed__DelegateSignature(UDestructibleSubHealthComponent* subHealth);
    void ResetHealth();
    void OnRep_Damage(float oldDamage);
}

class UPassthroughSubHealthComponent : USubHealthComponent
{
    USceneComponent* ArmorComponent;
}

class ATargetDummyPawn : AActor
{
    FGameplayTagContainer GameplayTags;
}

class UTeamResourcesComponent : UResourcesComponent
{
}

class ATeleporter : AActor
{
    ATeleporter* ConnectedTeleporter;
    float MinTeleporterRange;
    float MaxTeleporterRange;
}

class UTemporaryBuff : UDataAsset
{
    FText Description;
    TSoftObjectPtr<UTexture2D> Icon;

    void DeActivateBuff(UFSDPlayerController* Player);
    void ActivateBuffOnPlayer(UPlayerCharacter* Player);
    void ActivateBuffOnController(UFSDPlayerController* Player);
}

class UStatTemporaryBuff : UTemporaryBuff
{
    TMap<UPawnStat*, float> ModifiedStats;
}

class UTentacleAnimInstance : UAnimInstance
{
    FTentacleAnimInstanceProxy AnimInstanceProxy;
    bool UseActorRotationDuringExtension;
}

class UTerrainDetectComponent : USceneComponent
{
    FTerrainDetectComponentOnPointRemoved OnPointRemoved;
    void PointRemovedEvent();
    bool StartDetectOnBeginPlay;
    bool OnlyDetectOnServer;
    bool KillActorOnPointRemoved;
    FVector ActiveDetectPos;
    int32 DetectorId;

    void UpdateDetectLocation();
    void StopDetect();
    void StartDetect();
}

class UTerrainDetectBoxComponent : UBoxComponent
{
    FTerrainDetectBoxComponentOnBoxExcavated OnBoxExcavated;
    void PointRemovedEvent();
    bool StartDetectOnBeginPlay;
    bool OnlyDetectOnServer;
    int32 NumCornersToExcavate;
    int32 NumCornersExcavated;
    bool KillActorOnPointRemoved;

    void StartDetect();
}

class UTerrainDetectInterface : UInterface
{
}

class UTerrainFunctionLibrary : UBlueprintFunctionLibrary
{

    void CreateExplosionCrater2(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, FVector Normal, float NormalOffset, float NormalSqueeze, bool allowCustomBurntMaterial, bool DissolvePlatforms, UTerrainMaterial* overrideBurnedMaterial);
    void CreateExplosionCrater(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, bool allowCustomBurntMaterial, UTerrainMaterial* overrideBurnedMaterial);
}

class UProceduralFunctionLibrary : UBlueprintFunctionLibrary
{

    void SpawnTerrainImpact(UObject* WorldContextObject, UFXSystemAsset* particle, const FVector& Location, FRotator Rotation);
    AProceduralSetup* GetProceduralSetup(UObject* WorldContextObject);
    int32 GetObjectiveXP(TSubclassOf<UObjective> objectiveClass, float missionLength);
    int32 GetObjectiveCredits(TSubclassOf<UObjective> objectiveClass, float missionLength);
    UBiome* GetBiome(TSubclassOf<AProceduralSetup> levelSetup);
    void CreateEntrances(AProceduralSetup* pls, FRoomNode& Room, int32 exitCount, int32 entranceCount, UDebrisPositioning* exitPositioning, UDebrisPositioning* entrancePositioning);
    bool AllControllersFinishedTransitionToPlay(UObject* WorldContextObject);
}

class USmartRockTerrainMaterial : UTerrainMaterialBase
{
}

class UTerrainMaterial : UTerrainMaterialCore
{
    uint8 Collide;
    uint8 Diggable;
    uint8 CanBeDrilled;
    uint8 ExplosionProof;
    uint8 MeltsInFire;
    uint8 PlatformDissolvable;
    UResourceData* ResourceData;
    int32 HitsNeededToMine;
    TArray<FDecalData> HitDecal;
    bool CanHaveDecals;
    float PickAxeDigSize;
    bool RemoveDebrisOnFirstHit;
    UDialogDataAsset* ShoutLookAt;
    UDialogDataAsset* ShoutOnDig;
    UTerrainType* TerrainType;
    FText InGameName;
    FText InGameDescription;
    uint8 Precious;
    TSoftObjectPtr<UFXSystemAsset> DigParticles;
    TSoftObjectPtr<UMaterialInstance> DigParticlesMaterialOverride;
    TSoftObjectPtr<UFXSystemAsset> PartialDigParticles;
    TSoftObjectPtr<UMaterialInstance> PartialDigParticlesMaterialOverride;
    TSoftObjectPtr<USoundCue> CrumbleSound;
    TSoftObjectPtr<USoundCue> PartialMineSound;

    UFXSystemComponent* SpawnPartialDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation);
    UFXSystemComponent* SpawnDigParticles(UObject* WorldContextObject, FVector Location, FRotator Rotation, float Density);
    bool IsPrecious();
    UMaterialInstance* GetObjectMaterial();
    FText GetInGameName();
    UMaterialInstance* GetDigParticlesMaterialOverride();
}

class UTerrainType : UDataAsset
{
    uint8 Collide;
    uint8 Diggable;
    uint8 Precious;
    USoundCue* DebrisStandardSoundCue;
    TSoftObjectPtr<UParticleSystem> DebrisStandardParticles;
}

class UTerrainMaterialsCollection : UDataAsset
{
    TArray<UTerrainMaterial*> Materials;
    TArray<UTerrainType*> TerrainTypes;
}

class ATerrainModifyingProjectile : UProjectile
{
    FTerrainModifyingProjectileOnRevertToNormal OnRevertToNormal;
    void RevertToNormal();
    UTerrainMaterial* Terrain;
    UTerrainMaterial* OriginalGroundMaterial;
    UStaticMesh* CarveMesh;
    FVector CarveMeshScale;
    FVector LastHitLocation;
    float Radius;
    bool Revert;
    float TimeOnGround;
    float ExpensiveCarveNoise;

    void Tick(float DeltaSeconds);
    float GetRadius();
    void BeginPlay();
}

class UTerrainPlacementComponent : USceneComponent
{
    TArray<FTerrainPlacementBox> TerrainCheckers;
    EDebrisColliderType CapsuleType;
    FDebrisCapsule Capsule;
    int32 BlockerIDHack;

    void RemoveBlockers();
    void AddBlockers(AProceduralSetup* ProceduralSetup, const FTransform& Transform);
}

class ATerrainScannerItem : UAnimatedItem
{
    int32 TerrainScannerZoomDirection;
    FName ScannerAttachSocketName;
    float TerrainScannerStartAngle;
    float TerrainScannerScale;
    float DelayedTerrainScannerScale;
    float DelayedTerrainScannerZoom;
    bool IsLookingAtMap;
    bool UpdateMapToolActors;
    TArray<UAnimMontage*> UseLoopsFP;
    UAnimMontage* EndFP;
    TArray<UAnimMontage*> UseLoopsTP;
    UAnimMontage* EndTP;
    USceneComponent* TerrainScannerRoot;
    USceneCaptureComponent2D* TerrainScannerCapture;

    void Server_SetIslookingAtMap(bool lookingAtMap);
    void OnRep_IsLookingAtMap();
}

class UTerrainScannerStaticMesh : UStaticMeshComponent
{
    bool bVisibleAtBeginPlay;
    bool bHideOnDeath;
    bool bUseFogOfWar;
    bool bVisibleOnScanner;

    void SetVisibleOnScanner(bool InShowOnScanner);
    void OnOwnerDeath(UHealthComponentBase* InHealthComponent);
}

class UTerrainScannerSplineMesh : USplineMeshComponent
{
    bool bVisibleAtBeginPlay;
    bool bHideOnDeath;
    bool bUseFogOfWar;
    bool bVisibleOnScanner;

    void SetVisibleOnScanner(bool InShowOnScanner);
    void OnOwnerDeath(UHealthComponentBase* InHealthComponent);
}

class UTetherComponent : UActorComponent
{
    FTetherComponentOnPowerChanged OnPowerChanged;
    void TetherPowerChanged_Delegate(bool hasPower);
    FTetherComponentOnConnectionChanged OnConnectionChanged;
    void TetherConnectionChanged_Deletage(UTetherComponent* frontConnection, UTetherComponent* backConnection);
    FTetherComponentOnTetherMessage OnTetherMessage;
    void TeherMessage_Delegate(const FName& Message);
    FTetherComponentOnConnectionRangeUpdated OnConnectionRangeUpdated;
    void TetherRangeChanged(float range);
    UMeshComponent* TetherMesh;
    bool AutoSetup;
    TArray<UTetherComponent*> ConnectionHistory;
    FName ConnectionPointName;
    UTetherComponent* ForwardConnection;
    UTetherComponent* backConnection;
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
    void SetupConnectionpoint(UMeshComponent* Mesh, const FName& SocketName);
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
    UTetherComponent* GetTetherlineEnd(bool front);
    bool GetHasPower();
    UTetherComponent* GetForwardConnection();
    float GetConnectionRange();
    FVector GetConnectionPoint();
    TArray<UTetherComponent*> GetConnectionHistory();
    UTetherComponent* GetBackConnection();
    void DisconnectFromTetherLine(bool Deactivate);
    bool ConnectToTetherLine();
}

class ATether : UCarriableItem
{
    USkeletalMeshComponent* BaseMesh;
    UInstantUsable* UsableComponent;
    UCarriableComponent* Carry;
    USphereComponent* UseTrigger;
    UNiagaraComponent* TetherBeam;
    USphereComponent* PysicalCollision;
    UDamageComponent* ExplosionDamage;
    UParticleSystem* ExplosionParticle;
    USoundCue* ExplosionSound;
    bool IsOnGround;
    float KnockBackForce;

    void SetIsOnGround(bool IsOnGround);
    void OnDronePickup();
    void OnDroneDrop();
    void OnClosed();
    void Explode();
}

class ATetherStation : AActor
{
    USceneComponent* SceneRoot;
    USkeletalMeshComponent* BaseMesh;
    TSubclassOf<AFacilityGeneratorLine> FacilityGeneratorLineType;
    bool AreGeneratorsReady;
    bool FacilityActive;

    void SpawnGeneratorLines(const FTransform& startL, const FTransform& startR, const TArray<FTransform>& endL, const TArray<FTransform>& endR, AFacilityGeneratorLine*& outLineL, AFacilityGeneratorLine*& outLineR);
    void SetGeneratorsReady(bool ready);
    void Onrep_FacilityActive();
    void OnRep_AreGeneratorsReady();
    void OnGeneratorsReady();
    void OnActivated();
    void DisableShields();
    void ActivateFacility();
}

class UTetherAnimInstance : UAnimInstance
{
    bool SearchingForConnection;
}

class UThrowable : UInterface
{
}

class AThrownGrenadeItem : AItem
{
    FThrownGrenadeItemOnGrenadeThrown OnGrenadeThrown;
    void OnGrenadeThrown();
    UPlayerAnimInstance* FPAnimInstance;
    UPlayerAnimInstance* TPAnimInstance;
    UItemCharacterAnimationSet* CharacterAnimationSet;
    FVector ThrowOffset;
    float ThrowAngle;
    int32 MaxGrenades;
    int32 Grenades;
    float GrenadeCooldownRemaining;
    EThrownGrenadeItemState State;
    TSubclassOf<AGrenade> GrenadeClass;
    UGrenadeAnimationSet* DefaultGrenadeAnimationSet;
    UStaticMeshComponent* GrenadeMeshInstance;
    bool HasRejoinedInitialized;

    void Server_ThrowGrenade();
    void Server_SetState(EThrownGrenadeItemState itemState);
    void Server_Resupply(float percentage);
    void ResupplyGrenades(float percentage);
    void OnRep_State();
    void OnRep_GrenadeCount();
    void OnGrenadeThrown__DelegateSignature();
    void OnDeath(UHealthComponentBase* Health);
    void GrenadeThrowFinished();
    float GetGrenadeThrowVelocity();
    FRotator GetGrenadeThrowRotation();
    float GetGrenadeGravity();
    float GetGrenadeDuration();
}

class UTickableActionBase : UBlueprintAsyncActionBase
{
}

class UMiniTimerAction : UTickableActionBase
{
    FMiniTimerActionCompleted Completed;
    void TickDelegate(float DeltaTime, float NormalizedTime);
    FMiniTimerActionOnTick OnTick;
    void TickDelegate(float DeltaTime, float NormalizedTime);

    void TickDelegate__DelegateSignature(float DeltaTime, float NormalizedTime);
    UMiniTimerAction* MiniTimer(UObject* WorldContext, float InDuration);
}

class UMultiTextCounterAction : UTickableActionBase
{
    FMultiTextCounterActionCompleted Completed;
    void TickDelegate();
    FMultiTextCounterActionOnTick OnTick;
    void TickDelegate();
    UTextBlock* TotalBlock;
    FText TotalFormat;
    TArray<FTextCounterEntry> Entries;
    float CountSpeed;
    USoundCue* CountingSound;
    UAudioComponent* AudioComponent;
    UObject* WorldContext;

    void TickDelegate__DelegateSignature();
    UMultiTextCounterAction* StartMultiTextCounter(UObject* InWorldContext, UTextBlock* InTotalBlock, const FText InTotalFormat, float InCountSpeed, USoundCue* InCountingSound, const TArray<FTextCounterEntry> InEntries);
}

class UPendingLatentActionLibrary : UBlueprintFunctionLibrary
{

    void WaitOneFrame(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
}

class UMoveComponentToAction : UTickableActionBase
{
    TWeakObjectPtr<USceneComponent> Component;
    FMoveComponentToActionCompleted Completed;
    void CompletedDelegate(USceneComponent* Component);

    UMoveComponentToAction* EaseComponentTo(UObject* WorldContext, USceneComponent* InComponent, FTransform InEndTransform, uint8 InEasingMode, bool InWorldSpace, float InDuration);
    void CompletedDelegate__DelegateSignature(USceneComponent* Component);
}

class ATowerEventModule : UFSDPawn
{
    USceneComponent* Root;
    USkeletalMeshComponent* Mesh;
    UEnemyHealthComponent* Health;
    UArmorHealthDamageComponent* ArmorDamage;
    UWeakpointGlowComponent* WeakpointGlow;
    UParticleSystemComponent* SmokeParticles;
    FRotator MainBodyRotation;
    USkeletalMesh* DestroyedMesh;
    USoundCue* ExplosionSound;
    UParticleSystem* ExplosionEffect;
    ATowerEventModule* PreviousModule;
    ATowerEventModule* NextModule;
    UStaticMesh* ArmorMesh;
    int32 ArmorPieces;
    float ArmorLifetime;
    float ArmorPopForce;
    float ArmorShedDelay;
    TArray<UStaticMeshComponent*> ArmorMeshes;

    void OnAttack();
    void HideArmorPlates();
    void DestroyArmor();
}

class AAimingTowerEventModule : UTowerEventModule
{
    FRotator AimRotation;
    AActor* CurrentTarget;
}

class UTracerManager : UWorldSubsystem
{
    float StartScale;
    float WhizByStartDistance;
    float WhizByMaxDistanceFromTrajectory;
    float WhizBySpeed;

    void AddTracer(FVector Origin, const FVector& Destination, float Speed, UParticleSystem* particle, float MinDistance, float Offset, UParticleSystem* Trail);
}

class UTrackBuilderMovement : UActorComponent
{
    float MovementSpeed;
}

class UTrackMovementStateComponent : UCharacterStateComponent
{
    UAudioComponent* AudioStartComponent;
    UAudioComponent* AudioDuringComponent;
    UAudioComponent* AudioStopComponent;
    USoundBase* AudioOnStart;
    USoundBase* AudioOnDuring;
    USoundBase* AudioOnStop;
    float AudioOnFadeOut;
    UDialogDataAsset* StateUpdateShout;
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
    AZipLineConnector* Connector;
    EExitTrackMode ExitMode;
    FPipelineMovementData TrackMovementData;

    void ServerExitMode(EExitTrackMode eMode);
    void ServerAddTemporaryAcceration(float Acceleration, float Duration);
    void OnRep_TrackMovementdata(FPipelineMovementData& oldState);
    void JumpPressed();
}

class UTrailComponent : USceneComponent
{
    float MinRadius;
    float MinStep;
    float MaxStep;
    bool MinimizePath;
    TArray<FVector> Trail;
    TEnumAsByte<ETraceTypeQuery> Query;
    bool bDrawPath;
    float MaxDrawDistance;
    float PathLineWidth;
    float PathNodeSize;
    FColor DrawColor;

    int32 TrailLength();
    void ToggleDrawPath(bool Visible);
    void Reset();
    FVector GetTrailPoint(int32 Index);
    FVector GetNextTrailPointFrom(FVector From);
    int32 GetNearestTrailIndex(FVector Location);
    UTrailComponent* GetNearestPlayerTrail(UWorld* World, FVector From, float MinDist, float MaxDist);
    FColor GetDrawColor();
}

class ATreasureBox : ATreasureContainer
{
    URepairableComponent* repairable;
    URepairableUsable* RepairUsable;
    USingleUsableComponent* HammeringUsable;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* MiddlePlane;
    USkeletalMeshComponent* BoxMesh;
    float CollectActivationDelay;
    UAnimSequenceBase* OpenBoxAnim;
    float DelayToOpenAfterRepair;
    TSubclassOf<AActor> ResourceClass;
    UTreasureRewarder* boxRewarder;
    float HologramRotationSpeed;
    int32 ItemsInserted;
    bool IsTreasureAvailable;

    void PlaceResources(AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve);
    void OnUsedEvent(UPlayerCharacter* User, EInputKeys Key);
    void OnRepairedEvent(URepairableComponent* repaired);
    void OnHammerProgress(float Progress);
    void OnHammered(UPlayerCharacter* User, EInputKeys Key);
    void OnFullyRepairedEvent(URepairableComponent* repaired);
    void OnAllResourcesCollectedEvent(URepairableComponent* repaired);
    void BP_OnCollectedTreasure(UPlayerCharacter* collector);
    void AfterRepairDelay();
    void ActivateCollection();
}

class UTreasureBoxAnimInstance : UAnimInstance
{
    float BuildProgress;
    float PhysicsAlpha;
    bool IsTreasureAvailable;
    bool IsLeftInserted;
    bool IsRightInserted;
}

class UTreasureFunctionLibrary : UBlueprintFunctionLibrary
{

    bool IsBoxInWall(UObject* WorldContextObject, AProceduralSetup* setup, float SizeX, float SizeY, float sizeZ, const FTransform& transorm);
    bool GiveSimilarSkin(UObject* WorldContextObject, UItemSkin* targetSkin, UItemID* targetItem, UItemSkin*& outGivenSkin, UItemID*& outSkinnedItem);
    void GiveRandomSkin(UObject* WorldContextObject, UItemSkin*& outGivenSkin, UItemID*& outSkinnedItem);
}

class UTreasureRewarder : UActorComponent
{
}

class USkinTreasureRewarder : UTreasureRewarder
{
    UItemSkin* GivenSkin;
    UItemID* GivenSkinID;
}

class UDrinkTreasureRewarder : UTreasureRewarder
{
    UDrinkableDataAsset* GivenDrink;
}

class UVictoryPoseRewarder : UTreasureRewarder
{
    UVictoryPose* GivenPose;
    UPlayerCharacterID* GivenCharacterID;
}

class UPickaxePartRewarder : UTreasureRewarder
{
    UPickaxePart* PickaxePart;
}

class UVanityItemRewarder : UTreasureRewarder
{
    UVanityItem* GivenVanityItem;
    UPlayerCharacterID* GivenCharacterID;
}

class UTreasureSettings : UDataAsset
{
    TArray<UItemSkinSet*> SkinSets;
    TArray<UDrinkableDataAsset*> Drinks;
    TArray<UVictoryPose*> VictoryPoses;
    TArray<ETreasureType> CrateTreasureTypes;
    FText CrateTreasureEmptyMsg;
    TArray<ETreasureType> LostPackTreasureTypes;
    FText LostPackEmptyMsg;
    UItemAquisitionSource* CrateAquisitionSource;
    UItemAquisitionSource* LostPackAquisitionSource;
    FRuntimeFloatCurve TreasureChanceMissionLengthCurve;
    TArray<USpecialEvent*> TreasureEvents;
}

class UTreeOfVanity : USavableDataAsset
{
    TArray<FVanityNode> Nodes;

    void ClearNodes();
    void AddNode(UReward* Reward, int32 NodeID, TArray<int32> ConnectedNodes, bool isStartingNode, bool isBig, FVector2D Position);
}

class UTreeOfVanityItemWidget : UUserWidget
{
    UReward* Reward;
    bool bIsPrimaryReward;
    bool bIsStartingNode;
    TArray<UTreeOfVanityItemWidget*> ConnectedNodes;
    int32 NodeID;
    bool bIsClickable;
    UReward* DefaultReward;
    TArray<UUserWidget*> NodeConnections;
    bool bIsBought;

    void SetIsBought(bool inIsBought);
    void SetData(UReward* InReward, bool inIsPrimaryReward, bool inIsStartingNode, TArray<UTreeOfVanityItemWidget*> inConnectedNodes, int32 inNodeID);
    void OnDataUpdated();
    bool GetIsBought();
}

class UTremorAttackComponent : USpecialDamageAttackComponent
{
    bool IsAttackActive;
    UBoxComponent* CollisionComponent;
    UParticleSystemComponent* ParticlesComponent;
    float InitialParticlesDelay;
    float PostParticleDelay;
    float TargetMaxDistanceFromGround;
    float TimeBetweenDamageTicks;
    float LaunchForce;
    float Duration;

    void StopParticles();
    void StartParticles();
    void OnTargetExitedTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnTargetEnteredTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnRep_IsAttackActive();
    bool IsInited();
    void InitTremorAttack(UBoxComponent* Box, UParticleSystemComponent* Particles);
}

class UTunnelParameters : UDataAsset
{
    UFloodFillSettings* PathfinderNoise;
    float PathZPenalty;
    float PathDirectionPenalty;
    float PathEntranceAnglePenalty;
    float ObstacleCostScale;
    bool AllowBlockedEntrances;
    bool PickBestMatchingEntrance;
}

class UTunnelSegmentSetting : UDataAsset
{
    UTerrainMaterial* Material;
    UFloodFillSettings* PathfinderNoise;
    UFloodFillSettings* CielingNoise;
    UFloodFillSettings* WallNoise;
    UFloodFillSettings* FloorNoise;
    FVector2D VRange;
    FVector2D HRange;
    FVector2D Cielingheight;
    FVector2D FloorHeight;
    FVector2D CielingNoiseRange;
    FVector2D WallNoiseRange;
    FVector2D FloorNoiseRange;
}

class UTunnelSettings : UDataAsset
{
    UTerrainMaterial* Material;
    UFloodFillSettings* PathfinderNoise;
    UFloodFillSettings* CielingNoise;
    UFloodFillSettings* WallNoise;
    UFloodFillSettings* FloorNoise;
    FVector2D VRange;
    FVector2D HRange;
    FVector2D Cielingheight;
    FVector2D FloorHeight;
    FVector2D CielingNoiseRange;
    FVector2D WallNoiseRange;
    FVector2D FloorNoiseRange;
}

class UTunnelSetting : UDataAsset
{
    UFloodFillSettings* PathfinderNoise;
    UTunnelSegmentSetting* BaseSegmentSetting;
    UTunnelSegmentSetting* TightBendSegmentSetting;
    UTunnelSegmentSetting* DirtSegmentSetting;
    UTunnelSegmentSetting* DirtOffsetSetting;
    TArray<FTunnelSettingItem> VariationSegments;
    float Weight;
}

class UTutorialContentWidget : UFSDUserWidget
{
    FTutorialContentWidgetOnTutorialFinished OnTutorialFinished;
    void OnTutorialFinished(UTutorialContentWidget* TutorialWidget);

    void OnTutorialFinished__DelegateSignature(UTutorialContentWidget* TutorialWidget);
    void OnShown();
    void OnRemoveWidget();
}

class UTutorialLevelWidget : UFSDUserWidget
{
    float DelayBetweenTutorials;

    void ShowTutorialWidget(TSubclassOf<UTutorialContentWidget> TutorialWidget, bool ignoreQueue);
    void RemoveTutorialWidget(UTutorialContentWidget* TutorialWidget);
    void RemoveAllTutorials();
    void OnTutorialFinished(UTutorialContentWidget* TutorialWidget);
    void OnNewActiveTutorial(UTutorialContentWidget* Widget);
}

class ATutorialManager : AActor
{
    float MinimumTimeBetweenTutorials;
    bool ResetTutorialsOnStart;
    bool ShowTutorialsDebug;
    TWeakObjectPtr<AFSDPlayerController> PlayerController;
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    TArray<TWeakObjectPtr<UTutorialComponent>> Tutorials;
    TWeakObjectPtr<UTutorialComponent> ActiveTutorial;
}

class UTutorialWidget : UFSDUserWidget
{
    float RemainingVisibleTime;

    void Show(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image, float Duration);
    void OnShow(const FText& Text, const FText& Title, const FText& TaskText, UTexture2D* Image);
    void OnHide(bool watched);
    void Hide(bool watched);
    void ChangeHintDuration(float NewDuration);
}

class UBTTask_TunnelToTarget : UBTTaskNode
{
    FBlackboardKeySelector TargetKey;
    float BurrowSpeed;
    float BurrowDuration;
    FFloatInterval DurationClamp;
}

class UHeightenedSenseComponent : UFloatPerkComponent
{
    UPawnAffliction* HeightenSenseAffliction;
    float AlertDistance;
    TArray<FHeightenedSenseTracker> ActiveTrackers;
    bool bAfflictionActivated;

    void RemoveTracker(AActor* TrackerActor);
    void AddTracker(AActor* TrackerActor);
}

class UUIFunctionLibrary : UBlueprintFunctionLibrary
{

    void SetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32 loadoutIndex, int32 IconIndex);
    void RemoveItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool MatchChildNotifications);
    bool IsInItemUINotificationSet(UObject* WorldContextObject, UObject* Item);
    int64 GetUnixTimeStamp();
    int32 GetLoadoutIcon(UObject* WorldContextObject, UPlayerCharacterID* characterID, int32 loadoutIndex);
    TArray<FText> FormatNewsTexts(TArray<FText> texts, int32 RandomSeed, UNewsTextLists* wordList, UMissionNameBank* MissionNameBank);
    void ClearAllItemUINotifications(UObject* WorldContextObject);
    void CheckItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item, bool& HasNotification, bool MatchChildNotifications);
    void AddItemUINotification(UObject* WorldContextObject, TArray<UObject*> Item);
}

class UUpgradableGearComponent : UActorComponent
{
    UItemData* ItemData;
    TArray<FUpgradeTier> UpgradeTiers;
    UOverclockBank* OverclockBank;
    TArray<UItemUpgrade*> AllOverclocks;
    UTexture2D* IconLine;
    UTexture2D* IconBG;
    UTexture2D* IconDetailed;
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
    bool PurchaseItem(UObject* WorldContextObject, UItemID* ItemID);
    bool PlayerOwnesUpgradeInAllTiers(TSubclassOf<AActor> itemClass, UObject* WorldContextObject);
    void MirrorUpgradePreviewStatus(FGearStatEntry& From, FGearStatEntry& to);
    bool IsUpgradeEquipped(TSubclassOf<AActor> itemClass, UItemUpgrade* Upgrade, UFSDPlayerState* Player);
    bool IsTierUnLocked(TSubclassOf<AActor> itemClass, int32 tierIndex, UFSDPlayerState* Player, UPlayerCharacterID* characterID);
    bool IsOverclockingEnabled(UObject* WorldContextObject, UFSDPlayerState* Player, UPlayerCharacterID* characterID, TSubclassOf<AActor> itemClass);
    bool IsItemUnlocked(UObject* WorldContextObject, UItemID* Item);
    bool IsItemOwned(UObject* WorldContextObject, UItemID* Item);
    bool IsItemEquipped(UObject* WorldContextObject, UItemID* ItemID);
    int32 GetUpgradeTier(TSubclassOf<AActor> itemClass, UItemUpgrade* ItemUpgrade);
    FString GetSourceGearName();
    TMap<UResourceData*, float> GetResourceCost();
    int32 GetRequiredCharacterLevel();
    UTexture2D* GetPreviewImage();
    TSubclassOf<AActor> GetPreviewActorClass();
    TArray<UItemUpgrade*> GetOverClocks();
    int32 GetMasteryProgress(UObject* WorldContextObject, UItemID* ItemID, int32& maxMastery);
    TArray<FMasteryItem> GetMasteryLevels(UItemID* ItemID);
    bool GetMasteryForLevel(const TArray<FMasteryItem>& masteryLevels, int32 Level, FMasteryItem& outLevel);
    TArray<FUpgradeTier> GetItemUpgradeTiers(TSubclassOf<AActor> itemClass);
    EItemUpgradeStatus GetItemUpgradeStatus(UObject* WorldContextObject, TSubclassOf<AActor> itemClass, UItemUpgrade* ItemUpgrade, UPlayerCharacterID* characterID);
    TArray<UItemUpgrade*> GetItemUpgrades(TSubclassOf<AActor> itemClass, TSubclassOf<UItemUpgrade> upgradeClass, UFSDPlayerState* Player, uint8 upgradeIndex);
    TSubclassOf<AActor> GetItemPreviewClassFromActor(TSubclassOf<AActor> Actor);
    TSubclassOf<AActor> GetItemPreviewClass(UItemID* ItemID);
    bool GetItemMasteryForLevel(UItemID* ItemID, int32 Level, FMasteryItem& outLevel);
    UTexture2D* GetIconLine();
    UTexture2D* GetIconDetailed();
    UTexture2D* GetIconBG();
    FText GetGearStatValue(FGearStatEntry& Entry);
    TArray<FGearStatEntry> GetGearStats(UFSDPlayerState* PlayerState, TSubclassOf<AActor> ActorClass);
    FString GetGearSourceName(UItemID* ItemID);
    FText GetGearName();
    FText GetGearDescription();
    FText GetGearCategory();
    TArray<UItemUpgrade*> GetEquippedUpgrades(TSubclassOf<AActor> itemClass, UFSDPlayerState* Player);
    UItemUpgrade* GetEquippedUpgradeAtTier(TSubclassOf<AActor> itemClass, int32 tierIndex, UPlayerCharacterID* characterID, UFSDPlayerState* Player);
    UItemUpgrade* GetEquippedOverclock(UObject* WorldContextObject, TSubclassOf<AActor> itemClass);
    TArray<UItemUpgrade*> GetEquippableOverclocks(UObject* WorldContextObject, TSubclassOf<AActor> itemClass, UPlayerCharacterID* characterID);
    int32 GetCreditCost();
    TArray<FCraftingCost> GetCraftingCost();
    int32 GetCharacterLevelRequiredForItem(UItemID* ItemID);
    TArray<UItemUpgrade*> GetAllUpgrades();
    void ClearEquippedUpgrade(TSubclassOf<AActor> itemClass, int32 tierIndex, UFSDPlayerState* Player);
    void CheckMasteryUnlocks(UItemID* ItemID, UFSDPlayerController* Player);
    bool CanItemOverclock(UObject* WorldContextObject, TSubclassOf<AActor> itemClass);
    bool CanAffordUpgrade(UObject* WorldContextObject, UItemUpgrade* Upgrade);
    bool CanAffordItem(UObject* WorldContextObject, UItemID* ItemID);
}

class UUpgradableItemComponent : UUpgradableGearComponent
{
}

class UUpgradableBoscoComponent : UUpgradableGearComponent
{
}

class UUseAnimationSetting : UDataAsset
{
    UAnimMontage* BeginFP;
    TArray<UAnimMontage*> LoopsFP;
    UAnimMontage* EndFP;
    UAnimMontage* BeginTP;
    TArray<UAnimMontage*> LoopsTP;
    UAnimMontage* EndTP;
    bool IsManuallyControlled;
}

class UBPInstantUsable : UInstantUsable
{

    bool BPCanUse(UPlayerCharacter* User, USceneComponent* UseCollider);
}

class UShieldBoostUsable : UInstantUsable
{

    void OnCharacterBoosted(UPlayerCharacter* User, EInputKeys Key);
}

class URepairableUsable : UInstantUsable
{
}

class USingleUsableComponent : UUsableComponent
{
    FSingleUsableComponentOnUsedBy OnUsedBy;
    void UsedBySignature(UPlayerCharacter* User, EInputKeys Key);
    FSingleUsableComponentOnUseBegin OnUseBegin;
    void UsedBySignature(UPlayerCharacter* User, EInputKeys Key);
    FSingleUsableComponentOnProgress OnProgress;
    void ProgressSignature(float Progress);
    FSingleUsableComponentOnUsableChanged OnUsableChanged;
    void UsableChangedSignature(bool CanUse);
    FSingleUsableComponentOnUserCountChanged OnUserCountChanged;
    void UserCountChangedDelegate(int32 userCount);
    FSingleUsableComponentOnFailed OnFailed;
    void OnFailed();
    USoundCue* AudioBeginUse;
    USoundCue* AudioFailedUse;
    USoundCue* AudioCompletedUse;
    UDialogDataAsset* BoscoLaserpointerShout;
    bool CoopUse;
    UPawnStat* UseSpeedStat;
    float CoopUseMultiplier;
    bool Usable;
    bool TurnOffAfterUse;
    bool MultipleUse;
    bool CancelUseOnRestrictionChange;
    bool bShowUsingUI;
    TSoftObjectPtr<UTexture2D> UsableIcon;
    float useDuration;
    float Progress;
    float DesiredProgress;
    int32 userCount;
    UAudioComponent* AudioBeginUseInstance;

    void Use(UPlayerCharacter* User, EInputKeys Key, float DeltaTime);
    void SetCanUse(bool CanUse);
    void OnRep_UserCount();
    void OnRep_Usable();
    void OnRep_DesiredProgress();
    void Cheat_Use(UPlayerCharacter* User, EInputKeys Key);
    void All_PlayFailedAudio();
}

class UContinuousUsableComponent : UUsableComponent
{
    FContinuousUsableComponentUseTick UseTick;
    void UsedBySignature(UPlayerCharacter* User, EInputKeys Key);
    float TimeBetweenTicks;
    bool Usable;

    void SetCanUse(bool CanUse);
}

class UOncePerPlayerUsableComponent : UInstantUsable
{
    FOncePerPlayerUsableComponentOnUsersChangedEvent OnUsersChangedEvent;
    void UserAdded(const TArray<FUniqueNetIdRepl>& userList);
    TArray<FUniqueNetIdRepl> Users;

    void OnUsersChanged(const TArray<FUniqueNetIdRepl>& userList);
    void OnRep_Users();
}

class UEventRewarderUsableComponent : USingleUsableComponent
{
    FText RewardUseText;

    FText CreateUseText(int32 blankSchematicCount);
}

class USpecialEventUsableComponent : USingleUsableComponent
{
}

class UControlEnemyUsable : UInstantUsable
{
}

class UUsableAggregator : UItemAggregator
{
    FUsableAggregatorOnVisibilityChanged OnVisibilityChanged;
    void AggregatorVisibilityChangedDelegate(bool IsVisible);
    FText UsingText;

    float GetProgress();
}

class UUsingStateComponent : UCharacterStateComponent
{
}

class UValidationFunctionLibrary : UBlueprintFunctionLibrary
{

    void SetSelectedAssets(TArray<FString> Paths);
}

class UValidatorStrategy : UObject
{
}

class USimpleNameStrategy : UValidatorStrategy
{
}

class UPrefixNameStrategy : USimpleNameStrategy
{
}

class UPostfixNameStrategy : USimpleNameStrategy
{
}

class UPreOrPostfixNameStrategy : USimpleNameStrategy
{
}

class UContainsNameStrategy : USimpleNameStrategy
{
}

class UNotContainsNameStrategy : USimpleNameStrategy
{
}

class UValidDependenciesStrategy : UValidatorStrategy
{
}

class UVanityAnimInstance : UAnimInstance
{
    EVanitySlot VanitySlot;
    bool ArmorCoversBeard;
    FVector ArmorChestThickness;
    FRotator ArmorChestRotation;
    FVector ExternalForce;
    float ExternalForceMultiplier;
    float MaxForce;
}

class AVanityTestCharacter : UCharacter
{
    float ArmorThickness;
    float BeardThickness;
    bool ArmorCoversBeard;
    TMap<EVanitySlot, FVanityTestCharacterItem> vanityItems;
    USkeletalMesh* WeaponMesh;

    void SetupVanity();
}

class AVanityCharacter : AActor
{
    UChildActorComponent* ChildActorComponent;
    UAnimSequenceBase* Animation;
    USkinColorVanityItem* skinColor;
    UBeardColorVanityItem* BeardColor;
    UBeardColorVanityItem* DynamicBeardColor;
    UHeadVanityItem* Head;
    UEyeBrowsVanityItem* EyeBrows;
    USideburnsVanityItem* Sideburns;
    UMoustacheVanityItem* Moustache;
    UBeardVanityItem* Beard;
    UArmorVanityItem* Armor;
    UArmorMaterialVanityItem* ArmorColor;
    USkeletalMeshComponent* Mesh;
    USkeletalMeshComponent* BodyMesh;
    UBeardColorVanityItem* DefaultHairColor;
    UMaterialInterface* DefaultArmorMaterial;
    TSubclassOf<AItem> itemClass;
    UItemSkin* Framework;
    UItemSkin* Paintjob;

    void DisplayVanity();
    void Clean();
}

class AIconGenerationBase : AActor
{
    USceneCaptureComponent2D* ActiveCaptureComponent;
    UMaterialInterface* DownScaleMaterial;
}

class UIconGenerationCameraKey : UDataAsset
{
}

class UIconSceneCaptureComponent : USceneCaptureComponent2D
{
    UIconGenerationCameraKey* CameraKey;
}

class AIconGenerationCharacter : AIconGenerationBase
{
    UMaterialInterface* OrigBaseMaterial;
    USkeletalMeshComponent* Mesh;
    USkeletalMeshComponent* BodyMesh;
    UBeardColorVanityItem* HairColor;
    UMaterialInterface* ArmorMaterial;
    TArray<UIconSceneCaptureComponent*> CaptureComponents;
}

class UPickaxeIconSceneCaptureComponent : USceneCaptureComponent2D
{
    bool bIsFullView;
    EPickaxePartLocation CameraKey;
}

class AIconGenerationPickaxe : AIconGenerationBase
{
    TArray<UPickaxeIconSceneCaptureComponent*> CaptureComponents;
}

class UWeaponIconSceneCaptureComponent : USceneCaptureComponent2D
{
    UIconGenerationCameraKey* CameraKey;
}

class AIconGenerationWeapon : AIconGenerationBase
{
    TArray<UWeaponIconSceneCaptureComponent*> CaptureComponents;
}

class UVanityItem : USavablePrimaryDataAsset
{
    FVanityItemOnUnlockFlagChanged OnUnlockFlagChanged;
    void OnCraftableObjectUnlockFlagChanged(UVanityItem* Item, bool IsUnlockFlagged);
    int32 SortingPriority;
    FText ItemName;
    FText ItemDescription;
    FString NotesInternal;
    UTexture2D* Icon;
    bool IsPartOfRandomization;
    UIconGenerationCameraKey* IconGenerationCameraKey;
    UDLCBase* RequiredDLC;
    UDLCBase* CraftingRestrictionDLC;
    bool bUnLockedFlag;
    int32 CraftingPlayerRankRequired;
    TMap<UResourceData*, float> CraftingCost;
    int32 CraftingCreditsCost;
    TSet<UPlayerCharacterID*> RestrictToCharacters;

    bool RemoveFromOwned(UObject* WorldContext);
    void PreviewItem(UFSDPlayerState* PlayerState, bool Show);
    void MarkAsUnLocked();
    bool IsOwned(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    bool IsEquipped(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    void GiftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    EVanitySlot GetVanitySlot();
    TArray<FCraftingCost> GetResourceCost();
    int32 GetRequiredPlayerRank();
    bool GetIsUnLockedFromStart();
    UTexture* GetIcon(UObject* WorldContextObject);
    int32 GetCraftingCreditsCost();
    FText GetCraftableName();
    UTexture2D* GetCraftableIcon();
    FText GetCraftableDescription();
    void CraftItem(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    void ClearUnLockedMark();
    bool CanCraft(UObject* WorldContextObject);
    void ApplyItemPermanently(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    void ApplyItem(UPlayerCharacter* Player, bool isPermanent);
}

class UItemMaterialVanityItem : UVanityItem
{
    UMaterialInterface* Material;
}

class USkinColorVanityItem : UItemMaterialVanityItem
{
}

class UBeardColorVanityItem : UVanityItem
{
    UMaterialInterface* HairColor;
    UMaterialInterface* EyebrowColor;
    UMaterialInterface* MoustacheColor;
    UMaterialInterface* SideburnColor;
    UMaterialInterface* BeardColor;
}

class UHeadVanityItem : UVanityItem
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    EHeadVanityType HeadVanityType;
    bool HideEyebrows;
    bool HideSideburns;
    bool HideMoustache;
    bool HideBeard;
    bool HideAll;
    bool HideHead;
    ECharacterHeadMesh HeadMesh;
    TSoftObjectPtr<UMaterialInterface> MaterialOverride;
}

class UBeardVanityItem : UVanityItem
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
    float BeardThickness;
    bool RequiresSlimArmor;
    bool UseHairColor;
    bool UseArmorColor;
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
}

class UArmorVanityItem : UVanityItem
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
    TSoftObjectPtr<USkeletalMesh> BeardCompatibleMesh;
    TSoftObjectPtr<USkeletalMesh> FPMesh;
    TSoftClassPtr<UAnimInstance> AnimInstance;
    bool CropBeard;
    float ArmorThickness;
    TSoftObjectPtr<UMaterialInterface> MaterialOverride;
    bool CanOnlyUseDefaultArmorMaterial;
    UArmorMaterialVanityItem* DefaultArmorMaterial;
    TArray<FTattooArmorItem> Tattoos;

    void PreviewArmor(UFSDPlayerState* PlayerState, bool Show, bool useDefaultArmorMaterial);
}

class UArmorMaterialVanityItem : UVanityItem
{
    TSoftObjectPtr<UMaterialInterface> Material;
    TSoftObjectPtr<UMaterialInterface> IconMaterial;
    UArmorVanityItem* LockedToArmor;
    TArray<UArmorVanityItem*> BannedArmors;
}

class UEyeBrowsVanityItem : UVanityItem
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
}

class UMoustacheVanityItem : UVanityItem
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    bool RequiresSlimArmor;
}

class USideburnsVanityItem : UVanityItem
{
    TSoftObjectPtr<USkeletalMesh> Mesh;
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    bool RequiresSlimArmor;
}

class UVanityTattoo : UDataAsset
{
    TSoftObjectPtr<UTexture2D> Texture;
    FVector2D Location;
    float RotationAngle;
    float ScaleBase;
    float ScaleStretch;
}

class UVanitySchematicBank : USchematicBankBase
{
    USchematicCategory* SchematicCategory;
    TMap<UVanityItem*, FSchematicBankItem> vanityItems;

    void AppendItems(TArray<UVanityItem*>& toArray);
}

class UVeinResourceData : UResourceData
{
    UTerrainMaterial* TerrainMaterial;
    float UnitsPerLenth;
    bool ScaleToResourceDistribution;
    UVeinResourceCreator* ResourceCreator;

    UTerrainMaterial* GetTerrainMaterial();
}

class UVictoryPoseFunctionLibrary : UBlueprintFunctionLibrary
{

    bool IsRandomVictoryPose(UVictoryPose* VictoryPose);
    TArray<UVictoryPose*> GetOwnedVictoryPoses(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    UVictoryPose* GetEquippedVictoryPose(UObject* WorldContextObject, UPlayerCharacterID* characterID);
}

class UVictoryPose : USavablePrimaryDataAsset
{
    FText Title;
    FText Description;
    bool UnlockedFromStart;
    TArray<TSoftObjectPtr<UAnimSequence>> Walks;
    TSoftObjectPtr<UAnimSequence> pose;
    TSoftClassPtr<AActor> Prop_Actor;
    TSoftObjectPtr<UAnimSequence> Prop_Walk;
    TSoftObjectPtr<UAnimSequence> Prop_Pose;
    TSoftObjectPtr<UAnimSequence> Prop_Idle;

    void Unlock(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    void ResetUnlock(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    bool IsUnlockedNotFromStart(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    bool IsUnlocked(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    void Equip(UObject* WorldContextObject, UPlayerCharacterID* characterID);
}

class UVictoryPoseSchematicBank : USchematicBankBase
{
    USchematicCategory* SchematicCategory;
    TMap<UVictoryPose*, FSchematicBankItem> VictoryPoses;
}

class UVictoryPoseSettings : UDataAsset
{
    UTexture2D* GenericVictoryPoseIcon;
    TArray<UVictoryPose*> LoadedVictoryPoses;
    UVictoryPose* RandomVictoryPose;
    TArray<TSubclassOf<UActorComponent>> ModReferencesHack;
    TArray<TSubclassOf<AActor>> ModProxyHack;

    TArray<UVictoryPose*> GetVictoryPoses();
}

class UWalkingStateComponent : UCharacterStateComponent
{
    bool SlidingEnabled;
    bool ShowDebug;
    float SlideAngle;
    float SlideAcceleration;
    float MaxSlideSpeed;
    float MaxClimbDistance;
    USoundBase* AudioSliding;
    USoundBase* IceSliding;
    UAudioComponent* AudioComponentSliding;
    UAudioComponent* AudioComponentIceSliding;

    void TrackGrindCallback(UPlayerCharacter* User, EInputKeys Key);
    void Server_StartTrackMovement(UTrackBuilderMovement* InMovement);
    void Server_SetIsSliding(bool isSliding);
    void JumpPress();
}

class UWeakpointGlowComponent : UActorComponent
{
    FName EmissiveParam;
    TArray<FWeakpointChannel> Channels;
    FRuntimeFloatCurve WeakpointHitCurve;
    UFSDPhysicalMaterial* WeakPointMaterial;
    bool AddFirstChannelAutomatically;
    int32 ReplaceMatIndex;

    bool StopLoopingGlow(int32 aGlowID, bool aFade);
    void ShowBodypartHit(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void SetUpWeakPointGlowOnMeshByBone(const UMeshComponent*& Mesh, int32 MaterialIndex, FName Bone, UHealthComponentBase* HealthComponent);
    int32 SetUpWeakPointGlowOnMesh(UMeshComponent* Mesh, int32 MaterialIndex, UFSDPhysicalMaterial* PhysicalMaterial, UHealthComponentBase* HealthComponent);
    void SetChannelEnabled(bool Enabled, int32 Channel);
    void EnableWeakpointRegistration(bool Enabled);
    void All_ShowWeakPointHit(uint8 Channel);
    void AddWeakpointGlow(bool loopIndefinitely, float loopTime, UCurveFloat* GrowCurve, UCurveFloat* FadeCurve, int32 UniqueId, int32 Channel);
}

class UWeaponFireOwner : UInterface
{

    APlayerCharacter* GetPlayerCharacter();
    FQuat GetMuzzleQuat();
    FVector GetMuzzleLocation();
    bool GetIsLocallyControlled();
    bool GetIsFirstPerson();
}

class AAssaultRifle : UAmmoDrivenWeapon
{
    float KillsResetAccuracyDuration;
    bool KillsTriggersStatusEffect;
    TSubclassOf<UStatusEffect> KillTriggeredStatusEffect;

    void OnTimerElapsed();
    void OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
    void Client_ResetAccuracy();
}

class AFlareGun : UAmmoDrivenWeapon
{
}

class ASawedOffShotgun : UAmmoDrivenWeapon
{
    UDamageComponent* DamageComponent;
    UDamageComponent* ShockWaveDamageComponent;
    float FearFactorOnFire;
    float FearFactorOnFireRadius;
    bool ShotgunJumpEnabled;
    float ShotgunJumpForce;
    bool ShockwaveEnabled;
    float ShockWaveDistance;
    float ShockWaveRadius;
    float ShockWaveLength;

    void SetShockWaveDamageComponent(UDamageComponent* Component);
}

class ABurstWeapon : UAmmoDrivenWeapon
{
    UDamageComponent* Damage;
    UDamageComponent* BurstFireBonusDamage;

    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    void OnReadyToFire();
}

class ARevoler : UAmmoDrivenWeapon
{
    float OnKillFearFactor;
    float OnKillFearRange;

    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
}

class ABasicPistol : UAmmoDrivenWeapon
{
    float ConsecutiveHitsDamageBonus;
    float ConsecutiveHitsMaxBonus;

    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
}

class AElectricalSMG : UAmmoDrivenWeapon
{
    TSubclassOf<UStatusEffect> AoEStatusEffect;
    UParticleSystem* AoEParticle;
    USoundCue* AoESound;
    float AoEStatusEffectChance;
    float AoEStatusEffectRange;

    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    void OnStatusEffectPushed(UHealthComponentBase* Health);
    void All_OnAoETriggered(const FVector_NetQuantize& Location, const FVector_NetQuantizeNormal& Normal);
}

class AAutoShotgun : UAmmoDrivenWeapon
{
    TSubclassOf<UStatusEffect> CQCKillBuff;

    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial);
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
}

class ALineCutter : UAmmoDrivenWeapon
{
    bool StopUsingReversesProjectile;
    bool RotateProjectileUntillStop;
    bool ExplodeLastProjectileOnNextFireAttempt;
    TArray<UItemUpgrade*> upgrades;
    TWeakObjectPtr<ALineCutterProjectile> LastProjectile;
    float MinExplosiveGoodbyeActivationTimme;

    void Server_StopRotatingProjectile();
    void Server_ReverseLastProjectile();
    void Server_DestroyOldProjectile();
    void OnRep_LastProjectile();
    void OnProjectileLaunched(AProjectileBase* Projectile);
    void OnFireWhileLastProjectileAlive(ULineCutterProjectile* Projectile);
}

class AMagazine : AActor
{
    USoundCue* ImpactGroundSound;

    void OnItemSkinned(USkinEffect* Skin);
    void ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
}

class UWeaponHitCountEffect : UObject
{
    bool UsesDamageEffects;
}

class UWeaponHitCounterComponent : UActorComponent
{
    UWeaponHitCountEffect* HitEffect;
    bool RequiresWeakpointHit;

    void Server_OnReloading();
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    void OnStoppedUsing();
    void OnReloading();
    void All_ShowDamageEffects(const TArray<TWeakObjectPtr<Actor>>& Targets);
}

class UDamageHitCountEffect : UWeaponHitCountEffect
{
    float DamagePerHit;
    UDamageClass* DamageClass;
    UParticleSystem* DamageParticle;
    USoundCue* DamageSound;
    bool DeadBugWalkingTargetMarking;
    TSubclassOf<UStatusEffect> DeadBugWalkingSTE;
}

class UStatusHitCountEffect : UWeaponHitCountEffect
{
    TSubclassOf<UStatusEffect> StatusEffect;
    float ChancePerHit;
}

class URicochetHitCountEffect : UWeaponHitCountEffect
{
}

class UChargedHitCountEffect : UWeaponHitCountEffect
{
    float DamagePerHit;
    UDamageClass* DamageClass;
    UParticleSystem* DamageParticle;
    USoundCue* DamageSound;
}

class UWeaponHitEffectComponent : UActorComponent
{
    float EffectChance;
    TSubclassOf<AActor> ActorToSpawn;

    void Server_SpawnEffect(const FVector_NetQuantize& Location, const FRotator& Rotation);
    void OnHit(const FHitResult& HitResult, bool isAlwaysPenetrated);
}

class UWeightRoomSelectorLibrary : UBlueprintFunctionLibrary
{

    void SetupWeightedRoomSelector(FWeightedRoomSelector& Target, TArray<URoomGenerator*>& Rooms);
    URoomGenerator* SelectRandomRoom(FWeightedRoomSelector& Target, FRandomStream& RandomStream);
    URoomGenerator* GetRandomRoom(TArray<URoomGenerator*>& Rooms, bool removeChosenRoom, FRandomStream& RandomStream);
}

class UWidgetToRenderTargetComponent : UActorComponent
{
    TSubclassOf<UUserWidget> WidgetClass;
    FIntPoint DrawSize;
    bool bManuallyRedraw;
    bool bRedrawRequested;
    float RedrawTime;
    float LastWidgetRenderTime;
    bool bWindowFocusable;
    FIntPoint CurrentDrawSize;
    bool bDrawAtDesiredSize;
    FVector2D Pivot;
    UMaterialInterface* BaseMaterial;
    ULocalPlayer* OwnerPlayer;
    FLinearColor BackgroundColor;
    FLinearColor TintColorAndOpacity;
    float OpacityFromTexture;
    bool bIsTwoSided;
    bool TickWhenOffscreen;
    UUserWidget* Widget;
    UTextureRenderTarget2D* RenderTarget;
    UMaterialInstanceDynamic* MaterialInstance;
    bool bEditTimeUsable;

    void SetWidget(UUserWidget* Widget);
    void SetOwnerPlayer(ULocalPlayer* LocalPlayer);
    void SetBackgroundColor(const FLinearColor NewBackgroundColor);
    void RequestRedraw();
    UUserWidget* GetUserWidgetObject();
    UTextureRenderTarget2D* GetRenderTarget();
    ULocalPlayer* GetOwnerPlayer();
    UMaterialInstanceDynamic* GetMaterialInstance();
}

class UWindowManager : UActorComponent
{
    FWindowManagerOnFirstWindowOpened OnFirstWindowOpened;
    void WindowManagerDelegate();
    FWindowManagerOnLastWindowClosed OnLastWindowClosed;
    void WindowManagerDelegate();
    USoundCue* AudioWindowOpen;
    TArray<UWindowWidget*> WindowStack;
    TMap<TSubclassOf<UWindowWidget>, UWindowWidget*> WindowList;
    TMap<TSubclassOf<UUserWidget>, TWeakObjectPtr<UUserWidget>> WidgetSingletonCache;
    bool ResolutionDownscaleActive;

    void SetSingletonWidgetVisibility(TSubclassOf<UUserWidget> WidgetClass, ESlateVisibility Visibility);
    void ReplaceWindow(UWindowWidget* Window);
    UWindowWidget* OpenWindowFromClass(TSubclassOf<UWindowWidget> windowClass, int32 ZOrder, bool ShowCursor);
    void OpenWindow(UWindowWidget* Window, bool PlayAudio, bool ShowCursor);
    UWindowWidget* OpenSingleUseWindow(TSubclassOf<UWindowWidget> windowClass, int32 ZOrder);
    bool IsWindowOpen(UWindowWidget* Window);
    bool IsTopWindow(UWindowWidget* Window);
    UUserWidget* GetOrCreateSingletonWidget(TSubclassOf<UUserWidget> WidgetClass, bool& WidgetCreated);
    UWindowWidget* GetCurrentWindow();
    void CloseWindow(UWindowWidget* Window);
    void CloseTopWindow();
    void CloseAllWindows();
    void CenterCursor();
    bool AnyWindowsOpen();
}

class AWoodLouse : UEnemyDeepPathfinderCharacter
{
    USceneComponent* RollingCenter;
    UPawnSensingComponent* PawnSensing;
    EWoodLouseState forceState;
    float RollingCenterOffsetOnStanding;
    float RollingCenterOffsetOnFold;
    float ChanceToWalk;
    bool DebugAngle;
    UFakeMoverSettings* FakeMoverSettings;
    TSubclassOf<AProjectile> BurstProjectileClass;
    float BurstTime;
    TArray<TSubclassOf<UStatusEffect>> StatusEffectsOnRoll;
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
    AActor* CurrentTarget;
    float FoldedStateMaxTime;
    float FoldedStateMinTime;
    float UnfoldedStateMaxTime;
    float UnflodedStateMinTime;
    USoundBase* BumpSound;
    float TimeBetweenBumpingSamePlayer;
    float MinBumpDamage;
    float MaxBumpDamage;
    float BumpDamage;
    UDamageClass* BumpDamageType;
    float MaxBumpPower;
    float BumpRange;
    float AcceptableAngles;
    float RollSpeedModifier;
    float RollAlpha;
    float TiltAlpha;
    USoundBase* RollingSound;
    FName RollingSpeedParamName;
    TWeakObjectPtr<UAudioComponent> RollingSoundComponent;
    UFakeMoverSettings* RollMoveSettings;
    UFakeMoverSettings* StopRollMoveSettings;
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
    void SeePawn(APawn* aSenPawn);
    void OnRep_State();
    void OnRep_LastHit();
    EWoodLouseState GetRollerState();
    void BumpedTarget();
}

class UWoodLouseAnimInstance : USpiderAnimInstance
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
}

class UYesNoPromptWidget : UWindowWidget
{
    bool bDestroyOnClick;
    bool bCloseAllWindows;
    FYesNoPromptWidgetOnClickedCallback OnClickedCallback;
    void OnYesNoClickedDelegate(bool Yes);

    void Show(FText Title, FText Message, const OnYesNoClickedDelegate__DelegateSignature& OnYesNoClicked);
    void SetMappedResources(const TMap<UResourceData*, int32>& Resources);
    void OnYesNoClickedDelegate__DelegateSignature(bool Yes);
    void OnShow(const FText& Title, const FText& Message);
    void OnClicked(bool Yes);
    void Clicked(bool YesClicked);
}

class UYesNoPromptAction : UBlueprintAsyncActionBase
{
    FYesNoPromptActionYes Yes;
    void YesNoOutputPin();
    FYesNoPromptActionNo No;
    void YesNoOutputPin();
    FYesNoPromptActionYesNoDelegate YesNoDelegate;
    void OnYesNoClickedDelegate(bool Yes);
    TWeakObjectPtr<UYesNoPromptWidget> ActivePrompt;

    void YesNoOutputPin__DelegateSignature();
    UYesNoPromptAction* PromptYesNo(UObject* WorldContext, FYesNoPromptSettings Prompt);
    UYesNoPromptAction* PromptPurchase(UObject* WorldContext, FYesNoPromptSettings Prompt, const TMap<UResourceData*, int32>& Resources);
    void PromptCallback(bool YesClicked);
}

class AZipLineProjectile : AActor
{
    UTimelineComponent* Timeline;
    float LightIntensity;
    float MaterialGlow;
    FZipLineProjectileCallback Callback;
    void OnTimelineFloat(float Output);
    UCurveFloat* LightCurve;
    TArray<UPointLightComponent*> PointLights;
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    TSubclassOf<UStatusEffect> OnUseStatusEffect;
    TSubclassOf<UStatusEffect> OnReleaseStatusEffect;

    void OnTimelineTick(float NewValue);
    void OnShoot(FVector Origin, FVector EndLocation);
}

class UZiplineLauncherComponent : UWeaponFireComponent
{
    TEnumAsByte<ECollisionChannel> HitCollisionChannel;
    float ProjectileLocationOffset;
    TSubclassOf<AZipLineProjectile> projectileClass;

    void Server_Fire(FVector_NetQuantize Origin, FVector_NetQuantize Destination);
    void All_ShowHit();
}

class AZipLineItem : UAmmoDrivenWeapon
{
    float MaxDistance;
    float MinDistance;
    float MinAngle;
    float MaxAngle;
    FGameplayTagQuery ExcludeSurfaceTags;

    bool CanFireWeapon(FText& FailMsg, UDialogDataAsset*& FailShout);
}

class UAngleIndicatorWidget : UFSDUserWidget
{
    float pixelsPerAngle;
    float AlphaFade;
    float MinAngle;
    float MaxAngle;
}

class AZipLineConnector : AActor
{
    TWeakObjectPtr<APlayerCharacter> Character;
    FVector ZipLineLocation;
    FVector ZipLineDirection;
    FRotator RotationOffset;
    bool bSpeeding;

    void ReceiveUpdateZipLinePoint(const FVector& WorldLocation, const FVector& Directioy, bool Speeding);
    void ReceiveDisconnected();
    void ReceiveConnected(const FVector& WorldLocation, const FVector& Direction);
}

class UZipLineStateComponent : UCharacterStateComponent
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
    USoundBase* AudioOnStart;
    USoundBase* AudioOnDuring;
    USoundBase* AudioOnChangingDirection;
    USoundBase* AudioOnStop;
    USoundBase* AudioOnSpeedBoostActivated;
    UDialogDataAsset* ShoutStartUsing;
    UDialogDataAsset* ShoutSpeedBoostActivated;
    TWeakObjectPtr<AZipLineProjectile> ZipLineProjectile;
    FZipLine ZipLine;
    float DamageBeforeFalling;
    float friendlyFireModifier;
    float DamageResetTime;
    UAudioComponent* AudioComponent;

    void ServerSetSpeedBoostActivated(bool InBoostActivated);
    void ServerJumpPressed(bool JumpForward);
    void ServerForwardInputChanged(float Input);
    void ServerChangeDirection();
    void ReceiveSpeedBoostDeactivated();
    void ReceiveSpeedBoostActivated();
    void OnRep_ZipLine();
    void OnPlayerHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    bool GetSpeedBoostActivated();
    FVector GetJumpVector(FVector LookVector, FVector CurrentVelocity);
    void All_SpeedBoostChanged(bool bActive);
}

struct FCountDownFloat
{
    float CountDownDuration;
}

struct FLerpingPercent
{
    uint8 TargetPercent;
}

struct FReplicatedCharacterData
{
    TWeakObjectPtr<AActor> Target;
    float TemperatureEffect;
    bool bCanTakeDamage;
}

struct FLaserPointerTarget
{
    FHitResult HitInfo;
    AActor* Target;
    AActor* ExtraTarget;
}

struct FCoolDownProgressStyle
{
    UTexture2D* Icon;
    FLinearColor IconTint;
    FText Name;
    TSubclassOf<UCoolDownProgressWidget> WidgetOverride;
    USoundCue* AudioCoolDownFinished;
}

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
}

struct FHeroInfo
{
    FText HeroName;
    UTexture2D* HeroIcon;
    UTexture2D* SmallHeroIcon;
    UTexture2D* HeroFullSizeImage;
    FLinearColor HeroColor;
    FText HeroShortDescription;
    FText HeroLongDescription;
    FText SwitchToMessage;
}

struct FAnalogAimSettings
{
    bool ShowDebugOutput;
    FVector2D AimRate;
    UCurveFloat* SensitivityCurve;
    float LookAtStickyness;
    float StickynessRecoverySpeed;
    float StickynessMaxSensitivity;
    FVector2D ThirdPersonLookRate;
}

struct FHoldButton
{
    FText HoldingText;
    float HoldStartTime;
    float HoldDuration;
}

struct FDownCameraSettings
{
    TWeakObjectPtr<APlayerCharacter> Target;
    int32 TargetIndex;
    float MinPitch;
    float MaxPitch;
    float SmoothSpeed;
}

struct FPlatformComponent
{
    TSubclassOf<UActorComponent> ComponentClass;
    EPlatformComponentCriteria Criteria;
}

struct FClaimableRewardEntry
{
    FText Title;
    FText Text;
    UObject* Image;
    TArray<UReward*> Rewards;
    FGuid SaveGameID;
}

struct FCharacterViewScene
{
    TArray<FCharacterViewInfo> Characters;
    bool MissionSuccess;
}

struct FCharacterViewInfo
{
    TSubclassOf<APlayerCharacter> CharacterClass;
    TArray<UVanityItem*> EquippedVanity;
    bool SurvivedInPod;
    UVictoryPose* VictoryPose;
}

struct FSpaceRigNotification
{
    FText Text;
    UTexture2D* Icon;
    FLinearColor IconColor;
}

struct FNetworkConnectionInfo
{
    AFSDPlayerController* PlayerController;
    float PacketLossIn;
    float PacketLossOut;
    float Ping;
    float Jitter;
    bool IsValid;
}

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
}

struct FXPReward
{
    FText Description;
    int32 XP;
}

struct FCreditsReward
{
    FText Description;
    int32 Amount;
}

struct FPendingRewardsStats
{
    TMap<UResourceData*, float> AllResources;
    TMap<UResourceData*, float> CollectedResources;
    bool PrimaryObjectiveCompleted;
    bool SecondaryObjectiveCompleted;
    float TimePlayed;
    int32 EnemiesKilled;
}

struct FFSDServerSearchOptions
{
    ESteamServerJoinStatus JoinStatus;
    ESteamSearchRegion SearchRegion;
    TArray<UDifficultySetting*> Difficulties;
    bool DeepDive;
    FString SearchString;
    int32 MissionSeed;
    int32 GlobalMissionSeed;
    TArray<EGameType> GameTypes;
}

struct FFadeData
{
    bool bEnabled;
    bool bShowDebugOutput;
    TSubclassOf<UFSDLevelLoadingPersistentWidget> WidgetType;
    UFSDLevelLoadingPersistentWidget* Widget;
    float CurrentFade;
    float TargetFade;
    float FadeSpeed;
    float Delay;
    bool bFadeWorldOnly;
    bool bCapFramerate;
    bool bToSpaceRig;
    UTexture* loadingImage;
    FString DebugMsg;
}

struct FGameStateSeamlessTravelStorage
{
    UDifficultySetting* ChosenDifficulty;
    TMap<UPlayer*, bool> PlayerShouldStartInMedbay;
    TMap<UResourceData*, float> Resources;
    float MissionTime;
    TMap<FName, float> StoredFloatValues;
    TMap<FName, int32> StoredIntValues;
}

struct FFSDChatMessage
{
    EChatMessageType MsgType;
    FString Sender;
    EChatSenderType SenderType;
    FString Msg;
    FUniqueNetIdRepl SenderNetID;
}

struct FSplineSegmentCarveOperationData
{
    int32 OperationNumber;
    TArray<FCarveSplineSegment> Segments;
    UTerrainMaterial* Material;
    ECarveFilterType CarveFilter;
    EPreciousMaterialOptions Precious;
}

struct FMeltOperationData
{
    int32 OperationNumber;
    TArray<FVector> Points;
    float Radius;
}

struct FDrillOperationData
{
    int32 OperationNumber;
    FVector HitPos;
    FVector Dir;
    FVector CarveSize;
    float CarveNoise;
}

struct FRemoveFloatingIslandOperationData
{
    int32 OperationNumber;
}

struct FPickaxeDigOperationData
{
    int32 OperationNumber;
    FVector HitPos;
    FVector Dir;
    float DigSize;
    AActor* Miner;
}

struct FCarveWithSTLMeshOperationData
{
    int32 OperationNumber;
    USTLMeshCarver* STLMeshCarver;
    UStaticMeshCarver* StaticMeshCarver;
    UTerrainMaterial* Material;
    ECarveFilterType CarveFilter;
    EPreciousMaterialOptions Precious;
    FMatrixWithExactSync Transform;
}

struct FCarveWithColliderOperationData
{
    int32 OperationNumber;
    UStaticMesh* StaticMesh;
    UTerrainMaterial* Material;
    ECarveFilterType CarveFilter;
    FMatrixWithExactSync Transform;
    float ExpensiveNoise;
    EPreciousMaterialOptions Precious;
    CarveOptionsCellSize CarveCellSize;
}

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
}

struct FSonyInputSettings
{
    bool MotionControlEnabled;
    float MotionControlXSensitivity;
    float MotionControlYSensitivity;
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
}

struct FOptionsInSaveGame
{
    bool SaveGameOptionsValid;
    int32 ScreenMode;
}

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
}

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
}

struct FCustomKeyBinding
{
    FName ActionName;
    int32 Index;
    FKey Key;
}

struct FCharacterOptions
{
    bool GrapplingHookAutoSwitch;
    bool ZiplineGunAutoSwitch;
}

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
}

struct FHUDElementData
{
    EHUDVisibilityMode Mode;
    int32 Version;
}

struct FControllerSettings
{
    float AimInnerDeadZone;
    float AimSensitivity;
    float AimOuterAcceleration;
}

struct FWatchedTutorial
{
    FString TutorialName;
    int32 count;
}

struct FResourcesSave
{
    TMap<FGuid, float> OwnedResources;
    TMap<UResourceData*, float> Resources;
}

struct FItemUINotifications
{
    TArray<FUINotificationItem> UINotifications;
    TSet<FGuid> UINotificationSet;
    UFSDSaveGame* SaveGame;
}

struct FUINotificationItem
{
    TArray<FGuid> NotificationIDs;
}

struct FEventRewardSave
{
    TMap<FGuid, FEventRewardSaveItem> PendingRewards;
}

struct FEventRewardSaveItem
{
    FGuid CategoryID;
    TArray<FGuid> ClassOptions;
}

struct FSkinList
{
    TSet<FGuid> Skins;
}

struct FItemNotificationInfo
{
    int32 NotificationFlags;
}

struct FUpgradeLoadout
{
    TMap<FGuid, FItemUpgradeSelection> Loadout;
}

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
}

struct FDrinkSave
{
    TSet<FGuid> UnlockedDrinks;
    bool HasUnlockedSpecial;
}

struct FForgingSave
{
    int32 XP;
    int32 AwardsGiven;
}

struct FCharacterSave
{
    FGuid SaveGameID;
    int32 XP;
    bool HasCompletedRetirementCampaign;
    int32 TimesRetired;
    int32 RetiredCharacterLevels;
    bool HasSeenRetirementRewardScreen;
    TSubclassOf<APlayerCharacter> CharacterClass;
    FCharacterVanitySave Vanity;
    int32 SelectedLoadout;
    FItemLoadout Loadout;
    TArray<FItemLoadout> Loadouts;
    FVictoryPoseSave VictoryPose;
}

struct FVictoryPoseSave
{
    FGuid EquippedVictoryPose;
    TArray<FGuid> UnlockedVictoryPoses;
    TArray<FGuid> EquippedVictoryPoses;
}

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
    int32 IconIndex;
}

struct FCharacterVanitySave
{
    TArray<FCharacterVanityLoadout> Loadouts;
    TArray<FGuid> UnLockedVanityItemIDs;
    FGuid EquippedHeadItemID;
    FGuid EquippedBeardItemID;
    FGuid EquippedArmorItemID;
    FGuid EquippedArmorMaterialItemID;
    FGuid EquippedBeardColorItemID;
    FGuid EquippedSkinColorItemID;
    FGuid EquippedEyebrowsItemID;
    FGuid EquippedMoustacheItemID;
    FGuid EquippedSideburnsItemID;
    TArray<UVanityItem*> UnLockedVanityItems;
    TMap<EVanitySlot, FGuid> NewVanityItems;
}

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
}

struct FDeepDiveSave
{
    FDeepDiveItem NormalSave;
    FDeepDiveItem EliteSave;
}

struct FDeepDiveItem
{
    int32 Progress;
    int32 Seed;
    int32 BestTime;
    TArray<FDeepDiveSaveRewardItem> Rewards;
    bool HasEverCompleted;
    TArray<FGuid> RewardsGiven;
}

struct FDeepDiveSaveRewardItem
{
    FGuid RewardID;
    int32 Stage;
}

struct FCampaignSave
{
    FActiveCampaignItem ActiveCampaign;
    TArray<FGuid> CompletedCampaigns;
    int32 ActiveCampaignWeek;
    FWeeklyCampaignItem WeeklySave;
    FWeeklyCampaignItem MaxtrixCoreHuntSave;
}

struct FWeeklyCampaignItem
{
    int32 LastCompletedWeek;
    int32 LastStartedWeek;
    int32 RewardedProgress;
}

struct FActiveCampaignItem
{
    FGuid CampaignID;
    int32 Progress;
}

struct FUnLockedMissionParameters
{
    TArray<FGuid> UnLockedComplexities;
    TArray<FGuid> UnLockedDurations;
}

struct FGameDLCSave
{
    TSet<FGuid> AnnouncedIDs;
}

struct FSeasonSave
{
    TMap<FGuid, FSeasonSaveEntry> Seasons;
}

struct FSeasonSaveEntry
{
    int32 XP;
    int32 Tokens;
    TArray<FRewardsClaimed> RewardsClaimed;
    bool HasClaimedAllRewards;
    int32 RewardsClaimedAfterMaxLevel;
    TMap<int32, bool> NodesBought;
    TArray<FChallengeSaveInfo> ActiveChallenges;
    FDateTime LastNewChallengeGiven;
    FDateTime LastChallengeReroll;
    TMap<FGuid, int32> CompletedSpecialChallenges;
    int32 ClaimedScripChallenges;
    float TimePlayedAtSeasonStart;
    float ChallengesCompletedAtSeasonStart;
}

struct FChallengeSaveInfo
{
    TArray<int32> StatIndices;
    FGuid ChallengeGuid;
    int32 CurrentWins;
    int32 NumberOfWins;
    int32 XPCompleteGain;
    int32 TokenGain;
}

struct FRewardsClaimed
{
    bool NormalClaimed;
    bool SpecialClaimed;
}

struct FFSDEventRewardsSave
{
    TSet<FGuid> EventsSeen;
}

struct FPromotionRewardsSave
{
    TSet<FGuid> ClaimedRewards;
}

struct FSchematicSave
{
    TArray<FGuid> ForgedSchematics;
    FGuid PendingReward;
    TArray<FGuid> OwnedSchematics;
    int32 SkinFixupCounter;
    bool bFirstSchematicMessageShown;
}

struct FCharacterPerksSave
{
    TArray<FPerkEquipEntry> CharacterPerks;
}

struct FPerkEquipEntry
{
    FGuid characterID;
    TArray<FGuid> PerkIDs;
}

struct FAchievementSave
{
    TArray<FString> OfflineAchievedAchievements;
    TArray<FAchievementSaveEntry> AchievementEntries;
}

struct FAchievementSaveEntry
{
    FGuid AchievementSaveID;
    float HighestSavedProgress;
    float CurrentProgress;
}

struct FPerkClaimsSave
{
    TArray<FPerkClaimEntry> PerkEntries;
    bool HasResetPerks2;
}

struct FPerkClaimEntry
{
    FGuid PerkID;
    int32 currentRank;
}

struct FMilestoneSave
{
    TArray<FMilestoneCounter> ClaimedKPIRewards;
}

struct FMilestoneCounter
{
    FGuid KPIGuid;
    int32 Tier;
}

struct FMissionStatSave
{
    TArray<FMissionStatCounter> Counters;
    bool bCharacterLevelUpFixed;
    bool bBoughtVanityItemsFixed;
    bool bBoughtEquipmentUpgradesFixed;
    bool bCampaignsCompletedFixed;
    bool WeaponUpgradesFixed;
}

struct FMissionStatCounter
{
    FGuid PlayerClassID;
    FGuid MissionStatID;
    float Value;
}

struct FEndMissionResult
{
    FPlayerProgress PreviousPlayerProgress;
    FPlayerProgress PlayerProgress;
    FCharacterProgress PreviousCharacterProgress;
    FCharacterProgress CharacterProgress;
    USchematic* RewardedSchematic;
    bool bReadyForUse;
}

struct FCharacterProgress
{
    UPlayerCharacterID* characterID;
    int32 Level;
    float Progress;
    int32 CurrentXP;
    int32 NextLevelXP;
    int32 TimesRetired;
}

struct FPlayerProgress
{
    int32 PlayerRank;
    int32 PlayerStars;
}

struct FDiscordServerData
{
    int32 presenceCount;
    int32 memberCount;
}

struct FActiveCampaingMission
{
    bool HasMission;
    int32 GlobalSeed;
    int32 MissionSeed;
}

struct FSaveGameStatePerkItem
{
    uint8 Rank;
    UPerkAsset* Perk;
}

struct FDrinkableBarSlot
{
    FVector WorldLocation;
    TWeakObjectPtr<ADrinkableActor> DrinkableActor;
}

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
}

struct FCraftingCost
{
    UResourceData* Resource;
    float Amount;
}

struct FItemUpgradeStatText
{
    FText StatText;
    bool IsAdventageous;
}

struct FDeepDiveBank
{
    UDeepDive* NormalDeepDive;
    UDeepDive* HardDeepDive;
}

struct FObjectiveMissionIcon
{
    UTexture2D* Texture;
    FLinearColor Tint;
}

struct FMissionShouts
{
    UDialogDataAsset* AfterDropPodExit;
    UDialogDataAsset* OnExitPodDescending;
    UDialogDataAsset* OnExitPodArrived;
    UDialogDataAsset* OnCompletion;
    UDialogDataAsset* OnDeepDiveExitPodDescending;
    UDialogDataAsset* OnDeepDiveObjectiveCompletion;
    UDialogDataAsset* OnDeepDiveAllReturnObjectivesCompleted;
}

struct FAfflictionEntriesArray : FFastArraySerializer
{
    TArray<FAfflictionEntry> Items;
    UPawnAfflictionComponent* Owner;
}

struct FAfflictionEntry : FFastArraySerializerItem
{
    UPawnAffliction* Affliction;
}

struct FPawnAfflictionItem
{
    TArray<UAfflictionEffect*> Afflictions;
}

struct FTrackBuilderPoint
{
    ETrackBuildPlacementState PlacementState;
    FVector_NetQuantize Location;
    FVector_NetQuantize EulerRotation;
    bool bPointValid;
    TWeakObjectPtr<UTrackBuilderConnectPoint> ConnectPoint;
}

struct FMixerAnnouncement
{
    FString Username;
    FText Text;
}

struct FHUDVisibilityRegisteredWidget
{
    TWeakObjectPtr<UWidget> Widget;
}

struct FYesNoPromptSettings
{
    TSubclassOf<UYesNoPromptWidget> WidgetClass;
    int32 ZOrder;
    FText Title;
    FText Message;
}

struct FItemLoadoutAnimations
{
    UAnimMontage* Loadout;
    TArray<UAnimSequence*> Loadout_IdleBreaks;
}

struct FAudioWithCooldown
{
    USoundCue* Audio;
    float CoolDown;
}

struct FRecoilSettings
{
    FRandRange RecoilRoll;
    FRandRange RecoilPitch;
    FRandRange RecoilYaw;
    bool CanRecoilDown;
    float SpringStiffness;
    float CriticalDampening;
    float Mass;
}

struct FRandRange
{
    float Min;
    float Max;
}

struct FTracerData
{
    UFXSystemAsset* MainParticle;
    UFXSystemAsset* TrailParticle;
    float Speed;
    USoundCue* WhizbySound;
    float WhizBySoundCooldown;
    float Offset;
    float MinDistance;
}

struct FItemAnimationItem
{
    UAnimMontage* FP_CharacterMontage;
    UAnimMontage* TP_CharacterMontage;
    UAnimMontage* ItemMontage;
}

struct FHackingUsableState
{
    bool bIsHacked;
    TWeakObjectPtr<AHackingToolItem> BeingHackedByItem;
    TWeakObjectPtr<APlayerCharacter> HackedBy;
}

struct FLockCounter
{
    int32 LockCount;
    TWeakObjectPtr<AActor> LockedActor;
}

struct FProjectileImpact
{
    FVector_NetQuantize Location;
    FVector_NetQuantizeNormal Normal;
    TWeakObjectPtr<AActor> Actor;
    TWeakObjectPtr<UPrimitiveComponent> Component;
    UPhysicalMaterial* PhysMat;
    int32 BoneIndex;
}

struct FProjectileState
{
    FVector_NetQuantize Velocity;
    FVector_NetQuantize Location;
    USceneComponent* HomingTargetComponent;
    uint8 IsSimulating;
    uint8 IsBouncy;
    uint8 IsHoming;
    uint8 IsPenetrating;
}

struct FScaledEffect
{
    UFXSystemAsset* ParticleSystem;
    float Scale;
}

struct FSentryGunMuzzleSetup
{
    FName SocketName;
    UAnimMontage* FireMontage;
}

struct FBlueprintFriend
{
    FString DisplayName;
    FString RealName;
    EFriendOnlineStatusEnum OnlineStatus;
    FString UniqueNetId;
}

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
}

struct FWidgetAnimationSettings
{
    float PlaybackSpeed;
    TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
    bool bRestoreState;
}

struct FTextCounterEntry
{
    UTextBlock* TextBlock;
    FText Format;
    int32 Value;
}

struct FGameActivitySubTask
{
    FString SubActivityId;
}

struct FFrozenAfflictionItem
{
    FName BoneName;
    FRandRange MeshScale;
    EFrozenBitsSize FrozenBitsSize;
    float ChanceToSpawn;
}

struct FAttachMeshesAfflictionItem
{
    FName BoneName;
    float Scale;
    UStaticMesh* Mesh;
}

struct FPushPoint
{
    USphereComponent* collider;
    APlayerCharacter* Character;
}

struct FCompositeArmorItem
{
    UPrimitiveComponent* Component;
    float Health;
}

struct FArmorHealthItem
{
    uint8 MaterialIndex;
    bool HealthIsBreakPercentage;
    TArray<FArmorHealthSubItem> ArmorBones;
}

struct FArmorHealthSubItem
{
    float Health;
    FName BoneName;
    TArray<FName> AdditionalBones;
    FName OptionalFXSocket;
}

struct FDestructableBodypartItem
{
    uint8 MaterialIndex;
    TArray<FName> ArmorBones;
}

struct FAttackCooldown
{
    FName AttackName;
    float CoolDown;
}

struct FAttackerInfo
{
    TWeakObjectPtr<AActor> Attacker;
    int32 PositionIndex;
    float AttackerRadius;
}

struct FBiomeEnemyEntry
{
    UEnemyDescriptor* enemy;
    bool IsDistruptive;
}

struct FBiomeNoiseItem
{
    UFloodFillSettings* CeilingNoise;
    UDetailNoise* CeilingDetailNoise;
    UFloodFillSettings* WallNoise;
    UDetailNoise* WallDetailNoise;
    UFloodFillSettings* FloorNoise;
    UDetailNoise* FloorDetailNoise;
    float Weight;
}

struct FBoscoLightSetting
{
    FColor Color;
    float Intensity;
    float Radius;
}

struct FBossFight
{
    TWeakObjectPtr<AActor> BossActor;
    TWeakObjectPtr<UEnemyComponent> EnemyComponent;
    TWeakObjectPtr<UEnemyHealthComponent> HealthComponent;
}

struct FLevelGenerationCarver
{
    FMatrixWithExactSync Transform;
    USTLMeshCarver* MeshCarver;
    UStaticMesh* ConvexCarver;
    UStaticMeshCarver* StaticMeshCarver;
    float ConvexExpensiveNoise;
    CarveOptionsCellSize CarveCellSize;
    UTerrainMaterial* TerrainMaterial;
    ECarveFilterType Filter;
    bool ToBeDiscarded;
}

struct FCustomUsable
{
    UUsableComponentBase* Usable;
    ECustomUsableType TerminationType;
}

struct FUsableRepliactional
{
    UUsableComponentBase* UsableComp;
    uint8 Key;
}

struct FClaimableRewardView
{
    UDialogDataAsset* MissionControlSpeak;
    TSoftClassPtr<UUserWidget> BackgroundWidgetClass;
    TSoftObjectPtr<USoundCue> FanfareAudio;
    float MoveInRewardsDelay;
    TArray<FClaimableRewardEntry> RewardDisplays;
}

struct FClaimableRewardArray
{
    TArray<FClaimableRewardEntry> Entries;
}

struct FCloudSaveRequest
{
    FString SteamTicket;
    FString PSTicket;
    int32 PlayerRank;
    int32 SaveToDiskCounter;
    FString RawData;
    FString Branch;
}

struct FCloudLoadRequest
{
    FString SteamTicket;
    FString PSTicket;
    FString Branch;
    int32 Offset;
}

struct FExampleStruct
{
    float Field;
}

struct FMissionShoutQueueItem
{
    TSoftObjectPtr<USoundBase> AudioPtr;
    FText Text;
    USoundBase* LoadedAudio;
}

struct FActiveOutline
{
}

struct FCharacterShouts
{
    UDialogDataAsset* Attention;
    UDialogDataAsset* Follow;
    UDialogDataAsset* standingDown;
    UDialogDataAsset* Downed;
    UDialogDataAsset* RequestRevive;
    UDialogDataAsset* Revived;
    UDialogDataAsset* Resupply;
    UDialogDataAsset* FriendlyFire;
    UDialogDataAsset* KillCry;
    UDialogDataAsset* Dead;
    UDialogDataAsset* Cheating;
    UDialogDataAsset* ResourceFull;
    UDialogDataAsset* ResourceFullNoDonkey;
    UDialogDataAsset* CallDonkey;
    UDialogDataAsset* CallDonkey_NotInMission;
    UDialogDataAsset* Depositing;
    UDialogDataAsset* DepositingNoDonkey;
    UDialogDataAsset* OutOfAmmo;
    UDialogDataAsset* Reloading;
    UDialogDataAsset* CharacterSelected;
    UDialogDataAsset* UpgradeBought;
    UDialogDataAsset* WaitingInDropPod;
    UDialogDataAsset* Carrying;
}

struct FCommunityReward
{
    UResourceData* Resource;
    float Value;
}

struct FCommunityFactionData
{
    bool IsValid;
    TArray<FString> Goals;
    TArray<float> Values;
    TArray<int32> Members;
}

struct FCommunityGoalStateData
{
    bool isGoal;
    bool isRecruitment;
    float TimeLeftSeconds;
    int32 CurrentGoalPeriodID;
}

struct FCommunityRewardNotification
{
    FText Text;
    UTexture2D* Icon;
    FLinearColor IconColor;
    FString ID;
}

struct FCommunityFactionResponse
{
    TArray<FString> Goals;
    TArray<float> Values;
    TArray<float> Members;
}

struct FCommunityGoalStateResponse
{
    bool isGoal;
    bool isRecruitment;
    bool FreeBeers;
    float TimeLeftSeconds;
    int32 LastUpdateGoalsID;
    int32 CurrentGoalPeriodID;
}

struct FCommunityGoalTierResponse
{
    bool Found;
    FString GoalID;
    float FirstTierGoal;
    float SecondTierGoal;
    float ThirdTierGoal;
}

struct FCommunityGoalIncrementResponse
{
    bool success;
}

struct FCommunityGoalTierDataRequest
{
    FString GoalID;
}

struct FCommunityGoalRequest
{
    FString GoalID;
    int32 FactionID;
    float Value;
    FString SteamTicket;
    FString Branch;
}

struct FActionIconMapping
{
    FKey ActionKey;
    UTexture2D* Icon;
    bool DoNotTint;
}

struct FPricingTierEntry : FTableRowBase
{
    FIRandRange CreditCost;
    FIRandRange Material1;
    FIRandRange Material2;
    FIRandRange Material3;
}

struct FIRandRange
{
    int32 Min;
    int32 Max;
}

struct FCustomKeySetting
{
    FName SaveID;
    FText Description;
    TArray<FName> ActionNames;
    EKeyBindingAxis ActionAxis;
}

struct FDailyDeal
{
    UResourceData* Resource;
    EDealType DealType;
    int32 ResourceAmount;
    int32 Credits;
    float ChangePercent;
}

struct FDailyDealSetup
{
    UResourceData* Resource;
    EDealType DealType;
    FIntPoint UnitsRange;
    FVector2D DiscountRangePercent;
    FVector2D ExtraValueRangePercent;
}

struct FDamageSubsystemItem
{
    UDamageComponent* DamageComponent;
}

struct FDamageModifierItem
{
    EDamageUpgrade DamageUpgrade;
    float Additive;
    float Multiplicative;
}

struct FDanceItem
{
    UAnimSequence* DanceMove;
    UAnimSequence* DanceMoveWithBeer;
}

struct FCellNoise
{
    int32 Seed;
    FVector CellSize;
    int32 NumValues;
    int32 MinCellValue;
    int32 MaxCellValue;
}

struct FDebrisCellNoiseParameters
{
    UDebrisCellNoise* Noise;
    int32 MinCellValue;
    int32 MaxCellValue;
}

struct FUDebrisCarveMesh
{
    UStaticMesh* Mesh;
    float Probablity;
}

struct FDebrisItemActorItem
{
    TSubclassOf<AActor> Actor;
    float Probability;
}

struct FDebrisStaticMesh
{
    UStaticMesh* Mesh;
    UMaterialInterface* Material;
    EDebrisMeshCollisionProfile CollisionProfile;
    float Probablity;
    USoundCue* DestroyedSound;
    UParticleSystem* DestroyedParticles;
    FDecalData Decal;
    bool Fragile;
    EDebrisMeshShadows CastShadows;
    bool Durable;
    bool SpawnWhenCarving;
    bool OnlySpawnWhenCarving;
}

struct FDecalData
{
    UMaterialInterface* DecalMaterial;
    float DecalSize;
    float DecalDepth;
    float LifeSpan;
    float FadeDuration;
}

struct FUDebrisStaticCarveMesh
{
    UStaticMeshCarver* Mesh;
    float Probablity;
}

struct FDebrisCapsule
{
    int32 ID;
    FVector Start;
    FVector End;
    float Radius;
}

struct FDebrisInfluence
{
    UObject* CaveInfluencer;
    float Radius;
}

struct FDebrisWhenCarving
{
    UDebrisInstances* Debris;
}

struct FCSGRaycastHitInfo
{
    FVector Position;
    FVector Normal;
    int32 Material;
}

struct FDeepDiveLoaderSequence
{
    TSoftObjectPtr<ULevelSequence> LevelSequence;
}

struct FDeepDiveTemplateItem
{
    UMissionTemplate* mission;
    TArray<UMissionDuration*> AllowedDurations;
}

struct FDeepDiveRewardItem
{
    USchematic* Schematic;
    int32 Stage;
    bool WasAlreadyGiven;
}

struct FHandleRotationOptions
{
    bool HandlePitch;
}

struct FDeepRepPath
{
    FVector PathBase;
    uint8 PathLength;
    EDeepMovementState State;
    uint8 StateBits;
    FVector PathOffsets;
}

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
    int32 LateJoinIndex;
    int32 DebrisIndex;
    int32 ChunkVisibilityIndex;
}

struct FTerrainLateJoinData
{
    TArray<FGrenadeExplodeOperationData> explosions;
    TArray<FCarveWithColliderOperationData> colliderCarves;
    TArray<FCarveWithSTLMeshOperationData> meshCarves;
    TArray<FPickaxeDigOperationData> pickAxe;
    TArray<FRemoveFloatingIslandOperationData> RemoveFloating;
    TArray<FDrillOperationData> drills;
    TArray<FMeltOperationData> melts;
    TArray<FSplineSegmentCarveOperationData> splines;
    TArray<int32> DebrisInstanceComponentPairs;
    TArray<uint32> visibleChunks;
    int32 OperationCount;
}

struct FDialogStruct
{
    bool Enabled;
    FText Text;
    TSoftObjectPtr<USoundBase> Audio;
    EDialogRestriction Restriction;
}

struct FVeteranComposition
{
    FRandFloatInterval Normal;
    FRandFloatInterval Large;
}

struct FRandFloatInterval
{
    TArray<FRandFloatIntervalItem> Intervals;
}

struct FRandFloatIntervalItem
{
    float Weight;
    FRandRange range;
}

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
}

struct FDiscordEoMData
{
    FString nick;
    FString UserId;
}

struct FDiscordServerInviteData
{
    FString code;
    FString serverID;
    FString serverDescription;
    FString serverName;
    int32 presenceCount;
    int32 memberCount;
    FString iconKey;
    FString bannerKey;
    FString splashKey;
}

struct FDiscordRewardNotification
{
    FText Text;
    UTexture2D* Icon;
    FLinearColor IconColor;
    FString ID;
}

struct FDoubleDrillDamageItem
{
    TWeakObjectPtr<UPrimitiveComponent> Target;
    FVector_NetQuantize Location;
    FVector_NetQuantizeNormal Normal;
    UFSDPhysicalMaterial* Material;
    FName BoneName;
    uint8 BoneIndex;
}

struct FDeathIntroSettings
{
    float FirstPersonDuration;
    float FadeToBlackDelay;
    float FadeToBlackDuration;
    float FadeFromBlackDelay;
    float FadeFromBlackDuration;
    float ZoomOutDuration;
    float ZoomOutStartDistance;
}

struct FBarleySpawnItem
{
    UResourceData* Resource;
    float Weight;
}

struct FEliminationDescriptors
{
    TArray<UEnemyDescriptor*> Descriptors;
}

struct FEliminationTarget
{
    TArray<AFSDPawn*> Targets;
}

struct FEncounterManagerItem
{
    TArray<FManagedEncounterItem> ManagedEcnounterItems;
    TArray<FPrePlacedEncounterItem> PrePlacedEncounterItems;
    int32 ID;
    bool IsRoom;
    FEncounterManagerItemCallback Callback;
    void EnemySpawnedDelegate(APawn* enemy);
}

struct FPrePlacedEncounterItem
{
    UEnemyDescriptor* descriptor;
    FTransform Location;
    AEncounterActor* EncounterActor;
}

struct FManagedEncounterItem
{
    UEnemyDescriptor* descriptor;
    int32 Amount;
}

struct FEncounterSpecialItem
{
    UEnemyDescriptor* enemy;
    float BaseChance;
    bool CanSpawnInDeepDive;
}

struct FEncounterRareCritterItem
{
    URareCritterDescriptor* Critter;
    float Chance;
}

struct FGliderAnimSync
{
    float Time;
    float AnimAlphaSync;
    FVector VelocityPercent;
    bool DownUpBlendBool;
    bool RightLeftBlendBool;
    float VerticalAddBlend;
    float HorizontalAddBlend;
}

struct FTestAnimInstanceProxy : FAnimInstanceProxy
{
    bool IsAlive;
    float RandomStartPosition;
    float Speed;
    bool IsMoving;
    float WalkCyclePlayRate;
}

struct FControlEnemyState
{
    ADeepPathfinderCharacter* ControlledEnemy;
    FTransform InitialTargetTransform;
    float InitialTargetBlendTotalTime;
    FVector InitialCharacterVelocity;
    FVector InitialEnemyVelocity;
}

struct FEnemyAttackDescription
{
    FText Name;
    EEnemyAttackType range;
    EDamageType DamageType;
}

struct FEnemyMinersManualStats
{
    int32 Health;
    int32 Damage;
    int32 Speed;
}

struct FEnemyGroupDescriptorItem
{
    UEnemyDescriptor* EnemyDescriptor;
}

struct FEnemyGroupDescriptorSpawnItem
{
    UEnemyDescriptor* enemy;
    int32 count;
}

struct FEnemyDebris
{
    float InfluenceRange;
    TArray<UDebrisBase*> Debris;
}

struct FEnemySpawnParamsEntry : FTableRowBase
{
    FString ItemName;
    float DifficultyRating;
    int32 MinSpawnCount;
    int32 MaxSpawnCount;
    float Rarity;
    float SpawnAmountModifier;
    int32 RequiredMainCampaignProgress;
}

struct FSpawnRarityItem
{
    float Duration;
    float Rarity;
}

struct FSpawnEffectsArray : FFastArraySerializer
{
    TArray<FSpawnEffectItem> Items;
}

struct FSpawnEffectItem : FFastArraySerializerItem
{
    ECreatureSize CreatureSize;
    FVector_NetQuantize Location;
    FRotator Rotation;
}

struct FSpawnQueueItem
{
    TSoftClassPtr<APawn> EnemyClass;
    UEnemyDescriptor* enemy;
    FSpawnQueueItemCallback Callback;
    void EnemySpawnedDelegate(APawn* enemy);
}

struct FSpawnRarityModifierItem
{
}

struct FEnemySpawnItem
{
    UEnemyDescriptor* enemy;
    int32 count;
    float VeteranComposition;
}

struct FMUSTBEHERETOCOMPILE
{
}

struct FWaveEntry
{
    TSubclassOf<UEnemyWaveController> WaveControllerLoaded;
    float Weight;
    TSoftClassPtr<UEnemyWaveController> WaveController;
}

struct FEscortMulePath
{
    TArray<FVector> Path;
}

struct FEscortMuleMovementState
{
    FTransform TargetTransform;
    FVector Velocity;
    FQuat AngularVelocity;
}

struct FEscortMuleExtractorSlot
{
    EEscortExtractorState ExtractorState;
    EEscortExtractorState LastState;
    USceneComponent* AttachPoint;
    UInstantUsable* Usable;
    UWidgetComponent* Widget;
}

struct FSubObjective
{
    UDialogDataAsset* OnProgressShout;
    UDialogDataAsset* OnCompletedShout;
    FText ObjectiveText;
    int32 Required;
    int32 count;
}

struct FSmartSpawnEntry
{
}

struct FFacilityGeneratorEnounter
{
    TArray<UEnemyDescriptor*> Enemies;
    float Difficulty;
    FRandInterval Diversity;
}

struct FRandInterval
{
    TArray<FRandIntervalItem> Intervals;
}

struct FRandIntervalItem
{
    float Weight;
    FIRandRange range;
}

struct FFakeMoveState
{
    FVector Pos1;
    FVector Pos2;
    FVector Vel;
}

struct FFakeMoverState
{
    float TickRate;
    float TickTime;
    FVector PrevPos;
    FVector NextPos;
    FVector PrevSurfaceNormal;
    FVector NextSurfaceNormal;
    float AccumulatedTime;
    AActor* Target;
    FVector Velocity;
    bool NearSurface;
    float SignedDistToSurface;
}

struct FFakeMoverTarget
{
    float InfluenceDistance;
    float TargetDistance;
    float GetCloserAirAcceleration;
    float GetAwayAirAcceleration;
    float GetCloserGroundAcceleration;
    float GetAwayGroundAcceleration;
    float MinDistance;
}

struct FFakeMoverPropulsion
{
    float Speed;
    float AirAcceleration;
    float AirDeceleration;
    float GroundAcceleration;
    float GroundDeceleration;
}

struct FFlareMeta
{
    TWeakObjectPtr<AActor> Actor;
    float Inhibit;
    float Radius;
    float InvRadius;
    FVector Pos;
    bool Moving;
}

struct FFloatPerkEffect
{
    UFloatPerkActivation* PerkActivation;
    FText FormattedDescription;
    TArray<FFloatPerkRankValue> RankValues;
}

struct FFloatPerkRankValue
{
    int32 RankIndex;
    float Value;
}

struct FFloatPerkRank
{
    int32 Tier;
    int32 Cost;
}

struct FPathObstacle
{
    FVector Position;
    float Radius;
}

struct FLayeredNoise
{
    UFloodFillSettings* Noise;
    float Scale;
}

struct FFormationDataItem
{
    FVector Direction;
    float Distance;
}

struct FFormation
{
    UFormationData* FormationData;
}

struct FFormationID
{
}

struct FDamageDataBase
{
}

struct FDamageData : FDamageDataBase
{
    UFSDPhysicalMaterial* Bodypart;
    UDamageClass* DamageClass;
}

struct FDelegateStruct
{
}

struct FFSDTagsRoot
{
    FFSDTagsAttitude Attitude;
}

struct FFSDTagsAttitude
{
    FGameplayTag Friendly;
    FGameplayTag Neutral;
    FGameplayTag Hostile;
}

struct FGeneratedMissionSeed
{
    int32 Seed;
    int32 GlobalSeed;
    UBiome* Biome;
    UMissionTemplate* Template;
    UMissionComplexity* ComplexityLimit;
    UMissionDuration* DurationLimit;
    UMissionMutator* Mutator;
    TArray<UMissionWarning*> Warnings;
    TArray<UFSDEvent*> ActiveEvents;
    EMissionStructure MissionStructure;
}

struct FReplicatedObjectives
{
    bool HasReplicated;
    TArray<UObjective*> Objectives;
}

struct FModdingUISettings
{
    uint8 SortField;
    bool SortAscending;
    TSet<uint8> ServerFilters;
    bool bShowSandboxLabel;
}

struct FInputDisplay
{
    EInputInteraction Interaction;
    FText InputText;
    FLinearColor TextTint;
    UTexture2D* Icon;
    bool IconTintable;
}

struct FItemRefundListItem
{
    FString Name;
    TMap<FGuid, FItemRefundResourceItem> Resources;
    float CreditCost;
}

struct FItemRefundResourceItem
{
    FString Name;
    float Amount;
}

struct FFSDServicesEndpoints
{
}

struct FSplineHitResult
{
    FHitResult HitResult;
    float SplineDistance;
    FVector SplineTangent;
}

struct FSplineSegment
{
    FVector StartLocation;
    FVector StartTangent;
    FVector EndLocation;
    FVector EndTangent;
}

struct FNewPlayerMutator
{
    int32 MinCampaignProgress;
    int32 MaxCampaignProgress;
    TArray<UMutator*> Mutators;
}

struct FWidgetMover
{
    TWeakObjectPtr<UWidget> Widget;
}

struct FCustomCounter
{
    FCustomCounterOnCount OnCount;
    void CustomCounterDelegate(float Value, float NormalizedTime);
    TWeakObjectPtr<UObject> Owner;
}

struct FWidgetTextCounter
{
    TWeakObjectPtr<UTextBlock> Widget;
}

struct FWidgetFade
{
    TWeakObjectPtr<UUserWidget> Widget;
}

struct FWidgetPing
{
    TWeakObjectPtr<UWidget> Widget;
}

struct FTesterName : FTableRowBase
{
    FString SteamID;
    FString SteamProfileName;
}

struct FTipsTableRow : FTableRowBase
{
    FText Header;
    FText Description;
    FText InputText;
    FText InputTextControllerOverride;
    float TimeToDisplay;
}

struct FGVisibilityGroups
{
    TSet<UHUDVisibilityGroup*> AllGroups;
    UHUDVisibilityGroup* EnemyHealth;
}

struct FGDItemCategoryIDs
{
    UCategoryID* OverclockID;
    UCategoryID* ItemSkinID;
    UCategoryID* VanityID;
    UCategoryID* PickaxePartID;
    UCategoryID* WeaponID;
    UCategoryID* CraftingID;
    UCategoryID* ForgeID;
    UCategoryID* BoscoSkinID;
}

struct FGDPerks
{
    TArray<UPerkAsset*> PerkAssets;
    TArray<int32> RequiredClaimsPerTier;
    UFloatPerkAsset* IronWill;
    UFloatPerkAsset* DashPerk;
    UFloatPerkAsset* MarathonPerk;
    UFloatPerkAsset* ShieldLink;
    UFloatPerkAsset* Bezerk;
    UFloatPerkAsset* JumpBoots;
    UFloatPerkAsset* ImpactCompensators;
    UFloatPerkAsset* BeastMaster;
    UFloatPerkAsset* DownedBomb;
    UFloatPerkAsset* FieldMedic;
    UFloatPerkAsset* HeightenedSenses;
    UFloatPerkAsset* HoverBoots;
    UFloatPerkAsset* ActivePerkSlots;
    UFloatPerkAsset* PassivePerkSlots;
}

struct FGDPlayerAndCharacterProgression
{
    TArray<TSoftClassPtr<APlayerCharacter>> RankedHeroClasses;
    TArray<TSoftClassPtr<APlayerCharacter>> TestHeroClasses;
    TArray<TSubclassOf<APlayerCharacter>> LoadedClasses;
    TArray<FText> PlayerRankNames;
    TArray<int32> CharacterXPLevels;
    TMap<FGuid, UPlayerCharacterID*> PlayerCharacterIDs;
}

struct FGDMilestones
{
    TArray<UMilestoneAsset*> Milestones;
}

struct FGDGameStatsTracking
{
    FGameplayTagContainer TotalEnemyKillsFilter;
}

struct FGDTerrainTypes
{
    UTerrainType* Rock;
    UTerrainType* Dirt;
}

struct FGDDifficulty
{
    TArray<UDifficultySetting*> DifficultySettings;
}

struct FGDResources
{
    UResourceData* CreditsResource;
    UResourceData* MOMResource;
    UResourceData* GoldResource;
    UResourceData* NitraResource;
    UResourceData* HollomiteResource;
    UResourceData* MagniteResource;
    UResourceData* NeromiteResource;
    UResourceData* QuantriteResource;
    UResourceData* UmaniteResource;
    UResourceData* CropaniteResource;
    UResourceData* DystrumResource;
    UResourceData* IronResource;
    UResourceData* EnorResource;
    UResourceData* BismorResource;
    UResourceData* OilShaleResource;
    UResourceData* Barly1;
    UResourceData* Barly2;
    UResourceData* Barly3;
    UResourceData* Barly4;
    UGemResourceData* JadizResource;
    UGemResourceData* BittergemResource;
    UGemResourceData* MotherlodeGemResource;
    UResourceData* RedSugarResource;
    UResourceData* BlankSchematics;
    TArray<UResourceData*> CraftingResources;
    TArray<UResourceData*> AllResources;
}

struct FGDCharacterRetirement
{
    TMap<UPlayerCharacterID*, TSubclassOf<UCampaign>> Campaigns;
    TMap<UPlayerCharacterID*, FRetirementCostItem> RetirementCost;
    TArray<float> CreditsCostMultipliers;
    TArray<float> ResourceCostMultipliers;
}

struct FRetirementCostItem
{
    TMap<UResourceData*, int32> RetirementCost;
}

struct FUpgradeCostItem
{
    TArray<int32> Amounts;
}

struct FGDStats
{
    UPawnStat* MaxAmmo;
    UPawnStat* MaxShields;
    UPawnStat* ShieldRegenerationRate;
    UPawnStat* MaxHealth;
    UPawnStat* DamageResistance;
    UPawnStat* FireResistance;
    UPawnStat* ColdResistance;
    UPawnStat* MeleeAttackDamage;
    UPawnStat* MovementSpeed;
    UPawnStat* SprintSpeed;
    UPawnStat* CarryingSpeedModifier;
    UPawnStat* ReviveSpeed;
    UPawnStat* DepositSpeed;
    UPawnStat* RessuplySpeed;
    UPawnStat* RedSugarHeal;
    UPawnStat* CarryingCapacity;
    UPawnStat* ZiplineSpeed;
    UPawnStat* ZiplineDownwardsBoost;
    UPawnStat* SlideDownIce;
    UPawnStat* FriendlyFire;
    UPawnStat* DamageFromPlayers;
    UPawnStat* DamageBonus;
    UPawnStat* FlareThrowingStrength;
    UPawnStat* CaveLeechSense;
    UPawnStat* MorkiteMining;
    UPawnStat* GoldMining;
    UPawnStat* RockMiningStrength;
    UPawnStat* DirtMiningStrength;
    UPawnStat* ResourceMiningStrength;
    UPawnStat* PowerAttackCooldownRate;
    UPawnStat* ImpactCompensation;
    UPawnStat* MovementSpeedPenalty;
    UPawnStat* MovementSpeedPenaltyReduction;
    UPawnStat* MovementSpeedEnvironmentalPenalty;
    UPawnStat* MovementSpeedEnvironmentalPenaltyReduction;
    UPawnStat* CarriableThrowing;
    UPawnStat* HoverBootsDuration;
}

struct FGDDamageClasses
{
    UDamageClass* Falling;
    UDamageClass* Fire;
    UDamageClass* Heat;
    UDamageClass* Physical;
    UDamageClass* Kinetic;
    UDamageClass* Explosive;
    UDamageClass* Cold;
    UDamageClass* Ice;
    UDamageClass* Corrosive;
}

struct FGDAudio
{
    TSoftObjectPtr<USoundAttenuation> FirstPersonHitscanAttenuationOverride;
    TSubclassOf<AFSDReverbVolume> ReverbActor;
    TSubclassOf<UDynamicReverbComponent> DynamicReverbClass;
    float SmallCaveRadius;
    float MediumCaveRadius;
    float LargeCaveRadius;
    float FirstPersonPriority;
    float ThirdPersonPriority;
}

struct FResourcePouchItem
{
    UResourceData* Resource;
}

struct FTrackPositionList
{
    FName TrackName;
    TArray<FVector> Positions;
    TArray<TWeakObjectPtr<UGemTracker>> Trackers;
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> DynamicMaterials;
}

struct FGMMutatorItem
{
    TArray<UMutator*> Mutators;
}

struct FDeepDiveAnalyticsInformation
{
    bool WasDeepDive;
    int32 LastDeepDiveStage;
    bool EliteDeepDive;
    bool IsReplay;
}

struct FPartyAnalyticsInformation
{
}

struct FGooPuddleStatusEffectTrigger
{
    TArray<UDamageClass*> Trigger;
    TSubclassOf<UStatusEffect> NewStatusEffect;
}

struct FAvoidActorEntry
{
    AActor* Actor;
}

struct FGrabAvoidClassEntry
{
    TSubclassOf<AActor> ActorClass;
    float DistanceToKeep;
}

struct FGraplingGunState
{
    FVector_NetQuantize TargetLocation;
    uint8 IsGrapling;
}

struct FStateStats
{
    float MaxAcceleration;
    float MaxPawnSpeed;
    float MinSlowdownAngle;
    float MaxSlowdownAngle;
    float MaxBreakingDeceleration;
}

struct FGuntowerModuleLevel
{
    TArray<TSubclassOf<AGuntowerModule>> PossibleModules;
    bool PreventDuplication;
}

struct FEliteEnemyEntry
{
    float HeroChance;
    TSubclassOf<UStatusEffect> StatusEffect;
    TArray<TSubclassOf<UActorComponent>> ComponentsToAdd;
    bool OverrideHealthScaling;
    TArray<FEliteEnemyBan> Bans;
    EEnemyHealthScaling HealthScalingOverride;
}

struct FEliteEnemyBan
{
    FInt32Interval AffectedPlayerCount;
    UMissionTemplate* Template;
}

struct FHealthBarLooks
{
    FLinearColor HealthColor;
    FLinearColor DamageColor;
}

struct FGenerateIconInfo
{
    EGeneratorIconType IconType;
    UPickaxePart* PickaxePart;
    FPickaxeSet PickaxeSet;
    EPickaxePartLocation PickaxePartLocation;
    UItemSkin* ItemSkin;
    UVanityItem* Item;
    UPlayerCharacterID* Character;
    FVector2D Size;
    bool bShowCloseUp;
}

struct FPickaxeSet
{
    UPickaxePart* BladeFront;
    UPickaxePart* OptionalBladeBack;
    UPickaxePart* Pommel;
    UPickaxePart* Handle;
    UPickaxePart* Shaft;
    UPickaxePart* Head;
    UPickaxePart* Material;
}

struct FQueuedMontage
{
    UAnimMontage* Montage;
    bool ForceUpdate;
}

struct FInputTranslationTable
{
    TMap<FName, FInputTranslation> Entries;
}

struct FInputTranslation
{
    FInputTranslationEntry Default;
    bool bControllerOverride;
    FInputTranslationEntry ControllerOverride;
}

struct FInputTranslationEntry
{
    EInputInteraction Interaction;
    FName InputName;
    int32 Axis;
}

struct FCarriedItemState
{
    AActor* Item;
    uint8 PlayThrowMontage;
}

struct FItemSkinOwners
{
    TArray<UItemID*> Items;
}

struct FGearStatEntry
{
    FText Text;
    FText Value;
    FText BaseValue;
    FText UpgradeValue;
    EItemPreviewStatus PreviewStatus;
}

struct FBumpPlayerHit
{
    FVector_NetQuantize force;
    APlayerCharacter* Player;
}

struct FLaserPointerData
{
    FText Name;
    FText Description;
    FLinearColor Color;
    UTexture2D* Icon;
    ELaserPointerTargetType TargetType;
    FGuid SaveGameID;
}

struct FLineSegmentCarverPoint
{
    FVector Position;
    float HRange;
    float VRange;
    float FloorAngle;
    float CielingNoiseRange;
    float WallNoiseRange;
    float FloorNoiseRange;
}

struct FLineSegmentFillerPoint
{
    FVector Position;
    FRandRange RandomRange;
    FRandRange RandomNoiseRange;
    FRandRange FillAmount;
}

struct FFSDTranslationProgress
{
    FString CodeName;
    int32 TranslatedPercent;
}

struct FLocalizedLanguageInfo
{
    FString EnglishName;
    FString NativeName;
    FString CodeName;
    bool CommunityTranslated;
    int32 TranslatedPercent;
}

struct FBeamCollision
{
    bool bBeamBlocked;
    float BeamHitDistance;
    FVector FinalTraceStart;
    FVector FinalTraceEnd;
}

struct FFSDLocalizedChatMessage
{
    EChatMessageType MsgType;
    FString Sender;
    FText Msg;
    TArray<FText> Arguments;
}

struct FMilestoneTier
{
    float CompletionCount;
    int32 PerkPoints;
}

struct FBiomeFeatures
{
    UMinersManualData* Descriptions;
}

struct FMissionTypeDescription
{
    FText InfoHeadline;
    TArray<FSoftMissionStepDescription> Steps;
}

struct FSoftMissionStepDescription
{
    FText Headline;
    FText RichDescription;
    TSoftObjectPtr<UTexture2D> Image;
}

struct FMissionStepDescription
{
    FText Headline;
    FText RichDescription;
    UTexture2D* Image;
}

struct FMinersManualDescription
{
    FText Headline;
    FText RichDescription;
    UTexture2D* ImageFront;
    UTexture2D* ImageBackground;
}

struct FSoftMinersManualDescription
{
    FText Headline;
    FText RichDescription;
    TSoftObjectPtr<UTexture2D> ImageFront;
    TSoftObjectPtr<UTexture2D> ImageBackground;
}

struct FDamageTypeDescription
{
    EDamageType Type;
    FText Name;
    FText RichDescription;
    FSoftIconWithColor Icon;
    float IconScale;
}

struct FSoftIconWithColor
{
    TSoftObjectPtr<UTexture2D> Icon;
    FLinearColor Tint;
}

struct FMiningPodDialogs
{
    UDialogDataAsset* DepartingIn5Min;
    UDialogDataAsset* DepartingIn4Min;
    UDialogDataAsset* DepartingIn3Min;
    UDialogDataAsset* DepartingIn2Min;
    UDialogDataAsset* DepartingIn1Min;
    UDialogDataAsset* DepartingIn30Sec;
    UDialogDataAsset* DepartingIn10Sec;
    UDialogDataAsset* DepartingIn123Sec;
    UDialogDataAsset* Departed;
    UDialogDataAsset* DeepDiveDeparted;
}

struct FGeneratedMissionGroup
{
    TArray<UGeneratedMission*> AvailableMissions;
}

struct FRewardTexts
{
    FText PrimaryObjective;
    FText SecondaryObjective;
    FText CountPrimaryObjectives;
    FText CountSecondaryObjectives;
    FText MineralsMinedByTeam;
    FText HostilesKilled;
}

struct FMissionHazardSetting
{
    FText Name;
    float HazardBonus;
}

struct FGDMissionStats
{
    UMissionStat* TimePlayed;
    UMissionStat* DistanceTravelled;
    UMissionStat* EnemiesKilled;
    UMissionStat* MineralsMined;
    UMissionStat* MissionCompleted;
    UMissionStat* SoloMissionCompleted;
    UMissionStat* SecondaryMissionCompleted;
    UMissionStat* CharacterLevelUp;
    UMissionStat* VanityItemsBought;
    UMissionStat* ItemUpgradesBought;
    UMissionStat* DrinkablesConsumed;
    UMissionStat* DrinkableRoundsOrdered;
    UMissionStat* BartenderCreditsTipped;
    UMissionStat* CampaignMissionsCompleted;
    UMissionStat* CampaignsCompleted;
    UMissionStat* TimesDowned;
    UMissionStat* TimesPassedOut;
    UMissionStat* WeaponsUnlockedStat;
    UMissionStat* SeasonEventsCompleted;
    UMissionStat* SeasonChallengesCompleted;
    UMissionStat* DeepDivesCompleted;
    UMissionStat* EliteDeepDivesCompleted;
    UMissionStat* CosmeticsCrafted;
    UMissionStat* WeaponSkinsCrafted;
    UMissionStat* WeaponOverclocksCrafted;
    UMissionStat* CraftingMasteryLevel;
    UMissionStat* DefendBlackBoxObjectivesCompleted;
    UMissionStat* RepairMiniMuleObjectivesCompleted;
    UMissionStat* DeepDiveCompletedBestTime;
    UMissionStat* EliteDeepDiveCompletedBestTime;
    UMissionStat* SpecialBeersUnlocked;
    TArray<UMissionStat*> AllMissionStats;
    TMap<UPlayerCharacterID*, UMissionStat*> CharacterMissionsCompleted;
}

struct FPlanetZoneItem
{
    TArray<UBiome*> Biomes;
    TArray<UGeneratedMission*> missions;
    UPlanetZone* Zone;
}

struct FMissionBiomeItem
{
    UBiome* Biome;
    float Rarity;
}

struct FMissionTemplateItem
{
    UMissionTemplate* Template;
    float Rarity;
}

struct FRequiredMissionItem
{
    UMissionTemplate* MissionTemplate;
    UMissionComplexity* Complexity;
    UMissionDuration* Duration;
}

struct FMultiHitScanHits
{
    TArray<FMultiHitscanHit> Hits;
    TArray<UPrimitiveComponent*> Components;
    TArray<UFSDPhysicalMaterial*> PhysicalMaterials;
}

struct FMultiHitscanHit
{
    uint8 TargetComponentIndex;
    uint8 PhysicalMaterialIndex;
    FVector_NetQuantize HitLocation;
    FVector_NetQuantizeNormal ImpactNormal;
    uint8 BoneIndex;
    bool PlayImpactSound;
    bool SpawnDecal;
}

struct FProjectileSpawnData
{
    TSubclassOf<AProjectile> projectileClass;
    FFloatInterval HorizontalAngleOffset;
    FFloatInterval VerticalAngleOffset;
    FFloatInterval Delay;
    bool IsBallistic;
}

struct FActiveAudioItem
{
    UAudioComponent* Audio;
    float FadeoutDuration;
}

struct FActiveMusicItem
{
    USoundBase* Sound;
    float StartingTime;
    float FadeDuration;
    bool Looping;
    FMusicHandle Handle;
    UMusicCategory* Category;
}

struct FMusicHandle
{
    int32 MusicHandle;
}

struct FPathCell
{
}

struct FPathDebugNode
{
}

struct FOxygenCallback
{
    FOxygenCallbackDelegate Delegate;
    void OxygenTriggerDelegate();
}

struct FSimpleObjectInfoData
{
    FText InGameName;
    FText InGameDescription;
    UDialogDataAsset* LookAtShout;
    UTexture2D* Icon;
}

struct FPawnStatEntriesArray : FFastArraySerializer
{
    TArray<FPawnStatEntry> Items;
    UPawnStatsComponent* Owner;
}

struct FPawnStatEntry : FFastArraySerializerItem
{
    UPawnStat* PawnStat;
    float Value;
}

struct FPerkUsage
{
    UPerkAsset* Perk;
    int32 UsedCount;
}

struct FPickaxeMeshInstance
{
    UMeshComponent* FP_Mesh;
    UMeshComponent* TP_Mesh;
}

struct FDefaultPickaxeParts
{
    TMap<EPickaxePartLocation, UPickaxePart*> Parts;
}

struct FPillarSegment
{
    float Scale;
    float HeightOffset;
}

struct FHealthRegenerationParams
{
    bool bIsRegenerating;
    float DelayAfterDamage;
    float HealthPerSecond;
    float TargetHealthRatio;
}

struct FPlayerSphere
{
    FVector Center;
    float Radius;
    TArray<TWeakObjectPtr<APlayerCharacter>> Players;
}

struct FProximityTriggerItem
{
    FProximityTriggerItemCallback Callback;
    void PlayerProximityDelegate(UPlayerCharacter* Player, bool enteredTrigger);
}

struct FRejoinFloat
{
    FGuid ItemKey;
    FName ValueKey;
    float Value;
}

struct FRejoinInt
{
    FGuid ItemKey;
    FName ValueKey;
    int32 Value;
}

struct FDeepDiveTesterItem
{
    UMissionTemplate* mission;
    UMissionMutator* Mutator;
    UMissionWarning* Warning;
}

struct FPostDataModel
{
}

struct FPostProcessingBlendable
{
    TScriptInterface<IBlendableInterface> Blendable;
}

struct FInfluenceMap
{
    TMap<UObject*, FCaveInfluenceSet> CaveInfluences;
}

struct FCaveInfluenceSet
{
    TArray<FCaveInfluence> CaveInfluences;
}

struct FCaveInfluence
{
    FVector Center;
    float range;
}

struct FGemResourceAmount
{
    UGemResourceCreator* GemCreator;
    int32 Amount;
}

struct FCarvedResource
{
    UCarvedResourceCreator* ResourceCreator;
    TArray<int32> PredeterminedRooms;
    int32 Amount;
    float Overflow;
}

struct FDebrisPatchResource
{
    UDebrisPatchComponent* Debris;
}

struct FDebrisVeinResource
{
    UDebrisVeinComponent* Debris;
}

struct FVeinResource
{
    UVeinResourceCreator* ResourceCreator;
    float VeinLengthToGenerate;
}

struct FGeneratedInstantCarvers
{
    TArray<FLevelCarverPass> LevelCarverPasses;
}

struct FLevelCarverPass
{
    TArray<FLevelGenerationCarverLists> Lists;
}

struct FLevelGenerationCarverLists
{
    TArray<FLevelGenerationCarver> Carvers;
}

struct FTerrainPlacementDebugItem
{
    TArray<FTerrainPlacementBox> TerrainCheckers;
    bool BoxGood;
    bool CapsuleGood;
    EDebrisColliderType CapsuleType;
    FDebrisCapsule Capsule;
    FTransform Transform;
}

struct FTerrainPlacementBox
{
    FVector Min;
    FVector Max;
    ETerrainPlacementBoxType PlacementType;
}

struct FGeneratedDebris
{
    TMap<UDebrisBase*, UObject*> Debris;
    bool IsValid;
}

struct FGeneratedDebrisItem
{
    UDebrisBase* Debris;
    UObject* Influencer;
}

struct FGeneratedInfluenceSets
{
    TArray<FGeneratedInfluenceSet> InfluenceSets;
    bool IsValid;
}

struct FGeneratedInfluenceSet
{
    UObject* CaveInfluencer;
    int32 NetworkID;
    TArray<FCaveInfluence> CaveInfluences;
}

struct FCollectableSpawnableItem
{
    UCollectableResourceData* Resource;
    int32 Amount;
}

struct FResourceSpawner
{
    UResourceData* Resource;
    FRandFloatInterval AmountToSpawn;
}

struct FPLSResource
{
    UResourceData* Resource;
    float AmountToGenerate;
}

struct FTunnelPath
{
    TArray<FVector> Path;
}

struct FInfluenceSphere
{
    UCaveInfluencer* Influencer;
    float Radius;
}

struct FProfileCategoryTiming
{
    FString CategoryName;
    float CategoryTime;
}

struct FProfileEntry
{
    TWeakObjectPtr<UObject> Context;
    FString Category;
    float TimeSpent;
}

struct FDormantComponentState
{
    TWeakObjectPtr<UActorComponent> Component;
    TEnumAsByte<ECollisionEnabled::Type> Collision;
    FName CollisionProfileName;
    uint8 Active;
    uint8 Visible;
}

struct FProjectileSwitch
{
    TSubclassOf<AProjectileBase> projectileClass;
    EProjectileSwitchCriteria CriteriaType;
    float CriteriaThreshhold;
}

struct FPromotionRewardsRank
{
    TArray<FClaimableRewardEntry> RewardsAllClasses;
    TMap<UPlayerCharacterID*, FClaimableRewardArray> RewardsCharacterSpecific;
}

struct FRagdollItem
{
    AActor* Actor;
    TArray<UMaterialInstanceDynamic*> Materials;
    UMaterialInstanceDynamic* DropshadowMaterial;
}

struct FExposedProperty
{
}

struct FExposedFloat : FExposedProperty
{
    FName PropertyName;
    FText Description;
    float MinValue;
    float MaxValue;
}

struct FExposableFloat
{
    float Value;
    bool Exposed;
    FText Description;
    float MinValue;
    float MaxValue;
}

struct FRecoilImpulse
{
    float Rotation;
    FVector2D Impulse;
}

struct FResourceInitalizer
{
    UResourceData* Resource;
    float MaxAmount;
}

struct FResourceDebris
{
    float InfluencerRange;
    UDebrisBase* Debris;
}

struct FRichTextParseResult
{
    FText SourceText;
    FString UnformattedString;
    int32 UnformattedLength;
    TArray<FRichTextToken> Tokens;
}

struct FRichTextToken
{
    FString Tag;
    FString Text;
}

struct FTextStyleOverride
{
    bool bOverrideFont;
    FSlateFontInfo Font;
    bool bOverrideColor;
    FSlateColor Color;
    bool bOverrideSize;
    float SizeScale;
}

struct FRoomGeneratorGroupInstance
{
    TArray<URoomGenerator*> Rooms;
}

struct FRoomNodeBase
{
}

struct FRoomNode : FRoomNodeBase
{
    int32 ID;
    ERoomType RoomType;
    int32 CarvePass;
    FVector Position;
    float Radius;
    TArray<int32> EntranceIDs;
    TArray<int32> ExitIDs;
    TArray<FRoomEntrance> RoomEntrances;
    bool CanHaveEnemies;
    TArray<FGeneratedRoom> Rooms;
    float ResourceMultiplier;
    float WeightedResourceAmount;
    TArray<FRoomGeneratorItem> RoomGenerators;
}

struct FRoomGeneratorItem
{
    URoomGeneratorBase* RoomGenerator;
    FVector Position;
    float Rotation;
}

struct FGeneratedRoom
{
    UTerrainMaterial* Material;
    TArray<FRoomLine> Lines;
    TArray<FPillar> Pillars;
    TArray<FRoomBox> BoxCarvers;
    TArray<FRoomBox> BoxFillers;
    TArray<FResourceLocation> ResourceLocations;
    TArray<FRoomEntrance> Entrances;
    TArray<FRoomItem> RoomItems;
    TArray<FTriggerItem> TriggerItems;
}

struct FTriggerItem
{
    TSubclassOf<ASpawnTrigger> TriggerClass;
    FTransform Transform;
    FName Message;
}

struct FRoomItem
{
    TSubclassOf<AActor> Spawnable;
    FVector Location;
    FRotator_NoQuantize Rotation;
}

struct FRotator_NoQuantize : FRotator
{
}

struct FRoomEntrance
{
    FVector Location;
    FVector Direction;
    bool IsBLocked;
    ECaveEntranceType EntranceType;
    ECaveEntrancePriority Priority;
    int32 PathObstacleID;
}

struct FResourceLocation
{
    FVector Location;
    UResourceData* Resource;
    float BaseAmount;
}

struct FRoomBox
{
    FVector Position;
    FRotator_NoQuantize Rotation;
    FVector Extends;
    float NoiseRange;
    UFloodFillSettings* Noise;
}

struct FPillar
{
    UFloodFillSettings* NoiseOverride;
    TArray<FWeightedLinePoint> Points;
    float NoiseScale;
    float EndcapScale;
}

struct FWeightedLinePoint
{
    FVector Location;
    float range;
    float NoiseRange;
    float SkewFactor;
    float FillAmount;
}

struct FRoomLine
{
    UFloodFillSettings* WallNoiseOverride;
    UFloodFillSettings* CeilingNoiseOverride;
    UFloodFillSettings* FloorNoiseOverride;
    bool UseDetailNoise;
    TArray<FRoomLinePoint> Points;
    TArray<FVector> RightVectors;
}

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
}

struct FTunnelNode : FRoomNodeBase
{
    int32 EntranceRoomID;
    int32 ExitRoomID;
    FRoomEntrance Entrance;
    FRoomEntrance Exit;
    UTunnelParameters* ParametersOverride;
    FTunnelPath Path;
    int32 ID;
    FVector DirtStartLocation;
    bool AddDirt;
    float WeightedResourceAmount;
}

struct FRandLinePoint
{
    FVector Location;
    FRandRange range;
    FRandRange NoiseRange;
    FRandRange SkewFactor;
    FRandRange FillAmount;
}

struct FSaveGameSnapShot
{
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    FString Filename;
    bool IsObsolete;
    int32 VersionNumber;
    int32 Credits;
    TMap<TSubclassOf<APlayerCharacter>, int32> CharacterLevels;
    TMap<TSubclassOf<UResourceData>, int32> Resources;
}

struct FSchematicGADataEntry : FTableRowBase
{
    int32 SchematicGAID;
    FString SchematicName;
}

struct FSchematicBankItem
{
    USchematicPricingTier* PricingTier;
    USchematicRarity* Rarity;
    TArray<USchematic*> Schematics;
}

struct FSchematicType
{
    TSoftObjectPtr<UTexture2D> Icon;
    FLinearColor IconTint;
    TSoftObjectPtr<UTexture2D> Frame;
    FLinearColor FrameTint;
}

struct FUnassignedReward
{
    UReward* Reward;
    int32 Index;
}

struct FSeasonLevel
{
    UReward* Reward;
    UReward* specialReward;
}

struct FTrackedStatInfo
{
    UMissionStat* Stat;
    FText Name;
    TSoftObjectPtr<UTexture2D> Image;
    UDataAsset* assetReference;
}

struct FChallengeInfo
{
    FText Text;
    UTexture2D* Icon;
    UTexture2D* IconOutlined;
    FLinearColor Color;
    int32 CurrentWins;
    int32 NumberOfWins;
    int32 XPCompleteGain;
    int32 TokenGain;
    TSoftObjectPtr<UTexture2D> Stat1Image;
    TSoftObjectPtr<UTexture2D> Stat2Image;
    bool bIsSpecial;
}

struct FChallengeVariation
{
    int32 NumberOfWins;
    int32 XPCompleteGain;
    int32 TokenGain;
}

struct FSeasonalEventEntry
{
    USpecialEvent* SpecialEvent;
    TArray<UMissionTemplate*> BannedMissions;
}

struct FSeasonMissionResult
{
    int32 XPFromMission;
    int32 XPFromChallenges;
    int32 TokenGain;
    bool LevelIncreased;
    TArray<FChallengeInfo> UpdatedChallenges;
    TArray<FSeasonEvent> CompletedEvents;
}

struct FSeasonEvent
{
    USeasonEventData* Event;
    int32 count;
}

struct FFSDServerListResponse
{
    TArray<FFSDServerListEntryModel> Lobbies;
}

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
}

struct FFSDServerListEntryModModel
{
    FString Name;
    int32 Category;
    FString Version;
}

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
}

struct FFSDSteamServerListRequest : FFSDServerListRequest
{
    FString SteamTicket;
    FString SteamPingLoc;
    TArray<int32> GameTypes;
}

struct FFriendInfo
{
    FString DisplayName;
    FString RealName;
    bool IsOnline;
    bool IsPlaying;
    bool IsPlayingThisGame;
    bool IsJoinable;
    FString sessionId;
    bool HasVoiceSupport;
    FString PresenceStatus;
}

struct FLookupSessionResponse
{
    bool Valid;
    FString LobbyId;
    FString P2PAddr;
    int32 P2PPORT;
}

struct FLookupSessionRequest
{
    FString SessionKey;
}

struct FStopSessionResponse
{
    bool success;
}

struct FStopSessionRequest
{
    FString SessionKey;
}

struct FSessionUpdateResponse
{
    bool success;
}

struct FSessionUpdateRequest
{
    FString SessionKey;
    int32 NumPlayers;
}

struct FRegisterSessionResponse
{
    FString SessionKey;
}

struct FRegisterSessionRequest
{
    FString serverName;
    int32 NumPlayers;
    FString LobbyId;
    FString P2PAddr;
    int32 P2PPORT;
}

struct FSoundClassManagerItem
{
}

struct FSoundMixManagerItem
{
    USoundMix* mix;
}

struct FSpiderAnimInstanceProxy : FAnimInstanceProxy
{
}

struct FRandomWalkCycleEntry
{
    float RandomSelectionWeight;
    FRandRange Duration;
    float CoolDown;
    float LastTimePlayed;
}

struct FActiveStatusEffectBank
{
    UStatusEffect* Key;
    UStatusEffect* ActiveEffect;
    TArray<FActiveStatusEffect> Effects;
}

struct FActiveStatusEffect
{
    TWeakObjectPtr<AActor> Owner;
}

struct FHeatSource
{
    float Temperature;
    int32 Intensity;
}

struct FTentacleAnimInstanceProxy : FAnimInstanceProxy
{
}

struct FAnimNode_Tentacle : FAnimNode_SkeletalControlBase
{
    TArray<FBoneReference> BonesToModify;
}

struct FTentacleTarget
{
    FVector_NetQuantize Location;
    FRotator Rotation;
    float MovementDuration;
    bool UseSpring;
}

struct FTetherMessageSettings
{
}

struct FTrackMovement
{
    int32 Direction;
    float Distance;
    float Speed;
}

struct FPipelineMovementData
{
    int32 Direction;
    float Distance;
    float Speed;
    bool UpToSpeed;
    float Acceleration;
    TWeakObjectPtr<APipelineSegment> PipelineSegment;
}

struct FTreasureWeight
{
    float Weight;
    TSubclassOf<UTreasureRewarder> RewarderClass;
}

struct FVanityNode
{
    UReward* Reward;
    int32 NodeID;
    TArray<int32> ConnectedNodes;
    bool bIsBig;
    bool bIsStartingNode;
    FVector2D Position;
}

struct FTunnelSettingItem
{
    UTunnelSegmentSetting* SegmentSetting;
    FInt32Interval SegmentSize;
}

struct FTutorialHint
{
    FText Text;
    FText TaskText;
    FText Title;
    TSoftObjectPtr<UTexture2D> Image;
}

struct FHeightenedSenseTracker
{
    TWeakObjectPtr<AActor> Actor;
    TWeakObjectPtr<UHealthComponentBase> HealthComponent;
    TScriptInterface<IAttackingPointInterface> AttackingPoint;
}

struct FMasteryItem
{
    int32 NeededMastery;
    TArray<UUnlockReward*> Unlocks;
}

struct FUpgradeTier
{
    TArray<UItemUpgrade*> upgrades;
    int32 RequiredCharacterLevel;
    int32 RequiredPlayerRank;
}

struct FVanityTestCharacterItem
{
    USkeletalMesh* Mesh;
    TSubclassOf<UVanityAnimInstance> AnimBP;
}

struct FTattooArmorItem
{
    UVanityTattoo* Tattoo;
    bool IsLeftArm;
    bool FlipTexture;
}

struct FWeakpointChannel
{
    UFSDPhysicalMaterial* WeakPointMaterial;
    FName Bone;
    UMaterialInstanceDynamic* Mid;
}

struct FWeakpointTask
{
    FRichCurve GrowCurve;
    FRichCurve FadeCurve;
}

struct FWeaponHitCounterEffectItem
{
    TWeakObjectPtr<AActor> Target;
}

struct FWeightedRoomSelector
{
    TArray<FWeightedRoomSelectorItem> Items;
}

struct FWeightedRoomSelectorItem
{
    URoomGenerator* Room;
    float Weight;
}

struct FXPSettings
{
    float XP_PerGold;
    float XP_PerKill;
    float XP_OnSurvivedLevel;
}

struct FZipLineConnectorHandler
{
    TSoftClassPtr<AZipLineConnector> ConnectorClass;
    AZipLineConnector* Connector;
}

struct FZipLine
{
    FVector Start;
    FVector End;
}

#endif
