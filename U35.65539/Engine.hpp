#ifndef UE4SS_SDK_Engine_HPP
#define UE4SS_SDK_Engine_HPP

#include "Engine_enums.hpp"

class UBlueprintFunctionLibrary : UObject
{
}

class UPlayer : UObject
{
    APlayerController* PlayerController;
    int32 CurrentNetSpeed;
    int32 ConfiguredInternetSpeed;
    int32 ConfiguredLanSpeed;
}

class UNetConnection : UPlayer
{
    TArray<UChildConnection*> Children;
    UNetDriver* Driver;
    TSubclassOf<UPackageMap> PackageMapClass;
    UPackageMap* PackageMap;
    TArray<UChannel*> OpenChannels;
    TArray<AActor*> SentTemporaries;
    AActor* ViewTarget;
    AActor* owningActor;
    int32 MaxPacket;
    uint8 InternalAck;
    FUniqueNetIdRepl PlayerId;
    double LastReceiveTime;
    TArray<UChannel*> ChannelsToTick;
}

class UNetDriver : UObject
{
    FString NetConnectionClassName;
    FString ReplicationDriverClassName;
    int32 MaxDownloadSize;
    uint8 bClampListenServerTickRate;
    int32 NetServerMaxTickRate;
    int32 MaxNetTickRate;
    int32 MaxInternetClientRate;
    int32 MaxClientRate;
    float ServerTravelPause;
    float SpawnPrioritySeconds;
    float RelevantTimeout;
    float KeepAliveTime;
    float InitialConnectTimeout;
    float ConnectionTimeout;
    float TimeoutMultiplierForUnoptimizedBuilds;
    bool bNoTimeouts;
    bool bNeverApplyNetworkEmulationSettings;
    UNetConnection* ServerConnection;
    TArray<UNetConnection*> ClientConnections;
    int32 RecentlyDisconnectedTrackingTime;
    UWorld* World;
    UPackage* WorldPackage;
    UClass* NetConnectionClass;
    UClass* ReplicationDriverClass;
    FName NetDriverName;
    TArray<FChannelDefinition> ChannelDefinitions;
    TMap<FName, FChannelDefinition> ChannelDefinitionMap;
    TArray<UChannel*> ActorChannelPool;
    float Time;
    UReplicationDriver* ReplicationDriver;
}

class UBlueprintAsyncActionBase : UObject
{

    void Activate();
}

class UOnlineBlueprintCallProxyBase : UBlueprintAsyncActionBase
{
}

class AActor : UObject
{
    FActorTickFunction PrimaryActorTick;
    uint8 bNetTemporary;
    uint8 bNetStartup;
    uint8 bOnlyRelevantToOwner;
    uint8 bAlwaysRelevant;
    uint8 bReplicateMovement;
    uint8 bHidden;
    uint8 bTearOff;
    uint8 bExchangedRoles;
    uint8 bNetLoadOnClient;
    uint8 bNetUseOwnerRelevancy;
    uint8 bRelevantForNetworkReplays;
    uint8 bRelevantForLevelBounds;
    uint8 bReplayRewindable;
    uint8 bAllowTickBeforeBeginPlay;
    uint8 bAutoDestroyWhenFinished;
    uint8 bCanBeDamaged;
    uint8 bBlockInput;
    uint8 bCollideWhenPlacing;
    uint8 bFindCameraComponentWhenViewTarget;
    uint8 bGenerateOverlapEventsDuringLevelStreaming;
    uint8 bIgnoresOriginShifting;
    uint8 bEnableAutoLODGeneration;
    uint8 bIsEditorOnlyActor;
    uint8 bActorSeamlessTraveled;
    uint8 bReplicates;
    uint8 bCanBeInCluster;
    uint8 bAllowReceiveTickEventOnDedicatedServer;
    uint8 bActorEnableCollision;
    uint8 bActorIsBeingDestroyed;
    EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming;
    EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming;
    TEnumAsByte<ENetRole> RemoteRole;
    FRepMovement ReplicatedMovement;
    float InitialLifeSpan;
    float CustomTimeDilation;
    FRepAttachment AttachmentReplication;
    AActor* Owner;
    FName NetDriverName;
    TEnumAsByte<ENetRole> Role;
    TEnumAsByte<ENetDormancy> NetDormancy;
    ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod;
    TEnumAsByte<EAutoReceiveInput::Type> AutoReceiveInput;
    int32 InputPriority;
    UInputComponent* InputComponent;
    float NetCullDistanceSquared;
    int32 NetTag;
    float NetUpdateFrequency;
    float MinNetUpdateFrequency;
    float NetPriority;
    APawn* Instigator;
    TArray<AActor*> Children;
    USceneComponent* RootComponent;
    TArray<AMatineeActor*> ControllingMatineeActors;
    TArray<FName> Layers;
    TWeakObjectPtr<UChildActorComponent> ParentComponent;
    TArray<FName> Tags;
    FActorOnTakeAnyDamage OnTakeAnyDamage;
    void TakeAnyDamageSignature(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    FActorOnTakePointDamage OnTakePointDamage;
    void TakePointDamageSignature(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    FActorOnTakeRadialDamage OnTakeRadialDamage;
    void TakeRadialDamageSignature(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    FActorOnActorBeginOverlap OnActorBeginOverlap;
    void ActorBeginOverlapSignature(AActor* OverlappedActor, AActor* OtherActor);
    FActorOnActorEndOverlap OnActorEndOverlap;
    void ActorEndOverlapSignature(AActor* OverlappedActor, AActor* OtherActor);
    FActorOnBeginCursorOver OnBeginCursorOver;
    void ActorBeginCursorOverSignature(AActor* TouchedActor);
    FActorOnEndCursorOver OnEndCursorOver;
    void ActorEndCursorOverSignature(AActor* TouchedActor);
    FActorOnClicked OnClicked;
    void ActorOnClickedSignature(AActor* TouchedActor, FKey ButtonPressed);
    FActorOnReleased OnReleased;
    void ActorOnReleasedSignature(AActor* TouchedActor, FKey ButtonReleased);
    FActorOnInputTouchBegin OnInputTouchBegin;
    void ActorOnInputTouchBeginSignature(uint8 FingerIndex, AActor* TouchedActor);
    FActorOnInputTouchEnd OnInputTouchEnd;
    void ActorOnInputTouchEndSignature(uint8 FingerIndex, AActor* TouchedActor);
    FActorOnInputTouchEnter OnInputTouchEnter;
    void ActorBeginTouchOverSignature(uint8 FingerIndex, AActor* TouchedActor);
    FActorOnInputTouchLeave OnInputTouchLeave;
    void ActorEndTouchOverSignature(uint8 FingerIndex, AActor* TouchedActor);
    FActorOnActorHit OnActorHit;
    void ActorHitSignature(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    FActorOnDestroyed OnDestroyed;
    void ActorDestroyedSignature(AActor* DestroyedActor);
    FActorOnEndPlay OnEndPlay;
    void ActorEndPlaySignature(AActor* Actor, uint8 EndPlayReason);
    TArray<UActorComponent*> InstanceComponents;
    TArray<UActorComponent*> BlueprintCreatedComponents;

    bool WasRecentlyRendered(float Tolerance);
    void UserConstructionScript();
    void TearOff();
    void SnapRootComponentTo(AActor* InParentActor, FName InSocketName);
    void SetTickGroup(uint8 NewTickGroup);
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    void SetReplicates(bool bInReplicates);
    void SetReplicateMovement(bool bInReplicateMovement);
    void SetOwner(AActor* NewOwner);
    void SetNetDormancy(uint8 NewDormancy);
    void SetLifeSpan(float InLifespan);
    void SetAutoDestroyWhenFinished(bool bVal);
    void SetActorTickInterval(float TickInterval);
    void SetActorTickEnabled(bool bEnabled);
    void SetActorScale3D(FVector NewScale3D);
    void SetActorRelativeScale3D(FVector NewRelativeScale);
    void SetActorHiddenInGame(bool bNewHidden);
    void SetActorEnableCollision(bool bNewActorEnableCollision);
    void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveRadialDamage(float DamageReceived, const UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    void ReceivePointDamage(float Damage, const UDamageType* DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, const FHitResult& HitInfo);
    void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveEndPlay(uint8 EndPlayReason);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ReceiveActorOnReleased(FKey ButtonReleased);
    void ReceiveActorOnInputTouchLeave(const uint8 FingerIndex);
    void ReceiveActorOnInputTouchEnter(const uint8 FingerIndex);
    void ReceiveActorOnInputTouchEnd(const uint8 FingerIndex);
    void ReceiveActorOnInputTouchBegin(const uint8 FingerIndex);
    void ReceiveActorOnClicked(FKey ButtonPressed);
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ReceiveActorEndCursorOver();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ReceiveActorBeginCursorOver();
    void PrestreamTextures(float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);
    void OnRep_ReplicateMovement();
    void OnRep_ReplicatedMovement();
    void OnRep_Owner();
    void OnRep_Instigator();
    void OnRep_AttachmentReplication();
    void MakeNoise(float Loudness, APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, FName Tag);
    UMaterialInstanceDynamic* MakeMIDForMaterial(UMaterialInterface* Parent);
    bool K2_TeleportTo(FVector DestLocation, FRotator DestRotation);
    bool K2_SetActorTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorRotation(FRotator NewRotation, bool bTeleportPhysics);
    void K2_SetActorRelativeTransform(const FTransform& NewRelativeTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetActorRelativeRotation(FRotator NewRelativeRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetActorRelativeLocation(FVector NewRelativeLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool K2_SetActorLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_OnReset();
    void K2_OnEndViewTarget(UPlayerController* PC);
    void K2_OnBecomeViewTarget(UPlayerController* PC);
    USceneComponent* K2_GetRootComponent();
    TArray<UActorComponent*> K2_GetComponentsByClass(TSubclassOf<UActorComponent> ComponentClass);
    FRotator K2_GetActorRotation();
    FVector K2_GetActorLocation();
    void K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);
    void K2_DestroyComponent(UActorComponent* Component);
    void K2_DestroyActor();
    void K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    void K2_AttachToActor(AActor* ParentActor, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    void K2_AttachRootComponentToActor(AActor* InParentActor, FName InSocketName, uint8 AttachLocationType, bool bWeldSimulatedBodies);
    void K2_AttachRootComponentTo(USceneComponent* InParent, FName InSocketName, uint8 AttachLocationType, bool bWeldSimulatedBodies);
    void K2_AddActorWorldTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddActorLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool IsOverlappingActor(const AActor* Other);
    bool IsChildActor();
    bool IsActorTickEnabled();
    bool IsActorBeingDestroyed();
    bool HasAuthority();
    float GetVerticalDistanceTo(const AActor* OtherActor);
    FVector GetVelocity();
    FTransform GetTransform();
    bool GetTickableWhenPaused();
    float GetSquaredDistanceTo(const AActor* OtherActor);
    TEnumAsByte<ENetRole> GetRemoteRole();
    UChildActorComponent* GetParentComponent();
    AActor* GetParentActor();
    AActor* GetOwner();
    void GetOverlappingComponents(TArray<UPrimitiveComponent*>& OverlappingComponents);
    void GetOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter);
    TEnumAsByte<ENetRole> GetLocalRole();
    float GetLifeSpan();
    AController* GetInstigatorController();
    APawn* GetInstigator();
    FVector GetInputVectorAxisValue(const FKey InputAxisKey);
    float GetInputAxisValue(const FName InputAxisName);
    float GetInputAxisKeyValue(const FKey InputAxisKey);
    float GetHorizontalDotProductTo(const AActor* OtherActor);
    float GetHorizontalDistanceTo(const AActor* OtherActor);
    float GetGameTimeSinceCreation();
    float GetDotProductTo(const AActor* OtherActor);
    float GetDistanceTo(const AActor* OtherActor);
    TArray<UActorComponent*> GetComponentsByTag(TSubclassOf<UActorComponent> ComponentClass, FName Tag);
    TArray<UActorComponent*> GetComponentsByInterface(TSubclassOf<UInterface> Interface);
    UActorComponent* GetComponentByClass(TSubclassOf<UActorComponent> ComponentClass);
    FName GetAttachParentSocketName();
    AActor* GetAttachParentActor();
    void GetAttachedActors(TArray<AActor*>& OutActors, bool bResetArray);
    void GetAllChildActors(TArray<AActor*>& ChildActors, bool bIncludeDescendants);
    FVector GetActorUpVector();
    float GetActorTimeDilation();
    float GetActorTickInterval();
    FVector GetActorScale3D();
    FVector GetActorRightVector();
    FVector GetActorRelativeScale3D();
    FVector GetActorForwardVector();
    void GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation);
    bool GetActorEnableCollision();
    void GetActorBounds(bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, bool bIncludeFromChildActors);
    void ForceNetUpdate();
    void FlushNetDormancy();
    void EnableInput(UPlayerController* PlayerController);
    void DisableInput(UPlayerController* PlayerController);
    void DetachRootComponentFromParent(bool bMaintainWorldPosition);
    void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    void AddTickPrerequisiteActor(AActor* PrerequisiteActor);
    UActorComponent* AddComponent(FName TemplateName, bool bManualAttachment, const FTransform& RelativeTransform, const UObject* ComponentTemplateContext);
    bool ActorHasTag(FName Tag);
}

class UOnlineEngineInterface : UObject
{
}

class UDeveloperSettings : UObject
{
}

class UOnlineSession : UObject
{
}

class UActorComponent : UObject
{
    FActorComponentTickFunction PrimaryComponentTick;
    TArray<FName> ComponentTags;
    TArray<UAssetUserData*> AssetUserData;
    int32 UCSSerializationIndex;
    uint8 bNetAddressable;
    uint8 bReplicates;
    uint8 bAutoActivate;
    uint8 bIsActive;
    uint8 bEditableWhenInherited;
    uint8 bCanEverAffectNavigation;
    uint8 bIsEditorOnly;
    EComponentCreationMethod CreationMethod;
    FActorComponentOnComponentActivated OnComponentActivated;
    void ActorComponentActivatedSignature(UActorComponent* Component, bool bReset);
    FActorComponentOnComponentDeactivated OnComponentDeactivated;
    void ActorComponentDeactivateSignature(UActorComponent* Component);
    TArray<FSimpleMemberReference> UCSModifiedProperties;

    void ToggleActive();
    void SetTickGroup(uint8 NewTickGroup);
    void SetTickableWhenPaused(bool bTickableWhenPaused);
    void SetIsReplicated(bool ShouldReplicate);
    void SetComponentTickInterval(float TickInterval);
    void SetComponentTickEnabled(bool bEnabled);
    void SetAutoActivate(bool bNewAutoActivate);
    void SetActive(bool bNewActive, bool bReset);
    void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(uint8 EndPlayReason);
    void ReceiveBeginPlay();
    void OnRep_IsActive();
    void K2_DestroyComponent(UObject* Object);
    bool IsComponentTickEnabled();
    bool IsBeingDestroyed();
    bool IsActive();
    AActor* GetOwner();
    float GetComponentTickInterval();
    void Deactivate();
    bool ComponentHasTag(FName Tag);
    void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
    void AddTickPrerequisiteActor(AActor* PrerequisiteActor);
    void Activate(bool bReset);
}

class USceneComponent : UActorComponent
{
    TWeakObjectPtr<APhysicsVolume> PhysicsVolume;
    USceneComponent* AttachParent;
    FName AttachSocketName;
    TArray<USceneComponent*> AttachChildren;
    TArray<USceneComponent*> ClientAttachedChildren;
    FVector RelativeLocation;
    FRotator RelativeRotation;
    FVector RelativeScale3D;
    FVector ComponentVelocity;
    uint8 bComponentToWorldUpdated;
    uint8 bAbsoluteLocation;
    uint8 bAbsoluteRotation;
    uint8 bAbsoluteScale;
    uint8 bVisible;
    uint8 bShouldBeAttached;
    uint8 bShouldSnapLocationWhenAttached;
    uint8 bShouldSnapRotationWhenAttached;
    uint8 bShouldUpdatePhysicsVolume;
    uint8 bHiddenInGame;
    uint8 bBoundsChangeTriggersStreamingDataRebuild;
    uint8 bUseAttachParentBound;
    TEnumAsByte<EComponentMobility::Type> Mobility;
    TEnumAsByte<EDetailMode> DetailMode;
    FSceneComponentPhysicsVolumeChangedDelegate PhysicsVolumeChangedDelegate;
    void PhysicsVolumeChanged(UPhysicsVolume* NewVolume);

    void ToggleVisibility(bool bPropagateToChildren);
    bool SnapTo(USceneComponent* InParent, FName InSocketName);
    void SetWorldScale3D(FVector newScale);
    void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
    void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);
    void SetRelativeScale3D(FVector NewScale3D);
    void SetMobility(uint8 NewMobility);
    void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
    void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
    void ResetRelativeTransform();
    void OnRep_Visibility(bool OldValue);
    void OnRep_Transform();
    void OnRep_AttachSocketName();
    void OnRep_AttachParent();
    void OnRep_AttachChildren();
    void K2_SetWorldTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    FTransform K2_GetComponentToWorld();
    FVector K2_GetComponentScale();
    FRotator K2_GetComponentRotation();
    FVector K2_GetComponentLocation();
    void K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify);
    bool K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    bool K2_AttachTo(USceneComponent* InParent, FName InSocketName, uint8 AttachType, bool bWeldSimulatedBodies);
    void K2_AddWorldTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddRelativeRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddRelativeLocation(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    bool IsVisible();
    bool IsSimulatingPhysics(FName BoneName);
    bool IsAnySimulatingPhysics();
    FVector GetUpVector();
    FTransform GetSocketTransform(FName InSocketName, uint8 TransformSpace);
    FRotator GetSocketRotation(FName InSocketName);
    FQuat GetSocketQuaternion(FName InSocketName);
    FVector GetSocketLocation(FName InSocketName);
    bool GetShouldUpdatePhysicsVolume();
    FVector GetRightVector();
    FTransform GetRelativeTransform();
    APhysicsVolume* GetPhysicsVolume();
    void GetParentComponents(TArray<USceneComponent*>& Parents);
    int32 GetNumChildrenComponents();
    FVector GetForwardVector();
    FVector GetComponentVelocity();
    void GetChildrenComponents(bool bIncludeAllDescendants, TArray<USceneComponent*>& Children);
    USceneComponent* GetChildComponent(int32 ChildIndex);
    FName GetAttachSocketName();
    USceneComponent* GetAttachParent();
    TArray<FName> GetAllSocketNames();
    bool DoesSocketExist(FName InSocketName);
    void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
}

class USoundEffectPreset : UObject
{
}

class USoundEffectSourcePreset : USoundEffectPreset
{
}

class USoundEffectSubmixPreset : USoundEffectPreset
{
}

class UPrimitiveComponent : USceneComponent
{
    float MinDrawDistance;
    float LDMaxDrawDistance;
    float CachedMaxDrawDistance;
    TEnumAsByte<ESceneDepthPriorityGroup> DepthPriorityGroup;
    TEnumAsByte<ESceneDepthPriorityGroup> ViewOwnerDepthPriorityGroup;
    TEnumAsByte<EIndirectLightingCacheQuality> IndirectLightingCacheQuality;
    ELightmapType LightmapType;
    uint8 bUseMaxLODAsImposter;
    uint8 bBatchImpostersAsInstances;
    uint8 bNeverDistanceCull;
    uint8 bAlwaysCreatePhysicsState;
    uint8 bGenerateOverlapEvents;
    uint8 bMultiBodyOverlap;
    uint8 bTraceComplexOnMove;
    uint8 bReturnMaterialOnMove;
    uint8 bUseViewOwnerDepthPriorityGroup;
    uint8 bAllowCullDistanceVolume;
    uint8 bHasMotionBlurVelocityMeshes;
    uint8 bVisibleInReflectionCaptures;
    uint8 bVisibleInRayTracing;
    uint8 bRenderInMainPass;
    uint8 bRenderInDepthPass;
    uint8 bReceivesDecals;
    uint8 bOwnerNoSee;
    uint8 bOnlyOwnerSee;
    uint8 bTreatAsBackgroundForOcclusion;
    uint8 bUseAsOccluder;
    uint8 bSelectable;
    uint8 bForceMipStreaming;
    uint8 bHasPerInstanceHitProxies;
    uint8 CastShadow;
    uint8 bAffectDynamicIndirectLighting;
    uint8 bAffectDistanceFieldLighting;
    uint8 bCastDynamicShadow;
    uint8 bCastStaticShadow;
    uint8 bCastVolumetricTranslucentShadow;
    uint8 bSelfShadowOnly;
    uint8 bCastFarShadow;
    uint8 bCastInsetShadow;
    uint8 bCastCinematicShadow;
    uint8 bCastHiddenShadow;
    uint8 bCastShadowAsTwoSided;
    uint8 bLightAsIfStatic;
    uint8 bLightAttachmentsAsGroup;
    uint8 bExcludeFromLightAttachmentGroup;
    uint8 bReceiveMobileCSMShadows;
    uint8 bSingleSampleShadowFromStationaryLights;
    uint8 bIgnoreRadialImpulse;
    uint8 bIgnoreRadialForce;
    uint8 bApplyImpulseOnDamage;
    uint8 bReplicatePhysicsToAutonomousProxy;
    uint8 bFillCollisionUnderneathForNavmesh;
    uint8 AlwaysLoadOnClient;
    uint8 AlwaysLoadOnServer;
    uint8 bUseEditorCompositing;
    uint8 bRenderCustomDepth;
    TEnumAsByte<EHasCustomNavigableGeometry::Type> bHasCustomNavigableGeometry;
    TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn;
    FLightingChannels LightingChannels;
    ERendererStencilMask CustomDepthStencilWriteMask;
    int32 CustomDepthStencilValue;
    FCustomPrimitiveData CustomPrimitiveData;
    FCustomPrimitiveData CustomPrimitiveDataInternal;
    int32 TranslucencySortPriority;
    int32 VisibilityId;
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;
    int8 VirtualTextureLodBias;
    int8 VirtualTextureCullMips;
    int8 VirtualTextureMinCoverage;
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;
    float LpvBiasMultiplier;
    float BoundsScale;
    TArray<AActor*> MoveIgnoreActors;
    TArray<UPrimitiveComponent*> MoveIgnoreComponents;
    FBodyInstance BodyInstance;
    FPrimitiveComponentOnComponentHit OnComponentHit;
    void ComponentHitSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    FPrimitiveComponentOnComponentBeginOverlap OnComponentBeginOverlap;
    void ComponentBeginOverlapSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    FPrimitiveComponentOnComponentEndOverlap OnComponentEndOverlap;
    void ComponentEndOverlapSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    FPrimitiveComponentOnComponentWake OnComponentWake;
    void ComponentWakeSignature(UPrimitiveComponent* WakingComponent, FName BoneName);
    FPrimitiveComponentOnComponentSleep OnComponentSleep;
    void ComponentSleepSignature(UPrimitiveComponent* SleepingComponent, FName BoneName);
    FPrimitiveComponentOnBeginCursorOver OnBeginCursorOver;
    void ComponentBeginCursorOverSignature(UPrimitiveComponent* TouchedComponent);
    FPrimitiveComponentOnEndCursorOver OnEndCursorOver;
    void ComponentEndCursorOverSignature(UPrimitiveComponent* TouchedComponent);
    FPrimitiveComponentOnClicked OnClicked;
    void ComponentOnClickedSignature(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);
    FPrimitiveComponentOnReleased OnReleased;
    void ComponentOnReleasedSignature(UPrimitiveComponent* TouchedComponent, FKey ButtonReleased);
    FPrimitiveComponentOnInputTouchBegin OnInputTouchBegin;
    void ComponentOnInputTouchBeginSignature(uint8 FingerIndex, UPrimitiveComponent* TouchedComponent);
    FPrimitiveComponentOnInputTouchEnd OnInputTouchEnd;
    void ComponentOnInputTouchEndSignature(uint8 FingerIndex, UPrimitiveComponent* TouchedComponent);
    FPrimitiveComponentOnInputTouchEnter OnInputTouchEnter;
    void ComponentBeginTouchOverSignature(uint8 FingerIndex, UPrimitiveComponent* TouchedComponent);
    FPrimitiveComponentOnInputTouchLeave OnInputTouchLeave;
    void ComponentEndTouchOverSignature(uint8 FingerIndex, UPrimitiveComponent* TouchedComponent);
    UPrimitiveComponent* LODParentPrimitive;

    bool WasRecentlyRendered(float Tolerance);
    void WakeRigidBody(FName BoneName);
    void WakeAllRigidBodies();
    void SetWalkableSlopeOverride(const FWalkableSlopeOverride& NewOverride);
    void SetUseCCD(bool InUseCCD, FName BoneName);
    void SetTranslucentSortPriority(int32 NewTranslucentSortPriority);
    void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);
    void SetSimulatePhysics(bool bSimulate);
    void SetRenderInMainPass(bool bValue);
    void SetRenderCustomDepth(bool bValue);
    void SetReceivesDecals(bool bNewReceivesDecals);
    void SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial);
    void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsAngularVelocityInRadians(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsAngularVelocityInDegrees(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    void SetPhysicsAngularVelocity(FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    void SetOwnerNoSee(bool bNewOwnerNoSee);
    void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
    void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
    void SetMaterialByName(FName MaterialSlotName, UMaterialInterface* Material);
    void SetMaterial(int32 ElementIndex, UMaterialInterface* Material);
    void SetMassScale(FName BoneName, float InMassScale);
    void SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass);
    void SetLinearDamping(float InDamping);
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup);
    void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
    void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup);
    void SetEnableGravity(bool bGravityEnabled);
    void SetCustomPrimitiveDataVector4(int32 DataIndex, FVector4 Value);
    void SetCustomPrimitiveDataVector3(int32 DataIndex, FVector Value);
    void SetCustomPrimitiveDataVector2(int32 DataIndex, FVector2D Value);
    void SetCustomPrimitiveDataFloat(int32 DataIndex, float Value);
    void SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit);
    void SetCustomDepthStencilValue(int32 Value);
    void SetCullDistance(float NewCullDistance);
    void SetConstraintMode(uint8 ConstraintMode);
    void SetCollisionResponseToChannel(uint8 Channel, uint8 NewResponse);
    void SetCollisionResponseToAllChannels(uint8 NewResponse);
    void SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps);
    void SetCollisionObjectType(uint8 Channel);
    void SetCollisionEnabled(uint8 NewType);
    void SetCenterOfMass(FVector CenterOfMassOffset, FName BoneName);
    void SetCastShadow(bool NewCastShadow);
    void SetCastInsetShadow(bool bInCastInsetShadow);
    void SetBoundsScale(float NewBoundsScale);
    void SetAngularDamping(float InDamping);
    void SetAllUseCCD(bool InUseCCD);
    void SetAllPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent);
    void SetAllPhysicsAngularVelocityInRadians(const FVector& NewAngVel, bool bAddToCurrent);
    void SetAllPhysicsAngularVelocityInDegrees(const FVector& NewAngVel, bool bAddToCurrent);
    void SetAllMassScale(float InMassScale);
    FVector ScaleByMomentOfInertia(FVector InputVector, FName BoneName);
    void PutRigidBodyToSleep(FName BoneName);
    bool K2_SphereTraceComponent(FVector TraceStart, FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool K2_SphereOverlapComponent(FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool K2_LineTraceComponent(FVector TraceStart, FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool K2_IsQueryCollisionEnabled();
    bool K2_IsPhysicsCollisionEnabled();
    bool K2_IsCollisionEnabled();
    bool K2_BoxOverlapComponent(FVector InBoxCentre, const FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);
    bool IsOverlappingComponent(const UPrimitiveComponent* OtherComp);
    bool IsOverlappingActor(const AActor* Other);
    bool IsGravityEnabled();
    bool IsAnyRigidBodyAwake();
    void IgnoreComponentWhenMoving(UPrimitiveComponent* Component, bool bShouldIgnore);
    void IgnoreActorWhenMoving(AActor* Actor, bool bShouldIgnore);
    FWalkableSlopeOverride GetWalkableSlopeOverride();
    FVector GetPhysicsLinearVelocityAtPoint(FVector Point, FName BoneName);
    FVector GetPhysicsLinearVelocity(FName BoneName);
    FVector GetPhysicsAngularVelocityInRadians(FName BoneName);
    FVector GetPhysicsAngularVelocityInDegrees(FName BoneName);
    FVector GetPhysicsAngularVelocity(FName BoneName);
    void GetOverlappingComponents(TArray<UPrimitiveComponent*>& OutOverlappingComponents);
    void GetOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter);
    int32 GetNumMaterials();
    UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32 FaceIndex, int32& SectionIndex);
    UMaterialInterface* GetMaterial(int32 ElementIndex);
    float GetMassScale(FName BoneName);
    float GetMass();
    float GetLinearDamping();
    FVector GetInertiaTensor(FName BoneName);
    bool GetGenerateOverlapEvents();
    TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(uint8 Channel);
    FName GetCollisionProfileName();
    TEnumAsByte<ECollisionChannel> GetCollisionObjectType();
    TEnumAsByte<ECollisionEnabled::Type> GetCollisionEnabled();
    float GetClosestPointOnCollision(const FVector& Point, FVector& OutPointOnBody, FName BoneName);
    FVector GetCenterOfMass(FName BoneName);
    float GetAngularDamping();
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32 ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName);
    UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32 ElementIndex, UMaterialInterface* Parent);
    UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32 ElementIndex);
    TArray<UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
    TArray<AActor*> CopyArrayOfMoveIgnoreActors();
    void ClearMoveIgnoreComponents();
    void ClearMoveIgnoreActors();
    bool CanCharacterStepUp(APawn* Pawn);
    void AddTorqueInRadians(FVector Torque, FName BoneName, bool bAccelChange);
    void AddTorqueInDegrees(FVector Torque, FName BoneName, bool bAccelChange);
    void AddTorque(FVector Torque, FName BoneName, bool bAccelChange);
    void AddRadialImpulse(FVector Origin, float Radius, float Strength, uint8 Falloff, bool bVelChange);
    void AddRadialForce(FVector Origin, float Radius, float Strength, uint8 Falloff, bool bAccelChange);
    void AddImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName);
    void AddImpulse(FVector Impulse, FName BoneName, bool bVelChange);
    void AddForceAtLocationLocal(FVector force, FVector Location, FName BoneName);
    void AddForceAtLocation(FVector force, FVector Location, FName BoneName);
    void AddForce(FVector force, FName BoneName, bool bAccelChange);
    void AddAngularImpulseInRadians(FVector Impulse, FName BoneName, bool bVelChange);
    void AddAngularImpulseInDegrees(FVector Impulse, FName BoneName, bool bVelChange);
    void AddAngularImpulse(FVector Impulse, FName BoneName, bool bVelChange);
}

class UFXSystemComponent : UPrimitiveComponent
{

    void SetVectorParameter(FName ParameterName, FVector Param);
    void SetUseAutoManageAttachment(bool bAutoManage);
    void SetFloatParameter(FName ParameterName, float Param);
    void SetEmitterEnable(FName EmitterName, bool bNewEnableState);
    void SetColorParameter(FName ParameterName, FLinearColor Param);
    void SetBoolParameter(FName ParameterName, bool Param);
    void SetAutoAttachmentParameters(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule);
    void SetActorParameter(FName ParameterName, AActor* Param);
    void ReleaseToPool();
    UFXSystemAsset* GetFXSystemAsset();
}

class UFXSystemAsset : UObject
{
    uint32 MaxPoolSize;
}

class UAnimNotify : UObject
{

    bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
    FString GetNotifyName();
}

class UAnimNotifyState : UObject
{

    bool Received_NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime);
    bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);
    FString GetNotifyName();
}

class UBlueprintCore : UObject
{
    UClass* SkeletonGeneratedClass;
    UClass* GeneratedClass;
    bool bLegacyNeedToPurgeSkelRefs;
    FGuid BlueprintGuid;
}

class UBlueprint : UBlueprintCore
{
    UClass* ParentClass;
    TEnumAsByte<EBlueprintType> BlueprintType;
    uint8 bRecompileOnLoad;
    uint8 bHasBeenRegenerated;
    uint8 bIsRegeneratingOnLoad;
    int32 BlueprintSystemVersion;
    USimpleConstructionScript* SimpleConstructionScript;
    TArray<UActorComponent*> ComponentTemplates;
    TArray<UTimelineTemplate*> Timelines;
    TArray<FBPComponentClassOverride> ComponentClassOverrides;
    UInheritableComponentHandler* InheritableComponentHandler;
}

class UBlueprintGeneratedClass : UClass
{
    int32 NumReplicatedProperties;
    uint8 bHasNativizedParent;
    uint8 bHasCookedComponentInstancingData;
    TArray<UDynamicBlueprintBinding*> DynamicBindingObjects;
    TArray<UActorComponent*> ComponentTemplates;
    TArray<UTimelineTemplate*> Timelines;
    TArray<FBPComponentClassOverride> ComponentClassOverrides;
    USimpleConstructionScript* SimpleConstructionScript;
    UInheritableComponentHandler* InheritableComponentHandler;
    UStructProperty* UberGraphFramePointerProperty;
    UFunction* UberGraphFunction;
    TMap<FName, FBlueprintCookedComponentInstancingData> CookedComponentInstancingData;
}

class USubsystem : UObject
{
}

class UDynamicSubsystem : USubsystem
{
}

class UEngineSubsystem : UDynamicSubsystem
{
}

class UMeshComponent : UPrimitiveComponent
{
    TArray<UMaterialInterface*> OverrideMaterials;
    uint8 bEnableMaterialParameterCaching;

    void SetVectorParameterValueOnMaterials(const FName ParameterName, const FVector ParameterValue);
    void SetScalarParameterValueOnMaterials(const FName ParameterName, const float ParameterValue);
    void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32 CinematicTextureGroups);
    bool IsMaterialSlotNameValid(FName MaterialSlotName);
    TArray<FName> GetMaterialSlotNames();
    TArray<UMaterialInterface*> GetMaterials();
    int32 GetMaterialIndex(FName MaterialSlotName);
}

class USkinnedMeshComponent : UMeshComponent
{
    USkeletalMesh* SkeletalMesh;
    TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent;
    TArray<ESkinCacheUsage> SkinCacheUsage;
    UPhysicsAsset* PhysicsAssetOverride;
    int32 ForcedLodModel;
    int32 MinLodModel;
    float StreamingDistanceMultiplier;
    TArray<FSkelMeshComponentLODInfo> LODInfo;
    EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption;
    uint8 bOverrideMinLOD;
    uint8 bUseBoundsFromMasterPoseComponent;
    uint8 bForceWireframe;
    uint8 bDisplayBones;
    uint8 bDisableMorphTarget;
    uint8 bHideSkin;
    uint8 bPerBoneMotionBlur;
    uint8 bComponentUseFixedSkelBounds;
    uint8 bConsiderAllBodiesForBounds;
    uint8 bSyncAttachParentLOD;
    uint8 bCanHighlightSelectedSections;
    uint8 bRecentlyRendered;
    uint8 bCastCapsuleDirectShadow;
    uint8 bCastCapsuleIndirectShadow;
    uint8 bCPUSkinning;
    uint8 bEnableUpdateRateOptimizations;
    uint8 bDisplayDebugUpdateRateOptimizations;
    uint8 bRenderStatic;
    uint8 bIgnoreMasterPoseComponentLOD;
    uint8 bCachedLocalBoundsUpToDate;
    uint8 bForceMeshObjectUpdate;
    float CapsuleIndirectShadowMinVisibility;
    FBoxSphereBounds CachedWorldSpaceBounds;
    FMatrix CachedWorldToLocalTransform;

    void UnloadSkinWeightProfile(FName InProfileName);
    void UnHideBoneByName(FName BoneName);
    void TransformToBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation);
    void TransformFromBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector& OutPosition, FRotator& OutRotation);
    void ShowMaterialSection(int32 MaterialID, int32 SectionIndex, bool bShow, int32 LODIndex);
    void ShowAllMaterialSections(int32 LODIndex);
    void SetVertexColorOverride_LinearColor(int32 LODIndex, const TArray<FLinearColor>& VertexColors);
    bool SetSkinWeightProfile(FName InProfileName);
    void SetSkinWeightOverride(int32 LODIndex, const TArray<FSkelMeshSkinWeightInfo>& SkinWeights);
    void SetSkeletalMesh(USkeletalMesh* NewMesh, bool bReinitPose);
    void SetRenderStatic(bool bNewValue);
    void SetPhysicsAsset(UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
    void SetMinLOD(int32 InNewMinLOD);
    void SetMasterPoseComponent(USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);
    void SetForcedLOD(int32 InNewForcedLOD);
    void SetCastCapsuleIndirectShadow(bool bNewValue);
    void SetCastCapsuleDirectShadow(bool bNewValue);
    void SetCapsuleIndirectShadowMinVisibility(float NewValue);
    bool IsUsingSkinWeightProfile();
    bool IsMaterialSectionShown(int32 MaterialID, int32 LODIndex);
    bool IsBoneHiddenByName(FName BoneName);
    void HideBoneByName(FName BoneName, uint8 PhysBodyOption);
    bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName BoneName, float& OutTwistAngle, float& OutSwingAngle);
    FName GetSocketBoneName(FName InSocketName);
    FVector GetRefPosePosition(int32 BoneIndex);
    FName GetParentBone(FName BoneName);
    int32 GetNumLODs();
    int32 GetNumBones();
    int32 GetForcedLOD();
    FTransform GetDeltaTransformFromRefPose(FName BoneName, FName BaseName);
    FName GetCurrentSkinWeightProfileName();
    FName GetBoneName(int32 BoneIndex);
    int32 GetBoneIndex(FName BoneName);
    FName FindClosestBone_K2(FVector TestLocation, FVector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset);
    void ClearVertexColorOverride(int32 LODIndex);
    void ClearSkinWeightProfile();
    void ClearSkinWeightOverride(int32 LODIndex);
    bool BoneIsChildOf(FName BoneName, FName ParentBoneName);
}

class USkeletalMeshComponent : USkinnedMeshComponent
{
    UClass* AnimBlueprintGeneratedClass;
    TSubclassOf<UAnimInstance> AnimClass;
    UAnimInstance* AnimScriptInstance;
    UAnimInstance* PostProcessAnimInstance;
    FSingleAnimationPlayData AnimationData;
    FVector RootBoneTranslation;
    FVector LineCheckBoundsScale;
    TArray<UAnimInstance*> LinkedInstances;
    TArray<FTransform> CachedBoneSpaceTransforms;
    TArray<FTransform> CachedComponentSpaceTransforms;
    float GlobalAnimRateScale;
    TEnumAsByte<EKinematicBonesUpdateToPhysics::Type> KinematicBonesUpdateType;
    TEnumAsByte<EPhysicsTransformUpdateMode::Type> PhysicsTransformUpdateMode;
    TEnumAsByte<EAnimationMode::Type> AnimationMode;
    uint8 bDisablePostProcessBlueprint;
    uint8 bUpdateOverlapsOnAnimationFinalize;
    uint8 bHasValidBodies;
    uint8 bBlendPhysics;
    uint8 bEnablePhysicsOnDedicatedServer;
    uint8 bUpdateJointsFromAnimation;
    uint8 bDisableClothSimulation;
    uint8 bDisableRigidBodyAnimNode;
    uint8 bAllowAnimCurveEvaluation;
    uint8 bDisableAnimCurves;
    uint8 bCollideWithEnvironment;
    uint8 bCollideWithAttachedChildren;
    uint8 bLocalSpaceSimulation;
    uint8 bResetAfterTeleport;
    uint8 bDeferKinematicBoneUpdate;
    uint8 bNoSkeletonUpdate;
    uint8 bPauseAnims;
    uint8 bUseRefPoseOnInitAnim;
    uint8 bEnablePerPolyCollision;
    uint8 bForceRefpose;
    uint8 bOnlyAllowAutonomousTickPose;
    uint8 bIsAutonomousTickPose;
    uint8 bOldForceRefPose;
    uint8 bShowPrePhysBones;
    uint8 bRequiredBonesUpToDate;
    uint8 bAnimTreeInitialised;
    uint8 bIncludeComponentLocationIntoBounds;
    uint8 bEnableLineCheckWithBounds;
    uint8 bUseBendingElements;
    uint8 bUseTetrahedralConstraints;
    uint8 bUseThinShellVolumeConstraints;
    uint8 bUseSelfCollisions;
    uint8 bUseContinuousCollisionDetection;
    uint8 bPropagateCurvesToSlaves;
    uint8 bSkipKinematicUpdateWhenInterpolating;
    uint8 bSkipBoundsUpdateWhenInterpolating;
    uint8 bNeedsQueuedAnimEventsDispatched;
    uint16 CachedAnimCurveUidVersion;
    EClothMassMode MassMode;
    float UniformMass;
    float TotalMass;
    float Density;
    float MinPerParticleMass;
    float ClothBlendWeight;
    float EdgeStiffness;
    float BendingStiffness;
    float AreaStiffness;
    float VolumeStiffness;
    float StrainLimitingStiffness;
    float ShapeTargetStiffness;
    TArray<FName> DisallowedAnimCurves;
    UBodySetup* BodySetup;
    FSkeletalMeshComponentOnConstraintBroken OnConstraintBroken;
    void ConstraintBrokenSignature(int32 ConstraintIndex);
    TSubclassOf<UClothingSimulationFactory> ClothingSimulationFactory;
    float TeleportDistanceThreshold;
    float TeleportRotationThreshold;
    uint32 LastPoseTickFrame;
    UClothingSimulationInteractor* ClothingInteractor;
    FSkeletalMeshComponentOnAnimInitialized OnAnimInitialized;
    void OnAnimInitialized();

    void UnlinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
    void ToggleDisablePostProcessBlueprint();
    void TermBodiesBelow(FName ParentBoneName);
    void SuspendClothingSimulation();
    void Stop();
    void SnapshotPose(FPoseSnapshot& Snapshot);
    void SetUpdateAnimationInEditor(const bool NewUpdateState);
    void SetTeleportRotationThreshold(float Threshold);
    void SetTeleportDistanceThreshold(float Threshold);
    void SetPosition(float InPos, bool bFireNotifies);
    void SetPlayRate(float Rate);
    void SetPhysicsBlendWeight(float PhysicsBlendWeight);
    void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, FName BoneName, bool bIncludeSelf);
    void SetMorphTarget(FName MorphTargetName, float Value, bool bRemoveZeroWeight);
    void SetEnablePhysicsBlending(bool bNewBlendPhysics);
    void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, FName BoneName, bool bIncludeSelf);
    void SetEnableBodyGravity(bool bEnableGravity, FName BoneName);
    void SetDisablePostProcessBlueprint(bool bInDisablePostProcess);
    void SetDisableAnimCurves(bool bInDisableAnimCurves);
    void SetConstraintProfileForAll(FName ProfileName, bool bDefaultIfNotFound);
    void SetConstraintProfile(FName JointName, FName ProfileName, bool bDefaultIfNotFound);
    void SetClothMaxDistanceScale(float Scale);
    void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, FName BoneName);
    void SetAnimClass(TSubclassOf<UObject> NewClass);
    void SetAnimationMode(uint8 InAnimationMode);
    void SetAnimation(UAnimationAsset* NewAnimToPlay);
    void SetAngularLimits(FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
    void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim);
    void SetAllowedAnimCurvesEvaluation(const TArray<FName>& List, bool bAllow);
    void SetAllowAnimCurveEvaluation(bool bInAllow);
    void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
    void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
    void SetAllBodiesSimulatePhysics(bool bNewSimulate);
    void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
    void SetAllBodiesBelowSimulatePhysics(const FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);
    void SetAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
    void ResumeClothingSimulation();
    void ResetClothTeleportMode();
    void ResetAnimInstanceDynamics(ETeleportType InTeleportType);
    void ResetAllowedAnimCurveEvaluation();
    void ResetAllBodiesSimulatePhysics();
    void PlayAnimation(UAnimationAsset* NewAnimToPlay, bool bLooping);
    void Play(bool bLooping);
    void OverrideAnimationData(UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);
    void LinkAnimGraphByTag(FName InTag, TSubclassOf<UAnimInstance> InClass);
    void LinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    bool K2_GetClosestPointOnPhysicsAsset(const FVector& WorldPosition, FVector& ClosestWorldPosition, FVector& Normal, FName& BoneName, float& Distance);
    bool IsPlaying();
    bool IsClothingSimulationSuspended();
    bool IsBodyGravityEnabled(FName BoneName);
    bool HasValidAnimationInstance();
    float GetTeleportRotationThreshold();
    float GetTeleportDistanceThreshold();
    FVector GetSkeletalCenterOfMass();
    UAnimInstance* GetPostProcessInstance();
    float GetPosition();
    float GetPlayRate();
    float GetMorphTarget(FName MorphTargetName);
    UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup);
    UAnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<UAnimInstance> InClass);
    void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances);
    UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag);
    bool GetDisablePostProcessBlueprint();
    bool GetDisableAnimCurves();
    void GetCurrentJointAngles(FName InBoneName, float& Swing1Angle, float& TwistAngle, float& Swing2Angle);
    float GetClothMaxDistanceScale();
    UClothingSimulationInteractor* GetClothingSimulationInteractor();
    float GetBoneMass(FName BoneName, bool bScaleMass);
    UAnimInstance* GetAnimInstance();
    UClass* GetAnimClass();
    TEnumAsByte<EAnimationMode::Type> GetAnimationMode();
    bool GetAllowRigidBodyAnimNode();
    bool GetAllowedAnimCurveEvaluate();
    void ForceClothNextUpdateTeleportAndReset();
    void ForceClothNextUpdateTeleport();
    FName FindConstraintBoneName(int32 ConstraintIndex);
    void ClearMorphTargets();
    void BreakConstraint(FVector Impulse, FVector HitLocation, FName InBoneName);
    void BindClothToMasterPoseComponent();
    void AllowAnimCurveEvaluation(FName NameOfCurve, bool bAllow);
    void AddImpulseToAllBodiesBelow(FVector Impulse, FName BoneName, bool bVelChange, bool bIncludeSelf);
    void AddForceToAllBodiesBelow(FVector force, FName BoneName, bool bAccelChange, bool bIncludeSelf);
    void AccumulateAllBodiesBelowPhysicsBlendWeight(const FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
}

class UAnimInstance : UObject
{
    USkeleton* CurrentSkeleton;
    TEnumAsByte<ERootMotionMode::Type> RootMotionMode;
    uint8 bUseMultiThreadedAnimationUpdate;
    uint8 bUsingCopyPoseFromMesh;
    uint8 bReceiveNotifiesFromLinkedInstances;
    uint8 bPropagateNotifiesToLinkedInstances;
    uint8 bQueueMontageEvents;
    FAnimInstanceOnMontageBlendingOut OnMontageBlendingOut;
    void OnMontageBlendingOutStartedMCDelegate(UAnimMontage* Montage, bool bInterrupted);
    FAnimInstanceOnMontageStarted OnMontageStarted;
    void OnMontageStartedMCDelegate(UAnimMontage* Montage);
    FAnimInstanceOnMontageEnded OnMontageEnded;
    void OnMontageEndedMCDelegate(UAnimMontage* Montage, bool bInterrupted);
    FAnimInstanceOnAllMontageInstancesEnded OnAllMontageInstancesEnded;
    void OnAllMontageInstancesEndedMCDelegate();
    FAnimNotifyQueue NotifyQueue;
    TArray<FAnimNotifyEvent> ActiveAnimNotifyState;

    void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
    void UnlinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    APawn* TryGetPawnOwner();
    void StopSlotAnimation(float InBlendOutTime, FName SlotNodeName);
    void SnapshotPose(FPoseSnapshot& Snapshot);
    void SetRootMotionMode(uint8 Value);
    void SetReceiveNotifiesFromLinkedInstances(bool bSet);
    void SetPropagateNotifiesToLinkedInstances(bool bSet);
    void SetMorphTarget(FName MorphTargetName, float Value);
    void SavePoseSnapshot(FName SnapshotName);
    void ResetDynamics(ETeleportType InTeleportType);
    UAnimMontage* PlaySlotAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
    float PlaySlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount);
    void Montage_StopGroupByName(float InBlendOutTime, FName GroupName);
    void Montage_Stop(float InBlendOutTime, const UAnimMontage* Montage);
    void Montage_SetPosition(const UAnimMontage* Montage, float NewPosition);
    void Montage_SetPlayRate(const UAnimMontage* Montage, float NewPlayRate);
    void Montage_SetNextSection(FName SectionNameToChange, FName NextSection, const UAnimMontage* Montage);
    void Montage_Resume(const UAnimMontage* Montage);
    float Montage_Play(UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
    void Montage_Pause(const UAnimMontage* Montage);
    void Montage_JumpToSectionsEnd(FName SectionName, const UAnimMontage* Montage);
    void Montage_JumpToSection(FName SectionName, const UAnimMontage* Montage);
    bool Montage_IsPlaying(const UAnimMontage* Montage);
    bool Montage_IsActive(const UAnimMontage* Montage);
    float Montage_GetPosition(const UAnimMontage* Montage);
    float Montage_GetPlayRate(const UAnimMontage* Montage);
    bool Montage_GetIsStopped(const UAnimMontage* Montage);
    FName Montage_GetCurrentSection(const UAnimMontage* Montage);
    float Montage_GetBlendTime(const UAnimMontage* Montage);
    void LockAIResources(bool bLockMovement, bool LockAILogic);
    void LinkAnimGraphByTag(FName InTag, TSubclassOf<UAnimInstance> InClass);
    void LinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass);
    bool IsSyncGroupBetweenMarkers(FName InSyncGroupName, FName PreviousMarker, FName NextMarker, bool bRespectMarkerOrder);
    bool IsPlayingSlotAnimation(const UAnimSequenceBase* Asset, FName SlotNodeName);
    bool IsAnyMontagePlaying();
    bool HasMarkerBeenHitThisFrame(FName SyncGroup, FName MarkerName);
    bool GetTimeToClosestMarker(FName SyncGroup, FName MarkerName, float& OutMarkerTime);
    FMarkerSyncAnimPosition GetSyncGroupPosition(FName InSyncGroupName);
    float GetRelevantAnimTimeRemainingFraction(int32 MachineIndex, int32 StateIndex);
    float GetRelevantAnimTimeRemaining(int32 MachineIndex, int32 StateIndex);
    float GetRelevantAnimTimeFraction(int32 MachineIndex, int32 StateIndex);
    float GetRelevantAnimTime(int32 MachineIndex, int32 StateIndex);
    float GetRelevantAnimLength(int32 MachineIndex, int32 StateIndex);
    bool GetReceiveNotifiesFromLinkedInstances();
    bool GetPropagateNotifiesToLinkedInstances();
    USkeletalMeshComponent* GetOwningComponent();
    AActor* GetOwningActor();
    UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup);
    UAnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<UAnimInstance> InClass);
    void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*>& OutLinkedInstances);
    UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag);
    float GetInstanceTransitionTimeElapsedFraction(int32 MachineIndex, int32 TransitionIndex);
    float GetInstanceTransitionTimeElapsed(int32 MachineIndex, int32 TransitionIndex);
    float GetInstanceTransitionCrossfadeDuration(int32 MachineIndex, int32 TransitionIndex);
    float GetInstanceStateWeight(int32 MachineIndex, int32 StateIndex);
    float GetInstanceMachineWeight(int32 MachineIndex);
    float GetInstanceCurrentStateElapsedTime(int32 MachineIndex);
    float GetInstanceAssetPlayerTimeFromEndFraction(int32 AssetPlayerIndex);
    float GetInstanceAssetPlayerTimeFromEnd(int32 AssetPlayerIndex);
    float GetInstanceAssetPlayerTimeFraction(int32 AssetPlayerIndex);
    float GetInstanceAssetPlayerTime(int32 AssetPlayerIndex);
    float GetInstanceAssetPlayerLength(int32 AssetPlayerIndex);
    float GetCurveValue(FName CurveName);
    FName GetCurrentStateName(int32 MachineIndex);
    UAnimMontage* GetCurrentActiveMontage();
    void GetAllCurveNames(TArray<FName>& OutNames);
    void GetActiveCurveNames(EAnimCurveType CurveType, TArray<FName>& OutNames);
    void ClearMorphTargets();
    float CalculateDirection(const FVector& Velocity, const FRotator& BaseRotation);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintPostEvaluateAnimation();
    void BlueprintLinkedAnimationLayersInitialized();
    void BlueprintInitializeAnimation();
    void BlueprintBeginPlay();
}

class UAudioComponent : USceneComponent
{
    USoundBase* Sound;
    TArray<FAudioComponentParam> InstanceParameters;
    USoundClass* SoundClassOverride;
    uint8 bAutoDestroy;
    uint8 bStopWhenOwnerDestroyed;
    uint8 bShouldRemainActiveIfDropped;
    uint8 bAllowSpatialization;
    uint8 bOverrideAttenuation;
    uint8 bOverrideSubtitlePriority;
    uint8 bIsUISound;
    uint8 bEnableLowPassFilter;
    uint8 bOverridePriority;
    uint8 bSuppressSubtitles;
    uint8 bAutoManageAttachment;
    FName AudioComponentUserID;
    float PitchModulationMin;
    float PitchModulationMax;
    float VolumeModulationMin;
    float VolumeModulationMax;
    float VolumeMultiplier;
    int32 EnvelopeFollowerAttackTime;
    int32 EnvelopeFollowerReleaseTime;
    float Priority;
    float SubtitlePriority;
    USoundEffectSourcePresetChain* SourceEffectChain;
    float PitchMultiplier;
    float LowPassFilterFrequency;
    USoundAttenuation* AttenuationSettings;
    FSoundAttenuationSettings AttenuationOverrides;
    USoundConcurrency* ConcurrencySettings;
    TSet<USoundConcurrency*> ConcurrencySet;
    EAttachmentRule AutoAttachLocationRule;
    EAttachmentRule AutoAttachRotationRule;
    EAttachmentRule AutoAttachScaleRule;
    FAudioComponentOnAudioFinished OnAudioFinished;
    void OnAudioFinished();
    FAudioComponentOnAudioPlaybackPercent OnAudioPlaybackPercent;
    void OnAudioPlaybackPercent(const USoundWave* PlayingSoundWave, const float PlaybackPercent);
    FAudioComponentOnAudioSingleEnvelopeValue OnAudioSingleEnvelopeValue;
    void OnAudioSingleEnvelopeValue(const USoundWave* PlayingSoundWave, const float EnvelopeValue);
    FAudioComponentOnAudioMultiEnvelopeValue OnAudioMultiEnvelopeValue;
    void OnAudioMultiEnvelopeValue(const float AverageEnvelopeValue, const float MaxEnvelope, const int32 NumWaveInstances);
    FSoundModulation Modulation;
    FAudioComponentOnQueueSubtitles OnQueueSubtitles;
    void OnQueueSubtitles(const TArray<FSubtitleCue>& Subtitles, float CueDuration);
    TWeakObjectPtr<USceneComponent> AutoAttachParent;
    FName AutoAttachSocketName;

    void StopDelayed(float DelayTime);
    void Stop();
    void SetWaveParameter(FName InName, USoundWave* InWave);
    void SetVolumeMultiplier(float NewVolumeMultiplier);
    void SetUISound(bool bInUISound);
    void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel);
    void SetSourceBusSendPreEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    void SetSourceBusSendPostEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    void SetSound(USoundBase* NewSound);
    void SetPitchMultiplier(float NewPitchMultiplier);
    void SetPaused(bool bPause);
    void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
    void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
    void SetIntParameter(FName InName, int32 inInt);
    void SetFloatParameter(FName InName, float InFloat);
    void SetBoolParameter(FName InName, bool InBool);
    void Play(float StartTime);
    bool IsPlaying();
    bool HasCookedFFTData();
    bool HasCookedAmplitudeEnvelopeData();
    EAudioComponentPlayState GetPlayState();
    bool GetCookedFFTDataForAllPlayingSounds(TArray<FSoundWaveSpectralDataPerSound>& OutSoundWaveSpectralData);
    bool GetCookedFFTData(const TArray<float>& FrequenciesToGet, TArray<FSoundWaveSpectralData>& OutSoundWaveSpectralData);
    bool GetCookedEnvelopeDataForAllPlayingSounds(TArray<FSoundWaveEnvelopeDataPerSound>& OutEnvelopeData);
    bool GetCookedEnvelopeData(float& OutEnvelopeData);
    void FadeOut(float FadeoutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve);
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve);
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, const EAudioFaderCurve FadeCurve);
    void AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings);
}

class UAssetImportData : UObject
{
}

class UAssetUserData : UObject
{
}

class ASceneCapture : AActor
{
    UStaticMeshComponent* MeshComp;
    USceneComponent* SceneComponent;
}

class ASceneCapture2D : ASceneCapture
{
    USceneCaptureComponent2D* CaptureComponent2D;

    void OnInterpToggle(bool bEnable);
}

class UStereoLayerComponent : USceneComponent
{
    uint8 bLiveTexture;
    uint8 bSupportsDepth;
    uint8 bNoAlphaChannel;
    UTexture* Texture;
    UTexture* LeftTexture;
    uint8 bQuadPreserveTextureRatio;
    FVector2D QuadSize;
    FBox2D UVRect;
    float CylinderRadius;
    float CylinderOverlayArc;
    int32 CylinderHeight;
    FEquirectProps EquirectProps;
    TEnumAsByte<EStereoLayerType> StereoLayerType;
    TEnumAsByte<EStereoLayerShape> StereoLayerShape;
    UStereoLayerShape* Shape;
    int32 Priority;

    void SetUVRect(FBox2D InUVRect);
    void SetTexture(UTexture* InTexture);
    void SetQuadSize(FVector2D InQuadSize);
    void SetPriority(int32 InPriority);
    void SetLeftTexture(UTexture* InTexture);
    void SetEquirectProps(FEquirectProps InScaleBiases);
    void MarkTextureForUpdate();
    FBox2D GetUVRect();
    UTexture* GetTexture();
    FVector2D GetQuadSize();
    int32 GetPriority();
    UTexture* GetLeftTexture();
}

class UStereoLayerShape : UObject
{
}

class UStereoLayerShapeQuad : UStereoLayerShape
{
}

class UGameInstance : UObject
{
    TArray<ULocalPlayer*> LocalPlayers;
    UOnlineSession* OnlineSession;
    TArray<UObject*> ReferencedObjects;

    void ReceiveShutdown();
    void ReceiveInit();
    void HandleTravelError(uint8 FailureType);
    void HandleNetworkError(uint8 FailureType, bool bIsServer);
    void DebugRemovePlayer(int32 ControllerId);
    void DebugCreatePlayer(int32 ControllerId);
}

class UGameInstanceSubsystem : USubsystem
{
}

class UDataAsset : UObject
{
    TSubclassOf<UDataAsset> NativeClass;
}

class APawn : AActor
{
    uint8 bUseControllerRotationPitch;
    uint8 bUseControllerRotationYaw;
    uint8 bUseControllerRotationRoll;
    uint8 bCanAffectNavigationGeneration;
    float BaseEyeHeight;
    TEnumAsByte<EAutoReceiveInput::Type> AutoPossessPlayer;
    EAutoPossessAI AutoPossessAI;
    uint8 RemoteViewPitch;
    TSubclassOf<AController> AIControllerClass;
    APlayerState* PlayerState;
    AController* LastHitBy;
    AController* Controller;
    FVector ControlInputVector;
    FVector LastControlInputVector;

    void SpawnDefaultController();
    void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);
    void ReceiveUnpossessed(AController* OldController);
    void ReceivePossessed(AController* NewController);
    void PawnMakeNoise(float Loudness, FVector NoiseLocation, bool bUseNoiseMakerLocation, AActor* NoiseMaker);
    void OnRep_PlayerState();
    void OnRep_Controller();
    void LaunchPawn(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    FVector K2_GetMovementInputVector();
    bool IsPlayerControlled();
    bool IsPawnControlled();
    bool IsMoveInputIgnored();
    bool IsLocallyControlled();
    bool IsControlled();
    bool IsBotControlled();
    FVector GetPendingMovementInputVector();
    FVector GetNavAgentLocation();
    UPawnMovementComponent* GetMovementComponent();
    AActor* GetMovementBaseActor(const APawn* Pawn);
    FVector GetLastMovementInputVector();
    FRotator GetControlRotation();
    AController* GetController();
    FRotator GetBaseAimRotation();
    void DetachFromControllerPendingDestroy();
    FVector ConsumeMovementInputVector();
    void AddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);
    void AddControllerYawInput(float Val);
    void AddControllerRollInput(float Val);
    void AddControllerPitchInput(float Val);
}

class UStaticMeshComponent : UMeshComponent
{
    int32 ForcedLodModel;
    int32 PreviousLODLevel;
    int32 MinLOD;
    int32 SubDivisionStepSize;
    UStaticMesh* StaticMesh;
    FColor WireframeColorOverride;
    uint8 bEvaluateWorldPositionOffset;
    uint8 bOverrideWireframeColor;
    uint8 bOverrideMinLOD;
    uint8 bOverrideNavigationExport;
    uint8 bForceNavigationObstacle;
    uint8 bDisallowMeshPaintPerInstance;
    uint8 bIgnoreInstanceForTextureStreaming;
    uint8 bOverrideLightMapRes;
    uint8 bCastDistanceFieldIndirectShadow;
    uint8 bOverrideDistanceFieldSelfShadowBias;
    uint8 bUseSubDivisions;
    uint8 bUseDefaultCollision;
    uint8 bReverseCulling;
    int32 OverriddenLightMapRes;
    float DistanceFieldIndirectShadowMinVisibility;
    float DistanceFieldSelfShadowBias;
    float StreamingDistanceMultiplier;
    TArray<FStaticMeshComponentLODInfo> LODData;
    TArray<FStreamingTextureBuildInfo> StreamingTextureData;
    FLightmassPrimitiveSettings LightmassSettings;

    bool SetStaticMesh(UStaticMesh* NewMesh);
    void SetReverseCulling(bool ReverseCulling);
    void SetForcedLodModel(int32 NewForcedLodModel);
    void SetDistanceFieldSelfShadowBias(float NewValue);
    void OnRep_StaticMesh(UStaticMesh* OldStaticMesh);
    void GetLocalBounds(FVector& Min, FVector& Max);
}

class AController : AActor
{
    APlayerState* PlayerState;
    FControllerOnInstigatedAnyDamage OnInstigatedAnyDamage;
    void InstigatedAnyDamageSignature(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser);
    FName StateName;
    APawn* Pawn;
    ACharacter* Character;
    USceneComponent* TransformComponent;
    FRotator ControlRotation;
    uint8 bAttachToPawn;

    void UnPossess();
    void StopMovement();
    void SetInitialLocationAndRotation(const FVector& NewLocation, const FRotator& NewRotation);
    void SetIgnoreMoveInput(bool bNewMoveInput);
    void SetIgnoreLookInput(bool bNewLookInput);
    void SetControlRotation(const FRotator& NewRotation);
    void ResetIgnoreMoveInput();
    void ResetIgnoreLookInput();
    void ResetIgnoreInputFlags();
    void ReceiveUnPossess(APawn* UnpossessedPawn);
    void ReceivePossess(APawn* PossessedPawn);
    void ReceiveInstigatedAnyDamage(float Damage, const UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser);
    void Possess(APawn* InPawn);
    void OnRep_PlayerState();
    void OnRep_Pawn();
    bool LineOfSightTo(const AActor* Other, FVector ViewPoint, bool bAlternateChecks);
    APawn* K2_GetPawn();
    bool IsPlayerController();
    bool IsMoveInputIgnored();
    bool IsLookInputIgnored();
    bool IsLocalPlayerController();
    bool IsLocalController();
    AActor* GetViewTarget();
    FRotator GetDesiredRotation();
    FRotator GetControlRotation();
    void ClientSetRotation(FRotator NewRotation, bool bResetCamera);
    void ClientSetLocation(FVector NewLocation, FRotator NewRotation);
    APlayerController* CastToPlayerController();
}

class UInstancedStaticMeshComponent : UStaticMeshComponent
{
    TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;
    int32 NumCustomDataFloats;
    TArray<float> PerInstanceSMCustomData;
    int32 InstancingRandomSeed;
    int32 InstanceStartCullDistance;
    int32 InstanceEndCullDistance;
    TArray<int32> InstanceReorderTable;
    int32 NumPendingLightmaps;
    TArray<FInstancedStaticMeshMappingInfo> CachedMappings;

    bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool SetCustomDataValue(int32 InstanceIndex, int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
    void SetCullDistances(int32 StartCullDistance, int32 EndCullDistance);
    bool RemoveInstance(int32 InstanceIndex);
    bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);
    TArray<int32> GetInstancesOverlappingSphere(const FVector& Center, float Radius, bool bSphereInWorldSpace);
    TArray<int32> GetInstancesOverlappingBox(const FBox& Box, bool bBoxInWorldSpace);
    int32 GetInstanceCount();
    void ClearInstances();
    bool BatchUpdateInstancesTransforms(int32 StartInstanceIndex, const TArray<FTransform>& NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    bool BatchUpdateInstancesTransform(int32 StartInstanceIndex, int32 NumInstances, const FTransform& NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    int32 AddInstanceWorldSpace(const FTransform& WorldTransform);
    int32 AddInstance(const FTransform& InstanceTransform);
}

class UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent
{
    TArray<int32> SortedInstances;
    int32 NumBuiltInstances;
    FBox BuiltInstanceBounds;
    FBox UnbuiltInstanceBounds;
    TArray<FBox> UnbuiltInstanceBoundsList;
    uint8 bEnableDensityScaling;
    int32 OcclusionLayerNumNodes;
    FBoxSphereBounds CacheMeshExtendedBounds;
    bool bDisableCollision;
    int32 InstanceCountToRender;

    bool RemoveInstances(const TArray<int32>& InstancesToRemove);
}

class UMovementComponent : UActorComponent
{
    USceneComponent* UpdatedComponent;
    UPrimitiveComponent* UpdatedPrimitive;
    FVector Velocity;
    FVector PlaneConstraintNormal;
    FVector PlaneConstraintOrigin;
    uint8 bUpdateOnlyIfRendered;
    uint8 bAutoUpdateTickRegistration;
    uint8 bTickBeforeOwner;
    uint8 bAutoRegisterUpdatedComponent;
    uint8 bConstrainToPlane;
    uint8 bSnapToPlaneAtStart;
    uint8 bAutoRegisterPhysicsVolumeUpdates;
    uint8 bComponentShouldUpdatePhysicsVolume;
    EPlaneConstraintAxisSetting PlaneConstraintAxisSetting;

    void StopMovementImmediately();
    void SnapUpdatedComponentToPlane();
    void SetUpdatedComponent(USceneComponent* NewUpdatedComponent);
    void SetPlaneConstraintOrigin(FVector PlaneOrigin);
    void SetPlaneConstraintNormal(FVector PlaneNormal);
    void SetPlaneConstraintFromVectors(FVector Forward, FVector Up);
    void SetPlaneConstraintEnabled(bool bEnabled);
    void SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting);
    void PhysicsVolumeChanged(UPhysicsVolume* NewVolume);
    bool K2_MoveUpdatedComponent(FVector Delta, FRotator NewRotation, FHitResult& OutHit, bool bSweep, bool bTeleport);
    float K2_GetModifiedMaxSpeed();
    float K2_GetMaxSpeedModifier();
    bool IsExceedingMaxSpeed(float MaxSpeed);
    FVector GetPlaneConstraintOrigin();
    FVector GetPlaneConstraintNormal();
    EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting();
    APhysicsVolume* GetPhysicsVolume();
    float GetMaxSpeed();
    float GetGravityZ();
    FVector ConstrainNormalToPlane(FVector Normal);
    FVector ConstrainLocationToPlane(FVector Location);
    FVector ConstrainDirectionToPlane(FVector Direction);
}

class UNavMovementComponent : UMovementComponent
{
    FNavAgentProperties NavAgentProps;
    float FixedPathBrakingDistance;
    uint8 bUpdateNavAgentWithOwnersCollision;
    uint8 bUseAccelerationForPaths;
    uint8 bUseFixedBrakingDistanceForPaths;
    FMovementProperties MovementState;
    UObject* PathFollowingComp;

    void StopMovementKeepPathing();
    void StopActiveMovement();
    bool IsSwimming();
    bool IsMovingOnGround();
    bool IsFlying();
    bool IsFalling();
    bool IsCrouching();
}

class UPawnMovementComponent : UNavMovementComponent
{
    APawn* PawnOwner;

    FVector K2_GetInputVector();
    bool IsMoveInputIgnored();
    FVector GetPendingInputVector();
    APawn* GetPawnOwner();
    FVector GetLastInputVector();
    FVector ConsumeInputVector();
    void AddInputVector(FVector WorldVector, bool bForce);
}

class UWorldSubsystem : USubsystem
{
}

class UParticleSystemComponent : UFXSystemComponent
{
    UParticleSystem* Template;
    TArray<UMaterialInterface*> EmitterMaterials;
    TArray<USkeletalMeshComponent*> SkelMeshComponents;
    uint8 bResetOnDetach;
    uint8 bUpdateOnDedicatedServer;
    uint8 bAllowRecycling;
    uint8 bAutoManageAttachment;
    uint8 bAutoAttachWeldSimulatedBodies;
    uint8 bWarmingUp;
    uint8 bOverrideLODMethod;
    uint8 bSkipUpdateDynamicDataDuringTick;
    TEnumAsByte<ParticleSystemLODMethod> LODMethod;
    EParticleSignificanceLevel RequiredSignificance;
    TArray<FParticleSysParam> InstanceParameters;
    FParticleSystemComponentOnParticleSpawn OnParticleSpawn;
    void ParticleSpawnSignature(FName EventName, float EmitterTime, FVector Location, FVector Velocity);
    FParticleSystemComponentOnParticleBurst OnParticleBurst;
    void ParticleBurstSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    FParticleSystemComponentOnParticleDeath OnParticleDeath;
    void ParticleDeathSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction);
    FParticleSystemComponentOnParticleCollide OnParticleCollide;
    void ParticleCollisionSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);
    bool bOldPositionValid;
    FVector OldPosition;
    FVector PartSysVelocity;
    float WarmupTime;
    float WarmupTickRate;
    float SecondsBeforeInactive;
    float MaxTimeBeforeForceUpdateTransform;
    TArray<UParticleSystemReplay*> ReplayClips;
    float CustomTimeDilation;
    TWeakObjectPtr<USceneComponent> AutoAttachParent;
    FName AutoAttachSocketName;
    EAttachmentRule AutoAttachLocationRule;
    EAttachmentRule AutoAttachRotationRule;
    EAttachmentRule AutoAttachScaleRule;
    FParticleSystemComponentOnSystemFinished OnSystemFinished;
    void OnSystemFinished(UParticleSystemComponent* PSystem);

    void SetTrailSourceData(FName InFirstSocketName, FName InSecondSocketName, uint8 InWidthMode, float InWidth);
    void SetTemplate(UParticleSystem* NewTemplate);
    void SetMaterialParameter(FName ParameterName, UMaterialInterface* Param);
    void SetBeamTargetTangent(int32 EmitterIndex, FVector NewTangentPoint, int32 TargetIndex);
    void SetBeamTargetStrength(int32 EmitterIndex, float NewTargetStrength, int32 TargetIndex);
    void SetBeamTargetPoint(int32 EmitterIndex, FVector NewTargetPoint, int32 TargetIndex);
    void SetBeamSourceTangent(int32 EmitterIndex, FVector NewTangentPoint, int32 SourceIndex);
    void SetBeamSourceStrength(int32 EmitterIndex, float NewSourceStrength, int32 SourceIndex);
    void SetBeamSourcePoint(int32 EmitterIndex, FVector NewSourcePoint, int32 SourceIndex);
    void SetBeamEndPoint(int32 EmitterIndex, FVector NewEndPoint);
    void SetAutoAttachParams(USceneComponent* Parent, FName SocketName, uint8 LocationType);
    int32 GetNumActiveParticles();
    UMaterialInterface* GetNamedMaterial(FName InName);
    bool GetBeamTargetTangent(int32 EmitterIndex, int32 TargetIndex, FVector& OutTangentPoint);
    bool GetBeamTargetStrength(int32 EmitterIndex, int32 TargetIndex, float& OutTargetStrength);
    bool GetBeamTargetPoint(int32 EmitterIndex, int32 TargetIndex, FVector& OutTargetPoint);
    bool GetBeamSourceTangent(int32 EmitterIndex, int32 SourceIndex, FVector& OutTangentPoint);
    bool GetBeamSourceStrength(int32 EmitterIndex, int32 SourceIndex, float& OutSourceStrength);
    bool GetBeamSourcePoint(int32 EmitterIndex, int32 SourceIndex, FVector& OutSourcePoint);
    bool GetBeamEndPoint(int32 EmitterIndex, FVector& OutEndPoint);
    void GenerateParticleEvent(const FName InEventName, const float InEmitterTime, const FVector InLocation, const FVector InDirection, const FVector InVelocity);
    void EndTrails();
    UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(FName InName, UMaterialInterface* SourceMaterial);
    void BeginTrails(FName InFirstSocketName, FName InSecondSocketName, uint8 InWidthMode, float InWidth);
}

class ULightComponentBase : USceneComponent
{
    FGuid LightGuid;
    float Brightness;
    float Intensity;
    FColor LightColor;
    uint8 bAffectsWorld;
    uint8 CastShadows;
    uint8 CastStaticShadows;
    uint8 CastDynamicShadows;
    uint8 bAffectTranslucentLighting;
    uint8 bTransmission;
    uint8 bCastVolumetricShadow;
    uint8 bCastDeepShadow;
    uint8 bCastRaytracedShadow;
    uint8 bAffectReflection;
    uint8 bAffectGlobalIllumination;
    float IndirectLightingIntensity;
    float VolumetricScatteringIntensity;
    int32 SamplesPerPixel;

    void SetSamplesPerPixel(int32 NewValue);
    void SetCastVolumetricShadow(bool bNewValue);
    void SetCastShadows(bool bNewValue);
    void SetCastRaytracedShadow(bool bNewValue);
    void SetCastDeepShadow(bool bNewValue);
    void SetAffectReflection(bool bNewValue);
    void SetAffectGlobalIllumination(bool bNewValue);
    FLinearColor GetLightColor();
}

class ULightComponent : ULightComponentBase
{
    float Temperature;
    float MaxDrawDistance;
    float MaxDistanceFadeRange;
    uint8 bUseTemperature;
    int32 ShadowMapChannel;
    float MinRoughness;
    float SpecularScale;
    float ShadowResolutionScale;
    float ShadowBias;
    float ShadowSlopeBias;
    float ShadowSharpen;
    float ContactShadowLength;
    uint8 ContactShadowLengthInWS;
    uint8 InverseSquaredFalloff;
    uint8 CastTranslucentShadows;
    uint8 bCastShadowsFromCinematicObjectsOnly;
    uint8 bAffectDynamicIndirectLighting;
    uint8 bForceCachedShadowsForMovablePrimitives;
    FLightingChannels LightingChannels;
    UMaterialInterface* LightFunctionMaterial;
    FVector LightFunctionScale;
    UTextureLightProfile* IESTexture;
    uint8 bUseIESBrightness;
    float IESBrightnessScale;
    float LightFunctionFadeDistance;
    float DisabledBrightness;
    uint8 bEnableLightShaftBloom;
    float BloomScale;
    float BloomThreshold;
    float BloomMaxBrightness;
    FColor BloomTint;
    bool bUseRayTracedDistanceFieldShadows;
    float RayStartOffsetDepthScale;

    void SetVolumetricScatteringIntensity(float NewIntensity);
    void SetUseIESBrightness(bool bNewValue);
    void SetTransmission(bool bNewValue);
    void SetTemperature(float NewTemperature);
    void SetSpecularScale(float NewValue);
    void SetShadowSlopeBias(float NewValue);
    void SetShadowBias(float NewValue);
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    void SetLightFunctionScale(FVector NewLightFunctionScale);
    void SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial);
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    void SetLightFunctionDisabledBrightness(float NewValue);
    void SetLightColor(FLinearColor NewLightColor, bool bSRGB);
    void SetIntensity(float NewIntensity);
    void SetIndirectLightingIntensity(float NewIntensity);
    void SetIESTexture(UTextureLightProfile* NewValue);
    void SetIESBrightnessScale(float NewValue);
    void SetForceCachedShadowsForMovablePrimitives(bool bNewValue);
    void SetEnableLightShaftBloom(bool bNewValue);
    void SetBloomTint(FColor NewValue);
    void SetBloomThreshold(float NewValue);
    void SetBloomScale(float NewValue);
    void SetBloomMaxBrightness(float NewValue);
    void SetAffectTranslucentLighting(bool bNewValue);
    void SetAffectDynamicIndirectLighting(bool bNewValue);
}

class ULocalLightComponent : ULightComponent
{
    ELightUnits IntensityUnits;
    float Radius;
    float AttenuationRadius;
    FLightmassPointLightSettings LightmassSettings;

    void SetIntensityUnits(ELightUnits NewIntensityUnits);
    void SetAttenuationRadius(float NewRadius);
    float GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle);
}

class UPointLightComponent : ULocalLightComponent
{
    uint8 bUseInverseSquaredFalloff;
    float LightFalloffExponent;
    float SourceRadius;
    float SoftSourceRadius;
    float SourceLength;

    void SetSourceRadius(float bNewValue);
    void SetSourceLength(float NewValue);
    void SetSoftSourceRadius(float bNewValue);
    void SetLightFalloffExponent(float NewLightFalloffExponent);
}

class UShapeComponent : UPrimitiveComponent
{
    UBodySetup* ShapeBodySetup;
    TSubclassOf<UNavAreaBase> AreaClass;
    FColor ShapeColor;
    uint8 bDrawOnlyIfSelected;
    uint8 bShouldCollideWhenPlacing;
    uint8 bDynamicObstacle;
}

class USphereComponent : UShapeComponent
{
    float SphereRadius;

    void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
    float GetUnscaledSphereRadius();
    float GetShapeScale();
    float GetScaledSphereRadius();
}

class UAnimNotify_PlaySound : UAnimNotify
{
    USoundBase* Sound;
    float VolumeMultiplier;
    float PitchMultiplier;
    uint8 bFollow;
    FName AttachName;
}

class UAnimNotifyState_TimedParticleEffect : UAnimNotifyState
{
    UParticleSystem* PSTemplate;
    FName SocketName;
    FVector LocationOffset;
    FRotator RotationOffset;
    bool bDestroyAtEnd;
}

class UAssetManager : UObject
{
    TArray<UObject*> ObjectReferenceList;
    bool bIsGlobalAsyncScanEnvironment;
    bool bShouldGuessTypeAndName;
    bool bShouldUseSynchronousLoad;
    bool bIsLoadingFromPakFiles;
    bool bShouldAcquireMissingChunksOnLoad;
    bool bOnlyCookProductionAssets;
    bool bIsBulkScanning;
    bool bIsPrimaryAssetDirectoryCurrent;
    bool bIsManagementDatabaseCurrent;
    bool bUpdateManagementDatabaseAfterScan;
    bool bIncludeOnlyOnDiskAssets;
    int32 NumberOfSpawnedNotifications;
}

class APlayerController : AController
{
    UPlayer* Player;
    APawn* AcknowledgedPawn;
    UInterpTrackInstDirector* ControllingDirTrackInst;
    AHUD* MyHUD;
    APlayerCameraManager* PlayerCameraManager;
    TSubclassOf<APlayerCameraManager> PlayerCameraManagerClass;
    bool bAutoManageActiveCameraTarget;
    FRotator TargetViewRotation;
    float SmoothTargetViewRotationSpeed;
    TArray<AActor*> HiddenActors;
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents;
    float LastSpectatorStateSynchTime;
    FVector LastSpectatorSyncLocation;
    FRotator LastSpectatorSyncRotation;
    int32 ClientCap;
    UCheatManager* CheatManager;
    TSubclassOf<UCheatManager> CheatClass;
    UPlayerInput* PlayerInput;
    TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects;
    uint8 bPlayerIsWaiting;
    uint8 NetPlayerIndex;
    UNetConnection* PendingSwapConnection;
    UNetConnection* NetConnection;
    float InputYawScale;
    float InputPitchScale;
    float InputRollScale;
    uint8 bShowMouseCursor;
    uint8 bEnableClickEvents;
    uint8 bEnableTouchEvents;
    uint8 bEnableMouseOverEvents;
    uint8 bEnableTouchOverEvents;
    uint8 bForceFeedbackEnabled;
    float ForceFeedbackScale;
    TArray<FKey> ClickEventKeys;
    TEnumAsByte<EMouseCursor::Type> DefaultMouseCursor;
    TEnumAsByte<EMouseCursor::Type> CurrentMouseCursor;
    TEnumAsByte<ECollisionChannel> DefaultClickTraceChannel;
    TEnumAsByte<ECollisionChannel> CurrentClickTraceChannel;
    float HitResultTraceDistance;
    uint16 SeamlessTravelCount;
    uint16 LastCompletedSeamlessTravelCount;
    UInputComponent* InactiveStateInputComponent;
    uint8 bShouldPerformFullTickWhenPaused;
    UTouchInterface* CurrentTouchInterface;
    ASpectatorPawn* SpectatorPawn;
    bool bIsLocalPlayerController;
    FVector SpawnLocation;

    bool WasInputKeyJustReleased(FKey Key);
    bool WasInputKeyJustPressed(FKey Key);
    void ToggleSpeaking(bool bInSpeaking);
    void TestServerLevelVisibilityChange(const FName PackageName, const FName Filename);
    void SwitchLevel(FString URL);
    void StopHapticEffect(EControllerHand hand);
    void StartFire(uint8 FireModeNum);
    void SetVirtualJoystickVisibility(bool bVisible);
    void SetViewTargetWithBlend(AActor* NewViewTarget, float BlendTime, uint8 BlendFunc, float BlendExp, bool bLockOutgoing);
    void SetName(FString S);
    void SetMouseLocation(const int32 X, const int32 Y);
    void SetMouseCursorWidget(uint8 Cursor, UUserWidget* CursorWidget);
    void SetHapticsByValue(const float Frequency, const float Amplitude, EControllerHand hand);
    void SetDisableHaptics(bool bNewDisabled);
    void SetControllerLightColor(FColor Color);
    void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    void SetAudioListenerOverride(USceneComponent* AttachToComponent, FVector Location, FRotator Rotation);
    void SetAudioListenerAttenuationOverride(USceneComponent* AttachToComponent, FVector AttenuationLocationOVerride);
    void ServerViewSelf(FViewTargetTransitionParams TransitionParams);
    void ServerViewPrevPlayer();
    void ServerViewNextPlayer();
    void ServerVerifyViewTarget();
    void ServerUpdateMultipleLevelsVisibility(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
    void ServerUpdateLevelVisibility(const FUpdateLevelVisibilityLevelInfo& LevelVisibility);
    void ServerUpdateCamera(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw);
    void ServerUnmutePlayer(FUniqueNetIdRepl PlayerId);
    void ServerToggleAILogging();
    void ServerShortTimeout();
    void ServerSetSpectatorWaiting(bool bWaiting);
    void ServerSetSpectatorLocation(FVector NewLoc, FRotator NewRot);
    void ServerRestartPlayer();
    void ServerPause();
    void ServerNotifyLoadedWorld(FName WorldPackageName);
    void ServerMutePlayer(FUniqueNetIdRepl PlayerId);
    void ServerExecRPC(FString Msg);
    void ServerExec(FString Msg);
    void ServerCheckClientPossessionReliable();
    void ServerCheckClientPossession();
    void ServerChangeName(FString S);
    void ServerCamera(FName NewMode);
    void ServerAcknowledgePossession(APawn* P);
    void SendToConsole(FString Command);
    void RestartLevel();
    void ResetControllerLightColor();
    bool ProjectWorldLocationToScreen(FVector WorldLocation, FVector2D& ScreenLocation, bool bPlayerViewportRelative);
    void PlayHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, EControllerHand hand, float Scale, bool bLoop);
    void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, uint8 Action, FLatentActionInfo LatentInfo);
    void Pause();
    void OnServerStartedVisualLogger(bool bIsLogging);
    void LocalTravel(FString URL);
    void K2_ClientPlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
    bool IsInputKeyDown(FKey Key);
    void GetViewportSize(int32& SizeX, int32& SizeY);
    ASpectatorPawn* GetSpectatorPawn();
    bool GetMousePosition(float& LocationX, float& LocationY);
    FVector GetInputVectorKeyState(FKey Key);
    void GetInputTouchState(uint8 FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed);
    void GetInputMouseDelta(float& DeltaX, float& DeltaY);
    void GetInputMotionState(FVector& Tilt, FVector& RotationRate, FVector& Gravity, FVector& Acceleration);
    float GetInputKeyTimeDown(FKey Key);
    void GetInputAnalogStickState(uint8 WhichStick, float& StickX, float& StickY);
    float GetInputAnalogKeyState(FKey Key);
    AHUD* GetHUD();
    bool GetHitResultUnderFingerForObjects(uint8 FingerIndex, const TArray<uint8>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderFingerByChannel(uint8 FingerIndex, uint8 TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderFinger(uint8 FingerIndex, uint8 TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderCursorForObjects(const TArray<uint8>& ObjectTypes, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderCursorByChannel(uint8 TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    bool GetHitResultUnderCursor(uint8 TraceChannel, bool bTraceComplex, FHitResult& HitResult);
    FVector GetFocalLocation();
    void FOV(float NewFOV);
    void EnableCheats();
    bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, FVector& WorldLocation, FVector& WorldDirection);
    bool DeprojectMousePositionToWorld(FVector& WorldLocation, FVector& WorldDirection);
    void ConsoleKey(FKey Key);
    void ClientWasKicked(const FText& KickReason);
    void ClientVoiceHandshakeComplete();
    void ClientUpdateMultipleLevelsStreamingStatus(const TArray<FUpdateLevelStreamingLevelStatus>& LevelStatuses);
    void ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex);
    void ClientUnmutePlayer(FUniqueNetIdRepl PlayerId);
    void ClientTravelInternal(FString URL, uint8 TravelType, bool bSeamless, FGuid MapPackageGuid);
    void ClientTravel(FString URL, uint8 TravelType, bool bSeamless, FGuid MapPackageGuid);
    void ClientTeamMessage(UPlayerState* SenderPlayerState, FString S, FName Type, float MsgLifeTime);
    void ClientStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
    void ClientStopCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    void ClientStopCameraShake(TSubclassOf<UCameraShake> Shake, bool bImmediately);
    void ClientStopCameraAnim(UCameraAnim* AnimToStop);
    void ClientStartOnlineSession();
    void ClientSpawnCameraLensEffect(TSubclassOf<UEmitterCameraLensEffectBase> LensEffectEmitterClass);
    void ClientSetViewTarget(AActor* A, FViewTargetTransitionParams TransitionParams);
    void ClientSetSpectatorWaiting(bool bWaiting);
    void ClientSetHUD(TSubclassOf<AHUD> NewHUDClass);
    void ClientSetForceMipLevelsToBeResident(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups);
    void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
    void ClientSetCameraMode(FName NewCamMode);
    void ClientSetCameraFade(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio);
    void ClientSetBlockOnAsyncLoading();
    void ClientReturnToMainMenuWithTextReason(const FText& ReturnReason);
    void ClientReturnToMainMenu(FString ReturnReason);
    void ClientRetryClientRestart(APawn* NewPawn);
    void ClientRestart(APawn* NewPawn);
    void ClientReset();
    void ClientRepObjRef(UObject* Object);
    void ClientReceiveLocalizedMessage(TSubclassOf<ULocalMessage> Message, int32 Switch, UPlayerState* RelatedPlayerState_1, UPlayerState* RelatedPlayerState_2, UObject* OptionalObject);
    void ClientPrestreamTextures(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups);
    void ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast);
    void ClientPlaySoundAtLocation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier);
    void ClientPlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
    void ClientPlayForceFeedback_Internal(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params);
    void ClientPlayCameraShakeFromSource(TSubclassOf<UCameraShake> Shake, UCameraShakeSourceComponent* SourceComponent);
    void ClientPlayCameraShake(TSubclassOf<UCameraShake> Shake, float Scale, uint8 PlaySpace, FRotator UserPlaySpaceRot);
    void ClientPlayCameraAnim(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, uint8 Space, FRotator CustomPlaySpace);
    void ClientMutePlayer(FUniqueNetIdRepl PlayerId);
    void ClientMessage(FString S, FName Type, float MsgLifeTime);
    void ClientIgnoreMoveInput(bool bIgnore);
    void ClientIgnoreLookInput(bool bIgnore);
    void ClientGotoState(FName NewState);
    void ClientGameEnded(AActor* EndGameFocus, bool bIsWinner);
    void ClientForceGarbageCollection();
    void ClientFlushLevelStreaming();
    void ClientEndOnlineSession();
    void ClientEnableNetworkVoice(bool bEnable);
    void ClientCommitMapChange();
    void ClientClearCameraLensEffects();
    void ClientCapBandwidth(int32 Cap);
    void ClientCancelPendingMapChange();
    void ClientAddTextureStreamingLoc(FVector InLoc, float Duration, bool bOverrideLocation);
    void ClearAudioListenerOverride();
    void ClearAudioListenerAttenuationOverride();
    bool CanRestartPlayer();
    void Camera(FName NewMode);
    void AddYawInput(float Val);
    void AddRollInput(float Val);
    void AddPitchInput(float Val);
    void ActivateTouchInterface(UTouchInterface* NewTouchInterface);
}

class UCheatManager : UObject
{
    ADebugCameraController* DebugCameraControllerRef;
    TSubclassOf<ADebugCameraController> DebugCameraControllerClass;

    void Walk();
    void ViewSelf();
    void ViewPlayer(FString S);
    void ViewClass(TSubclassOf<AActor> DesiredClass);
    void ViewActor(FName ActorName);
    void UpdateSafeArea();
    void ToggleServerStatReplicatorUpdateStatNet();
    void ToggleServerStatReplicatorClientOverwrite();
    void ToggleDebugCamera();
    void ToggleAILogging();
    void TestCollisionDistance();
    void Teleport();
    void Summon(FString ClassName);
    void StreamLevelOut(FName PackageName);
    void StreamLevelIn(FName PackageName);
    void SpawnServerStatReplicator();
    void Slomo(float NewTimeDilation);
    void SetWorldOrigin();
    void SetMouseSensitivityToDefault();
    void ServerToggleAILogging();
    void ReceiveInitCheatManager();
    void ReceiveEndPlay();
    void PlayersOnly();
    void OnlyLoadLevel(FName PackageName);
    void LogLoc();
    void InvertMouse();
    void God();
    void Ghost();
    void FreezeFrame(float Delay);
    void Fly();
    void FlushLog();
    void EnableDebugCamera();
    void DumpVoiceMutingState();
    void DumpPartyState();
    void DumpOnlineSessionState();
    void DumpChatState();
    void DisableDebugCamera();
    void DestroyTarget();
    void DestroyServerStatReplicator();
    void DestroyPawns(TSubclassOf<APawn> aClass);
    void DestroyAllPawnsExceptTarget();
    void DestroyAll(TSubclassOf<AActor> aClass);
    void DebugCapsuleSweepSize(float HalfHeight, float Radius);
    void DebugCapsuleSweepPawn();
    void DebugCapsuleSweepComplex(bool bTraceComplex);
    void DebugCapsuleSweepClear();
    void DebugCapsuleSweepChannel(uint8 Channel);
    void DebugCapsuleSweepCapture();
    void DebugCapsuleSweep();
    void DamageTarget(float damageAmount);
    void CheatScript(FString ScriptName);
    void ChangeSize(float F);
    void BugItStringCreator(FVector ViewLocation, FRotator ViewRotation, FString& GoString, FString& LocString);
    void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    void BugIt(FString ScreenShotDescription);
}

class UDPICustomScalingRule : UObject
{
}

class AInfo : AActor
{
}

class AGameModeBase : AInfo
{
    FString OptionsString;
    TSubclassOf<AGameSession> GameSessionClass;
    TSubclassOf<AGameStateBase> GameStateClass;
    TSubclassOf<APlayerController> PlayerControllerClass;
    TSubclassOf<APlayerState> PlayerStateClass;
    TSubclassOf<AHUD> HUDClass;
    TSubclassOf<APawn> DefaultPawnClass;
    TSubclassOf<ASpectatorPawn> SpectatorClass;
    TSubclassOf<APlayerController> ReplaySpectatorPlayerControllerClass;
    TSubclassOf<AServerStatReplicator> ServerStatReplicatorClass;
    AGameSession* GameSession;
    AGameStateBase* GameState;
    AServerStatReplicator* ServerStatReplicator;
    FText DefaultPlayerName;
    uint8 bUseSeamlessTravel;
    uint8 bStartPlayersAsSpectators;
    uint8 bPauseable;

    void StartPlay();
    APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot);
    APawn* SpawnDefaultPawnAtTransform(AController* NewPlayer, const FTransform& SpawnTransform);
    bool ShouldReset(AActor* ActorToReset);
    void ReturnToMainMenuHost();
    void RestartPlayerAtTransform(AController* NewPlayer, const FTransform& SpawnTransform);
    void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot);
    void RestartPlayer(AController* NewPlayer);
    void ResetLevel();
    bool PlayerCanRestart(UPlayerController* Player);
    bool MustSpectate(UPlayerController* NewPlayerController);
    void K2_PostLogin(UPlayerController* NewPlayer);
    void K2_OnSwapPlayerControllers(UPlayerController* OldPC, UPlayerController* NewPC);
    void K2_OnRestartPlayer(AController* NewPlayer);
    void K2_OnLogout(AController* ExitingController);
    void K2_OnChangeName(AController* Other, FString NewName, bool bNameChange);
    AActor* K2_FindPlayerStart(AController* Player, FString IncomingName);
    void InitStartSpot(AActor* StartSpot, AController* NewPlayer);
    void InitializeHUDForPlayer(UPlayerController* NewPlayer);
    bool HasMatchStarted();
    void HandleStartingNewPlayer(UPlayerController* NewPlayer);
    int32 GetNumSpectators();
    int32 GetNumPlayers();
    UClass* GetDefaultPawnClassForController(AController* InController);
    AActor* FindPlayerStart(AController* Player, FString IncomingName);
    AActor* ChoosePlayerStart(AController* Player);
    void ChangeName(AController* Controller, FString NewName, bool bNameChange);
    bool CanSpectate(UPlayerController* Viewer, UPlayerState* ViewTarget);
}

class AGameMode : UGameModeBase
{
    FName MatchState;
    uint8 bDelayedStart;
    int32 NumSpectators;
    int32 NumPlayers;
    int32 NumBots;
    float MinRespawnDelay;
    int32 NumTravellingPlayers;
    TSubclassOf<ULocalMessage> EngineMessageClass;
    TArray<APlayerState*> InactivePlayerArray;
    float InactivePlayerStateLifeSpan;
    int32 MaxInactivePlayers;
    bool bHandleDedicatedServerReplays;

    void StartMatch();
    void SetBandwidthLimit(float AsyncIOBandwidthLimit);
    void Say(FString Msg);
    void RestartGame();
    bool ReadyToStartMatch();
    bool ReadyToEndMatch();
    void K2_OnSetMatchState(FName NewState);
    bool IsMatchInProgress();
    bool HasMatchEnded();
    FName GetMatchState();
    void EndMatch();
    void AbortMatch();
}

class AGameSession : AInfo
{
    int32 MaxSpectators;
    int32 MaxPlayers;
    int32 MaxPartySize;
    uint8 MaxSplitscreensPerConnection;
    bool bRequiresPushToTalk;
    FName SessionName;
}

class AGameStateBase : AInfo
{
    TSubclassOf<AGameModeBase> GameModeClass;
    AGameModeBase* AuthorityGameMode;
    TSubclassOf<ASpectatorPawn> SpectatorClass;
    TArray<APlayerState*> PlayerArray;
    bool bReplicatedHasBegunPlay;
    float ReplicatedWorldTimeSeconds;
    float ServerWorldTimeSecondsDelta;
    float ServerWorldTimeSecondsUpdateFrequency;

    void OnRep_SpectatorClass();
    void OnRep_ReplicatedWorldTimeSeconds();
    void OnRep_ReplicatedHasBegunPlay();
    void OnRep_GameModeClass();
    bool HasMatchStarted();
    bool HasBegunPlay();
    float GetServerWorldTimeSeconds();
    float GetPlayerStartTime(AController* Controller);
    float GetPlayerRespawnDelay(AController* Controller);
}

class AGameState : UGameStateBase
{
    FName MatchState;
    FName PreviousMatchState;
    int32 ElapsedTime;

    void OnRep_MatchState();
    void OnRep_ElapsedTime();
}

class UGameUserSettings : UObject
{
    bool bUseVSync;
    bool bUseDynamicResolution;
    uint32 ResolutionSizeX;
    uint32 ResolutionSizeY;
    uint32 LastUserConfirmedResolutionSizeX;
    uint32 LastUserConfirmedResolutionSizeY;
    int32 WindowPosX;
    int32 WindowPosY;
    int32 FullscreenMode;
    int32 LastConfirmedFullscreenMode;
    int32 PreferredFullscreenMode;
    uint32 Version;
    int32 AudioQualityLevel;
    int32 LastConfirmedAudioQualityLevel;
    float FrameRateLimit;
    int32 DesiredScreenWidth;
    bool bUseDesiredScreenHeight;
    int32 DesiredScreenHeight;
    int32 LastUserConfirmedDesiredScreenWidth;
    int32 LastUserConfirmedDesiredScreenHeight;
    float LastRecommendedScreenWidth;
    float LastRecommendedScreenHeight;
    float LastCPUBenchmarkResult;
    float LastGPUBenchmarkResult;
    TArray<float> LastCPUBenchmarkSteps;
    TArray<float> LastGPUBenchmarkSteps;
    float LastGPUBenchmarkMultiplier;
    bool bUseHDRDisplayOutput;
    int32 HDRDisplayOutputNits;
    FGameUserSettingsOnGameUserSettingsUINeedsUpdate OnGameUserSettingsUINeedsUpdate;
    void OnGameUserSettingsUINeedsUpdate();

    void ValidateSettings();
    bool SupportsHDRDisplayOutput();
    void SetVSyncEnabled(bool bEnable);
    void SetVisualEffectQuality(int32 Value);
    void SetViewDistanceQuality(int32 Value);
    void SetToDefaults();
    void SetTextureQuality(int32 Value);
    void SetShadowQuality(int32 Value);
    void SetShadingQuality(int32 Value);
    void SetScreenResolution(FIntPoint Resolution);
    void SetResolutionScaleValueEx(float NewScaleValue);
    void SetResolutionScaleValue(int32 NewScaleValue);
    void SetResolutionScaleNormalized(float NewScaleNormalized);
    void SetPostProcessingQuality(int32 Value);
    void SetOverallScalabilityLevel(int32 Value);
    void SetFullscreenMode(uint8 InFullscreenMode);
    void SetFrameRateLimit(float NewLimit);
    void SetFoliageQuality(int32 Value);
    void SetDynamicResolutionEnabled(bool bEnable);
    void SetBenchmarkFallbackValues();
    void SetAudioQualityLevel(int32 QualityLevel);
    void SetAntiAliasingQuality(int32 Value);
    void SaveSettings();
    void RunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
    void RevertVideoMode();
    void ResetToCurrentSettings();
    void LoadSettings(bool bForceReload);
    bool IsVSyncEnabled();
    bool IsVSyncDirty();
    bool IsScreenResolutionDirty();
    bool IsHDREnabled();
    bool IsFullscreenModeDirty();
    bool IsDynamicResolutionEnabled();
    bool IsDynamicResolutionDirty();
    bool IsDirty();
    int32 GetVisualEffectQuality();
    int32 GetViewDistanceQuality();
    int32 GetTextureQuality();
    int32 GetSyncInterval();
    int32 GetShadowQuality();
    int32 GetShadingQuality();
    FIntPoint GetScreenResolution();
    float GetResolutionScaleNormalized();
    void GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue);
    void GetResolutionScaleInformation(float& CurrentScaleNormalized, int32& CurrentScaleValue, int32& MinScaleValue, int32& MaxScaleValue);
    float GetRecommendedResolutionScale();
    TEnumAsByte<EWindowMode::Type> GetPreferredFullscreenMode();
    int32 GetPostProcessingQuality();
    int32 GetOverallScalabilityLevel();
    FIntPoint GetLastConfirmedScreenResolution();
    TEnumAsByte<EWindowMode::Type> GetLastConfirmedFullscreenMode();
    UGameUserSettings* GetGameUserSettings();
    TEnumAsByte<EWindowMode::Type> GetFullscreenMode();
    float GetFrameRateLimit();
    int32 GetFramePace();
    int32 GetFoliageQuality();
    FIntPoint GetDesktopResolution();
    FIntPoint GetDefaultWindowPosition();
    TEnumAsByte<EWindowMode::Type> GetDefaultWindowMode();
    float GetDefaultResolutionScale();
    FIntPoint GetDefaultResolution();
    int32 GetCurrentHDRDisplayNits();
    int32 GetAudioQualityLevel();
    int32 GetAntiAliasingQuality();
    void EnableHDRDisplayOutput(bool bEnable, int32 DisplayNits);
    void ConfirmVideoMode();
    void ApplySettings(bool bCheckForCommandLineOverrides);
    void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
    void ApplyNonResolutionSettings();
    void ApplyHardwareBenchmarkResults();
}

class AHUD : AActor
{
    APlayerController* PlayerOwner;
    uint8 bLostFocusPaused;
    uint8 bShowHUD;
    uint8 bShowDebugInfo;
    int32 CurrentTargetIndex;
    uint8 bShowHitBoxDebugInfo;
    uint8 bShowOverlays;
    uint8 bEnableDebugTextShadow;
    TArray<AActor*> PostRenderedActors;
    TArray<FName> DebugDisplay;
    TArray<FName> ToggledDebugCategories;
    UCanvas* Canvas;
    UCanvas* DebugCanvas;
    TArray<FDebugTextInfo> DebugTextList;
    TSubclassOf<AActor> ShowDebugTargetDesiredClass;
    AActor* ShowDebugTargetActor;

    void ShowHUD();
    void ShowDebugToggleSubCategory(FName Category);
    void ShowDebugForReticleTargetToggle(TSubclassOf<AActor> DesiredClass);
    void ShowDebug(FName DebugType);
    void RemoveDebugText(AActor* SrcActor, bool bLeaveDurationText);
    void RemoveAllDebugStrings();
    void ReceiveHitBoxRelease(const FName BoxName);
    void ReceiveHitBoxEndCursorOver(const FName BoxName);
    void ReceiveHitBoxClick(const FName BoxName);
    void ReceiveHitBoxBeginCursorOver(const FName BoxName);
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    FVector Project(FVector Location);
    void PreviousDebugTarget();
    void NextDebugTarget();
    void GetTextSize(FString Text, float& OutWidth, float& OutHeight, UFont* Font, float Scale);
    APlayerController* GetOwningPlayerController();
    APawn* GetOwningPawn();
    void GetActorsInSelectionRectangle(TSubclassOf<AActor> ClassFilter, const FVector2D& FirstPoint, const FVector2D& SecondPoint, TArray<AActor*>& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);
    void DrawTextureSimple(UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
    void DrawTexture(UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, uint8 BlendMode, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
    void DrawText(FString Text, FLinearColor TextColor, float ScreenX, float ScreenY, UFont* Font, float Scale, bool bScalePosition);
    void DrawRect(FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
    void DrawMaterialTriangle(UMaterialInterface* Material, FVector2D V0_Pos, FVector2D V1_Pos, FVector2D V2_Pos, FVector2D V0_UV, FVector2D V1_UV, FVector2D V2_UV, FLinearColor V0_Color, FLinearColor V1_Color, FLinearColor V2_Color);
    void DrawMaterialSimple(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
    void DrawMaterial(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
    void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, FLinearColor LineColor, float LineThickness);
    void Deproject(float ScreenX, float ScreenY, FVector& WorldPosition, FVector& WorldDirection);
    void AddHitBox(FVector2D Position, FVector2D Size, FName InName, bool bConsumesInput, int32 Priority);
    void AddDebugText(FString DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow);
}

class UKismetArrayLibrary : UBlueprintFunctionLibrary
{

    void SetArrayPropertyByName(UObject* Object, FName PropertyName, const TArray<int32>& Value);
    void FilterArray(const TArray<AActor*>& TargetArray, TSubclassOf<AActor> FilterClass, TArray<AActor*>& FilteredArray);
    void Array_Swap(const TArray<int32>& TargetArray, int32 FirstIndex, int32 SecondIndex);
    void Array_Shuffle(const TArray<int32>& TargetArray);
    void Array_Set(const TArray<int32>& TargetArray, int32 Index, const int32& Item, bool bSizeToFit);
    void Array_Resize(const TArray<int32>& TargetArray, int32 Size);
    bool Array_RemoveItem(const TArray<int32>& TargetArray, const int32& Item);
    void Array_Remove(const TArray<int32>& TargetArray, int32 IndexToRemove);
    int32 Array_Length(const TArray<int32>& TargetArray);
    int32 Array_LastIndex(const TArray<int32>& TargetArray);
    bool Array_IsValidIndex(const TArray<int32>& TargetArray, int32 IndexToTest);
    void Array_Insert(const TArray<int32>& TargetArray, const int32& NewItem, int32 Index);
    bool Array_Identical(const TArray<int32>& ArrayA, const TArray<int32>& ArrayB);
    void Array_Get(const TArray<int32>& TargetArray, int32 Index, int32& Item);
    int32 Array_Find(const TArray<int32>& TargetArray, const int32& ItemToFind);
    bool Array_Contains(const TArray<int32>& TargetArray, const int32& ItemToFind);
    void Array_Clear(const TArray<int32>& TargetArray);
    void Array_Append(const TArray<int32>& TargetArray, const TArray<int32>& SourceArray);
    int32 Array_AddUnique(const TArray<int32>& TargetArray, const int32& NewItem);
    int32 Array_Add(const TArray<int32>& TargetArray, const int32& NewItem);
}

class UPhysicalMaterial : UObject
{
    float Friction;
    TEnumAsByte<EFrictionCombineMode::Type> FrictionCombineMode;
    bool bOverrideFrictionCombineMode;
    float Restitution;
    TEnumAsByte<EFrictionCombineMode::Type> RestitutionCombineMode;
    bool bOverrideRestitutionCombineMode;
    float Density;
    float RaiseMassToPower;
    float DestructibleDamageThresholdScale;
    UDEPRECATED_PhysicalMaterialPropertyBase* PhysicalMaterialProperty;
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    float TireFrictionScale;
    TArray<FTireFrictionScalePair> TireFrictionScales;
}

class APlayerCameraManager : AActor
{
    APlayerController* PCOwner;
    USceneComponent* TransformComponent;
    float DefaultFOV;
    float DefaultOrthoWidth;
    float DefaultAspectRatio;
    FCameraCacheEntry CameraCache;
    FCameraCacheEntry LastFrameCameraCache;
    FTViewTarget ViewTarget;
    FTViewTarget PendingViewTarget;
    FCameraCacheEntry CameraCachePrivate;
    FCameraCacheEntry LastFrameCameraCachePrivate;
    TArray<UCameraModifier*> ModifierList;
    TArray<TSubclassOf<UCameraModifier>> DefaultModifiers;
    float FreeCamDistance;
    FVector FreeCamOffset;
    FVector ViewTargetOffset;
    TArray<AEmitterCameraLensEffectBase*> CameraLensEffects;
    UCameraModifier_CameraShake* CachedCameraShakeMod;
    UCameraAnimInst* AnimInstPool;
    TArray<FPostProcessSettings> PostProcessBlendCache;
    TArray<UCameraAnimInst*> ActiveAnims;
    TArray<UCameraAnimInst*> FreeAnims;
    ACameraActor* AnimCameraActor;
    uint8 bIsOrthographic;
    uint8 bDefaultConstrainAspectRatio;
    uint8 bClientSimulatingViewTarget;
    uint8 bUseClientSideCameraUpdates;
    uint8 bGameCameraCutThisFrame;
    float ViewPitchMin;
    float ViewPitchMax;
    float ViewYawMin;
    float ViewYawMax;
    float ViewRollMin;
    float ViewRollMax;
    float ServerUpdateCameraTimeout;

    void StopCameraShake(UCameraShake* ShakeInstance, bool bImmediately);
    void StopCameraFade();
    void StopCameraAnimInst(UCameraAnimInst* AnimInst, bool bImmediate);
    void StopAllInstancesOfCameraShakeFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
    void StopAllInstancesOfCameraShake(TSubclassOf<UCameraShake> Shake, bool bImmediately);
    void StopAllInstancesOfCameraAnim(UCameraAnim* Anim, bool bImmediate);
    void StopAllCameraShakes(bool bImmediately);
    void StopAllCameraAnims(bool bImmediate);
    void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
    void SetManualCameraFade(float InFadeAmount, FLinearColor Color, bool bInFadeAudio);
    void SetGameCameraCutThisFrame();
    bool RemoveCameraModifier(UCameraModifier* ModifierToRemove);
    void RemoveCameraLensEffect(UEmitterCameraLensEffectBase* Emitter);
    UCameraShake* PlayCameraShakeFromSource(TSubclassOf<UCameraShake> ShakeClass, UCameraShakeSourceComponent* SourceComponent);
    UCameraShake* PlayCameraShake(TSubclassOf<UCameraShake> ShakeClass, float Scale, uint8 PlaySpace, FRotator UserPlaySpaceRot);
    UCameraAnimInst* PlayCameraAnim(UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, uint8 PlaySpace, FRotator UserPlaySpaceRot);
    void PhotographyCameraModify(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation);
    void OnPhotographySessionStart();
    void OnPhotographySessionEnd();
    void OnPhotographyMultiPartCaptureStart();
    void OnPhotographyMultiPartCaptureEnd();
    APlayerController* GetOwningPlayerController();
    float GetFOVAngle();
    FRotator GetCameraRotation();
    FVector GetCameraLocation();
    UCameraModifier* FindCameraModifierByClass(TSubclassOf<UCameraModifier> ModifierClass);
    void ClearCameraLensEffects();
    bool BlueprintUpdateCamera(AActor* CameraTarget, FVector& NewCameraLocation, FRotator& NewCameraRotation, float& NewCameraFOV);
    UCameraModifier* AddNewCameraModifier(TSubclassOf<UCameraModifier> ModifierClass);
    AEmitterCameraLensEffectBase* AddCameraLensEffect(TSubclassOf<UEmitterCameraLensEffectBase> LensEffectEmitterClass);
}

class ANavigationObjectBase : AActor
{
    UCapsuleComponent* CapsuleComponent;
    UBillboardComponent* GoodSprite;
    UBillboardComponent* BadSprite;
    uint8 bIsPIEPlayerStart;
}

class APlayerStart : ANavigationObjectBase
{
    FName PlayerStartTag;
}

class APlayerState : AInfo
{
    float Score;
    int32 PlayerId;
    uint8 Ping;
    uint8 bShouldUpdateReplicatedPing;
    uint8 bIsSpectator;
    uint8 bOnlySpectator;
    uint8 bIsABot;
    uint8 bIsInactive;
    uint8 bFromPreviousLevel;
    int32 StartTime;
    TSubclassOf<ULocalMessage> EngineMessageClass;
    FString SavedNetworkAddress;
    FUniqueNetIdRepl UniqueId;
    APawn* PawnPrivate;
    FString PlayerNamePrivate;

    void ReceiveOverrideWith(UPlayerState* OldPlayerState);
    void ReceiveCopyProperties(UPlayerState* NewPlayerState);
    void OnRep_UniqueId();
    void OnRep_Score();
    void OnRep_PlayerName();
    void OnRep_PlayerId();
    void OnRep_bIsInactive();
    FString GetPlayerName();
}

class UProjectileMovementComponent : UMovementComponent
{
    float InitialSpeed;
    float MaxSpeed;
    uint8 bRotationFollowsVelocity;
    uint8 bRotationRemainsVertical;
    uint8 bShouldBounce;
    uint8 bInitialVelocityInLocalSpace;
    uint8 bForceSubStepping;
    uint8 bSimulationEnabled;
    uint8 bSweepCollision;
    uint8 bIsHomingProjectile;
    uint8 bBounceAngleAffectsFriction;
    uint8 bIsSliding;
    uint8 bInterpMovement;
    uint8 bInterpRotation;
    float PreviousHitTime;
    FVector PreviousHitNormal;
    float ProjectileGravityScale;
    float Buoyancy;
    float Bounciness;
    float Friction;
    float BounceVelocityStopSimulatingThreshold;
    float MinFrictionFraction;
    FProjectileMovementComponentOnProjectileBounce OnProjectileBounce;
    void OnProjectileBounceDelegate(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    FProjectileMovementComponentOnProjectileStop OnProjectileStop;
    void OnProjectileStopDelegate(const FHitResult& ImpactResult);
    float HomingAccelerationMagnitude;
    TWeakObjectPtr<USceneComponent> HomingTargetComponent;
    float MaxSimulationTimeStep;
    int32 MaxSimulationIterations;
    int32 BounceAdditionalIterations;
    float InterpLocationTime;
    float InterpRotationTime;
    float InterpLocationMaxLagDistance;
    float InterpLocationSnapToTargetDistance;

    void StopSimulating(const FHitResult& HitResult);
    void SetVelocityInLocalSpace(FVector NewVelocity);
    void SetInterpolatedComponent(USceneComponent* Component);
    void ResetInterpolation();
    void OnProjectileStopDelegate__DelegateSignature(const FHitResult& ImpactResult);
    void OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void MoveInterpolationTarget(const FVector& NewLocation, const FRotator& NewRotation);
    FVector LimitVelocity(FVector NewVelocity);
    bool IsVelocityUnderSimulationThreshold();
    bool IsInterpolationComplete();
}

class USaveGame : UObject
{
}

class UPrimaryDataAsset : UDataAsset
{
}

class ACharacter : APawn
{
    USkeletalMeshComponent* Mesh;
    UCharacterMovementComponent* CharacterMovement;
    UCapsuleComponent* CapsuleComponent;
    FBasedMovementInfo BasedMovement;
    FBasedMovementInfo ReplicatedBasedMovement;
    float AnimRootMotionTranslationScale;
    FVector BaseTranslationOffset;
    FQuat BaseRotationOffset;
    float ReplicatedServerLastTransformUpdateTimeStamp;
    float ReplayLastTransformUpdateTimeStamp;
    uint8 ReplicatedMovementMode;
    bool bInBaseReplication;
    float CrouchedEyeHeight;
    uint8 bIsCrouched;
    uint8 bProxyIsJumpForceApplied;
    uint8 bPressedJump;
    uint8 bClientUpdating;
    uint8 bClientWasFalling;
    uint8 bClientResimulateRootMotion;
    uint8 bClientResimulateRootMotionSources;
    uint8 bSimGravityDisabled;
    uint8 bClientCheckEncroachmentOnNetUpdate;
    uint8 bServerMoveIgnoreRootMotion;
    uint8 bWasJumping;
    float JumpKeyHoldTime;
    float JumpForceTimeRemaining;
    float ProxyJumpForceStartedTime;
    float JumpMaxHoldTime;
    int32 JumpMaxCount;
    int32 JumpCurrentCount;
    FCharacterOnReachedJumpApex OnReachedJumpApex;
    void CharacterReachedApexSignature();
    FCharacterMovementModeChangedDelegate MovementModeChangedDelegate;
    void MovementModeChangedSignature(UCharacter* Character, uint8 PrevMovementMode, uint8 PreviousCustomMode);
    FCharacterOnCharacterMovementUpdated OnCharacterMovementUpdated;
    void CharacterMovementUpdatedSignature(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    FRootMotionSourceGroup SavedRootMotion;
    FRootMotionMovementParams ClientRootMotionParams;
    TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves;
    FRepRootMotionMontage RepRootMotion;

    void UnCrouch(bool bClientSimulation);
    void StopJumping();
    void StopAnimMontage(UAnimMontage* AnimMontage);
    void ServerMoveOld(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags);
    void ServerMoveNoBase(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    void ServerMoveDualNoBase(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    void ServerMoveDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    void ServerMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    void ServerMove(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    void RootMotionDebugClientPrintOnScreen(FString inString);
    float PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);
    void OnWalkingOffLedge(const FVector& PreviousFloorImpactNormal, const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation, float TimeDelta);
    void OnRep_RootMotion();
    void OnRep_ReplicatedBasedMovement();
    void OnRep_ReplayLastTransformUpdateTimeStamp();
    void OnRep_IsCrouched();
    void OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    void OnLanded(const FHitResult& Hit);
    void OnJumped();
    void LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    void K2_UpdateCustomMovement(float DeltaTime);
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnMovementModeChanged(uint8 PrevMovementMode, uint8 NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void Jump();
    bool IsPlayingRootMotion();
    bool IsPlayingNetworkedRootMotionMontage();
    bool IsJumpProvidingForce();
    bool HasAnyRootMotion();
    UAnimMontage* GetCurrentMontage();
    FVector GetBaseTranslationOffset();
    FRotator GetBaseRotationOffsetRotator();
    float GetAnimRootMotionTranslationScale();
    void Crouch(bool bClientSimulation);
    void ClientVeryShortAdjustPosition(float Timestamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    void ClientCheatWalk();
    void ClientCheatGhost();
    void ClientCheatFly();
    void ClientAdjustRootMotionSourcePosition(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    void ClientAdjustPosition(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode);
    void ClientAckGoodMove(float Timestamp);
    bool CanJumpInternal();
    bool CanJump();
    bool CanCrouch();
    void CacheInitialMeshOffset(FVector MeshRelativeLocation, FRotator MeshRelativeRotation);
}

class UCharacterMovementComponent : UPawnMovementComponent
{
    ACharacter* CharacterOwner;
    float GravityScale;
    float MaxStepHeight;
    float JumpZVelocity;
    float JumpOffJumpZFactor;
    float WalkableFloorAngle;
    float WalkableFloorZ;
    TEnumAsByte<EMovementMode> MovementMode;
    uint8 CustomMovementMode;
    ENetworkSmoothingMode NetworkSmoothingMode;
    float GroundFriction;
    float MaxWalkSpeed;
    float MaxWalkSpeedCrouched;
    float MaxSwimSpeed;
    float MaxFlySpeed;
    float MaxCustomMovementSpeed;
    float MaxAcceleration;
    float MinAnalogWalkSpeed;
    float BrakingFrictionFactor;
    float BrakingFriction;
    float BrakingSubStepTime;
    float BrakingDecelerationWalking;
    float BrakingDecelerationFalling;
    float BrakingDecelerationSwimming;
    float BrakingDecelerationFlying;
    float AirControl;
    float AirControlBoostMultiplier;
    float AirControlBoostVelocityThreshold;
    float FallingLateralFriction;
    float CrouchedHalfHeight;
    float Buoyancy;
    float PerchRadiusThreshold;
    float PerchAdditionalHeight;
    FRotator RotationRate;
    uint8 bUseSeparateBrakingFriction;
    uint8 bApplyGravityWhileJumping;
    uint8 bUseControllerDesiredRotation;
    uint8 bOrientRotationToMovement;
    uint8 bSweepWhileNavWalking;
    uint8 bMovementInProgress;
    uint8 bEnableScopedMovementUpdates;
    uint8 bEnableServerDualMoveScopedMovementUpdates;
    uint8 bForceMaxAccel;
    uint8 bRunPhysicsWithNoController;
    uint8 bForceNextFloorCheck;
    uint8 bShrinkProxyCapsule;
    uint8 bCanWalkOffLedges;
    uint8 bCanWalkOffLedgesWhenCrouching;
    uint8 bNetworkSkipProxyPredictionOnNetUpdate;
    uint8 bNetworkAlwaysReplicateTransformUpdateTimestamp;
    uint8 bDeferUpdateMoveComponent;
    uint8 bEnablePhysicsInteraction;
    uint8 bTouchForceScaledToMass;
    uint8 bPushForceScaledToMass;
    uint8 bPushForceUsingZOffset;
    uint8 bScalePushForceToVelocity;
    USceneComponent* DeferredUpdatedMoveComponent;
    float MaxOutOfWaterStepHeight;
    float OutofWaterZ;
    float Mass;
    float StandingDownwardForceScale;
    float InitialPushForceFactor;
    float PushForceFactor;
    float PushForcePointZOffsetFactor;
    float TouchForceFactor;
    float MinTouchForce;
    float MaxTouchForce;
    float RepulsionForce;
    FVector Acceleration;
    FQuat LastUpdateRotation;
    FVector LastUpdateLocation;
    FVector LastUpdateVelocity;
    float ServerLastTransformUpdateTimeStamp;
    float ServerLastClientGoodMoveAckTime;
    float ServerLastClientAdjustmentTime;
    FVector PendingImpulseToApply;
    FVector PendingForceToApply;
    float AnalogInputModifier;
    float MaxSimulationTimeStep;
    int32 MaxSimulationIterations;
    int32 MaxJumpApexAttemptsPerSimulation;
    float MaxDepenetrationWithGeometry;
    float MaxDepenetrationWithGeometryAsProxy;
    float MaxDepenetrationWithPawn;
    float MaxDepenetrationWithPawnAsProxy;
    float NetworkSimulatedSmoothLocationTime;
    float NetworkSimulatedSmoothRotationTime;
    float ListenServerNetworkSimulatedSmoothLocationTime;
    float ListenServerNetworkSimulatedSmoothRotationTime;
    float NetProxyShrinkRadius;
    float NetProxyShrinkHalfHeight;
    float NetworkMaxSmoothUpdateDistance;
    float NetworkNoSmoothUpdateDistance;
    float NetworkMinTimeBetweenClientAckGoodMoves;
    float NetworkMinTimeBetweenClientAdjustments;
    float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection;
    float NetworkLargeClientCorrectionDistance;
    float LedgeCheckThreshold;
    float JumpOutOfWaterPitch;
    FFindFloorResult CurrentFloor;
    TEnumAsByte<EMovementMode> DefaultLandMovementMode;
    TEnumAsByte<EMovementMode> DefaultWaterMovementMode;
    TEnumAsByte<EMovementMode> GroundMovementMode;
    uint8 bMaintainHorizontalGroundVelocity;
    uint8 bImpartBaseVelocityX;
    uint8 bImpartBaseVelocityY;
    uint8 bImpartBaseVelocityZ;
    uint8 bImpartBaseAngularVelocity;
    uint8 bJustTeleported;
    uint8 bNetworkUpdateReceived;
    uint8 bNetworkMovementModeChanged;
    uint8 bIgnoreClientMovementErrorChecksAndCorrection;
    uint8 bServerAcceptClientAuthoritativePosition;
    uint8 bNotifyApex;
    uint8 bCheatFlying;
    uint8 bWantsToCrouch;
    uint8 bCrouchMaintainsBaseLocation;
    uint8 bIgnoreBaseRotation;
    uint8 bFastAttachedMove;
    uint8 bAlwaysCheckFloor;
    uint8 bUseFlatBaseForFloorChecks;
    uint8 bPerformingJumpOff;
    uint8 bWantsToLeaveNavWalking;
    uint8 bUseRVOAvoidance;
    uint8 bRequestedMoveUseAcceleration;
    uint8 bWasSimulatingRootMotion;
    uint8 bAllowPhysicsRotationDuringAnimRootMotion;
    uint8 bHasRequestedVelocity;
    uint8 bRequestedMoveWithMaxSpeed;
    uint8 bWasAvoidanceUpdated;
    uint8 bProjectNavMeshWalking;
    uint8 bProjectNavMeshOnBothWorldChannels;
    float AvoidanceConsiderationRadius;
    FVector RequestedVelocity;
    int32 AvoidanceUID;
    FNavAvoidanceMask AvoidanceGroup;
    FNavAvoidanceMask GroupsToAvoid;
    FNavAvoidanceMask GroupsToIgnore;
    float AvoidanceWeight;
    FVector PendingLaunchVelocity;
    float NavMeshProjectionInterval;
    float NavMeshProjectionTimer;
    float NavMeshProjectionInterpSpeed;
    float NavMeshProjectionHeightScaleUp;
    float NavMeshProjectionHeightScaleDown;
    float NavWalkingFloorDistTolerance;
    FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction;
    float MinTimeBetweenTimeStampResets;
    FRootMotionSourceGroup CurrentRootMotion;
    FRootMotionMovementParams RootMotionParams;
    FVector AnimRootMotionVelocity;

    void SetWalkableFloorZ(float InWalkableFloorZ);
    void SetWalkableFloorAngle(float InWalkableFloorAngle);
    void SetMovementMode(uint8 NewMovementMode, uint8 NewCustomMode);
    void SetGroupsToIgnoreMask(const FNavAvoidanceMask& GroupMask);
    void SetGroupsToIgnore(int32 GroupFlags);
    void SetGroupsToAvoidMask(const FNavAvoidanceMask& GroupMask);
    void SetGroupsToAvoid(int32 GroupFlags);
    void SetAvoidanceGroupMask(const FNavAvoidanceMask& GroupMask);
    void SetAvoidanceGroup(int32 GroupFlags);
    void SetAvoidanceEnabled(bool bEnable);
    float K2_GetWalkableFloorZ();
    float K2_GetWalkableFloorAngle();
    float K2_GetModifiedMaxAcceleration();
    void K2_FindFloor(FVector CapsuleLocation, FFindFloorResult& FloorResult);
    void K2_ComputeFloorDist(FVector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, FFindFloorResult& FloorResult);
    bool IsWalking();
    bool IsWalkable(const FHitResult& Hit);
    float GetValidPerchRadius();
    float GetPerchRadiusThreshold();
    UPrimitiveComponent* GetMovementBase();
    float GetMinAnalogSpeed();
    float GetMaxJumpHeightWithJumpTime();
    float GetMaxJumpHeight();
    float GetMaxBrakingDeceleration();
    float GetMaxAcceleration();
    FVector GetLastUpdateVelocity();
    FRotator GetLastUpdateRotation();
    FVector GetLastUpdateLocation();
    FVector GetImpartedMovementBaseVelocity();
    FVector GetCurrentAcceleration();
    ACharacter* GetCharacterOwner();
    float GetAnalogInputModifier();
    void DisableMovement();
    void ClearAccumulatedForces();
    void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
    void AddImpulse(FVector Impulse, bool bVelocityChange);
    void AddForce(FVector force);
}

class ATriggerBase : AActor
{
    UShapeComponent* CollisionComponent;
}

class ATriggerBox : ATriggerBase
{
}

class USceneCaptureComponent : USceneComponent
{
    ESceneCapturePrimitiveRenderMode PrimitiveRenderMode;
    TEnumAsByte<ESceneCaptureSource> CaptureSource;
    uint8 bCaptureEveryFrame;
    uint8 bCaptureOnMovement;
    bool bAlwaysPersistRenderingState;
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents;
    TArray<AActor*> HiddenActors;
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents;
    TArray<AActor*> ShowOnlyActors;
    float LODDistanceFactor;
    float MaxViewDistanceOverride;
    int32 CaptureSortPriority;
    bool bUseRayTracingIfEnabled;
    TArray<FEngineShowFlagsSetting> ShowFlagSettings;
    FString ProfilingEventName;

    void ShowOnlyComponent(UPrimitiveComponent* InComponent);
    void ShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors);
    void SetCaptureSortPriority(int32 NewCaptureSortPriority);
    void RemoveShowOnlyComponent(UPrimitiveComponent* InComponent);
    void RemoveShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors);
    void HideComponent(UPrimitiveComponent* InComponent);
    void HideActorComponents(AActor* InActor, const bool bIncludeFromChildActors);
    void ClearShowOnlyComponents();
    void ClearHiddenComponents();
}

class USceneCaptureComponent2D : USceneCaptureComponent
{
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionType;
    float FOVAngle;
    float OrthoWidth;
    UTextureRenderTarget2D* TextureTarget;
    TEnumAsByte<ESceneCaptureCompositeMode> CompositeMode;
    FPostProcessSettings PostProcessSettings;
    float PostProcessBlendWeight;
    uint8 bOverride_CustomNearClippingPlane;
    float CustomNearClippingPlane;
    bool bUseCustomProjectionMatrix;
    FMatrix CustomProjectionMatrix;
    bool bEnableClipPlane;
    FVector ClipPlaneBase;
    FVector ClipPlaneNormal;
    uint8 bCameraCutThisFrame;
    uint8 bConsiderUnrenderedOpaquePixelAsFullyTranslucent;
    bool bDisableFlipCopyGLES;

    void CaptureScene();
    void AddOrUpdateBlendable(InterfaceProperty InBlendableObject, float InWeight);
}

class UBoxComponent : UShapeComponent
{
    FVector BoxExtent;
    float LineThickness;

    void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);
    FVector GetUnscaledBoxExtent();
    FVector GetScaledBoxExtent();
}

class USplineMeshComponent : UStaticMeshComponent
{
    FSplineMeshParams SplineParams;
    FVector SplineUpDir;
    float SplineBoundaryMin;
    FGuid CachedMeshBodySetupGuid;
    UBodySetup* BodySetup;
    float SplineBoundaryMax;
    uint8 bAllowSplineEditingPerInstance;
    uint8 bSmoothInterpRollScale;
    uint8 bMeshDirty;
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;
    float VirtualTextureMainPassMaxDrawDistance;

    void UpdateMesh();
    void SetStartTangent(FVector StartTangent, bool bUpdateMesh);
    void SetStartScale(FVector2D StartScale, bool bUpdateMesh);
    void SetStartRoll(float StartRoll, bool bUpdateMesh);
    void SetStartPosition(FVector StartPos, bool bUpdateMesh);
    void SetStartOffset(FVector2D StartOffset, bool bUpdateMesh);
    void SetStartAndEnd(FVector StartPos, FVector StartTangent, FVector EndPos, FVector EndTangent, bool bUpdateMesh);
    void SetSplineUpDir(const FVector& InSplineUpDir, bool bUpdateMesh);
    void SetForwardAxis(uint8 InForwardAxis, bool bUpdateMesh);
    void SetEndTangent(FVector EndTangent, bool bUpdateMesh);
    void SetEndScale(FVector2D EndScale, bool bUpdateMesh);
    void SetEndRoll(float EndRoll, bool bUpdateMesh);
    void SetEndPosition(FVector EndPos, bool bUpdateMesh);
    void SetEndOffset(FVector2D EndOffset, bool bUpdateMesh);
    void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
    void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
    FVector GetStartTangent();
    FVector2D GetStartScale();
    float GetStartRoll();
    FVector GetStartPosition();
    FVector2D GetStartOffset();
    FVector GetSplineUpDir();
    TEnumAsByte<ESplineMeshAxis::Type> GetForwardAxis();
    FVector GetEndTangent();
    FVector2D GetEndScale();
    float GetEndRoll();
    FVector GetEndPosition();
    FVector2D GetEndOffset();
    float GetBoundaryMin();
    float GetBoundaryMax();
}

class ASkyLight : AInfo
{
    USkyLightComponent* LightComponent;
    uint8 bEnabled;

    void OnRep_bEnabled();
}

class UStreamableRenderAsset : UObject
{
    double ForceMipLevelsToBeResidentTimestamp;
    int32 NumCinematicMipLevels;
    int32 StreamingIndex;
    int32 CachedCombinedLODBias;
    uint8 CachedNumResidentLODs;
    uint8 bCachedReadyForStreaming;
    uint8 NeverStream;
    uint8 bGlobalForceMipLevelsToBeResident;
    uint8 bIsStreamable;
    uint8 bHasStreamingUpdatePending;
    uint8 bForceMiplevelsToBeResident;
    uint8 bIgnoreStreamingMipBias;
    uint8 bUseCinematicMipLevels;
}

class UTexture : UStreamableRenderAsset
{
    FGuid LightingGuid;
    int32 LODBias;
    TEnumAsByte<TextureCompressionSettings> CompressionSettings;
    TEnumAsByte<TextureFilter> Filter;
    ETextureMipLoadOptions MipLoadOptions;
    TEnumAsByte<TextureGroup> LODGroup;
    uint8 SRGB;
    uint8 bNoTiling;
    uint8 VirtualTextureStreaming;
    uint8 CompressionYCoCg;
    uint8 bAsyncResourceReleaseHasBeenStarted;
    TArray<UAssetUserData*> AssetUserData;
}

class UTextureCube : UTexture
{
}

class AStaticMeshActor : AActor
{
    UStaticMeshComponent* StaticMeshComponent;
    bool bStaticMeshReplicateMovement;
    ENavDataGatheringMode NavigationGeometryGatheringMode;

    void SetMobility(uint8 InMobility);
}

class ABrush : AActor
{
    TEnumAsByte<EBrushType> BrushType;
    FColor BrushColor;
    int32 PolyFlags;
    uint8 bColored;
    uint8 bSolidWhenSelected;
    uint8 bPlaceableFromClassBrowser;
    uint8 bNotForClientOrServer;
    UModel* Brush;
    UBrushComponent* BrushComponent;
    uint8 bInManipulation;
    TArray<FGeomSelection> SavedSelections;
}

class AVolume : ABrush
{
}

class UMaterialInterface : UObject
{
    USubsurfaceProfile* SubsurfaceProfile;
    FLightmassMaterialInterfaceSettings LightmassSettings;
    TArray<FMaterialTextureInfo> TextureStreamingData;
    TArray<UAssetUserData*> AssetUserData;

    void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups, bool bFastResponse);
    UPhysicalMaterialMask* GetPhysicalMaterialMask();
    UPhysicalMaterial* GetPhysicalMaterialFromMap(int32 Index);
    UPhysicalMaterial* GetPhysicalMaterial();
    FMaterialParameterInfo GetParameterInfo(uint8 Association, FName ParameterName, UMaterialFunctionInterface* LayerFunction);
    UMaterial* GetBaseMaterial();
}

class UMaterialInstance : UMaterialInterface
{
    UPhysicalMaterial* PhysMaterial;
    UPhysicalMaterial* PhysicalMaterialMap;
    UMaterialInterface* Parent;
    uint8 bHasStaticPermutationResource;
    uint8 bOverrideSubsurfaceProfile;
    TArray<FScalarParameterValue> ScalarParameterValues;
    TArray<FVectorParameterValue> VectorParameterValues;
    TArray<FTextureParameterValue> TextureParameterValues;
    TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;
    TArray<FFontParameterValue> FontParameterValues;
    FMaterialInstanceBasePropertyOverrides BasePropertyOverrides;
    FStaticParameterSet StaticParameters;
    FMaterialCachedParameters CachedLayerParameters;
    TArray<UObject*> CachedReferencedTextures;
}

class UMaterialInstanceConstant : UMaterialInstance
{
    UPhysicalMaterialMask* PhysMaterialMask;

    FLinearColor K2_GetVectorParameterValue(FName ParameterName);
    UTexture* K2_GetTextureParameterValue(FName ParameterName);
    float K2_GetScalarParameterValue(FName ParameterName);
}

class UMaterialExpression : UObject
{
    UMaterial* Material;
    UMaterialFunction* Function;
    uint8 bIsParameterExpression;
}

class UMaterialExpressionCustomOutput : UMaterialExpression
{
}

class UEngineCustomTimeStep : UObject
{
}

class UDynamicBlueprintBinding : UObject
{
}

class ACameraActor : AActor
{
    TEnumAsByte<EAutoReceiveInput::Type> AutoActivateForPlayer;
    UCameraComponent* CameraComponent;
    USceneComponent* SceneComponent;
    uint8 bConstrainAspectRatio;
    float AspectRatio;
    float FOVAngle;
    float PostProcessBlendWeight;
    FPostProcessSettings PostProcessSettings;

    int32 GetAutoActivatePlayerIndex();
}

class UCameraComponent : USceneComponent
{
    float FieldOfView;
    float OrthoWidth;
    float OrthoNearClipPlane;
    float OrthoFarClipPlane;
    float AspectRatio;
    uint8 bConstrainAspectRatio;
    uint8 bUseFieldOfViewForLOD;
    uint8 bLockToHmd;
    uint8 bUsePawnControlRotation;
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionMode;
    float PostProcessBlendWeight;
    FPostProcessSettings PostProcessSettings;

    void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
    void SetProjectionMode(uint8 InProjectionMode);
    void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
    void SetOrthoWidth(float InOrthoWidth);
    void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
    void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
    void SetFieldOfView(float InFieldOfView);
    void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
    void SetAspectRatio(float InAspectRatio);
    void RemoveBlendable(InterfaceProperty InBlendableObject);
    void OnCameraMeshHiddenChanged();
    void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView);
    void AddOrUpdateBlendable(InterfaceProperty InBlendableObject, float InWeight);
}

class USoundBase : UObject
{
    USoundClass* SoundClassObject;
    uint8 bDebug;
    uint8 bOverrideConcurrency;
    uint8 bOutputToBusOnly;
    uint8 bHasDelayNode;
    uint8 bHasConcatenatorNode;
    uint8 bBypassVolumeScaleForPriority;
    EVirtualizationMode VirtualizationMode;
    TSet<USoundConcurrency*> ConcurrencySet;
    FSoundConcurrencySettings ConcurrencyOverrides;
    float Duration;
    float MaxDistance;
    float TotalSamples;
    float Priority;
    USoundAttenuation* AttenuationSettings;
    FSoundModulation Modulation;
    USoundSubmixBase* SoundSubmixObject;
    TArray<FSoundSubmixSendInfo> SoundSubmixSends;
    USoundEffectSourcePresetChain* SourceEffectChain;
    TArray<FSoundSourceBusSendInfo> BusSends;
    TArray<FSoundSourceBusSendInfo> PreEffectBusSends;
}

class USoundWave : USoundBase
{
    int32 CompressionQuality;
    int32 StreamingPriority;
    ESoundwaveSampleRateSettings SampleRateQuality;
    TEnumAsByte<ESoundGroup> SoundGroup;
    uint8 bLooping;
    uint8 bStreaming;
    uint8 bSeekableStreaming;
    ESoundWaveLoadingBehavior LoadingBehavior;
    uint8 bMature;
    uint8 bManualWordWrap;
    uint8 bSingleLine;
    uint8 bIsAmbisonics;
    TArray<float> FrequenciesToAnalyze;
    TArray<FSoundWaveSpectralTimeData> CookedSpectralTimeData;
    TArray<FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData;
    int32 InitialChunkSize;
    FString SpokenText;
    float SubtitlePriority;
    float Volume;
    float Pitch;
    int32 NumChannels;
    int32 SampleRate;
    TArray<FSubtitleCue> Subtitles;
    UCurveTable* Curves;
    UCurveTable* InternalCurves;
}

class USoundWaveProcedural : USoundWave
{
}

class UModel : UObject
{
}

class UChannel : UObject
{
    UNetConnection* Connection;
}

class UActorChannel : UChannel
{
    AActor* Actor;
    TArray<UObject*> CreateSubObjects;
}

class UAnimationAsset : UObject
{
    USkeleton* Skeleton;
    TArray<UAnimMetaData*> MetaData;
    TArray<UAssetUserData*> AssetUserData;
}

class UBlendSpaceBase : UAnimationAsset
{
    bool bRotationBlendInMeshSpace;
    float AnimLength;
    FInterpolationParameter InterpolationParam;
    float TargetWeightInterpolationSpeedPerSec;
    TEnumAsByte<ENotifyTriggerMode::Type> NotifyTriggerMode;
    TArray<FPerBoneInterpolation> PerBoneBlend;
    int32 SampleIndexWithMarkers;
    TArray<FBlendSample> SampleData;
    TArray<FEditorElement> GridSamples;
    FBlendParameter BlendParameters;
}

class UBlendSpace : UBlendSpaceBase
{
    TEnumAsByte<EBlendSpaceAxis> AxisToScaleAnimation;
}

class UAimOffsetBlendSpace : UBlendSpace
{
}

class UBlendSpace1D : UBlendSpaceBase
{
    bool bScaleAnimation;
}

class UAimOffsetBlendSpace1D : UBlendSpace1D
{
}

class UAISystemBase : UObject
{
    FSoftClassPath AISystemClassName;
    FName AISystemModuleName;
    bool bInstantiateAISystemOnClient;
}

class AAmbientSound : AActor
{
    UAudioComponent* AudioComponent;

    void Stop();
    void Play(float StartTime);
    void FadeOut(float FadeoutDuration, float FadeVolumeLevel);
    void FadeIn(float FadeInDuration, float FadeVolumeLevel);
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
}

class UAnimationSettings : UDeveloperSettings
{
    int32 CompressCommandletVersion;
    TArray<FString> KeyEndEffectorsMatchNameArray;
    bool ForceRecompression;
    bool bOnlyCheckForMissingSkeletalMeshes;
    bool bForceBelowThreshold;
    bool bFirstRecompressUsingCurrentOrDefault;
    bool bRaiseMaxErrorToExisting;
    bool bEnablePerformanceLog;
    bool bStripAnimationDataOnDedicatedServer;
    bool bTickAnimationOnSkeletalMeshInit;
}

class UAnimBlueprint : UBlueprint
{
    USkeleton* TargetSkeleton;
    TArray<FAnimGroupInfo> Groups;
    bool bUseMultiThreadedAnimationUpdate;
    bool bWarnAboutBlueprintUsage;
}

class UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass
{
    TArray<FBakedAnimationStateMachine> BakedStateMachines;
    USkeleton* TargetSkeleton;
    TArray<FAnimNotifyEvent> AnimNotifies;
    TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap;
    TArray<FName> SyncGroupNames;
    TArray<FExposedValueHandler> EvaluateGraphExposedInputs;
    TMap<FName, FGraphAssetPlayerInformation> GraphAssetPlayerInformation;
    TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions;
}

class UAnimBoneCompressionCodec : UObject
{
    FString Description;
}

class UAnimBoneCompressionSettings : UObject
{
    TArray<UAnimBoneCompressionCodec*> Codecs;
}

class UAnimClassData : UObject
{
    TArray<FBakedAnimationStateMachine> BakedStateMachines;
    USkeleton* TargetSkeleton;
    TArray<FAnimNotifyEvent> AnimNotifies;
    TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap;
    TArray<FAnimBlueprintFunction> AnimBlueprintFunctions;
    TArray<FAnimBlueprintFunctionData> AnimBlueprintFunctionData;
    TArray<TFieldPath<FNone>> AnimNodeProperties;
    TArray<TFieldPath<FNone>> LinkedAnimGraphNodeProperties;
    TArray<TFieldPath<FNone>> LinkedAnimLayerNodeProperties;
    TArray<TFieldPath<FNone>> PreUpdateNodeProperties;
    TArray<TFieldPath<FNone>> DynamicResetNodeProperties;
    TArray<TFieldPath<FNone>> StateMachineNodeProperties;
    TArray<TFieldPath<FNone>> InitializationNodeProperties;
    TMap<FName, FGraphAssetPlayerInformation> GraphNameAssetPlayers;
    TArray<FName> SyncGroupNames;
    TArray<FExposedValueHandler> EvaluateGraphExposedInputs;
    TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions;
}

class UAnimClassInterface : UInterface
{
}

class UAnimSequenceBase : UAnimationAsset
{
    TArray<FAnimNotifyEvent> Notifies;
    float SequenceLength;
    float RateScale;
    FRawCurveTracks RawCurveData;

    float GetPlayLength();
}

class UAnimCompositeBase : UAnimSequenceBase
{
}

class UAnimComposite : UAnimCompositeBase
{
    FAnimTrack AnimationTrack;
}

class UAnimCompress : UAnimBoneCompressionCodec
{
    uint8 bNeedsSkeleton;
    TEnumAsByte<AnimationCompressionFormat> TranslationCompressionFormat;
    TEnumAsByte<AnimationCompressionFormat> RotationCompressionFormat;
    TEnumAsByte<AnimationCompressionFormat> ScaleCompressionFormat;
}

class UAnimCompress_BitwiseCompressOnly : UAnimCompress
{
}

class UAnimCompress_LeastDestructive : UAnimCompress_BitwiseCompressOnly
{
}

class UAnimCompress_RemoveLinearKeys : UAnimCompress
{
    float MaxPosDiff;
    float MaxAngleDiff;
    float MaxScaleDiff;
    float MaxEffectorDiff;
    float MinEffectorDiff;
    float EffectorDiffSocket;
    float ParentKeyScale;
    uint8 bRetarget;
    uint8 bActuallyFilterLinearKeys;
}

class UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys
{
    float MaxZeroingThreshold;
    float MaxPosDiffBitwise;
    float MaxAngleDiffBitwise;
    float MaxScaleDiffBitwise;
    TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedRotationFormats;
    TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedTranslationFormats;
    TArray<TEnumAsByte<AnimationCompressionFormat>> AllowedScaleFormats;
    uint8 bResampleAnimation;
    float ResampledFramerate;
    int32 MinKeysForResampling;
    uint8 bUseAdaptiveError;
    uint8 bUseOverrideForEndEffectors;
    int32 TrackHeightBias;
    float ParentingDivisor;
    float ParentingDivisorExponent;
    uint8 bUseAdaptiveError2;
    float RotationErrorSourceRatio;
    float TranslationErrorSourceRatio;
    float ScaleErrorSourceRatio;
    float MaxErrorPerTrackRatio;
    float PerturbationProbeSize;
}

class UAnimCompress_RemoveEverySecondKey : UAnimCompress
{
    int32 MinKeys;
    uint8 bStartAtSecondKey;
}

class UAnimCompress_RemoveTrivialKeys : UAnimCompress
{
    float MaxPosDiff;
    float MaxAngleDiff;
    float MaxScaleDiff;
}

class UAnimCurveCompressionCodec : UObject
{
}

class UAnimCurveCompressionCodec_CompressedRichCurve : UAnimCurveCompressionCodec
{
}

class UAnimCurveCompressionCodec_UniformIndexable : UAnimCurveCompressionCodec
{
}

class UAnimCurveCompressionCodec_UniformlySampled : UAnimCurveCompressionCodec
{
}

class UAnimCurveCompressionSettings : UObject
{
    UAnimCurveCompressionCodec* Codec;
}

class UAnimLayerInterface : UInterface
{
}

class UAnimMetaData : UObject
{
}

class UAnimMontage : UAnimCompositeBase
{
    FAlphaBlend BlendIn;
    float BlendInTime;
    FAlphaBlend BlendOut;
    float BlendOutTime;
    float BlendOutTriggerTime;
    FName SyncGroup;
    int32 SyncSlotIndex;
    FMarkerSyncData MarkerData;
    TArray<FCompositeSection> CompositeSections;
    TArray<FSlotAnimationTrack> SlotAnimTracks;
    TArray<FBranchingPoint> BranchingPoints;
    bool bEnableRootMotionTranslation;
    bool bEnableRootMotionRotation;
    bool bEnableAutoBlendOut;
    TEnumAsByte<ERootMotionRootLock::Type> RootMotionRootLock;
    TArray<FBranchingPointMarker> BranchingPointMarkers;
    TArray<int32> BranchingPointStateNotifyIndices;
    FTimeStretchCurve TimeStretchCurve;
    FName TimeStretchCurveName;

    float GetDefaultBlendOutTime();
}

class UAnimNotify_PauseClothingSimulation : UAnimNotify
{
}

class UAnimNotify_PlayParticleEffect : UAnimNotify
{
    UParticleSystem* PSTemplate;
    FVector LocationOffset;
    FRotator RotationOffset;
    FVector Scale;
    uint8 Attached;
    FName SocketName;
}

class UAnimNotify_ResetClothingSimulation : UAnimNotify
{
}

class UAnimNotify_ResetDynamics : UAnimNotify
{
}

class UAnimNotify_ResumeClothingSimulation : UAnimNotify
{
}

class UAnimNotifyState_DisableRootMotion : UAnimNotifyState
{
}

class UAnimNotifyState_Trail : UAnimNotifyState
{
    UParticleSystem* PSTemplate;
    FName FirstSocketName;
    FName SecondSocketName;
    TEnumAsByte<ETrailWidthMode> WidthScaleMode;
    FName WidthScaleCurve;
    uint8 bRecycleSpawnedSystems;

    UParticleSystem* OverridePSTemplate(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
}

class UAnimSequence : UAnimSequenceBase
{
    int32 NumFrames;
    TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable;
    UAnimBoneCompressionSettings* BoneCompressionSettings;
    UAnimCurveCompressionSettings* CurveCompressionSettings;
    TEnumAsByte<EAdditiveAnimationType> AdditiveAnimType;
    TEnumAsByte<EAdditiveBasePoseType> RefPoseType;
    UAnimSequence* RefPoseSeq;
    int32 RefFrameIndex;
    FName RetargetSource;
    EAnimInterpolationType Interpolation;
    bool bEnableRootMotion;
    TEnumAsByte<ERootMotionRootLock::Type> RootMotionRootLock;
    bool bForceRootLock;
    bool bUseNormalizedRootMotionScale;
    bool bRootMotionSettingsCopiedFromMontage;
    TArray<FAnimSyncMarker> AuthoredSyncMarkers;
}

class UAnimSet : UObject
{
    uint8 bAnimRotationOnly;
    TArray<FName> TrackBoneNames;
    TArray<FAnimSetMeshLinkup> LinkupCache;
    TArray<uint8> BoneUseAnimTranslation;
    TArray<uint8> ForceUseMeshTranslation;
    TArray<FName> UseTranslationBoneNames;
    TArray<FName> ForceMeshTranslationBoneNames;
    FName PreviewSkelMeshName;
    FName BestRatioSkelMeshName;
}

class UAnimSingleNodeInstance : UAnimInstance
{
    UAnimationAsset* CurrentAsset;
    FAnimSingleNodeInstancePostEvaluateAnimEvent PostEvaluateAnimEvent;
    void PostEvaluateAnimEvent();

    void StopAnim();
    void SetReverse(bool bInReverse);
    void SetPreviewCurveOverride(const FName& PoseName, float Value, bool bRemoveIfZero);
    void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);
    void SetPosition(float InPosition, bool bFireNotifies);
    void SetPlayRate(float InPlayRate);
    void SetPlaying(bool bIsPlaying);
    void SetLooping(bool bIsLooping);
    void SetBlendSpaceInput(const FVector& InBlendInput);
    void SetAnimationAsset(UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
    void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
    float GetLength();
    UAnimationAsset* GetAnimationAsset();
}

class UAnimStateMachineTypes : UObject
{
}

class UAnimStreamable : UAnimSequenceBase
{
    int32 NumFrames;
    EAnimInterpolationType Interpolation;
    FName RetargetSource;
    UAnimBoneCompressionSettings* BoneCompressionSettings;
    UAnimCurveCompressionSettings* CurveCompressionSettings;
    bool bEnableRootMotion;
    TEnumAsByte<ERootMotionRootLock::Type> RootMotionRootLock;
    bool bForceRootLock;
    bool bUseNormalizedRootMotionScale;
}

class UApplicationLifecycleComponent : UActorComponent
{
    FApplicationLifecycleComponentApplicationWillDeactivateDelegate ApplicationWillDeactivateDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationHasReactivatedDelegate ApplicationHasReactivatedDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationWillEnterBackgroundDelegate ApplicationWillEnterBackgroundDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationHasEnteredForegroundDelegate ApplicationHasEnteredForegroundDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationWillTerminateDelegate ApplicationWillTerminateDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationShouldUnloadResourcesDelegate ApplicationShouldUnloadResourcesDelegate;
    void ApplicationLifetimeDelegate();
    FApplicationLifecycleComponentApplicationReceivedStartupArgumentsDelegate ApplicationReceivedStartupArgumentsDelegate;
    void ApplicationStartupArgumentsDelegate(const TArray<FString>& StartupArguments);
    FApplicationLifecycleComponentOnTemperatureChangeDelegate OnTemperatureChangeDelegate;
    void OnTemperatureChangeDelegate(ETemperatureSeverityType Severity);
    FApplicationLifecycleComponentOnLowPowerModeDelegate OnLowPowerModeDelegate;
    void OnLowPowerModeDelegate(bool bInLowPowerMode);
}

class UArrowComponent : UPrimitiveComponent
{
    FColor ArrowColor;
    float ArrowSize;
    float ScreenSize;
    uint8 bIsScreenSizeScaled;
    uint8 bTreatAsASprite;

    void SetArrowColor(FLinearColor NewColor);
}

class UAssetExportTask : UObject
{
    UObject* Object;
    UExporter* Exporter;
    FString Filename;
    bool bSelected;
    bool bReplaceIdentical;
    bool bPrompt;
    bool bAutomated;
    bool bUseFileArchive;
    bool bWriteEmptyFiles;
    TArray<UObject*> IgnoreObjectList;
    UObject* options;
    TArray<FString> Errors;
}

class UAssetManagerSettings : UDeveloperSettings
{
    TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;
    TArray<FDirectoryPath> DirectoriesToExclude;
    TArray<FPrimaryAssetRulesOverride> PrimaryAssetRules;
    TArray<FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules;
    bool bOnlyCookProductionAssets;
    bool bShouldManagerDetermineTypeAndName;
    bool bShouldGuessTypeAndNameInEditor;
    bool bShouldAcquireMissingChunksOnLoad;
    TArray<FAssetManagerRedirect> PrimaryAssetIdRedirects;
    TArray<FAssetManagerRedirect> PrimaryAssetTypeRedirects;
    TArray<FAssetManagerRedirect> AssetPathRedirects;
    TSet<FName> MetaDataTagsForAssetRegistry;
}

class UAssetMappingTable : UObject
{
    TArray<FAssetMapping> MappedAssets;
}

class UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase
{
    FAsyncActionHandleSaveGameCompleted Completed;
    void OnAsyncHandleSaveGame(USaveGame* SaveGame, bool bSuccess);
    USaveGame* SaveGameObject;

    UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(UObject* WorldContextObject, USaveGame* SaveGameObject, FString slotName, const int32 UserIndex);
    UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(UObject* WorldContextObject, FString slotName, const int32 UserIndex);
}

class UAsyncActionLoadPrimaryAssetBase : UBlueprintAsyncActionBase
{
}

class UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase
{
    FAsyncActionLoadPrimaryAssetCompleted Completed;
    void OnPrimaryAssetLoaded(UObject* Loaded);

    UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, const TArray<FName>& LoadBundles);
}

class UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase
{
    FAsyncActionLoadPrimaryAssetClassCompleted Completed;
    void OnPrimaryAssetClassLoaded(TSubclassOf<UObject> Loaded);

    UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, const TArray<FName>& LoadBundles);
}

class UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase
{
    FAsyncActionLoadPrimaryAssetListCompleted Completed;
    void OnPrimaryAssetListLoaded(const TArray<UObject*>& Loaded);

    UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& LoadBundles);
}

class UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase
{
    FAsyncActionLoadPrimaryAssetClassListCompleted Completed;
    void OnPrimaryAssetClassListLoaded(const TArray<TSubclassOf<UObject>>& Loaded);

    UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& LoadBundles);
}

class UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase
{
    FAsyncActionChangePrimaryAssetBundlesCompleted Completed;
    void OnPrimaryAssetBundlesChanged();

    UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(UObject* WorldContextObject, const TArray<FPrimaryAssetId>& PrimaryAssetList, const TArray<FName>& AddBundles, const TArray<FName>& RemoveBundles);
    UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(UObject* WorldContextObject, const TArray<FName>& NewBundles, const TArray<FName>& OldBundles);
}

class AAtmosphericFog : AInfo
{
    UAtmosphericFogComponent* AtmosphericFogComponent;
}

class UAtmosphericFogComponent : USceneComponent
{
    float SunMultiplier;
    float FogMultiplier;
    float DensityMultiplier;
    float DensityOffset;
    float DistanceScale;
    float AltitudeScale;
    float DistanceOffset;
    float GroundOffset;
    float StartDistance;
    float SunDiscScale;
    float DefaultBrightness;
    FColor DefaultLightColor;
    uint8 bDisableSunDisk;
    uint8 bAtmosphereAffectsSunIlluminance;
    uint8 bDisableGroundScattering;
    FAtmospherePrecomputeParameters PrecomputeParams;
    UTexture2D* TransmittanceTexture;
    UTexture2D* IrradianceTexture;

    void StartPrecompute();
    void SetSunMultiplier(float NewSunMultiplier);
    void SetStartDistance(float NewStartDistance);
    void SetPrecomputeParams(float DensityHeight, int32 MaxScatteringOrder, int32 InscatterAltitudeSampleNum);
    void SetFogMultiplier(float NewFogMultiplier);
    void SetDistanceScale(float NewDistanceScale);
    void SetDistanceOffset(float NewDistanceOffset);
    void SetDensityOffset(float NewDensityOffset);
    void SetDensityMultiplier(float NewDensityMultiplier);
    void SetDefaultLightColor(FLinearColor NewLightColor);
    void SetDefaultBrightness(float NewBrightness);
    void SetAltitudeScale(float NewAltitudeScale);
    void DisableSunDisk(bool NewSunDisk);
    void DisableGroundScattering(bool NewGroundScattering);
}

class UAudioSettings : UDeveloperSettings
{
    FSoftObjectPath DefaultSoundClassName;
    FSoftObjectPath DefaultMediaSoundClassName;
    FSoftObjectPath DefaultSoundConcurrencyName;
    FSoftObjectPath DefaultBaseSoundMix;
    FSoftObjectPath VoiPSoundClass;
    FSoftObjectPath MasterSubmix;
    FSoftObjectPath ReverbSubmix;
    FSoftObjectPath EQSubmix;
    EVoiceSampleRate VoiPSampleRate;
    float DefaultReverbSendLevel;
    int32 MaximumConcurrentStreams;
    float GlobalMinPitchScale;
    float GlobalMaxPitchScale;
    TArray<FAudioQualitySettings> QualityLevels;
    uint8 bAllowPlayWhenSilent;
    uint8 bDisableMasterEQ;
    uint8 bAllowCenterChannel3DPanning;
    uint32 NumStoppingSources;
    EPanningMethod PanningMethod;
    EMonoChannelUpmixMethod MonoChannelUpmixMethod;
    FString DialogueFilenameFormat;
}

class AAudioVolume : UVolume
{
    float Priority;
    uint8 bEnabled;
    FReverbSettings Settings;
    FInteriorSettings AmbientZoneSettings;

    void SetReverbSettings(const FReverbSettings& NewReverbSettings);
    void SetPriority(float NewPriority);
    void SetInteriorSettings(const FInteriorSettings& NewInteriorSettings);
    void SetEnabled(bool bNewEnabled);
    void OnRep_bEnabled();
}

class UAutoDestroySubsystem : UWorldSubsystem
{
    TArray<AActor*> ActorsToPoll;

    void OnActorEndPlay(AActor* Actor, uint8 EndPlayReason);
}

class UAutomationTestSettings : UObject
{
    TArray<FString> EngineTestModules;
    TArray<FString> EditorTestModules;
    FSoftObjectPath AutomationTestmap;
    TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps;
    TArray<FSoftObjectPath> AssetsToOpen;
    FBuildPromotionTestSettings BuildPromotionTest;
    FMaterialEditorPromotionSettings MaterialEditorPromotionTest;
    FParticleEditorPromotionSettings ParticleEditorPromotionTest;
    FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest;
    TArray<FString> TestLevelFolders;
    TArray<FExternalToolDefinition> ExternalTools;
    TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions;
    TArray<FLaunchOnTestSettings> LaunchOnSettings;
    FIntPoint DefaultScreenshotResolution;
}

class UAvoidanceManager : UObject
{
    float DefaultTimeToLive;
    float LockTimeAfterAvoid;
    float LockTimeAfterClean;
    float DeltaTimeToPredict;
    float ArtificialRadiusExpansion;
    float TestHeightDifference;
    float HeightCheckMargin;

    bool RegisterMovementComponent(UMovementComponent* MovementComp, float AvoidanceWeight);
    int32 GetObjectCount();
    int32 GetNewAvoidanceUID();
    FVector GetAvoidanceVelocityForComponent(UMovementComponent* MovementComp);
}

class ABandwidthTestActor : AActor
{
    FBandwidthTestGenerator BandwidthGenerator;
}

class UBillboardComponent : UPrimitiveComponent
{
    UTexture2D* Sprite;
    uint8 bIsScreenSizeScaled;
    float ScreenSize;
    float U;
    float UL;
    float V;
    float VL;

    void SetUV(int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);
    void SetSpriteAndUV(UTexture2D* NewSprite, int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);
    void SetSprite(UTexture2D* NewSprite);
}

class UBlendableInterface : UInterface
{
}

class USkeleton : UObject
{
    TArray<FBoneNode> BoneTree;
    TArray<FTransform> RefLocalPoses;
    FGuid VirtualBoneGuid;
    TArray<FVirtualBone> VirtualBones;
    TArray<USkeletalMeshSocket*> Sockets;
    FSmartNameContainer SmartNames;
    TArray<UBlendProfile*> BlendProfiles;
    TArray<FAnimSlotGroup> SlotGroups;
    TArray<UAssetUserData*> AssetUserData;
}

class UBlendProfile : UObject
{
    USkeleton* OwningSkeleton;
    TArray<FBlendProfileBoneEntry> ProfileEntries;
}

class ABlockingVolume : UVolume
{
}

class UBlueprintExtension : UObject
{
}

class UBlueprintMapLibrary : UBlueprintFunctionLibrary
{

    void SetMapPropertyByName(UObject* Object, FName PropertyName, const TMap<int32, int32>& Value);
    void Map_Values(const TMap<int32, int32>& TargetMap, TArray<int32>& Values);
    bool Map_Remove(const TMap<int32, int32>& TargetMap, const int32& Key);
    int32 Map_Length(const TMap<int32, int32>& TargetMap);
    void Map_Keys(const TMap<int32, int32>& TargetMap, TArray<int32>& Keys);
    bool Map_Find(const TMap<int32, int32>& TargetMap, const int32& Key, int32& Value);
    bool Map_Contains(const TMap<int32, int32>& TargetMap, const int32& Key);
    void Map_Clear(const TMap<int32, int32>& TargetMap);
    void Map_Add(const TMap<int32, int32>& TargetMap, const int32& Key, const int32& Value);
}

class UBlueprintPathsLibrary : UBlueprintFunctionLibrary
{

    FString VideoCaptureDir();
    void ValidatePath(FString InPath, bool& bDidSucceed, FText& OutReason);
    void Split(FString InPath, FString& PathPart, FString& FilenamePart, FString& ExtensionPart);
    FString SourceConfigDir();
    bool ShouldSaveToUserDir();
    FString ShaderWorkingDir();
    void SetProjectFilePath(FString NewGameProjectFilePath);
    FString SetExtension(FString InPath, FString InNewExtension);
    FString ScreenShotDir();
    FString SandboxesDir();
    FString RootDir();
    void RemoveDuplicateSlashes(FString InPath, FString& OutPath);
    FString ProjectUserDir();
    FString ProjectSavedDir();
    FString ProjectPluginsDir();
    FString ProjectPersistentDownloadDir();
    FString ProjectModsDir();
    FString ProjectLogDir();
    FString ProjectIntermediateDir();
    FString ProjectDir();
    FString ProjectContentDir();
    FString ProjectConfigDir();
    FString ProfilingDir();
    void NormalizeFilename(FString InPath, FString& OutPath);
    void NormalizeDirectoryName(FString InPath, FString& OutPath);
    FString MakeValidFileName(FString inString, FString InReplacementChar);
    void MakeStandardFilename(FString InPath, FString& OutPath);
    void MakePlatformFilename(FString InPath, FString& OutPath);
    bool MakePathRelativeTo(FString InPath, FString InRelativeTo, FString& OutPath);
    FString LaunchDir();
    bool IsSamePath(FString PathA, FString PathB);
    bool IsRestrictedPath(FString InPath);
    bool IsRelative(FString InPath);
    bool IsProjectFilePathSet();
    bool IsDrive(FString InPath);
    bool HasProjectPersistentDownloadDir();
    TArray<FString> GetToolTipLocalizationPaths();
    TArray<FString> GetRestrictedFolderNames();
    FString GetRelativePathToRoot();
    TArray<FString> GetPropertyNameLocalizationPaths();
    FString GetProjectFilePath();
    FString GetPath(FString InPath);
    FString GetInvalidFileSystemChars();
    TArray<FString> GetGameLocalizationPaths();
    FString GetExtension(FString InPath, bool bIncludeDot);
    TArray<FString> GetEngineLocalizationPaths();
    TArray<FString> GetEditorLocalizationPaths();
    FString GetCleanFilename(FString InPath);
    FString GetBaseFilename(FString InPath, bool bRemovePath);
    FString GeneratedConfigDir();
    FString GameUserDeveloperDir();
    FString GameSourceDir();
    FString GameDevelopersDir();
    FString GameAgnosticSavedDir();
    bool FileExists(FString InPath);
    FString FeaturePackDir();
    FString EnterprisePluginsDir();
    FString EnterpriseFeaturePackDir();
    FString EnterpriseDir();
    FString EngineVersionAgnosticUserDir();
    FString EngineUserDir();
    FString EngineSourceDir();
    FString EngineSavedDir();
    FString EnginePluginsDir();
    FString EngineIntermediateDir();
    FString EngineDir();
    FString EngineContentDir();
    FString EngineConfigDir();
    bool DirectoryExists(FString InPath);
    FString DiffDir();
    FString CreateTempFilename(FString Path, FString Prefix, FString Extension);
    FString ConvertToSandboxPath(FString InPath, FString InSandboxName);
    FString ConvertRelativePathToFull(FString InPath, FString InBasePath);
    FString ConvertFromSandboxPath(FString InPath, FString InSandboxName);
    FString Combine(const TArray<FString>& InPaths);
    bool CollapseRelativeDirectories(FString InPath, FString& OutPath);
    FString CloudDir();
    FString ChangeExtension(FString InPath, FString InNewExtension);
    FString BugItDir();
    FString AutomationTransientDir();
    FString AutomationLogDir();
    FString AutomationDir();
}

class UPlatformGameInstance : UGameInstance
{
    FPlatformGameInstanceApplicationWillDeactivateDelegate ApplicationWillDeactivateDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationHasReactivatedDelegate ApplicationHasReactivatedDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationWillEnterBackgroundDelegate ApplicationWillEnterBackgroundDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationHasEnteredForegroundDelegate ApplicationHasEnteredForegroundDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationWillTerminateDelegate ApplicationWillTerminateDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationShouldUnloadResourcesDelegate ApplicationShouldUnloadResourcesDelegate;
    void PlatformDelegate();
    FPlatformGameInstanceApplicationReceivedStartupArgumentsDelegate ApplicationReceivedStartupArgumentsDelegate;
    void PlatformStartupArgumentsDelegate(const TArray<FString>& StartupArguments);
    FPlatformGameInstanceApplicationRegisteredForRemoteNotificationsDelegate ApplicationRegisteredForRemoteNotificationsDelegate;
    void PlatformRegisteredForRemoteNotificationsDelegate(const TArray<uint8>& inArray);
    FPlatformGameInstanceApplicationRegisteredForUserNotificationsDelegate ApplicationRegisteredForUserNotificationsDelegate;
    void PlatformRegisteredForUserNotificationsDelegate(int32 inInt);
    FPlatformGameInstanceApplicationFailedToRegisterForRemoteNotificationsDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate;
    void PlatformFailedToRegisterForRemoteNotificationsDelegate(FString inString);
    FPlatformGameInstanceApplicationReceivedRemoteNotificationDelegate ApplicationReceivedRemoteNotificationDelegate;
    void PlatformReceivedRemoteNotificationDelegate(FString inString, uint8 inAppState);
    FPlatformGameInstanceApplicationReceivedLocalNotificationDelegate ApplicationReceivedLocalNotificationDelegate;
    void PlatformReceivedLocalNotificationDelegate(FString inString, int32 inInt, uint8 inAppState);
    FPlatformGameInstanceApplicationReceivedScreenOrientationChangedNotificationDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate;
    void PlatformScreenOrientationChangedDelegate(uint8 inScreenOrientation);
}

class UBlueprintPlatformLibrary : UBlueprintFunctionLibrary
{

    int32 ScheduleLocalNotificationFromNow(int32 inSecondsFromNow, const FText& Title, const FText& Body, const FText& Action, FString ActivationEvent);
    void ScheduleLocalNotificationBadgeFromNow(int32 inSecondsFromNow, FString ActivationEvent);
    int32 ScheduleLocalNotificationBadgeAtTime(const FDateTime& FireDateTime, bool LocalTime, FString ActivationEvent);
    int32 ScheduleLocalNotificationAtTime(const FDateTime& FireDateTime, bool LocalTime, const FText& Title, const FText& Body, const FText& Action, FString ActivationEvent);
    void GetLaunchNotification(bool& NotificationLaunchedApp, FString& ActivationEvent, int32& FireDate);
    TEnumAsByte<EScreenOrientation::Type> GetDeviceOrientation();
    void ClearAllLocalNotifications();
    void CancelLocalNotificationById(int32 NotificationId);
    void CancelLocalNotification(FString ActivationEvent);
}

class UBlueprintSetLibrary : UBlueprintFunctionLibrary
{

    void SetSetPropertyByName(UObject* Object, FName PropertyName, const SetProperty& Value);
    void Set_Union(const SetProperty& A, const SetProperty& B, SetProperty& Result);
    void Set_ToArray(const SetProperty& A, TArray<int32>& Result);
    void Set_RemoveItems(const SetProperty& TargetSet, const TArray<int32>& Items);
    bool Set_Remove(const SetProperty& TargetSet, const int32& Item);
    int32 Set_Length(const SetProperty& TargetSet);
    void Set_Intersection(const SetProperty& A, const SetProperty& B, SetProperty& Result);
    void Set_Difference(const SetProperty& A, const SetProperty& B, SetProperty& Result);
    bool Set_Contains(const SetProperty& TargetSet, const int32& ItemToFind);
    void Set_Clear(const SetProperty& TargetSet);
    void Set_AddItems(const SetProperty& TargetSet, const TArray<int32>& NewItems);
    void Set_Add(const SetProperty& TargetSet, const int32& NewItem);
}

class UBodySetup : UObject
{
    FKAggregateGeom AggGeom;
    FName BoneName;
    TEnumAsByte<EPhysicsType> PhysicsType;
    uint8 bAlwaysFullAnimWeight;
    uint8 bConsiderForBounds;
    uint8 bMeshCollideAll;
    uint8 bDoubleSidedGeometry;
    uint8 bGenerateNonMirroredCollision;
    uint8 bSharedCookedData;
    uint8 bGenerateMirroredCollision;
    uint8 bSupportUVsAndFaceRemap;
    TEnumAsByte<EBodyCollisionResponse::Type> CollisionReponse;
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;
    UPhysicalMaterial* PhysMaterial;
    FWalkableSlopeOverride WalkableSlopeOverride;
    FBodyInstance DefaultInstance;
    FVector BuildScale3D;
}

class UBoneMaskFilter : UObject
{
    TArray<FInputBlendPose> BlendPoses;
}

class UBookmarkBase : UObject
{
}

class UBookMark : UBookmarkBase
{
    FVector Location;
    FRotator Rotation;
    TArray<FString> HiddenLevels;
}

class UBookMark2D : UBookmarkBase
{
    float Zoom2D;
    FIntPoint Location;
}

class AReflectionCapture : AActor
{
    UReflectionCaptureComponent* CaptureComponent;
}

class ABoxReflectionCapture : AReflectionCapture
{
}

class UReflectionCaptureComponent : USceneComponent
{
    UBillboardComponent* CaptureOffsetComponent;
    EReflectionSourceType ReflectionSourceType;
    UTextureCube* Cubemap;
    float SourceCubemapAngle;
    float Brightness;
    FVector CaptureOffset;
    FGuid MapBuildDataId;
}

class UBoxReflectionCaptureComponent : UReflectionCaptureComponent
{
    float BoxTransitionDistance;
    UBoxComponent* PreviewInfluenceBox;
    UBoxComponent* PreviewCaptureBox;
}

class UBreakpoint : UObject
{
    uint8 bEnabled;
    UEdGraphNode* Node;
    uint8 bStepOnce;
    uint8 bStepOnce_WasPreviouslyDisabled;
    uint8 bStepOnce_RemoveAfterHit;
}

class UBrushBuilder : UObject
{
    FString BitmapFilename;
    FString ToolTip;
    uint8 NotifyBadParams;
    TArray<FVector> Vertices;
    TArray<FBuilderPoly> Polys;
    FName Layer;
    uint8 MergeCoplanars;
}

class UBrushComponent : UPrimitiveComponent
{
    UModel* Brush;
    UBodySetup* BrushBodySetup;
}

class ABrushShape : ABrush
{
}

class UButtonStyleAsset : UObject
{
    FButtonStyle ButtonStyle;
}

class UCameraAnim : UObject
{
    UInterpGroup* CameraInterpGroup;
    float AnimLength;
    FBox BoundingBox;
    uint8 bRelativeToInitialTransform;
    uint8 bRelativeToInitialFOV;
    float BaseFOV;
    FPostProcessSettings BasePostProcessSettings;
    float BasePostProcessBlendWeight;
}

class UCameraAnimInst : UObject
{
    UCameraAnim* CamAnim;
    UInterpGroupInst* InterpGroupInst;
    float PlayRate;
    UInterpTrackMove* MoveTrack;
    UInterpTrackInstMove* MoveInst;
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;

    void Stop(bool bImmediate);
    void SetScale(float NewDuration);
    void SetDuration(float NewDuration);
}

class ACameraBlockingVolume : UVolume
{
}

class UCameraModifier : UObject
{
    uint8 bDebug;
    uint8 bExclusive;
    uint8 Priority;
    APlayerCameraManager* CameraOwner;
    float AlphaInTime;
    float AlphaOutTime;
    float alpha;

    bool IsDisabled();
    AActor* GetViewTarget();
    void EnableModifier();
    void DisableModifier(bool bImmediate);
    void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings);
    void BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV);
}

class UCameraModifier_CameraShake : UCameraModifier
{
    TArray<FActiveCameraShakeInfo> ActiveShakes;
    TMap<TSubclassOf<UCameraShake>, FPooledCameraShakes> ExpiredPooledShakesMap;
    float SplitScreenShakeScale;
}

class UCameraShake : UObject
{
    uint8 bSingleInstance;
    float OscillationDuration;
    float OscillationBlendInTime;
    float OscillationBlendOutTime;
    FROscillator RotOscillation;
    FVOscillator LocOscillation;
    FFOscillator FOVOscillation;
    float AnimPlayRate;
    float AnimScale;
    float AnimBlendInTime;
    float AnimBlendOutTime;
    float RandomAnimSegmentDuration;
    UCameraAnim* Anim;
    uint8 bRandomAnimSegment;
    APlayerCameraManager* CameraOwner;
    float ShakeScale;
    float OscillatorTimeRemaining;
    UCameraAnimInst* AnimInst;

    void ReceiveStopShake(bool bImmediately);
    void ReceivePlayShake(float Scale);
    bool ReceiveIsFinished();
    void BlueprintUpdateCameraShake(float DeltaTime, float alpha, const FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);
}

class ACameraShakeSourceActor : AActor
{
    UCameraShakeSourceComponent* CameraShakeSourceComponent;
}

class UCameraShakeSourceComponent : USceneComponent
{
    ECameraShakeAttenuation Attenuation;
    float InnerAttenuationRadius;
    float OuterAttenuationRadius;
    TSubclassOf<UCameraShake> CameraShake;
    bool bAutoPlay;

    void StopAllCameraShakes(bool bImmediately);
    void PlayCameraShake(TSubclassOf<UCameraShake> InCameraShake);
    void Play();
    float GetAttenuationFactor(const FVector& Location);
}

class UCanvas : UObject
{
    float OrgX;
    float OrgY;
    float ClipX;
    float ClipY;
    FColor DrawColor;
    uint8 bCenterX;
    uint8 bCenterY;
    uint8 bNoSmooth;
    int32 SizeX;
    int32 SizeY;
    FPlane ColorModulate;
    UTexture2D* DefaultTexture;
    UTexture2D* GradientTexture0;
    UReporterGraph* ReporterGraph;

    FVector2D K2_TextSize(UFont* RenderFont, FString RenderText, FVector2D Scale);
    FVector2D K2_StrLen(UFont* RenderFont, FString RenderText);
    FVector K2_Project(FVector WorldLocation);
    void K2_DrawTriangle(UTexture* RenderTexture, TArray<FCanvasUVTri> Triangles);
    void K2_DrawTexture(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, uint8 BlendMode, float Rotation, FVector2D PivotPoint);
    void K2_DrawText(UFont* RenderFont, FString RenderText, FVector2D ScreenPosition, FVector2D Scale, FLinearColor RenderColor, float Kerning, FLinearColor ShadowColor, FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, FLinearColor OutlineColor);
    void K2_DrawPolygon(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D Radius, int32 NumberOfSides, FLinearColor RenderColor);
    void K2_DrawMaterialTriangle(UMaterialInterface* RenderMaterial, TArray<FCanvasUVTri> Triangles);
    void K2_DrawMaterial(UMaterialInterface* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint);
    void K2_DrawLine(FVector2D ScreenPositionA, FVector2D ScreenPositionB, float Thickness, FLinearColor RenderColor);
    void K2_DrawBox(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness, FLinearColor RenderColor);
    void K2_DrawBorder(UTexture* BorderTexture, UTexture* BackgroundTexture, UTexture* LeftBorderTexture, UTexture* RightBorderTexture, UTexture* TopBorderTexture, UTexture* BottomBorderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, FVector2D BorderScale, FVector2D BackgroundScale, float Rotation, FVector2D PivotPoint, FVector2D CornerSize);
    void K2_Deproject(FVector2D ScreenPosition, FVector& WorldOrigin, FVector& WorldDirection);
}

class UTextureRenderTarget : UTexture
{
    float TargetGamma;
}

class UTextureRenderTarget2D : UTextureRenderTarget
{
    int32 SizeX;
    int32 SizeY;
    FLinearColor ClearColor;
    TEnumAsByte<TextureAddress> AddressX;
    TEnumAsByte<TextureAddress> AddressY;
    uint8 bForceLinearGamma;
    uint8 bHDR;
    uint8 bGPUSharedFlag;
    TEnumAsByte<ETextureRenderTargetFormat> RenderTargetFormat;
    uint8 bAutoGenerateMips;
    TEnumAsByte<TextureFilter> MipsSamplerFilter;
    TEnumAsByte<TextureAddress> MipsAddressU;
    TEnumAsByte<TextureAddress> MipsAddressV;
    TEnumAsByte<EPixelFormat> OverrideFormat;
}

class UCanvasRenderTarget2D : UTextureRenderTarget2D
{
    FCanvasRenderTarget2DOnCanvasRenderTargetUpdate OnCanvasRenderTargetUpdate;
    void OnCanvasRenderTargetUpdate(UCanvas* Canvas, int32 Width, int32 Height);
    TWeakObjectPtr<UWorld> World;
    bool bShouldClearRenderTargetOnReceiveUpdate;

    void UpdateResource();
    void ReceiveUpdate(UCanvas* Canvas, int32 Width, int32 Height);
    void GetSize(int32& Width, int32& Height);
    UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(UObject* WorldContextObject, TSubclassOf<UCanvasRenderTarget2D> CanvasRenderTarget2DClass, int32 Width, int32 Height);
}

class UCapsuleComponent : UShapeComponent
{
    float CapsuleHalfHeight;
    float CapsuleRadius;

    void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
    void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
    void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
    void GetUnscaledCapsuleSize_WithoutHemisphere(float& outRadius, float& OutHalfHeightWithoutHemisphere);
    void GetUnscaledCapsuleSize(float& outRadius, float& OutHalfHeight);
    float GetUnscaledCapsuleRadius();
    float GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
    float GetUnscaledCapsuleHalfHeight();
    float GetShapeScale();
    void GetScaledCapsuleSize_WithoutHemisphere(float& outRadius, float& OutHalfHeightWithoutHemisphere);
    void GetScaledCapsuleSize(float& outRadius, float& OutHalfHeight);
    float GetScaledCapsuleRadius();
    float GetScaledCapsuleHalfHeight_WithoutHemisphere();
    float GetScaledCapsuleHalfHeight();
}

class UChaosPhysicalMaterial : UObject
{
    float Friction;
    float StaticFriction;
    float Restitution;
    float LinearEtherDrag;
    float AngularEtherDrag;
    float SleepingLinearVelocityThreshold;
    float SleepingAngularVelocityThreshold;
}

class UCheckBoxStyleAsset : UObject
{
    FCheckBoxStyle CheckBoxStyle;
}

class UChildActorComponent : USceneComponent
{
    TSubclassOf<AActor> ChildActorClass;
    AActor* ChildActor;
    AActor* ChildActorTemplate;

    void SetChildActorClass(TSubclassOf<AActor> InClass);
}

class UChildConnection : UNetConnection
{
    UNetConnection* Parent;
}

class UPlatformInterfaceBase : UObject
{
    TArray<FDelegateArray> AllDelegates;
}

class UCloudStorageBase : UPlatformInterfaceBase
{
    TArray<FString> LocalCloudFiles;
    uint8 bSuppressDelegateCalls;
}

class UCollisionProfile : UDeveloperSettings
{
    TArray<FCollisionResponseTemplate> Profiles;
    TArray<FCustomChannelSetup> DefaultChannelResponses;
    TArray<FCustomProfile> EditProfiles;
    TArray<FRedirector> ProfileRedirects;
    TArray<FRedirector> CollisionChannelRedirects;
}

class UCommandlet : UObject
{
    FString HelpDescription;
    FString HelpUsage;
    FString HelpWebLink;
    TArray<FString> HelpParamNames;
    TArray<FString> HelpParamDescriptions;
    uint8 IsServer;
    uint8 IsClient;
    uint8 IsEditor;
    uint8 LogToConsole;
    uint8 ShowErrorCount;
    uint8 ShowProgress;
}

class UComponentDelegateBinding : UDynamicBlueprintBinding
{
    TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings;
}

class UCurveTable : UObject
{
}

class UCompositeCurveTable : UCurveTable
{
    TArray<UCurveTable*> ParentTables;
    TArray<UCurveTable*> OldParentTables;
}

class UDataTable : UObject
{
    UScriptStruct* RowStruct;
    uint8 bStripFromClientBuilds;
    uint8 bIgnoreExtraFields;
    uint8 bIgnoreMissingFields;
    FString ImportKeyField;
}

class UCompositeDataTable : UDataTable
{
    TArray<UDataTable*> ParentTables;
    TArray<UDataTable*> OldParentTables;
}

class UEngine : UObject
{
    UFont* TinyFont;
    FSoftObjectPath TinyFontName;
    UFont* SmallFont;
    FSoftObjectPath SmallFontName;
    UFont* MediumFont;
    FSoftObjectPath MediumFontName;
    UFont* LargeFont;
    FSoftObjectPath LargeFontName;
    UFont* SubtitleFont;
    FSoftObjectPath SubtitleFontName;
    TArray<UFont*> AdditionalFonts;
    TArray<FString> AdditionalFontNames;
    TSubclassOf<UConsole> ConsoleClass;
    FSoftClassPath ConsoleClassName;
    TSubclassOf<UGameViewportClient> GameViewportClientClass;
    FSoftClassPath GameViewportClientClassName;
    TSubclassOf<ULocalPlayer> LocalPlayerClass;
    FSoftClassPath LocalPlayerClassName;
    TSubclassOf<AWorldSettings> WorldSettingsClass;
    FSoftClassPath WorldSettingsClassName;
    FSoftClassPath NavigationSystemClassName;
    TSubclassOf<UNavigationSystemBase> NavigationSystemClass;
    FSoftClassPath NavigationSystemConfigClassName;
    TSubclassOf<UNavigationSystemConfig> NavigationSystemConfigClass;
    FSoftClassPath AvoidanceManagerClassName;
    TSubclassOf<UAvoidanceManager> AvoidanceManagerClass;
    TSubclassOf<UPhysicsCollisionHandler> PhysicsCollisionHandlerClass;
    FSoftClassPath PhysicsCollisionHandlerClassName;
    FSoftClassPath GameUserSettingsClassName;
    TSubclassOf<UGameUserSettings> GameUserSettingsClass;
    FSoftClassPath AIControllerClassName;
    UGameUserSettings* GameUserSettings;
    TSubclassOf<ALevelScriptActor> LevelScriptActorClass;
    FSoftClassPath LevelScriptActorClassName;
    FSoftClassPath DefaultBlueprintBaseClassName;
    FSoftClassPath GameSingletonClassName;
    UObject* GameSingleton;
    FSoftClassPath AssetManagerClassName;
    UAssetManager* AssetManager;
    UTexture2D* DefaultTexture;
    FSoftObjectPath DefaultTextureName;
    UTexture* DefaultDiffuseTexture;
    FSoftObjectPath DefaultDiffuseTextureName;
    UTexture2D* DefaultBSPVertexTexture;
    FSoftObjectPath DefaultBSPVertexTextureName;
    UTexture2D* HighFrequencyNoiseTexture;
    FSoftObjectPath HighFrequencyNoiseTextureName;
    UTexture2D* DefaultBokehTexture;
    FSoftObjectPath DefaultBokehTextureName;
    UTexture2D* DefaultBloomKernelTexture;
    FSoftObjectPath DefaultBloomKernelTextureName;
    UMaterial* WireframeMaterial;
    FString WireframeMaterialName;
    UMaterial* DebugMeshMaterial;
    FSoftObjectPath DebugMeshMaterialName;
    UMaterial* EmissiveMeshMaterial;
    FSoftObjectPath EmissiveMeshMaterialName;
    UMaterial* LevelColorationLitMaterial;
    FString LevelColorationLitMaterialName;
    UMaterial* LevelColorationUnlitMaterial;
    FString LevelColorationUnlitMaterialName;
    UMaterial* LightingTexelDensityMaterial;
    FString LightingTexelDensityName;
    UMaterial* ShadedLevelColorationLitMaterial;
    FString ShadedLevelColorationLitMaterialName;
    UMaterial* ShadedLevelColorationUnlitMaterial;
    FString ShadedLevelColorationUnlitMaterialName;
    UMaterial* RemoveSurfaceMaterial;
    FSoftObjectPath RemoveSurfaceMaterialName;
    UMaterial* VertexColorMaterial;
    FString VertexColorMaterialName;
    UMaterial* VertexColorViewModeMaterial_ColorOnly;
    FString VertexColorViewModeMaterialName_ColorOnly;
    UMaterial* VertexColorViewModeMaterial_AlphaAsColor;
    FString VertexColorViewModeMaterialName_AlphaAsColor;
    UMaterial* VertexColorViewModeMaterial_RedOnly;
    FString VertexColorViewModeMaterialName_RedOnly;
    UMaterial* VertexColorViewModeMaterial_GreenOnly;
    FString VertexColorViewModeMaterialName_GreenOnly;
    UMaterial* VertexColorViewModeMaterial_BlueOnly;
    FString VertexColorViewModeMaterialName_BlueOnly;
    FSoftObjectPath DebugEditorMaterialName;
    UMaterial* ConstraintLimitMaterial;
    UMaterialInstanceDynamic* ConstraintLimitMaterialX;
    UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis;
    UMaterialInstanceDynamic* ConstraintLimitMaterialY;
    UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis;
    UMaterialInstanceDynamic* ConstraintLimitMaterialZ;
    UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis;
    UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic;
    UMaterial* InvalidLightmapSettingsMaterial;
    FSoftObjectPath InvalidLightmapSettingsMaterialName;
    UMaterial* PreviewShadowsIndicatorMaterial;
    FSoftObjectPath PreviewShadowsIndicatorMaterialName;
    UMaterial* ArrowMaterial;
    UMaterialInstanceDynamic* ArrowMaterialYellow;
    FSoftObjectPath ArrowMaterialName;
    FLinearColor LightingOnlyBrightness;
    TArray<FLinearColor> ShaderComplexityColors;
    TArray<FLinearColor> QuadComplexityColors;
    TArray<FLinearColor> LightComplexityColors;
    TArray<FLinearColor> StationaryLightOverlapColors;
    TArray<FLinearColor> LODColorationColors;
    TArray<FLinearColor> HLODColorationColors;
    TArray<FLinearColor> StreamingAccuracyColors;
    float MaxPixelShaderAdditiveComplexityCount;
    float MaxES3PixelShaderAdditiveComplexityCount;
    float MinLightMapDensity;
    float IdealLightMapDensity;
    float MaxLightMapDensity;
    uint8 bRenderLightMapDensityGrayscale;
    float RenderLightMapDensityGrayscaleScale;
    float RenderLightMapDensityColorScale;
    FLinearColor LightMapDensityVertexMappedColor;
    FLinearColor LightMapDensitySelectedColor;
    TArray<FStatColorMapping> StatColorMappings;
    UPhysicalMaterial* DefaultPhysMaterial;
    FSoftObjectPath DefaultPhysMaterialName;
    TArray<FGameNameRedirect> ActiveGameNameRedirects;
    TArray<FClassRedirect> ActiveClassRedirects;
    TArray<FPluginRedirect> ActivePluginRedirects;
    TArray<FStructRedirect> ActiveStructRedirects;
    UTexture2D* PreIntegratedSkinBRDFTexture;
    FSoftObjectPath PreIntegratedSkinBRDFTextureName;
    UTexture2D* BlueNoiseTexture;
    FSoftObjectPath BlueNoiseTextureName;
    UTexture2D* MiniFontTexture;
    FSoftObjectPath MiniFontTextureName;
    UTexture* WeightMapPlaceholderTexture;
    FSoftObjectPath WeightMapPlaceholderTextureName;
    UTexture2D* LightMapDensityTexture;
    FSoftObjectPath LightMapDensityTextureName;
    UGameViewportClient* GameViewport;
    TArray<FString> DeferredCommands;
    int32 TickCycles;
    int32 GameCycles;
    int32 ClientCycles;
    float NearClipPlane;
    uint8 bHardwareSurveyEnabled;
    uint8 bSubtitlesEnabled;
    uint8 bSubtitlesForcedOff;
    int32 MaximumLoopIterationCount;
    uint8 bCanBlueprintsTickByDefault;
    uint8 bOptimizeAnimBlueprintMemberVariableAccess;
    uint8 bAllowMultiThreadedAnimationUpdate;
    uint8 bEnableEditorPSysRealtimeLOD;
    uint8 bSmoothFrameRate;
    uint8 bUseFixedFrameRate;
    float FixedFrameRate;
    FFloatRange SmoothedFrameRateRange;
    UEngineCustomTimeStep* CustomTimeStep;
    FSoftClassPath CustomTimeStepClassName;
    UTimecodeProvider* TimecodeProvider;
    FSoftClassPath TimecodeProviderClassName;
    bool bGenerateDefaultTimecode;
    FFrameRate GenerateDefaultTimecodeFrameRate;
    float GenerateDefaultTimecodeFrameDelay;
    uint8 bCheckForMultiplePawnsSpawnedInAFrame;
    int32 NumPawnsAllowedToBeSpawnedInAFrame;
    uint8 bShouldGenerateLowQualityLightmaps;
    FColor C_WorldBox;
    FColor C_BrushWire;
    FColor C_AddWire;
    FColor C_SubtractWire;
    FColor C_SemiSolidWire;
    FColor C_NonSolidWire;
    FColor C_WireBackground;
    FColor C_ScaleBoxHi;
    FColor C_VolumeCollision;
    FColor C_BSPCollision;
    FColor C_OrthoBackground;
    FColor C_Volume;
    FColor C_BrushShape;
    float StreamingDistanceFactor;
    FDirectoryPath GameScreenshotSaveDirectory;
    ETransitionType TransitionType;
    FString TransitionDescription;
    FString TransitionGameMode;
    float MeshLODRange;
    uint8 bAllowMatureLanguage;
    float CameraRotationThreshold;
    float CameraTranslationThreshold;
    float PrimitiveProbablyVisibleTime;
    float MaxOcclusionPixelsFraction;
    uint8 bPauseOnLossOfFocus;
    int32 MaxParticleResize;
    int32 MaxParticleResizeWarn;
    TArray<FDropNoteInfo> PendingDroppedNotes;
    float NetClientTicksPerSecond;
    float DisplayGamma;
    float MinDesiredFrameRate;
    FLinearColor DefaultSelectedMaterialColor;
    FLinearColor SelectedMaterialColor;
    FLinearColor SelectionOutlineColor;
    FLinearColor SubduedSelectionOutlineColor;
    FLinearColor SelectedMaterialColorOverride;
    bool bIsOverridingSelectedColor;
    uint8 bEnableOnScreenDebugMessages;
    uint8 bEnableOnScreenDebugMessagesDisplay;
    uint8 bSuppressMapWarnings;
    uint8 bDisableAILogging;
    uint32 bEnableVisualLogRecordingOnStart;
    int32 ScreenSaverInhibitorSemaphore;
    uint8 bLockReadOnlyLevels;
    FString ParticleEventManagerClassPath;
    float SelectionHighlightIntensity;
    float BSPSelectionHighlightIntensity;
    float SelectionHighlightIntensityBillboards;
    TArray<FNetDriverDefinition> NetDriverDefinitions;
    TArray<FString> ServerActors;
    TArray<FString> RuntimeServerActors;
    float NetErrorLogInterval;
    uint8 bStartedLoadMapMovie;
    int32 NextWorldContextHandle;
}

class UScriptViewportClient : UObject
{
}

class UGameViewportClient : UScriptViewportClient
{
    UConsole* ViewportConsole;
    TArray<FDebugDisplayProperty> DebugProperties;
    int32 MaxSplitscreenPlayers;
    UWorld* World;
    UGameInstance* GameInstance;

    void SSSwapControllers();
    void ShowTitleSafeArea();
    void SetConsoleTarget(int32 PlayerIndex);
}

class UConsole : UObject
{
    ULocalPlayer* ConsoleTargetPlayer;
    UTexture2D* DefaultTexture_Black;
    UTexture2D* DefaultTexture_White;
    TArray<FString> HistoryBuffer;
}

class UControlChannel : UChannel
{
}

class UStreamingSettings : UDeveloperSettings
{
    uint8 AsyncLoadingThreadEnabled;
    uint8 WarnIfTimeLimitExceeded;
    float TimeLimitExceededMultiplier;
    float TimeLimitExceededMinTime;
    int32 MinBulkDataSizeForAsyncLoading;
    uint8 UseBackgroundLevelStreaming;
    uint8 AsyncLoadingUseFullTimeLimit;
    float AsyncLoadingTimeLimit;
    float PriorityAsyncLoadingExtraTime;
    float LevelStreamingActorsUpdateTimeLimit;
    float PriorityLevelStreamingActorsUpdateExtraTime;
    int32 LevelStreamingComponentsRegistrationGranularity;
    float LevelStreamingUnregisterComponentsTimeLimit;
    int32 LevelStreamingComponentsUnregistrationGranularity;
    uint8 FlushStreamingOnExit;
    uint8 EventDrivenLoaderEnabled;
}

class UGarbageCollectionSettings : UDeveloperSettings
{
    float TimeBetweenPurgingPendingKillObjects;
    uint8 FlushStreamingOnGC;
    uint8 AllowParallelGC;
    uint8 IncrementalBeginDestroyEnabled;
    uint8 MultithreadedDestructionEnabled;
    uint8 CreateGCClusters;
    uint8 AssetClusteringEnabled;
    uint8 ActorClusteringEnabled;
    uint8 BlueprintClusteringEnabled;
    uint8 UseDisregardForGCOnDedicatedServers;
    int32 MinGCClusterSize;
    int32 NumRetriesBeforeForcingGC;
    int32 MaxObjectsNotConsideredByGC;
    int32 SizeOfPermanentObjectPool;
    int32 MaxObjectsInGame;
    int32 MaxObjectsInEditor;
}

class ACullDistanceVolume : UVolume
{
    TArray<FCullDistanceSizePair> CullDistances;
    uint8 bEnabled;
}

class UCurveBase : UObject
{

    void GetValueRange(float& MinValue, float& MaxValue);
    void GetTimeRange(float& MinTime, float& MaxTime);
}

class UDEPRECATED_CurveEdPresetCurve : UObject
{
}

class UCurveFloat : UCurveBase
{
    FRichCurve FloatCurve;
    bool bIsEventCurve;

    float GetFloatValue(float InTime);
}

class UCurveLinearColor : UCurveBase
{
    FRichCurve FloatCurves;
    float AdjustHue;
    float AdjustSaturation;
    float AdjustBrightness;
    float AdjustBrightnessCurve;
    float AdjustVibrance;
    float AdjustMinAlpha;
    float AdjustMaxAlpha;

    FLinearColor GetLinearColorValue(float InTime);
    FLinearColor GetClampedLinearColorValue(float InTime);
}

class UTexture2D : UTexture
{
    int32 LevelIndex;
    int32 FirstResourceMemMip;
    uint8 bTemporarilyDisableStreaming;
    TEnumAsByte<TextureAddress> AddressX;
    TEnumAsByte<TextureAddress> AddressY;
    FIntPoint ImportedSize;

    int32 Blueprint_GetSizeY();
    int32 Blueprint_GetSizeX();
}

class UCurveLinearColorAtlas : UTexture2D
{
    uint32 TextureSize;
    TArray<UCurveLinearColor*> GradientCurves;

    bool GetCurvePosition(UCurveLinearColor* InCurve, float& Position);
}

class UCurveSourceInterface : UInterface
{

    float GetCurveValue(FName CurveName);
    void GetCurves(TArray<FNamedCurveValue>& OutValues);
    FName GetBindingName();
}

class UCurveVector : UCurveBase
{
    FRichCurve FloatCurves;

    FVector GetVectorValue(float InTime);
}

class UDamageType : UObject
{
    uint8 bCausedByWorld;
    uint8 bScaleMomentumByMass;
    uint8 bRadialDamageVelChange;
    float DamageImpulse;
    float DestructibleImpulse;
    float DestructibleDamageSpreadScale;
    float DamageFalloff;
}

class UDataTableFunctionLibrary : UBlueprintFunctionLibrary
{

    void GetDataTableRowNames(UDataTable* Table, TArray<FName>& OutRowNames);
    bool GetDataTableRowFromName(UDataTable* Table, FName RowName, FTableRowBase& OutRow);
    TArray<FString> GetDataTableColumnAsString(const UDataTable* DataTable, FName PropertyName);
    void EvaluateCurveTableRow(UCurveTable* CurveTable, FName RowName, float InXY, uint8& OutResult, float& OutXY, FString ContextString);
    bool DoesDataTableRowExist(UDataTable* Table, FName RowName);
}

class ADebugCameraController : UPlayerController
{
    uint8 bShowSelectedInfo;
    uint8 bIsFrozenRendering;
    uint8 bIsOrbitingSelectedActor;
    uint8 bOrbitPivotUseCenter;
    uint8 bEnableBufferVisualization;
    uint8 bEnableBufferVisualizationFullMode;
    uint8 bIsBufferVisualizationInputSetup;
    uint8 bLastDisplayEnabled;
    UDrawFrustumComponent* DrawFrustum;
    AActor* SelectedActor;
    UPrimitiveComponent* SelectedComponent;
    FHitResult SelectedHitPoint;
    APlayerController* OriginalControllerRef;
    UPlayer* OriginalPlayer;
    float SpeedScale;
    float InitialMaxSpeed;
    float InitialAccel;
    float InitialDecel;

    void ToggleDisplay();
    void ShowDebugSelectedInfo();
    void SetPawnMovementSpeedScale(float NewSpeedScale);
    void ReceiveOnDeactivate(UPlayerController* RestoredPC);
    void ReceiveOnActorSelected(AActor* NewSelectedActor, const FVector& SelectHitLocation, const FVector& SelectHitNormal, const FHitResult& Hit);
    void ReceiveOnActivate(UPlayerController* OriginalPC);
    AActor* GetSelectedActor();
}

class UDebugCameraControllerSettings : UDeveloperSettings
{
    TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes;
}

class ADebugCameraHUD : AHUD
{
}

class UDebugDrawService : UBlueprintFunctionLibrary
{
}

class ADecalActor : AActor
{
    UDecalComponent* Decal;

    void SetDecalMaterial(UMaterialInterface* NewDecalMaterial);
    UMaterialInterface* GetDecalMaterial();
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
}

class UDecalComponent : USceneComponent
{
    UMaterialInterface* DecalMaterial;
    int32 SortOrder;
    float FadeScreenSize;
    float FadeStartDelay;
    float FadeDuration;
    float FadeInDuration;
    float FadeInStartDelay;
    uint8 bDestroyOwnerAfterFade;
    FVector DecalSize;

    void SetSortOrder(int32 Value);
    void SetFadeScreenSize(float NewFadeScreenSize);
    void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);
    void SetFadeIn(float StartDelay, float Duaration);
    void SetDecalMaterial(UMaterialInterface* NewDecalMaterial);
    float GetFadeStartDelay();
    float GetFadeInStartDelay();
    float GetFadeInDuration();
    float GetFadeDuration();
    UMaterialInterface* GetDecalMaterial();
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
}

class ADefaultPawn : APawn
{
    float BaseTurnRate;
    float BaseLookUpRate;
    UPawnMovementComponent* MovementComponent;
    USphereComponent* CollisionComponent;
    UStaticMeshComponent* MeshComponent;
    uint8 bAddDefaultMovementBindings;

    void TurnAtRate(float Rate);
    void MoveUp_World(float Val);
    void MoveRight(float Val);
    void MoveForward(float Val);
    void LookUpAtRate(float Rate);
}

class APhysicsVolume : UVolume
{
    float TerminalVelocity;
    int32 Priority;
    float FluidFriction;
    uint8 bWaterVolume;
    uint8 bPhysicsOnContact;
}

class ADefaultPhysicsVolume : UPhysicsVolume
{
}

class UDemoNetConnection : UNetConnection
{
}

class UDemoNetDriver : UNetDriver
{
    TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors;
    float CheckpointSaveMaxMSPerFrame;
    TArray<FMulticastRecordOptions> MulticastRecordOptions;
    bool bIsLocalReplay;
    TArray<APlayerController*> SpectatorControllers;
}

class UPendingNetGame : UObject
{
    UNetDriver* NetDriver;
    UDemoNetDriver* DemoNetDriver;
}

class UDemoPendingNetGame : UPendingNetGame
{
}

class UDestructibleInterface : UInterface
{
}

class UTextureLODSettings : UObject
{
    TArray<FTextureLODGroup> TextureLODGroups;
}

class UDeviceProfile : UTextureLODSettings
{
    FString DeviceType;
    FString BaseProfileName;
    UObject* Parent;
    TArray<FString> CVars;
}

class UDeviceProfileManager : UObject
{
    TArray<UObject*> Profiles;
}

class UDialogueSoundWaveProxy : USoundBase
{
}

class UDialogueVoice : UObject
{
    TEnumAsByte<EGrammaticalGender::Type> Gender;
    TEnumAsByte<EGrammaticalNumber::Type> Plurality;
    FGuid LocalizationGUID;
}

class UDialogueWave : UObject
{
    uint8 bMature;
    uint8 bOverride_SubtitleOverride;
    FString SpokenText;
    FString SubtitleOverride;
    TArray<FDialogueContextMapping> ContextMappings;
    FGuid LocalizationGUID;
}

class ALight : AActor
{
    ULightComponent* LightComponent;
    uint8 bEnabled;

    void ToggleEnabled();
    void SetLightFunctionScale(FVector NewLightFunctionScale);
    void SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial);
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    void SetLightColor(FLinearColor NewLightColor);
    void SetEnabled(bool bSetEnabled);
    void SetCastShadows(bool bNewValue);
    void SetBrightness(float NewBrightness);
    void SetAffectTranslucentLighting(bool bNewValue);
    void OnRep_bEnabled();
    bool IsEnabled();
    FLinearColor GetLightColor();
    float GetBrightness();
}

class ADirectionalLight : ALight
{
}

class UDirectionalLightComponent : ULightComponent
{
    float ShadowCascadeBiasDistribution;
    uint8 bEnableLightShaftOcclusion;
    float OcclusionMaskDarkness;
    float OcclusionDepthRange;
    FVector LightShaftOverrideDirection;
    float WholeSceneDynamicShadowRadius;
    float DynamicShadowDistanceMovableLight;
    float DynamicShadowDistanceStationaryLight;
    int32 DynamicShadowCascades;
    float CascadeDistributionExponent;
    float CascadeTransitionFraction;
    float ShadowDistanceFadeoutFraction;
    uint8 bUseInsetShadowsForMovableObjects;
    int32 FarShadowCascadeCount;
    float FarShadowDistance;
    float DistanceFieldShadowDistance;
    float LightSourceAngle;
    float LightSourceSoftAngle;
    float TraceDistance;
    FLightmassDirectionalLightSettings LightmassSettings;
    uint8 bCastModulatedShadows;
    FColor ModulatedShadowColor;
    float ShadowAmount;
    uint8 bUsedAsAtmosphereSunLight;
    int32 AtmosphereSunLightIndex;

    void SetShadowDistanceFadeoutFraction(float NewValue);
    void SetShadowAmount(float NewValue);
    void SetOcclusionMaskDarkness(float NewValue);
    void SetLightShaftOverrideDirection(FVector NewValue);
    void SetEnableLightShaftOcclusion(bool bNewValue);
    void SetDynamicShadowDistanceStationaryLight(float NewValue);
    void SetDynamicShadowDistanceMovableLight(float NewValue);
    void SetDynamicShadowCascades(int32 NewValue);
    void SetCascadeTransitionFraction(float NewValue);
    void SetCascadeDistributionExponent(float NewValue);
}

class UDistribution : UObject
{
}

class UDistributionFloat : UDistribution
{
    uint8 bCanBeBaked;
    uint8 bBakedDataSuccesfully;
}

class UDistributionFloatConstant : UDistributionFloat
{
    float Constant;
}

class UDistributionFloatConstantCurve : UDistributionFloat
{
    FInterpCurveFloat ConstantCurve;
}

class UDistributionFloatParameterBase : UDistributionFloatConstant
{
    FName ParameterName;
    float MinInput;
    float MaxInput;
    float MinOutput;
    float MaxOutput;
    TEnumAsByte<DistributionParamMode> ParamMode;
}

class UDistributionFloatParticleParameter : UDistributionFloatParameterBase
{
}

class UDistributionFloatUniform : UDistributionFloat
{
    float Min;
    float Max;
}

class UDistributionFloatUniformCurve : UDistributionFloat
{
    FInterpCurveVector2D ConstantCurve;
}

class UDistributionVector : UDistribution
{
    uint8 bCanBeBaked;
    uint8 bIsDirty;
    uint8 bBakedDataSuccesfully;
}

class UDistributionVectorConstant : UDistributionVector
{
    FVector Constant;
    uint8 bLockAxes;
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
}

class UDistributionVectorConstantCurve : UDistributionVector
{
    FInterpCurveVector ConstantCurve;
    uint8 bLockAxes;
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
}

class UDistributionVectorParameterBase : UDistributionVectorConstant
{
    FName ParameterName;
    FVector MinInput;
    FVector MaxInput;
    FVector MinOutput;
    FVector MaxOutput;
    TEnumAsByte<DistributionParamMode> ParamModes;
}

class UDistributionVectorParticleParameter : UDistributionVectorParameterBase
{
}

class UDistributionVectorUniform : UDistributionVector
{
    FVector Max;
    FVector Min;
    uint8 bLockAxes;
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
    TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags;
    uint8 bUseExtremes;
}

class UDistributionVectorUniformCurve : UDistributionVector
{
    FInterpCurveTwoVectors ConstantCurve;
    uint8 bLockAxes1;
    uint8 bLockAxes2;
    TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;
    TEnumAsByte<EDistributionVectorMirrorFlags> MirrorFlags;
    uint8 bUseExtremes;
}

class ADocumentationActor : AActor
{
}

class UDrawFrustumComponent : UPrimitiveComponent
{
    FColor FrustumColor;
    float FrustumAngle;
    float FrustumAspectRatio;
    float FrustumStartDist;
    float FrustumEndDist;
    UTexture* Texture;
}

class UDrawSphereComponent : USphereComponent
{
}

class UEdGraph : UObject
{
    TSubclassOf<UEdGraphSchema> Schema;
    TArray<UEdGraphNode*> Nodes;
    uint8 bEditable;
    uint8 bAllowDeletion;
    uint8 bAllowRenaming;
}

class UGraphNodeContextMenuContext : UObject
{
    UBlueprint* Blueprint;
    UEdGraph* Graph;
    UEdGraphNode* Node;
    bool bIsDebugging;
}

class UEdGraphNode : UObject
{
    TArray<UEdGraphPin_Deprecated*> DeprecatedPins;
    int32 NodePosX;
    int32 NodePosY;
    int32 NodeWidth;
    int32 NodeHeight;
    TEnumAsByte<ENodeAdvancedPins::Type> AdvancedPinDisplay;
    ENodeEnabledState EnabledState;
    uint8 bDisplayAsDisabled;
    uint8 bUserSetEnabledState;
    uint8 bIsNodeEnabled;
    uint8 bHasCompilerMessage;
    FString NodeComment;
    int32 ErrorType;
    FString ErrorMsg;
    FGuid NodeGuid;
}

class UEdGraphNode_Documentation : UEdGraphNode
{
    FString Link;
    FString Excerpt;
}

class UEdGraphPin_Deprecated : UObject
{
    FString PinName;
    FString PinToolTip;
    TEnumAsByte<EEdGraphPinDirection> Direction;
    FEdGraphPinType PinType;
    FString DefaultValue;
    FString AutogeneratedDefaultValue;
    UObject* DefaultObject;
    FText DefaultTextValue;
    TArray<UEdGraphPin_Deprecated*> LinkedTo;
    TArray<UEdGraphPin_Deprecated*> SubPins;
    UEdGraphPin_Deprecated* ParentPin;
    UEdGraphPin_Deprecated* ReferencePassThroughConnection;
}

class UEdGraphSchema : UObject
{
}

class AEmitter : AActor
{
    UParticleSystemComponent* ParticleSystemComponent;
    uint8 bDestroyOnSystemFinish;
    uint8 bPostUpdateTickGroup;
    uint8 bCurrentlyActive;
    FEmitterOnParticleSpawn OnParticleSpawn;
    void ParticleSpawnSignature(FName EventName, float EmitterTime, FVector Location, FVector Velocity);
    FEmitterOnParticleBurst OnParticleBurst;
    void ParticleBurstSignature(FName EventName, float EmitterTime, int32 ParticleCount);
    FEmitterOnParticleDeath OnParticleDeath;
    void ParticleDeathSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction);
    FEmitterOnParticleCollide OnParticleCollide;
    void ParticleCollisionSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);

    void ToggleActive();
    void SetVectorParameter(FName ParameterName, FVector Param);
    void SetTemplate(UParticleSystem* NewTemplate);
    void SetMaterialParameter(FName ParameterName, UMaterialInterface* Param);
    void SetFloatParameter(FName ParameterName, float Param);
    void SetColorParameter(FName ParameterName, FLinearColor Param);
    void SetActorParameter(FName ParameterName, AActor* Param);
    void OnRep_bCurrentlyActive();
    void OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent);
    bool IsActive();
    void Deactivate();
    void Activate();
}

class AEmitterCameraLensEffectBase : AEmitter
{
    UParticleSystem* PS_CameraEffect;
    UParticleSystem* PS_CameraEffectNonExtremeContent;
    APlayerCameraManager* BaseCamera;
    FTransform RelativeTransform;
    float BaseFOV;
    uint8 bAllowMultipleInstances;
    uint8 bResetWhenRetriggered;
    TArray<TSubclassOf<AEmitterCameraLensEffectBase>> EmittersToTreatAsSame;
    float DistFromCamera;
}

class UViewModeUtils : UObject
{
}

class UEngineBaseTypes : UObject
{
}

class UEngineHandlerComponentFactory : UHandlerComponentFactory
{
}

class ULocalMessage : UObject
{
}

class UEngineMessage : ULocalMessage
{
    FString FailedPlaceMessage;
    FString MaxedOutMessage;
    FString EnteredMessage;
    FString LeftMessage;
    FString GlobalNameChange;
    FString SpecEnteredMessage;
    FString NewPlayerMessage;
    FString NewSpecMessage;
}

class UEngineTypes : UObject
{
}

class AExponentialHeightFog : AInfo
{
    UExponentialHeightFogComponent* Component;
    uint8 bEnabled;

    void OnRep_bEnabled();
}

class UExponentialHeightFogComponent : USceneComponent
{
    float FogDensity;
    float FogHeightFalloff;
    FExponentialHeightFogData SecondFogData;
    FLinearColor FogInscatteringColor;
    UTextureCube* InscatteringColorCubemap;
    float InscatteringColorCubemapAngle;
    FLinearColor InscatteringTextureTint;
    float FullyDirectionalInscatteringColorDistance;
    float NonDirectionalInscatteringColorDistance;
    float DirectionalInscatteringExponent;
    float DirectionalInscatteringStartDistance;
    FLinearColor DirectionalInscatteringColor;
    float FogMaxOpacity;
    float StartDistance;
    float FogCutoffDistance;
    bool bEnableVolumetricFog;
    float VolumetricFogScatteringDistribution;
    FColor VolumetricFogAlbedo;
    FLinearColor VolumetricFogEmissive;
    float VolumetricFogExtinctionScale;
    float VolumetricFogDistance;
    float VolumetricFogStaticLightingScatteringIntensity;
    bool bOverrideLightColorsWithFogInscatteringColors;

    void SetVolumetricFogScatteringDistribution(float NewValue);
    void SetVolumetricFogExtinctionScale(float NewValue);
    void SetVolumetricFogEmissive(FLinearColor NewValue);
    void SetVolumetricFogDistance(float NewValue);
    void SetVolumetricFogAlbedo(FColor NewValue);
    void SetVolumetricFog(bool bNewValue);
    void SetStartDistance(float Value);
    void SetNonDirectionalInscatteringColorDistance(float Value);
    void SetInscatteringTextureTint(FLinearColor Value);
    void SetInscatteringColorCubemapAngle(float Value);
    void SetInscatteringColorCubemap(UTextureCube* Value);
    void SetFullyDirectionalInscatteringColorDistance(float Value);
    void SetFogMaxOpacity(float Value);
    void SetFogInscatteringColor(FLinearColor Value);
    void SetFogHeightFalloff(float Value);
    void SetFogDensity(float Value);
    void SetFogCutoffDistance(float Value);
    void SetDirectionalInscatteringStartDistance(float Value);
    void SetDirectionalInscatteringExponent(float Value);
    void SetDirectionalInscatteringColor(FLinearColor Value);
}

class UExporter : UObject
{
    UClass* SupportedClass;
    UObject* ExportRootScope;
    TArray<FString> FormatExtension;
    TArray<FString> FormatDescription;
    int32 PreferredFormatIndex;
    int32 TextIndent;
    uint8 bText;
    uint8 bSelectedOnly;
    uint8 bForceFileOperations;
    UAssetExportTask* ExportTask;

    bool ScriptRunAssetExportTask(UAssetExportTask* Task);
    bool RunAssetExportTasks(const TArray<UAssetExportTask*>& ExportTasks);
    bool RunAssetExportTask(UAssetExportTask* Task);
}

class UFloatingPawnMovement : UPawnMovementComponent
{
    float MaxSpeed;
    float Acceleration;
    float Deceleration;
    float TurningBoost;
    uint8 bPositionCorrected;
}

class UFont : UObject
{
    EFontCacheType FontCacheType;
    TArray<FFontCharacter> Characters;
    TArray<UTexture2D*> Textures;
    int32 IsRemapped;
    float EmScale;
    float Ascent;
    float Descent;
    float Leading;
    int32 Kerning;
    FFontImportOptionsData ImportOptions;
    int32 NumCharacters;
    TArray<int32> MaxCharHeight;
    float ScalingFactor;
    int32 LegacyFontSize;
    FName LegacyFontName;
    FCompositeFont CompositeFont;
}

class UFontFace : UObject
{
    FString SourceFilename;
    EFontHinting Hinting;
    EFontLoadingPolicy LoadingPolicy;
    EFontLayoutMethod LayoutMethod;
}

class UFontImportOptions : UObject
{
    FFontImportOptionsData Data;
}

class UForceFeedbackAttenuation : UObject
{
    FForceFeedbackAttenuationSettings Attenuation;
}

class UForceFeedbackComponent : USceneComponent
{
    UForceFeedbackEffect* ForceFeedbackEffect;
    uint8 bAutoDestroy;
    uint8 bStopWhenOwnerDestroyed;
    uint8 bLooping;
    uint8 bIgnoreTimeDilation;
    uint8 bOverrideAttenuation;
    float IntensityMultiplier;
    UForceFeedbackAttenuation* AttenuationSettings;
    FForceFeedbackAttenuationSettings AttenuationOverrides;
    FForceFeedbackComponentOnForceFeedbackFinished OnForceFeedbackFinished;
    void OnForceFeedbackFinished(UForceFeedbackComponent* ForceFeedbackComponent);

    void Stop();
    void SetIntensityMultiplier(float NewIntensityMultiplier);
    void SetForceFeedbackEffect(UForceFeedbackEffect* NewForceFeedbackEffect);
    void Play(float StartTime);
    bool BP_GetAttenuationSettingsToApply(FForceFeedbackAttenuationSettings& OutAttenuationSettings);
    void AdjustAttenuation(const FForceFeedbackAttenuationSettings& InAttenuationSettings);
}

class UForceFeedbackEffect : UObject
{
    TArray<FForceFeedbackChannelDetails> ChannelDetails;
    float Duration;
}

class UGameEngine : UEngine
{
    float MaxDeltaTime;
    float ServerFlushLogInterval;
    UGameInstance* GameInstance;
}

class AGameNetworkManager : AInfo
{
    float BadPacketLossThreshold;
    float SeverePacketLossThreshold;
    int32 BadPingThreshold;
    int32 SeverePingThreshold;
    int32 AdjustedNetSpeed;
    float LastNetSpeedUpdateTime;
    int32 TotalNetBandwidth;
    int32 MinDynamicBandwidth;
    int32 MaxDynamicBandwidth;
    uint8 bIsStandbyCheckingEnabled;
    uint8 bHasStandbyCheatTriggered;
    float StandbyRxCheatTime;
    float StandbyTxCheatTime;
    float PercentMissingForRxStandby;
    float PercentMissingForTxStandby;
    float PercentForBadPing;
    float JoinInProgressStandbyWaitTime;
    float MoveRepSize;
    float MAXPOSITIONERRORSQUARED;
    float MAXNEARZEROVELOCITYSQUARED;
    float CLIENTADJUSTUPDATECOST;
    float MAXCLIENTUPDATEINTERVAL;
    float MaxClientForcedUpdateDuration;
    float ServerForcedUpdateHitchThreshold;
    float ServerForcedUpdateHitchCooldown;
    float MaxMoveDeltaTime;
    float MaxClientSmoothingDeltaTime;
    float ClientNetSendMoveDeltaTime;
    float ClientNetSendMoveDeltaTimeThrottled;
    float ClientNetSendMoveDeltaTimeStationary;
    int32 ClientNetSendMoveThrottleAtNetSpeed;
    int32 ClientNetSendMoveThrottleOverPlayerCount;
    bool ClientAuthorativePosition;
    float ClientErrorUpdateRateLimit;
    float ClientNetCamUpdateDeltaTime;
    float ClientNetCamUpdatePositionLimit;
    bool bMovementTimeDiscrepancyDetection;
    bool bMovementTimeDiscrepancyResolution;
    float MovementTimeDiscrepancyMaxTimeMargin;
    float MovementTimeDiscrepancyMinTimeMargin;
    float MovementTimeDiscrepancyResolutionRate;
    float MovementTimeDiscrepancyDriftAllowance;
    bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution;
    bool bUseDistanceBasedRelevancy;
}

class UGameplayStatics : UBlueprintFunctionLibrary
{

    void UnloadStreamLevel(const UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);
    bool SuggestProjectileVelocity_CustomArc(const UObject* WorldContextObject, FVector& OutLaunchVelocity, FVector StartPos, FVector EndPos, float OverrideGravityZ, float ArcParam);
    UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, uint8 LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    UAudioComponent* SpawnSoundAtLocation(const UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    UAudioComponent* SpawnSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    UObject* SpawnObject(TSubclassOf<UObject> objectClass, UObject* Outer);
    UForceFeedbackComponent* SpawnForceFeedbackAttached(UForceFeedbackEffect* ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, uint8 LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    UForceFeedbackComponent* SpawnForceFeedbackAtLocation(const UObject* WorldContextObject, UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
    UParticleSystemComponent* SpawnEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, uint8 LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);
    UParticleSystemComponent* SpawnEmitterAtLocation(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem);
    UAudioComponent* SpawnDialogueAttached(UDialogueWave* Dialogue, const FDialogueContext& Context, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, uint8 LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
    UAudioComponent* SpawnDialogueAtLocation(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
    UAudioComponent* SpawnDialogue2D(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);
    UDecalComponent* SpawnDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, uint8 LocationType, float LifeSpan);
    UDecalComponent* SpawnDecalAtLocation(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);
    void SetWorldOriginLocation(const UObject* WorldContextObject, FIntVector NewLocation);
    void SetViewportMouseCaptureMode(const UObject* WorldContextObject, const EMouseCaptureMode MouseCaptureMode);
    void SetSubtitlesEnabled(bool bEnabled);
    void SetSoundMixClassOverride(const UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);
    void SetSoundClassDistanceScale(const UObject* WorldContextObject, USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec);
    void SetPlayerControllerID(UPlayerController* Player, int32 ControllerId);
    void SetMaxAudioChannelsScaled(const UObject* WorldContextObject, float MaxChannelCountScale);
    void SetGlobalTimeDilation(const UObject* WorldContextObject, float TimeDilation);
    void SetGlobalPitchModulation(const UObject* WorldContextObject, float PitchModulation, float TimeSec);
    void SetGlobalListenerFocusParameters(const UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);
    bool SetGamePaused(const UObject* WorldContextObject, bool bPaused);
    void SetForceDisableSplitscreen(const UObject* WorldContextObject, bool bDisable);
    void SetEnableWorldRendering(const UObject* WorldContextObject, bool bEnable);
    void SetBaseSoundMix(const UObject* WorldContextObject, USoundMix* InSoundMix);
    bool SaveGameToSlot(USaveGame* SaveGameObject, FString slotName, const int32 UserIndex);
    void RemovePlayer(UPlayerController* Player, bool bDestroyPawn);
    FVector RebaseZeroOriginOntoLocal(UObject* WorldContextObject, FVector WorldLocation);
    FVector RebaseLocalOriginOntoZero(UObject* WorldContextObject, FVector WorldLocation);
    void PushSoundMixModifier(const UObject* WorldContextObject, USoundMix* InSoundMixModifier);
    bool ProjectWorldToScreen(UPlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    void PrimeSound(USoundBase* InSound);
    void PopSoundMixModifier(const UObject* WorldContextObject, USoundMix* InSoundMixModifier);
    void PlayWorldCameraShake(const UObject* WorldContextObject, TSubclassOf<UCameraShake> Shake, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
    void PlaySoundAtLocation(const UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, AActor* owningActor);
    void PlaySound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* owningActor);
    void PlayDialogueAtLocation(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings);
    void PlayDialogue2D(const UObject* WorldContextObject, UDialogueWave* Dialogue, const FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
    FString ParseOption(FString options, FString Key);
    void OpenLevel(const UObject* WorldContextObject, FName LevelName, bool bAbsolute, FString options);
    FHitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, FVector Location, FVector ImpactPoint, FVector Normal, FVector ImpactNormal, UPhysicalMaterial* PhysMat, AActor* HitActor, UPrimitiveComponent* HitComponent, FName HitBoneName, int32 HitItem, int32 FaceIndex, FVector TraceStart, FVector TraceEnd);
    void LoadStreamLevel(const UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo);
    USaveGame* LoadGameFromSlot(FString slotName, const int32 UserIndex);
    bool IsSplitscreenForceDisabled(const UObject* WorldContextObject);
    bool IsGamePaused(const UObject* WorldContextObject);
    bool HasOption(FString options, FString InKey);
    bool HasLaunchOption(FString OptionToCheck);
    int32 GrassOverlappingSphereCount(const UObject* WorldContextObject, const UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    FIntVector GetWorldOriginLocation(const UObject* WorldContextObject);
    float GetWorldDeltaSeconds(const UObject* WorldContextObject);
    void GetViewProjectionMatrix(FMinimalViewInfo DesiredView, FMatrix& ViewMatrix, FMatrix& ProjectionMatrix, FMatrix& ViewProjectionMatrix);
    EMouseCaptureMode GetViewportMouseCaptureMode(const UObject* WorldContextObject);
    float GetUnpausedTimeSeconds(const UObject* WorldContextObject);
    float GetTimeSeconds(const UObject* WorldContextObject);
    TEnumAsByte<EPhysicalSurface> GetSurfaceType(const FHitResult& Hit);
    ULevelStreaming* GetStreamingLevel(const UObject* WorldContextObject, FName PackageName);
    float GetRealTimeSeconds(const UObject* WorldContextObject);
    APawn* GetPlayerPawn(const UObject* WorldContextObject, int32 PlayerIndex);
    int32 GetPlayerControllerID(UPlayerController* Player);
    APlayerController* GetPlayerControllerFromID(const UObject* WorldContextObject, int32 ControllerId);
    APlayerController* GetPlayerController(const UObject* WorldContextObject, int32 PlayerIndex);
    ACharacter* GetPlayerCharacter(const UObject* WorldContextObject, int32 PlayerIndex);
    APlayerCameraManager* GetPlayerCameraManager(const UObject* WorldContextObject, int32 PlayerIndex);
    FString GetPlatformName();
    UClass* GetObjectClass(const UObject* Object);
    int32 GetMaxAudioChannelCount(const UObject* WorldContextObject);
    void GetKeyValue(FString Pair, FString& Key, FString& Value);
    int32 GetIntOption(FString options, FString Key, int32 DefaultValue);
    float GetGlobalTimeDilation(const UObject* WorldContextObject);
    AGameStateBase* GetGameState(const UObject* WorldContextObject);
    AGameModeBase* GetGameMode(const UObject* WorldContextObject);
    UGameInstance* GetGameInstance(const UObject* WorldContextObject);
    bool GetEnableWorldRendering(const UObject* WorldContextObject);
    UReverbEffect* GetCurrentReverbEffect(const UObject* WorldContextObject);
    FString GetCurrentLevelName(const UObject* WorldContextObject, bool bRemovePrefixString);
    bool GetClosestListenerLocation(const UObject* WorldContextObject, const FVector& Location, float MaximumRange, const bool bAllowAttenuationOverride, FVector& ListenerPosition);
    float GetAudioTimeSeconds(const UObject* WorldContextObject);
    void GetAllActorsWithTag(const UObject* WorldContextObject, FName Tag, TArray<AActor*>& OutActors);
    void GetAllActorsWithInterface(const UObject* WorldContextObject, TSubclassOf<UInterface> Interface, TArray<AActor*>& OutActors);
    void GetAllActorsOfClassWithTag(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, FName Tag, TArray<AActor*>& OutActors);
    void GetAllActorsOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    AActor* GetActorOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass);
    void GetActorArrayBounds(const TArray<AActor*>& Actors, bool bOnlyCollidingComponents, FVector& Center, FVector& BoxExtent);
    FVector GetActorArrayAverageLocation(const TArray<AActor*>& Actors);
    void GetAccurateRealTime(const UObject* WorldContextObject, int32& Seconds, float& PartialSeconds);
    void FlushLevelStreaming(const UObject* WorldContextObject);
    AActor* FinishSpawningActor(AActor* Actor, const FTransform& SpawnTransform);
    bool FindCollisionUV(const FHitResult& Hit, int32 UVChannel, FVector2D& UV);
    void EnableLiveStreaming(bool Enable);
    bool DoesSaveGameExist(FString slotName, const int32 UserIndex);
    bool DeprojectScreenToWorld(UPlayerController* Player, const FVector2D& ScreenPosition, FVector& WorldPosition, FVector& WorldDirection);
    bool DeleteGameInSlot(FString slotName, const int32 UserIndex);
    void DeactivateReverbEffect(const UObject* WorldContextObject, FName TagName);
    UAudioComponent* CreateSound2D(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    USaveGame* CreateSaveGameObject(TSubclassOf<USaveGame> SaveGameClass);
    APlayerController* CreatePlayer(const UObject* WorldContextObject, int32 ControllerId, bool bSpawnPlayerController);
    void ClearSoundMixModifiers(const UObject* WorldContextObject);
    void ClearSoundMixClassOverride(const UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float FadeOutTime);
    void CancelAsyncLoading();
    void BreakHitResult(const FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, UPhysicalMaterial*& PhysMat, AActor*& HitActor, UPrimitiveComponent*& HitComponent, FName& HitBoneName, int32& HitItem, int32& FaceIndex, FVector& TraceStart, FVector& TraceEnd);
    bool BlueprintSuggestProjectileVelocity(const UObject* WorldContextObject, FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, uint8 TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);
    bool Blueprint_PredictProjectilePath_ByTraceChannel(const UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, uint8 TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
    bool Blueprint_PredictProjectilePath_ByObjectType(const UObject* WorldContextObject, FHitResult& OutHit, TArray<FVector>& OutPathPositions, FVector& OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, const TArray<uint8>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
    bool Blueprint_PredictProjectilePath_Advanced(const UObject* WorldContextObject, const FPredictProjectilePathParams& PredictParams, FPredictProjectilePathResult& PredictResult);
    AActor* BeginSpawningActorFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, bool bNoCollisionFail, AActor* Owner);
    AActor* BeginSpawningActorFromBlueprint(const UObject* WorldContextObject, const UBlueprint* Blueprint, const FTransform& SpawnTransform, bool bNoCollisionFail);
    AActor* BeginDeferredActorSpawnFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner);
    bool AreSubtitlesEnabled();
    bool AreAnyListenersWithinRange(const UObject* WorldContextObject, const FVector& Location, float MaximumRange);
    bool ApplyRadialDamageWithFalloff(const UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, uint8 DamagePreventionChannel);
    bool ApplyRadialDamage(const UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float DamageRadius, TSubclassOf<UDamageType> DamageTypeClass, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, uint8 DamagePreventionChannel);
    float ApplyPointDamage(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    float ApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    void ActivateReverbEffect(const UObject* WorldContextObject, UReverbEffect* ReverbEffect, FName TagName, float Priority, float Volume, float FadeTime);
}

class ASpotLight : ALight
{
    USpotLightComponent* SpotLightComponent;

    void SetOuterConeAngle(float NewOuterConeAngle);
    void SetInnerConeAngle(float NewInnerConeAngle);
}

class AGeneratedMeshAreaLight : USpotLight
{
}

class UHapticFeedbackEffect_Base : UObject
{
}

class UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base
{
    TArray<uint8> Amplitudes;
    int32 SampleRate;
}

class UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base
{
    FHapticFeedbackDetails_Curve HapticDetails;
}

class UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base
{
    USoundWave* SoundWave;
}

class UHealthSnapshotBlueprintLibrary : UBlueprintFunctionLibrary
{

    void StopPerformanceSnapshots();
    void StartPerformanceSnapshots();
    void LogPerformanceSnapshot(const FString SnapshotTitle, bool bResetStats);
}

class UHLODProxy : UObject
{
    TArray<FHLODProxyMesh> ProxyMeshes;
}

class UImportanceSamplingLibrary : UBlueprintFunctionLibrary
{

    float RandomSobolFloat(int32 Index, int32 Dimension, float Seed);
    FVector RandomSobolCell3D(int32 Index, int32 NumCells, FVector Cell, FVector Seed);
    FVector2D RandomSobolCell2D(int32 Index, int32 NumCells, FVector2D Cell, FVector2D Seed);
    float NextSobolFloat(int32 Index, int32 Dimension, float PreviousValue);
    FVector NextSobolCell3D(int32 Index, int32 NumCells, FVector PreviousValue);
    FVector2D NextSobolCell2D(int32 Index, int32 NumCells, FVector2D PreviousValue);
    FImportanceTexture MakeImportanceTexture(UTexture2D* Texture, uint8 WeightingFunc);
    void ImportanceSample(const FImportanceTexture& Texture, const FVector2D& Rand, int32 Samples, float Intensity, FVector2D& SamplePosition, FLinearColor& SampleColor, float& SampleIntensity, float& SampleSize);
    void BreakImportanceTexture(const FImportanceTexture& ImportanceTexture, UTexture2D*& Texture, uint8& WeightingFunc);
}

class UImportantToggleSettingInterface : UInterface
{
}

class UInGameAdManager : UPlatformInterfaceBase
{
    uint8 bShouldPauseWhileAdOpen;
    TArray<FInGameAdManagerClickedBannerDelegates> ClickedBannerDelegates;
    TArray<FInGameAdManagerClosedAdDelegates> ClosedAdDelegates;
}

class UInheritableComponentHandler : UObject
{
    TArray<FComponentOverrideRecord> Records;
    TArray<UActorComponent*> UnnecessaryComponents;
}

class UInputDelegateBinding : UDynamicBlueprintBinding
{
}

class UInputActionDelegateBinding : UInputDelegateBinding
{
    TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings;
}

class UInputAxisDelegateBinding : UInputDelegateBinding
{
    TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings;
}

class UInputAxisKeyDelegateBinding : UInputDelegateBinding
{
    TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings;
}

class UInputComponent : UActorComponent
{
    TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo;

    bool WasControllerKeyJustReleased(FKey Key);
    bool WasControllerKeyJustPressed(FKey Key);
    bool IsControllerKeyDown(FKey Key);
    void GetTouchState(int32 FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed);
    FVector GetControllerVectorKeyState(FKey Key);
    void GetControllerMouseDelta(float& DeltaX, float& DeltaY);
    float GetControllerKeyTimeDown(FKey Key);
    void GetControllerAnalogStickState(uint8 WhichStick, float& StickX, float& StickY);
    float GetControllerAnalogKeyState(FKey Key);
}

class UInputKeyDelegateBinding : UInputDelegateBinding
{
    TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings;
}

class UInputSettings : UObject
{
    TArray<FInputAxisConfigEntry> AxisConfig;
    uint8 bAltEnterTogglesFullscreen;
    uint8 bF11TogglesFullscreen;
    uint8 bUseMouseForTouch;
    uint8 bEnableMouseSmoothing;
    uint8 bEnableFOVScaling;
    uint8 bCaptureMouseOnLaunch;
    uint8 bDefaultViewportMouseLock;
    uint8 bAlwaysShowTouchInterface;
    uint8 bShowConsoleOnFourFingerTap;
    uint8 bEnableGestureRecognizer;
    bool bUseAutocorrect;
    TArray<FString> ExcludedAutocorrectOS;
    TArray<FString> ExcludedAutocorrectCultures;
    TArray<FString> ExcludedAutocorrectDeviceModels;
    EMouseCaptureMode DefaultViewportMouseCaptureMode;
    EMouseLockMode DefaultViewportMouseLockMode;
    float FOVScale;
    float DoubleClickTime;
    TArray<FInputActionKeyMapping> ActionMappings;
    TArray<FInputAxisKeyMapping> AxisMappings;
    TArray<FInputActionSpeechMapping> SpeechMappings;
    FSoftObjectPath DefaultTouchInterface;
    FKey ConsoleKey;
    TArray<FKey> ConsoleKeys;

    void SaveKeyMappings();
    void RemoveAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    void RemoveActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    UInputSettings* GetInputSettings();
    void GetAxisNames(TArray<FName>& AxisNames);
    void GetAxisMappingByName(const FName InAxisName, TArray<FInputAxisKeyMapping>& OutMappings);
    void GetActionNames(TArray<FName>& ActionNames);
    void GetActionMappingByName(const FName InActionName, TArray<FInputActionKeyMapping>& OutMappings);
    void ForceRebuildKeymaps();
    void AddAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    void AddActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
}

class UInputTouchDelegateBinding : UInputDelegateBinding
{
    TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings;
}

class UInputVectorAxisDelegateBinding : UInputAxisKeyDelegateBinding
{
}

class UInterface_AssetUserData : UInterface
{
}

class UInterface_CollisionDataProvider : UInterface
{
}

class UInterface_PostProcessVolume : UInterface
{
}

class UInterface_PreviewMeshProvider : UInterface
{
}

class UInterpCurveEdSetup : UObject
{
    TArray<FCurveEdTab> Tabs;
    int32 ActiveTab;
}

class UInterpData : UObject
{
    float InterpLength;
    float PathBuildTime;
    TArray<UInterpGroup*> InterpGroups;
    UInterpCurveEdSetup* CurveEdSetup;
    float EdSectionStart;
    float EdSectionEnd;
    uint8 bShouldBakeAndPrune;
    UInterpGroupDirector* CachedDirectorGroup;
    TArray<FName> AllEventNames;
}

class UInterpFilter : UObject
{
    FString Caption;
}

class UInterpFilter_Classes : UInterpFilter
{
}

class UInterpFilter_Custom : UInterpFilter
{
}

class UInterpGroup : UObject
{
    TArray<UInterpTrack*> InterpTracks;
    FName GroupName;
    FColor GroupColor;
    uint8 bCollapsed;
    uint8 bVisible;
    uint8 bIsFolder;
    uint8 bIsParented;
    uint8 bIsSelected;
}

class UInterpGroupCamera : UInterpGroup
{
    UCameraAnim* CameraAnimInst;
    float CompressTolerance;
}

class UInterpGroupDirector : UInterpGroup
{
}

class UInterpGroupInst : UObject
{
    UInterpGroup* Group;
    AActor* GroupActor;
    TArray<UInterpTrackInst*> TrackInst;
}

class UInterpGroupInstCamera : UInterpGroupInst
{
}

class UInterpGroupInstDirector : UInterpGroupInst
{
}

class UInterpToMovementComponent : UMovementComponent
{
    float Duration;
    uint8 bPauseOnImpact;
    bool bSweep;
    ETeleportType TeleportType;
    EInterpToBehaviourType BehaviourType;
    bool bCheckIfStillInWorld;
    uint8 bForceSubStepping;
    FInterpToMovementComponentOnInterpToReverse OnInterpToReverse;
    void OnInterpToReverseDelegate(const FHitResult& ImpactResult, float Time);
    FInterpToMovementComponentOnInterpToStop OnInterpToStop;
    void OnInterpToStopDelegate(const FHitResult& ImpactResult, float Time);
    FInterpToMovementComponentOnWaitBeginDelegate OnWaitBeginDelegate;
    void OnInterpToWaitBeginDelegate(const FHitResult& ImpactResult, float Time);
    FInterpToMovementComponentOnWaitEndDelegate OnWaitEndDelegate;
    void OnInterpToWaitEndDelegate(const FHitResult& ImpactResult, float Time);
    FInterpToMovementComponentOnResetDelegate OnResetDelegate;
    void OnInterpToResetDelegate(const FHitResult& ImpactResult, float Time);
    float MaxSimulationTimeStep;
    int32 MaxSimulationIterations;
    TArray<FInterpControlPoint> ControlPoints;

    void StopSimulating(const FHitResult& HitResult);
    void RestartMovement(float InitialDirection);
    void OnInterpToWaitEndDelegate__DelegateSignature(const FHitResult& ImpactResult, float Time);
    void OnInterpToWaitBeginDelegate__DelegateSignature(const FHitResult& ImpactResult, float Time);
    void OnInterpToStopDelegate__DelegateSignature(const FHitResult& ImpactResult, float Time);
    void OnInterpToReverseDelegate__DelegateSignature(const FHitResult& ImpactResult, float Time);
    void OnInterpToResetDelegate__DelegateSignature(const FHitResult& ImpactResult, float Time);
    void FinaliseControlPoints();
}

class UInterpTrack : UObject
{
    TArray<UInterpTrack*> SubTracks;
    TSubclassOf<UInterpTrackInst> TrackInstClass;
    TEnumAsByte<ETrackActiveCondition> ActiveCondition;
    FString TrackTitle;
    uint8 bOnePerGroup;
    uint8 bDirGroupOnly;
    uint8 bDisableTrack;
    uint8 bIsSelected;
    uint8 bIsAnimControlTrack;
    uint8 bSubTrackOnly;
    uint8 bVisible;
    uint8 bIsRecording;
}

class UInterpTrackFloatBase : UInterpTrack
{
    FInterpCurveFloat FloatTrack;
    float CurveTension;
}

class UInterpTrackAnimControl : UInterpTrackFloatBase
{
    FName slotName;
    TArray<FAnimControlTrackKey> AnimSeqs;
    uint8 bSkipAnimNotifiers;
}

class UInterpTrackVectorBase : UInterpTrack
{
    FInterpCurveVector VectorTrack;
    float CurveTension;
}

class UInterpTrackAudioMaster : UInterpTrackVectorBase
{
}

class UInterpTrackBoolProp : UInterpTrack
{
    TArray<FBoolTrackKey> BoolTrack;
    FName PropertyName;
}

class UInterpTrackColorProp : UInterpTrackVectorBase
{
    FName PropertyName;
}

class UInterpTrackColorScale : UInterpTrackVectorBase
{
}

class UInterpTrackDirector : UInterpTrack
{
    TArray<FDirectorTrackCut> CutTrack;
    uint8 bSimulateCameraCutsOnClients;
}

class UInterpTrackEvent : UInterpTrack
{
    TArray<FEventTrackKey> EventTrack;
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
    uint8 bFireEventsWhenJumpingForwards;
    uint8 bUseCustomEventName;
}

class UInterpTrackFade : UInterpTrackFloatBase
{
    uint8 bPersistFade;
    uint8 bFadeAudio;
    FLinearColor FadeColor;
}

class UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase
{
    UClass* AnimBlueprintClass;
    TSubclassOf<UAnimInstance> AnimClass;
    FName ParamName;
}

class UInterpTrackFloatMaterialParam : UInterpTrackFloatBase
{
    TArray<UMaterialInterface*> TargetMaterials;
    FName ParamName;
}

class UInterpTrackFloatParticleParam : UInterpTrackFloatBase
{
    FName ParamName;
}

class UInterpTrackFloatProp : UInterpTrackFloatBase
{
    FName PropertyName;
}

class UInterpTrackInst : UObject
{
}

class UInterpTrackInstAnimControl : UInterpTrackInst
{
    float LastUpdatePosition;
}

class UInterpTrackInstAudioMaster : UInterpTrackInst
{
}

class UInterpTrackInstProperty : UInterpTrackInst
{
    TFieldPath<FNone> InterpProperty;
    UObject* PropertyOuterObjectInst;
}

class UInterpTrackInstBoolProp : UInterpTrackInstProperty
{
    bool ResetBool;
}

class UInterpTrackInstColorProp : UInterpTrackInstProperty
{
    FColor ResetColor;
}

class UInterpTrackInstColorScale : UInterpTrackInst
{
}

class UInterpTrackInstDirector : UInterpTrackInst
{
    AActor* OldViewTarget;
}

class UInterpTrackInstEvent : UInterpTrackInst
{
    float LastUpdatePosition;
}

class UInterpTrackInstFade : UInterpTrackInst
{
}

class UInterpTrackInstFloatAnimBPParam : UInterpTrackInst
{
    UAnimInstance* AnimScriptInstance;
    float ResetFloat;
}

class UInterpTrackInstFloatMaterialParam : UInterpTrackInst
{
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    TArray<float> ResetFloats;
    TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs;
    UInterpTrackFloatMaterialParam* InstancedTrack;
}

class UInterpTrackInstFloatParticleParam : UInterpTrackInst
{
    float ResetFloat;
}

class UInterpTrackInstFloatProp : UInterpTrackInstProperty
{
    float ResetFloat;
}

class UInterpTrackInstLinearColorProp : UInterpTrackInstProperty
{
    FLinearColor ResetColor;
}

class UInterpTrackInstMove : UInterpTrackInst
{
    FVector ResetLocation;
    FRotator ResetRotation;
}

class UInterpTrackInstParticleReplay : UInterpTrackInst
{
    float LastUpdatePosition;
}

class UInterpTrackInstSlomo : UInterpTrackInst
{
    float OldTimeDilation;
}

class UInterpTrackInstSound : UInterpTrackInst
{
    float LastUpdatePosition;
    UAudioComponent* PlayAudioComp;
}

class UInterpTrackInstToggle : UInterpTrackInst
{
    TEnumAsByte<ETrackToggleAction> Action;
    float LastUpdatePosition;
    uint8 bSavedActiveState;
}

class UInterpTrackInstVectorMaterialParam : UInterpTrackInst
{
    TArray<UMaterialInstanceDynamic*> MaterialInstances;
    TArray<FVector> ResetVectors;
    TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs;
    UInterpTrackVectorMaterialParam* InstancedTrack;
}

class UInterpTrackInstVectorProp : UInterpTrackInstProperty
{
    FVector ResetVector;
}

class UInterpTrackInstVisibility : UInterpTrackInst
{
    TEnumAsByte<EVisibilityTrackAction> Action;
    float LastUpdatePosition;
}

class UInterpTrackLinearColorBase : UInterpTrack
{
    FInterpCurveLinearColor LinearColorTrack;
    float CurveTension;
}

class UInterpTrackLinearColorProp : UInterpTrackLinearColorBase
{
    FName PropertyName;
}

class UInterpTrackMove : UInterpTrack
{
    FInterpCurveVector PosTrack;
    FInterpCurveVector EulerTrack;
    FInterpLookupTrack LookupTrack;
    FName LookAtGroupName;
    float LinCurveTension;
    float AngCurveTension;
    uint8 bUseQuatInterpolation;
    uint8 bShowArrowAtKeys;
    uint8 bDisableMovement;
    uint8 bShowTranslationOnCurveEd;
    uint8 bShowRotationOnCurveEd;
    uint8 bHide3DTrack;
    TEnumAsByte<EInterpTrackMoveRotMode> RotMode;
}

class UInterpTrackMoveAxis : UInterpTrackFloatBase
{
    TEnumAsByte<EInterpMoveAxis> MoveAxis;
    FInterpLookupTrack LookupTrack;
}

class UInterpTrackParticleReplay : UInterpTrack
{
    TArray<FParticleReplayTrackKey> TrackKeys;
}

class UInterpTrackSlomo : UInterpTrackFloatBase
{
}

class UInterpTrackSound : UInterpTrackVectorBase
{
    TArray<FSoundTrackKey> Sounds;
    uint8 bPlayOnReverse;
    uint8 bContinueSoundOnMatineeEnd;
    uint8 bSuppressSubtitles;
    uint8 bTreatAsDialogue;
    uint8 bAttach;
}

class UInterpTrackToggle : UInterpTrack
{
    TArray<FToggleTrackKey> ToggleTrack;
    uint8 bActivateSystemEachUpdate;
    uint8 bActivateWithJustAttachedFlag;
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
    uint8 bFireEventsWhenJumpingForwards;
}

class UInterpTrackVectorMaterialParam : UInterpTrackVectorBase
{
    TArray<UMaterialInterface*> TargetMaterials;
    FName ParamName;
}

class UInterpTrackVectorProp : UInterpTrackVectorBase
{
    FName PropertyName;
}

class UInterpTrackVisibility : UInterpTrack
{
    TArray<FVisibilityTrackKey> VisibilityTrack;
    uint8 bFireEventsWhenForwards;
    uint8 bFireEventsWhenBackwards;
    uint8 bFireEventsWhenJumpingForwards;
}

class UIntSerialization : UObject
{
    uint16 UnsignedInt16Variable;
    uint32 UnsignedInt32Variable;
    uint64 UnsignedInt64Variable;
    int8 SignedInt8Variable;
    int16 SignedInt16Variable;
    int64 SignedInt64Variable;
    uint8 UnsignedInt8Variable;
    int32 SignedInt32Variable;
}

class AKillZVolume : UPhysicsVolume
{
}

class UKismetGuidLibrary : UBlueprintFunctionLibrary
{

    void Parse_StringToGuid(FString GuidString, FGuid& OutGuid, bool& success);
    bool NotEqual_GuidGuid(const FGuid& A, const FGuid& B);
    FGuid NewGuid();
    bool IsValid_Guid(const FGuid& InGuid);
    void Invalidate_Guid(FGuid& InGuid);
    bool EqualEqual_GuidGuid(const FGuid& A, const FGuid& B);
    FString Conv_GuidToString(const FGuid& InGuid);
}

class UKismetInputLibrary : UBlueprintFunctionLibrary
{

    bool PointerEvent_IsTouchEvent(const FPointerEvent& Input);
    bool PointerEvent_IsMouseButtonDown(const FPointerEvent& Input, FKey MouseButton);
    float PointerEvent_GetWheelDelta(const FPointerEvent& Input);
    int32 PointerEvent_GetUserIndex(const FPointerEvent& Input);
    int32 PointerEvent_GetTouchpadIndex(const FPointerEvent& Input);
    FVector2D PointerEvent_GetScreenSpacePosition(const FPointerEvent& Input);
    int32 PointerEvent_GetPointerIndex(const FPointerEvent& Input);
    FVector2D PointerEvent_GetLastScreenSpacePosition(const FPointerEvent& Input);
    ESlateGesture PointerEvent_GetGestureType(const FPointerEvent& Input);
    FVector2D PointerEvent_GetGestureDelta(const FPointerEvent& Input);
    FKey PointerEvent_GetEffectingButton(const FPointerEvent& Input);
    FVector2D PointerEvent_GetCursorDelta(const FPointerEvent& Input);
    bool Key_IsVectorAxis(const FKey& Key);
    bool Key_IsValid(const FKey& Key);
    bool Key_IsMouseButton(const FKey& Key);
    bool Key_IsModifierKey(const FKey& Key);
    bool Key_IsKeyboardKey(const FKey& Key);
    bool Key_IsGamepadKey(const FKey& Key);
    bool Key_IsFloatAxis(const FKey& Key);
    EUINavigation Key_GetNavigationDirectionFromKey(const FKeyEvent& InKeyEvent);
    EUINavigation Key_GetNavigationDirectionFromAnalog(const FAnalogInputEvent& InAnalogEvent);
    EUINavigationAction Key_GetNavigationActionFromKey(const FKeyEvent& InKeyEvent);
    EUINavigationAction Key_GetNavigationAction(const FKey& InKey);
    FText Key_GetDisplayName(const FKey& Key);
    bool InputEvent_IsShiftDown(const FInputEvent& Input);
    bool InputEvent_IsRightShiftDown(const FInputEvent& Input);
    bool InputEvent_IsRightControlDown(const FInputEvent& Input);
    bool InputEvent_IsRightCommandDown(const FInputEvent& Input);
    bool InputEvent_IsRightAltDown(const FInputEvent& Input);
    bool InputEvent_IsRepeat(const FInputEvent& Input);
    bool InputEvent_IsLeftShiftDown(const FInputEvent& Input);
    bool InputEvent_IsLeftControlDown(const FInputEvent& Input);
    bool InputEvent_IsLeftCommandDown(const FInputEvent& Input);
    bool InputEvent_IsLeftAltDown(const FInputEvent& Input);
    bool InputEvent_IsControlDown(const FInputEvent& Input);
    bool InputEvent_IsCommandDown(const FInputEvent& Input);
    bool InputEvent_IsAltDown(const FInputEvent& Input);
    FText InputChord_GetDisplayName(const FInputChord& Key);
    int32 GetUserIndex(const FKeyEvent& Input);
    FKey GetKey(const FKeyEvent& Input);
    float GetAnalogValue(const FAnalogInputEvent& Input);
    bool EqualEqual_KeyKey(FKey A, FKey B);
    bool EqualEqual_InputChordInputChord(FInputChord A, FInputChord B);
    void CalibrateTilt();
}

class UKismetInternationalizationLibrary : UBlueprintFunctionLibrary
{

    bool SetCurrentLocale(FString Culture, const bool SaveToConfig);
    bool SetCurrentLanguageAndLocale(FString Culture, const bool SaveToConfig);
    bool SetCurrentLanguage(FString Culture, const bool SaveToConfig);
    bool SetCurrentCulture(FString Culture, const bool SaveToConfig);
    bool SetCurrentAssetGroupCulture(const FName AssetGroup, FString Culture, const bool SaveToConfig);
    FString GetSuitableCulture(const TArray<FString>& AvailableCultures, FString CultureToMatch, FString FallbackCulture);
    FString GetNativeCulture(const ELocalizedTextSourceCategory TextCategory);
    TArray<FString> GetLocalizedCultures(const bool IncludeGame, const bool IncludeEngine, const bool IncludeEditor, const bool IncludeAdditional);
    FString GetCurrentLocale();
    FString GetCurrentLanguage();
    FString GetCurrentCulture();
    FString GetCurrentAssetGroupCulture(const FName AssetGroup);
    FString GetCultureDisplayName(FString Culture, const bool Localized);
    void ClearCurrentAssetGroupCulture(const FName AssetGroup, const bool SaveToConfig);
}

class UKismetMaterialLibrary : UBlueprintFunctionLibrary
{

    void SetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, const FLinearColor& ParameterValue);
    void SetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, float ParameterValue);
    FLinearColor GetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName);
    float GetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName);
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance(UObject* WorldContextObject, UMaterialInterface* Parent, FName OptionalName);
}

class UKismetMathLibrary : UBlueprintFunctionLibrary
{

    int32 Xor_IntInt(int32 A, int32 B);
    int64 Xor_Int64Int64(int64 A, int64 B);
    FVector WeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float Weight);
    FRotator WeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float Weight);
    float WeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float Weight);
    float VSizeXYSquared(FVector A);
    float VSizeXY(FVector A);
    float VSizeSquared(FVector A);
    float VSize2DSquared(FVector2D A);
    float VSize2D(FVector2D A);
    float VSize(FVector A);
    FVector VLerp(FVector A, FVector B, float alpha);
    FVector VInterpTo_Constant(FVector current, FVector Target, float DeltaTime, float InterpSpeed);
    FVector VInterpTo(FVector current, FVector Target, float DeltaTime, float InterpSpeed);
    FVector VectorSpringInterp(FVector current, FVector Target, FVectorSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);
    FVector Vector_Zero();
    FVector Vector_Up();
    void Vector_UnwindEuler(FVector& A);
    FVector2D Vector_UnitCartesianToSpherical(FVector A);
    FVector Vector_ToRadians(FVector A);
    FVector Vector_ToDegrees(FVector A);
    FVector Vector_SnappedToGrid(FVector InVect, float InGridSize);
    void Vector_Set(FVector& A, float X, float Y, float Z);
    FVector Vector_Right();
    FVector Vector_Reciprocal(const FVector& A);
    FVector Vector_ProjectOnToNormal(FVector V, FVector InNormal);
    FVector Vector_One();
    FVector Vector_NormalUnsafe(const FVector& A);
    void Vector_Normalize(FVector& A, float Tolerance);
    FVector Vector_Normal2D(FVector A, float Tolerance);
    FVector Vector_MirrorByPlane(FVector A, const FPlane& InPlane);
    FVector Vector_Left();
    bool Vector_IsZero(const FVector& A);
    bool Vector_IsUnit(const FVector& A, float SquaredLenthTolerance);
    bool Vector_IsUniform(const FVector& A, float Tolerance);
    bool Vector_IsNormal(const FVector& A);
    bool Vector_IsNearlyZero(const FVector& A, float Tolerance);
    bool Vector_IsNAN(const FVector& A);
    float Vector_HeadingAngle(FVector A);
    FVector Vector_GetSignVector(FVector A);
    FVector Vector_GetProjection(FVector A);
    float Vector_GetAbsMin(FVector A);
    float Vector_GetAbsMax(FVector A);
    FVector Vector_GetAbs(FVector A);
    FVector Vector_Forward();
    FVector Vector_Down();
    float Vector_DistanceSquared(FVector v1, FVector v2);
    float Vector_Distance2DSquared(FVector v1, FVector v2);
    float Vector_Distance2D(FVector v1, FVector v2);
    float Vector_Distance(FVector v1, FVector v2);
    float Vector_CosineAngle2D(FVector A, FVector B);
    FVector Vector_ComponentMin(FVector A, FVector B);
    FVector Vector_ComponentMax(FVector A, FVector B);
    FVector Vector_ClampSizeMax2D(FVector A, float Max);
    FVector Vector_ClampSizeMax(FVector A, float Max);
    FVector Vector_ClampSize2D(FVector A, float Min, float Max);
    FVector Vector_BoundedToCube(FVector InVect, float InRadius);
    FVector Vector_BoundedToBox(FVector InVect, FVector InBoxMin, FVector InBoxMax);
    FVector Vector_Backward();
    void Vector_Assign(FVector& A, const FVector& InVector);
    void Vector_AddBounded(FVector& A, FVector InAddVect, float InRadius);
    FVector4 Vector4_Zero();
    float Vector4_SizeSquared3(const FVector4& A);
    float Vector4_SizeSquared(const FVector4& A);
    float Vector4_Size3(const FVector4& A);
    float Vector4_Size(const FVector4& A);
    void Vector4_Set(FVector4& A, float X, float Y, float Z, float W);
    FVector4 Vector4_NormalUnsafe3(const FVector4& A);
    void Vector4_Normalize3(FVector4& A, float Tolerance);
    FVector4 Vector4_Normal3(const FVector4& A, float Tolerance);
    FVector4 Vector4_Negated(const FVector4& A);
    FVector4 Vector4_MirrorByVector3(const FVector4& Direction, const FVector4& SurfaceNormal);
    bool Vector4_IsZero(const FVector4& A);
    bool Vector4_IsUnit3(const FVector4& A, float SquaredLenthTolerance);
    bool Vector4_IsNormal3(const FVector4& A);
    bool Vector4_IsNearlyZero3(const FVector4& A, float Tolerance);
    bool Vector4_IsNAN(const FVector4& A);
    float Vector4_DotProduct3(const FVector4& A, const FVector4& B);
    float Vector4_DotProduct(const FVector4& A, const FVector4& B);
    FVector4 Vector4_CrossProduct3(const FVector4& A, const FVector4& B);
    void Vector4_Assign(FVector4& A, const FVector4& InVector);
    FVector2D Vector2DInterpTo_Constant(FVector2D current, FVector2D Target, float DeltaTime, float InterpSpeed);
    FVector2D Vector2DInterpTo(FVector2D current, FVector2D Target, float DeltaTime, float InterpSpeed);
    FVector2D Vector2D_Zero();
    FVector2D Vector2D_Unit45Deg();
    FVector2D Vector2D_One();
    FVector VEase(FVector A, FVector B, float alpha, uint8 EasingFunc, float BlendExp, int32 Steps);
    FDateTime UtcNow();
    FVector4 TransformVector4(const FMatrix& Matrix, const FVector4& Vec4);
    FRotator TransformRotation(const FTransform& T, FRotator Rotation);
    FVector TransformLocation(const FTransform& T, FVector Location);
    FVector TransformDirection(const FTransform& T, FVector Direction);
    float Transform_Determinant(const FTransform& Transform);
    FVector2D ToSign2D(FVector2D A);
    FVector2D ToRounded2D(FVector2D A);
    void ToDirectionAndLength2D(FVector2D A, FVector2D& OutDir, float& OutLength);
    FDateTime Today();
    FTransform TLerp(const FTransform& A, const FTransform& B, float alpha, uint8 InterpMode);
    FTransform TInterpTo(const FTransform& current, const FTransform& Target, float DeltaTime, float InterpSpeed);
    FTimespan TimespanZeroValue();
    float TimespanRatio(FTimespan A, FTimespan B);
    FTimespan TimespanMinValue();
    FTimespan TimespanMaxValue();
    bool TimespanFromString(FString TimespanString, FTimespan& Result);
    FTransform TEase(const FTransform& A, const FTransform& B, float alpha, uint8 EasingFunc, float BlendExp, int32 Steps);
    float Tan(float A);
    FVector Subtract_VectorVector(FVector A, FVector B);
    FVector Subtract_VectorInt(FVector A, int32 B);
    FVector Subtract_VectorFloat(FVector A, float B);
    FVector4 Subtract_Vector4Vector4(const FVector4& A, const FVector4& B);
    FVector2D Subtract_Vector2DVector2D(FVector2D A, FVector2D B);
    FVector2D Subtract_Vector2DFloat(FVector2D A, float B);
    FTimespan Subtract_TimespanTimespan(FTimespan A, FTimespan B);
    FQuat Subtract_QuatQuat(const FQuat& A, const FQuat& B);
    FLinearColor Subtract_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    FIntPoint Subtract_IntPointIntPoint(FIntPoint A, FIntPoint B);
    FIntPoint Subtract_IntPointInt(FIntPoint A, int32 B);
    int32 Subtract_IntInt(int32 A, int32 B);
    int64 Subtract_Int64Int64(int64 A, int64 B);
    float Subtract_FloatFloat(float A, float B);
    FDateTime Subtract_DateTimeTimespan(FDateTime A, FTimespan B);
    FTimespan Subtract_DateTimeDateTime(FDateTime A, FDateTime B);
    uint8 Subtract_ByteByte(uint8 A, uint8 B);
    float Square(float A);
    float Sqrt(float A);
    FVector Spherical2DToUnitCartesian(FVector2D A);
    float Sin(float A);
    int64 SignOfInteger64(int64 A);
    int32 SignOfInteger(int32 A);
    float SignOfFloat(float A);
    void SetRandomStreamSeed(FRandomStream& Stream, int32 NewSeed);
    void Set2D(FVector2D& A, float X, float Y);
    FVector SelectVector(FVector A, FVector B, bool bPickA);
    FTransform SelectTransform(const FTransform& A, const FTransform& B, bool bPickA);
    FString SelectString(FString A, FString B, bool bPickA);
    FRotator SelectRotator(FRotator A, FRotator B, bool bPickA);
    UObject* SelectObject(UObject* A, UObject* B, bool bSelectA);
    int32 SelectInt(int32 A, int32 B, bool bPickA);
    float SelectFloat(float A, float B, bool bPickA);
    FLinearColor SelectColor(FLinearColor A, FLinearColor B, bool bPickA);
    UClass* SelectClass(TSubclassOf<UObject> A, TSubclassOf<UObject> B, bool bSelectA);
    void SeedRandomStream(FRandomStream& Stream);
    float SafeDivide(float A, float B);
    int64 Round64(float A);
    int32 Round(float A);
    FRotator RotatorFromAxisAndAngle(FVector Axis, float Angle);
    FVector RotateAngleAxis(FVector InVect, float AngleDeg, FVector Axis);
    FRotator RLerp(FRotator A, FRotator B, float alpha, bool bShortestPath);
    FRotator RInterpTo_Constant(FRotator current, FRotator Target, float DeltaTime, float InterpSpeed);
    FRotator RInterpTo(FRotator current, FRotator Target, float DeltaTime, float InterpSpeed);
    void RGBToHSV_Vector(FLinearColor RGB, FLinearColor& HSV);
    void RGBToHSV(FLinearColor InColor, float& H, float& S, float& V, float& A);
    FLinearColor RGBLinearToHSV(FLinearColor RGB);
    void ResetVectorSpringState(FVectorSpringState& SpringState);
    void ResetRandomStream(const FRandomStream& Stream);
    void ResetFloatSpringState(FFloatSpringState& SpringState);
    FRotator REase(FRotator A, FRotator B, float alpha, bool bShortestPath, uint8 EasingFunc, float BlendExp, int32 Steps);
    FVector RandomUnitVectorInEllipticalConeInRadiansFromStream(const FVector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, const FRandomStream& Stream);
    FVector RandomUnitVectorInEllipticalConeInRadians(FVector ConeDir, float MaxYawInRadians, float MaxPitchInRadians);
    FVector RandomUnitVectorInEllipticalConeInDegreesFromStream(const FVector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, const FRandomStream& Stream);
    FVector RandomUnitVectorInEllipticalConeInDegrees(FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);
    FVector RandomUnitVectorInConeInRadiansFromStream(const FVector& ConeDir, float ConeHalfAngleInRadians, const FRandomStream& Stream);
    FVector RandomUnitVectorInConeInRadians(FVector ConeDir, float ConeHalfAngleInRadians);
    FVector RandomUnitVectorInConeInDegreesFromStream(const FVector& ConeDir, float ConeHalfAngleInDegrees, const FRandomStream& Stream);
    FVector RandomUnitVectorInConeInDegrees(FVector ConeDir, float ConeHalfAngleInDegrees);
    FVector RandomUnitVectorFromStream(const FRandomStream& Stream);
    FVector RandomUnitVector();
    FRotator RandomRotatorFromStream(bool bRoll, const FRandomStream& Stream);
    FRotator RandomRotator(bool bRoll);
    FVector RandomPointInBoundingBox(FVector Origin, FVector BoxExtent);
    int32 RandomIntegerInRangeFromStream(int32 Min, int32 Max, const FRandomStream& Stream);
    int32 RandomIntegerInRange(int32 Min, int32 Max);
    int32 RandomIntegerFromStream(int32 Max, const FRandomStream& Stream);
    int64 RandomInteger64InRange(int64 Min, int64 Max);
    int64 RandomInteger64(int64 Max);
    int32 RandomInteger(int32 Max);
    float RandomFloatInRangeFromStream(float Min, float Max, const FRandomStream& Stream);
    float RandomFloatInRange(float Min, float Max);
    float RandomFloatFromStream(const FRandomStream& Stream);
    float RandomFloat();
    bool RandomBoolWithWeightFromStream(float Weight, const FRandomStream& RandomStream);
    bool RandomBoolWithWeight(float Weight);
    bool RandomBoolFromStream(const FRandomStream& Stream);
    bool RandomBool();
    float RadiansToDegrees(float A);
    FVector Quat_VectorUp(const FQuat& Q);
    FVector Quat_VectorRight(const FQuat& Q);
    FVector Quat_VectorForward(const FQuat& Q);
    FVector Quat_UnrotateVector(const FQuat& Q, const FVector& V);
    float Quat_SizeSquared(const FQuat& Q);
    float Quat_Size(const FQuat& Q);
    void Quat_SetFromEuler(FQuat& Q, const FVector& Euler);
    void Quat_SetComponents(FQuat& Q, float X, float Y, float Z, float W);
    FRotator Quat_Rotator(const FQuat& Q);
    FVector Quat_RotateVector(const FQuat& Q, const FVector& V);
    FQuat Quat_Normalized(const FQuat& Q, float Tolerance);
    void Quat_Normalize(FQuat& Q, float Tolerance);
    FQuat Quat_MakeFromEuler(const FVector& Euler);
    FQuat Quat_Log(const FQuat& Q);
    bool Quat_IsNormalized(const FQuat& Q);
    bool Quat_IsNonFinite(const FQuat& Q);
    bool Quat_IsIdentity(const FQuat& Q, float Tolerance);
    bool Quat_IsFinite(const FQuat& Q);
    FQuat Quat_Inversed(const FQuat& Q);
    FQuat Quat_Identity();
    FVector Quat_GetRotationAxis(const FQuat& Q);
    FVector Quat_GetAxisZ(const FQuat& Q);
    FVector Quat_GetAxisY(const FQuat& Q);
    FVector Quat_GetAxisX(const FQuat& Q);
    float Quat_GetAngle(const FQuat& Q);
    FQuat Quat_Exp(const FQuat& Q);
    FVector Quat_Euler(const FQuat& Q);
    void Quat_EnforceShortestArcWith(FQuat& A, const FQuat& B);
    float Quat_AngularDistance(const FQuat& A, const FQuat& B);
    FVector ProjectVectorOnToVector(FVector V, FVector Target);
    FVector ProjectVectorOnToPlane(FVector V, FVector PlaneNormal);
    FVector ProjectPointOnToPlane(FVector Point, FVector PlaneBase, FVector PlaneNormal);
    bool PointsAreCoplanar(const TArray<FVector>& Points, float Tolerance);
    float PerlinNoise1D(const float Value);
    int32 Percent_IntInt(int32 A, int32 B);
    float Percent_FloatFloat(float A, float B);
    uint8 Percent_ByteByte(uint8 A, uint8 B);
    int32 Or_IntInt(int32 A, int32 B);
    int64 Or_Int64Int64(int64 A, int64 B);
    FDateTime Now();
    bool NotEqualExactly_VectorVector(FVector A, FVector B);
    bool NotEqualExactly_Vector4Vector4(const FVector4& A, const FVector4& B);
    bool NotEqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);
    bool NotEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);
    bool NotEqual_Vector4Vector4(const FVector4& A, const FVector4& B, float ErrorTolerance);
    bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    bool NotEqual_TimespanTimespan(FTimespan A, FTimespan B);
    bool NotEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);
    bool NotEqual_QuatQuat(const FQuat& A, const FQuat& B, float ErrorTolerance);
    bool NotEqual_ObjectObject(UObject* A, UObject* B);
    bool NotEqual_NameName(FName A, FName B);
    bool NotEqual_MatrixMatrix(const FMatrix& A, const FMatrix& B, float Tolerance);
    bool NotEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    bool NotEqual_IntPointIntPoint(FIntPoint A, FIntPoint B);
    bool NotEqual_IntInt(int32 A, int32 B);
    bool NotEqual_Int64Int64(int64 A, int64 B);
    bool NotEqual_FloatFloat(float A, float B);
    bool NotEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    bool NotEqual_ClassClass(TSubclassOf<UObject> A, TSubclassOf<UObject> B);
    bool NotEqual_ByteByte(uint8 A, uint8 B);
    bool NotEqual_BoolBool(bool A, bool B);
    bool Not_PreBool(bool A);
    int64 Not_Int64(int64 A);
    int32 Not_Int(int32 A);
    FVector2D NormalSafe2D(FVector2D A, float Tolerance);
    float NormalizeToRange(float Value, float RangeMin, float RangeMax);
    FRotator NormalizedDeltaRotator(FRotator A, FRotator B);
    float NormalizeAxis(float Angle);
    void Normalize2D(FVector2D& A, float Tolerance);
    FVector2D Normal2D(FVector2D A);
    FVector Normal(FVector A, float Tolerance);
    FVector NegateVector(FVector A);
    FRotator NegateRotator(FRotator A);
    FVector2D Negated2D(const FVector2D& A);
    bool NearlyEqual_TransformTransform(const FTransform& A, const FTransform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);
    bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);
    float MultiplyMultiply_FloatFloat(float Base, float Exp);
    float MultiplyByPi(float Value);
    FVector Multiply_VectorVector(FVector A, FVector B);
    FVector Multiply_VectorInt(FVector A, int32 B);
    FVector Multiply_VectorFloat(FVector A, float B);
    FVector4 Multiply_Vector4Vector4(const FVector4& A, const FVector4& B);
    FVector2D Multiply_Vector2DVector2D(FVector2D A, FVector2D B);
    FVector2D Multiply_Vector2DFloat(FVector2D A, float B);
    FTimespan Multiply_TimespanFloat(FTimespan A, float Scalar);
    FRotator Multiply_RotatorInt(FRotator A, int32 B);
    FRotator Multiply_RotatorFloat(FRotator A, float B);
    FQuat Multiply_QuatQuat(const FQuat& A, const FQuat& B);
    FMatrix Multiply_MatrixMatrix(const FMatrix& A, const FMatrix& B);
    FMatrix Multiply_MatrixFloat(const FMatrix& A, float B);
    FLinearColor Multiply_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    FLinearColor Multiply_LinearColorFloat(FLinearColor A, float B);
    FIntPoint Multiply_IntPointIntPoint(FIntPoint A, FIntPoint B);
    FIntPoint Multiply_IntPointInt(FIntPoint A, int32 B);
    int32 Multiply_IntInt(int32 A, int32 B);
    float Multiply_IntFloat(int32 A, float B);
    int64 Multiply_Int64Int64(int64 A, int64 B);
    float Multiply_FloatFloat(float A, float B);
    uint8 Multiply_ByteByte(uint8 A, uint8 B);
    FVector MirrorVectorByNormal(FVector InVect, FVector InNormal);
    void MinOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMinValue, int32& MinValue);
    void MinOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMinValue, float& MinValue);
    void MinOfByteArray(const TArray<uint8>& ByteArray, int32& IndexOfMinValue, uint8& MinValue);
    int64 MinInt64(int64 A, int64 B);
    void MinimumAreaRectangle(UObject* WorldContextObject, const TArray<FVector>& InVerts, const FVector& SampleSurfaceNormal, FVector& OutRectCenter, FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw);
    int32 Min(int32 A, int32 B);
    void MaxOfIntArray(const TArray<int32>& IntArray, int32& IndexOfMaxValue, int32& MaxValue);
    void MaxOfFloatArray(const TArray<float>& FloatArray, int32& IndexOfMaxValue, float& MaxValue);
    void MaxOfByteArray(const TArray<uint8>& ByteArray, int32& IndexOfMaxValue, uint8& MaxValue);
    int64 MaxInt64(int64 A, int64 B);
    int32 Max(int32 A, int32 B);
    FVector4 Matrix_TransformVector4(const FMatrix& M, FVector4 V);
    FVector4 Matrix_TransformVector(const FMatrix& M, FVector V);
    FVector4 Matrix_TransformPosition(const FMatrix& M, FVector V);
    FQuat Matrix_ToQuat(const FMatrix& M);
    void Matrix_SetOrigin(FMatrix& M, FVector NewOrigin);
    void Matrix_SetColumn(FMatrix& M, uint8 Column, FVector Value);
    void Matrix_SetAxis(FMatrix& M, uint8 Axis, FVector AxisVector);
    FMatrix Matrix_ScaleTranslation(const FMatrix& M, FVector Scale3D);
    FMatrix Matrix_RemoveTranslation(const FMatrix& M);
    void Matrix_RemoveScaling(FMatrix& M, float Tolerance);
    FMatrix Matrix_Mirror(const FMatrix& M, uint8 MirrorAxis, uint8 FlipAxis);
    FVector Matrix_InverseTransformVector(const FMatrix& M, FVector V);
    FVector Matrix_InverseTransformPosition(const FMatrix& M, FVector V);
    FMatrix Matrix_Identity();
    FVector Matrix_GetUnitAxis(const FMatrix& M, uint8 Axis);
    void Matrix_GetUnitAxes(const FMatrix& M, FVector& X, FVector& Y, FVector& Z);
    FMatrix Matrix_GetTransposed(const FMatrix& M);
    FMatrix Matrix_GetTransposeAdjoint(const FMatrix& M);
    FVector Matrix_GetScaleVector(const FMatrix& M, float Tolerance);
    FVector Matrix_GetScaledAxis(const FMatrix& M, uint8 Axis);
    void Matrix_GetScaledAxes(const FMatrix& M, FVector& X, FVector& Y, FVector& Z);
    float Matrix_GetRotDeterminant(const FMatrix& M);
    FRotator Matrix_GetRotator(const FMatrix& M);
    FVector Matrix_GetOrigin(const FMatrix& InMatrix);
    float Matrix_GetMaximumAxisScale(const FMatrix& M);
    FMatrix Matrix_GetMatrixWithoutScale(const FMatrix& M, float Tolerance);
    FMatrix Matrix_GetInverse(const FMatrix& M);
    bool Matrix_GetFrustumTopPlane(const FMatrix& M, FPlane& OutPlane);
    bool Matrix_GetFrustumRightPlane(const FMatrix& M, FPlane& OutPlane);
    bool Matrix_GetFrustumNearPlane(const FMatrix& M, FPlane& OutPlane);
    bool Matrix_GetFrustumLeftPlane(const FMatrix& M, FPlane& OutPlane);
    bool Matrix_GetFrustumFarPlane(const FMatrix& M, FPlane& OutPlane);
    bool Matrix_GetFrustumBottomPlane(const FMatrix& M, FPlane& OutPlane);
    float Matrix_GetDeterminant(const FMatrix& M);
    FVector Matrix_GetColumn(const FMatrix& M, uint8 Column);
    bool Matrix_ContainsNaN(const FMatrix& M);
    FMatrix Matrix_ConcatenateTranslation(const FMatrix& M, FVector Translation);
    FMatrix Matrix_ApplyScale(const FMatrix& M, float Scale);
    float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    FVector4 MakeVector4(float X, float Y, float Z, float W);
    FVector2D MakeVector2D(float X, float Y);
    FVector MakeVector(float X, float Y, float Z);
    FTransform MakeTransform(FVector Location, FRotator Rotation, FVector Scale);
    FTimespan MakeTimespan2(int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 FractionNano);
    FTimespan MakeTimespan(int32 Days, int32 Hours, int32 Minutes, int32 Seconds, int32 Milliseconds);
    FRotator MakeRotFromZY(const FVector& Z, const FVector& Y);
    FRotator MakeRotFromZX(const FVector& Z, const FVector& X);
    FRotator MakeRotFromZ(const FVector& Z);
    FRotator MakeRotFromYZ(const FVector& Y, const FVector& Z);
    FRotator MakeRotFromYX(const FVector& Y, const FVector& X);
    FRotator MakeRotFromY(const FVector& Y);
    FRotator MakeRotFromXZ(const FVector& X, const FVector& Z);
    FRotator MakeRotFromXY(const FVector& X, const FVector& Y);
    FRotator MakeRotFromX(const FVector& X);
    FRotator MakeRotator(float Roll, float Pitch, float Yaw);
    FRotator MakeRotationFromAxes(FVector Forward, FVector Right, FVector Up);
    FTransform MakeRelativeTransform(const FTransform& A, const FTransform& RelativeTo);
    FRandomStream MakeRandomStream(int32 InitialSeed);
    FQualifiedFrameTime MakeQualifiedFrameTime(FFrameNumber Frame, FFrameRate FrameRate, float SubFrame);
    float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);
    FPlane MakePlaneFromPointAndNormal(FVector Point, FVector Normal);
    FFrameRate MakeFrameRate(int32 Numerator, int32 Denominator);
    FDateTime MakeDateTime(int32 Year, int32 Month, int32 Day, int32 Hour, int32 Minute, int32 Second, int32 Millisecond);
    FLinearColor MakeColor(float R, float G, float B, float A);
    FBox2D MakeBox2D(FVector2D Min, FVector2D Max);
    FBox MakeBox(FVector Min, FVector Max);
    float Loge(float A);
    float Log(float A, float Base);
    bool LinePlaneIntersection_OriginNormal(const FVector& LineStart, const FVector& LineEnd, FVector PlaneOrigin, FVector PlaneNormal, float& T, FVector& Intersection);
    bool LinePlaneIntersection(const FVector& LineStart, const FVector& LineEnd, const FPlane& APlane, float& T, FVector& Intersection);
    FLinearColor LinearColorLerpUsingHSV(FLinearColor A, FLinearColor B, float alpha);
    FLinearColor LinearColorLerp(FLinearColor A, FLinearColor B, float alpha);
    FLinearColor LinearColor_Yellow();
    FLinearColor LinearColor_White();
    FLinearColor LinearColor_Transparent();
    FColor LinearColor_ToRGBE(FLinearColor InLinearColor);
    FLinearColor LinearColor_ToNewOpacity(FLinearColor InColor, float InOpacity);
    void LinearColor_SetTemperature(FLinearColor& InOutColor, float InTemperature);
    void LinearColor_SetRGBA(FLinearColor& InOutColor, float R, float G, float B, float A);
    void LinearColor_SetRandomHue(FLinearColor& InOutColor);
    void LinearColor_SetFromSRGB(FLinearColor& InOutColor, const FColor& InSRGB);
    void LinearColor_SetFromPow22(FLinearColor& InOutColor, const FColor& InColor);
    void LinearColor_SetFromHSV(FLinearColor& InOutColor, float H, float S, float V, float A);
    void LinearColor_Set(FLinearColor& InOutColor, FLinearColor InColor);
    FLinearColor LinearColor_Red();
    FColor LinearColor_QuantizeRound(FLinearColor InColor);
    FColor LinearColor_Quantize(FLinearColor InColor);
    bool LinearColor_IsNearEqual(FLinearColor A, FLinearColor B, float Tolerance);
    FLinearColor LinearColor_Green();
    FLinearColor LinearColor_Gray();
    float LinearColor_GetMin(FLinearColor InColor);
    float LinearColor_GetMax(FLinearColor InColor);
    float LinearColor_GetLuminance(FLinearColor InColor);
    float LinearColor_Distance(FLinearColor C1, FLinearColor C2);
    FLinearColor LinearColor_Desaturated(FLinearColor InColor, float InDesaturation);
    FLinearColor LinearColor_Blue();
    FLinearColor LinearColor_Black();
    FVector LessLess_VectorRotator(FVector A, FRotator B);
    bool LessEqual_TimespanTimespan(FTimespan A, FTimespan B);
    bool LessEqual_IntInt(int32 A, int32 B);
    bool LessEqual_Int64Int64(int64 A, int64 B);
    bool LessEqual_FloatFloat(float A, float B);
    bool LessEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    bool LessEqual_ByteByte(uint8 A, uint8 B);
    bool Less_TimespanTimespan(FTimespan A, FTimespan B);
    bool Less_IntInt(int32 A, int32 B);
    bool Less_Int64Int64(int64 A, int64 B);
    bool Less_FloatFloat(float A, float B);
    bool Less_DateTimeDateTime(FDateTime A, FDateTime B);
    bool Less_ByteByte(uint8 A, uint8 B);
    float Lerp(float A, float B, float alpha);
    bool IsZero2D(const FVector2D& A);
    bool IsPointInBoxWithTransform(FVector Point, const FTransform& BoxWorldTransform, FVector BoxExtent);
    bool IsPointInBox(FVector Point, FVector BoxOrigin, FVector BoxExtent);
    bool IsNearlyZero2D(const FVector2D& A, float Tolerance);
    bool IsMorning(FDateTime A);
    bool IsLeapYear(int32 Year);
    bool IsAfternoon(FDateTime A);
    FTransform InvertTransform(const FTransform& T);
    FRotator InverseTransformRotation(const FTransform& T, FRotator Rotation);
    FVector InverseTransformLocation(const FTransform& T, FVector Location);
    FVector InverseTransformDirection(const FTransform& T, FVector Direction);
    FIntPoint IntPoint_Zero();
    FIntPoint IntPoint_Up();
    FIntPoint IntPoint_Right();
    FIntPoint IntPoint_One();
    FIntPoint IntPoint_Left();
    FIntPoint IntPoint_Down();
    bool InRange_IntInt(int32 Value, int32 Min, int32 Max, bool InclusiveMin, bool InclusiveMax);
    bool InRange_Int64Int64(int64 Value, int64 Min, int64 Max, bool InclusiveMin, bool InclusiveMax);
    bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);
    float Hypotenuse(float Width, float Height);
    FLinearColor HSVToRGBLinear(FLinearColor HSV);
    void HSVToRGB_Vector(FLinearColor HSV, FLinearColor& RGB);
    FLinearColor HSVToRGB(float H, float S, float V, float A);
    float GridSnap_Float(float Location, float GridSize);
    FVector GreaterGreater_VectorRotator(FVector A, FRotator B);
    bool GreaterEqual_TimespanTimespan(FTimespan A, FTimespan B);
    bool GreaterEqual_IntInt(int32 A, int32 B);
    bool GreaterEqual_Int64Int64(int64 A, int64 B);
    bool GreaterEqual_FloatFloat(float A, float B);
    bool GreaterEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    bool GreaterEqual_ByteByte(uint8 A, uint8 B);
    bool Greater_TimespanTimespan(FTimespan A, FTimespan B);
    bool Greater_IntInt(int32 A, int32 B);
    bool Greater_Int64Int64(int64 A, int64 B);
    bool Greater_FloatFloat(float A, float B);
    bool Greater_DateTimeDateTime(FDateTime A, FDateTime B);
    bool Greater_ByteByte(uint8 A, uint8 B);
    int32 GetYear(FDateTime A);
    void GetYawPitchFromVector(FVector InVec, float& Yaw, float& Pitch);
    FVector GetVectorArrayAverage(const TArray<FVector>& Vectors);
    FVector GetUpVector(FRotator InRot);
    float GetTotalSeconds(FTimespan A);
    float GetTotalMinutes(FTimespan A);
    float GetTotalMilliseconds(FTimespan A);
    float GetTotalHours(FTimespan A);
    float GetTotalDays(FTimespan A);
    FTimespan GetTimeOfDay(FDateTime A);
    float GetTAU();
    void GetSlopeDegreeAngles(const FVector& MyRightYAxis, const FVector& FloorNormal, const FVector& upVector, float& OutSlopePitchDegreeAngle, float& OutSlopeRollDegreeAngle);
    int32 GetSeconds(FTimespan A);
    int32 GetSecond(FDateTime A);
    FVector2D GetRotated2D(FVector2D A, float AngleDeg);
    FVector GetRightVector(FRotator InRot);
    FVector GetReflectionVector(FVector Direction, FVector SurfaceNormal);
    float GetPointDistanceToSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);
    float GetPointDistanceToLine(FVector Point, FVector LineOrigin, FVector LineDirection);
    float GetPI();
    int32 GetMonth(FDateTime A);
    int32 GetMinutes(FTimespan A);
    int32 GetMinute(FDateTime A);
    float GetMinElement(FVector A);
    float GetMin2D(FVector2D A);
    int32 GetMilliseconds(FTimespan A);
    int32 GetMillisecond(FDateTime A);
    float GetMaxElement(FVector A);
    float GetMax2D(FVector2D A);
    int32 GetHours(FTimespan A);
    int32 GetHour12(FDateTime A);
    int32 GetHour(FDateTime A);
    FVector GetForwardVector(FRotator InRot);
    FTimespan GetDuration(FTimespan A);
    FVector GetDirectionUnitVector(FVector From, FVector to);
    int32 GetDays(FTimespan A);
    int32 GetDayOfYear(FDateTime A);
    int32 GetDay(FDateTime A);
    FDateTime GetDate(FDateTime A);
    void GetAzimuthAndElevation(FVector InDirection, const FTransform& ReferenceFrame, float& azimuth, float& elevation);
    void GetAxes(FRotator A, FVector& X, FVector& Y, FVector& Z);
    float GetAbsMax2D(FVector2D A);
    FVector2D GetAbs2D(FVector2D A);
    FIntVector FTruncVector(const FVector& InVector);
    int64 FTrunc64(float A);
    int32 FTrunc(float A);
    FTimespan FromSeconds(float Seconds);
    FTimespan FromMinutes(float Minutes);
    FTimespan FromMilliseconds(float Milliseconds);
    FTimespan FromHours(float Hours);
    FTimespan FromDays(float Days);
    float Fraction(float A);
    int32 FMod(float Dividend, float Divisor, float& Remainder);
    float FMin(float A, float B);
    float FMax(float A, float B);
    float FloatSpringInterp(float current, float Target, FFloatSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);
    float FixedTurn(float InCurrent, float InDesired, float InDeltaRate);
    float FInterpTo_Constant(float current, float Target, float DeltaTime, float InterpSpeed);
    float FInterpTo(float current, float Target, float DeltaTime, float InterpSpeed);
    float FInterpEaseInOut(float A, float B, float alpha, float Exponent);
    void FindNearestPointsOnLineSegments(FVector Segment1Start, FVector Segment1End, FVector Segment2Start, FVector Segment2End, FVector& Segment1Point, FVector& Segment2Point);
    FRotator FindLookAtRotation(const FVector& Start, const FVector& Target);
    FVector FindClosestPointOnSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);
    FVector FindClosestPointOnLine(FVector Point, FVector LineOrigin, FVector LineDirection);
    int64 FFloor64(float A);
    int32 FFloor(float A);
    float FClamp(float Value, float Min, float Max);
    int64 FCeil64(float A);
    int32 FCeil(float A);
    float Exp(float A);
    bool EqualExactly_VectorVector(FVector A, FVector B);
    bool EqualExactly_Vector4Vector4(const FVector4& A, const FVector4& B);
    bool EqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);
    bool EqualEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);
    bool EqualEqual_Vector4Vector4(const FVector4& A, const FVector4& B, float ErrorTolerance);
    bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
    bool EqualEqual_TransformTransform(const FTransform& A, const FTransform& B);
    bool EqualEqual_TimespanTimespan(FTimespan A, FTimespan B);
    bool EqualEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);
    bool EqualEqual_QuatQuat(const FQuat& A, const FQuat& B, float Tolerance);
    bool EqualEqual_ObjectObject(UObject* A, UObject* B);
    bool EqualEqual_NameName(FName A, FName B);
    bool EqualEqual_MatrixMatrix(const FMatrix& A, const FMatrix& B, float Tolerance);
    bool EqualEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    bool EqualEqual_IntInt(int32 A, int32 B);
    bool EqualEqual_Int64Int64(int64 A, int64 B);
    bool EqualEqual_FloatFloat(float A, float B);
    bool EqualEqual_DateTimeDateTime(FDateTime A, FDateTime B);
    bool EqualEqual_ClassClass(TSubclassOf<UObject> A, TSubclassOf<UObject> B);
    bool EqualEqual_ByteByte(uint8 A, uint8 B);
    bool EqualEqual_BoolBool(bool A, bool B);
    bool Equal_IntPointIntPoint(FIntPoint A, FIntPoint B);
    float Ease(float A, float B, float alpha, uint8 EasingFunc, float BlendExp, int32 Steps);
    FVector DynamicWeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    FRotator DynamicWeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    float DynamicWeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
    float DotProduct2D(FVector2D A, FVector2D B);
    float Dot_VectorVector(FVector A, FVector B);
    FVector Divide_VectorVector(FVector A, FVector B);
    FVector Divide_VectorInt(FVector A, int32 B);
    FVector Divide_VectorFloat(FVector A, float B);
    FVector4 Divide_Vector4Vector4(const FVector4& A, const FVector4& B);
    FVector2D Divide_Vector2DVector2D(FVector2D A, FVector2D B);
    FVector2D Divide_Vector2DFloat(FVector2D A, float B);
    FTimespan Divide_TimespanFloat(FTimespan A, float Scalar);
    FLinearColor Divide_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    FIntPoint Divide_IntPointIntPoint(FIntPoint A, FIntPoint B);
    FIntPoint Divide_IntPointInt(FIntPoint A, int32 B);
    int32 Divide_IntInt(int32 A, int32 B);
    int64 Divide_Int64Int64(int64 A, int64 B);
    float Divide_FloatFloat(float A, float B);
    uint8 Divide_ByteByte(uint8 A, uint8 B);
    float DistanceSquared2D(FVector2D v1, FVector2D v2);
    float Distance2D(FVector2D v1, FVector2D v2);
    float DegTan(float A);
    float DegSin(float A);
    float DegreesToRadians(float A);
    float DegCos(float A);
    float DegAtan2(float Y, float X);
    float DegAtan(float A);
    float DegAsin(float A);
    float DegAcos(float A);
    int32 DaysInYear(int32 Year);
    int32 DaysInMonth(int32 Year, int32 Month);
    FDateTime DateTimeMinValue();
    FDateTime DateTimeMaxValue();
    bool DateTimeFromString(FString DateTimeString, FDateTime& Result);
    bool DateTimeFromIsoString(FString IsoString, FDateTime& Result);
    float CrossProduct2D(FVector2D A, FVector2D B);
    FVector Cross_VectorVector(FVector A, FVector B);
    FVector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);
    float Cos(float A);
    FTransform ConvertTransformToRelative(const FTransform& Transform, const FTransform& ParentTransform);
    FVector2D Conv_VectorToVector2D(FVector InVector);
    FTransform Conv_VectorToTransform(FVector InLocation);
    FRotator Conv_VectorToRotator(FVector InVec);
    FQuat Conv_VectorToQuaterion(FVector InVec);
    FLinearColor Conv_VectorToLinearColor(FVector InVec);
    FVector Conv_Vector4ToVector(const FVector4& InVector4);
    FRotator Conv_Vector4ToRotator(const FVector4& InVec);
    FQuat Conv_Vector4ToQuaterion(const FVector4& InVec);
    FVector Conv_Vector2DToVector(FVector2D InVector2D, float Z);
    FIntPoint Conv_Vector2DToIntPoint(FVector2D InVector2D);
    FMatrix Conv_TransformToMatrix(const FTransform& Transform);
    FVector Conv_RotatorToVector(FRotator InRot);
    FTransform Conv_RotatorToTransform(const FRotator& InRotator);
    FTransform Conv_MatrixToTransform(const FMatrix& InMatrix);
    FRotator Conv_MatrixToRotator(const FMatrix& InMatrix);
    FVector Conv_LinearColorToVector(FLinearColor InLinearColor);
    FColor Conv_LinearColorToColor(FLinearColor InLinearColor, bool InUseSRGB);
    FVector Conv_IntVectorToVector(const FIntVector& InIntVector);
    FIntVector Conv_IntToIntVector(int32 inInt);
    int64 Conv_IntToInt64(int32 inInt);
    float Conv_IntToFloat(int32 inInt);
    uint8 Conv_IntToByte(int32 inInt);
    bool Conv_IntToBool(int32 inInt);
    FVector2D Conv_IntPointToVector2D(FIntPoint InIntPoint);
    int32 Conv_Int64ToInt(int64 inInt);
    uint8 Conv_Int64ToByte(int64 inInt);
    FVector Conv_FloatToVector(float InFloat);
    FLinearColor Conv_FloatToLinearColor(float InFloat);
    FLinearColor Conv_ColorToLinearColor(FColor InColor);
    int32 Conv_ByteToInt(uint8 InByte);
    float Conv_ByteToFloat(uint8 InByte);
    int32 Conv_BoolToInt(bool InBool);
    float Conv_BoolToFloat(bool InBool);
    uint8 Conv_BoolToByte(bool InBool);
    FTransform ComposeTransforms(const FTransform& A, const FTransform& B);
    FRotator ComposeRotators(FRotator A, FRotator B);
    bool ClassIsChildOf(TSubclassOf<UObject> TestClass, TSubclassOf<UObject> ParentClass);
    FVector ClampVectorSize(FVector A, float Min, float Max);
    int64 ClampInt64(int64 Value, int64 Min, int64 Max);
    float ClampAxis(float Angle);
    FVector2D ClampAxes2D(FVector2D A, float MinAxisVal, float MaxAxisVal);
    float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);
    int32 Clamp(int32 Value, int32 Min, int32 Max);
    FLinearColor CInterpTo(FLinearColor current, FLinearColor Target, float DeltaTime, float InterpSpeed);
    void BreakVector4(const FVector4& InVec, float& X, float& Y, float& Z, float& W);
    void BreakVector2D(FVector2D InVec, float& X, float& Y);
    void BreakVector(FVector InVec, float& X, float& Y, float& Z);
    void BreakTransform(const FTransform& InTransform, FVector& Location, FRotator& Rotation, FVector& Scale);
    void BreakTimespan2(FTimespan InTimespan, int32& Days, int32& Hours, int32& Minutes, int32& Seconds, int32& FractionNano);
    void BreakTimespan(FTimespan InTimespan, int32& Days, int32& Hours, int32& Minutes, int32& Seconds, int32& Milliseconds);
    void BreakRotIntoAxes(const FRotator& InRot, FVector& X, FVector& Y, FVector& Z);
    void BreakRotator(FRotator InRot, float& Roll, float& Pitch, float& Yaw);
    void BreakRandomStream(const FRandomStream& InRandomStream, int32& InitialSeed);
    void BreakQualifiedFrameTime(const FQualifiedFrameTime& InFrameTime, FFrameNumber& Frame, FFrameRate& FrameRate, float& SubFrame);
    void BreakFrameRate(const FFrameRate& InFrameRate, int32& Numerator, int32& Denominator);
    void BreakDateTime(FDateTime InDateTime, int32& Year, int32& Month, int32& Day, int32& Hour, int32& Minute, int32& Second, int32& Millisecond);
    void BreakColor(FLinearColor InColor, float& R, float& G, float& B, float& A);
    bool BooleanXOR(bool A, bool B);
    bool BooleanOR(bool A, bool B);
    bool BooleanNOR(bool A, bool B);
    bool BooleanNAND(bool A, bool B);
    bool BooleanAND(bool A, bool B);
    uint8 BMin(uint8 A, uint8 B);
    uint8 BMax(uint8 A, uint8 B);
    float Atan2(float Y, float X);
    float Atan(float A);
    float Asin(float A);
    int32 And_IntInt(int32 A, int32 B);
    int64 And_Int64Int64(int64 A, int64 B);
    FVector Add_VectorVector(FVector A, FVector B);
    FVector Add_VectorInt(FVector A, int32 B);
    FVector Add_VectorFloat(FVector A, float B);
    FVector4 Add_Vector4Vector4(const FVector4& A, const FVector4& B);
    FVector2D Add_Vector2DVector2D(FVector2D A, FVector2D B);
    FVector2D Add_Vector2DFloat(FVector2D A, float B);
    FTimespan Add_TimespanTimespan(FTimespan A, FTimespan B);
    FQuat Add_QuatQuat(const FQuat& A, const FQuat& B);
    FMatrix Add_MatrixMatrix(const FMatrix& A, const FMatrix& B);
    FLinearColor Add_LinearColorLinearColor(FLinearColor A, FLinearColor B);
    FIntPoint Add_IntPointIntPoint(FIntPoint A, FIntPoint B);
    FIntPoint Add_IntPointInt(FIntPoint A, int32 B);
    int32 Add_IntInt(int32 A, int32 B);
    int64 Add_Int64Int64(int64 A, int64 B);
    float Add_FloatFloat(float A, float B);
    FDateTime Add_DateTimeTimespan(FDateTime A, FTimespan B);
    FDateTime Add_DateTimeDateTime(FDateTime A, FDateTime B);
    uint8 Add_ByteByte(uint8 A, uint8 B);
    float Acos(float A);
    int64 Abs_Int64(int64 A);
    int32 Abs_Int(int32 A);
    float Abs(float A);
}

class UKismetNodeHelperLibrary : UBlueprintFunctionLibrary
{

    void MarkBit(int32& Data, int32 Index);
    bool HasUnmarkedBit(int32 Data, int32 NumBits);
    bool HasMarkedBit(int32 Data, int32 NumBits);
    uint8 GetValidValue(const UEnum* Enum, uint8 EnumeratorValue);
    int32 GetUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits, bool bRandom);
    int32 GetRandomUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits);
    int32 GetFirstUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits);
    uint8 GetEnumeratorValueFromIndex(const UEnum* Enum, uint8 EnumeratorIndex);
    FString GetEnumeratorUserFriendlyName(const UEnum* Enum, uint8 EnumeratorValue);
    FName GetEnumeratorName(const UEnum* Enum, uint8 EnumeratorValue);
    void ClearBit(int32& Data, int32 Index);
    void ClearAllBits(int32& Data);
    bool BitIsMarked(int32 Data, int32 Index);
}

class UKismetRenderingLibrary : UBlueprintFunctionLibrary
{

    void SetCastInsetShadowForAllAttachments(UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup);
    UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(UTextureRenderTarget2D* RenderTarget, FString Name, uint8 CompressionSettings, uint8 MipSettings);
    void ReleaseRenderTarget2D(UTextureRenderTarget2D* TextureRenderTarget);
    FColor ReadRenderTargetUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
    FLinearColor ReadRenderTargetRawUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
    FLinearColor ReadRenderTargetRawPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y);
    FColor ReadRenderTargetPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y);
    FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int32 Bone0, uint8 Weight0, int32 Bone1, uint8 Weight1, int32 Bone2, uint8 Weight2, int32 Bone3, uint8 Weight3);
    UTexture2D* ImportFileAsTexture2D(UObject* WorldContextObject, FString Filename);
    UTexture2D* ImportBufferAsTexture2D(UObject* WorldContextObject, const TArray<uint8>& Buffer);
    void ExportTexture2D(UObject* WorldContextObject, UTexture2D* Texture, FString FilePath, FString Filename);
    void ExportRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FString FilePath, FString Filename);
    void EndDrawCanvasToRenderTarget(UObject* WorldContextObject, const FDrawToRenderTargetContext& Context);
    void DrawMaterialToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UMaterialInterface* Material);
    UTextureRenderTarget2D* CreateRenderTarget2D(UObject* WorldContextObject, int32 Width, int32 Height, uint8 Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);
    void ConvertRenderTargetToTexture2DEditorOnly(UObject* WorldContextObject, UTextureRenderTarget2D* RenderTarget, UTexture2D* Texture);
    void ClearRenderTarget2D(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FLinearColor ClearColor);
    void BreakSkinWeightInfo(FSkelMeshSkinWeightInfo InWeight, int32& Bone0, uint8& Weight0, int32& Bone1, uint8& Weight1, int32& Bone2, uint8& Weight2, int32& Bone3, uint8& Weight3);
    void BeginDrawCanvasToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UCanvas*& Canvas, FVector2D& Size, FDrawToRenderTargetContext& Context);
}

class UKismetStringLibrary : UBlueprintFunctionLibrary
{

    FString TrimTrailing(FString SourceString);
    FString Trim(FString SourceString);
    FString ToUpper(FString SourceString);
    FString ToLower(FString SourceString);
    FString TimeSecondsToString(float InSeconds);
    bool StartsWith(FString SourceString, FString InPrefix, uint8 SearchCase);
    bool Split(FString SourceString, FString InStr, FString& LeftS, FString& RightS, uint8 SearchCase, uint8 SearchDir);
    FString RightPad(FString SourceString, int32 ChCount);
    FString RightChop(FString SourceString, int32 count);
    FString Right(FString SourceString, int32 count);
    FString Reverse(FString SourceString);
    int32 ReplaceInline(FString& SourceString, FString SearchText, FString ReplacementText, uint8 SearchCase);
    FString Replace(FString SourceString, FString From, FString to, uint8 SearchCase);
    TArray<FString> ParseIntoArray(FString SourceString, FString Delimiter, const bool CullEmptyStrings);
    bool NotEqual_StrStr(FString A, FString B);
    bool NotEqual_StriStri(FString A, FString B);
    FString Mid(FString SourceString, int32 Start, int32 count);
    bool MatchesWildcard(FString SourceString, FString Wildcard, uint8 SearchCase);
    int32 Len(FString S);
    FString LeftPad(FString SourceString, int32 ChCount);
    FString LeftChop(FString SourceString, int32 count);
    FString Left(FString SourceString, int32 count);
    FString JoinStringArray(const TArray<FString>& SourceArray, FString Separator);
    bool IsNumeric(FString SourceString);
    bool isEmpty(FString inString);
    FString GetSubstring(FString SourceString, int32 StartIndex, int32 Length);
    int32 GetCharacterAsNumber(FString SourceString, int32 Index);
    TArray<FString> GetCharacterArrayFromString(FString SourceString);
    int32 FindSubstring(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd, int32 StartPosition);
    bool EqualEqual_StrStr(FString A, FString B);
    bool EqualEqual_StriStri(FString A, FString B);
    bool EndsWith(FString SourceString, FString InSuffix, uint8 SearchCase);
    int32 CullArray(FString SourceString, TArray<FString>& inArray);
    FString Conv_VectorToString(FVector InVec);
    FString Conv_Vector2dToString(FVector2D InVec);
    FString Conv_TransformToString(const FTransform& InTrans);
    void Conv_StringToVector2D(FString inString, FVector2D& OutConvertedVector2D, bool& OutIsValid);
    void Conv_StringToVector(FString inString, FVector& OutConvertedVector, bool& OutIsValid);
    void Conv_StringToRotator(FString inString, FRotator& OutConvertedRotator, bool& OutIsValid);
    FName Conv_StringToName(FString inString);
    int32 Conv_StringToInt(FString inString);
    float Conv_StringToFloat(FString inString);
    void Conv_StringToColor(FString inString, FLinearColor& OutConvertedColor, bool& OutIsValid);
    FString Conv_RotatorToString(FRotator InRot);
    FString Conv_ObjectToString(UObject* InObj);
    FString Conv_NameToString(FName InName);
    FString Conv_MatrixToString(const FMatrix& InMatrix);
    FString Conv_IntVectorToString(FIntVector InIntVec);
    FString Conv_IntToString(int32 inInt);
    FString Conv_IntPointToString(FIntPoint InIntPoint);
    FString Conv_FloatToString(float InFloat);
    FString Conv_ColorToString(FLinearColor InColor);
    FString Conv_ByteToString(uint8 InByte);
    FString Conv_BoolToString(bool InBool);
    bool Contains(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd);
    FString Concat_StrStr(FString A, FString B);
    FString BuildString_Vector2d(FString AppendTo, FString Prefix, FVector2D InVector2D, FString Suffix);
    FString BuildString_Vector(FString AppendTo, FString Prefix, FVector InVector, FString Suffix);
    FString BuildString_Rotator(FString AppendTo, FString Prefix, FRotator InRot, FString Suffix);
    FString BuildString_Object(FString AppendTo, FString Prefix, UObject* InObj, FString Suffix);
    FString BuildString_Name(FString AppendTo, FString Prefix, FName InName, FString Suffix);
    FString BuildString_IntVector(FString AppendTo, FString Prefix, FIntVector InIntVector, FString Suffix);
    FString BuildString_Int(FString AppendTo, FString Prefix, int32 inInt, FString Suffix);
    FString BuildString_Float(FString AppendTo, FString Prefix, float InFloat, FString Suffix);
    FString BuildString_Color(FString AppendTo, FString Prefix, FLinearColor InColor, FString Suffix);
    FString BuildString_Bool(FString AppendTo, FString Prefix, bool InBool, FString Suffix);
}

class UKismetStringTableLibrary : UBlueprintFunctionLibrary
{

    bool IsRegisteredTableId(const FName TableId);
    bool IsRegisteredTableEntry(const FName TableId, FString Key);
    FString GetTableNamespace(const FName TableId);
    FString GetTableEntrySourceString(const FName TableId, FString Key);
    FString GetTableEntryMetaData(const FName TableId, FString Key, const FName MetadataId);
    TArray<FName> GetRegisteredStringTables();
    TArray<FName> GetMetaDataIdsFromStringTableEntry(const FName TableId, FString Key);
    TArray<FString> GetKeysFromStringTable(const FName TableId);
}

class UKismetSystemLibrary : UBlueprintFunctionLibrary
{

    void UnregisterForRemoteNotifications();
    void UnloadPrimaryAssetList(const TArray<FPrimaryAssetId>& PrimaryAssetIdList);
    void UnloadPrimaryAsset(FPrimaryAssetId PrimaryAssetId);
    void TransactObject(UObject* Object);
    void StackTrace();
    bool SphereTraceSingleForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, const TArray<uint8>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereTraceSingleByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, uint8 TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereTraceMultiForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, const TArray<uint8>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereTraceMultiByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, uint8 TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool SphereOverlapComponents(UObject* WorldContextObject, const FVector SpherePos, float SphereRadius, const TArray<uint8>& ObjectTypes, TSubclassOf<UObject> ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    bool SphereOverlapActors(UObject* WorldContextObject, const FVector SpherePos, float SphereRadius, const TArray<uint8>& ObjectTypes, TSubclassOf<UObject> ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    void SnapshotObject(UObject* Object);
    void ShowPlatformSpecificLeaderboardScreen(FString CategoryName);
    void ShowPlatformSpecificAchievementsScreen(UPlayerController* SpecificPlayer);
    void ShowInterstitialAd();
    void ShowAdBanner(int32 AdIdIndex, bool bShowOnBottomOfScreen);
    void SetWindowTitle(const FText& Title);
    void SetVolumeButtonsHandledBySystem(bool bEnabled);
    void SetVectorPropertyByName(UObject* Object, FName PropertyName, const FVector& Value);
    void SetUserActivity(const FUserActivity& UserActivity);
    void SetTransformPropertyByName(UObject* Object, FName PropertyName, const FTransform& Value);
    void SetTextPropertyByName(UObject* Object, FName PropertyName, const FText& Value);
    void SetSuppressViewportTransitionMessage(UObject* WorldContextObject, bool bState);
    void SetStructurePropertyByName(UObject* Object, FName PropertyName, const FGenericStruct& Value);
    void SetStringPropertyByName(UObject* Object, FName PropertyName, FString Value);
    void SetSoftObjectPropertyByName(UObject* Object, FName PropertyName, const SoftObjectProperty& Value);
    void SetSoftClassPropertyByName(UObject* Object, FName PropertyName, const SoftClassProperty& Value);
    void SetRotatorPropertyByName(UObject* Object, FName PropertyName, const FRotator& Value);
    void SetObjectPropertyByName(UObject* Object, FName PropertyName, UObject* Value);
    void SetNamePropertyByName(UObject* Object, FName PropertyName, const FName& Value);
    void SetLinearColorPropertyByName(UObject* Object, FName PropertyName, const FLinearColor& Value);
    void SetIntPropertyByName(UObject* Object, FName PropertyName, int32 Value);
    void SetInterfacePropertyByName(UObject* Object, FName PropertyName, const InterfaceProperty& Value);
    void SetInt64PropertyByName(UObject* Object, FName PropertyName, int64 Value);
    void SetGamepadsBlockDeviceFeedback(bool bBlock);
    void SetFloatPropertyByName(UObject* Object, FName PropertyName, float Value);
    void SetFieldPathPropertyByName(UObject* Object, FName PropertyName, const FieldPathProperty& Value);
    void SetCollisionProfileNameProperty(UObject* Object, FName PropertyName, const FCollisionProfileName& Value);
    void SetClassPropertyByName(UObject* Object, FName PropertyName, TSubclassOf<UObject> Value);
    void SetBytePropertyByName(UObject* Object, FName PropertyName, uint8 Value);
    void SetBoolPropertyByName(UObject* Object, FName PropertyName, bool Value);
    void RetriggerableDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    void ResetGamepadAssignmentToController(int32 ControllerId);
    void ResetGamepadAssignments();
    void RegisterForRemoteNotifications();
    void QuitGame(UObject* WorldContextObject, UPlayerController* SpecificPlayer, uint8 QuitPreference, bool bIgnorePlatformRestrictions);
    void PrintWarning(FString inString);
    void PrintText(UObject* WorldContextObject, const FText InText, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    void PrintString(UObject* WorldContextObject, FString inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    void OnAssetLoaded__DelegateSignature(UObject* Loaded);
    void OnAssetClassLoaded__DelegateSignature(TSubclassOf<UObject> Loaded);
    bool NotEqual_SoftObjectReference(const SoftObjectProperty& A, const SoftObjectProperty& B);
    bool NotEqual_SoftClassReference(const SoftClassProperty& A, const SoftClassProperty& B);
    bool NotEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);
    bool NotEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);
    FString NormalizeFilename(FString InFilename);
    void MoveComponentTo(USceneComponent* Component, FVector TargetRelativeLocation, FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, uint8 MoveAction, FLatentActionInfo LatentInfo);
    FSoftObjectPath MakeSoftObjectPath(FString PathString);
    FSoftClassPath MakeSoftClassPath(FString PathString);
    FText MakeLiteralText(FText Value);
    FString MakeLiteralString(FString Value);
    FName MakeLiteralName(FName Value);
    int32 MakeLiteralInt(int32 Value);
    float MakeLiteralFloat(float Value);
    uint8 MakeLiteralByte(uint8 Value);
    bool MakeLiteralBool(bool Value);
    void LoadInterstitialAd(int32 AdIdIndex);
    UClass* LoadClassAsset_Blocking(SoftClassProperty AssetClass);
    void LoadAssetClass(UObject* WorldContextObject, SoftClassProperty AssetClass, OnAssetClassLoaded__DelegateSignature OnLoaded, FLatentActionInfo LatentInfo);
    UObject* LoadAsset_Blocking(SoftObjectProperty Asset);
    void LoadAsset(UObject* WorldContextObject, SoftObjectProperty Asset, OnAssetLoaded__DelegateSignature OnLoaded, FLatentActionInfo LatentInfo);
    bool LineTraceSingleForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<uint8>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceSingleByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, uint8 TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceMultiForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, const TArray<uint8>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceMultiByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool LineTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, uint8 TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void LaunchURL(FString URL);
    void K2_UnPauseTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);
    void K2_UnPauseTimerDelegate(TimerDynamicDelegate__DelegateSignature Delegate);
    void K2_UnPauseTimer(UObject* Object, FString FunctionName);
    bool K2_TimerExistsHandle(UObject* WorldContextObject, FTimerHandle Handle);
    bool K2_TimerExistsDelegate(TimerDynamicDelegate__DelegateSignature Delegate);
    bool K2_TimerExists(UObject* Object, FString FunctionName);
    FTimerHandle K2_SetTimerDelegate(TimerDynamicDelegate__DelegateSignature Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
    FTimerHandle K2_SetTimer(UObject* Object, FString FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
    void K2_PauseTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);
    void K2_PauseTimerDelegate(TimerDynamicDelegate__DelegateSignature Delegate);
    void K2_PauseTimer(UObject* Object, FString FunctionName);
    bool K2_IsValidTimerHandle(FTimerHandle Handle);
    bool K2_IsTimerPausedHandle(UObject* WorldContextObject, FTimerHandle Handle);
    bool K2_IsTimerPausedDelegate(TimerDynamicDelegate__DelegateSignature Delegate);
    bool K2_IsTimerPaused(UObject* Object, FString FunctionName);
    bool K2_IsTimerActiveHandle(UObject* WorldContextObject, FTimerHandle Handle);
    bool K2_IsTimerActiveDelegate(TimerDynamicDelegate__DelegateSignature Delegate);
    bool K2_IsTimerActive(UObject* Object, FString FunctionName);
    FTimerHandle K2_InvalidateTimerHandle(FTimerHandle& Handle);
    float K2_GetTimerRemainingTimeHandle(UObject* WorldContextObject, FTimerHandle Handle);
    float K2_GetTimerRemainingTimeDelegate(TimerDynamicDelegate__DelegateSignature Delegate);
    float K2_GetTimerRemainingTime(UObject* Object, FString FunctionName);
    float K2_GetTimerElapsedTimeHandle(UObject* WorldContextObject, FTimerHandle Handle);
    float K2_GetTimerElapsedTimeDelegate(TimerDynamicDelegate__DelegateSignature Delegate);
    float K2_GetTimerElapsedTime(UObject* Object, FString FunctionName);
    void K2_ClearTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);
    void K2_ClearTimerDelegate(TimerDynamicDelegate__DelegateSignature Delegate);
    void K2_ClearTimer(UObject* Object, FString FunctionName);
    void K2_ClearAndInvalidateTimerHandle(UObject* WorldContextObject, FTimerHandle& Handle);
    bool IsValidSoftObjectReference(const SoftObjectProperty& SoftObjectReference);
    bool IsValidSoftClassReference(const SoftClassProperty& SoftClassReference);
    bool IsValidPrimaryAssetType(FPrimaryAssetType PrimaryAssetType);
    bool IsValidPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    bool IsValidClass(TSubclassOf<UObject> Class);
    bool IsValid(const UObject* Object);
    bool IsUnattended();
    bool IsStandalone(UObject* WorldContextObject);
    bool IsSplitScreen(UObject* WorldContextObject);
    bool IsServer(UObject* WorldContextObject);
    bool IsScreensaverEnabled();
    bool IsPackagedForDistribution();
    bool IsLoggedIn(UPlayerController* SpecificPlayer);
    bool IsInterstitialAdRequested();
    bool IsInterstitialAdAvailable();
    bool IsDedicatedServer(UObject* WorldContextObject);
    bool IsControllerAssignedToGamepad(int32 ControllerId);
    void HideAdBanner();
    bool GetVolumeButtonsHandledBySystem();
    FString GetUniqueDeviceId();
    bool GetSupportedFullscreenResolutions(TArray<FIntPoint>& Resolutions);
    TSoftObjectPtr<UObject> GetSoftObjectReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    TSoftClassPtr<UObject> GetSoftClassReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    int32 GetRenderingMaterialQualityLevel();
    int32 GetRenderingDetailMode();
    FString GetProjectSavedDirectory();
    FString GetProjectDirectory();
    FString GetProjectContentDirectory();
    void GetPrimaryAssetsWithBundleState(const TArray<FName>& RequiredBundles, const TArray<FName>& ExcludedBundles, const TArray<FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList);
    void GetPrimaryAssetIdList(FPrimaryAssetType PrimaryAssetType, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList);
    FPrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(SoftObjectProperty SoftObjectReference);
    FPrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(SoftClassProperty SoftClassReference);
    FPrimaryAssetId GetPrimaryAssetIdFromObject(UObject* Object);
    FPrimaryAssetId GetPrimaryAssetIdFromClass(TSubclassOf<UObject> Class);
    TArray<FString> GetPreferredLanguages();
    FString GetPlatformUserName();
    FString GetPlatformUserDir();
    FString GetPathName(const UObject* Object);
    UObject* GetOuterObject(const UObject* Object);
    FString GetObjectName(const UObject* Object);
    UObject* GetObjectFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    int32 GetMinYResolutionForUI();
    int32 GetMinYResolutionFor3DView();
    FString GetLocalCurrencySymbol();
    FString GetLocalCurrencyCode();
    float GetGameTimeInSeconds(UObject* WorldContextObject);
    FString GetGamepadControllerName(int32 ControllerId);
    FString GetGameName();
    FString GetGameBundleId();
    int64 GetFrameCount();
    FString GetEngineVersion();
    FString GetDisplayName(const UObject* Object);
    FString GetDeviceId();
    FString GetDefaultLocale();
    FString GetDefaultLanguage();
    bool GetCurrentBundleState(FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, TArray<FName>& OutBundles);
    bool GetConvenientWindowedResolutions(TArray<FIntPoint>& Resolutions);
    int32 GetConsoleVariableIntValue(FString VariableName);
    float GetConsoleVariableFloatValue(FString VariableName);
    bool GetConsoleVariableBoolValue(FString VariableName);
    void GetComponentBounds(const USceneComponent* Component, FVector& Origin, FVector& BoxExtent, float& SphereRadius);
    FString GetCommandLine();
    UClass* GetClassFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
    FString GetClassDisplayName(TSubclassOf<UObject> Class);
    int32 GetAdIDCount();
    void GetActorListFromComponentList(const TArray<UPrimitiveComponent*>& ComponentList, TSubclassOf<UObject> ActorClassFilter, TArray<AActor*>& OutActorList);
    void GetActorBounds(const AActor* Actor, FVector& Origin, FVector& BoxExtent);
    void ForceCloseAdBanner();
    void FlushPersistentDebugLines(UObject* WorldContextObject);
    void FlushDebugStrings(UObject* WorldContextObject);
    void ExecuteConsoleCommand(UObject* WorldContextObject, FString Command, UPlayerController* SpecificPlayer);
    bool EqualEqual_SoftObjectReference(const SoftObjectProperty& A, const SoftObjectProperty& B);
    bool EqualEqual_SoftClassReference(const SoftClassProperty& A, const SoftClassProperty& B);
    bool EqualEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);
    bool EqualEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);
    int32 EndTransaction();
    void DrawDebugString(UObject* WorldContextObject, const FVector TextLocation, FString Text, AActor* TestBaseActor, FLinearColor TextColor, float Duration);
    void DrawDebugSphere(UObject* WorldContextObject, const FVector Center, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugPoint(UObject* WorldContextObject, const FVector Position, float Size, FLinearColor PointColor, float Duration);
    void DrawDebugPlane(UObject* WorldContextObject, const FPlane& PlaneCoordinates, const FVector Location, float Size, FLinearColor PlaneColor, float Duration);
    void DrawDebugLine(UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugFrustum(UObject* WorldContextObject, const FTransform& FrustumTransform, FLinearColor FrustumColor, float Duration, float Thickness);
    void DrawDebugFloatHistoryTransform(UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, const FTransform& DrawTransform, FVector2D DrawSize, FLinearColor DrawColor, float Duration);
    void DrawDebugFloatHistoryLocation(UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, FVector DrawLocation, FVector2D DrawSize, FLinearColor DrawColor, float Duration);
    void DrawDebugCylinder(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCoordinateSystem(UObject* WorldContextObject, const FVector AxisLoc, const FRotator AxisRot, float Scale, float Duration, float Thickness);
    void DrawDebugConeInDegrees(UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCone(UObject* WorldContextObject, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCircle(UObject* WorldContextObject, FVector Center, float Radius, int32 NumSegments, FLinearColor LineColor, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis);
    void DrawDebugCapsule(UObject* WorldContextObject, const FVector Center, float HalfHeight, float Radius, const FRotator Rotation, FLinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCamera(const ACameraActor* CameraActor, FLinearColor CameraColor, float Duration);
    void DrawDebugBox(UObject* WorldContextObject, const FVector Center, FVector Extent, FLinearColor LineColor, const FRotator Rotation, float Duration, float Thickness);
    void DrawDebugArrow(UObject* WorldContextObject, const FVector LineStart, const FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, float Thickness);
    bool DoesImplementInterface(UObject* TestObject, TSubclassOf<UInterface> Interface);
    void Delay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
    void CreateCopyForUndoBuffer(UObject* ObjectToModify);
    FString ConvertToRelativePath(FString Filename);
    FString ConvertToAbsolutePath(FString Filename);
    TSoftObjectPtr<UObject> Conv_SoftObjPathToSoftObjRef(const FSoftObjectPath& SoftObjectPath);
    FString Conv_SoftObjectReferenceToString(const SoftObjectProperty& SoftObjectReference);
    UObject* Conv_SoftObjectReferenceToObject(const SoftObjectProperty& SoftObject);
    FString Conv_SoftClassReferenceToString(const SoftClassProperty& SoftClassReference);
    UClass* Conv_SoftClassReferenceToClass(const SoftClassProperty& SoftClass);
    TSoftClassPtr<UObject> Conv_SoftClassPathToSoftClassRef(const FSoftClassPath& SoftClassPath);
    FString Conv_PrimaryAssetTypeToString(FPrimaryAssetType PrimaryAssetType);
    FString Conv_PrimaryAssetIdToString(FPrimaryAssetId PrimaryAssetId);
    TSoftObjectPtr<UObject> Conv_ObjectToSoftObjectReference(UObject* Object);
    UObject* Conv_InterfaceToObject(const InterfaceProperty& Interface);
    TSoftClassPtr<UObject> Conv_ClassToSoftClassReference(const TSubclassOf<UObject>& Class);
    void ControlScreensaver(bool bAllowScreenSaver);
    bool ComponentOverlapComponents(UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<uint8>& ObjectTypes, TSubclassOf<UObject> ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    bool ComponentOverlapActors(UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<uint8>& ObjectTypes, TSubclassOf<UObject> ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    void CollectGarbage();
    bool CapsuleTraceSingleForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, const TArray<uint8>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceSingleByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, uint8 TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceMultiForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, const TArray<uint8>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceMultiByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, uint8 TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool CapsuleOverlapComponents(UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const TArray<uint8>& ObjectTypes, TSubclassOf<UObject> ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    bool CapsuleOverlapActors(UObject* WorldContextObject, const FVector CapsulePos, float Radius, float HalfHeight, const TArray<uint8>& ObjectTypes, TSubclassOf<UObject> ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    bool CanLaunchURL(FString URL);
    void CancelTransaction(const int32 Index);
    void BreakSoftObjectPath(FSoftObjectPath InSoftObjectPath, FString& PathString);
    void BreakSoftClassPath(FSoftClassPath InSoftClassPath, FString& PathString);
    bool BoxTraceSingleForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, const TArray<uint8>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceSingleByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, uint8 TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceMultiForObjects(UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, const TArray<uint8>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceMultiByProfile(UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, uint8 TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, uint8 DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    bool BoxOverlapComponents(UObject* WorldContextObject, const FVector BoxPos, FVector Extent, const TArray<uint8>& ObjectTypes, TSubclassOf<UObject> ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    bool BoxOverlapActors(UObject* WorldContextObject, const FVector BoxPos, FVector BoxExtent, const TArray<uint8>& ObjectTypes, TSubclassOf<UObject> ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);
    int32 BeginTransaction(FString Context, FText Description, UObject* PrimaryObject);
    FDebugFloatHistory AddFloatHistorySample(float Value, const FDebugFloatHistory& FloatHistory);
}

class UKismetTextLibrary : UBlueprintFunctionLibrary
{

    FText TextTrimTrailing(const FText& InText);
    FText TextTrimPrecedingAndTrailing(const FText& InText);
    FText TextTrimPreceding(const FText& InText);
    FText TextToUpper(const FText& InText);
    FText TextToLower(const FText& InText);
    bool TextIsTransient(const FText& InText);
    bool TextIsFromStringTable(const FText& Text);
    bool TextIsEmpty(const FText& InText);
    bool TextIsCultureInvariant(const FText& InText);
    FText TextFromStringTable(const FName TableId, FString Key);
    bool StringTableIdAndKeyFromText(FText Text, FName& OutTableId, FString& OutKey);
    FText PolyglotDataToText(const FPolyglotTextData& PolyglotData);
    bool NotEqual_TextText(const FText& A, const FText& B);
    bool NotEqual_IgnoreCase_TextText(const FText& A, const FText& B);
    void IsPolyglotDataValid(const FPolyglotTextData& PolyglotData, bool& IsValid, FText& errorMessage);
    FText GetEmptyText();
    FText Format(FText InPattern, TArray<FFormatArgumentData> InArgs);
    bool FindTextInLocalizationTable(FString Namespace, FString Key, FText& OutText);
    bool EqualEqual_TextText(const FText& A, const FText& B);
    bool EqualEqual_IgnoreCase_TextText(const FText& A, const FText& B);
    FText Conv_VectorToText(FVector InVec);
    FText Conv_Vector2dToText(FVector2D InVec);
    FText Conv_TransformToText(const FTransform& InTrans);
    FString Conv_TextToString(const FText& InText);
    FText Conv_StringToText(FString inString);
    FText Conv_RotatorToText(FRotator InRot);
    FText Conv_ObjectToText(UObject* InObj);
    FText Conv_NameToText(FName InName);
    FText Conv_IntToText(int32 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    FText Conv_FloatToText(float Value, uint8 RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits);
    FText Conv_ColorToText(FLinearColor InColor);
    FText Conv_ByteToText(uint8 Value);
    FText Conv_BoolToText(bool InBool);
    FText AsTimeZoneTime_DateTime(const FDateTime& InDateTime, FString InTimeZone);
    FText AsTimeZoneDateTime_DateTime(const FDateTime& InDateTime, FString InTimeZone);
    FText AsTimeZoneDate_DateTime(const FDateTime& InDateTime, FString InTimeZone);
    FText AsTimespan_Timespan(const FTimespan& InTimespan);
    FText AsTime_DateTime(const FDateTime& In);
    FText AsPercent_Float(float Value, uint8 RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits);
    FText AsDateTime_DateTime(const FDateTime& In);
    FText AsDate_DateTime(const FDateTime& InDateTime);
    FText AsCurrencyBase(int32 BaseValue, FString CurrencyCode);
    FText AsCurrency_Integer(int32 Value, uint8 RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, FString CurrencyCode);
    FText AsCurrency_Float(float Value, uint8 RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, FString CurrencyCode);
}

class ULayer : UObject
{
    FName LayerName;
    uint8 bIsVisible;
    TArray<FLayerActorStats> ActorStats;
}

class ULevelPartitionInterface : UInterface
{
}

class ULevel : UObject
{
    UWorld* OwningWorld;
    UModel* Model;
    TArray<UModelComponent*> ModelComponents;
    ULevelActorContainer* ActorCluster;
    int32 NumTextureStreamingUnbuiltComponents;
    int32 NumTextureStreamingDirtyResources;
    ALevelScriptActor* LevelScriptActor;
    ANavigationObjectBase* NavListStart;
    ANavigationObjectBase* NavListEnd;
    TArray<UNavigationDataChunk*> NavDataChunks;
    float LightmapTotalSize;
    float ShadowmapTotalSize;
    TArray<FVector> StaticNavigableGeometry;
    TArray<FGuid> StreamingTextureGuids;
    FGuid LevelBuildDataId;
    UMapBuildDataRegistry* MapBuildData;
    FIntVector LightBuildLevelOffset;
    uint8 bIsLightingScenario;
    uint8 bTextureStreamingRotationChanged;
    uint8 bStaticComponentsRegisteredInStreamingManager;
    uint8 bIsVisible;
    AWorldSettings* WorldSettings;
    TArray<UAssetUserData*> AssetUserData;
    TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors;
}

class ULevelActorContainer : UObject
{
    TArray<AActor*> Actors;
}

class ALevelBounds : AActor
{
    UBoxComponent* BoxComponent;
    bool bAutoUpdateBounds;
}

class ALevelScriptActor : AActor
{
    uint8 bInputEnabled;

    void WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation);
    void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    bool RemoteEvent(FName EventName);
    void LevelReset();
}

class ULevelScriptBlueprint : UBlueprint
{
}

class UWorld : UObject
{
    ULevel* PersistentLevel;
    UNetDriver* NetDriver;
    ULineBatchComponent* LineBatcher;
    ULineBatchComponent* PersistentLineBatcher;
    ULineBatchComponent* ForegroundLineBatcher;
    AGameNetworkManager* NetworkManager;
    UPhysicsCollisionHandler* PhysicsCollisionHandler;
    TArray<UObject*> ExtraReferencedObjects;
    TArray<UObject*> PerModuleDataObjects;
    TArray<AActor*> LevelSequenceActors;
    TArray<ULevelStreaming*> StreamingLevels;
    FStreamingLevelsToConsider StreamingLevelsToConsider;
    FString StreamingLevelsPrefix;
    ULevel* CurrentLevelPendingVisibility;
    ULevel* CurrentLevelPendingInvisibility;
    UDemoNetDriver* DemoNetDriver;
    AParticleEventManager* MyParticleEventManager;
    APhysicsVolume* DefaultPhysicsVolume;
    uint8 bAreConstraintsDirty;
    UNavigationSystemBase* NavigationSystem;
    AGameModeBase* AuthorityGameMode;
    AGameStateBase* GameState;
    UAISystemBase* AISystem;
    UAvoidanceManager* AvoidanceManager;
    TArray<ULevel*> Levels;
    TArray<FLevelCollection> LevelCollections;
    UGameInstance* OwningGameInstance;
    TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances;
    UCanvas* CanvasForRenderingToTarget;
    UCanvas* CanvasForDrawMaterialToRenderTarget;
    TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate;
    TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread;
    UWorldComposition* WorldComposition;
    FWorldPSCPool PSCPool;

    AWorldSettings* K2_GetWorldSettings();
    void HandleTimelineScrubbed();
}

class ULevelStreaming : UObject
{
    TSoftObjectPtr<UWorld> WorldAsset;
    FName PackageNameToLoad;
    TArray<FName> LODPackageNames;
    FTransform LevelTransform;
    int32 LevelLODIndex;
    int32 StreamingPriority;
    uint8 bShouldBeVisible;
    uint8 bShouldBeLoaded;
    uint8 bLocked;
    uint8 bIsStatic;
    uint8 bShouldBlockOnLoad;
    uint8 bShouldBlockOnUnload;
    uint8 bDisableDistanceStreaming;
    uint8 bDrawOnLevelStatusMap;
    FLinearColor LevelColor;
    TArray<ALevelStreamingVolume*> EditorStreamingVolumes;
    float MinTimeBetweenVolumeUnloadRequests;
    FLevelStreamingOnLevelLoaded OnLevelLoaded;
    void LevelStreamingLoadedStatus();
    FLevelStreamingOnLevelUnloaded OnLevelUnloaded;
    void LevelStreamingLoadedStatus();
    FLevelStreamingOnLevelShown OnLevelShown;
    void LevelStreamingVisibilityStatus();
    FLevelStreamingOnLevelHidden OnLevelHidden;
    void LevelStreamingVisibilityStatus();
    ULevel* LoadedLevel;
    ULevel* PendingUnloadLevel;

    bool ShouldBeLoaded();
    void SetShouldBeVisible(bool bInShouldBeVisible);
    void SetShouldBeLoaded(bool bInShouldBeLoaded);
    void SetPriority(int32 NewPriority);
    void SetLevelLODIndex(int32 LODIndex);
    bool IsStreamingStatePending();
    bool IsLevelVisible();
    bool IsLevelLoaded();
    FName GetWorldAssetPackageFName();
    ULevel* GetLoadedLevel();
    ALevelScriptActor* GetLevelScriptActor();
    ULevelStreaming* CreateInstance(FString UniqueInstanceName);
}

class ULevelStreamingAlwaysLoaded : ULevelStreaming
{
}

class ULevelStreamingDynamic : ULevelStreaming
{
    uint8 bInitiallyLoaded;
    uint8 bInitiallyVisible;

    ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(UObject* WorldContextObject, SoftObjectProperty Level, FVector Location, FRotator Rotation, bool& bOutSuccess);
    ULevelStreamingDynamic* LoadLevelInstance(UObject* WorldContextObject, FString LevelName, FVector Location, FRotator Rotation, bool& bOutSuccess);
}

class ULevelStreamingPersistent : ULevelStreaming
{
}

class ALevelStreamingVolume : UVolume
{
    TArray<FName> StreamingLevelNames;
    uint8 bEditorPreVisOnly;
    uint8 bDisabled;
    TEnumAsByte<EStreamingVolumeUsage> StreamingUsage;
}

class ULightmappedSurfaceCollection : UObject
{
    UModel* SourceModel;
    TArray<int32> Surfaces;
}

class ULightMapTexture2D : UTexture2D
{
}

class ALightmassCharacterIndirectDetailVolume : UVolume
{
}

class ALightmassImportanceVolume : UVolume
{
}

class ALightmassPortal : AActor
{
    ULightmassPortalComponent* PortalComponent;
}

class ULightmassPortalComponent : USceneComponent
{
    UBoxComponent* PreviewBox;
}

class ULightmassPrimitiveSettingsObject : UObject
{
    FLightmassPrimitiveSettings LightmassSettings;
}

class ULineBatchComponent : UPrimitiveComponent
{
}

class ULocalPlayer : UPlayer
{
    UGameViewportClient* ViewportClient;
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;
    TSubclassOf<APlayerController> PendingLevelPlayerControllerClass;
    uint8 bSentSplitJoin;
    int32 ControllerId;
}

class ULocalPlayerSubsystem : USubsystem
{
}

class ALODActor : AActor
{
    UStaticMeshComponent* StaticMeshComponent;
    TMap<UMaterialInterface*, UInstancedStaticMeshComponent*> ImpostersStaticMeshComponents;
    UHLODProxy* Proxy;
    FName Key;
    float LODDrawDistance;
    int32 LODLevel;
    TArray<AActor*> SubActors;
    uint8 CachedNumHLODLevels;
}

class UMapBuildDataRegistry : UObject
{
    TEnumAsByte<ELightingBuildQuality> LevelLightingQuality;
}

class UMaterial : UMaterialInterface
{
    UPhysicalMaterial* PhysMaterial;
    UPhysicalMaterialMask* PhysMaterialMask;
    UPhysicalMaterial* PhysicalMaterialMap;
    FScalarMaterialInput Metallic;
    FScalarMaterialInput Specular;
    FScalarMaterialInput Anisotropy;
    FVectorMaterialInput Normal;
    FVectorMaterialInput Tangent;
    FColorMaterialInput EmissiveColor;
    TEnumAsByte<EMaterialDomain> MaterialDomain;
    TEnumAsByte<EBlendMode> BlendMode;
    TEnumAsByte<EDecalBlendMode> DecalBlendMode;
    TEnumAsByte<EMaterialDecalResponse> MaterialDecalResponse;
    TEnumAsByte<EMaterialShadingModel> ShadingModel;
    uint8 bCastDynamicShadowAsMasked;
    FMaterialShadingModelField ShadingModels;
    float OpacityMaskClipValue;
    FVectorMaterialInput WorldPositionOffset;
    FScalarMaterialInput Refraction;
    FMaterialAttributesInput MaterialAttributes;
    FScalarMaterialInput PixelDepthOffset;
    FShadingModelMaterialInput ShadingModelFromMaterialExpression;
    uint8 bEnableSeparateTranslucency;
    uint8 bEnableResponsiveAA;
    uint8 bScreenSpaceReflections;
    uint8 bContactShadows;
    uint8 TwoSided;
    uint8 DitheredLODTransition;
    uint8 DitherOpacityMask;
    uint8 bAllowNegativeEmissiveColor;
    TEnumAsByte<ETranslucencyLightingMode> TranslucencyLightingMode;
    uint8 bEnableMobileSeparateTranslucency;
    int32 NumCustomizedUVs;
    float TranslucencyDirectionalLightingIntensity;
    float TranslucentShadowDensityScale;
    float TranslucentSelfShadowDensityScale;
    float TranslucentSelfShadowSecondDensityScale;
    float TranslucentSelfShadowSecondOpacity;
    float TranslucentBackscatteringExponent;
    FLinearColor TranslucentMultipleScatteringExtinction;
    float TranslucentShadowStartOffset;
    uint8 bDisableDepthTest;
    uint8 bWriteOnlyAlpha;
    uint8 bGenerateSphericalParticleNormals;
    uint8 bTangentSpaceNormal;
    uint8 bUseEmissiveForDynamicAreaLighting;
    uint8 bBlockGI;
    uint8 bUsedAsSpecialEngineMaterial;
    uint8 bUsedWithSkeletalMesh;
    uint8 bUsedWithEditorCompositing;
    uint8 bUsedWithParticleSprites;
    uint8 bUsedWithBeamTrails;
    uint8 bUsedWithMeshParticles;
    uint8 bUsedWithNiagaraSprites;
    uint8 bUsedWithNiagaraRibbons;
    uint8 bUsedWithNiagaraMeshParticles;
    uint8 bUsedWithGeometryCache;
    uint8 bUsedWithStaticLighting;
    uint8 bUsedWithMorphTargets;
    uint8 bUsedWithSplineMeshes;
    uint8 bUsedWithInstancedStaticMeshes;
    uint8 bUsedWithGeometryCollections;
    uint8 bUsesDistortion;
    uint8 bUsedWithClothing;
    uint8 bUsedWithWater;
    uint8 bUsedWithHairStrands;
    uint8 bUsedWithLidarPointCloud;
    uint8 bUsedWithUI;
    uint8 bAutomaticallySetUsageInEditor;
    uint8 bFullyRough;
    uint8 bUseFullPrecision;
    uint8 bUseLightmapDirectionality;
    uint8 bForwardRenderUsePreintegratedGFForSimpleIBL;
    uint8 bUseHQForwardReflections;
    uint8 bUsePlanarForwardReflections;
    uint8 bNormalCurvatureToRoughness;
    TEnumAsByte<EMaterialTessellationMode> D3D11TessellationMode;
    uint8 bEnableCrackFreeDisplacement;
    uint8 bEnableAdaptiveTessellation;
    uint8 AllowTranslucentCustomDepthWrites;
    uint8 Wireframe;
    TEnumAsByte<EMaterialShadingRate> ShadingRate;
    uint8 bCanMaskedBeAssumedOpaque;
    uint8 bIsMasked;
    uint8 bIsPreviewMaterial;
    uint8 bIsFunctionPreviewMaterial;
    uint8 bUseMaterialAttributes;
    uint8 bCastRayTracedShadows;
    uint8 bUseTranslucencyVertexFog;
    uint8 bIsSky;
    uint8 bComputeFogPerPixel;
    uint8 bOutputTranslucentVelocity;
    uint8 bAllowDevelopmentShaderCompile;
    uint8 bIsMaterialEditorStatsMaterial;
    TEnumAsByte<EBlendableLocation> BlendableLocation;
    uint8 BlendableOutputAlpha;
    uint8 bEnableStencilTest;
    TEnumAsByte<EMaterialStencilCompare> StencilCompare;
    uint8 StencilRefValue;
    TEnumAsByte<ERefractionMode> RefractionMode;
    int32 BlendablePriority;
    uint8 bIsBlendable;
    uint32 UsageFlagWarnings;
    float RefractionDepthBias;
    FGuid StateId;
    float MaxDisplacement;
    FMaterialCachedExpressionData CachedExpressionData;
}

class UMaterialBillboardComponent : UPrimitiveComponent
{
    TArray<FMaterialSpriteElement> Elements;

    void SetElements(const TArray<FMaterialSpriteElement>& NewElements);
    void AddElement(UMaterialInterface* Material, UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, UCurveFloat* DistanceToSizeCurve);
}

class UMaterialExpressionAbs : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionActorPositionWS : UMaterialExpression
{
}

class UMaterialExpressionAdd : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;
}

class UMaterialExpressionTextureBase : UMaterialExpression
{
    UTexture* Texture;
    TEnumAsByte<EMaterialSamplerType> SamplerType;
    uint8 IsDefaultMeshpaintTexture;
}

class UMaterialExpressionTextureSample : UMaterialExpressionTextureBase
{
    FExpressionInput Coordinates;
    FExpressionInput TextureObject;
    FExpressionInput MipValue;
    FExpressionInput CoordinatesDX;
    FExpressionInput CoordinatesDY;
    FExpressionInput AutomaticViewMipBiasValue;
    TEnumAsByte<ETextureMipValueMode> MipValueMode;
    TEnumAsByte<ESamplerSourceMode> SamplerSource;
    uint8 AutomaticViewMipBias;
    uint8 ConstCoordinate;
    int32 ConstMipValue;
}

class UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample
{
    FName ParameterName;
    FGuid ExpressionGUID;
    FName Group;
}

class UMaterialExpressionTextureSampleParameter2D : UMaterialExpressionTextureSampleParameter
{
}

class UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D
{
    float Threshold;
    TEnumAsByte<ETextureColorChannel> Channel;
}

class UMaterialExpressionAppendVector : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
}

class UMaterialExpressionArccosine : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionArccosineFast : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionArcsine : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionArcsineFast : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionArctangent : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionArctangent2 : UMaterialExpression
{
    FExpressionInput Y;
    FExpressionInput X;
}

class UMaterialExpressionArctangent2Fast : UMaterialExpression
{
    FExpressionInput Y;
    FExpressionInput X;
}

class UMaterialExpressionArctangentFast : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionAtmosphericFogColor : UMaterialExpression
{
    FExpressionInput WorldPosition;
}

class UMaterialExpressionAtmosphericLightColor : UMaterialExpression
{
}

class UMaterialExpressionAtmosphericLightVector : UMaterialExpression
{
}

class UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput
{
    FExpressionInput Input;
}

class UMaterialExpressionBlackBody : UMaterialExpression
{
    FExpressionInput Temp;
}

class UMaterialExpressionBlendMaterialAttributes : UMaterialExpression
{
    FMaterialAttributesInput A;
    FMaterialAttributesInput B;
    FExpressionInput alpha;
    TEnumAsByte<EMaterialAttributeBlend::Type> PixelAttributeBlendType;
    TEnumAsByte<EMaterialAttributeBlend::Type> VertexAttributeBlendType;
}

class UMaterialExpressionBreakMaterialAttributes : UMaterialExpression
{
    FMaterialAttributesInput MaterialAttributes;
}

class UMaterialExpressionBumpOffset : UMaterialExpression
{
    FExpressionInput Coordinate;
    FExpressionInput Height;
    FExpressionInput HeightRatioInput;
    float HeightRatio;
    float ReferencePlane;
    uint32 ConstCoordinate;
}

class UMaterialExpressionCameraPositionWS : UMaterialExpression
{
}

class UMaterialExpressionCameraVectorWS : UMaterialExpression
{
}

class UMaterialExpressionCeil : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionParameter : UMaterialExpression
{
    FName ParameterName;
    FGuid ExpressionGUID;
}

class UMaterialExpressionVectorParameter : UMaterialExpressionParameter
{
    FLinearColor DefaultValue;
    bool bUseCustomPrimitiveData;
    uint8 PrimitiveDataIndex;
}

class UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter
{
    TEnumAsByte<EChannelMaskParameterColor::Type> MaskChannel;
    FExpressionInput Input;
}

class UMaterialExpressionClamp : UMaterialExpression
{
    FExpressionInput Input;
    FExpressionInput Min;
    FExpressionInput Max;
    TEnumAsByte<EClampMode> ClampMode;
    float MinDefault;
    float MaxDefault;
}

class UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput
{
    FExpressionInput Input;
}

class UMaterialExpressionCollectionParameter : UMaterialExpression
{
    UMaterialParameterCollection* Collection;
    FName ParameterName;
    FGuid ParameterId;
}

class UMaterialExpressionComment : UMaterialExpression
{
    int32 SizeX;
    int32 SizeY;
    FString Text;
    FLinearColor CommentColor;
    int32 FontSize;
}

class UMaterialExpressionComponentMask : UMaterialExpression
{
    FExpressionInput Input;
    uint8 R;
    uint8 G;
    uint8 B;
    uint8 A;
}

class UMaterialExpressionConstant : UMaterialExpression
{
    float R;
}

class UMaterialExpressionConstant2Vector : UMaterialExpression
{
    float R;
    float G;
}

class UMaterialExpressionConstant3Vector : UMaterialExpression
{
    FLinearColor Constant;
}

class UMaterialExpressionConstant4Vector : UMaterialExpression
{
    FLinearColor Constant;
}

class UMaterialExpressionConstantBiasScale : UMaterialExpression
{
    FExpressionInput Input;
    float Bias;
    float Scale;
}

class UMaterialExpressionCosine : UMaterialExpression
{
    FExpressionInput Input;
    float Period;
}

class UMaterialExpressionCrossProduct : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
}

class UMaterialExpressionScalarParameter : UMaterialExpressionParameter
{
    float DefaultValue;
    bool bUseCustomPrimitiveData;
    uint8 PrimitiveDataIndex;
}

class UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter
{
    UCurveLinearColor* Curve;
    UCurveLinearColorAtlas* Atlas;
    FExpressionInput InputTime;
}

class UMaterialExpressionCustom : UMaterialExpression
{
    FString code;
    TEnumAsByte<ECustomMaterialOutputType> OutputType;
    FString Description;
    TArray<FCustomInput> Inputs;
    TArray<FCustomDefine> AdditionalDefines;
    TArray<FString> IncludeFilePaths;
}

class UMaterialExpressionDDX : UMaterialExpression
{
    FExpressionInput Value;
}

class UMaterialExpressionDDY : UMaterialExpression
{
    FExpressionInput Value;
}

class UMaterialExpressionDecalDerivative : UMaterialExpression
{
}

class UMaterialExpressionDecalLifetimeOpacity : UMaterialExpression
{
}

class UMaterialExpressionDecalMipmapLevel : UMaterialExpression
{
    FExpressionInput TextureSize;
    float ConstWidth;
    float ConstHeight;
}

class UMaterialExpressionDeltaTime : UMaterialExpression
{
}

class UMaterialExpressionDepthFade : UMaterialExpression
{
    FExpressionInput InOpacity;
    FExpressionInput FadeDistance;
    float OpacityDefault;
    float FadeDistanceDefault;
}

class UMaterialExpressionDepthOfFieldFunction : UMaterialExpression
{
    TEnumAsByte<EDepthOfFieldFunctionValue> FunctionValue;
    FExpressionInput Depth;
}

class UMaterialExpressionDeriveNormalZ : UMaterialExpression
{
    FExpressionInput InXY;
}

class UMaterialExpressionDesaturation : UMaterialExpression
{
    FExpressionInput Input;
    FExpressionInput Fraction;
    FLinearColor LuminanceFactors;
}

class UMaterialExpressionDistance : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
}

class UMaterialExpressionDistanceCullFade : UMaterialExpression
{
}

class UMaterialExpressionDistanceFieldGradient : UMaterialExpression
{
    FExpressionInput Position;
}

class UMaterialExpressionDistanceToNearestSurface : UMaterialExpression
{
    FExpressionInput Position;
}

class UMaterialExpressionDivide : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;
}

class UMaterialExpressionDotProduct : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
}

class UMaterialExpressionDynamicParameter : UMaterialExpression
{
    TArray<FString> ParamNames;
    FLinearColor DefaultValue;
    uint32 ParameterIndex;
}

class UMaterialExpressionEyeAdaptation : UMaterialExpression
{
}

class UMaterialExpressionFeatureLevelSwitch : UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput Inputs;
}

class UMaterialExpressionFloor : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionFmod : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
}

class UMaterialExpressionFontSample : UMaterialExpression
{
    UFont* Font;
    int32 FontTexturePage;
}

class UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample
{
    FName ParameterName;
    FGuid ExpressionGUID;
    FName Group;
}

class UMaterialExpressionFrac : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionFresnel : UMaterialExpression
{
    FExpressionInput ExponentIn;
    float Exponent;
    FExpressionInput BaseReflectFractionIn;
    float BaseReflectFraction;
    FExpressionInput Normal;
}

class UMaterialExpressionFunctionInput : UMaterialExpression
{
    FExpressionInput Preview;
    FName InputName;
    FString Description;
    FGuid ID;
    TEnumAsByte<EFunctionInputType> InputType;
    FVector4 PreviewValue;
    uint8 bUsePreviewValueAsDefault;
    int32 SortPriority;
    uint8 bCompilingFunctionPreview;
}

class UMaterialExpressionFunctionOutput : UMaterialExpression
{
    FName OutputName;
    FString Description;
    int32 SortPriority;
    FExpressionInput A;
    uint8 bLastPreviewed;
    FGuid ID;
}

class UMaterialExpressionGetMaterialAttributes : UMaterialExpression
{
    FMaterialAttributesInput MaterialAttributes;
    TArray<FGuid> AttributeGetTypes;
}

class UMaterialExpressionGIReplace : UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput StaticIndirect;
    FExpressionInput DynamicIndirect;
}

class UMaterialExpressionHairAttributes : UMaterialExpression
{
}

class UMaterialExpressionIf : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    FExpressionInput AGreaterThanB;
    FExpressionInput AEqualsB;
    FExpressionInput ALessThanB;
    float EqualsThreshold;
    float ConstB;
    float ConstAEqualsB;
}

class UMaterialExpressionLightmapUVs : UMaterialExpression
{
}

class UMaterialExpressionLightmassReplace : UMaterialExpression
{
    FExpressionInput Realtime;
    FExpressionInput Lightmass;
}

class UMaterialExpressionLightVector : UMaterialExpression
{
}

class UMaterialExpressionLinearInterpolate : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    FExpressionInput alpha;
    float ConstA;
    float ConstB;
    float ConstAlpha;
}

class UMaterialExpressionLogarithm10 : UMaterialExpression
{
    FExpressionInput X;
}

class UMaterialExpressionLogarithm2 : UMaterialExpression
{
    FExpressionInput X;
}

class UMaterialExpressionMakeMaterialAttributes : UMaterialExpression
{
    FExpressionInput BaseColor;
    FExpressionInput Metallic;
    FExpressionInput Specular;
    FExpressionInput Roughness;
    FExpressionInput Anisotropy;
    FExpressionInput EmissiveColor;
    FExpressionInput Opacity;
    FExpressionInput OpacityMask;
    FExpressionInput Normal;
    FExpressionInput Tangent;
    FExpressionInput WorldPositionOffset;
    FExpressionInput WorldDisplacement;
    FExpressionInput TessellationMultiplier;
    FExpressionInput SubsurfaceColor;
    FExpressionInput ClearCoat;
    FExpressionInput ClearCoatRoughness;
    FExpressionInput AmbientOcclusion;
    FExpressionInput Refraction;
    FExpressionInput CustomizedUVs;
    FExpressionInput PixelDepthOffset;
    FExpressionInput ShadingModel;
}

class UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression
{
    FExpressionInput Coordinates;
}

class UMaterialExpressionMaterialAttributeLayers : UMaterialExpression
{
    FName ParameterName;
    FGuid ExpressionGUID;
    FMaterialAttributesInput Input;
    FMaterialLayersFunctions DefaultLayers;
    TArray<UMaterialExpressionMaterialFunctionCall*> LayerCallers;
    int32 NumActiveLayerCallers;
    TArray<UMaterialExpressionMaterialFunctionCall*> BlendCallers;
    int32 NumActiveBlendCallers;
    bool bIsLayerGraphBuilt;
}

class UMaterialExpressionMaterialFunctionCall : UMaterialExpression
{
    UMaterialFunctionInterface* MaterialFunction;
    FMaterialParameterInfo FunctionParameterInfo;
}

class UMaterialExpressionMaterialLayerOutput : UMaterialExpressionFunctionOutput
{
}

class UMaterialExpressionMaterialProxyReplace : UMaterialExpression
{
    FExpressionInput Realtime;
    FExpressionInput MaterialProxy;
}

class UMaterialExpressionMax : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;
}

class UMaterialExpressionMin : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;
}

class UMaterialExpressionMultiply : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;
}

class UMaterialExpressionNoise : UMaterialExpression
{
    FExpressionInput Position;
    FExpressionInput FilterWidth;
    float Scale;
    int32 Quality;
    TEnumAsByte<ENoiseFunction> NoiseFunction;
    uint8 bTurbulence;
    int32 Levels;
    float OutputMin;
    float OutputMax;
    float LevelScale;
    uint8 bTiling;
    uint32 RepeatSize;
}

class UMaterialExpressionNormalize : UMaterialExpression
{
    FExpressionInput VectorInput;
}

class UMaterialExpressionObjectBounds : UMaterialExpression
{
}

class UMaterialExpressionObjectOrientation : UMaterialExpression
{
}

class UMaterialExpressionObjectPositionWS : UMaterialExpression
{
}

class UMaterialExpressionObjectRadius : UMaterialExpression
{
}

class UMaterialExpressionOneMinus : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionPanner : UMaterialExpression
{
    FExpressionInput Coordinate;
    FExpressionInput Time;
    FExpressionInput Speed;
    float SpeedX;
    float SpeedY;
    uint32 ConstCoordinate;
    bool bFractionalPart;
}

class UMaterialExpressionParticleColor : UMaterialExpression
{
}

class UMaterialExpressionParticleDirection : UMaterialExpression
{
}

class UMaterialExpressionParticleMacroUV : UMaterialExpression
{
}

class UMaterialExpressionParticleMotionBlurFade : UMaterialExpression
{
}

class UMaterialExpressionParticlePositionWS : UMaterialExpression
{
}

class UMaterialExpressionParticleRadius : UMaterialExpression
{
}

class UMaterialExpressionParticleRandom : UMaterialExpression
{
}

class UMaterialExpressionParticleRelativeTime : UMaterialExpression
{
}

class UMaterialExpressionParticleSize : UMaterialExpression
{
}

class UMaterialExpressionParticleSpeed : UMaterialExpression
{
}

class UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample
{
    uint8 bBlend;
}

class UMaterialExpressionParticleSubUVProperties : UMaterialExpression
{
}

class UMaterialExpressionPerInstanceCustomData : UMaterialExpression
{
    FExpressionInput DefaultValue;
    float ConstDefaultValue;
    uint32 DataIndex;
}

class UMaterialExpressionPerInstanceFadeAmount : UMaterialExpression
{
}

class UMaterialExpressionPerInstanceRandom : UMaterialExpression
{
}

class UMaterialExpressionPixelDepth : UMaterialExpression
{
}

class UMaterialExpressionPixelNormalWS : UMaterialExpression
{
}

class UMaterialExpressionPower : UMaterialExpression
{
    FExpressionInput Base;
    FExpressionInput Exponent;
    float ConstExponent;
}

class UMaterialExpressionPrecomputedAOMask : UMaterialExpression
{
}

class UMaterialExpressionPreSkinnedLocalBounds : UMaterialExpression
{
}

class UMaterialExpressionPreSkinnedNormal : UMaterialExpression
{
}

class UMaterialExpressionPreSkinnedPosition : UMaterialExpression
{
}

class UMaterialExpressionPreviousFrameSwitch : UMaterialExpression
{
    FExpressionInput CurrentFrame;
    FExpressionInput PreviousFrame;
}

class UMaterialExpressionQualitySwitch : UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput Inputs;
}

class UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression
{
    FExpressionInput Normal;
    FExpressionInput RayTraced;
}

class UMaterialExpressionReflectionVectorWS : UMaterialExpression
{
    FExpressionInput CustomWorldNormal;
    uint8 bNormalizeCustomWorldNormal;
}

class UMaterialExpressionReroute : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionRotateAboutAxis : UMaterialExpression
{
    FExpressionInput NormalizedRotationAxis;
    FExpressionInput RotationAngle;
    FExpressionInput PivotPoint;
    FExpressionInput Position;
    float Period;
}

class UMaterialExpressionRotator : UMaterialExpression
{
    FExpressionInput Coordinate;
    FExpressionInput Time;
    float CenterX;
    float CenterY;
    float Speed;
    uint32 ConstCoordinate;
}

class UMaterialExpressionRound : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput
{
    FExpressionInput BaseColor;
    FExpressionInput Specular;
    FExpressionInput Roughness;
    FExpressionInput Normal;
    FExpressionInput WorldHeight;
    FExpressionInput Opacity;
    FExpressionInput Mask;
}

class UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput VirtualTextureOutput;
}

class UMaterialExpressionRuntimeVirtualTextureSample : UMaterialExpression
{
    FExpressionInput Coordinates;
    FExpressionInput WorldPosition;
    FExpressionInput MipValue;
    URuntimeVirtualTexture* VirtualTexture;
    ERuntimeVirtualTextureMaterialType MaterialType;
    bool bSinglePhysicalSpace;
    TEnumAsByte<ERuntimeVirtualTextureMipValueMode> MipValueMode;
}

class UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample
{
    FName ParameterName;
    FGuid ExpressionGUID;
    FName Group;
}

class UMaterialExpressionSaturate : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionSceneColor : UMaterialExpression
{
    TEnumAsByte<EMaterialSceneAttributeInputMode::Type> InputMode;
    FExpressionInput Input;
    FExpressionInput OffsetFraction;
    FVector2D ConstInput;
}

class UMaterialExpressionSceneDepth : UMaterialExpression
{
    TEnumAsByte<EMaterialSceneAttributeInputMode::Type> InputMode;
    FExpressionInput Input;
    FExpressionInput Coordinates;
    FVector2D ConstInput;
}

class UMaterialExpressionSceneTexelSize : UMaterialExpression
{
}

class UMaterialExpressionSceneTexture : UMaterialExpression
{
    FExpressionInput Coordinates;
    TEnumAsByte<ESceneTextureId> SceneTextureId;
    bool bFiltered;
}

class UMaterialExpressionScreenPosition : UMaterialExpression
{
}

class UMaterialExpressionSetMaterialAttributes : UMaterialExpression
{
    TArray<FExpressionInput> Inputs;
    TArray<FGuid> AttributeSetTypes;
}

class UMaterialExpressionShaderStageSwitch : UMaterialExpression
{
    FExpressionInput PixelShader;
    FExpressionInput VertexShader;
}

class UMaterialExpressionShadingModel : UMaterialExpression
{
    TEnumAsByte<EMaterialShadingModel> ShadingModel;
}

class UMaterialExpressionShadingPathSwitch : UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput Inputs;
}

class UMaterialExpressionShadowReplace : UMaterialExpression
{
    FExpressionInput Default;
    FExpressionInput Shadow;
}

class UMaterialExpressionSign : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionSine : UMaterialExpression
{
    FExpressionInput Input;
    float Period;
}

class UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput
{
    FExpressionInput ScatteringCoefficients;
    FExpressionInput AbsorptionCoefficients;
    FExpressionInput PhaseG;
}

class UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression
{
    int32 LightIndex;
}

class UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression
{
    int32 LightIndex;
    FExpressionInput WorldPosition;
}

class UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression
{
    int32 LightIndex;
}

class UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression
{
    FExpressionInput WorldPosition;
}

class UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance : UMaterialExpression
{
}

class UMaterialExpressionSkyAtmosphereViewLuminance : UMaterialExpression
{
}

class UMaterialExpressionSobol : UMaterialExpression
{
    FExpressionInput Cell;
    FExpressionInput Index;
    FExpressionInput Seed;
    uint32 ConstIndex;
    FVector2D ConstSeed;
}

class UMaterialExpressionSpeedTree : UMaterialExpression
{
    FExpressionInput GeometryInput;
    FExpressionInput WindInput;
    FExpressionInput LODInput;
    FExpressionInput ExtraBendWS;
    TEnumAsByte<ESpeedTreeGeometryType> GeometryType;
    TEnumAsByte<ESpeedTreeWindType> WindType;
    TEnumAsByte<ESpeedTreeLODType> LODType;
    float BillboardThreshold;
    bool bAccurateWindVelocities;
}

class UMaterialExpressionSphereMask : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    FExpressionInput Radius;
    FExpressionInput Hardness;
    float AttenuationRadius;
    float HardnessPercent;
}

class UMaterialExpressionSphericalParticleOpacity : UMaterialExpression
{
    FExpressionInput Density;
    float ConstantDensity;
}

class UMaterialExpressionSquareRoot : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionStaticBool : UMaterialExpression
{
    uint8 Value;
}

class UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter
{
    uint8 DefaultValue;
}

class UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter
{
    FExpressionInput Input;
    uint8 DefaultR;
    uint8 DefaultG;
    uint8 DefaultB;
    uint8 DefaultA;
}

class UMaterialExpressionStaticSwitch : UMaterialExpression
{
    uint8 DefaultValue;
    FExpressionInput A;
    FExpressionInput B;
    FExpressionInput Value;
}

class UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoolParameter
{
    FExpressionInput A;
    FExpressionInput B;
}

class UMaterialExpressionSubtract : UMaterialExpression
{
    FExpressionInput A;
    FExpressionInput B;
    float ConstA;
    float ConstB;
}

class UMaterialExpressionTangent : UMaterialExpression
{
    FExpressionInput Input;
    float Period;
}

class UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput
{
    FExpressionInput Input;
}

class UMaterialExpressionTemporalSobol : UMaterialExpression
{
    FExpressionInput Index;
    FExpressionInput Seed;
    uint32 ConstIndex;
    FVector2D ConstSeed;
}

class UMaterialExpressionTextureCoordinate : UMaterialExpression
{
    int32 CoordinateIndex;
    float UTiling;
    float VTiling;
    uint8 UnMirrorU;
    uint8 UnMirrorV;
}

class UMaterialExpressionTextureObject : UMaterialExpressionTextureBase
{
}

class UMaterialExpressionTextureObjectParameter : UMaterialExpressionTextureSampleParameter
{
}

class UMaterialExpressionTextureProperty : UMaterialExpression
{
    FExpressionInput TextureObject;
    TEnumAsByte<EMaterialExposedTextureProperty> Property;
}

class UMaterialExpressionTextureSampleParameter2DArray : UMaterialExpressionTextureSampleParameter
{
}

class UMaterialExpressionTextureSampleParameterCube : UMaterialExpressionTextureSampleParameter
{
}

class UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D
{
    uint8 bBlend;
}

class UMaterialExpressionTextureSampleParameterVolume : UMaterialExpressionTextureSampleParameter
{
}

class UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput
{
    FExpressionInput TransmittanceColor;
}

class UMaterialExpressionTime : UMaterialExpression
{
    uint8 bIgnorePause;
    uint8 bOverride_Period;
    float Period;
}

class UMaterialExpressionTransform : UMaterialExpression
{
    FExpressionInput Input;
    TEnumAsByte<EMaterialVectorCoordTransformSource> TransformSourceType;
    TEnumAsByte<EMaterialVectorCoordTransform> TransformType;
}

class UMaterialExpressionTransformPosition : UMaterialExpression
{
    FExpressionInput Input;
    TEnumAsByte<EMaterialPositionTransformSource> TransformSourceType;
    TEnumAsByte<EMaterialPositionTransformSource> TransformType;
}

class UMaterialExpressionTruncate : UMaterialExpression
{
    FExpressionInput Input;
}

class UMaterialExpressionTwoSidedSign : UMaterialExpression
{
}

class UMaterialExpressionVectorNoise : UMaterialExpression
{
    FExpressionInput Position;
    TEnumAsByte<EVectorNoiseFunction> NoiseFunction;
    int32 Quality;
    uint8 bTiling;
    uint32 TileSize;
}

class UMaterialExpressionVertexColor : UMaterialExpression
{
}

class UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput
{
    FExpressionInput Input;
}

class UMaterialExpressionVertexNormalWS : UMaterialExpression
{
}

class UMaterialExpressionVertexTangentWS : UMaterialExpression
{
}

class UMaterialExpressionViewProperty : UMaterialExpression
{
    TEnumAsByte<EMaterialExposedViewProperty> Property;
}

class UMaterialExpressionViewSize : UMaterialExpression
{
}

class UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression
{
    FExpressionInput No;
    FExpressionInput Yes;
}

class UMaterialExpressionWorldPosition : UMaterialExpression
{
    TEnumAsByte<EWorldPositionIncludedOffsets> WorldPositionShaderOffset;
}

class UMaterialFunctionInterface : UObject
{
    FGuid StateId;
    EMaterialFunctionUsage MaterialFunctionUsage;
}

class UMaterialFunction : UMaterialFunctionInterface
{
    FString Description;
    uint8 bExposeToLibrary;
    uint8 bPrefixParameterNames;
    uint8 bReentrantFlag;
}

class UMaterialFunctionInstance : UMaterialFunctionInterface
{
    UMaterialFunctionInterface* Parent;
    UMaterialFunctionInterface* Base;
    TArray<FScalarParameterValue> ScalarParameterValues;
    TArray<FVectorParameterValue> VectorParameterValues;
    TArray<FTextureParameterValue> TextureParameterValues;
    TArray<FFontParameterValue> FontParameterValues;
    TArray<FStaticSwitchParameter> StaticSwitchParameterValues;
    TArray<FStaticComponentMaskParameter> StaticComponentMaskParameterValues;
    TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;
}

class UMaterialFunctionMaterialLayer : UMaterialFunction
{
}

class UMaterialFunctionMaterialLayerInstance : UMaterialFunctionInstance
{
}

class UMaterialFunctionMaterialLayerBlend : UMaterialFunction
{
}

class UMaterialFunctionMaterialLayerBlendInstance : UMaterialFunctionInstance
{
}

class AMaterialInstanceActor : AActor
{
    TArray<AActor*> TargetActors;
}

class UMaterialInstanceDynamic : UMaterialInstance
{

    void SetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, FLinearColor Value);
    void SetVectorParameterValue(FName ParameterName, FLinearColor Value);
    void SetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, UTexture* Value);
    void SetTextureParameterValue(FName ParameterName, UTexture* Value);
    void SetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo, float Value);
    void SetScalarParameterValue(FName ParameterName, float Value);
    void K2_InterpolateMaterialInstanceParams(UMaterialInstance* SourceA, UMaterialInstance* SourceB, float alpha);
    FLinearColor K2_GetVectorParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    FLinearColor K2_GetVectorParameterValue(FName ParameterName);
    UTexture* K2_GetTextureParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    UTexture* K2_GetTextureParameterValue(FName ParameterName);
    float K2_GetScalarParameterValueByInfo(const FMaterialParameterInfo& ParameterInfo);
    float K2_GetScalarParameterValue(FName ParameterName);
    void K2_CopyMaterialInstanceParameters(UMaterialInterface* Source, bool bQuickParametersOnly);
    void CopyParameterOverrides(UMaterialInstance* MaterialInstance);
    void CopyInterpParameters(UMaterialInstance* Source);
}

class UMaterialParameterCollection : UObject
{
    FGuid StateId;
    TArray<FCollectionScalarParameter> ScalarParameters;
    TArray<FCollectionVectorParameter> VectorParameters;
}

class UMaterialParameterCollectionInstance : UObject
{
    UMaterialParameterCollection* Collection;
}

class AMatineeActor : AActor
{
    UInterpData* MatineeData;
    FName MatineeControllerName;
    float PlayRate;
    uint8 bPlayOnLevelLoad;
    uint8 bForceStartPos;
    float ForceStartPosition;
    uint8 bLooping;
    uint8 bRewindOnPlay;
    uint8 bNoResetOnRewind;
    uint8 bRewindIfAlreadyPlaying;
    uint8 bDisableRadioFilter;
    uint8 bClientSideOnly;
    uint8 bSkipUpdateIfNotVisible;
    uint8 bIsSkippable;
    int32 PreferredSplitScreenNum;
    uint8 bDisableMovementInput;
    uint8 bDisableLookAtInput;
    uint8 bHidePlayer;
    uint8 bHideHud;
    TArray<FInterpGroupActorInfo> GroupActorInfos;
    uint8 bShouldShowGore;
    TArray<UInterpGroupInst*> GroupInst;
    TArray<FCameraCutInfo> CameraCuts;
    uint8 bIsPlaying;
    uint8 bReversePlayback;
    uint8 bPaused;
    uint8 bPendingStop;
    float InterpPosition;
    uint8 ReplicationForceIsPlaying;
    FMatineeActorOnPlay OnPlay;
    void OnMatineeEvent();
    FMatineeActorOnStop OnStop;
    void OnMatineeEvent();
    FMatineeActorOnPause OnPause;
    void OnMatineeEvent();

    void Stop();
    void SetPosition(float NewPosition, bool bJump);
    void SetLoopingState(bool bNewLooping);
    void Reverse();
    void Play();
    void Pause();
    void EnableGroupByName(FString GroupName, bool bEnable);
    void ChangePlaybackDirection();
}

class AMatineeActorCameraAnim : AMatineeActor
{
    UCameraAnim* CameraAnim;
}

class UMatineeAnimInterface : UInterface
{
}

class UMatineeInterface : UInterface
{
}

class AMeshMergeCullingVolume : UVolume
{
}

class UMeshSimplificationSettings : UDeveloperSettings
{
    FName MeshReductionModuleName;
}

class UMeshVertexPainterKismetLibrary : UBlueprintFunctionLibrary
{

    void RemovePaintedVertices(UStaticMeshComponent* StaticMeshComponent);
    void PaintVerticesSingleColor(UStaticMeshComponent* StaticMeshComponent, const FLinearColor& FillColor, bool bConvertToSRGB);
    void PaintVerticesLerpAlongAxis(UStaticMeshComponent* StaticMeshComponent, const FLinearColor& StartColor, const FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB);
}

class UMicroTransactionBase : UPlatformInterfaceBase
{
    TArray<FPurchaseInfo> AvailableProducts;
    FString LastError;
    FString LastErrorSolution;
}

class UModelComponent : UPrimitiveComponent
{
    UBodySetup* ModelBodySetup;
}

class UMorphTarget : UObject
{
    USkeletalMesh* BaseSkelMesh;
}

class UNavAgentInterface : UInterface
{
}

class UNavAreaBase : UObject
{
}

class UNavCollisionBase : UObject
{
    uint8 bIsDynamicObstacle;
}

class UNavEdgeProviderInterface : UInterface
{
}

class UNavigationDataChunk : UObject
{
    FName NavigationDataName;
}

class UNavigationDataInterface : UInterface
{
}

class UNavigationSystemBase : UObject
{
}

class UNavigationSystemConfig : UObject
{
    FSoftClassPath NavigationSystemClass;
    FNavAgentSelector SupportedAgentsMask;
    FName DefaultAgentName;
    uint8 bIsOverriden;
}

class UNullNavSysConfig : UNavigationSystemConfig
{
}

class UNavLinkDefinition : UObject
{
    TArray<FNavigationLink> Links;
    TArray<FNavigationSegmentLink> SegmentLinks;
}

class UNavPathObserverInterface : UInterface
{
}

class UNavRelevantInterface : UInterface
{
}

class USimulatedClientNetConnection : UNetConnection
{
}

class UNetPushModelHelpers : UBlueprintFunctionLibrary
{

    void MarkPropertyDirtyFromRepIndex(UObject* Object, int32 RepIndex, FName PropertyName);
    void MarkPropertyDirty(UObject* Object, FName PropertyName);
}

class UNetworkPredictionInterface : UInterface
{
}

class UNetworkSettings : UDeveloperSettings
{
    uint8 bVerifyPeer;
    uint8 bEnableMultiplayerWorldOriginRebasing;
    int32 MaxRepArraySize;
    int32 MaxRepArrayMemory;
    TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles;
}

class UNodeMappingContainer : UObject
{
    TMap<FName, FNodeItem> SourceItems;
    TMap<FName, FNodeItem> TargetItems;
    TMap<FName, FName> SourceToTarget;
    TSoftObjectPtr<UObject> SourceAsset;
    TSoftObjectPtr<UObject> TargetAsset;
}

class UNodeMappingProviderInterface : UInterface
{
}

class ANote : AActor
{
}

class UObjectLibrary : UObject
{
    UClass* ObjectBaseClass;
    bool bHasBlueprintClasses;
    TArray<UObject*> Objects;
    TArray<TWeakObjectPtr<UObject>> WeakObjects;
    bool bUseWeakReferences;
    bool bIsFullyLoaded;
}

class UObjectReferencer : UObject
{
    TArray<UObject*> ReferencedObjects;
}

class UObjectTraceWorldSubsystem : UWorldSubsystem
{
}

class UPackageMapClient : UPackageMap
{
}

class APainCausingVolume : UPhysicsVolume
{
    uint8 bPainCausing;
    float DamagePerSec;
    TSubclassOf<UDamageType> DamageType;
    float PainInterval;
    uint8 bEntryPain;
    uint8 BACKUP_bPainCausing;
    AController* DamageInstigator;
}

class UParticleEmitter : UObject
{
    FName EmitterName;
    int32 SubUVDataOffset;
    TEnumAsByte<EEmitterRenderMode> EmitterRenderMode;
    EParticleSignificanceLevel SignificanceLevel;
    uint8 bUseLegacySpawningBehavior;
    uint8 ConvertedModules;
    uint8 bIsSoloing;
    uint8 bCookedOut;
    uint8 bDisabledLODsKeepEmitterAlive;
    uint8 bDisableWhenInsignficant;
    TArray<UParticleLODLevel*> LODLevels;
    int32 PeakActiveParticles;
    int32 InitialAllocationCount;
    float QualityLevelSpawnRateScale;
    uint32 DetailModeBitmask;
}

class AParticleEventManager : AActor
{
}

class UParticleLODLevel : UObject
{
    int32 Level;
    uint8 bEnabled;
    UParticleModuleRequired* RequiredModule;
    TArray<UParticleModule*> Modules;
    UParticleModuleTypeDataBase* TypeDataModule;
    UParticleModuleSpawn* SpawnModule;
    UParticleModuleEventGenerator* EventGenerator;
    TArray<UParticleModuleSpawnBase*> SpawningModules;
    TArray<UParticleModule*> SpawnModules;
    TArray<UParticleModule*> UpdateModules;
    TArray<UParticleModuleOrbit*> OrbitModules;
    TArray<UParticleModuleEventReceiverBase*> EventReceiverModules;
    uint8 ConvertedModules;
    int32 PeakActiveParticles;
}

class UParticleModule : UObject
{
    uint8 bSpawnModule;
    uint8 bUpdateModule;
    uint8 bFinalUpdateModule;
    uint8 bUpdateForGPUEmitter;
    uint8 bCurvesAsColor;
    uint8 b3DDrawMode;
    uint8 bSupported3DDrawMode;
    uint8 bEnabled;
    uint8 bEditable;
    uint8 LODDuplicate;
    uint8 bSupportsRandomSeed;
    uint8 bRequiresLoopingNotification;
    uint8 LODValidity;
}

class UParticleModuleAccelerationBase : UParticleModule
{
    uint8 bAlwaysInWorldSpace;
}

class UParticleModuleAcceleration : UParticleModuleAccelerationBase
{
    FRawDistributionVector Acceleration;
    uint8 bApplyOwnerScale;
}

class UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase
{
    FVector Acceleration;
}

class UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase
{
    UDistributionFloat* DragCoefficient;
    FRawDistributionFloat DragCoefficientRaw;
}

class UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase
{
    UDistributionFloat* DragScale;
    FRawDistributionFloat DragScaleRaw;
}

class UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase
{
    FRawDistributionVector AccelOverLife;
}

class UParticleModuleAttractorBase : UParticleModule
{
}

class UParticleModuleAttractorLine : UParticleModuleAttractorBase
{
    FVector EndPoint0;
    FVector EndPoint1;
    FRawDistributionFloat range;
    FRawDistributionFloat Strength;
}

class UParticleModuleAttractorParticle : UParticleModuleAttractorBase
{
    FName EmitterName;
    FRawDistributionFloat range;
    uint8 bStrengthByDistance;
    FRawDistributionFloat Strength;
    uint8 bAffectBaseVelocity;
    TEnumAsByte<EAttractorParticleSelectionMethod> SelectionMethod;
    uint8 bRenewSource;
    uint8 bInheritSourceVel;
    int32 LastSelIndex;
}

class UParticleModuleAttractorPoint : UParticleModuleAttractorBase
{
    FRawDistributionVector Position;
    FRawDistributionFloat range;
    FRawDistributionFloat Strength;
    uint8 StrengthByDistance;
    uint8 bAffectBaseVelocity;
    uint8 bOverrideVelocity;
    uint8 bUseWorldSpacePosition;
    uint8 Positive_X;
    uint8 Positive_Y;
    uint8 Positive_Z;
    uint8 Negative_X;
    uint8 Negative_Y;
    uint8 Negative_Z;
}

class UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase
{
    FVector Position;
    float Radius;
    UDistributionFloat* Strength;
    FRawDistributionFloat StrengthRaw;
}

class UParticleModuleBeamBase : UParticleModule
{
}

class UParticleModuleBeamModifier : UParticleModuleBeamBase
{
    TEnumAsByte<BeamModifierType> ModifierType;
    FBeamModifierOptions PositionOptions;
    FRawDistributionVector Position;
    FBeamModifierOptions TangentOptions;
    FRawDistributionVector Tangent;
    uint8 bAbsoluteTangent;
    FBeamModifierOptions StrengthOptions;
    FRawDistributionFloat Strength;
}

class UParticleModuleBeamNoise : UParticleModuleBeamBase
{
    uint8 bLowFreq_Enabled;
    int32 Frequency;
    int32 Frequency_LowRange;
    FRawDistributionVector NoiseRange;
    FRawDistributionFloat NoiseRangeScale;
    uint8 bNRScaleEmitterTime;
    FRawDistributionVector NoiseSpeed;
    uint8 bSmooth;
    float NoiseLockRadius;
    uint8 bNoiseLock;
    uint8 bOscillate;
    float NoiseLockTime;
    float NoiseTension;
    uint8 bUseNoiseTangents;
    FRawDistributionFloat NoiseTangentStrength;
    int32 NoiseTessellation;
    uint8 bTargetNoise;
    float FrequencyDistance;
    uint8 bApplyNoiseScale;
    FRawDistributionFloat NoiseScale;
}

class UParticleModuleBeamSource : UParticleModuleBeamBase
{
    TEnumAsByte<Beam2SourceTargetMethod> SourceMethod;
    FName SourceName;
    uint8 bSourceAbsolute;
    FRawDistributionVector Source;
    uint8 bLockSource;
    TEnumAsByte<Beam2SourceTargetTangentMethod> SourceTangentMethod;
    FRawDistributionVector SourceTangent;
    uint8 bLockSourceTangent;
    FRawDistributionFloat SourceStrength;
    uint8 bLockSourceStength;
}

class UParticleModuleBeamTarget : UParticleModuleBeamBase
{
    TEnumAsByte<Beam2SourceTargetMethod> TargetMethod;
    FName TargetName;
    FRawDistributionVector Target;
    uint8 bTargetAbsolute;
    uint8 bLockTarget;
    TEnumAsByte<Beam2SourceTargetTangentMethod> TargetTangentMethod;
    FRawDistributionVector TargetTangent;
    uint8 bLockTargetTangent;
    FRawDistributionFloat TargetStrength;
    uint8 bLockTargetStength;
    float LockRadius;
}

class UParticleModuleCameraBase : UParticleModule
{
}

class UParticleModuleCameraOffset : UParticleModuleCameraBase
{
    FRawDistributionFloat CameraOffset;
    uint8 bSpawnTimeOnly;
    TEnumAsByte<EParticleCameraOffsetUpdateMethod> UpdateMethod;
}

class UParticleModuleCollisionBase : UParticleModule
{
}

class UParticleModuleCollision : UParticleModuleCollisionBase
{
    FRawDistributionVector DampingFactor;
    FRawDistributionVector DampingFactorRotation;
    FRawDistributionFloat MaxCollisions;
    TEnumAsByte<EParticleCollisionComplete> CollisionCompletionOption;
    TArray<TEnumAsByte<EObjectTypeQuery>> CollisionTypes;
    uint8 bApplyPhysics;
    uint8 bIgnoreTriggerVolumes;
    FRawDistributionFloat ParticleMass;
    float DirScalar;
    uint8 bPawnsDoNotDecrementCount;
    uint8 bOnlyVerticalNormalsDecrementCount;
    float VerticalFudgeFactor;
    FRawDistributionFloat DelayAmount;
    uint8 bDropDetail;
    uint8 bCollideOnlyIfVisible;
    uint8 bIgnoreSourceActor;
    float MaxCollisionDistance;
}

class UParticleModuleCollisionGPU : UParticleModuleCollisionBase
{
    FRawDistributionFloat Resilience;
    FRawDistributionFloat ResilienceScaleOverLife;
    float Friction;
    float RandomSpread;
    float RandomDistribution;
    float RadiusScale;
    float RadiusBias;
    TEnumAsByte<EParticleCollisionResponse::Type> Response;
    TEnumAsByte<EParticleCollisionMode::Type> CollisionMode;
}

class UParticleModuleColorBase : UParticleModule
{
}

class UParticleModuleColor : UParticleModuleColorBase
{
    FRawDistributionVector StartColor;
    FRawDistributionFloat StartAlpha;
    uint8 bClampAlpha;
}

class UParticleModuleColor_Seeded : UParticleModuleColor
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleColorOverLife : UParticleModuleColorBase
{
    FRawDistributionVector ColorOverLife;
    FRawDistributionFloat AlphaOverLife;
    uint8 bClampAlpha;
}

class UParticleModuleColorScaleOverLife : UParticleModuleColorBase
{
    FRawDistributionVector ColorScaleOverLife;
    FRawDistributionFloat AlphaScaleOverLife;
    uint8 bEmitterTime;
}

class UParticleModuleEventBase : UParticleModule
{
}

class UParticleModuleEventGenerator : UParticleModuleEventBase
{
    TArray<FParticleEvent_GenerateInfo> Events;
}

class UParticleModuleEventReceiverBase : UParticleModuleEventBase
{
    TEnumAsByte<EParticleEventType> EventGeneratorType;
    FName EventName;
}

class UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase
{
    uint8 bStopSpawning;
}

class UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase
{
    FRawDistributionFloat SpawnCount;
    uint8 bUseParticleTime;
    uint8 bUsePSysLocation;
    uint8 bInheritVelocity;
    FRawDistributionVector InheritVelocityScale;
    TArray<UPhysicalMaterial*> PhysicalMaterials;
    uint8 bBanPhysicalMaterials;
}

class UParticleModuleEventSendToGame : UObject
{
}

class UParticleModuleKillBase : UParticleModule
{
}

class UParticleModuleKillBox : UParticleModuleKillBase
{
    FRawDistributionVector LowerLeftCorner;
    FRawDistributionVector UpperRightCorner;
    uint8 bAbsolute;
    uint8 bKillInside;
    uint8 bAxisAlignedAndFixedSize;
}

class UParticleModuleKillHeight : UParticleModuleKillBase
{
    FRawDistributionFloat Height;
    uint8 bAbsolute;
    uint8 bFloor;
    uint8 bApplyPSysScale;
}

class UParticleModuleLifetimeBase : UParticleModule
{
}

class UParticleModuleLifetime : UParticleModuleLifetimeBase
{
    FRawDistributionFloat LifeTime;
}

class UParticleModuleLifetime_Seeded : UParticleModuleLifetime
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleLightBase : UParticleModule
{
}

class UParticleModuleLight : UParticleModuleLightBase
{
    bool bUseInverseSquaredFalloff;
    bool bAffectsTranslucency;
    bool bPreviewLightRadius;
    float SpawnFraction;
    FRawDistributionVector ColorScaleOverLife;
    FRawDistributionFloat BrightnessOverLife;
    FRawDistributionFloat RadiusScale;
    FRawDistributionFloat LightExponent;
    FLightingChannels LightingChannels;
    float VolumetricScatteringIntensity;
    bool bHighQualityLights;
    bool bShadowCastingLights;
}

class UParticleModuleLight_Seeded : UParticleModuleLight
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleLocationBase : UParticleModule
{
}

class UParticleModuleLocation : UParticleModuleLocationBase
{
    FRawDistributionVector StartLocation;
    float DistributeOverNPoints;
    float DistributeThreshold;
}

class UParticleModuleLocation_Seeded : UParticleModuleLocation
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleLocationBoneSocket : UParticleModuleLocationBase
{
    TEnumAsByte<ELocationBoneSocketSource> SourceType;
    FVector UniversalOffset;
    TArray<FLocationBoneSocketInfo> SourceLocations;
    TEnumAsByte<ELocationBoneSocketSelectionMethod> SelectionMethod;
    uint8 bUpdatePositionEachFrame;
    uint8 bOrientMeshEmitters;
    uint8 bInheritBoneVelocity;
    float InheritVelocityScale;
    FName SkelMeshActorParamName;
    int32 NumPreSelectedIndices;
}

class UParticleModuleLocationDirect : UParticleModuleLocationBase
{
    FRawDistributionVector Location;
    FRawDistributionVector LocationOffset;
    FRawDistributionVector ScaleFactor;
    FRawDistributionVector Direction;
}

class UParticleModuleLocationEmitter : UParticleModuleLocationBase
{
    FName EmitterName;
    TEnumAsByte<ELocationEmitterSelectionMethod> SelectionMethod;
    uint8 InheritSourceVelocity;
    float InheritSourceVelocityScale;
    uint8 bInheritSourceRotation;
    float InheritSourceRotationScale;
}

class UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase
{
    FName EmitterName;
}

class UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase
{
    uint8 Positive_X;
    uint8 Positive_Y;
    uint8 Positive_Z;
    uint8 Negative_X;
    uint8 Negative_Y;
    uint8 Negative_Z;
    uint8 SurfaceOnly;
    uint8 Velocity;
    FRawDistributionFloat VelocityScale;
    FRawDistributionVector StartLocation;
}

class UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase
{
    uint8 RadialVelocity;
    FRawDistributionFloat StartRadius;
    FRawDistributionFloat StartHeight;
    TEnumAsByte<CylinderHeightAxis> HeightAxis;
}

class UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase
{
    FRawDistributionFloat StartRadius;
}

class UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase
{
    FRawDistributionVector StartOffset;
    FRawDistributionFloat Height;
    FRawDistributionFloat Angle;
    FRawDistributionFloat Thickness;
}

class UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase
{
    TEnumAsByte<ELocationSkelVertSurfaceSource> SourceType;
    FVector UniversalOffset;
    uint8 bUpdatePositionEachFrame;
    uint8 bOrientMeshEmitters;
    uint8 bInheritBoneVelocity;
    float InheritVelocityScale;
    FName SkelMeshActorParamName;
    TArray<FName> ValidAssociatedBones;
    uint8 bEnforceNormalCheck;
    FVector NormalToCompare;
    float NormalCheckToleranceDegrees;
    float NormalCheckTolerance;
    TArray<int32> ValidMaterialIndices;
    uint8 bInheritVertexColor;
    uint8 bInheritUV;
    uint32 InheritUVChannel;
}

class UParticleModuleLocationWorldOffset : UParticleModuleLocation
{
}

class UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleMaterialBase : UParticleModule
{
}

class UParticleModuleMeshMaterial : UParticleModuleMaterialBase
{
    TArray<UMaterialInterface*> MeshMaterials;
}

class UParticleModuleRotationBase : UParticleModule
{
}

class UParticleModuleMeshRotation : UParticleModuleRotationBase
{
    FRawDistributionVector StartRotation;
    uint8 bInheritParent;
}

class UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleRotationRateBase : UParticleModule
{
}

class UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase
{
    FRawDistributionVector StartRotationRate;
}

class UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase
{
    FRawDistributionVector LifeMultiplier;
}

class UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase
{
    FRawDistributionVector RotRate;
    uint8 bScaleRotRate;
}

class UParticleModuleOrbitBase : UParticleModule
{
    uint8 bUseEmitterTime;
}

class UParticleModuleOrbit : UParticleModuleOrbitBase
{
    TEnumAsByte<EOrbitChainMode> ChainMode;
    FRawDistributionVector OffsetAmount;
    FOrbitOptions OffsetOptions;
    FRawDistributionVector RotationAmount;
    FOrbitOptions RotationOptions;
    FRawDistributionVector RotationRateAmount;
    FOrbitOptions RotationRateOptions;
}

class UParticleModuleOrientationBase : UParticleModule
{
}

class UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase
{
    TEnumAsByte<EParticleAxisLock> LockAxisFlags;
}

class UParticleModuleParameterBase : UParticleModule
{
}

class UParticleModuleParameterDynamic : UParticleModuleParameterBase
{
    TArray<FEmitterDynamicParameter> DynamicParams;
    int32 UpdateFlags;
    uint8 bUsesVelocity;
}

class UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModulePivotOffset : UParticleModuleLocationBase
{
    FVector2D PivotOffset;
}

class UParticleModuleRequired : UParticleModule
{
    UMaterialInterface* Material;
    float MinFacingCameraBlendDistance;
    float MaxFacingCameraBlendDistance;
    FVector EmitterOrigin;
    FRotator EmitterRotation;
    TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;
    uint8 bUseLocalSpace;
    uint8 bKillOnDeactivate;
    uint8 bKillOnCompleted;
    TEnumAsByte<EParticleSortMode> SortMode;
    uint8 bUseLegacyEmitterTime;
    uint8 bRemoveHMDRoll;
    uint8 bEmitterDurationUseRange;
    float EmitterDuration;
    FRawDistributionFloat SpawnRate;
    TArray<FParticleBurst> BurstList;
    float EmitterDelay;
    float EmitterDelayLow;
    uint8 bDelayFirstLoopOnly;
    TEnumAsByte<EParticleSubUVInterpMethod> InterpolationMethod;
    uint8 bScaleUV;
    uint8 bEmitterDelayUseRange;
    TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod;
    uint8 bOverrideSystemMacroUV;
    uint8 bUseMaxDrawCount;
    TEnumAsByte<EOpacitySourceMode> OpacitySourceMode;
    TEnumAsByte<EEmitterNormalsMode> EmitterNormalsMode;
    uint8 bOrbitModuleAffectsVelocityAlignment;
    int32 SubImages_Horizontal;
    int32 SubImages_Vertical;
    float RandomImageTime;
    int32 RandomImageChanges;
    FVector MacroUVPosition;
    float MacroUVRadius;
    EParticleUVFlipMode UVFlippingMode;
    TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode;
    uint8 bDurationRecalcEachLoop;
    FVector NormalsSphereCenter;
    float AlphaThreshold;
    int32 EmitterLoops;
    UTexture2D* CutoutTexture;
    int32 MaxDrawCount;
    float EmitterDurationLow;
    FVector NormalsCylinderDirection;
    TArray<FName> NamedMaterialOverrides;
}

class UParticleModuleRotation : UParticleModuleRotationBase
{
    FRawDistributionFloat StartRotation;
}

class UParticleModuleRotation_Seeded : UParticleModuleRotation
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleRotationOverLifetime : UParticleModuleRotationBase
{
    FRawDistributionFloat RotationOverLife;
    uint8 Scale;
}

class UParticleModuleRotationRate : UParticleModuleRotationRateBase
{
    FRawDistributionFloat StartRotationRate;
}

class UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase
{
    FRawDistributionFloat LifeMultiplier;
}

class UParticleModuleSizeBase : UParticleModule
{
}

class UParticleModuleSize : UParticleModuleSizeBase
{
    FRawDistributionVector StartSize;
}

class UParticleModuleSize_Seeded : UParticleModuleSize
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase
{
    FRawDistributionVector LifeMultiplier;
    uint8 MultiplyX;
    uint8 MultiplyY;
    uint8 MultiplyZ;
}

class UParticleModuleSizeScale : UParticleModuleSizeBase
{
    FRawDistributionVector SizeScale;
    uint8 EnableX;
    uint8 EnableY;
    uint8 EnableZ;
}

class UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase
{
    FVector2D SpeedScale;
    FVector2D MaxScale;
}

class UParticleModuleSourceMovement : UParticleModuleLocationBase
{
    FRawDistributionVector SourceMovementScale;
}

class UParticleModuleSpawnBase : UParticleModule
{
    uint8 bProcessSpawnRate;
    uint8 bProcessBurstList;
}

class UParticleModuleSpawn : UParticleModuleSpawnBase
{
    FRawDistributionFloat Rate;
    FRawDistributionFloat RateScale;
    TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod;
    TArray<FParticleBurst> BurstList;
    FRawDistributionFloat BurstScale;
    uint8 bApplyGlobalSpawnRateScale;
}

class UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase
{
    float UnitScalar;
    float MovementTolerance;
    FRawDistributionFloat SpawnPerUnit;
    float MaxFrameDistance;
    uint8 bIgnoreSpawnRateWhenMoving;
    uint8 bIgnoreMovementAlongX;
    uint8 bIgnoreMovementAlongY;
    uint8 bIgnoreMovementAlongZ;
}

class UParticleModuleSubUVBase : UParticleModule
{
}

class UParticleModuleSubUV : UParticleModuleSubUVBase
{
    USubUVAnimation* Animation;
    FRawDistributionFloat SubImageIndex;
    uint8 bUseRealTime;
}

class UParticleModuleSubUVMovie : UParticleModuleSubUV
{
    uint8 bUseEmitterTime;
    FRawDistributionFloat FrameRate;
    int32 StartingFrame;
}

class UParticleModuleTrailBase : UParticleModule
{
}

class UParticleModuleTrailSource : UParticleModuleTrailBase
{
    TEnumAsByte<ETrail2SourceMethod> SourceMethod;
    FName SourceName;
    FRawDistributionFloat SourceStrength;
    uint8 bLockSourceStength;
    int32 SourceOffsetCount;
    TArray<FVector> SourceOffsetDefaults;
    TEnumAsByte<EParticleSourceSelectionMethod> SelectionMethod;
    uint8 bInheritRotation;
}

class UParticleModuleTypeDataBase : UParticleModule
{
}

class UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase
{
    uint8 bDeadTrailsOnDeactivate;
    uint8 bEnablePreviousTangentRecalculation;
    uint8 bTangentRecalculationEveryFrame;
    float TilingDistance;
    float DistanceTessellationStepSize;
    float TangentTessellationStepSize;
    float WidthTessellationStepSize;
}

class UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase
{
    TEnumAsByte<EBeam2Method> BeamMethod;
    int32 TextureTile;
    float TextureTileDistance;
    int32 Sheets;
    int32 MaxBeamCount;
    float Speed;
    int32 InterpolationPoints;
    uint8 bAlwaysOn;
    int32 UpVectorStepSize;
    FName BranchParentName;
    FRawDistributionFloat Distance;
    TEnumAsByte<EBeamTaperMethod> TaperMethod;
    FRawDistributionFloat TaperFactor;
    FRawDistributionFloat TaperScale;
    uint8 RenderGeometry;
    uint8 RenderDirectLine;
    uint8 RenderLines;
    uint8 RenderTessellation;
}

class UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase
{
    FGPUSpriteEmitterInfo EmitterInfo;
    FGPUSpriteResourceData ResourceData;
    float CameraMotionBlurAmount;
    uint8 bClearExistingParticlesOnInit;
}

class UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase
{
    UStaticMesh* Mesh;
    float LODSizeScale;
    uint8 bUseStaticMeshLODs;
    uint8 CastShadows;
    uint8 DoCollisions;
    TEnumAsByte<EMeshScreenAlignment> MeshAlignment;
    uint8 bOverrideMaterial;
    uint8 bOverrideDefaultMotionBlurSettings;
    uint8 bEnableMotionBlur;
    FRawDistributionVector RollPitchYawRange;
    TEnumAsByte<EParticleAxisLock> AxisLockOption;
    uint8 bCameraFacing;
    TEnumAsByte<EMeshCameraFacingUpAxis> CameraFacingUpAxisOption;
    TEnumAsByte<EMeshCameraFacingOptions> CameraFacingOption;
    uint8 bApplyParticleRotationAsSpin;
    uint8 bFaceCameraDirectionRatherThanPosition;
    uint8 bCollisionsConsiderPartilceSize;
}

class UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase
{
    int32 MaxTessellationBetweenParticles;
    int32 SheetsPerTrail;
    int32 MaxTrailCount;
    int32 MaxParticleInTrailCount;
    uint8 bDeadTrailsOnDeactivate;
    uint8 bDeadTrailsOnSourceLoss;
    uint8 bClipSourceSegement;
    uint8 bEnablePreviousTangentRecalculation;
    uint8 bTangentRecalculationEveryFrame;
    uint8 bSpawnInitialParticle;
    TEnumAsByte<ETrailsRenderAxisOption> RenderAxis;
    float TangentSpawningScalar;
    uint8 bRenderGeometry;
    uint8 bRenderSpawnPoints;
    uint8 bRenderTangents;
    uint8 bRenderTessellation;
    float TilingDistance;
    float DistanceTessellationStepSize;
    uint8 bEnableTangentDiffInterpScale;
    float TangentTessellationScalar;
}

class UParticleModuleVectorFieldBase : UParticleModule
{
}

class UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase
{
    uint8 bOverrideGlobalVectorFieldTightness;
    float GlobalVectorFieldScale;
    float GlobalVectorFieldTightness;
}

class UParticleModuleVectorFieldLocal : UParticleModuleVectorFieldBase
{
    UVectorField* VectorField;
    FVector RelativeTranslation;
    FRotator RelativeRotation;
    FVector RelativeScale3D;
    float Intensity;
    float Tightness;
    uint8 bIgnoreComponentTransform;
    uint8 bTileX;
    uint8 bTileY;
    uint8 bTileZ;
    uint8 bUseFixDT;
}

class UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase
{
    FVector MinInitialRotation;
    FVector MaxInitialRotation;
}

class UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase
{
    FVector RotationRate;
}

class UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase
{
    UDistributionFloat* VectorFieldScale;
    FRawDistributionFloat VectorFieldScaleRaw;
}

class UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase
{
    UDistributionFloat* VectorFieldScaleOverLife;
    FRawDistributionFloat VectorFieldScaleOverLifeRaw;
}

class UParticleModuleVelocityBase : UParticleModule
{
    uint8 bInWorldSpace;
    uint8 bApplyOwnerScale;
}

class UParticleModuleVelocity : UParticleModuleVelocityBase
{
    FRawDistributionVector StartVelocity;
    FRawDistributionFloat StartVelocityRadial;
}

class UParticleModuleVelocity_Seeded : UParticleModuleVelocity
{
    FParticleRandomSeedInfo RandomSeedInfo;
}

class UParticleModuleVelocityCone : UParticleModuleVelocityBase
{
    FRawDistributionFloat Angle;
    FRawDistributionFloat Velocity;
    FVector Direction;
}

class UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase
{
    FRawDistributionVector Scale;
}

class UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase
{
    FRawDistributionVector VelOverLife;
    uint8 Absolute;
}

class UParticleSpriteEmitter : UParticleEmitter
{
}

class UParticleSystem : UFXSystemAsset
{
    float UpdateTime_FPS;
    float UpdateTime_Delta;
    float WarmupTime;
    float WarmupTickRate;
    TArray<UParticleEmitter*> Emitters;
    UParticleSystemComponent* PreviewComponent;
    UInterpCurveEdSetup* CurveEdSetup;
    float LODDistanceCheckTime;
    float MacroUVRadius;
    TArray<float> LODDistances;
    TArray<FParticleSystemLOD> LODSettings;
    FBox FixedRelativeBoundingBox;
    float SecondsBeforeInactive;
    float Delay;
    float DelayLow;
    uint8 bOrientZAxisTowardCamera;
    uint8 bUseFixedRelativeBoundingBox;
    uint8 bShouldResetPeakCounts;
    uint8 bHasPhysics;
    uint8 bUseRealtimeThumbnail;
    uint8 ThumbnailImageOutOfDate;
    uint8 bUseDelayRange;
    uint8 bAllowManagedTicking;
    uint8 bAutoDeactivate;
    uint8 bRegenerateLODDuplicate;
    TEnumAsByte<EParticleSystemUpdateMode> SystemUpdateMode;
    TEnumAsByte<ParticleSystemLODMethod> LODMethod;
    EParticleSystemInsignificanceReaction InsignificantReaction;
    TEnumAsByte<EParticleSystemOcclusionBoundsMethod> OcclusionBoundsMethod;
    EParticleSignificanceLevel MaxSignificanceLevel;
    uint32 MinTimeBetweenTicks;
    float InsignificanceDelay;
    FVector MacroUVPosition;
    FBox CustomOcclusionBounds;
    TArray<FLODSoloTrack> SoloTracking;
    TArray<FNamedEmitterMaterial> NamedMaterialSlots;

    bool ContainsEmitterType(TSubclassOf<UObject> TypeData);
}

class UParticleSystemReplay : UObject
{
    int32 ClipIDNumber;
}

class UPathFollowingAgentInterface : UInterface
{
}

class UPawnNoiseEmitterComponent : UActorComponent
{
    uint8 bAIPerceptionSystemCompatibilityMode;
    FVector LastRemoteNoisePosition;
    float NoiseLifetime;
    float LastRemoteNoiseVolume;
    float LastRemoteNoiseTime;
    float LastLocalNoiseVolume;
    float LastLocalNoiseTime;

    void MakeNoise(AActor* NoiseMaker, float Loudness, const FVector& NoiseLocation);
}

class UPhysicalAnimationComponent : UActorComponent
{
    float StrengthMultiplyer;
    USkeletalMeshComponent* SkeletalMeshComponent;

    void SetStrengthMultiplyer(float InStrengthMultiplyer);
    void SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent);
    FTransform GetBodyTargetTransform(FName BodyName);
    void ApplyPhysicalAnimationSettingsBelow(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf);
    void ApplyPhysicalAnimationSettings(FName BodyName, const FPhysicalAnimationData& PhysicalAnimationData);
    void ApplyPhysicalAnimationProfileBelow(FName BodyName, FName ProfileName, bool bIncludeSelf, bool bClearNotFound);
}

class UPhysicalMaterialMask : UObject
{
    int32 UVChannelIndex;
    TEnumAsByte<TextureAddress> AddressX;
    TEnumAsByte<TextureAddress> AddressY;
}

class UDEPRECATED_PhysicalMaterialPropertyBase : UObject
{
}

class UPhysicsAsset : UObject
{
    TArray<int32> BoundsBodies;
    TArray<USkeletalBodySetup*> SkeletalBodySetups;
    TArray<UPhysicsConstraintTemplate*> ConstraintSetup;
    FSolverIterations SolverIterations;
    uint8 bNotForDedicatedServer;
    UThumbnailInfo* ThumbnailInfo;
    TArray<UBodySetup*> BodySetup;
}

class USkeletalBodySetup : UBodySetup
{
    bool bSkipScaleFromAnimation;
    TArray<FPhysicalAnimationProfile> PhysicalAnimationData;
}

class UPhysicsCollisionHandler : UObject
{
    float ImpactThreshold;
    float ImpactReFireDelay;
    USoundBase* DefaultImpactSound;
    float LastImpactSoundTime;
}

class ARigidBodyBase : AActor
{
}

class APhysicsConstraintActor : ARigidBodyBase
{
    UPhysicsConstraintComponent* ConstraintComp;
    AActor* ConstraintActor1;
    AActor* ConstraintActor2;
    uint8 bDisableCollision;
}

class UPhysicsConstraintComponent : USceneComponent
{
    AActor* ConstraintActor1;
    FConstrainComponentPropName ComponentName1;
    AActor* ConstraintActor2;
    FConstrainComponentPropName ComponentName2;
    UPhysicsConstraintTemplate* ConstraintSetup;
    FPhysicsConstraintComponentOnConstraintBroken OnConstraintBroken;
    void ConstraintBrokenSignature(int32 ConstraintIndex);
    FConstraintInstance ConstraintInstance;

    void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    void SetOrientationDriveSLERP(bool bEnableSLERP);
    void SetLinearZLimit(uint8 ConstraintType, float LimitSize);
    void SetLinearYLimit(uint8 ConstraintType, float LimitSize);
    void SetLinearXLimit(uint8 ConstraintType, float LimitSize);
    void SetLinearVelocityTarget(const FVector& InVelTarget);
    void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    void SetLinearPositionTarget(const FVector& InPosTarget);
    void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
    void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);
    void SetDisableCollision(bool bDisableCollision);
    void SetConstraintReferencePosition(uint8 Frame, const FVector& RefPosition);
    void SetConstraintReferenceOrientation(uint8 Frame, const FVector& PriAxis, const FVector& SecAxis);
    void SetConstraintReferenceFrame(uint8 Frame, const FTransform& RefFrame);
    void SetConstrainedComponents(UPrimitiveComponent* Component1, FName BoneName1, UPrimitiveComponent* Component2, FName BoneName2);
    void SetAngularVelocityTarget(const FVector& InVelTarget);
    void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
    void SetAngularVelocityDriveSLERP(bool bEnableSLERP);
    void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    void SetAngularTwistLimit(uint8 ConstraintType, float TwistLimitAngle);
    void SetAngularSwing2Limit(uint8 MotionType, float Swing2LimitAngle);
    void SetAngularSwing1Limit(uint8 MotionType, float Swing1LimitAngle);
    void SetAngularOrientationTarget(const FRotator& InPosTarget);
    void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
    void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
    void SetAngularDriveMode(uint8 DriveMode);
    void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);
    bool IsBroken();
    float GetCurrentTwist();
    float GetCurrentSwing2();
    float GetCurrentSwing1();
    void GetConstraintForce(FVector& OutLinearForce, FVector& OutAngularForce);
    void BreakConstraint();
}

class UPhysicsConstraintTemplate : UObject
{
    FConstraintInstance DefaultInstance;
    TArray<FPhysicsConstraintProfileHandle> ProfileHandles;
    FConstraintProfileProperties DefaultProfile;
}

class UPhysicsHandleComponent : UActorComponent
{
    UPrimitiveComponent* GrabbedComponent;
    uint8 bSoftAngularConstraint;
    uint8 bSoftLinearConstraint;
    uint8 bInterpolateTarget;
    float LinearDamping;
    float LinearStiffness;
    float AngularDamping;
    float AngularStiffness;
    float InterpolationSpeed;

    void SetTargetRotation(FRotator NewRotation);
    void SetTargetLocationAndRotation(FVector NewLocation, FRotator NewRotation);
    void SetTargetLocation(FVector NewLocation);
    void SetLinearStiffness(float NewLinearStiffness);
    void SetLinearDamping(float NewLinearDamping);
    void SetInterpolationSpeed(float NewInterpolationSpeed);
    void SetAngularStiffness(float NewAngularStiffness);
    void SetAngularDamping(float NewAngularDamping);
    void ReleaseComponent();
    void GrabComponentAtLocationWithRotation(UPrimitiveComponent* Component, FName InBoneName, FVector Location, FRotator Rotation);
    void GrabComponentAtLocation(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation);
    void GrabComponent(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation, bool bConstrainRotation);
    void GetTargetLocationAndRotation(FVector& TargetLocation, FRotator& TargetRotation);
    UPrimitiveComponent* GetGrabbedComponent();
}

class UPhysicsSettings : UDeveloperSettings
{
    float DefaultGravityZ;
    float DefaultTerminalVelocity;
    float DefaultFluidFriction;
    int32 SimulateScratchMemorySize;
    int32 RagdollAggregateThreshold;
    float TriangleMeshTriangleMinAreaThreshold;
    bool bEnableShapeSharing;
    bool bEnablePCM;
    bool bEnableStabilization;
    bool bWarnMissingLocks;
    bool bEnable2DPhysics;
    FRigidBodyErrorCorrection PhysicErrorCorrection;
    TEnumAsByte<ESettingsLockedAxis::Type> LockedAxis;
    TEnumAsByte<ESettingsDOF::Type> DefaultDegreesOfFreedom;
    float BounceThresholdVelocity;
    TEnumAsByte<EFrictionCombineMode::Type> FrictionCombineMode;
    TEnumAsByte<EFrictionCombineMode::Type> RestitutionCombineMode;
    float MaxAngularVelocity;
    float MaxDepenetrationVelocity;
    float ContactOffsetMultiplier;
    float MinContactOffset;
    float MaxContactOffset;
    bool bSimulateSkeletalMeshOnDedicatedServer;
    TEnumAsByte<ECollisionTraceFlag> DefaultShapeComplexity;
    bool bDefaultHasComplexCollision;
    bool bSuppressFaceRemapTable;
    bool bSupportUVFromHitResults;
    bool bDisableActiveActors;
    bool bDisableKinematicStaticPairs;
    bool bDisableKinematicKinematicPairs;
    bool bDisableCCD;
    bool bEnableEnhancedDeterminism;
    float AnimPhysicsMinDeltaTime;
    bool bSimulateAnimPhysicsAfterReset;
    float MaxPhysicsDeltaTime;
    bool bSubstepping;
    bool bSubsteppingAsync;
    float MaxSubstepDeltaTime;
    int32 MaxSubsteps;
    float SyncSceneSmoothingFactor;
    float InitialAverageFrameRate;
    int32 PhysXTreeRebuildRate;
    TArray<FPhysicalSurfaceName> PhysicalSurfaces;
    FBroadphaseSettings DefaultBroadphaseSettings;
    FChaosPhysicsSettings ChaosSettings;
}

class UPhysicsSpringComponent : USceneComponent
{
    float SpringStiffness;
    float SpringDamping;
    float SpringLengthAtRest;
    float SpringRadius;
    TEnumAsByte<ECollisionChannel> SpringChannel;
    bool bIgnoreSelf;
    float SpringCompression;

    FVector GetSpringRestingPoint();
    FVector GetSpringDirection();
    FVector GetSpringCurrentEndPoint();
    float GetNormalizedCompressionScalar();
}

class APhysicsThruster : ARigidBodyBase
{
    UPhysicsThrusterComponent* ThrusterComponent;
}

class UPhysicsThrusterComponent : USceneComponent
{
    float ThrustStrength;
}

class APlanarReflection : ASceneCapture
{
    UPlanarReflectionComponent* PlanarReflectionComponent;
    bool bShowPreviewPlane;

    void OnInterpToggle(bool bEnable);
}

class UPlanarReflectionComponent : USceneCaptureComponent
{
    UBoxComponent* PreviewBox;
    float NormalDistortionStrength;
    float PrefilterRoughness;
    float PrefilterRoughnessDistance;
    int32 ScreenPercentage;
    float ExtraFOV;
    float DistanceFromPlaneFadeStart;
    float DistanceFromPlaneFadeEnd;
    float DistanceFromPlaneFadeoutStart;
    float DistanceFromPlaneFadeoutEnd;
    float AngleFromPlaneFadeStart;
    float AngleFromPlaneFadeEnd;
    bool bShowPreviewPlane;
    bool bRenderSceneTwoSided;
}

class APlaneReflectionCapture : AReflectionCapture
{
}

class UPlaneReflectionCaptureComponent : UReflectionCaptureComponent
{
    float InfluenceRadiusScale;
    UDrawSphereComponent* PreviewInfluenceRadius;
    UBoxComponent* PreviewCaptureBox;
}

class UPlatformEventsComponent : UActorComponent
{
    FPlatformEventsComponentPlatformChangedToLaptopModeDelegate PlatformChangedToLaptopModeDelegate;
    void PlatformEventDelegate();
    FPlatformEventsComponentPlatformChangedToTabletModeDelegate PlatformChangedToTabletModeDelegate;
    void PlatformEventDelegate();

    bool SupportsConvertibleLaptops();
    void PlatformEventDelegate__DelegateSignature();
    bool IsInTabletMode();
    bool IsInLaptopMode();
}

class UPlatformInterfaceWebResponse : UObject
{
    FString OriginalURL;
    int32 ResponseCode;
    int32 Tag;
    FString StringResponse;
    TArray<uint8> BinaryResponse;

    int32 GetNumHeaders();
    FString GetHeaderValue(FString HeaderName);
    void GetHeader(int32 HeaderIndex, FString& Header, FString& Value);
}

class UPlayerInput : UObject
{
    TArray<FKeyBind> DebugExecBindings;
    TArray<FName> InvertedAxis;

    void SetMouseSensitivity(const float Sensitivity);
    void SetBind(FName BindName, FString Command);
    void InvertAxisKey(const FKey AxisKey);
    void InvertAxis(const FName AxisName);
    void ClearSmoothing();
}

class APlayerStartPIE : UPlayerStart
{
}

class UPluginCommandlet : UCommandlet
{
}

class APointLight : ALight
{
    UPointLightComponent* PointLightComponent;

    void SetRadius(float NewRadius);
    void SetLightFalloffExponent(float NewLightFalloffExponent);
}

class UPolys : UObject
{
}

class UPoseableMeshComponent : USkinnedMeshComponent
{

    void SetBoneTransformByName(FName BoneName, const FTransform& InTransform, uint8 BoneSpace);
    void SetBoneScaleByName(FName BoneName, FVector InScale3D, uint8 BoneSpace);
    void SetBoneRotationByName(FName BoneName, FRotator InRotation, uint8 BoneSpace);
    void SetBoneLocationByName(FName BoneName, FVector InLocation, uint8 BoneSpace);
    void ResetBoneTransformByName(FName BoneName);
    FTransform GetBoneTransformByName(FName BoneName, uint8 BoneSpace);
    FVector GetBoneScaleByName(FName BoneName, uint8 BoneSpace);
    FRotator GetBoneRotationByName(FName BoneName, uint8 BoneSpace);
    FVector GetBoneLocationByName(FName BoneName, uint8 BoneSpace);
    void CopyPoseFromSkeletalComponent(USkeletalMeshComponent* InComponentToCopy);
}

class UPoseAsset : UAnimationAsset
{
    FPoseDataContainer PoseContainer;
    bool bAdditivePose;
    int32 BasePoseIndex;
    FName RetargetSource;
}

class UPoseWatch : UObject
{
    UEdGraphNode* Node;
    FColor PoseWatchColour;
}

class UPostProcessComponent : USceneComponent
{
    FPostProcessSettings Settings;
    float Priority;
    float BlendRadius;
    float BlendWeight;
    uint8 bEnabled;
    uint8 bUnbound;

    void AddOrUpdateBlendable(InterfaceProperty InBlendableObject, float InWeight);
}

class APostProcessVolume : UVolume
{
    FPostProcessSettings Settings;
    float Priority;
    float BlendRadius;
    float BlendWeight;
    uint8 bEnabled;
    uint8 bUnbound;

    void AddOrUpdateBlendable(InterfaceProperty InBlendableObject, float InWeight);
}

class APrecomputedVisibilityOverrideVolume : UVolume
{
    TArray<AActor*> OverrideVisibleActors;
    TArray<AActor*> OverrideInvisibleActors;
    TArray<FName> OverrideInvisibleLevels;
}

class APrecomputedVisibilityVolume : UVolume
{
}

class UPreviewCollectionInterface : UInterface
{
}

class UPreviewMeshCollection : UDataAsset
{
    USkeleton* Skeleton;
    TArray<FPreviewMeshCollectionEntry> SkeletalMeshes;
}

class UPrimaryAssetLabel : UPrimaryDataAsset
{
    FPrimaryAssetRules Rules;
    uint8 bLabelAssetsInMyDirectory;
    uint8 bIsRuntimeLabel;
    TArray<TSoftObjectPtr<UObject>> ExplicitAssets;
    TArray<TSoftClassPtr<UObject>> ExplicitBlueprints;
    FCollectionReference AssetCollection;
}

class UProxyLODMeshSimplificationSettings : UDeveloperSettings
{
    FName ProxyLODMeshReductionModuleName;
}

class ARadialForceActor : ARigidBodyBase
{
    URadialForceComponent* ForceComponent;

    void ToggleForce();
    void FireImpulse();
    void EnableForce();
    void DisableForce();
}

class URadialForceComponent : USceneComponent
{
    float Radius;
    TEnumAsByte<ERadialImpulseFalloff> Falloff;
    float ImpulseStrength;
    uint8 bImpulseVelChange;
    uint8 bIgnoreOwningActor;
    float ForceStrength;
    float DestructibleDamage;
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesToAffect;

    void RemoveObjectTypeToAffect(uint8 ObjectType);
    void FireImpulse();
    void AddObjectTypeToAffect(uint8 ObjectType);
}

class ARectLight : ALight
{
    URectLightComponent* RectLightComponent;
}

class URectLightComponent : ULocalLightComponent
{
    float SourceWidth;
    float SourceHeight;
    float BarnDoorAngle;
    float BarnDoorLength;
    UTexture* SourceTexture;

    void SetSourceWidth(float bNewValue);
    void SetSourceTexture(UTexture* bNewValue);
    void SetSourceHeight(float NewValue);
    void SetBarnDoorLength(float NewValue);
    void SetBarnDoorAngle(float NewValue);
}

class URendererSettings : UDeveloperSettings
{
    uint8 bMobileDisableVertexFog;
    int32 MaxMobileCascades;
    TEnumAsByte<EMobileMSAASampleCount::Type> MobileMSAASampleCount;
    uint8 bMobileUseLegacyShadingModel;
    uint8 bMobileAllowDitheredLODTransition;
    uint8 bMobileAllowSoftwareOcclusionCulling;
    uint8 bMobileVirtualTextures;
    uint8 bDiscardUnusedQualityLevels;
    uint8 bOcclusionCulling;
    float MinScreenRadiusForLights;
    float MinScreenRadiusForEarlyZPass;
    float MinScreenRadiusForCSMdepth;
    uint8 bPrecomputedVisibilityWarning;
    uint8 bTextureStreaming;
    uint8 bUseDXT5NormalMaps;
    uint8 bVirtualTextures;
    uint8 bVirtualTexturedLightmaps;
    uint32 VirtualTextureTileSize;
    uint32 VirtualTextureTileBorderSize;
    uint32 VirtualTextureFeedbackFactor;
    uint8 bVirtualTextureEnableCompressZlib;
    uint8 bVirtualTextureEnableCompressCrunch;
    uint8 bClearCoatEnableSecondNormal;
    uint8 bAnisotropicBRDF;
    int32 ReflectionCaptureResolution;
    uint8 ReflectionEnvironmentLightmapMixBasedOnRoughness;
    uint8 bForwardShading;
    uint8 bVertexFoggingForOpaque;
    uint8 bAllowStaticLighting;
    uint8 bUseNormalMapsForStaticLighting;
    uint8 bGenerateMeshDistanceFields;
    uint8 bEightBitMeshDistanceFields;
    uint8 bGenerateLandscapeGIData;
    uint8 bCompressMeshDistanceFields;
    float TessellationAdaptivePixelsPerTriangle;
    uint8 bSeparateTranslucency;
    TEnumAsByte<ETranslucentSortPolicy::Type> TranslucentSortPolicy;
    FVector TranslucentSortAxis;
    TEnumAsByte<ECustomDepthStencil::Type> CustomDepthStencil;
    uint8 bCustomDepthTaaJitter;
    TEnumAsByte<EAlphaChannelMode::Type> bEnableAlphaChannelInPostProcessing;
    uint8 bDefaultFeatureBloom;
    uint8 bDefaultFeatureAmbientOcclusion;
    uint8 bDefaultFeatureAmbientOcclusionStaticFraction;
    uint8 bDefaultFeatureAutoExposure;
    TEnumAsByte<EAutoExposureMethodUI::Type> DefaultFeatureAutoExposure;
    float DefaultFeatureAutoExposureBias;
    uint8 bExtendDefaultLuminanceRangeInAutoExposureSettings;
    uint8 bUsePreExposure;
    uint8 bEnablePreExposureOnlyInTheEditor;
    uint8 bDefaultFeatureMotionBlur;
    uint8 bDefaultFeatureLensFlare;
    uint8 bTemporalUpsampling;
    uint8 bSSGI;
    TEnumAsByte<EAntiAliasingMethod> DefaultFeatureAntiAliasing;
    ELightUnits DefaultLightUnits;
    TEnumAsByte<EDefaultBackBufferPixelFormat::Type> DefaultBackBufferPixelFormat;
    uint8 bRenderUnbuiltPreviewShadowsInGame;
    uint8 bStencilForLODDither;
    TEnumAsByte<EEarlyZPass::Type> EarlyZPass;
    uint8 bEarlyZPassOnlyMaterialMasking;
    uint8 bDBuffer;
    TEnumAsByte<EClearSceneOptions::Type> ClearSceneMethod;
    uint8 bBasePassOutputsVelocity;
    uint8 bVertexDeformationOutputsVelocity;
    uint8 bSelectiveBasePassOutputs;
    uint8 bDefaultParticleCutouts;
    int32 GPUSimulationTextureSizeX;
    int32 GPUSimulationTextureSizeY;
    uint8 bGlobalClipPlane;
    TEnumAsByte<EGBufferFormat::Type> GBufferFormat;
    uint8 bUseGPUMorphTargets;
    uint8 bNvidiaAftermathEnabled;
    uint8 bMultiView;
    uint8 bMobilePostProcessing;
    uint8 bMobileMultiView;
    uint8 bMobileUseHWsRGBEncoding;
    uint8 bRoundRobinOcclusion;
    uint8 bODSCapture;
    uint8 bMeshStreaming;
    float WireframeCullThreshold;
    uint8 bEnableRayTracing;
    uint8 bEnableRayTracingTextureLOD;
    uint8 bSupportStationarySkylight;
    uint8 bSupportLowQualityLightmaps;
    uint8 bSupportPointLightWholeSceneShadows;
    uint8 bSupportAtmosphericFog;
    uint8 bSupportSkyAtmosphere;
    uint8 bSupportSkyAtmosphereAffectsHeightFog;
    uint8 bSupportSkinCacheShaders;
    ESkinCacheDefaultBehavior DefaultSkinCacheBehavior;
    float SkinCacheSceneMemoryLimitInMB;
    uint8 bMobileEnableStaticAndCSMShadowReceivers;
    uint8 bMobileEnableMovableLightCSMShaderCulling;
    uint8 bMobileAllowDistanceFieldShadows;
    uint8 bMobileAllowMovableDirectionalLights;
    uint32 MobileNumDynamicPointLights;
    uint8 bMobileDynamicPointLightsUseStaticBranch;
    uint8 bMobileAllowMovableSpotlights;
    uint8 bSupport16BitBoneIndex;
    uint8 bGPUSkinLimit2BoneInfluences;
    uint8 bSupportDepthOnlyIndexBuffers;
    uint8 bSupportReversedIndexBuffers;
    uint8 bSupportMaterialLayers;
    uint8 bLPV;
}

class URendererOverrideSettings : UDeveloperSettings
{
    uint8 bSupportAllShaderPermutations;
    uint8 bForceRecomputeTangents;
}

class UReplicationDriver : UObject
{
}

class UReplicationConnectionDriver : UObject
{
}

class UReporterBase : UObject
{
}

class UReporterGraph : UReporterBase
{
}

class UReverbEffect : UObject
{
    float Density;
    float Diffusion;
    float Gain;
    float GainHF;
    float DecayTime;
    float DecayHFRatio;
    float ReflectionsGain;
    float ReflectionsDelay;
    float LateGain;
    float LateDelay;
    float AirAbsorptionGainHF;
    float RoomRolloffFactor;
}

class URig : UObject
{
    TArray<FTransformBase> TransformBases;
    TArray<FNode> Nodes;
}

class URotatingMovementComponent : UMovementComponent
{
    FRotator RotationRate;
    FVector PivotTranslation;
    uint8 bRotationInLocalSpace;
}

class URuntimeOptionsBase : UObject
{
}

class URuntimeVirtualTexture : UObject
{
    ERuntimeVirtualTextureMaterialType MaterialType;
    bool bCompressTextures;
    bool bEnable;
    bool bClearTextures;
    bool bSinglePhysicalSpace;
    bool bPrivateSpace;
    bool bEnableScalability;
    int32 Size;
    int32 TileCount;
    int32 TileSize;
    int32 TileBorderSize;
    int32 StreamLowMips;
    URuntimeVirtualTextureStreamingProxy* StreamingTexture;
    bool bEnableCompressCrunch;
    int32 RemoveLowMips;

    int32 GetTileSize();
    int32 GetTileCount();
    int32 GetTileBorderSize();
    int32 GetSize();
}

class URuntimeVirtualTextureComponent : USceneComponent
{
    URuntimeVirtualTexture* VirtualTexture;
    bool bUseStreamingLowMipsInEditor;
    AActor* BoundsSourceActor;

    FTransform GetVirtualTextureTransform();
}

class URuntimeVirtualTextureStreamingProxy : UTexture2D
{
    FVirtualTextureBuildSettings Settings;
    bool bSinglePhysicalSpace;
    uint32 BuildHash;
}

class ARuntimeVirtualTextureVolume : AActor
{
    URuntimeVirtualTextureComponent* VirtualTextureComponent;
}

class URVOAvoidanceInterface : UInterface
{
}

class UScene : UObject
{
}

class USceneCaptureComponentCube : USceneCaptureComponent
{
    UTextureRenderTargetCube* TextureTarget;
    bool bCaptureRotation;
    UTextureRenderTargetCube* TextureTargetLeft;
    UTextureRenderTargetCube* TextureTargetRight;
    UTextureRenderTarget2D* TextureTargetODS;
    float IPD;

    void CaptureScene();
}

class ASceneCaptureCube : ASceneCapture
{
    USceneCaptureComponentCube* CaptureComponentCube;

    void OnInterpToggle(bool bEnable);
}

class USCS_Node : UObject
{
    UClass* ComponentClass;
    UActorComponent* ComponentTemplate;
    FBlueprintCookedComponentInstancingData CookedComponentInstancingData;
    FName AttachToName;
    FName ParentComponentOrVariableName;
    FName ParentComponentOwnerClassName;
    bool bIsParentComponentNative;
    TArray<USCS_Node*> ChildNodes;
    TArray<FBPVariableMetaDataEntry> MetaDataArray;
    FGuid VariableGuid;
    FName InternalVariableName;
}

class USelection : UObject
{
}

class AServerStatReplicator : AInfo
{
    bool bUpdateStatNet;
    bool bOverwriteClientStats;
    uint32 Channels;
    uint32 InRate;
    uint32 OutRate;
    uint32 MaxPacketOverhead;
    uint32 InRateClientMax;
    uint32 InRateClientMin;
    uint32 InRateClientAvg;
    uint32 InPacketsClientMax;
    uint32 InPacketsClientMin;
    uint32 InPacketsClientAvg;
    uint32 OutRateClientMax;
    uint32 OutRateClientMin;
    uint32 OutRateClientAvg;
    uint32 OutPacketsClientMax;
    uint32 OutPacketsClientMin;
    uint32 OutPacketsClientAvg;
    uint32 NetNumClients;
    uint32 InPackets;
    uint32 OutPackets;
    uint32 InBunches;
    uint32 OutBunches;
    uint32 OutLoss;
    uint32 InLoss;
    uint32 VoiceBytesSent;
    uint32 VoiceBytesRecv;
    uint32 VoicePacketsSent;
    uint32 VoicePacketsRecv;
    uint32 PercentInVoice;
    uint32 PercentOutVoice;
    uint32 NumActorChannels;
    uint32 NumConsideredActors;
    uint32 PrioritizedActors;
    uint32 NumRelevantActors;
    uint32 NumRelevantDeletedActors;
    uint32 NumReplicatedActorAttempts;
    uint32 NumReplicatedActors;
    uint32 NumActors;
    uint32 NumNetActors;
    uint32 NumDormantActors;
    uint32 NumInitiallyDormantActors;
    uint32 NumNetGUIDsAckd;
    uint32 NumNetGUIDsPending;
    uint32 NumNetGUIDsUnAckd;
    uint32 ObjPathBytes;
    uint32 NetGUIDOutRate;
    uint32 NetGUIDInRate;
    uint32 NetSaturated;
}

class UShadowMapTexture2D : UTexture2D
{
    TEnumAsByte<EShadowMapFlags> ShadowmapFlags;
}

class USimpleConstructionScript : UObject
{
    TArray<USCS_Node*> RootNodes;
    TArray<USCS_Node*> AllNodes;
    USCS_Node* DefaultSceneRootNode;
}

class USkeletalMesh : UStreamableRenderAsset
{
    USkeleton* Skeleton;
    FBoxSphereBounds ImportedBounds;
    FBoxSphereBounds ExtendedBounds;
    FVector PositiveBoundsExtension;
    FVector NegativeBoundsExtension;
    TArray<FSkeletalMaterial> Materials;
    TArray<FBoneMirrorInfo> SkelMirrorTable;
    TArray<FSkeletalMeshLODInfo> LODInfo;
    FPerPlatformInt MinLOD;
    FPerPlatformBool DisableBelowMinLodStripping;
    TEnumAsByte<EAxis::Type> SkelMirrorAxis;
    TEnumAsByte<EAxis::Type> SkelMirrorFlipAxis;
    uint8 bUseFullPrecisionUVs;
    uint8 bUseHighPrecisionTangentBasis;
    uint8 bHasBeenSimplified;
    uint8 bHasVertexColors;
    uint8 bEnablePerPolyCollision;
    UBodySetup* BodySetup;
    UPhysicsAsset* PhysicsAsset;
    UPhysicsAsset* ShadowPhysicsAsset;
    TArray<UNodeMappingContainer*> NodeMappingData;
    uint8 bSupportRayTracing;
    TArray<UMorphTarget*> MorphTargets;
    TSubclassOf<UAnimInstance> PostProcessAnimBlueprint;
    TArray<UClothingAssetBase*> MeshClothingAssets;
    FSkeletalMeshSamplingInfo SamplingInfo;
    TArray<UAssetUserData*> AssetUserData;
    TArray<USkeletalMeshSocket*> Sockets;
    TArray<FSkinWeightProfileInfo> SkinWeightProfiles;

    void SetLODSettings(USkeletalMeshLODSettings* InLODSettings);
    int32 NumSockets();
    TArray<FString> K2_GetAllMorphTargetNames();
    bool IsSectionUsingCloth(int32 InSectionIndex, bool bCheckCorrespondingSections);
    USkeletalMeshSocket* GetSocketByIndex(int32 Index);
    UNodeMappingContainer* GetNodeMappingContainer(UBlueprint* SourceAsset);
    FBoxSphereBounds GetImportedBounds();
    FBoxSphereBounds GetBounds();
    USkeletalMeshSocket* FindSocketInfo(FName InSocketName, FTransform& OutTransform, int32& outBoneIndex, int32& OutIndex);
    USkeletalMeshSocket* FindSocketAndIndex(FName InSocketName, int32& OutIndex);
    USkeletalMeshSocket* FindSocket(FName InSocketName);
}

class ASkeletalMeshActor : AActor
{
    uint8 bShouldDoAnimNotifies;
    uint8 bWakeOnLevelStart;
    USkeletalMeshComponent* SkeletalMeshComponent;
    USkeletalMesh* ReplicatedMesh;
    UPhysicsAsset* ReplicatedPhysAsset;
    UMaterialInterface* ReplicatedMaterial0;
    UMaterialInterface* ReplicatedMaterial1;

    void OnRep_ReplicatedPhysAsset();
    void OnRep_ReplicatedMesh();
    void OnRep_ReplicatedMaterial1();
    void OnRep_ReplicatedMaterial0();
}

class USkeletalMeshEditorData : UObject
{
}

class USkeletalMeshLODSettings : UDataAsset
{
    FPerPlatformInt MinLOD;
    FPerPlatformBool DisableBelowMinLodStripping;
    FPerPlatformBool bSupportLODStreaming;
    FPerPlatformInt MaxNumStreamedLODs;
    FPerPlatformInt MaxNumOptionalLODs;
    TArray<FSkeletalMeshLODGroupSettings> LODGroups;
}

class USkeletalMeshSimplificationSettings : UDeveloperSettings
{
    FName SkeletalMeshReductionModuleName;
}

class USkeletalMeshSocket : UObject
{
    FName SocketName;
    FName BoneName;
    FVector RelativeLocation;
    FRotator RelativeRotation;
    FVector RelativeScale;
    bool bForceAlwaysAnimated;

    void InitializeSocketFromLocation(const USkeletalMeshComponent* SkelComp, FVector WorldLocation, FVector WorldNormal);
    FVector GetSocketLocation(const USkeletalMeshComponent* SkelComp);
}

class USkyAtmosphereComponent : USceneComponent
{
    ESkyAtmosphereTransformMode TransformMode;
    float BottomRadius;
    FColor GroundAlbedo;
    float AtmosphereHeight;
    float MultiScatteringFactor;
    float RayleighScatteringScale;
    FLinearColor RayleighScattering;
    float RayleighExponentialDistribution;
    float MieScatteringScale;
    FLinearColor MieScattering;
    float MieAbsorptionScale;
    FLinearColor MieAbsorption;
    float MieAnisotropy;
    float MieExponentialDistribution;
    float OtherAbsorptionScale;
    FLinearColor OtherAbsorption;
    FTentDistribution OtherTentDistribution;
    FLinearColor SkyLuminanceFactor;
    float AerialPespectiveViewDistanceScale;
    float HeightFogContribution;
    float TransmittanceMinLightElevationAngle;
    FGuid bStaticLightingBuiltGUID;

    void SetSkyLuminanceFactor(FLinearColor NewValue);
    void SetRayleighScatteringScale(float NewValue);
    void SetRayleighScattering(FLinearColor NewValue);
    void SetRayleighExponentialDistribution(float NewValue);
    void SetOtherAbsorptionScale(float NewValue);
    void SetOtherAbsorption(FLinearColor NewValue);
    void SetMieScatteringScale(float NewValue);
    void SetMieScattering(FLinearColor NewValue);
    void SetMieExponentialDistribution(float NewValue);
    void SetMieAnisotropy(float NewValue);
    void SetMieAbsorptionScale(float NewValue);
    void SetMieAbsorption(FLinearColor NewValue);
    void SetHeightFogContribution(float NewValue);
    void SetAerialPespectiveViewDistanceScale(float NewValue);
    void OverrideAtmosphereLightDirection(int32 AtmosphereLightIndex, const FVector& LightDirection);
}

class ASkyAtmosphere : AInfo
{
    USkyAtmosphereComponent* SkyAtmosphereComponent;
}

class USkyLightComponent : ULightComponentBase
{
    TEnumAsByte<ESkyLightSourceType> SourceType;
    UTextureCube* Cubemap;
    float SourceCubemapAngle;
    int32 CubemapResolution;
    float SkyDistanceThreshold;
    bool bCaptureEmissiveOnly;
    bool bLowerHemisphereIsBlack;
    FLinearColor LowerHemisphereColor;
    float OcclusionMaxDistance;
    float Contrast;
    float OcclusionExponent;
    float MinOcclusion;
    FColor OcclusionTint;
    TEnumAsByte<EOcclusionCombineMode> OcclusionCombineMode;
    UTextureCube* BlendDestinationCubemap;

    void SetVolumetricScatteringIntensity(float NewIntensity);
    void SetOcclusionTint(const FColor& InTint);
    void SetOcclusionExponent(float InOcclusionExponent);
    void SetOcclusionContrast(float InOcclusionContrast);
    void SetMinOcclusion(float InMinOcclusion);
    void SetLowerHemisphereColor(const FLinearColor& InLowerHemisphereColor);
    void SetLightColor(FLinearColor NewLightColor);
    void SetIntensity(float NewIntensity);
    void SetIndirectLightingIntensity(float NewIntensity);
    void SetCubemapBlend(UTextureCube* SourceCubemap, UTextureCube* DestinationCubemap, float InBlendFraction);
    void SetCubemap(UTextureCube* NewCubemap);
    void RecaptureSky();
}

class USlateBrushAsset : UObject
{
    FSlateBrush Brush;
}

class USlateTextureAtlasInterface : UInterface
{
}

class USmokeTestCommandlet : UCommandlet
{
}

class USoundAttenuation : UObject
{
    FSoundAttenuationSettings Attenuation;
}

class USoundClass : UObject
{
    FSoundClassProperties Properties;
    TArray<USoundClass*> ChildClasses;
    TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers;
    FSoundModulation Modulation;
    USoundClass* ParentClass;
}

class USoundConcurrency : UObject
{
    FSoundConcurrencySettings Concurrency;
}

class USoundCue : USoundBase
{
    uint8 bPrimeOnLoad;
    USoundNode* FirstNode;
    float VolumeMultiplier;
    float PitchMultiplier;
    FSoundAttenuationSettings AttenuationOverrides;
    float SubtitlePriority;
    uint8 bOverrideAttenuation;
    uint8 bExcludeFromRandomNodeBranchCulling;
    int32 CookedQualityIndex;
    uint8 bHasPlayWhenSilent;
}

class USoundEffectSourcePresetChain : UObject
{
    TArray<FSourceEffectChainEntry> Chain;
    uint8 bPlayEffectChainTails;
}

class USoundGroups : UObject
{
    TArray<FSoundGroup> SoundGroupProfiles;
}

class USoundMix : UObject
{
    uint8 bApplyEQ;
    float EQPriority;
    FAudioEQEffect EQSettings;
    TArray<FSoundClassAdjuster> SoundClassEffects;
    float InitialDelay;
    float FadeInTime;
    float Duration;
    float FadeOutTime;
}

class USoundNode : UObject
{
    TArray<USoundNode*> ChildNodes;
}

class USoundNodeAssetReferencer : USoundNode
{
}

class USoundNodeAttenuation : USoundNode
{
    USoundAttenuation* AttenuationSettings;
    FSoundAttenuationSettings AttenuationOverrides;
    uint8 bOverrideAttenuation;
}

class USoundNodeBranch : USoundNode
{
    FName BoolParameterName;
}

class USoundNodeConcatenator : USoundNode
{
    TArray<float> InputVolume;
}

class USoundNodeDelay : USoundNode
{
    float DelayMin;
    float DelayMax;
}

class USoundNodeDialoguePlayer : USoundNode
{
    FDialogueWaveParameter DialogueWaveParameter;
    uint8 bLooping;
}

class USoundNodeDistanceCrossFade : USoundNode
{
    TArray<FDistanceDatum> CrossFadeInput;
}

class USoundNodeDoppler : USoundNode
{
    float DopplerIntensity;
    bool bUseSmoothing;
    float SmoothingInterpSpeed;
}

class USoundNodeEnveloper : USoundNode
{
    float LoopStart;
    float LoopEnd;
    float DurationAfterLoop;
    int32 LoopCount;
    uint8 bLoopIndefinitely;
    uint8 bLoop;
    UDistributionFloatConstantCurve* VolumeInterpCurve;
    UDistributionFloatConstantCurve* PitchInterpCurve;
    FRuntimeFloatCurve VolumeCurve;
    FRuntimeFloatCurve PitchCurve;
    float PitchMin;
    float PitchMax;
    float VolumeMin;
    float VolumeMax;
}

class USoundNodeGroupControl : USoundNode
{
    TArray<int32> GroupSizes;
}

class USoundNodeLooping : USoundNode
{
    int32 LoopCount;
    uint8 bLoopIndefinitely;
}

class USoundNodeMature : USoundNode
{
}

class USoundNodeMixer : USoundNode
{
    TArray<float> InputVolume;
}

class USoundNodeModulator : USoundNode
{
    float PitchMin;
    float PitchMax;
    float VolumeMin;
    float VolumeMax;
}

class USoundNodeModulatorContinuous : USoundNode
{
    FModulatorContinuousParams PitchModulationParams;
    FModulatorContinuousParams VolumeModulationParams;
}

class USoundNodeOscillator : USoundNode
{
    uint8 bModulateVolume;
    uint8 bModulatePitch;
    float AmplitudeMin;
    float AmplitudeMax;
    float FrequencyMin;
    float FrequencyMax;
    float OffsetMin;
    float OffsetMax;
    float CenterMin;
    float CenterMax;
}

class USoundNodeParamCrossFade : USoundNodeDistanceCrossFade
{
    FName ParamName;
}

class USoundNodeQualityLevel : USoundNode
{
}

class USoundNodeRandom : USoundNode
{
    TArray<float> Weights;
    TArray<bool> HasBeenUsed;
    int32 NumRandomUsed;
    int32 PreselectAtLevelLoad;
    uint8 bShouldExcludeFromBranchCulling;
    uint8 bSoundCueExcludedFromBranchCulling;
    uint8 bRandomizeWithoutReplacement;
}

class USoundNodeSoundClass : USoundNode
{
    USoundClass* SoundClassOverride;
}

class USoundNodeSwitch : USoundNode
{
    FName IntParameterName;
}

class USoundNodeWaveParam : USoundNode
{
    FName WaveParameterName;
}

class USoundNodeWavePlayer : USoundNodeAssetReferencer
{
    TSoftObjectPtr<USoundWave> SoundWaveAssetPtr;
    USoundWave* SoundWave;
    uint8 bLooping;
}

class USoundSourceBus : USoundWave
{
    ESourceBusChannels SourceBusChannels;
    float SourceBusDuration;
    uint8 bAutoDeactivateWhenSilent;
}

class USoundSubmixBase : UObject
{
    TArray<USoundSubmixBase*> ChildSubmixes;
}

class USoundSubmixWithParentBase : USoundSubmixBase
{
    USoundSubmixBase* ParentSubmix;
}

class USoundSubmix : USoundSubmixWithParentBase
{
    uint8 bMuteWhenBackgrounded;
    TArray<USoundEffectSubmixPreset*> SubmixEffectChain;
    USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings;
    int32 EnvelopeFollowerAttackTime;
    int32 EnvelopeFollowerReleaseTime;
    float OutputVolume;
    FSoundSubmixOnSubmixRecordedFileDone OnSubmixRecordedFileDone;
    void OnSubmixRecordedFileDone(const USoundWave* ResultingSoundWave);

    void StopRecordingOutput(const UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, USoundWave* ExistingSoundWaveToOverwrite);
    void StopEnvelopeFollowing(const UObject* WorldContextObject);
    void StartRecordingOutput(const UObject* WorldContextObject, float ExpectedDuration);
    void StartEnvelopeFollowing(const UObject* WorldContextObject);
    void SetSubmixOutputVolume(const UObject* WorldContextObject, float InOutputVolume);
    void AddEnvelopeFollowerDelegate(const UObject* WorldContextObject, const OnSubmixEnvelopeBP__DelegateSignature& OnSubmixEnvelopeBP);
}

class USoundfieldSubmix : USoundSubmixWithParentBase
{
    FName SoundfieldEncodingFormat;
    USoundfieldEncodingSettingsBase* EncodingSettings;
    TArray<USoundfieldEffectBase*> SoundfieldEffectChain;
    TSubclassOf<USoundfieldEncodingSettingsBase> EncodingSettingsClass;
}

class UEndpointSubmix : USoundSubmixBase
{
    FName EndpointType;
    TSubclassOf<UAudioEndpointSettingsBase> EndpointSettingsClass;
    UAudioEndpointSettingsBase* EndpointSettings;
}

class USoundfieldEndpointSubmix : USoundSubmixBase
{
    FName SoundfieldEndpointType;
    TSubclassOf<UAudioEndpointSettingsBase> EndpointSettingsClass;
    USoundfieldEndpointSettingsBase* EndpointSettings;
    TSubclassOf<USoundfieldEncodingSettingsBase> EncodingSettingsClass;
    USoundfieldEncodingSettingsBase* EncodingSettings;
    TArray<USoundfieldEffectBase*> SoundfieldEffectChain;
}

class ASpectatorPawn : UDefaultPawn
{
}

class USpectatorPawnMovement : UFloatingPawnMovement
{
    uint8 bIgnoreTimeDilation;
}

class ASphereReflectionCapture : AReflectionCapture
{
    UDrawSphereComponent* DrawCaptureRadius;
}

class USphereReflectionCaptureComponent : UReflectionCaptureComponent
{
    float InfluenceRadius;
    float CaptureDistanceScale;
    UDrawSphereComponent* PreviewInfluenceRadius;
}

class USplineMetadata : UObject
{
}

class USplineComponent : UPrimitiveComponent
{
    FSplineCurves SplineCurves;
    FInterpCurveVector SplineInfo;
    FInterpCurveQuat SplineRotInfo;
    FInterpCurveVector SplineScaleInfo;
    FInterpCurveFloat SplineReparamTable;
    bool bAllowSplineEditingPerInstance;
    int32 ReparamStepsPerSegment;
    float Duration;
    bool bStationaryEndpoints;
    bool bSplineHasBeenEdited;
    bool bModifiedByConstructionScript;
    bool bInputSplinePointsToConstructionScript;
    bool bDrawDebug;
    bool bClosedLoop;
    bool bLoopPositionOverride;
    float LoopPosition;
    FVector DefaultUpVector;

    void UpdateSpline();
    void SetWorldLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation);
    void SetUpVectorAtSplinePoint(int32 PointIndex, const FVector& InUpVector, uint8 CoordinateSpace, bool bUpdateSpline);
    void SetUnselectedSplineSegmentColor(const FLinearColor& SegmentColor);
    void SetTangentsAtSplinePoint(int32 PointIndex, const FVector& InArriveTangent, const FVector& InLeaveTangent, uint8 CoordinateSpace, bool bUpdateSpline);
    void SetTangentAtSplinePoint(int32 PointIndex, const FVector& InTangent, uint8 CoordinateSpace, bool bUpdateSpline);
    void SetSplineWorldPoints(const TArray<FVector>& Points);
    void SetSplinePointType(int32 PointIndex, uint8 Type, bool bUpdateSpline);
    void SetSplinePoints(const TArray<FVector>& Points, uint8 CoordinateSpace, bool bUpdateSpline);
    void SetSplineLocalPoints(const TArray<FVector>& Points);
    void SetSelectedSplineSegmentColor(const FLinearColor& SegmentColor);
    void SetLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation, uint8 CoordinateSpace, bool bUpdateSpline);
    void SetDrawDebug(bool bShow);
    void SetDefaultUpVector(const FVector& upVector, uint8 CoordinateSpace);
    void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);
    void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);
    void RemoveSplinePoint(int32 Index, bool bUpdateSpline);
    bool IsClosedLoop();
    FVector GetWorldTangentAtDistanceAlongSpline(float Distance);
    FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity);
    FRotator GetWorldRotationAtDistanceAlongSpline(float Distance);
    FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity);
    FVector GetWorldLocationAtSplinePoint(int32 PointIndex);
    FVector GetWorldLocationAtDistanceAlongSpline(float Distance);
    FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity);
    FVector GetWorldDirectionAtDistanceAlongSpline(float Distance);
    FVector GetVectorPropertyAtSplinePoint(int32 Index, FName PropertyName);
    FVector GetVectorPropertyAtSplineInputKey(float InKey, FName PropertyName);
    FVector GetUpVectorAtTime(float Time, uint8 CoordinateSpace, bool bUseConstantVelocity);
    FVector GetUpVectorAtSplinePoint(int32 PointIndex, uint8 CoordinateSpace);
    FVector GetUpVectorAtSplineInputKey(float InKey, uint8 CoordinateSpace);
    FVector GetUpVectorAtDistanceAlongSpline(float Distance, uint8 CoordinateSpace);
    FTransform GetTransformAtTime(float Time, uint8 CoordinateSpace, bool bUseConstantVelocity, bool bUseScale);
    FTransform GetTransformAtSplinePoint(int32 PointIndex, uint8 CoordinateSpace, bool bUseScale);
    FTransform GetTransformAtSplineInputKey(float InKey, uint8 CoordinateSpace, bool bUseScale);
    FTransform GetTransformAtDistanceAlongSpline(float Distance, uint8 CoordinateSpace, bool bUseScale);
    FVector GetTangentAtTime(float Time, uint8 CoordinateSpace, bool bUseConstantVelocity);
    FVector GetTangentAtSplinePoint(int32 PointIndex, uint8 CoordinateSpace);
    FVector GetTangentAtSplineInputKey(float InKey, uint8 CoordinateSpace);
    FVector GetTangentAtDistanceAlongSpline(float Distance, uint8 CoordinateSpace);
    TEnumAsByte<ESplinePointType::Type> GetSplinePointType(int32 PointIndex);
    float GetSplineLength();
    FVector GetScaleAtTime(float Time, bool bUseConstantVelocity);
    FVector GetScaleAtSplinePoint(int32 PointIndex);
    FVector GetScaleAtSplineInputKey(float InKey);
    FVector GetScaleAtDistanceAlongSpline(float Distance);
    FRotator GetRotationAtTime(float Time, uint8 CoordinateSpace, bool bUseConstantVelocity);
    FRotator GetRotationAtSplinePoint(int32 PointIndex, uint8 CoordinateSpace);
    FRotator GetRotationAtSplineInputKey(float InKey, uint8 CoordinateSpace);
    FRotator GetRotationAtDistanceAlongSpline(float Distance, uint8 CoordinateSpace);
    float GetRollAtTime(float Time, uint8 CoordinateSpace, bool bUseConstantVelocity);
    float GetRollAtSplinePoint(int32 PointIndex, uint8 CoordinateSpace);
    float GetRollAtSplineInputKey(float InKey, uint8 CoordinateSpace);
    float GetRollAtDistanceAlongSpline(float Distance, uint8 CoordinateSpace);
    FVector GetRightVectorAtTime(float Time, uint8 CoordinateSpace, bool bUseConstantVelocity);
    FVector GetRightVectorAtSplinePoint(int32 PointIndex, uint8 CoordinateSpace);
    FVector GetRightVectorAtSplineInputKey(float InKey, uint8 CoordinateSpace);
    FVector GetRightVectorAtDistanceAlongSpline(float Distance, uint8 CoordinateSpace);
    int32 GetNumberOfSplineSegments();
    int32 GetNumberOfSplinePoints();
    FVector GetLocationAtTime(float Time, uint8 CoordinateSpace, bool bUseConstantVelocity);
    FVector GetLocationAtSplinePoint(int32 PointIndex, uint8 CoordinateSpace);
    FVector GetLocationAtSplineInputKey(float InKey, uint8 CoordinateSpace);
    FVector GetLocationAtDistanceAlongSpline(float Distance, uint8 CoordinateSpace);
    void GetLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& Location, FVector& Tangent, uint8 CoordinateSpace);
    void GetLocalLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& LocalLocation, FVector& LocalTangent);
    FVector GetLeaveTangentAtSplinePoint(int32 PointIndex, uint8 CoordinateSpace);
    float GetInputKeyAtDistanceAlongSpline(float Distance);
    float GetFloatPropertyAtSplinePoint(int32 Index, FName PropertyName);
    float GetFloatPropertyAtSplineInputKey(float InKey, FName PropertyName);
    float GetDistanceAlongSplineAtSplinePoint(int32 PointIndex);
    FVector GetDirectionAtTime(float Time, uint8 CoordinateSpace, bool bUseConstantVelocity);
    FVector GetDirectionAtSplinePoint(int32 PointIndex, uint8 CoordinateSpace);
    FVector GetDirectionAtSplineInputKey(float InKey, uint8 CoordinateSpace);
    FVector GetDirectionAtDistanceAlongSpline(float Distance, uint8 CoordinateSpace);
    FVector GetDefaultUpVector(uint8 CoordinateSpace);
    FVector GetArriveTangentAtSplinePoint(int32 PointIndex, uint8 CoordinateSpace);
    FVector FindUpVectorClosestToWorldLocation(const FVector& WorldLocation, uint8 CoordinateSpace);
    FTransform FindTransformClosestToWorldLocation(const FVector& WorldLocation, uint8 CoordinateSpace, bool bUseScale);
    FVector FindTangentClosestToWorldLocation(const FVector& WorldLocation, uint8 CoordinateSpace);
    FVector FindScaleClosestToWorldLocation(const FVector& WorldLocation);
    FRotator FindRotationClosestToWorldLocation(const FVector& WorldLocation, uint8 CoordinateSpace);
    float FindRollClosestToWorldLocation(const FVector& WorldLocation, uint8 CoordinateSpace);
    FVector FindRightVectorClosestToWorldLocation(const FVector& WorldLocation, uint8 CoordinateSpace);
    FVector FindLocationClosestToWorldLocation(const FVector& WorldLocation, uint8 CoordinateSpace);
    float FindInputKeyClosestToWorldLocation(const FVector& WorldLocation);
    FVector FindDirectionClosestToWorldLocation(const FVector& WorldLocation, uint8 CoordinateSpace);
    void ClearSplinePoints(bool bUpdateSpline);
    void AddSplineWorldPoint(const FVector& Position);
    void AddSplinePointAtIndex(const FVector& Position, int32 Index, uint8 CoordinateSpace, bool bUpdateSpline);
    void AddSplinePoint(const FVector& Position, uint8 CoordinateSpace, bool bUpdateSpline);
    void AddSplineLocalPoint(const FVector& Position);
    void AddPoints(const TArray<FSplinePoint>& Points, bool bUpdateSpline);
    void AddPoint(const FSplinePoint& Point, bool bUpdateSpline);
}

class ASplineMeshActor : AActor
{
    USplineMeshComponent* SplineMeshComponent;
}

class USpotLightComponent : UPointLightComponent
{
    float InnerConeAngle;
    float OuterConeAngle;
    float LightShaftConeAngle;

    void SetOuterConeAngle(float NewOuterConeAngle);
    void SetInnerConeAngle(float NewInnerConeAngle);
}

class USpringArmComponent : USceneComponent
{
    float TargetArmLength;
    FVector SocketOffset;
    FVector TargetOffset;
    float ProbeSize;
    TEnumAsByte<ECollisionChannel> ProbeChannel;
    uint8 bDoCollisionTest;
    uint8 bUsePawnControlRotation;
    uint8 bInheritPitch;
    uint8 bInheritYaw;
    uint8 bInheritRoll;
    uint8 bEnableCameraLag;
    uint8 bEnableCameraRotationLag;
    uint8 bUseCameraLagSubstepping;
    uint8 bDrawDebugLagMarkers;
    float CameraLagSpeed;
    float CameraRotationLagSpeed;
    float CameraLagMaxTimeStep;
    float CameraLagMaxDistance;

    bool IsCollisionFixApplied();
    FVector GetUnfixedCameraPosition();
    FRotator GetTargetRotation();
}

class UStaticMesh : UStreamableRenderAsset
{
    FPerPlatformInt MinLOD;
    float LpvBiasMultiplier;
    TArray<FStaticMaterial> StaticMaterials;
    float LightmapUVDensity;
    int32 LightMapResolution;
    int32 LightMapCoordinateIndex;
    float DistanceFieldSelfShadowBias;
    UBodySetup* BodySetup;
    int32 LODForCollision;
    uint8 bGenerateMeshDistanceField;
    uint8 bStripComplexCollisionForConsole;
    uint8 bHasNavigationData;
    uint8 bSupportUniformlyDistributedSampling;
    uint8 bSupportPhysicalMaterialMasks;
    uint8 bSupportRayTracing;
    uint8 bIsBuiltAtRuntime;
    uint8 bAllowCPUAccess;
    uint8 bSupportGpuUniformlyDistributedSampling;
    TArray<UStaticMeshSocket*> Sockets;
    FVector PositiveBoundsExtension;
    FVector NegativeBoundsExtension;
    FBoxSphereBounds ExtendedBounds;
    int32 ElementToIgnoreForTexFactor;
    TArray<UAssetUserData*> AssetUserData;
    UObject* EditableMesh;
    UNavCollisionBase* NavCollision;

    void RemoveSocket(UStaticMeshSocket* Socket);
    int32 GetNumSections(int32 InLOD);
    int32 GetNumLODs();
    void GetMinimumLODForPlatforms(TMap<FName, int32>& PlatformMinimumLODs);
    int32 GetMinimumLODForPlatform(const FName& PlatformName);
    int32 GetMaterialIndex(FName MaterialSlotName);
    UMaterialInterface* GetMaterial(int32 MaterialIndex);
    FBoxSphereBounds GetBounds();
    FBox GetBoundingBox();
    UStaticMeshSocket* FindSocket(FName InSocketName);
    UStaticMeshDescription* CreateStaticMeshDescription(UObject* Outer);
    void BuildFromStaticMeshDescriptions(const TArray<UStaticMeshDescription*>& StaticMeshDescriptions, bool bBuildSimpleCollision);
    void AddSocket(UStaticMeshSocket* Socket);
    FName AddMaterial(UMaterialInterface* Material);
}

class UStaticMeshSocket : UObject
{
    FName SocketName;
    FVector RelativeLocation;
    FRotator RelativeRotation;
    FVector RelativeScale;
    FString Tag;
}

class UStereoLayerShapeCylinder : UStereoLayerShape
{
    float Radius;
    float OverlayArc;
    int32 Height;

    void SetRadius(float InRadius);
    void SetOverlayArc(float InOverlayArc);
    void SetHeight(int32 InHeight);
}

class UStereoLayerShapeCubemap : UStereoLayerShape
{
}

class UStereoLayerShapeEquirect : UStereoLayerShape
{
    FBox2D LeftUVRect;
    FBox2D RightUVRect;
    FVector2D LeftScale;
    FVector2D RightScale;
    FVector2D LeftBias;
    FVector2D RightBias;

    void SetEquirectProps(FEquirectProps InScaleBiases);
}

class UStereoLayerFunctionLibrary : UBlueprintFunctionLibrary
{

    void ShowSplashScreen();
    void SetSplashScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    void HideSplashScreen();
    void EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);
}

class UStringTable : UObject
{
}

class USubsurfaceProfile : UObject
{
    FSubsurfaceProfileStruct Settings;
}

class USubsystemBlueprintLibrary : UBlueprintFunctionLibrary
{

    UWorldSubsystem* GetWorldSubsystem(UObject* contextObject, TSubclassOf<UWorldSubsystem> Class);
    ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(UPlayerController* PlayerController, TSubclassOf<ULocalPlayerSubsystem> Class);
    ULocalPlayerSubsystem* GetLocalPlayerSubsystem(UObject* contextObject, TSubclassOf<ULocalPlayerSubsystem> Class);
    UGameInstanceSubsystem* GetGameInstanceSubsystem(UObject* contextObject, TSubclassOf<UGameInstanceSubsystem> Class);
    UEngineSubsystem* GetEngineSubsystem(TSubclassOf<UEngineSubsystem> Class);
}

class USubUVAnimation : UObject
{
    UTexture2D* SubUVTexture;
    int32 SubImages_Horizontal;
    int32 SubImages_Vertical;
    TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode;
    TEnumAsByte<EOpacitySourceMode> OpacitySourceMode;
    float AlphaThreshold;
}

class UTimecodeProvider : UObject
{
    float FrameDelay;

    FTimecode GetTimecode();
    ETimecodeProviderSynchronizationState GetSynchronizationState();
    FQualifiedFrameTime GetQualifiedFrameTime();
    FFrameRate GetFrameRate();
    FTimecode GetDelayedTimecode();
    FQualifiedFrameTime GetDelayedQualifiedFrameTime();
}

class USystemTimeTimecodeProvider : UTimecodeProvider
{
    FFrameRate FrameRate;
    bool bGenerateFullFrame;
    bool bUseHighPerformanceClock;
}

class ATargetPoint : AActor
{
}

class UTextPropertyTestObject : UObject
{
    FText DefaultedText;
    FText UndefaultedText;
    FText TransientText;
}

class ATextRenderActor : AActor
{
    UTextRenderComponent* TextRender;
}

class UTextRenderComponent : UPrimitiveComponent
{
    FText Text;
    UMaterialInterface* TextMaterial;
    UFont* Font;
    TEnumAsByte<EHorizTextAligment> HorizontalAlignment;
    TEnumAsByte<EVerticalTextAligment> VerticalAlignment;
    FColor TextRenderColor;
    float XScale;
    float YScale;
    float WorldSize;
    float InvDefaultSize;
    float HorizSpacingAdjust;
    float VertSpacingAdjust;
    uint8 bAlwaysRenderAsText;

    void SetYScale(float Value);
    void SetXScale(float Value);
    void SetWorldSize(float Value);
    void SetVertSpacingAdjust(float Value);
    void SetVerticalAlignment(uint8 Value);
    void SetTextRenderColor(FColor Value);
    void SetTextMaterial(UMaterialInterface* Material);
    void SetText(FString Value);
    void SetHorizSpacingAdjust(float Value);
    void SetHorizontalAlignment(uint8 Value);
    void SetFont(UFont* Value);
    void K2_SetText(const FText& Value);
    FVector GetTextWorldSize();
    FVector GetTextLocalSize();
}

class UTexture2DArray : UTexture
{
}

class UTexture2DDynamic : UTexture
{
    TEnumAsByte<EPixelFormat> Format;
}

class UTextureLightProfile : UTexture2D
{
    float Brightness;
    float TextureMultiplier;
}

class UTextureMipDataProviderFactory : UAssetUserData
{
}

class UTextureRenderTargetCube : UTextureRenderTarget
{
    int32 SizeX;
    FLinearColor ClearColor;
    TEnumAsByte<EPixelFormat> OverrideFormat;
    uint8 bHDR;
    uint8 bForceLinearGamma;
}

class UThumbnailInfo : UObject
{
}

class UTimelineComponent : UActorComponent
{
    FTimeline TheTimeline;
    uint8 bIgnoreTimeDilation;

    void Stop();
    void SetVectorCurve(UCurveVector* NewVectorCurve, FName VectorTrackName);
    void SetTimelineLengthMode(uint8 NewLengthMode);
    void SetTimelineLength(float NewLength);
    void SetPlayRate(float NewRate);
    void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);
    void SetNewTime(float newTime);
    void SetLooping(bool bNewLooping);
    void SetLinearColorCurve(UCurveLinearColor* NewLinearColorCurve, FName LinearColorTrackName);
    void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation);
    void SetFloatCurve(UCurveFloat* NewFloatCurve, FName FloatTrackName);
    void ReverseFromEnd();
    void Reverse();
    void PlayFromStart();
    void Play();
    void OnRep_Timeline();
    bool IsReversing();
    bool IsPlaying();
    bool IsLooping();
    float GetTimelineLength();
    float GetPlayRate();
    float GetPlaybackPosition();
    bool GetIgnoreTimeDilation();
}

class UTimelineTemplate : UObject
{
    float TimelineLength;
    TEnumAsByte<ETimelineLengthMode> LengthMode;
    uint8 bAutoPlay;
    uint8 bLoop;
    uint8 bReplicated;
    uint8 bIgnoreTimeDilation;
    TArray<FTTEventTrack> EventTracks;
    TArray<FTTFloatTrack> FloatTracks;
    TArray<FTTVectorTrack> VectorTracks;
    TArray<FTTLinearColorTrack> LinearColorTracks;
    TArray<FBPVariableMetaDataEntry> MetaDataArray;
    FGuid TimelineGuid;
    FName VariableName;
    FName DirectionPropertyName;
    FName UpdateFunctionName;
    FName FinishedFunctionName;
}

class UTireType : UDataAsset
{
    float FrictionScale;
}

class UTouchInterface : UObject
{
    TArray<FTouchInputControl> Controls;
    float ActiveOpacity;
    float InactiveOpacity;
    float TimeUntilDeactive;
    float TimeUntilReset;
    float ActivationDelay;
    bool bPreventRecenter;
    float StartupDelay;
}

class ATriggerCapsule : ATriggerBase
{
}

class ATriggerSphere : ATriggerBase
{
}

class ATriggerVolume : UVolume
{
}

class UTwitterIntegrationBase : UPlatformInterfaceBase
{

    bool TwitterRequest(FString URL, const TArray<FString>& ParamKeysAndValues, uint8 RequestMethod, int32 AccountIndex);
    bool ShowTweetUI(FString InitialMessage, FString URL, FString Picture);
    void Init();
    int32 GetNumAccounts();
    FString GetAccountName(int32 AccountIndex);
    bool CanShowTweetUI();
    bool AuthorizeAccounts();
}

class UUserDefinedEnum : UEnum
{
    TMap<FName, FText> DisplayNameMap;
}

class UUserDefinedStruct : UScriptStruct
{
    TEnumAsByte<EUserDefinedStructureStatus> Status;
    FGuid Guid;
}

class UUserInterfaceSettings : UDeveloperSettings
{
    ERenderFocusRule RenderFocusRule;
    TMap<TEnumAsByte<EMouseCursor::Type>, FHardwareCursorReference> HardwareCursors;
    TMap<TEnumAsByte<EMouseCursor::Type>, FSoftClassPath> SoftwareCursors;
    FSoftClassPath DefaultCursor;
    FSoftClassPath TextEditBeamCursor;
    FSoftClassPath CrosshairsCursor;
    FSoftClassPath HandCursor;
    FSoftClassPath GrabHandCursor;
    FSoftClassPath GrabHandClosedCursor;
    FSoftClassPath SlashedCircleCursor;
    float ApplicationScale;
    EUIScalingRule UIScaleRule;
    FSoftClassPath CustomScalingRuleClass;
    FRuntimeFloatCurve UIScaleCurve;
    bool bAllowHighDPIInGameMode;
    bool bLoadWidgetsOnDedicatedServer;
    TArray<UObject*> CursorClasses;
    UClass* CustomScalingRuleClassInstance;
    UDPICustomScalingRule* CustomScalingRule;
}

class UVectorField : UObject
{
    FBox Bounds;
    float Intensity;
}

class UVectorFieldAnimated : UVectorField
{
    UTexture2D* Texture;
    TEnumAsByte<EVectorFieldConstructionOp> ConstructionOp;
    int32 VolumeSizeX;
    int32 VolumeSizeY;
    int32 VolumeSizeZ;
    int32 SubImagesX;
    int32 SubImagesY;
    int32 FrameCount;
    float FramesPerSecond;
    uint8 bLoop;
    UVectorFieldStatic* NoiseField;
    float NoiseScale;
    float NoiseMax;
}

class UVectorFieldComponent : UPrimitiveComponent
{
    UVectorField* VectorField;
    float Intensity;
    float Tightness;
    uint8 bPreviewVectorField;

    void SetIntensity(float NewIntensity);
}

class UVectorFieldStatic : UVectorField
{
    int32 SizeX;
    int32 SizeY;
    int32 sizeZ;
    bool bAllowCPUAccess;
    TArray<FVector4> CPUData;
}

class AVectorFieldVolume : AActor
{
    UVectorFieldComponent* VectorFieldComponent;
}

class UVirtualTexture : UObject
{
}

class ULightMapVirtualTexture : UVirtualTexture
{
}

class ULightMapVirtualTexture2D : UTexture2D
{
    TArray<int8> TypeToLayer;
}

class UVirtualTexturePoolConfig : UObject
{
    int32 DefaultSizeInMegabyte;
    TArray<FVirtualTextureSpacePoolConfig> Pools;
}

class UVisualLoggerAutomationTests : UObject
{
}

class UVisualLoggerDebugSnapshotInterface : UInterface
{
}

class UVisualLoggerKismetLibrary : UBlueprintFunctionLibrary
{

    void RedirectVislog(UObject* SourceOwner, UObject* DestinationOwner);
    void LogText(UObject* WorldContextObject, FString Text, FName LogCategory, bool bAddToMessageLog);
    void LogSegment(UObject* WorldContextObject, const FVector SegmentStart, const FVector SegmentEnd, FString Text, FLinearColor ObjectColor, const float Thickness, FName CategoryName, bool bAddToMessageLog);
    void LogLocation(UObject* WorldContextObject, FVector Location, FString Text, FLinearColor ObjectColor, float Radius, FName LogCategory, bool bAddToMessageLog);
    void LogBox(UObject* WorldContextObject, FBox BoxShape, FString Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog);
    void EnableRecording(bool bEnabled);
}

class UVoiceChannel : UChannel
{
}

class UVOIPTalker : UActorComponent
{
    FVoiceSettings Settings;

    void RegisterWithPlayerState(UPlayerState* OwningState);
    float GetVoiceLevel();
    UVOIPTalker* CreateTalkerForPlayer(UPlayerState* OwningState);
    void BPOnTalkingEnd();
    void BPOnTalkingBegin(UAudioComponent* AudioComponent);
}

class UVOIPStatics : UBlueprintFunctionLibrary
{

    void SetMicThreshold(float InThreshold);
}

class UVolumeTexture : UTexture
{
}

class AVolumetricLightmapDensityVolume : UVolume
{
    FInt32Interval AllowedMipLevelRange;
}

class AWindDirectionalSource : AInfo
{
    UWindDirectionalSourceComponent* Component;
}

class UWindDirectionalSourceComponent : USceneComponent
{
    float Strength;
    float Speed;
    float MinGustAmount;
    float MaxGustAmount;
    float Radius;
    uint8 bPointWind;

    void SetWindType(EWindSourceType InNewType);
    void SetStrength(float InNewStrength);
    void SetSpeed(float InNewSpeed);
    void SetRadius(float InNewRadius);
    void SetMinimumGustAmount(float InNewMinGust);
    void SetMaximumGustAmount(float InNewMaxGust);
}

class UWorldComposition : UObject
{
    TArray<ULevelStreaming*> TilesStreaming;
    double TilesStreamingTimeThreshold;
    bool bLoadAllTilesDuringCinematic;
    bool bRebaseOriginIn3DSpace;
    float RebaseOriginDistance;
}

class UHierarchicalLODSetup : UObject
{
    TArray<FHierarchicalSimplification> HierarchicalLODSetup;
    TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial;
}

class AWorldSettings : AInfo
{
    int32 VisibilityCellSize;
    TEnumAsByte<EVisibilityAggressiveness> VisibilityAggressiveness;
    uint8 bPrecomputeVisibility;
    uint8 bPlaceCellsOnlyAlongCameraTracks;
    uint8 bEnableWorldBoundsChecks;
    uint8 bEnableNavigationSystem;
    uint8 bEnableAISystem;
    uint8 bEnableWorldComposition;
    uint8 bUseClientSideLevelStreamingVolumes;
    uint8 bEnableWorldOriginRebasing;
    uint8 bWorldGravitySet;
    uint8 bGlobalGravitySet;
    uint8 bMinimizeBSPSections;
    uint8 bForceNoPrecomputedLighting;
    uint8 bHighPriorityLoading;
    uint8 bHighPriorityLoadingLocal;
    uint8 bOverrideDefaultBroadphaseSettings;
    UNavigationSystemConfig* NavigationSystemConfig;
    UNavigationSystemConfig* NavigationSystemConfigOverride;
    float WorldToMeters;
    float KillZ;
    TSubclassOf<UDamageType> KillZDamageType;
    float WorldGravityZ;
    float GlobalGravityZ;
    TSubclassOf<ADefaultPhysicsVolume> DefaultPhysicsVolumeClass;
    TSubclassOf<UPhysicsCollisionHandler> PhysicsCollisionHandlerClass;
    TSubclassOf<AGameModeBase> DefaultGameMode;
    TSubclassOf<AGameNetworkManager> GameNetworkManagerClass;
    int32 PackedLightAndShadowMapTextureSize;
    FVector DefaultColorScale;
    float DefaultMaxDistanceFieldOcclusionDistance;
    float GlobalDistanceFieldViewDistance;
    float DynamicIndirectShadowsSelfShadowingIntensity;
    FReverbSettings DefaultReverbSettings;
    FInteriorSettings DefaultAmbientZoneSettings;
    float MonoCullingDistance;
    USoundMix* DefaultBaseSoundMix;
    float TimeDilation;
    float MatineeTimeDilation;
    float DemoPlayTimeDilation;
    float MinGlobalTimeDilation;
    float MaxGlobalTimeDilation;
    float MinUndilatedFrameTime;
    float MaxUndilatedFrameTime;
    FBroadphaseSettings BroadphaseSettings;
    APlayerState* Pauser;
    TArray<FNetViewer> ReplicationViewers;
    TArray<UAssetUserData*> AssetUserData;
    APlayerState* PauserPlayerState;
    int32 MaxNumberOfBookmarks;
    TSubclassOf<UBookmarkBase> DefaultBookmarkClass;
    TArray<UBookmarkBase*> BookmarkArray;
    TSubclassOf<UBookmarkBase> LastBookmarkClass;

    void OnRep_WorldGravityZ();
}

struct UDistributionLookupTable
{
    float TimeScale;
    float TimeBias;
    TArray<float> Values;
    uint8 Op;
    uint8 EntryCount;
    uint8 EntryStride;
    uint8 SubEntryStride;
    uint8 LockFlag;
}

struct URawDistribution
{
    FDistributionLookupTable Table;
}

struct UFloatDistribution
{
    FDistributionLookupTable Table;
}

struct UVectorDistribution
{
    FDistributionLookupTable Table;
}

struct UVector4Distribution
{
    FDistributionLookupTable Table;
}

struct UFloatRK4SpringInterpolator
{
    float StiffnessConstant;
    float DampeningRatio;
}

struct UVectorRK4SpringInterpolator
{
    float StiffnessConstant;
    float DampeningRatio;
}

struct UFormatArgumentData
{
    FString ArgumentName;
    TEnumAsByte<EFormatArgumentType::Type> ArgumentValueType;
    FText ArgumentValue;
    int32 ArgumentValueInt;
    float ArgumentValueFloat;
    ETextGender ArgumentValueGender;
}

struct UExpressionInput
{
    int32 OutputIndex;
    FName ExpressionName;
}

struct UMaterialAttributesInput : FExpressionInput
{
    int32 PropertyConnectedBitmask;
}

struct UExpressionOutput
{
    FName OutputName;
}

struct UMaterialInput
{
    int32 OutputIndex;
    FName ExpressionName;
}

struct UColorMaterialInput : FMaterialInput
{
}

struct UScalarMaterialInput : FMaterialInput
{
}

struct UShadingModelMaterialInput : FMaterialInput
{
}

struct UVectorMaterialInput : FMaterialInput
{
}

struct UVector2MaterialInput : FMaterialInput
{
}

struct UHitResult
{
    uint8 bBlockingHit;
    uint8 bStartPenetrating;
    int32 FaceIndex;
    float Time;
    float Distance;
    FVector_NetQuantize Location;
    FVector_NetQuantize ImpactPoint;
    FVector_NetQuantizeNormal Normal;
    FVector_NetQuantizeNormal ImpactNormal;
    FVector_NetQuantize TraceStart;
    FVector_NetQuantize TraceEnd;
    float PenetrationDepth;
    int32 Item;
    TWeakObjectPtr<UPhysicalMaterial> PhysMaterial;
    TWeakObjectPtr<AActor> Actor;
    TWeakObjectPtr<UPrimitiveComponent> Component;
    FName BoneName;
    FName MyBoneName;
}

struct UVector_NetQuantize : FVector
{
}

struct UVector_NetQuantizeNormal : FVector
{
}

struct UBranchingPointNotifyPayload
{
}

struct USimpleMemberReference
{
    UObject* MemberParent;
    FName MemberName;
    FGuid MemberGuid;
}

struct UTickFunction
{
    TEnumAsByte<ETickingGroup> TickGroup;
    TEnumAsByte<ETickingGroup> EndTickGroup;
    uint8 bTickEvenWhenPaused;
    uint8 bCanEverTick;
    uint8 bStartWithTickEnabled;
    uint8 bAllowTickOnDedicatedServer;
    float TickInterval;
}

struct UActorComponentTickFunction : FTickFunction
{
}

struct USubtitleCue
{
    FText Text;
    float Time;
}

struct UInterpControlPoint
{
    FVector PositionControlPoint;
    bool bPositionIsRelative;
}

struct UPlatformInterfaceDelegateResult
{
    bool bSuccessful;
    FPlatformInterfaceData Data;
}

struct UPlatformInterfaceData
{
    FName DataName;
    TEnumAsByte<EPlatformInterfaceDataType> Type;
    int32 IntValue;
    float FloatValue;
    FString StringValue;
    UObject* ObjectValue;
}

struct UDebugFloatHistory
{
    TArray<float> Samples;
    float MaxSamples;
    float MinValue;
    float MaxValue;
    bool bAutoAdjustMinMax;
}

struct ULatentActionInfo
{
    int32 Linkage;
    int32 UUID;
    FName ExecutionFunction;
    UObject* CallbackTarget;
}

struct UTimerHandle
{
    uint64 Handle;
}

struct UCollisionProfileName
{
    FName Name;
}

struct UGenericStruct
{
    int32 Data;
}

struct UUserActivity
{
    FString ActionName;
}

struct URepAttachment
{
    AActor* AttachParent;
    FVector_NetQuantize100 LocationOffset;
    FVector_NetQuantize100 RelativeScale3D;
    FRotator RotationOffset;
    FName AttachSocket;
    USceneComponent* AttachComponent;
}

struct UVector_NetQuantize100 : FVector
{
}

struct URepMovement
{
    FVector LinearVelocity;
    FVector AngularVelocity;
    FVector Location;
    FRotator Rotation;
    uint8 bSimulatedPhysicSleep;
    uint8 bRepPhysics;
    EVectorQuantization LocationQuantizationLevel;
    EVectorQuantization VelocityQuantizationLevel;
    ERotatorQuantization RotationQuantizationLevel;
}

struct UActorTickFunction : FTickFunction
{
}

struct URootMotionSourceGroup
{
    uint8 bHasAdditiveSources;
    uint8 bHasOverrideSources;
    uint8 bHasOverrideSourcesWithIgnoreZAccumulate;
    uint8 bIsAdditiveVelocityApplied;
    FRootMotionSourceSettings LastAccumulatedSettings;
    FVector_NetQuantize10 LastPreAdditiveVelocity;
}

struct UVector_NetQuantize10 : FVector
{
}

struct URootMotionSourceSettings
{
    uint8 Flags;
}

struct URepRootMotionMontage
{
    bool bIsActive;
    UAnimMontage* AnimMontage;
    float Position;
    FVector_NetQuantize100 Location;
    FRotator Rotation;
    UPrimitiveComponent* MovementBase;
    FName MovementBaseBoneName;
    bool bRelativePosition;
    bool bRelativeRotation;
    FRootMotionSourceGroup AuthoritativeRootMotion;
    FVector_NetQuantize10 Acceleration;
    FVector_NetQuantize10 LinearVelocity;
}

struct USimulatedRootMotionReplicatedMove
{
    float Time;
    FRepRootMotionMontage RootMotion;
}

struct URootMotionMovementParams
{
    bool bHasRootMotion;
    float BlendWeight;
    FTransform RootMotionTransform;
}

struct UBasedMovementInfo
{
    UPrimitiveComponent* MovementBase;
    FName BoneName;
    FVector_NetQuantize100 Location;
    FRotator Rotation;
    bool bServerHasBaseComponent;
    bool bRelativeRotation;
    bool bServerHasVelocity;
}

struct UUniqueNetIdRepl : FUniqueNetIdWrapper
{
    TArray<uint8> ReplicationBytes;
}

struct UForceFeedbackParameters
{
    FName Tag;
    bool bLooping;
    bool bIgnoreTimeDilation;
    bool bPlayWhilePaused;
}

struct UViewTargetTransitionParams
{
    float BlendTime;
    TEnumAsByte<EViewTargetBlendFunction> BlendFunction;
    float BlendExp;
    uint8 bLockOutgoing;
}

struct UUpdateLevelStreamingLevelStatus
{
    FName PackageName;
    int32 LODIndex;
    uint8 bNewShouldBeLoaded;
    uint8 bNewShouldBeVisible;
    uint8 bNewShouldBlockOnLoad;
}

struct UUpdateLevelVisibilityLevelInfo
{
    FName PackageName;
    FName Filename;
    uint8 bIsVisible;
}

struct UActiveForceFeedbackEffect
{
    UForceFeedbackEffect* ForceFeedbackEffect;
}

struct UWalkableSlopeOverride
{
    TEnumAsByte<EWalkableSlopeBehavior> WalkableSlopeBehavior;
    float WalkableSlopeAngle;
}

struct UBodyInstance
{
    TEnumAsByte<ECollisionChannel> ObjectType;
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    ESleepFamily SleepFamily;
    TEnumAsByte<EDOFMode::Type> DOFMode;
    uint8 bUseCCD;
    uint8 bIgnoreAnalyticCollisions;
    uint8 bNotifyRigidBodyCollision;
    uint8 bSimulatePhysics;
    uint8 bOverrideMass;
    uint8 bEnableGravity;
    uint8 bAutoWeld;
    uint8 bStartAwake;
    uint8 bGenerateWakeEvents;
    uint8 bUpdateMassWhenScaleChanges;
    uint8 bLockTranslation;
    uint8 bLockRotation;
    uint8 bLockXTranslation;
    uint8 bLockYTranslation;
    uint8 bLockZTranslation;
    uint8 bLockXRotation;
    uint8 bLockYRotation;
    uint8 bLockZRotation;
    uint8 bOverrideMaxAngularVelocity;
    uint8 bOverrideMaxDepenetrationVelocity;
    uint8 bOverrideWalkableSlopeOnInstance;
    uint8 bInterpolateWhenSubStepping;
    FName CollisionProfileName;
    uint8 PositionSolverIterationCount;
    uint8 VelocitySolverIterationCount;
    FCollisionResponse CollisionResponses;
    float MaxDepenetrationVelocity;
    float MassInKgOverride;
    float LinearDamping;
    float AngularDamping;
    FVector CustomDOFPlaneNormal;
    FVector COMNudge;
    float MassScale;
    FVector InertiaTensorScale;
    FWalkableSlopeOverride WalkableSlopeOverride;
    UPhysicalMaterial* PhysMaterialOverride;
    float MaxAngularVelocity;
    float CustomSleepThresholdMultiplier;
    float StabilizationThresholdMultiplier;
    float PhysicsBlendWeight;
}

struct UCollisionResponse
{
    FCollisionResponseContainer ResponseToChannels;
    TArray<FResponseChannel> ResponseArray;
}

struct UResponseChannel
{
    FName Channel;
    TEnumAsByte<ECollisionResponse> Response;
}

struct UCollisionResponseContainer
{
    TEnumAsByte<ECollisionResponse> WorldStatic;
    TEnumAsByte<ECollisionResponse> WorldDynamic;
    TEnumAsByte<ECollisionResponse> Pawn;
    TEnumAsByte<ECollisionResponse> Visibility;
    TEnumAsByte<ECollisionResponse> Camera;
    TEnumAsByte<ECollisionResponse> PhysicsBody;
    TEnumAsByte<ECollisionResponse> Vehicle;
    TEnumAsByte<ECollisionResponse> Destructible;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel1;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel2;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel3;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel4;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel5;
    TEnumAsByte<ECollisionResponse> EngineTraceChannel6;
    TEnumAsByte<ECollisionResponse> GameTraceChannel1;
    TEnumAsByte<ECollisionResponse> GameTraceChannel2;
    TEnumAsByte<ECollisionResponse> GameTraceChannel3;
    TEnumAsByte<ECollisionResponse> GameTraceChannel4;
    TEnumAsByte<ECollisionResponse> GameTraceChannel5;
    TEnumAsByte<ECollisionResponse> GameTraceChannel6;
    TEnumAsByte<ECollisionResponse> GameTraceChannel7;
    TEnumAsByte<ECollisionResponse> GameTraceChannel8;
    TEnumAsByte<ECollisionResponse> GameTraceChannel9;
    TEnumAsByte<ECollisionResponse> GameTraceChannel10;
    TEnumAsByte<ECollisionResponse> GameTraceChannel11;
    TEnumAsByte<ECollisionResponse> GameTraceChannel12;
    TEnumAsByte<ECollisionResponse> GameTraceChannel13;
    TEnumAsByte<ECollisionResponse> GameTraceChannel14;
    TEnumAsByte<ECollisionResponse> GameTraceChannel15;
    TEnumAsByte<ECollisionResponse> GameTraceChannel16;
    TEnumAsByte<ECollisionResponse> GameTraceChannel17;
    TEnumAsByte<ECollisionResponse> GameTraceChannel18;
}

struct UCustomPrimitiveData
{
    TArray<float> Data;
}

struct ULightingChannels
{
    uint8 bChannel0;
    uint8 bChannel1;
    uint8 bChannel2;
}

struct UFastArraySerializer
{
    int32 ArrayReplicationKey;
    EFastArraySerializerDeltaFlags DeltaFlags;
}

struct UFastArraySerializerItem
{
    int32 ReplicationID;
    int32 ReplicationKey;
    int32 MostRecentArrayReplicationKey;
}

struct UDebugTextInfo
{
    AActor* SrcActor;
    FVector SrcActorOffset;
    FVector SrcActorDesiredOffset;
    FString DebugText;
    float TimeRemaining;
    float Duration;
    FColor TextColor;
    uint8 bAbsoluteLocation;
    uint8 bKeepAttachedToActor;
    uint8 bDrawShadow;
    FVector OrigActorLocation;
    UFont* Font;
    float FontScale;
}

struct URuntimeFloatCurve
{
    FRichCurve EditorCurveData;
    UCurveFloat* ExternalCurve;
}

struct UIndexedCurve
{
    FKeyHandleMap KeyHandlesToIndices;
}

struct UKeyHandleMap
{
}

struct URealCurve : FIndexedCurve
{
    float DefaultValue;
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
}

struct URichCurve : FRealCurve
{
    TArray<FRichCurveKey> Keys;
}

struct URichCurveKey
{
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;
    float Time;
    float Value;
    float ArriveTangent;
    float ArriveTangentWeight;
    float LeaveTangent;
    float LeaveTangentWeight;
}

struct UOverlapResult
{
    TWeakObjectPtr<AActor> Actor;
    TWeakObjectPtr<UPrimitiveComponent> Component;
    uint8 bBlockingHit;
}

struct UTableRowBase
{
}

struct UKeyHandleLookupTable
{
}

struct UPerPlatformFloat
{
    float Default;
}

struct UPerPlatformInt
{
    int32 Default;
}

struct UPerPlatformBool
{
    bool Default;
}

struct UAnimNode_Base
{
}

struct UPoseLinkBase
{
    int32 LinkID;
}

struct UPoseLink : FPoseLinkBase
{
}

struct UAnimInstanceProxy
{
}

struct UInputScaleBiasClamp
{
    bool bMapRange;
    bool bClampResult;
    bool bInterpResult;
    FInputRange InRange;
    FInputRange OutRange;
    float Scale;
    float Bias;
    float ClampMin;
    float ClampMax;
    float InterpSpeedIncreasing;
    float InterpSpeedDecreasing;
}

struct UInputRange
{
    float Min;
    float Max;
}

struct UInputAlphaBoolBlend
{
    float BlendInTime;
    float BlendOutTime;
    EAlphaBlendOption BlendOption;
    bool bInitialized;
    UCurveFloat* CustomCurve;
    FAlphaBlend AlphaBlend;
}

struct UAlphaBlend
{
    UCurveFloat* CustomCurve;
    float BlendTime;
    EAlphaBlendOption BlendOption;
}

struct UInputScaleBias
{
    float Scale;
    float Bias;
}

struct UComponentSpacePoseLink : FPoseLinkBase
{
}

struct UBoneReference
{
    FName BoneName;
}

struct UAnimNode_AssetPlayerBase : FAnimNode_Base
{
    int32 GroupIndex;
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;
    bool bIgnoreForRelevancyTest;
    float BlendWeight;
    float InternalTimeAccumulator;
}

struct UPerBoneBlendWeight
{
    int32 SourceIndex;
    float BlendWeight;
}

struct UInputBlendPose
{
    TArray<FBranchFilter> BranchFilters;
}

struct UBranchFilter
{
    FName BoneName;
    int32 BlendDepth;
}

struct UPoseSnapshot
{
    TArray<FTransform> LocalTransforms;
    TArray<FName> BoneNames;
    FName SkeletalMeshName;
    FName SnapshotName;
    bool bIsValid;
}

struct USolverIterations
{
    int32 SolverIterations;
    int32 JointIterations;
    int32 CollisionIterations;
    int32 SolverPushOutIterations;
    int32 JointPushOutIterations;
    int32 CollisionPushOutIterations;
}

struct UAnimNode_Root : FAnimNode_Base
{
    FPoseLink Result;
    FName Name;
    FName Group;
}

struct UAnimCurveParam
{
    FName Name;
}

struct UActorComponentInstanceData
{
    UObject* SourceComponentTemplate;
    EComponentCreationMethod SourceComponentCreationMethod;
    int32 SourceComponentTypeSerializedIndex;
    TArray<uint8> SavedProperties;
    TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects;
    TArray<UObject*> ReferencedObjects;
    TArray<FName> ReferencedNames;
}

struct UActorComponentDuplicatedObjectData
{
}

struct USceneComponentInstanceData : FActorComponentInstanceData
{
    TMap<USceneComponent*, FTransform> AttachedInstanceComponents;
}

struct UDirectoryPath
{
    FString Path;
}

struct UKAggregateGeom
{
    TArray<FKSphereElem> SphereElems;
    TArray<FKBoxElem> BoxElems;
    TArray<FKSphylElem> SphylElems;
    TArray<FKConvexElem> ConvexElems;
    TArray<FKTaperedCapsuleElem> TaperedCapsuleElems;
}

struct UKShapeElem
{
    float RestOffset;
    FName Name;
    uint8 bContributeToMass;
}

struct UKTaperedCapsuleElem : FKShapeElem
{
    FVector Center;
    FRotator Rotation;
    float Radius0;
    float Radius1;
    float Length;
}

struct UKConvexElem : FKShapeElem
{
    TArray<FVector> VertexData;
    TArray<int32> IndexData;
    FBox ElemBox;
    FTransform Transform;
}

struct UKSphylElem : FKShapeElem
{
    FVector Center;
    FRotator Rotation;
    float Radius;
    float Length;
}

struct UKBoxElem : FKShapeElem
{
    FVector Center;
    FRotator Rotation;
    float X;
    float Y;
    float Z;
}

struct UKSphereElem : FKShapeElem
{
    FVector Center;
    float Radius;
}

struct UAnimationGroupReference
{
    FName GroupName;
    TEnumAsByte<EAnimGroupRole::Type> GroupRole;
}

struct UAnimGroupInstance
{
}

struct UAnimTickRecord
{
    UAnimationAsset* SourceAsset;
}

struct UMarkerSyncAnimPosition
{
    FName PreviousMarkerName;
    FName NextMarkerName;
    float PositionBetweenMarkers;
}

struct UBlendFilter
{
}

struct UBlendSampleData
{
    int32 SampleDataIndex;
    UAnimSequence* Animation;
    float TotalWeight;
    float Time;
    float PreviousTime;
    float SamplePlayRate;
}

struct UAnimationRecordingSettings
{
    bool bRecordInWorldSpace;
    bool bRemoveRootAnimation;
    bool bAutoSaveAsset;
    float SampleRate;
    float Length;
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
}

struct UComponentSpacePose
{
    TArray<FTransform> Transforms;
    TArray<FName> Names;
}

struct ULocalSpacePose
{
    TArray<FTransform> Transforms;
    TArray<FName> Names;
}

struct UNamedTransform
{
    FTransform Value;
    FName Name;
}

struct UNamedColor
{
    FColor Value;
    FName Name;
}

struct UNamedVector
{
    FVector Value;
    FName Name;
}

struct UNamedFloat
{
    float Value;
    FName Name;
}

struct UAnimParentNodeAssetOverride
{
    UAnimationAsset* NewAsset;
    FGuid ParentNodeGuid;
}

struct UAnimGroupInfo
{
    FName Name;
    FLinearColor Color;
}

struct UAnimBlueprintDebugData
{
}

struct UAnimationFrameSnapshot
{
}

struct UStateMachineDebugData
{
}

struct UStateMachineStateDebugData
{
}

struct UAnimBlueprintFunctionData
{
    TFieldPath<FNone> OutputPoseNodeProperty;
    TArray<TFieldPath<FNone>> InputPoseNodeProperties;
    TArray<TFieldPath<FNone>> InputProperties;
}

struct UAnimGraphBlendOptions
{
    float BlendInTime;
    float BlendOutTime;
}

struct UGraphAssetPlayerInformation
{
    TArray<int32> PlayerNodeIndices;
}

struct UCachedPoseIndices
{
    TArray<int32> OrderedSavedPoseNodeIndices;
}

struct UAnimBlueprintFunction
{
    FName Name;
    FName Group;
    int32 OutputPoseNodeIndex;
    TArray<FName> InputPoseNames;
    TArray<int32> InputPoseNodeIndices;
    bool bImplemented;
}

struct UAnimTrack
{
    TArray<FAnimSegment> AnimSegments;
}

struct UAnimSegment
{
    UAnimSequenceBase* AnimReference;
    float StartPos;
    float AnimStartTime;
    float AnimEndTime;
    float AnimPlayRate;
    int32 LoopingCount;
}

struct URootMotionExtractionStep
{
    UAnimSequence* AnimSequence;
    float StartPosition;
    float EndPosition;
}

struct UAnimationErrorStats
{
}

struct URawCurveTracks
{
    TArray<FFloatCurve> FloatCurves;
}

struct UAnimCurveBase
{
    FName LastObservedName;
    FSmartName Name;
    int32 CurveTypeFlags;
}

struct USmartName
{
    FName DisplayName;
}

struct UFloatCurve : FAnimCurveBase
{
    FRichCurve FloatCurve;
}

struct UTransformCurve : FAnimCurveBase
{
    FVectorCurve TranslationCurve;
    FVectorCurve RotationCurve;
    FVectorCurve ScaleCurve;
}

struct UVectorCurve : FAnimCurveBase
{
    FRichCurve FloatCurves;
}

struct USlotEvaluationPose
{
    TEnumAsByte<EAdditiveAnimationType> AdditiveType;
    float Weight;
}

struct UA2Pose
{
    TArray<FTransform> Bones;
}

struct UA2CSPose : FA2Pose
{
    TArray<uint8> ComponentSpaceFlags;
}

struct UQueuedDrawDebugItem
{
    TEnumAsByte<EDrawDebugItemType::Type> ItemType;
    FVector StartLoc;
    FVector EndLoc;
    FVector Center;
    FRotator Rotation;
    float Radius;
    float Size;
    int32 Segments;
    FColor Color;
    bool bPersistentLines;
    float LifeTime;
    float Thickness;
    FString Message;
    FVector2D TextScale;
}

struct UAnimLinkableElement
{
    UAnimMontage* LinkedMontage;
    int32 SlotIndex;
    int32 SegmentIndex;
    TEnumAsByte<EAnimLinkMethod::Type> LinkMethod;
    TEnumAsByte<EAnimLinkMethod::Type> CachedLinkMethod;
    float SegmentBeginTime;
    float SegmentLength;
    float LinkValue;
    UAnimSequenceBase* LinkedSequence;
}

struct UAnimMontageInstance
{
    UAnimMontage* Montage;
    bool bPlaying;
    float DefaultBlendTimeMultiplier;
    TArray<int32> NextSections;
    TArray<int32> PrevSections;
    TArray<FAnimNotifyEvent> ActiveStateBranchingPoints;
    float Position;
    float PlayRate;
    FAlphaBlend Blend;
    int32 DisableRootMotionCount;
}

struct UAnimNotifyEvent : FAnimLinkableElement
{
    float DisplayTime;
    float TriggerTimeOffset;
    float EndTriggerTimeOffset;
    float TriggerWeightThreshold;
    FName NotifyName;
    UAnimNotify* Notify;
    UAnimNotifyState* NotifyStateClass;
    float Duration;
    FAnimLinkableElement EndLink;
    bool bConvertedFromBranchingPoint;
    TEnumAsByte<EMontageNotifyTickType::Type> MontageTickType;
    float NotifyTriggerChance;
    TEnumAsByte<ENotifyFilterType::Type> NotifyFilterType;
    int32 NotifyFilterLOD;
    bool bTriggerOnDedicatedServer;
    bool bTriggerOnFollower;
    int32 TrackIndex;
}

struct UBranchingPointMarker
{
    int32 NotifyIndex;
    float TriggerTime;
    TEnumAsByte<EAnimNotifyEventType::Type> NotifyEventType;
}

struct UBranchingPoint : FAnimLinkableElement
{
    FName EventName;
    float DisplayTime;
    float TriggerTimeOffset;
}

struct USlotAnimationTrack
{
    FName slotName;
    FAnimTrack AnimTrack;
}

struct UCompositeSection : FAnimLinkableElement
{
    FName SectionName;
    float StartTime;
    FName NextSectionName;
    TArray<UAnimMetaData*> MetaData;
}

struct UAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base
{
    FPoseLink Base;
    FPoseLink Additive;
    EAnimAlphaInputType AlphaInputType;
    float alpha;
    uint8 bAlphaBoolEnabled;
    FInputAlphaBoolBlend AlphaBoolBlend;
    FName AlphaCurveName;
    FInputScaleBias AlphaScaleBias;
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    int32 LODThreshold;
}

struct UAnimNode_CustomProperty : FAnimNode_Base
{
    TArray<FName> SourcePropertyNames;
    TArray<FName> DestPropertyNames;
    UObject* TargetInstance;
}

struct UAnimNode_Inertialization : FAnimNode_Base
{
    FPoseLink Source;
}

struct UInertializationPoseDiff
{
}

struct UInertializationCurveDiff
{
}

struct UInertializationBoneDiff
{
}

struct UInertializationPose
{
}

struct UAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty
{
    TArray<FPoseLink> InputPoses;
    TArray<FName> InputPoseNames;
    TSubclassOf<UAnimInstance> InstanceClass;
    FName Tag;
    uint8 bReceiveNotifiesFromLinkedInstances;
    uint8 bPropagateNotifiesToLinkedInstances;
}

struct UAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph
{
    TSubclassOf<UAnimLayerInterface> Interface;
    FName Layer;
}

struct UAnimNode_LinkedInputPose : FAnimNode_Base
{
    FName Name;
    FName Graph;
    FPoseLink InputPose;
}

struct UAnimNode_SaveCachedPose : FAnimNode_Base
{
    FPoseLink pose;
    FName CachePoseName;
}

struct UAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase
{
    UAnimSequenceBase* Sequence;
    float PlayRateBasis;
    float PlayRate;
    FInputScaleBiasClamp PlayRateScaleBiasClamp;
    float StartPosition;
    bool bLoopAnimation;
}

struct UAnimNode_StateMachine : FAnimNode_Base
{
    int32 StateMachineIndexInClass;
    int32 MaxTransitionsPerFrame;
    bool bSkipFirstUpdateTransition;
    bool bReinitializeOnBecomingRelevant;
}

struct UAnimationPotentialTransition
{
}

struct UAnimationActiveTransitionEntry
{
    UBlendProfile* BlendProfile;
}

struct UAnimNode_TransitionPoseEvaluator : FAnimNode_Base
{
    int32 FramesToCachePose;
    TEnumAsByte<EEvaluatorDataSource::Type> DataSource;
    TEnumAsByte<EEvaluatorMode::Type> EvaluatorMode;
}

struct UAnimNode_TransitionResult : FAnimNode_Base
{
    bool bCanEnterTransition;
}

struct UAnimNode_UseCachedPose : FAnimNode_Base
{
    FPoseLink LinkToCachingNode;
    FName CachePoseName;
}

struct UExposedValueHandler
{
    FName BoundFunction;
    TArray<FExposedValueCopyRecord> CopyRecords;
    UFunction* Function;
    TFieldPath<FNone> ValueHandlerNodeProperty;
}

struct UExposedValueCopyRecord
{
    FName SourcePropertyName;
    FName SourceSubPropertyName;
    int32 SourceArrayIndex;
    bool bInstanceIsTarget;
    EPostCopyOperation PostCopyOperation;
    ECopyType CopyType;
    TFieldPath<FNone> DestProperty;
    int32 DestArrayIndex;
    int32 Size;
    TFieldPath<FNone> CachedSourceProperty;
    TFieldPath<FNone> CachedSourceStructSubProperty;
}

struct UAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base
{
    FPoseLink LocalPose;
}

struct UAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base
{
    FComponentSpacePoseLink ComponentPose;
}

struct UAnimNotifyQueue
{
    TArray<FAnimNotifyEventReference> AnimNotifies;
    TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies;
}

struct UAnimNotifyArray
{
    TArray<FAnimNotifyEventReference> Notifies;
}

struct UAnimNotifyEventReference
{
    UObject* NotifySource;
}

struct UCompressedTrack
{
    TArray<uint8> ByteStream;
    TArray<float> Times;
    float Mins;
    float Ranges;
}

struct UCurveTrack
{
    FName CurveName;
    TArray<float> CurveWeights;
}

struct UScaleTrack
{
    TArray<FVector> ScaleKeys;
    TArray<float> Times;
}

struct URotationTrack
{
    TArray<FQuat> RotKeys;
    TArray<float> Times;
}

struct UTranslationTrack
{
    TArray<FVector> PosKeys;
    TArray<float> Times;
}

struct UAnimSequenceTrackContainer
{
    TArray<FRawAnimSequenceTrack> AnimationTracks;
    TArray<FName> TrackNames;
}

struct URawAnimSequenceTrack
{
    TArray<FVector> PosKeys;
    TArray<FQuat> RotKeys;
    TArray<FVector> ScaleKeys;
}

struct UAnimSetMeshLinkup
{
    TArray<int32> BoneToTrackTable;
}

struct UAnimSingleNodeInstanceProxy : FAnimInstanceProxy
{
}

struct UAnimNode_SingleNode : FAnimNode_Base
{
    FPoseLink SourcePose;
}

struct UBakedAnimationStateMachine
{
    FName MachineName;
    int32 InitialState;
    TArray<FBakedAnimationState> States;
    TArray<FAnimationTransitionBetweenStates> Transitions;
}

struct UAnimationStateBase
{
    FName StateName;
}

struct UAnimationTransitionBetweenStates : FAnimationStateBase
{
    int32 PreviousState;
    int32 NextState;
    float CrossfadeDuration;
    int32 StartNotify;
    int32 EndNotify;
    int32 InterruptNotify;
    EAlphaBlendOption BlendMode;
    UCurveFloat* CustomCurve;
    UBlendProfile* BlendProfile;
    TEnumAsByte<ETransitionLogicType::Type> LogicType;
}

struct UBakedAnimationState
{
    FName StateName;
    TArray<FBakedStateExitTransition> Transitions;
    int32 StateRootNodeIndex;
    int32 StartNotify;
    int32 EndNotify;
    int32 FullyBlendedNotify;
    bool bIsAConduit;
    int32 EntryRuleNodeIndex;
    TArray<int32> PlayerNodeIndices;
    TArray<int32> LayerNodeIndices;
    bool bAlwaysResetOnEntry;
}

struct UBakedStateExitTransition
{
    int32 CanTakeDelegateIndex;
    int32 CustomResultNodeIndex;
    int32 TransitionIndex;
    bool bDesiredTransitionReturnValue;
    bool bAutomaticRemainingTimeRule;
    TArray<int32> PoseEvaluatorLinks;
}

struct UAnimationState : FAnimationStateBase
{
    TArray<FAnimationTransitionRule> Transitions;
    int32 StateRootNodeIndex;
    int32 StartNotify;
    int32 EndNotify;
    int32 FullyBlendedNotify;
}

struct UAnimationTransitionRule
{
    FName RuleToExecute;
    bool TransitionReturnVal;
    int32 TransitionIndex;
}

struct UTrackToSkeletonMap
{
    int32 BoneTreeIndex;
}

struct UMarkerSyncData
{
    TArray<FAnimSyncMarker> AuthoredSyncMarkers;
}

struct UAnimSyncMarker
{
    FName MarkerName;
    float Time;
}

struct UAnimNotifyTrack
{
    FName TrackName;
    FLinearColor TrackColor;
}

struct UPerBoneBlendWeights
{
    TArray<FPerBoneBlendWeight> BoneBlendWeights;
}

struct UAssetImportInfo
{
}

struct UPrimaryAssetRulesCustomOverride
{
    FPrimaryAssetType PrimaryAssetType;
    FDirectoryPath FilterDirectory;
    FString FilterString;
    FPrimaryAssetRules Rules;
}

struct UPrimaryAssetRules
{
    int32 Priority;
    int32 ChunkId;
    bool bApplyRecursively;
    EPrimaryAssetCookRule CookRule;
}

struct UPrimaryAssetRulesOverride
{
    FPrimaryAssetId PrimaryAssetId;
    FPrimaryAssetRules Rules;
}

struct UAssetManagerRedirect
{
    FString Old;
    FString New;
}

struct UPrimaryAssetTypeInfo
{
    FName PrimaryAssetType;
    TSoftClassPtr<UObject> AssetBaseClass;
    UClass* AssetBaseClassLoaded;
    bool bHasBlueprintClasses;
    bool bIsEditorOnly;
    TArray<FDirectoryPath> Directories;
    TArray<FSoftObjectPath> SpecificAssets;
    FPrimaryAssetRules Rules;
    TArray<FString> AssetScanPaths;
    bool bIsDynamicAsset;
    int32 NumberOfAssets;
}

struct UAssetMapping
{
    UAnimationAsset* SourceAsset;
    UAnimationAsset* TargetAsset;
}

struct UAtmospherePrecomputeInstanceData : FSceneComponentInstanceData
{
}

struct UAtmospherePrecomputeParameters
{
    float DensityHeight;
    float DecayHeight;
    int32 MaxScatteringOrder;
    int32 TransmittanceTexWidth;
    int32 TransmittanceTexHeight;
    int32 IrradianceTexWidth;
    int32 IrradianceTexHeight;
    int32 InscatterAltitudeSampleNum;
    int32 InscatterMuNum;
    int32 InscatterMuSNum;
    int32 InscatterNuNum;
}

struct UBaseAttenuationSettings
{
    EAttenuationDistanceModel DistanceAlgorithm;
    TEnumAsByte<EAttenuationShape::Type> AttenuationShape;
    float dBAttenuationAtMax;
    ENaturalSoundFalloffMode FalloffMode;
    FVector AttenuationShapeExtents;
    float ConeOffset;
    float FalloffDistance;
    FRuntimeFloatCurve CustomAttenuationCurve;
}

struct UAudioComponentParam
{
    FName ParamName;
    float FloatParam;
    bool BoolParam;
    int32 IntParam;
    USoundWave* SoundWaveParam;
}

struct UAudioEffectParameters
{
}

struct UAudioReverbEffect : FAudioEffectParameters
{
}

struct UAudioQualitySettings
{
    FText DisplayName;
    int32 MaxChannels;
}

struct UInteriorSettings
{
    bool bIsWorldSettings;
    float ExteriorVolume;
    float ExteriorTime;
    float ExteriorLPF;
    float ExteriorLPFTime;
    float InteriorVolume;
    float InteriorTime;
    float InteriorLPF;
    float InteriorLPFTime;
}

struct ULaunchOnTestSettings
{
    FFilePath LaunchOnTestmap;
    FString DeviceID;
}

struct UFilePath
{
    FString FilePath;
}

struct UEditorMapPerformanceTestDefinition
{
    FSoftObjectPath PerformanceTestmap;
    int32 TestTimer;
}

struct UBuildPromotionTestSettings
{
    FFilePath DefaultStaticMeshAsset;
    FBuildPromotionImportWorkflowSettings ImportWorkflow;
    FBuildPromotionOpenAssetSettings OpenAssets;
    FBuildPromotionNewProjectSettings NewProjectSettings;
    FFilePath SourceControlMaterial;
}

struct UBuildPromotionNewProjectSettings
{
    FDirectoryPath NewProjectFolderOverride;
    FString NewProjectNameOverride;
}

struct UBuildPromotionOpenAssetSettings
{
    FFilePath BlueprintAsset;
    FFilePath MaterialAsset;
    FFilePath ParticleSystemAsset;
    FFilePath SkeletalMeshAsset;
    FFilePath StaticMeshAsset;
    FFilePath TextureAsset;
}

struct UBuildPromotionImportWorkflowSettings
{
    FEditorImportWorkflowDefinition Diffuse;
    FEditorImportWorkflowDefinition Normal;
    FEditorImportWorkflowDefinition StaticMesh;
    FEditorImportWorkflowDefinition ReimportStaticMesh;
    FEditorImportWorkflowDefinition BlendShapeMesh;
    FEditorImportWorkflowDefinition MorphMesh;
    FEditorImportWorkflowDefinition SkeletalMesh;
    FEditorImportWorkflowDefinition Animation;
    FEditorImportWorkflowDefinition Sound;
    FEditorImportWorkflowDefinition SurroundSound;
    TArray<FEditorImportWorkflowDefinition> OtherAssetsToImport;
}

struct UEditorImportWorkflowDefinition
{
    FFilePath ImportFilePath;
    TArray<FImportFactorySettingValues> FactorySettings;
}

struct UImportFactorySettingValues
{
    FString SettingName;
    FString Value;
}

struct UBlueprintEditorPromotionSettings
{
    FFilePath FirstMeshPath;
    FFilePath SecondMeshPath;
    FFilePath DefaultParticleAsset;
}

struct UParticleEditorPromotionSettings
{
    FFilePath DefaultParticleAsset;
}

struct UMaterialEditorPromotionSettings
{
    FFilePath DefaultMaterialAsset;
    FFilePath DefaultDiffuseTexture;
    FFilePath DefaultNormalTexture;
}

struct UEditorImportExportTestDefinition
{
    FFilePath ImportFilePath;
    FString ExportFileExtension;
    bool bSkipExport;
    TArray<FImportFactorySettingValues> FactorySettings;
}

struct UExternalToolDefinition
{
    FString ToolName;
    FFilePath ExecutablePath;
    FString CommandLineOptions;
    FDirectoryPath WorkingDirectory;
    FString ScriptExtension;
    FDirectoryPath ScriptDirectory;
}

struct UNavAvoidanceData
{
}

struct UBandwidthTestGenerator
{
    TArray<FBandwidthTestItem> ReplicatedBuffers;
}

struct UBandwidthTestItem
{
    TArray<uint8> Kilobyte;
}

struct UBlendProfileBoneEntry
{
    FBoneReference BoneReference;
    float BlendScale;
}

struct UPerBoneInterpolation
{
    FBoneReference BoneReference;
    float InterpolationSpeedPerSec;
}

struct UGridBlendSample
{
    FEditorElement GridElement;
    float BlendWeight;
}

struct UEditorElement
{
    int32 Indices;
    float Weights;
}

struct UBlendSample
{
    UAnimSequence* Animation;
    FVector SampleValue;
    float RateScale;
}

struct UBlendParameter
{
    FString DisplayName;
    float Min;
    float Max;
    int32 GridNum;
}

struct UInterpolationParameter
{
    float InterpolationTime;
    TEnumAsByte<EFilterInterpolationType> InterpolationType;
}

struct UBPEditorBookmarkNode
{
    FGuid NodeGuid;
    FGuid ParentGuid;
    FText DisplayName;
}

struct UEditedDocumentInfo
{
    FSoftObjectPath EditedObjectPath;
    FVector2D SavedViewOffset;
    float SavedZoomAmount;
    UObject* EditedObject;
}

struct UBPInterfaceDescription
{
    TSubclassOf<UInterface> Interface;
    TArray<UEdGraph*> Graphs;
}

struct UBPVariableDescription
{
    FName VarName;
    FGuid VarGuid;
    FEdGraphPinType VarType;
    FString FriendlyName;
    FText Category;
    uint64 PropertyFlags;
    FName RepNotifyFunc;
    TEnumAsByte<ELifetimeCondition> ReplicationCondition;
    TArray<FBPVariableMetaDataEntry> MetaDataArray;
    FString DefaultValue;
}

struct UBPVariableMetaDataEntry
{
    FName DataKey;
    FString DataValue;
}

struct UEdGraphPinType
{
    FName PinCategory;
    FName PinSubCategory;
    TWeakObjectPtr<UObject> PinSubCategoryObject;
    FSimpleMemberReference PinSubCategoryMemberReference;
    FEdGraphTerminalType PinValueType;
    EPinContainerType ContainerType;
    uint8 bIsArray;
    uint8 bIsReference;
    uint8 bIsConst;
    uint8 bIsWeakPointer;
}

struct UEdGraphTerminalType
{
    FName TerminalCategory;
    FName TerminalSubCategory;
    TWeakObjectPtr<UObject> TerminalSubCategoryObject;
    bool bTerminalIsConst;
    bool bTerminalIsWeakPointer;
}

struct UBlueprintMacroCosmeticInfo
{
}

struct UCompilerNativizationOptions
{
    FName PlatformName;
    bool ServerOnlyPlatform;
    bool ClientOnlyPlatform;
    bool bExcludeMonolithicHeaders;
    TArray<FName> ExcludedModules;
    TSet<FSoftObjectPath> ExcludedAssets;
    TArray<FString> ExcludedFolderPaths;
}

struct UBPComponentClassOverride
{
    FName ComponentName;
    UClass* ComponentClass;
}

struct UBlueprintCookedComponentInstancingData
{
    TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;
    bool bHasValidCookedData;
}

struct UBlueprintComponentChangedPropertyInfo
{
    FName PropertyName;
    int32 ArrayIndex;
    UStruct* PropertyScope;
}

struct UEventGraphFastCallPair
{
    UFunction* FunctionToPatch;
    int32 EventGraphCallOffset;
}

struct UBlueprintDebugData
{
}

struct UPointerToUberGraphFrame
{
}

struct UDebuggingInfoForSingleFunction
{
}

struct UNodeToCodeAssociation
{
}

struct UAnimCurveType
{
}

struct UBookmarkBaseJumpToSettings
{
}

struct UBookmarkJumpToSettings : FBookmarkBaseJumpToSettings
{
}

struct UBookmark2DJumpToSettings
{
}

struct UGeomSelection
{
    int32 Type;
    int32 Index;
    int32 SelectionIndex;
}

struct UBuilderPoly
{
    TArray<int32> VertexIndices;
    int32 Direction;
    FName ItemName;
    int32 PolyFlags;
}

struct UCachedAnimTransitionData
{
    FName StateMachineName;
    FName FromStateName;
    FName ToStateName;
}

struct UCachedAnimRelevancyData
{
    FName StateMachineName;
    FName StateName;
}

struct UCachedAnimAssetPlayerData
{
    FName StateMachineName;
    FName StateName;
}

struct UCachedAnimStateArray
{
    TArray<FCachedAnimStateData> States;
}

struct UCachedAnimStateData
{
    FName StateMachineName;
    FName StateName;
}

struct UActiveCameraShakeInfo
{
    UCameraShake* ShakeInstance;
    TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource;
}

struct UPooledCameraShakes
{
    TArray<UCameraShake*> PooledShakes;
}

struct UVOscillator
{
    FFOscillator X;
    FFOscillator Y;
    FFOscillator Z;
}

struct UFOscillator
{
    float Amplitude;
    float Frequency;
    TEnumAsByte<EInitialOscillatorOffset> InitialOffset;
    EOscillatorWaveform Waveform;
}

struct UROscillator
{
    FFOscillator Pitch;
    FFOscillator Yaw;
    FFOscillator Roll;
}

struct UDummySpacerCameraTypes
{
}

struct UMinimalViewInfo
{
    FVector Location;
    FRotator Rotation;
    float FOV;
    float DesiredFOV;
    float OrthoWidth;
    float OrthoNearClipPlane;
    float OrthoFarClipPlane;
    float AspectRatio;
    uint8 bConstrainAspectRatio;
    uint8 bUseFieldOfViewForLOD;
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionMode;
    float PostProcessBlendWeight;
    FPostProcessSettings PostProcessSettings;
    FVector2D OffCenterProjectionOffset;
}

struct UPostProcessSettings
{
    uint8 bOverride_WhiteTemp;
    uint8 bOverride_WhiteTint;
    uint8 bOverride_ColorSaturation;
    uint8 bOverride_ColorContrast;
    uint8 bOverride_ColorGamma;
    uint8 bOverride_ColorGain;
    uint8 bOverride_ColorOffset;
    uint8 bOverride_ColorSaturationShadows;
    uint8 bOverride_ColorContrastShadows;
    uint8 bOverride_ColorGammaShadows;
    uint8 bOverride_ColorGainShadows;
    uint8 bOverride_ColorOffsetShadows;
    uint8 bOverride_ColorSaturationMidtones;
    uint8 bOverride_ColorContrastMidtones;
    uint8 bOverride_ColorGammaMidtones;
    uint8 bOverride_ColorGainMidtones;
    uint8 bOverride_ColorOffsetMidtones;
    uint8 bOverride_ColorSaturationHighlights;
    uint8 bOverride_ColorContrastHighlights;
    uint8 bOverride_ColorGammaHighlights;
    uint8 bOverride_ColorGainHighlights;
    uint8 bOverride_ColorOffsetHighlights;
    uint8 bOverride_ColorCorrectionShadowsMax;
    uint8 bOverride_ColorCorrectionHighlightsMin;
    uint8 bOverride_BlueCorrection;
    uint8 bOverride_ExpandGamut;
    uint8 bOverride_FilmWhitePoint;
    uint8 bOverride_FilmSaturation;
    uint8 bOverride_FilmChannelMixerRed;
    uint8 bOverride_FilmChannelMixerGreen;
    uint8 bOverride_FilmChannelMixerBlue;
    uint8 bOverride_FilmContrast;
    uint8 bOverride_FilmDynamicRange;
    uint8 bOverride_FilmHealAmount;
    uint8 bOverride_FilmToeAmount;
    uint8 bOverride_FilmShadowTint;
    uint8 bOverride_FilmShadowTintBlend;
    uint8 bOverride_FilmShadowTintAmount;
    uint8 bOverride_FilmSlope;
    uint8 bOverride_FilmToe;
    uint8 bOverride_FilmShoulder;
    uint8 bOverride_FilmBlackClip;
    uint8 bOverride_FilmWhiteClip;
    uint8 bOverride_SceneColorTint;
    uint8 bOverride_SceneFringeIntensity;
    uint8 bOverride_ChromaticAberrationStartOffset;
    uint8 bOverride_AmbientCubemapTint;
    uint8 bOverride_AmbientCubemapIntensity;
    uint8 bOverride_BloomMethod;
    uint8 bOverride_BloomIntensity;
    uint8 bOverride_BloomThreshold;
    uint8 bOverride_Bloom1Tint;
    uint8 bOverride_Bloom1Size;
    uint8 bOverride_Bloom2Size;
    uint8 bOverride_Bloom2Tint;
    uint8 bOverride_Bloom3Tint;
    uint8 bOverride_Bloom3Size;
    uint8 bOverride_Bloom4Tint;
    uint8 bOverride_Bloom4Size;
    uint8 bOverride_Bloom5Tint;
    uint8 bOverride_Bloom5Size;
    uint8 bOverride_Bloom6Tint;
    uint8 bOverride_Bloom6Size;
    uint8 bOverride_BloomSizeScale;
    uint8 bOverride_BloomConvolutionTexture;
    uint8 bOverride_BloomConvolutionSize;
    uint8 bOverride_BloomConvolutionCenterUV;
    uint8 bOverride_BloomConvolutionPreFilter;
    uint8 bOverride_BloomConvolutionPreFilterMin;
    uint8 bOverride_BloomConvolutionPreFilterMax;
    uint8 bOverride_BloomConvolutionPreFilterMult;
    uint8 bOverride_BloomConvolutionBufferScale;
    uint8 bOverride_BloomDirtMaskIntensity;
    uint8 bOverride_BloomDirtMaskTint;
    uint8 bOverride_BloomDirtMask;
    uint8 bOverride_CameraShutterSpeed;
    uint8 bOverride_CameraISO;
    uint8 bOverride_AutoExposureMethod;
    uint8 bOverride_AutoExposureLowPercent;
    uint8 bOverride_AutoExposureHighPercent;
    uint8 bOverride_AutoExposureMinBrightness;
    uint8 bOverride_AutoExposureMaxBrightness;
    uint8 bOverride_AutoExposureCalibrationConstant;
    uint8 bOverride_AutoExposureSpeedUp;
    uint8 bOverride_AutoExposureSpeedDown;
    uint8 bOverride_AutoExposureBias;
    uint8 bOverride_AutoExposureBiasCurve;
    uint8 bOverride_AutoExposureMeterMask;
    uint8 bOverride_AutoExposureApplyPhysicalCameraExposure;
    uint8 bOverride_HistogramLogMin;
    uint8 bOverride_HistogramLogMax;
    uint8 bOverride_LensFlareIntensity;
    uint8 bOverride_LensFlareTint;
    uint8 bOverride_LensFlareTints;
    uint8 bOverride_LensFlareBokehSize;
    uint8 bOverride_LensFlareBokehShape;
    uint8 bOverride_LensFlareThreshold;
    uint8 bOverride_VignetteIntensity;
    uint8 bOverride_GrainIntensity;
    uint8 bOverride_GrainJitter;
    uint8 bOverride_AmbientOcclusionIntensity;
    uint8 bOverride_AmbientOcclusionStaticFraction;
    uint8 bOverride_AmbientOcclusionRadius;
    uint8 bOverride_AmbientOcclusionFadeDistance;
    uint8 bOverride_AmbientOcclusionFadeRadius;
    uint8 bOverride_AmbientOcclusionDistance;
    uint8 bOverride_AmbientOcclusionRadiusInWS;
    uint8 bOverride_AmbientOcclusionPower;
    uint8 bOverride_AmbientOcclusionBias;
    uint8 bOverride_AmbientOcclusionQuality;
    uint8 bOverride_AmbientOcclusionMipBlend;
    uint8 bOverride_AmbientOcclusionMipScale;
    uint8 bOverride_AmbientOcclusionMipThreshold;
    uint8 bOverride_AmbientOcclusionTemporalBlendWeight;
    uint8 bOverride_RayTracingAO;
    uint8 bOverride_RayTracingAOSamplesPerPixel;
    uint8 bOverride_LPVIntensity;
    uint8 bOverride_LPVDirectionalOcclusionIntensity;
    uint8 bOverride_LPVDirectionalOcclusionRadius;
    uint8 bOverride_LPVDiffuseOcclusionExponent;
    uint8 bOverride_LPVSpecularOcclusionExponent;
    uint8 bOverride_LPVDiffuseOcclusionIntensity;
    uint8 bOverride_LPVSpecularOcclusionIntensity;
    uint8 bOverride_LPVSize;
    uint8 bOverride_LPVSecondaryOcclusionIntensity;
    uint8 bOverride_LPVSecondaryBounceIntensity;
    uint8 bOverride_LPVGeometryVolumeBias;
    uint8 bOverride_LPVVplInjectionBias;
    uint8 bOverride_LPVEmissiveInjectionIntensity;
    uint8 bOverride_LPVFadeRange;
    uint8 bOverride_LPVDirectionalOcclusionFadeRange;
    uint8 bOverride_IndirectLightingColor;
    uint8 bOverride_IndirectLightingIntensity;
    uint8 bOverride_ColorGradingIntensity;
    uint8 bOverride_ColorGradingLUT;
    uint8 bOverride_DepthOfFieldFocalDistance;
    uint8 bOverride_DepthOfFieldFstop;
    uint8 bOverride_DepthOfFieldMinFstop;
    uint8 bOverride_DepthOfFieldBladeCount;
    uint8 bOverride_DepthOfFieldSensorWidth;
    uint8 bOverride_DepthOfFieldDepthBlurRadius;
    uint8 bOverride_DepthOfFieldDepthBlurAmount;
    uint8 bOverride_DepthOfFieldFocalRegion;
    uint8 bOverride_DepthOfFieldNearTransitionRegion;
    uint8 bOverride_DepthOfFieldFarTransitionRegion;
    uint8 bOverride_DepthOfFieldScale;
    uint8 bOverride_DepthOfFieldNearBlurSize;
    uint8 bOverride_DepthOfFieldFarBlurSize;
    uint8 bOverride_MobileHQGaussian;
    uint8 bOverride_DepthOfFieldOcclusion;
    uint8 bOverride_DepthOfFieldSkyFocusDistance;
    uint8 bOverride_DepthOfFieldVignetteSize;
    uint8 bOverride_MotionBlurAmount;
    uint8 bOverride_MotionBlurMax;
    uint8 bOverride_MotionBlurTargetFPS;
    uint8 bOverride_MotionBlurPerObjectSize;
    uint8 bOverride_ScreenPercentage;
    uint8 bOverride_ScreenSpaceReflectionIntensity;
    uint8 bOverride_ScreenSpaceReflectionQuality;
    uint8 bOverride_ScreenSpaceReflectionMaxRoughness;
    uint8 bOverride_ScreenSpaceReflectionRoughnessScale;
    uint8 bOverride_ReflectionsType;
    uint8 bOverride_RayTracingReflectionsMaxRoughness;
    uint8 bOverride_RayTracingReflectionsMaxBounces;
    uint8 bOverride_RayTracingReflectionsSamplesPerPixel;
    uint8 bOverride_RayTracingReflectionsShadows;
    uint8 bOverride_RayTracingReflectionsTranslucency;
    uint8 bOverride_TranslucencyType;
    uint8 bOverride_RayTracingTranslucencyMaxRoughness;
    uint8 bOverride_RayTracingTranslucencyRefractionRays;
    uint8 bOverride_RayTracingTranslucencySamplesPerPixel;
    uint8 bOverride_RayTracingTranslucencyShadows;
    uint8 bOverride_RayTracingTranslucencyRefraction;
    uint8 bOverride_RayTracingGI;
    uint8 bOverride_RayTracingGIMaxBounces;
    uint8 bOverride_RayTracingGISamplesPerPixel;
    uint8 bOverride_PathTracingMaxBounces;
    uint8 bOverride_PathTracingSamplesPerPixel;
    uint8 bMobileHQGaussian;
    TEnumAsByte<EBloomMethod> BloomMethod;
    TEnumAsByte<EAutoExposureMethod> AutoExposureMethod;
    float WhiteTemp;
    float WhiteTint;
    FVector4 ColorSaturation;
    FVector4 ColorContrast;
    FVector4 ColorGamma;
    FVector4 ColorGain;
    FVector4 ColorOffset;
    FVector4 ColorSaturationShadows;
    FVector4 ColorContrastShadows;
    FVector4 ColorGammaShadows;
    FVector4 ColorGainShadows;
    FVector4 ColorOffsetShadows;
    FVector4 ColorSaturationMidtones;
    FVector4 ColorContrastMidtones;
    FVector4 ColorGammaMidtones;
    FVector4 ColorGainMidtones;
    FVector4 ColorOffsetMidtones;
    FVector4 ColorSaturationHighlights;
    FVector4 ColorContrastHighlights;
    FVector4 ColorGammaHighlights;
    FVector4 ColorGainHighlights;
    FVector4 ColorOffsetHighlights;
    float ColorCorrectionHighlightsMin;
    float ColorCorrectionShadowsMax;
    float BlueCorrection;
    float ExpandGamut;
    float FilmSlope;
    float FilmToe;
    float FilmShoulder;
    float FilmBlackClip;
    float FilmWhiteClip;
    FLinearColor FilmWhitePoint;
    FLinearColor FilmShadowTint;
    float FilmShadowTintBlend;
    float FilmShadowTintAmount;
    float FilmSaturation;
    FLinearColor FilmChannelMixerRed;
    FLinearColor FilmChannelMixerGreen;
    FLinearColor FilmChannelMixerBlue;
    float FilmContrast;
    float FilmToeAmount;
    float FilmHealAmount;
    float FilmDynamicRange;
    FLinearColor SceneColorTint;
    float SceneFringeIntensity;
    float ChromaticAberrationStartOffset;
    float BloomIntensity;
    float BloomThreshold;
    float BloomSizeScale;
    float Bloom1Size;
    float Bloom2Size;
    float Bloom3Size;
    float Bloom4Size;
    float Bloom5Size;
    float Bloom6Size;
    FLinearColor Bloom1Tint;
    FLinearColor Bloom2Tint;
    FLinearColor Bloom3Tint;
    FLinearColor Bloom4Tint;
    FLinearColor Bloom5Tint;
    FLinearColor Bloom6Tint;
    float BloomConvolutionSize;
    UTexture2D* BloomConvolutionTexture;
    FVector2D BloomConvolutionCenterUV;
    float BloomConvolutionPreFilterMin;
    float BloomConvolutionPreFilterMax;
    float BloomConvolutionPreFilterMult;
    float BloomConvolutionBufferScale;
    UTexture* BloomDirtMask;
    float BloomDirtMaskIntensity;
    FLinearColor BloomDirtMaskTint;
    FLinearColor AmbientCubemapTint;
    float AmbientCubemapIntensity;
    UTextureCube* AmbientCubemap;
    float CameraShutterSpeed;
    float CameraISO;
    float DepthOfFieldFstop;
    float DepthOfFieldMinFstop;
    int32 DepthOfFieldBladeCount;
    float AutoExposureBias;
    float AutoExposureBiasBackup;
    uint8 bOverride_AutoExposureBiasBackup;
    uint8 AutoExposureApplyPhysicalCameraExposure;
    UCurveFloat* AutoExposureBiasCurve;
    UTexture* AutoExposureMeterMask;
    float AutoExposureLowPercent;
    float AutoExposureHighPercent;
    float AutoExposureMinBrightness;
    float AutoExposureMaxBrightness;
    float AutoExposureSpeedUp;
    float AutoExposureSpeedDown;
    float HistogramLogMin;
    float HistogramLogMax;
    float AutoExposureCalibrationConstant;
    float LensFlareIntensity;
    FLinearColor LensFlareTint;
    float LensFlareBokehSize;
    float LensFlareThreshold;
    UTexture* LensFlareBokehShape;
    FLinearColor LensFlareTints;
    float VignetteIntensity;
    float GrainJitter;
    float GrainIntensity;
    float AmbientOcclusionIntensity;
    float AmbientOcclusionStaticFraction;
    float AmbientOcclusionRadius;
    uint8 AmbientOcclusionRadiusInWS;
    float AmbientOcclusionFadeDistance;
    float AmbientOcclusionFadeRadius;
    float AmbientOcclusionDistance;
    float AmbientOcclusionPower;
    float AmbientOcclusionBias;
    float AmbientOcclusionQuality;
    float AmbientOcclusionMipBlend;
    float AmbientOcclusionMipScale;
    float AmbientOcclusionMipThreshold;
    float AmbientOcclusionTemporalBlendWeight;
    uint8 RayTracingAO;
    int32 RayTracingAOSamplesPerPixel;
    FLinearColor IndirectLightingColor;
    float IndirectLightingIntensity;
    ERayTracingGlobalIlluminationType RayTracingGIType;
    int32 RayTracingGIMaxBounces;
    int32 RayTracingGISamplesPerPixel;
    float ColorGradingIntensity;
    UTexture* ColorGradingLUT;
    float DepthOfFieldSensorWidth;
    float DepthOfFieldFocalDistance;
    float DepthOfFieldDepthBlurAmount;
    float DepthOfFieldDepthBlurRadius;
    float DepthOfFieldFocalRegion;
    float DepthOfFieldNearTransitionRegion;
    float DepthOfFieldFarTransitionRegion;
    float DepthOfFieldScale;
    float DepthOfFieldNearBlurSize;
    float DepthOfFieldFarBlurSize;
    float DepthOfFieldOcclusion;
    float DepthOfFieldSkyFocusDistance;
    float DepthOfFieldVignetteSize;
    float MotionBlurAmount;
    float MotionBlurMax;
    int32 MotionBlurTargetFPS;
    float MotionBlurPerObjectSize;
    float LPVIntensity;
    float LPVVplInjectionBias;
    float LPVSize;
    float LPVSecondaryOcclusionIntensity;
    float LPVSecondaryBounceIntensity;
    float LPVGeometryVolumeBias;
    float LPVEmissiveInjectionIntensity;
    float LPVDirectionalOcclusionIntensity;
    float LPVDirectionalOcclusionRadius;
    float LPVDiffuseOcclusionExponent;
    float LPVSpecularOcclusionExponent;
    float LPVDiffuseOcclusionIntensity;
    float LPVSpecularOcclusionIntensity;
    EReflectionsType ReflectionsType;
    float ScreenSpaceReflectionIntensity;
    float ScreenSpaceReflectionQuality;
    float ScreenSpaceReflectionMaxRoughness;
    float RayTracingReflectionsMaxRoughness;
    int32 RayTracingReflectionsMaxBounces;
    int32 RayTracingReflectionsSamplesPerPixel;
    EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows;
    uint8 RayTracingReflectionsTranslucency;
    ETranslucencyType TranslucencyType;
    float RayTracingTranslucencyMaxRoughness;
    int32 RayTracingTranslucencyRefractionRays;
    int32 RayTracingTranslucencySamplesPerPixel;
    EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows;
    uint8 RayTracingTranslucencyRefraction;
    int32 PathTracingMaxBounces;
    int32 PathTracingSamplesPerPixel;
    float LPVFadeRange;
    float LPVDirectionalOcclusionFadeRange;
    float ScreenPercentage;
    FWeightedBlendables WeightedBlendables;
}

struct UWeightedBlendables
{
    TArray<FWeightedBlendable> Array;
}

struct UWeightedBlendable
{
    float Weight;
    UObject* Object;
}

struct UCanvasIcon
{
    UTexture* Texture;
    float U;
    float V;
    float UL;
    float VL;
}

struct UWrappedStringElement
{
    FString Value;
    FVector2D LineExtent;
}

struct UTextSizingParameters
{
    float DrawX;
    float DrawY;
    float DrawXL;
    float DrawYL;
    FVector2D Scaling;
    UFont* DrawFont;
    FVector2D SpacingAdjust;
}

struct UCharacterMovementComponentPostPhysicsTickFunction : FTickFunction
{
}

struct UFindFloorResult
{
    uint8 bBlockingHit;
    uint8 bWalkableFloor;
    uint8 bLineTrace;
    float FloorDist;
    float LineDist;
    FHitResult HitResult;
}

struct UChildActorComponentInstanceData : FSceneComponentInstanceData
{
    TSubclassOf<AActor> ChildActorClass;
    FName ChildActorName;
    TArray<FChildActorAttachedActorInfo> AttachedActors;
}

struct UChildActorAttachedActorInfo
{
    TWeakObjectPtr<AActor> Actor;
    FName SocketName;
    FTransform RelativeTransform;
}

struct UCustomProfile
{
    FName Name;
    TArray<FResponseChannel> CustomResponses;
}

struct UCustomChannelSetup
{
    TEnumAsByte<ECollisionChannel> Channel;
    TEnumAsByte<ECollisionResponse> DefaultResponse;
    bool bTraceType;
    bool bStaticObject;
    FName Name;
}

struct UCollisionResponseTemplate
{
    FName Name;
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    bool bCanModify;
    FName ObjectTypeName;
    TArray<FResponseChannel> CustomResponses;
}

struct UBlueprintComponentDelegateBinding
{
    FName ComponentPropertyName;
    FName DelegatePropertyName;
    FName FunctionNameToBind;
}

struct UMeshUVChannelInfo
{
    bool bInitialized;
    bool bOverrideDensities;
    float LocalUVDensities;
}

struct UAutoCompleteNode
{
    int32 IndexChar;
    TArray<int32> AutoCompleteListIndices;
}

struct UAngularDriveConstraint
{
    FConstraintDrive TwistDrive;
    FConstraintDrive SwingDrive;
    FConstraintDrive SlerpDrive;
    FRotator OrientationTarget;
    FVector AngularVelocityTarget;
    TEnumAsByte<EAngularDriveMode::Type> AngularDriveMode;
}

struct UConstraintDrive
{
    float Stiffness;
    float Damping;
    float MaxForce;
    uint8 bEnablePositionDrive;
    uint8 bEnableVelocityDrive;
}

struct ULinearDriveConstraint
{
    FVector PositionTarget;
    FVector VelocityTarget;
    FConstraintDrive XDrive;
    FConstraintDrive YDrive;
    FConstraintDrive ZDrive;
    uint8 bEnablePositionDrive;
}

struct UConstraintInstance
{
    FName JointName;
    FName ConstraintBone1;
    FName ConstraintBone2;
    FVector Pos1;
    FVector PriAxis1;
    FVector SecAxis1;
    FVector Pos2;
    FVector PriAxis2;
    FVector SecAxis2;
    FRotator AngularRotationOffset;
    uint8 bScaleLinearLimits;
    FConstraintProfileProperties ProfileInstance;
}

struct UConstraintProfileProperties
{
    float ProjectionLinearTolerance;
    float ProjectionAngularTolerance;
    float LinearBreakThreshold;
    float AngularBreakThreshold;
    FLinearConstraint LinearLimit;
    FConeConstraint ConeLimit;
    FTwistConstraint TwistLimit;
    FLinearDriveConstraint LinearDrive;
    FAngularDriveConstraint AngularDrive;
    uint8 bDisableCollision;
    uint8 bParentDominates;
    uint8 bEnableProjection;
    uint8 bAngularBreakable;
    uint8 bLinearBreakable;
}

struct UConstraintBaseParams
{
    float Stiffness;
    float Damping;
    float Restitution;
    float ContactDistance;
    uint8 bSoftConstraint;
}

struct UTwistConstraint : FConstraintBaseParams
{
    float TwistLimitDegrees;
    TEnumAsByte<EAngularConstraintMotion> TwistMotion;
}

struct UConeConstraint : FConstraintBaseParams
{
    float Swing1LimitDegrees;
    float Swing2LimitDegrees;
    TEnumAsByte<EAngularConstraintMotion> Swing1Motion;
    TEnumAsByte<EAngularConstraintMotion> Swing2Motion;
}

struct ULinearConstraint : FConstraintBaseParams
{
    float Limit;
    TEnumAsByte<ELinearConstraintMotion> XMotion;
    TEnumAsByte<ELinearConstraintMotion> YMotion;
    TEnumAsByte<ELinearConstraintMotion> ZMotion;
}

struct UCullDistanceSizePair
{
    float Size;
    float CullDistance;
}

struct URuntimeCurveLinearColor
{
    FRichCurve ColorCurves;
    UCurveLinearColor* ExternalCurve;
}

struct UNamedCurveValue
{
    FName Name;
    float Value;
}

struct UCurveTableRowHandle
{
    UCurveTable* CurveTable;
    FName RowName;
}

struct UDataTableCategoryHandle
{
    UDataTable* DataTable;
    FName ColumnName;
    FName RowContents;
}

struct UDataTableRowHandle
{
    UDataTable* DataTable;
    FName RowName;
}

struct UDebugCameraControllerSettingsViewModeIndex
{
    TEnumAsByte<EViewModeIndex> ViewModeIndex;
}

struct UDebugDisplayProperty
{
    UObject* obj;
    UClass* WithinClass;
}

struct UMulticastRecordOptions
{
    FString FuncPathName;
    bool bServerSkip;
    bool bClientSkip;
}

struct URollbackNetStartupActorInfo
{
    UObject* Archetype;
    ULevel* Level;
    TArray<UObject*> ObjReferences;
}

struct ULevelNameAndTime
{
    FString LevelName;
    uint32 LevelChangeTimeInMS;
}

struct UDialogueWaveParameter
{
    UDialogueWave* DialogueWave;
    FDialogueContext Context;
}

struct UDialogueContext
{
    UDialogueVoice* Speaker;
    TArray<UDialogueVoice*> Targets;
}

struct UDialogueContextMapping
{
    FDialogueContext Context;
    USoundWave* SoundWave;
    FString LocalizationKeyFormat;
    UDialogueSoundWaveProxy* Proxy;
}

struct URawDistributionFloat : FRawDistribution
{
    float MinValue;
    float MaxValue;
    UDistributionFloat* Distribution;
}

struct URawDistributionVector : FRawDistribution
{
    float MinValue;
    float MaxValue;
    FVector MinValueVec;
    FVector MaxValueVec;
    UDistributionVector* Distribution;
}

struct UGraphReference
{
    UEdGraph* MacroGraph;
    UBlueprint* GraphBlueprint;
    FGuid GraphGuid;
}

struct UEdGraphPinReference
{
    TWeakObjectPtr<UEdGraphNode> OwningNode;
    FGuid PinId;
}

struct UEdGraphSchemaAction
{
    FText MenuDescription;
    FText TooltipDescription;
    FText Category;
    FText Keywords;
    int32 Grouping;
    int32 SectionID;
    TArray<FString> MenuDescriptionArray;
    TArray<FString> FullSearchTitlesArray;
    TArray<FString> FullSearchKeywordsArray;
    TArray<FString> FullSearchCategoryArray;
    TArray<FString> LocalizedMenuDescriptionArray;
    TArray<FString> LocalizedFullSearchTitlesArray;
    TArray<FString> LocalizedFullSearchKeywordsArray;
    TArray<FString> LocalizedFullSearchCategoryArray;
    FString SearchText;
}

struct UEdGraphSchemaAction_NewNode : FEdGraphSchemaAction
{
    UEdGraphNode* NodeTemplate;
}

struct UPluginRedirect
{
    FString OldPluginName;
    FString NewPluginName;
}

struct UStructRedirect
{
    FName OldStructName;
    FName NewStructName;
}

struct UClassRedirect
{
    FName ObjectName;
    FName OldClassName;
    FName NewClassName;
    FName OldSubobjName;
    FName NewSubobjName;
    FName NewClassClass;
    FName NewClassPackage;
    bool InstanceOnly;
}

struct UGameNameRedirect
{
    FName OldGameName;
    FName NewGameName;
}

struct UScreenMessageString
{
    uint64 Key;
    FString ScreenMessage;
    FColor DisplayColor;
    float TimeToDisplay;
    float CurrentTimeDisplayed;
    FVector2D TextScale;
}

struct UDropNoteInfo
{
    FVector Location;
    FRotator Rotation;
    FString Comment;
}

struct UStatColorMapping
{
    FString StatName;
    TArray<FStatColorMapEntry> ColorMap;
    uint8 DisableBlend;
}

struct UStatColorMapEntry
{
    float In;
    FColor Out;
}

struct UWorldContext
{
    FURL LastURL;
    FURL LastRemoteURL;
    UPendingNetGame* PendingNetGame;
    TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad;
    TArray<ULevel*> LoadedLevelsForPendingMapChange;
    TArray<UObjectReferencer*> ObjectReferencers;
    TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates;
    UGameViewportClient* GameViewport;
    UGameInstance* OwningGameInstance;
    TArray<FNamedNetDriver> ActiveNetDrivers;
}

struct UNamedNetDriver
{
    UNetDriver* NetDriver;
}

struct ULevelStreamingStatus
{
    FName PackageName;
    uint8 bShouldBeLoaded;
    uint8 bShouldBeVisible;
    uint32 LODIndex;
}

struct UFullyLoadedPackagesInfo
{
    TEnumAsByte<EFullyLoadPackageType> FullyLoadType;
    FString Tag;
    TArray<FName> PackagesToLoad;
    TArray<UObject*> LoadedObjects;
}

struct UURL
{
    FString Protocol;
    FString Host;
    int32 Port;
    int32 Valid;
    FString Map;
    FString RedirectURL;
    TArray<FString> Op;
    FString Portal;
}

struct UNetDriverDefinition
{
    FName DefName;
    FName DriverClassName;
    FName DriverClassNameFallback;
}

struct UExposureSettings
{
    float FixedEV100;
    bool bFixed;
}

struct UTickPrerequisite
{
}

struct UCanvasUVTri
{
    FVector2D V0_Pos;
    FVector2D V0_UV;
    FLinearColor V0_Color;
    FVector2D V1_Pos;
    FVector2D V1_UV;
    FLinearColor V1_Color;
    FVector2D V2_Pos;
    FVector2D V2_UV;
    FLinearColor V2_Color;
}

struct UFontRenderInfo
{
    uint8 bClipText;
    uint8 bEnableShadow;
    FDepthFieldGlowInfo GlowInfo;
}

struct UDepthFieldGlowInfo
{
    uint8 bEnableGlow;
    FLinearColor GlowColor;
    FVector2D GlowOuterRadius;
    FVector2D GlowInnerRadius;
}

struct URedirector
{
    FName OldName;
    FName NewName;
}

struct UCollectionReference
{
    FName CollectionName;
}

struct UComponentReference
{
    AActor* OtherActor;
    FName ComponentProperty;
    FString PathToComponent;
}

struct UConstrainComponentPropName
{
    FName ComponentName;
}

struct UDamageEvent
{
    TSubclassOf<UDamageType> DamageTypeClass;
}

struct URadialDamageEvent : FDamageEvent
{
    FRadialDamageParams Params;
    FVector Origin;
    TArray<FHitResult> ComponentHits;
}

struct URadialDamageParams
{
    float BaseDamage;
    float MinimumDamage;
    float InnerRadius;
    float OuterRadius;
    float DamageFalloff;
}

struct UPointDamageEvent : FDamageEvent
{
    float Damage;
    FVector_NetQuantizeNormal ShotDirection;
    FHitResult HitInfo;
}

struct USkeletalMeshBuildSettings
{
    uint8 bRecomputeNormals;
    uint8 bRecomputeTangents;
    uint8 bUseMikkTSpace;
    uint8 bComputeWeightedNormals;
    uint8 bRemoveDegenerates;
    uint8 bUseHighPrecisionTangentBasis;
    uint8 bUseFullPrecisionUVs;
    uint8 bBuildAdjacencyBuffer;
    float ThresholdPosition;
    float ThresholdTangentNormal;
    float ThresholdUV;
    float MorphThresholdPosition;
}

struct UMeshBuildSettings
{
    uint8 bUseMikkTSpace;
    uint8 bRecomputeNormals;
    uint8 bRecomputeTangents;
    uint8 bComputeWeightedNormals;
    uint8 bRemoveDegenerates;
    uint8 bBuildAdjacencyBuffer;
    uint8 bBuildReversedIndexBuffer;
    uint8 bUseHighPrecisionTangentBasis;
    uint8 bUseFullPrecisionUVs;
    uint8 bGenerateLightmapUVs;
    uint8 bGenerateDistanceFieldAsIfTwoSided;
    uint8 bSupportFaceRemap;
    int32 MinLightmapResolution;
    int32 SrcLightmapIndex;
    int32 DstLightmapIndex;
    float BuildScale;
    FVector BuildScale3D;
    float DistanceFieldResolutionScale;
    UStaticMesh* DistanceFieldReplacementMesh;
}

struct UPOV
{
    FVector Location;
    FRotator Rotation;
    float FOV;
}

struct UAnimUpdateRateParameters
{
    EUpdateRateShiftBucket ShiftBucket;
    uint8 bInterpolateSkippedFrames;
    uint8 bShouldUseLodMap;
    uint8 bShouldUseMinLod;
    uint8 bSkipUpdate;
    uint8 bSkipEvaluation;
    int32 UpdateRate;
    int32 EvaluationRate;
    float TickedPoseOffestTime;
    float AdditionalTime;
    int32 BaseNonRenderedUpdateRate;
    int32 MaxEvalRateForInterpolation;
    TArray<float> BaseVisibleDistanceFactorThesholds;
    TMap<int32, int32> LODToFrameSkipMap;
    int32 SkippedUpdateFrames;
    int32 SkippedEvalFrames;
}

struct UAnimSlotDesc
{
    FName slotName;
    int32 NumChannels;
}

struct UAnimSlotInfo
{
    FName slotName;
    TArray<float> ChannelWeights;
}

struct UMTDResult
{
    FVector Direction;
    float Distance;
}

struct UPrimitiveMaterialRef
{
    UPrimitiveComponent* Primitive;
    UDecalComponent* Decal;
    int32 ElementIndex;
}

struct USwarmDebugOptions
{
    uint8 bDistributionEnabled;
    uint8 bForceContentExport;
    uint8 bInitialized;
}

struct ULightmassDebugOptions
{
    uint8 bDebugMode;
    uint8 bStatsEnabled;
    uint8 bGatherBSPSurfacesAcrossComponents;
    float CoplanarTolerance;
    uint8 bUseImmediateImport;
    uint8 bImmediateProcessMappings;
    uint8 bSortMappings;
    uint8 bDumpBinaryFiles;
    uint8 bDebugMaterials;
    uint8 bPadMappings;
    uint8 bDebugPaddings;
    uint8 bOnlyCalcDebugTexelMappings;
    uint8 bUseRandomColors;
    uint8 bColorBordersGreen;
    uint8 bColorByExecutionTime;
    float ExecutionTimeDivisor;
}

struct ULightmassPrimitiveSettings
{
    uint8 bUseTwoSidedLighting;
    uint8 bShadowIndirectOnly;
    uint8 bUseEmissiveForStaticLighting;
    uint8 bUseVertexNormalForHemisphereGather;
    float EmissiveLightFalloffExponent;
    float EmissiveLightExplicitInfluenceRadius;
    float EmissiveBoost;
    float DiffuseBoost;
    float FullyOccludedSamplesFraction;
}

struct ULightmassLightSettings
{
    float IndirectLightingSaturation;
    float ShadowExponent;
    bool bUseAreaShadowsForStationaryLight;
}

struct ULightmassDirectionalLightSettings : FLightmassLightSettings
{
    float LightSourceAngle;
}

struct ULightmassPointLightSettings : FLightmassLightSettings
{
}

struct UBasedPosition
{
    AActor* Base;
    FVector Position;
    FVector CachedBaseLocation;
    FRotator CachedBaseRotation;
    FVector CachedTransPosition;
}

struct UFractureEffect
{
    UParticleSystem* ParticleSystem;
    USoundBase* Sound;
}

struct UCollisionImpactData
{
    TArray<FRigidBodyContactInfo> ContactInfos;
    FVector TotalNormalImpulse;
    FVector TotalFrictionImpulse;
}

struct URigidBodyContactInfo
{
    FVector ContactPosition;
    FVector ContactNormal;
    float ContactPenetration;
    UPhysicalMaterial* PhysMaterial;
}

struct URigidBodyErrorCorrection
{
    float PingExtrapolation;
    float PingLimit;
    float ErrorPerLinearDifference;
    float ErrorPerAngularDifference;
    float MaxRestoredStateError;
    float MaxLinearHardSnapDistance;
    float PositionLerp;
    float AngleLerp;
    float LinearVelocityCoefficient;
    float AngularVelocityCoefficient;
    float ErrorAccumulationSeconds;
    float ErrorAccumulationDistanceSq;
    float ErrorAccumulationSimilarity;
}

struct URigidBodyState
{
    FVector_NetQuantize100 Position;
    FQuat Quaternion;
    FVector_NetQuantize100 LinVel;
    FVector_NetQuantize100 AngVel;
    uint8 Flags;
}

struct UMaterialShadingModelField
{
    uint16 ShadingModelField;
}

struct UExponentialHeightFogData
{
    float FogDensity;
    float FogHeightFalloff;
    float FogHeightOffset;
}

struct UFontCharacter
{
    int32 StartU;
    int32 StartV;
    int32 USize;
    int32 VSize;
    uint8 TextureIndex;
    int32 VerticalOffset;
}

struct UFontImportOptionsData
{
    FString FontName;
    float Height;
    uint8 bEnableAntialiasing;
    uint8 bEnableBold;
    uint8 bEnableItalic;
    uint8 bEnableUnderline;
    uint8 bAlphaOnly;
    TEnumAsByte<EFontImportCharacterSet> CharacterSet;
    FString Chars;
    FString UnicodeRange;
    FString CharsFilePath;
    FString CharsFileWildcard;
    uint8 bCreatePrintableOnly;
    uint8 bIncludeASCIIRange;
    FLinearColor ForegroundColor;
    uint8 bEnableDropShadow;
    int32 TexturePageWidth;
    int32 TexturePageMaxHeight;
    int32 XPadding;
    int32 YPadding;
    int32 ExtendBoxTop;
    int32 ExtendBoxBottom;
    int32 ExtendBoxRight;
    int32 ExtendBoxLeft;
    uint8 bEnableLegacyMode;
    int32 Kerning;
    uint8 bUseDistanceFieldAlpha;
    int32 DistanceFieldScaleFactor;
    float DistanceFieldScanRadiusScale;
}

struct UForceFeedbackAttenuationSettings : FBaseAttenuationSettings
{
}

struct UForceFeedbackChannelDetails
{
    uint8 bAffectsLeftLarge;
    uint8 bAffectsLeftSmall;
    uint8 bAffectsRightLarge;
    uint8 bAffectsRightSmall;
    FRuntimeFloatCurve Curve;
}

struct UPredictProjectilePathResult
{
    TArray<FPredictProjectilePathPointData> PathData;
    FPredictProjectilePathPointData LastTraceDestination;
    FHitResult HitResult;
}

struct UPredictProjectilePathPointData
{
    FVector Location;
    FVector Velocity;
    float Time;
}

struct UPredictProjectilePathParams
{
    FVector StartLocation;
    FVector LaunchVelocity;
    bool bTraceWithCollision;
    float ProjectileRadius;
    float MaxSimTime;
    bool bTraceWithChannel;
    TEnumAsByte<ECollisionChannel> TraceChannel;
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    TArray<AActor*> ActorsToIgnore;
    float SimFrequency;
    float OverrideGravityZ;
    TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
    float DrawDebugTime;
    bool bTraceComplex;
}

struct UActiveHapticFeedbackEffect
{
    UHapticFeedbackEffect_Base* HapticEffect;
}

struct UHapticFeedbackDetails_Curve
{
    FRuntimeFloatCurve Frequency;
    FRuntimeFloatCurve Amplitude;
}

struct UClusterNode
{
    FVector BoundMin;
    int32 FirstChild;
    FVector BoundMax;
    int32 LastChild;
    int32 FirstInstance;
    int32 LastInstance;
    FVector MinInstanceScale;
    FVector MaxInstanceScale;
}

struct UClusterNode_DEPRECATED
{
    FVector BoundMin;
    int32 FirstChild;
    FVector BoundMax;
    int32 LastChild;
    int32 FirstInstance;
    int32 LastInstance;
}

struct UHLODProxyMesh
{
    TLazyObjectPtr<ALODActor> LODActor;
    UStaticMesh* StaticMesh;
    FName Key;
}

struct UImportanceTexture
{
    FIntPoint Size;
    int32 NumMips;
    TArray<float> MarginalCDF;
    TArray<float> ConditionalCDF;
    TArray<FColor> TextureData;
    TWeakObjectPtr<UTexture2D> Texture;
    TEnumAsByte<EImportanceWeight::Type> Weighting;
}

struct UComponentOverrideRecord
{
    UClass* ComponentClass;
    UActorComponent* ComponentTemplate;
    FComponentKey ComponentKey;
    FBlueprintCookedComponentInstancingData CookedComponentInstancingData;
}

struct UComponentKey
{
    UClass* OwnerClass;
    FName SCSVariableName;
    FGuid AssociatedGuid;
}

struct UBlueprintInputDelegateBinding
{
    uint8 bConsumeInput;
    uint8 bExecuteWhenPaused;
    uint8 bOverrideParentBinding;
}

struct UBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding
{
    FName InputActionName;
    TEnumAsByte<EInputEvent> InputKeyEvent;
    FName FunctionNameToBind;
}

struct UBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding
{
    FName InputAxisName;
    FName FunctionNameToBind;
}

struct UBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding
{
    FKey AxisKey;
    FName FunctionNameToBind;
}

struct UCachedKeyToActionInfo
{
    UPlayerInput* PlayerInput;
}

struct UBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding
{
    FInputChord InputChord;
    TEnumAsByte<EInputEvent> InputKeyEvent;
    FName FunctionNameToBind;
}

struct UBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding
{
    TEnumAsByte<EInputEvent> InputKeyEvent;
    FName FunctionNameToBind;
}

struct UInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData
{
    UStaticMesh* StaticMesh;
    FInstancedStaticMeshLightMapInstanceData CachedStaticLighting;
    TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData;
    TArray<float> PerInstanceSMCustomData;
    int32 InstancingRandomSeed;
}

struct UInstancedStaticMeshInstanceData
{
    FMatrix Transform;
}

struct UInstancedStaticMeshLightMapInstanceData
{
    FTransform Transform;
    TArray<FGuid> MapBuildDataIds;
}

struct UInstancedStaticMeshMappingInfo
{
}

struct UIntegralCurve : FIndexedCurve
{
    TArray<FIntegralKey> Keys;
    int32 DefaultValue;
    bool bUseDefaultValueBeforeFirstKey;
}

struct UIntegralKey
{
    float Time;
    int32 Value;
}

struct UCurveEdTab
{
    FString TabName;
    TArray<FCurveEdEntry> Curves;
    float ViewStartInput;
    float ViewEndInput;
    float ViewStartOutput;
    float ViewEndOutput;
}

struct UCurveEdEntry
{
    UObject* CurveObject;
    FColor CurveColor;
    FString CurveName;
    int32 bHideCurve;
    int32 bColorCurve;
    int32 bFloatingPointColorCurve;
    int32 bClamp;
    float ClampLow;
    float ClampHigh;
}

struct UInterpEdSelKey
{
    UInterpGroup* Group;
    UInterpTrack* Track;
    int32 KeyIndex;
    float UnsnappedPosition;
}

struct UCameraPreviewInfo
{
    TSubclassOf<APawn> PawnClass;
    UAnimSequence* AnimSeq;
    FVector Location;
    FRotator Rotation;
    APawn* PawnInst;
}

struct USubTrackGroup
{
    FString GroupName;
    TArray<int32> TrackIndices;
    uint8 bIsCollapsed;
    uint8 bIsSelected;
}

struct USupportedSubTrackInfo
{
    TSubclassOf<UInterpTrack> SupportedClass;
    FString SubTrackName;
    int32 GroupIndex;
}

struct UAnimControlTrackKey
{
    float StartTime;
    UAnimSequence* AnimSeq;
    float AnimStartOffset;
    float AnimEndOffset;
    float AnimPlayRate;
    uint8 bLooping;
    uint8 bReverse;
}

struct UBoolTrackKey
{
    float Time;
    uint8 Value;
}

struct UDirectorTrackCut
{
    float Time;
    float TransitionTime;
    FName TargetCamGroup;
    int32 ShotNumber;
}

struct UEventTrackKey
{
    float Time;
    FName EventName;
}

struct UInterpLookupTrack
{
    TArray<FInterpLookupPoint> Points;
}

struct UInterpLookupPoint
{
    FName GroupName;
    float Time;
}

struct UParticleReplayTrackKey
{
    float Time;
    float Duration;
    int32 ClipIDNumber;
}

struct USoundTrackKey
{
    float Time;
    float Volume;
    float Pitch;
    USoundBase* Sound;
}

struct UToggleTrackKey
{
    float Time;
    TEnumAsByte<ETrackToggleAction> ToggleAction;
}

struct UVisibilityTrackKey
{
    float Time;
    TEnumAsByte<EVisibilityTrackAction> Action;
    TEnumAsByte<EVisibilityTrackCondition> ActiveCondition;
}

struct UVectorSpringState
{
}

struct UFloatSpringState
{
}

struct UDrawToRenderTargetContext
{
    UTextureRenderTarget2D* RenderTarget;
}

struct ULatentActionManager
{
}

struct ULayerActorStats
{
    UClass* Type;
    int32 Total;
}

struct UReplicatedStaticActorDestructionInfo
{
    UClass* ObjClass;
}

struct ULevelSimplificationDetails
{
    bool bCreatePackagePerAsset;
    float DetailsPercentage;
    FMaterialProxySettings StaticMeshMaterialSettings;
    bool bOverrideLandscapeExportLOD;
    int32 LandscapeExportLOD;
    FMaterialProxySettings LandscapeMaterialSettings;
    bool bBakeFoliageToLandscape;
    bool bBakeGrassToLandscape;
    bool bGenerateMeshNormalMap;
    bool bGenerateMeshMetallicMap;
    bool bGenerateMeshRoughnessMap;
    bool bGenerateMeshSpecularMap;
    bool bGenerateLandscapeNormalMap;
    bool bGenerateLandscapeMetallicMap;
    bool bGenerateLandscapeRoughnessMap;
    bool bGenerateLandscapeSpecularMap;
}

struct UMaterialProxySettings
{
    FIntPoint TextureSize;
    float GutterSpace;
    float MetallicConstant;
    float RoughnessConstant;
    float AnisotropyConstant;
    float SpecularConstant;
    float OpacityConstant;
    float OpacityMaskConstant;
    float AmbientOcclusionConstant;
    TEnumAsByte<ETextureSizingType> TextureSizingType;
    TEnumAsByte<EMaterialMergeType> MaterialMergeType;
    TEnumAsByte<EBlendMode> BlendMode;
    uint8 bAllowTwoSidedMaterial;
    uint8 bNormalMap;
    uint8 bTangentMap;
    uint8 bMetallicMap;
    uint8 bRoughnessMap;
    uint8 bAnisotropyMap;
    uint8 bSpecularMap;
    uint8 bEmissiveMap;
    uint8 bOpacityMap;
    uint8 bOpacityMaskMap;
    uint8 bAmbientOcclusionMap;
    FIntPoint DiffuseTextureSize;
    FIntPoint NormalTextureSize;
    FIntPoint TangentTextureSize;
    FIntPoint MetallicTextureSize;
    FIntPoint RoughnessTextureSize;
    FIntPoint AnisotropyTextureSize;
    FIntPoint SpecularTextureSize;
    FIntPoint EmissiveTextureSize;
    FIntPoint OpacityTextureSize;
    FIntPoint OpacityMaskTextureSize;
    FIntPoint AmbientOcclusionTextureSize;
}

struct UStreamableTextureInstance
{
}

struct UDynamicTextureInstance : FStreamableTextureInstance
{
    UTexture2D* Texture;
    bool bAttached;
    float OriginalRadius;
}

struct UPrecomputedLightInstanceData : FSceneComponentInstanceData
{
    FTransform Transform;
    FGuid LightGuid;
    int32 PreviewShadowMapChannel;
}

struct UBatchedPoint
{
    FVector Position;
    FLinearColor Color;
    float PointSize;
    float RemainingLifeTime;
    uint8 DepthPriority;
}

struct UBatchedLine
{
    FVector Start;
    FVector End;
    FLinearColor Color;
    float Thickness;
    float RemainingLifeTime;
    uint8 DepthPriority;
}

struct UClientReceiveData
{
    APlayerController* LocalPC;
    FName MessageType;
    int32 MessageIndex;
    FString MessageString;
    APlayerState* RelatedPlayerState_1;
    APlayerState* RelatedPlayerState_2;
    UObject* OptionalObject;
}

struct UParameterGroupData
{
    FString GroupName;
    int32 GroupSortPriority;
}

struct UMaterialSpriteElement
{
    UMaterialInterface* Material;
    UCurveFloat* DistanceToOpacityCurve;
    uint8 bSizeIsInScreenSpace;
    float BaseSizeX;
    float BaseSizeY;
    UCurveFloat* DistanceToSizeCurve;
}

struct UMaterialCachedExpressionData
{
    FMaterialCachedParameters Parameters;
    TArray<UObject*> ReferencedTextures;
    TArray<FMaterialFunctionInfo> FunctionInfos;
    TArray<FMaterialParameterCollectionInfo> ParameterCollectionInfos;
    TArray<UMaterialFunctionInterface*> DefaultLayers;
    TArray<UMaterialFunctionInterface*> DefaultLayerBlends;
    TArray<ULandscapeGrassType*> GrassTypes;
    TArray<FName> DynamicParameterNames;
    TArray<bool> QualityLevelsUsed;
    uint8 bHasRuntimeVirtualTextureOutput;
    uint8 bHasSceneColor;
}

struct UMaterialParameterCollectionInfo
{
    FGuid StateId;
    UMaterialParameterCollection* ParameterCollection;
}

struct UMaterialFunctionInfo
{
    FGuid StateId;
    UMaterialFunctionInterface* Function;
}

struct UMaterialCachedParameters
{
    FMaterialCachedParameterEntry Entries;
    TArray<float> ScalarValues;
    TArray<FLinearColor> VectorValues;
    TArray<UTexture*> TextureValues;
    TArray<UFont*> FontValues;
    TArray<int32> FontPageValues;
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues;
}

struct UMaterialCachedParameterEntry
{
    TArray<uint64> NameHashes;
    TArray<FMaterialParameterInfo> ParameterInfos;
    TArray<FGuid> ExpressionGuids;
    TArray<bool> Overrides;
}

struct UMaterialParameterInfo
{
    FName Name;
    TEnumAsByte<EMaterialParameterAssociation> Association;
    int32 Index;
}

struct UParameterChannelNames
{
    FText R;
    FText G;
    FText B;
    FText A;
}

struct UCustomDefine
{
    FString DefineName;
    FString DefineValue;
}

struct UCustomInput
{
    FName InputName;
    FExpressionInput Input;
}

struct UFunctionExpressionOutput
{
    UMaterialExpressionFunctionOutput* ExpressionOutput;
    FGuid ExpressionOutputId;
    FExpressionOutput Output;
}

struct UFunctionExpressionInput
{
    UMaterialExpressionFunctionInput* ExpressionInput;
    FGuid ExpressionInputId;
    FExpressionInput Input;
}

struct UFontParameterValue
{
    FMaterialParameterInfo ParameterInfo;
    UFont* FontValue;
    int32 FontPage;
    FGuid ExpressionGUID;
}

struct URuntimeVirtualTextureParameterValue
{
    FMaterialParameterInfo ParameterInfo;
    URuntimeVirtualTexture* ParameterValue;
    FGuid ExpressionGUID;
}

struct UTextureParameterValue
{
    FMaterialParameterInfo ParameterInfo;
    UTexture* ParameterValue;
    FGuid ExpressionGUID;
}

struct UVectorParameterValue
{
    FMaterialParameterInfo ParameterInfo;
    FLinearColor ParameterValue;
    FGuid ExpressionGUID;
}

struct UScalarParameterValue
{
    FMaterialParameterInfo ParameterInfo;
    float ParameterValue;
    FGuid ExpressionGUID;
}

struct UScalarParameterAtlasInstanceData
{
    bool bIsUsedAsAtlasPosition;
    TSoftObjectPtr<UCurveLinearColor> Curve;
    TSoftObjectPtr<UCurveLinearColorAtlas> Atlas;
}

struct UMaterialInstanceBasePropertyOverrides
{
    uint8 bOverride_OpacityMaskClipValue;
    uint8 bOverride_BlendMode;
    uint8 bOverride_ShadingModel;
    uint8 bOverride_DitheredLODTransition;
    uint8 bOverride_CastDynamicShadowAsMasked;
    uint8 bOverride_TwoSided;
    uint8 TwoSided;
    uint8 DitheredLODTransition;
    uint8 bCastDynamicShadowAsMasked;
    TEnumAsByte<EBlendMode> BlendMode;
    TEnumAsByte<EMaterialShadingModel> ShadingModel;
    float OpacityMaskClipValue;
}

struct UMaterialTextureInfo
{
    float SamplingScale;
    int32 UVChannelIndex;
    FName TextureName;
}

struct ULightmassMaterialInterfaceSettings
{
    float EmissiveBoost;
    float DiffuseBoost;
    float ExportResolutionScale;
    uint8 bCastShadowAsMasked;
    uint8 bOverrideCastShadowAsMasked;
    uint8 bOverrideEmissiveBoost;
    uint8 bOverrideDiffuseBoost;
    uint8 bOverrideExportResolutionScale;
}

struct UMaterialLayersFunctions
{
    TArray<UMaterialFunctionInterface*> Layers;
    TArray<UMaterialFunctionInterface*> Blends;
    TArray<bool> LayerStates;
    FString KeyString;
}

struct UCollectionParameterBase
{
    FName ParameterName;
    FGuid ID;
}

struct UCollectionVectorParameter : FCollectionParameterBase
{
    FLinearColor DefaultValue;
}

struct UCollectionScalarParameter : FCollectionParameterBase
{
    float DefaultValue;
}

struct UInterpGroupActorInfo
{
    FName ObjectName;
    TArray<AActor*> Actors;
}

struct UCameraCutInfo
{
    FVector Location;
    float Timestamp;
}

struct UMemberReference
{
    UObject* MemberParent;
    FString MemberScope;
    FName MemberName;
    FGuid MemberGuid;
    bool bSelfContext;
    bool bWasDeprecated;
}

struct UMeshInstancingSettings
{
    TSubclassOf<AActor> ActorClassToUse;
    int32 InstanceReplacementThreshold;
    EMeshInstancingReplacementMethod MeshReplacementMethod;
    bool bSkipMeshesWithVertexColors;
    bool bUseHLODVolumes;
    TSubclassOf<UInstancedStaticMeshComponent> ISMComponentToUse;
}

struct UMeshMergingSettings
{
    int32 TargetLightMapResolution;
    EUVOutput OutputUVs;
    FMaterialProxySettings MaterialSettings;
    int32 GutterSize;
    int32 SpecificLOD;
    EMeshLODSelectionType LODSelectionType;
    uint8 bGenerateLightMapUV;
    uint8 bComputedLightMapResolution;
    uint8 bPivotPointAtZero;
    uint8 bMergePhysicsData;
    uint8 bMergeMaterials;
    uint8 bCreateMergedMaterial;
    uint8 bBakeVertexDataToMesh;
    uint8 bUseVertexDataForBakingMaterial;
    uint8 bUseTextureBinning;
    uint8 bReuseMeshLightmapUVs;
    uint8 bMergeEquivalentMaterials;
    uint8 bUseLandscapeCulling;
    uint8 bIncludeImposters;
    uint8 bAllowDistanceField;
}

struct UMeshProxySettings
{
    int32 ScreenSize;
    float VoxelSize;
    FMaterialProxySettings MaterialSettings;
    float MergeDistance;
    FColor UnresolvedGeometryColor;
    float MaxRayCastDist;
    float HardAngleThreshold;
    int32 LightMapResolution;
    TEnumAsByte<EProxyNormalComputationMethod::Type> NormalCalculationMethod;
    TEnumAsByte<ELandscapeCullingPrecision::Type> LandscapeCullingPrecision;
    uint8 bCalculateCorrectLODModel;
    uint8 bOverrideVoxelSize;
    uint8 bOverrideTransferDistance;
    uint8 bUseHardAngleThreshold;
    uint8 bComputeLightMapResolution;
    uint8 bRecalculateNormals;
    uint8 bUseLandscapeCulling;
    uint8 bAllowAdjacency;
    uint8 bAllowDistanceField;
    uint8 bReuseMeshLightmapUVs;
    uint8 bCreateCollision;
    uint8 bAllowVertexColors;
    uint8 bGenerateLightmapUVs;
}

struct UMeshReductionSettings
{
    float PercentTriangles;
    float PercentVertices;
    float MaxDeviation;
    float PixelError;
    float WeldingThreshold;
    float HardAngleThreshold;
    int32 BaseLODModel;
    TEnumAsByte<EMeshFeatureImportance::Type> SilhouetteImportance;
    TEnumAsByte<EMeshFeatureImportance::Type> TextureImportance;
    TEnumAsByte<EMeshFeatureImportance::Type> ShadingImportance;
    uint8 bRecalculateNormals;
    uint8 bGenerateUniqueLightmapUVs;
    uint8 bKeepSymmetry;
    uint8 bVisibilityAided;
    uint8 bCullOccluded;
    EStaticMeshReductionTerimationCriterion TerminationCriterion;
    TEnumAsByte<EMeshFeatureImportance::Type> VisibilityAggressiveness;
    TEnumAsByte<EMeshFeatureImportance::Type> VertexColorImportance;
}

struct UPurchaseInfo
{
    FString Identifier;
    FString DisplayName;
    FString DisplayDescription;
    FString DisplayPrice;
}

struct UNameCurve : FIndexedCurve
{
    TArray<FNameCurveKey> Keys;
}

struct UNameCurveKey
{
    float Time;
    FName Value;
}

struct UNavAvoidanceMask
{
    uint8 bGroup0;
    uint8 bGroup1;
    uint8 bGroup2;
    uint8 bGroup3;
    uint8 bGroup4;
    uint8 bGroup5;
    uint8 bGroup6;
    uint8 bGroup7;
    uint8 bGroup8;
    uint8 bGroup9;
    uint8 bGroup10;
    uint8 bGroup11;
    uint8 bGroup12;
    uint8 bGroup13;
    uint8 bGroup14;
    uint8 bGroup15;
    uint8 bGroup16;
    uint8 bGroup17;
    uint8 bGroup18;
    uint8 bGroup19;
    uint8 bGroup20;
    uint8 bGroup21;
    uint8 bGroup22;
    uint8 bGroup23;
    uint8 bGroup24;
    uint8 bGroup25;
    uint8 bGroup26;
    uint8 bGroup27;
    uint8 bGroup28;
    uint8 bGroup29;
    uint8 bGroup30;
    uint8 bGroup31;
}

struct UMovementProperties
{
    uint8 bCanCrouch;
    uint8 bCanJump;
    uint8 bCanWalk;
    uint8 bCanSwim;
    uint8 bCanFly;
}

struct UNavAgentProperties : FMovementProperties
{
    float AgentRadius;
    float AgentHeight;
    float AgentStepHeight;
    float NavWalkingSearchHeightScale;
    FSoftClassPath PreferredNavData;
}

struct UNavDataConfig : FNavAgentProperties
{
    FName Name;
    FColor Color;
    FVector DefaultQueryExtent;
    TSubclassOf<AActor> NavigationDataClass;
    TSoftClassPtr<AActor> NavDataClass;
}

struct UNavAgentSelector
{
    uint8 bSupportsAgent0;
    uint8 bSupportsAgent1;
    uint8 bSupportsAgent2;
    uint8 bSupportsAgent3;
    uint8 bSupportsAgent4;
    uint8 bSupportsAgent5;
    uint8 bSupportsAgent6;
    uint8 bSupportsAgent7;
    uint8 bSupportsAgent8;
    uint8 bSupportsAgent9;
    uint8 bSupportsAgent10;
    uint8 bSupportsAgent11;
    uint8 bSupportsAgent12;
    uint8 bSupportsAgent13;
    uint8 bSupportsAgent14;
    uint8 bSupportsAgent15;
}

struct UNavigationLinkBase
{
    float LeftProjectHeight;
    float MaxFallDownLength;
    float SnapRadius;
    float SnapHeight;
    FNavAgentSelector SupportedAgents;
    uint8 bSupportsAgent0;
    uint8 bSupportsAgent1;
    uint8 bSupportsAgent2;
    uint8 bSupportsAgent3;
    uint8 bSupportsAgent4;
    uint8 bSupportsAgent5;
    uint8 bSupportsAgent6;
    uint8 bSupportsAgent7;
    uint8 bSupportsAgent8;
    uint8 bSupportsAgent9;
    uint8 bSupportsAgent10;
    uint8 bSupportsAgent11;
    uint8 bSupportsAgent12;
    uint8 bSupportsAgent13;
    uint8 bSupportsAgent14;
    uint8 bSupportsAgent15;
    TEnumAsByte<ENavLinkDirection::Type> Direction;
    uint8 bUseSnapHeight;
    uint8 bSnapToCheapestArea;
    uint8 bCustomFlag0;
    uint8 bCustomFlag1;
    uint8 bCustomFlag2;
    uint8 bCustomFlag3;
    uint8 bCustomFlag4;
    uint8 bCustomFlag5;
    uint8 bCustomFlag6;
    uint8 bCustomFlag7;
    TSubclassOf<UNavAreaBase> AreaClass;
}

struct UNavigationSegmentLink : FNavigationLinkBase
{
    FVector LeftStart;
    FVector LeftEnd;
    FVector RightStart;
    FVector RightEnd;
}

struct UNavigationLink : FNavigationLinkBase
{
    FVector Left;
    FVector Right;
}

struct UChannelDefinition
{
    FName ChannelName;
    FName ClassName;
    UClass* ChannelClass;
    int32 StaticChannelIndex;
    bool bTickOnCreate;
    bool bServerOpen;
    bool bClientOpen;
    bool bInitialServer;
    bool bInitialClient;
}

struct UPacketSimulationSettings
{
    int32 PktLoss;
    int32 PktLossMaxSize;
    int32 PktLossMinSize;
    int32 PktOrder;
    int32 PktDup;
    int32 PktLag;
    int32 PktLagVariance;
    int32 PktLagMin;
    int32 PktLagMax;
    int32 PktIncomingLagMin;
    int32 PktIncomingLagMax;
    int32 PktIncomingLoss;
    int32 PktJitter;
}

struct UNetworkEmulationProfileDescription
{
    FString ProfileName;
    FString ToolTip;
}

struct UNodeItem
{
    FName ParentName;
    FTransform Transform;
}

struct UParticleBurst
{
    int32 count;
    int32 CountLow;
    float Time;
}

struct UParticleRandomSeedInfo
{
    FName ParameterName;
    uint8 bGetSeedFromInstance;
    uint8 bInstanceSeedIsIndex;
    uint8 bResetSeedOnEmitterLooping;
    uint8 bRandomlySelectSeedArray;
    TArray<int32> RandomSeeds;
}

struct UParticleCurvePair
{
    FString CurveName;
    UObject* CurveObject;
}

struct UBeamModifierOptions
{
    uint8 bModify;
    uint8 bScale;
    uint8 bLock;
}

struct UParticleEvent_GenerateInfo
{
    TEnumAsByte<EParticleEventType> Type;
    int32 Frequency;
    int32 ParticleFrequency;
    uint8 FirstTimeOnly;
    uint8 LastTimeOnly;
    uint8 UseReflectedImpactVector;
    uint8 bUseOrbitOffset;
    FName CustomName;
    TArray<UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;
}

struct ULocationBoneSocketInfo
{
    FName BoneSocketName;
    FVector Offset;
}

struct UOrbitOptions
{
    uint8 bProcessDuringSpawn;
    uint8 bProcessDuringUpdate;
    uint8 bUseEmitterTime;
}

struct UEmitterDynamicParameter
{
    FName ParamName;
    uint8 bUseEmitterTime;
    uint8 bSpawnTimeOnly;
    TEnumAsByte<EEmitterDynamicParameterValue> ValueMethod;
    uint8 bScaleVelocityByParamValue;
    FRawDistributionFloat ParamValue;
}

struct UBeamTargetData
{
    FName TargetName;
    float TargetPercentage;
}

struct UGPUSpriteResourceData
{
    TArray<FColor> QuantizedColorSamples;
    TArray<FColor> QuantizedMiscSamples;
    TArray<FColor> QuantizedSimulationAttrSamples;
    FVector4 ColorScale;
    FVector4 ColorBias;
    FVector4 MiscScale;
    FVector4 MiscBias;
    FVector4 SimulationAttrCurveScale;
    FVector4 SimulationAttrCurveBias;
    FVector4 SubImageSize;
    FVector4 SizeBySpeed;
    FVector ConstantAcceleration;
    FVector OrbitOffsetBase;
    FVector OrbitOffsetRange;
    FVector OrbitFrequencyBase;
    FVector OrbitFrequencyRange;
    FVector OrbitPhaseBase;
    FVector OrbitPhaseRange;
    float GlobalVectorFieldScale;
    float GlobalVectorFieldTightness;
    float PerParticleVectorFieldScale;
    float PerParticleVectorFieldBias;
    float DragCoefficientScale;
    float DragCoefficientBias;
    float ResilienceScale;
    float ResilienceBias;
    float CollisionRadiusScale;
    float CollisionRadiusBias;
    float CollisionTimeBias;
    float CollisionRandomSpread;
    float CollisionRandomDistribution;
    float OneMinusFriction;
    float RotationRateScale;
    float CameraMotionBlurAmount;
    TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;
    TEnumAsByte<EParticleAxisLock> LockAxisFlag;
    FVector2D PivotOffset;
    uint8 bRemoveHMDRoll;
    float MinFacingCameraBlendDistance;
    float MaxFacingCameraBlendDistance;
}

struct UGPUSpriteEmitterInfo
{
    UParticleModuleRequired* RequiredModule;
    UParticleModuleSpawn* SpawnModule;
    UParticleModuleSpawnPerUnit* SpawnPerUnitModule;
    TArray<UParticleModule*> SpawnModules;
    FGPUSpriteLocalVectorFieldInfo LocalVectorField;
    FFloatDistribution VectorFieldScale;
    FFloatDistribution DragCoefficient;
    FFloatDistribution PointAttractorStrength;
    FFloatDistribution Resilience;
    FVector ConstantAcceleration;
    FVector PointAttractorPosition;
    float PointAttractorRadiusSq;
    FVector OrbitOffsetBase;
    FVector OrbitOffsetRange;
    FVector2D InvMaxSize;
    float InvRotationRateScale;
    float MaxLifetime;
    int32 MaxParticleCount;
    TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;
    TEnumAsByte<EParticleAxisLock> LockAxisFlag;
    uint8 bEnableCollision;
    TEnumAsByte<EParticleCollisionMode::Type> CollisionMode;
    uint8 bRemoveHMDRoll;
    float MinFacingCameraBlendDistance;
    float MaxFacingCameraBlendDistance;
    FRawDistributionVector DynamicColor;
    FRawDistributionFloat DynamicAlpha;
    FRawDistributionVector DynamicColorScale;
    FRawDistributionFloat DynamicAlphaScale;
}

struct UGPUSpriteLocalVectorFieldInfo
{
    UVectorField* Field;
    FTransform Transform;
    FRotator MinInitialRotation;
    FRotator MaxInitialRotation;
    FRotator RotationRate;
    float Intensity;
    float Tightness;
    uint8 bIgnoreComponentTransform;
    uint8 bTileX;
    uint8 bTileY;
    uint8 bTileZ;
    uint8 bUseFixDT;
}

struct UNamedEmitterMaterial
{
    FName Name;
    UMaterialInterface* Material;
}

struct ULODSoloTrack
{
    TArray<uint8> SoloEnableSetting;
}

struct UParticleSystemLOD
{
}

struct UParticleSysParam
{
    FName Name;
    TEnumAsByte<EParticleSysParamType> ParamType;
    float Scalar;
    float Scalar_Low;
    FVector Vector;
    FVector Vector_Low;
    FColor Color;
    AActor* Actor;
    UMaterialInterface* Material;
}

struct UParticleSystemWorldManagerTickFunction : FTickFunction
{
}

struct UParticleSystemReplayFrame
{
}

struct UParticleEmitterReplayFrame
{
}

struct UFreezablePerPlatformInt
{
}

struct UPhysicalAnimationData
{
    FName BodyName;
    uint8 bIsLocalSimulation;
    float OrientationStrength;
    float AngularVelocityStrength;
    float PositionStrength;
    float VelocityStrength;
    float MaxLinearForce;
    float MaxAngularForce;
}

struct UTireFrictionScalePair
{
    UTireType* TireType;
    float FrictionScale;
}

struct UPhysicalAnimationProfile
{
    FName ProfileName;
    FPhysicalAnimationData PhysicalAnimationData;
}

struct UPhysicsConstraintProfileHandle
{
    FConstraintProfileProperties ProfileProperties;
    FName ProfileName;
}

struct UChaosPhysicsSettings
{
    EChaosThreadingMode DefaultThreadingModel;
    EChaosSolverTickMode DedicatedThreadTickMode;
    EChaosBufferMode DedicatedThreadBufferMode;
}

struct UPhysicalSurfaceName
{
    TEnumAsByte<EPhysicalSurface> Type;
    FName Name;
}

struct UDelegateArray
{
    TArray<FDelegateArrayDelegates> Delegates;
}

struct UTViewTarget
{
    AActor* Target;
    FMinimalViewInfo POV;
    APlayerState* PlayerState;
}

struct UCameraCacheEntry
{
    float Timestamp;
    FMinimalViewInfo POV;
}

struct UInputActionSpeechMapping
{
    FName ActionName;
    FName SpeechKeyword;
}

struct UInputAxisKeyMapping
{
    FName AxisName;
    float Scale;
    FKey Key;
}

struct UInputActionKeyMapping
{
    FName ActionName;
    uint8 bShift;
    uint8 bCtrl;
    uint8 bAlt;
    uint8 bCmd;
    FKey Key;
}

struct UInputAxisConfigEntry
{
    FName AxisKeyName;
    FInputAxisProperties AxisProperties;
}

struct UInputAxisProperties
{
    float DeadZone;
    float Sensitivity;
    float Exponent;
    uint8 bInvert;
}

struct UKeyBind
{
    FKey Key;
    FString Command;
    uint8 Control;
    uint8 Shift;
    uint8 Alt;
    uint8 Cmd;
    uint8 bIgnoreCtrl;
    uint8 bIgnoreShift;
    uint8 bIgnoreAlt;
    uint8 bIgnoreCmd;
    uint8 bDisabled;
}

struct UPlayerMuteList
{
    bool bHasVoiceHandshakeCompleted;
    int32 VoiceChannelIdx;
}

struct UPoseDataContainer
{
    TArray<FSmartName> PoseNames;
    TArray<FName> Tracks;
    TMap<FName, int32> TrackMap;
    TArray<FPoseData> Poses;
    TArray<FAnimCurveBase> Curves;
}

struct UPoseData
{
    TArray<FTransform> LocalSpacePose;
    TMap<int32, int32> TrackToBufferIndex;
    TArray<float> CurveData;
}

struct UPreviewAssetAttachContainer
{
    TArray<FPreviewAttachedObjectPair> AttachedObjects;
}

struct UPreviewAttachedObjectPair
{
    TSoftObjectPtr<UObject> AttachedObject;
    UObject* Object;
    FName AttachedTo;
}

struct UPreviewMeshCollectionEntry
{
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
}

struct UPrimitiveComponentInstanceData : FSceneComponentInstanceData
{
    FTransform ComponentTransform;
    int32 VisibilityId;
    UPrimitiveComponent* LODParent;
}

struct USpriteCategoryInfo
{
    FName Category;
    FText DisplayName;
    FText Description;
}

struct UReverbSettings
{
    bool bApplyReverb;
    UReverbEffect* ReverbEffect;
    USoundEffectSubmixPreset* ReverbPluginEffect;
    float Volume;
    float FadeTime;
}

struct UCompressedRichCurve
{
}

struct UTransformBase
{
    FName Node;
    FTransformBaseConstraint Constraints;
}

struct UTransformBaseConstraint
{
    TArray<FRigTransformConstraint> TransformConstraints;
}

struct URigTransformConstraint
{
    TEnumAsByte<EConstraintTransform::Type> TranformType;
    FName ParentSpace;
    float Weight;
}

struct UNode
{
    FName Name;
    FName ParentName;
    FTransform Transform;
    FString DisplayName;
    bool bAdvanced;
}

struct URootMotionSource
{
    uint16 Priority;
    uint16 LocalID;
    ERootMotionAccumulateMode AccumulateMode;
    FName InstanceName;
    float StartTime;
    float CurrentTime;
    float PreviousTime;
    float Duration;
    FRootMotionSourceStatus Status;
    FRootMotionSourceSettings Settings;
    bool bInLocalSpace;
    FRootMotionMovementParams RootMotionParams;
    FRootMotionFinishVelocitySettings FinishVelocityParams;
}

struct URootMotionFinishVelocitySettings
{
    ERootMotionFinishVelocityMode Mode;
    FVector SetVelocity;
    float ClampVelocity;
}

struct URootMotionSourceStatus
{
    uint8 Flags;
}

struct URootMotionSource_JumpForce : FRootMotionSource
{
    FRotator Rotation;
    float Distance;
    float Height;
    bool bDisableTimeout;
    UCurveVector* PathOffsetCurve;
    UCurveFloat* TimeMappingCurve;
}

struct URootMotionSource_MoveToDynamicForce : FRootMotionSource
{
    FVector StartLocation;
    FVector InitialTargetLocation;
    FVector TargetLocation;
    bool bRestrictSpeedToExpected;
    UCurveVector* PathOffsetCurve;
    UCurveFloat* TimeMappingCurve;
}

struct URootMotionSource_MoveToForce : FRootMotionSource
{
    FVector StartLocation;
    FVector TargetLocation;
    bool bRestrictSpeedToExpected;
    UCurveVector* PathOffsetCurve;
}

struct URootMotionSource_RadialForce : FRootMotionSource
{
    FVector Location;
    AActor* LocationActor;
    float Radius;
    float Strength;
    bool bIsPush;
    bool bNoZForce;
    UCurveFloat* StrengthDistanceFalloff;
    UCurveFloat* StrengthOverTime;
    bool bUseFixedWorldDirection;
    FRotator FixedWorldDirection;
}

struct URootMotionSource_ConstantForce : FRootMotionSource
{
    FVector force;
    UCurveFloat* StrengthOverTime;
}

struct UCameraExposureSettings
{
    TEnumAsByte<EAutoExposureMethod> Method;
    float LowPercent;
    float HighPercent;
    float MinBrightness;
    float MaxBrightness;
    float SpeedUp;
    float SpeedDown;
    float Bias;
    UCurveFloat* BiasCurve;
    UTexture* MeterMask;
    float HistogramLogMin;
    float HistogramLogMax;
    float CalibrationConstant;
    uint8 ApplyPhysicalCameraExposure;
}

struct ULensSettings
{
    FLensBloomSettings Bloom;
    FLensImperfectionSettings Imperfections;
    float ChromaticAberration;
}

struct ULensImperfectionSettings
{
    UTexture* DirtMask;
    float DirtMaskIntensity;
    FLinearColor DirtMaskTint;
}

struct ULensBloomSettings
{
    FGaussianSumBloomSettings GaussianSum;
    FConvolutionBloomSettings Convolution;
    TEnumAsByte<EBloomMethod> Method;
}

struct UConvolutionBloomSettings
{
    UTexture2D* Texture;
    float Size;
    FVector2D CenterUV;
    float PreFilterMin;
    float PreFilterMax;
    float PreFilterMult;
    float BufferScale;
}

struct UGaussianSumBloomSettings
{
    float Intensity;
    float Threshold;
    float SizeScale;
    float Filter1Size;
    float Filter2Size;
    float Filter3Size;
    float Filter4Size;
    float Filter5Size;
    float Filter6Size;
    FLinearColor Filter1Tint;
    FLinearColor Filter2Tint;
    FLinearColor Filter3Tint;
    FLinearColor Filter4Tint;
    FLinearColor Filter5Tint;
    FLinearColor Filter6Tint;
}

struct UFilmStockSettings
{
    float Slope;
    float Toe;
    float Shoulder;
    float BlackClip;
    float WhiteClip;
}

struct UColorGradingSettings
{
    FColorGradePerRangeSettings Global;
    FColorGradePerRangeSettings Shadows;
    FColorGradePerRangeSettings Midtones;
    FColorGradePerRangeSettings Highlights;
    float ShadowsMax;
    float HighlightsMin;
}

struct UColorGradePerRangeSettings
{
    FVector4 Saturation;
    FVector4 Contrast;
    FVector4 Gamma;
    FVector4 Gain;
    FVector4 Offset;
}

struct UEngineShowFlagsSetting
{
    FString ShowFlagName;
    bool Enabled;
}

struct USimpleCurve : FRealCurve
{
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    TArray<FSimpleCurveKey> Keys;
}

struct USimpleCurveKey
{
    float Time;
    float Value;
}

struct USingleAnimationPlayData
{
    UAnimationAsset* AnimToPlay;
    uint8 bSavedLooping;
    uint8 bSavedPlaying;
    float SavedPosition;
    float SavedPlayRate;
}

struct USkeletalMaterial
{
    UMaterialInterface* MaterialInterface;
    FName MaterialSlotName;
    FMeshUVChannelInfo UVChannelData;
}

struct UClothingAssetData_Legacy
{
    FName AssetName;
    FString ApexFileName;
    bool bClothPropertiesChanged;
    FClothPhysicsProperties_Legacy PhysicsProperties;
}

struct UClothPhysicsProperties_Legacy
{
    float VerticalResistance;
    float HorizontalResistance;
    float BendResistance;
    float ShearResistance;
    float Friction;
    float Damping;
    float TetherStiffness;
    float TetherLimit;
    float Drag;
    float StiffnessFrequency;
    float GravityScale;
    float MassScale;
    float InertiaBlend;
    float SelfCollisionThickness;
    float SelfCollisionSquashScale;
    float SelfCollisionStiffness;
    float SolverFrequency;
    float FiberCompression;
    float FiberExpansion;
    float FiberResistance;
}

struct USkeletalMeshLODInfo
{
    FPerPlatformFloat ScreenSize;
    float LODHysteresis;
    TArray<int32> LODMaterialMap;
    FSkeletalMeshBuildSettings BuildSettings;
    FSkeletalMeshOptimizationSettings ReductionSettings;
    TArray<FBoneReference> BonesToRemove;
    TArray<FBoneReference> BonesToPrioritize;
    float WeightOfPrioritization;
    UAnimSequence* BakePose;
    UAnimSequence* BakePoseOverride;
    FString SourceImportFilename;
    ESkinCacheUsage SkinCacheUsage;
    uint8 bHasBeenSimplified;
    uint8 bHasPerLODVertexColors;
    uint8 bAllowCPUAccess;
    uint8 bSupportUniformlyDistributedSampling;
}

struct USkeletalMeshOptimizationSettings
{
    TEnumAsByte<SkeletalMeshTerminationCriterion> TerminationCriterion;
    float NumOfTrianglesPercentage;
    float NumOfVertPercentage;
    uint32 MaxNumOfTriangles;
    uint32 MaxNumOfVerts;
    float MaxDeviationPercentage;
    TEnumAsByte<SkeletalMeshOptimizationType> ReductionMethod;
    TEnumAsByte<SkeletalMeshOptimizationImportance> SilhouetteImportance;
    TEnumAsByte<SkeletalMeshOptimizationImportance> TextureImportance;
    TEnumAsByte<SkeletalMeshOptimizationImportance> ShadingImportance;
    TEnumAsByte<SkeletalMeshOptimizationImportance> SkinningImportance;
    uint8 bRemapMorphTargets;
    uint8 bRecalcNormals;
    float WeldingThreshold;
    float NormalsThreshold;
    int32 MaxBonesPerVertex;
    uint8 bEnforceBoneBoundaries;
    float VolumeImportance;
    uint8 bLockEdges;
    uint8 bLockColorBounaries;
    int32 BaseLOD;
}

struct USkeletalMeshClothBuildParams
{
    TWeakObjectPtr<UClothingAssetBase> TargetAsset;
    int32 TargetLod;
    bool bRemapParameters;
    FString AssetName;
    int32 LODIndex;
    int32 SourceSection;
    bool bRemoveFromMesh;
    TSoftObjectPtr<UPhysicsAsset> PhysicsAsset;
}

struct UBoneMirrorExport
{
    FName BoneName;
    FName SourceBoneName;
    TEnumAsByte<EAxis::Type> BoneFlipAxis;
}

struct UBoneMirrorInfo
{
    int32 SourceIndex;
    TEnumAsByte<EAxis::Type> BoneFlipAxis;
}

struct USkeletalMeshComponentClothTickFunction : FTickFunction
{
}

struct USkeletalMeshComponentEndPhysicsTickFunction : FTickFunction
{
}

struct USkeletalMeshLODGroupSettings
{
    FPerPlatformFloat ScreenSize;
    float LODHysteresis;
    EBoneFilterActionOption BoneFilterActionOption;
    TArray<FBoneFilter> BoneList;
    TArray<FName> BonesToPrioritize;
    float WeightOfPrioritization;
    UAnimSequence* BakePose;
    FSkeletalMeshOptimizationSettings ReductionSettings;
}

struct UBoneFilter
{
    bool bExcludeSelf;
    FName BoneName;
}

struct USkeletalMeshSamplingInfo
{
    TArray<FSkeletalMeshSamplingRegion> Regions;
    FSkeletalMeshSamplingBuiltData BuiltData;
}

struct USkeletalMeshSamplingBuiltData
{
    TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData;
    TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData;
}

struct USkeletalMeshSamplingRegionBuiltData
{
}

struct USkeletalMeshSamplingLODBuiltData
{
}

struct USkeletalMeshSamplingRegion
{
    FName Name;
    int32 LODIndex;
    uint8 bSupportUniformlyDistributedSampling;
    TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;
    TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters;
}

struct USkeletalMeshSamplingRegionBoneFilter
{
    FName BoneName;
    uint8 bIncludeOrExclude;
    uint8 bApplyToChildren;
}

struct USkeletalMeshSamplingRegionMaterialFilter
{
    FName MaterialName;
}

struct UVirtualBone
{
    FName SourceBoneName;
    FName TargetBoneName;
    FName VirtualBoneName;
}

struct UAnimSlotGroup
{
    FName GroupName;
    TArray<FName> SlotNames;
}

struct URigConfiguration
{
    URig* Rig;
    TArray<FNameMapping> BoneMappingTable;
}

struct UNameMapping
{
    FName NodeName;
    FName BoneName;
}

struct UBoneReductionSetting
{
    TArray<FName> BonesToRemove;
}

struct UReferencePose
{
    FName PoseName;
    TArray<FTransform> ReferencePose;
}

struct UBoneNode
{
    FName Name;
    int32 ParentIndex;
    TEnumAsByte<EBoneTranslationRetargetingMode::Type> TranslationRetargetingMode;
}

struct USkeletonToMeshLinkup
{
    TArray<int32> SkeletonToMeshTable;
    TArray<int32> MeshToSkeletonTable;
}

struct USkelMeshComponentLODInfo
{
    TArray<bool> HiddenMaterials;
}

struct USkelMeshSkinWeightInfo
{
    int32 Bones;
    uint8 Weights;
}

struct USkinWeightProfileInfo
{
    FName Name;
    FPerPlatformBool DefaultProfile;
    FPerPlatformInt DefaultProfileFromLODIndex;
}

struct UTentDistribution
{
    float TipAltitude;
    float TipValue;
    float Width;
}

struct UPrecomputedSkyLightInstanceData : FSceneComponentInstanceData
{
    FGuid LightGuid;
    float AverageBrightness;
}

struct USmartNameContainer
{
}

struct USmartNameMapping
{
}

struct UCurveMetaData
{
}

struct USoundAttenuationSettings : FBaseAttenuationSettings
{
    uint8 bAttenuate;
    uint8 bSpatialize;
    uint8 bAttenuateWithLPF;
    uint8 bEnableListenerFocus;
    uint8 bEnableFocusInterpolation;
    uint8 bEnableOcclusion;
    uint8 bUseComplexCollisionForOcclusion;
    uint8 bEnableReverbSend;
    uint8 bEnablePriorityAttenuation;
    uint8 bApplyNormalizationToStereoSounds;
    uint8 bEnableLogFrequencyScaling;
    uint8 bEnableSubmixSends;
    TEnumAsByte<ESoundSpatializationAlgorithm> SpatializationAlgorithm;
    float BinauralRadius;
    EAirAbsorptionMethod AbsorptionMethod;
    TEnumAsByte<ECollisionChannel> OcclusionTraceChannel;
    EReverbSendMethod ReverbSendMethod;
    EPriorityAttenuationMethod PriorityAttenuationMethod;
    float OmniRadius;
    float StereoSpread;
    float LPFRadiusMin;
    float LPFRadiusMax;
    FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve;
    FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve;
    float LPFFrequencyAtMin;
    float LPFFrequencyAtMax;
    float HPFFrequencyAtMin;
    float HPFFrequencyAtMax;
    float FocusAzimuth;
    float NonFocusAzimuth;
    float FocusDistanceScale;
    float NonFocusDistanceScale;
    float FocusPriorityScale;
    float NonFocusPriorityScale;
    float FocusVolumeAttenuation;
    float NonFocusVolumeAttenuation;
    float FocusAttackInterpSpeed;
    float FocusReleaseInterpSpeed;
    float OcclusionLowPassFilterFrequency;
    float OcclusionVolumeAttenuation;
    float OcclusionInterpolationTime;
    float ReverbWetLevelMin;
    float ReverbWetLevelMax;
    float ReverbDistanceMin;
    float ReverbDistanceMax;
    float ManualReverbSendLevel;
    FRuntimeFloatCurve CustomReverbSendCurve;
    TArray<FAttenuationSubmixSendSettings> SubmixSendSettings;
    float PriorityAttenuationMin;
    float PriorityAttenuationMax;
    float PriorityAttenuationDistanceMin;
    float PriorityAttenuationDistanceMax;
    float ManualPriorityAttenuation;
    FRuntimeFloatCurve CustomPriorityAttenuationCurve;
    FSoundAttenuationPluginSettings PluginSettings;
}

struct USoundAttenuationPluginSettings
{
    TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;
    TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray;
    TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray;
}

struct UAttenuationSubmixSendSettings
{
    USoundSubmixBase* Submix;
    ESubmixSendMethod SubmixSendMethod;
    float SubmixSendLevelMin;
    float SubmixSendLevelMax;
    float SubmixSendDistanceMin;
    float SubmixSendDistanceMax;
    float ManualSubmixSendLevel;
    FRuntimeFloatCurve CustomSubmixSendCurve;
}

struct UPassiveSoundMixModifier
{
    USoundMix* SoundMix;
    float MinVolumeThreshold;
    float MaxVolumeThreshold;
}

struct USoundClassProperties
{
    float Volume;
    float Pitch;
    float LowPassFilterFrequency;
    float AttenuationDistanceScale;
    float StereoBleed;
    float LFEBleed;
    float VoiceCenterChannelVolume;
    float RadioFilterVolume;
    float RadioFilterVolumeThreshold;
    uint8 bApplyEffects;
    uint8 bAlwaysPlay;
    uint8 bIsUISound;
    uint8 bIsMusic;
    uint8 bCenterChannelOnly;
    uint8 bApplyAmbientVolumes;
    uint8 bReverb;
    float Default2DReverbSendAmount;
    TEnumAsByte<EAudioOutputTarget::Type> OutputTarget;
    ESoundWaveLoadingBehavior LoadingBehavior;
    USoundSubmix* DefaultSubmix;
}

struct USoundClassEditorData
{
}

struct USoundConcurrencySettings
{
    int32 MaxCount;
    uint8 bLimitToOwner;
    TEnumAsByte<EMaxConcurrentResolutionRule::Type> ResolutionRule;
    float VolumeScale;
    float VolumeScaleAttackTime;
    uint8 bVolumeScaleCanRelease;
    float VolumeScaleReleaseTime;
    float VoiceStealReleaseTime;
}

struct USoundNodeEditorData
{
}

struct USourceEffectChainEntry
{
    USoundEffectSourcePreset* Preset;
    uint8 bBypass;
}

struct USoundGroup
{
    TEnumAsByte<ESoundGroup> SoundGroup;
    FString DisplayName;
    uint8 bAlwaysDecompressOnLoad;
    float DecompressedDuration;
}

struct USoundClassAdjuster
{
    USoundClass* SoundClassObject;
    float VolumeAdjuster;
    float PitchAdjuster;
    float LowPassFilterFrequency;
    uint8 bApplyToChildren;
    float VoiceCenterChannelVolumeAdjuster;
}

struct UAudioEQEffect : FAudioEffectParameters
{
    float FrequencyCenter0;
    float Gain0;
    float Bandwidth0;
    float FrequencyCenter1;
    float Gain1;
    float Bandwidth1;
    float FrequencyCenter2;
    float Gain2;
    float Bandwidth2;
    float FrequencyCenter3;
    float Gain3;
    float Bandwidth3;
}

struct UDistanceDatum
{
    float FadeInDistanceStart;
    float FadeInDistanceEnd;
    float FadeOutDistanceStart;
    float FadeOutDistanceEnd;
    float Volume;
}

struct UModulatorContinuousParams
{
    FName ParameterName;
    float Default;
    float MinInput;
    float MaxInput;
    float MinOutput;
    float MaxOutput;
    TEnumAsByte<ModulationParamMode> ParamMode;
}

struct USoundSourceBusSendInfo
{
    ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod;
    USoundSourceBus* SoundSourceBus;
    float SendLevel;
    float MinSendLevel;
    float MaxSendLevel;
    float MinSendDistance;
    float MaxSendDistance;
    FRuntimeFloatCurve CustomSendLevelCurve;
}

struct USoundSubmixSendInfo
{
    ESendLevelControlMethod SendLevelControlMethod;
    USoundSubmixBase* SoundSubmix;
    float SendLevel;
    float MinSendLevel;
    float MaxSendLevel;
    float MinSendDistance;
    float MaxSendDistance;
    FRuntimeFloatCurve CustomSendLevelCurve;
}

struct USoundWaveEnvelopeTimeData
{
    float Amplitude;
    float TimeSec;
}

struct USoundWaveSpectralTimeData
{
    TArray<FSoundWaveSpectralDataEntry> Data;
    float TimeSec;
}

struct USoundWaveSpectralDataEntry
{
    float Magnitude;
    float NormalizedMagnitude;
}

struct USoundWaveEnvelopeDataPerSound
{
    float Envelope;
    float PlaybackTime;
    USoundWave* SoundWave;
}

struct USoundWaveSpectralDataPerSound
{
    TArray<FSoundWaveSpectralData> SpectralData;
    float PlaybackTime;
    USoundWave* SoundWave;
}

struct USoundWaveSpectralData
{
    float FrequencyHz;
    float Magnitude;
    float NormalizedMagnitude;
}

struct UStreamedAudioPlatformData
{
}

struct USplineInstanceData : FSceneComponentInstanceData
{
    bool bSplineHasBeenEdited;
    FSplineCurves SplineCurves;
    FSplineCurves SplineCurvesPreUCS;
}

struct USplineCurves
{
    FInterpCurveVector Position;
    FInterpCurveQuat Rotation;
    FInterpCurveVector Scale;
    FInterpCurveFloat ReparamTable;
    USplineMetadata* MetaData;
}

struct USplinePoint
{
    float InputKey;
    FVector Position;
    FVector ArriveTangent;
    FVector LeaveTangent;
    FRotator Rotation;
    FVector Scale;
    TEnumAsByte<ESplinePointType::Type> Type;
}

struct USplineMeshInstanceData : FSceneComponentInstanceData
{
    FVector StartPos;
    FVector EndPos;
    FVector StartTangent;
    FVector EndTangent;
}

struct USplineMeshParams
{
    FVector StartPos;
    FVector StartTangent;
    FVector2D StartScale;
    float StartRoll;
    FVector2D StartOffset;
    FVector EndPos;
    FVector2D EndScale;
    FVector EndTangent;
    float EndRoll;
    FVector2D EndOffset;
}

struct UMaterialRemapIndex
{
    uint32 ImportVersionKey;
    TArray<int32> MaterialRemap;
}

struct UStaticMaterial
{
    UMaterialInterface* MaterialInterface;
    FName MaterialSlotName;
    FName ImportedMaterialSlotName;
    FMeshUVChannelInfo UVChannelData;
}

struct UAssetEditorOrbitCameraPosition
{
    bool bIsSet;
    FVector CamOrbitPoint;
    FVector CamOrbitZoom;
    FRotator CamOrbitRotation;
}

struct UMeshSectionInfoMap
{
    TMap<uint32, FMeshSectionInfo> Map;
}

struct UMeshSectionInfo
{
    int32 MaterialIndex;
    bool bEnableCollision;
    bool bCastShadow;
    bool bForceOpaque;
}

struct UStaticMeshSourceModel
{
    FMeshBuildSettings BuildSettings;
    FMeshReductionSettings ReductionSettings;
    float LODDistance;
    FPerPlatformFloat ScreenSize;
    FString SourceImportFilename;
}

struct UStaticMeshOptimizationSettings
{
    TEnumAsByte<EOptimizationType> ReductionMethod;
    float NumOfTrianglesPercentage;
    float MaxDeviationPercentage;
    float WeldingThreshold;
    bool bRecalcNormals;
    float NormalsThreshold;
    uint8 SilhouetteImportance;
    uint8 TextureImportance;
    uint8 ShadingImportance;
}

struct UStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData
{
    UStaticMesh* StaticMesh;
    TArray<FStaticMeshVertexColorLODData> VertexColorLODs;
    TArray<FGuid> CachedStaticLighting;
    TArray<FStreamingTextureBuildInfo> StreamingTextureData;
}

struct UStreamingTextureBuildInfo
{
    uint32 PackedRelativeBox;
    int32 TextureLevelIndex;
    float TexelFactor;
}

struct UStaticMeshVertexColorLODData
{
    TArray<FPaintedVertex> PaintedVertices;
    TArray<FColor> VertexBufferColors;
    uint32 LODIndex;
}

struct UPaintedVertex
{
    FVector Position;
    FColor Color;
    FVector4 Normal;
}

struct UStaticMeshComponentLODInfo
{
}

struct UStaticParameterSet
{
    TArray<FStaticSwitchParameter> StaticSwitchParameters;
    TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters;
    TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters;
    TArray<FStaticMaterialLayersParameter> MaterialLayersParameters;
}

struct UStaticParameterBase
{
    FMaterialParameterInfo ParameterInfo;
    bool bOverride;
    FGuid ExpressionGUID;
}

struct UStaticMaterialLayersParameter : FStaticParameterBase
{
    FMaterialLayersFunctions Value;
}

struct UStaticTerrainLayerWeightParameter : FStaticParameterBase
{
    int32 WeightmapIndex;
    bool bWeightBasedBlend;
}

struct UStaticComponentMaskParameter : FStaticParameterBase
{
    bool R;
    bool G;
    bool B;
    bool A;
}

struct UStaticSwitchParameter : FStaticParameterBase
{
    bool Value;
}

struct UEquirectProps
{
    FBox2D LeftUVRect;
    FBox2D RightUVRect;
    FVector2D LeftScale;
    FVector2D RightScale;
    FVector2D LeftBias;
    FVector2D RightBias;
}

struct UStringCurve : FIndexedCurve
{
    FString DefaultValue;
    TArray<FStringCurveKey> Keys;
}

struct UStringCurveKey
{
    float Time;
    FString Value;
}

struct USubsurfaceProfileStruct
{
    FLinearColor SurfaceAlbedo;
    FLinearColor MeanFreePathColor;
    float MeanFreePathDistance;
    float WorldUnitScale;
    bool bEnableBurley;
    float ScatterRadius;
    FLinearColor SubsurfaceColor;
    FLinearColor FalloffColor;
    FLinearColor BoundaryColorBleed;
    float ExtinctionScale;
    float NormalScale;
    float ScatteringDistribution;
    float IOR;
    float Roughness0;
    float Roughness1;
    float LobeMix;
    FLinearColor TransmissionTintColor;
}

struct UTextureFormatSettings
{
    TEnumAsByte<TextureCompressionSettings> CompressionSettings;
    uint8 CompressionNoAlpha;
    uint8 CompressionNone;
    uint8 CompressionYCoCg;
    uint8 SRGB;
}

struct UTexturePlatformData
{
}

struct UTextureSource
{
}

struct UTextureSourceBlock
{
    int32 BlockX;
    int32 BlockY;
    int32 SizeX;
    int32 SizeY;
    int32 NumSlices;
    int32 NumMips;
}

struct UTextureLODGroup
{
    TEnumAsByte<TextureGroup> Group;
    int32 LODBias;
    int32 LODBias_Smaller;
    int32 LODBias_Smallest;
    int32 NumStreamedMips;
    TEnumAsByte<TextureMipGenSettings> MipGenSettings;
    int32 MinLODSize;
    int32 MaxLODSize;
    int32 MaxLODSize_Smaller;
    int32 MaxLODSize_Smallest;
    int32 OptionalLODBias;
    int32 OptionalMaxLODSize;
    FName MinMagFilter;
    FName MipFilter;
    ETextureMipLoadOptions MipLoadOptions;
    bool DuplicateNonOptionalMips;
}

struct UStreamingRenderAssetPrimitiveInfo
{
    UStreamableRenderAsset* RenderAsset;
    FBoxSphereBounds Bounds;
    float TexelFactor;
    uint32 PackedRelativeBox;
    uint8 bAllowInvalidTexelFactorWhenUnregistered;
}

struct UTimeline
{
    TEnumAsByte<ETimelineLengthMode> LengthMode;
    uint8 bLooping;
    uint8 bReversePlayback;
    uint8 bPlaying;
    float Length;
    float PlayRate;
    float Position;
    TArray<FTimelineEventEntry> Events;
    TArray<FTimelineVectorTrack> InterpVectors;
    TArray<FTimelineFloatTrack> InterpFloats;
    TArray<FTimelineLinearColorTrack> InterpLinearColors;
    FTimelineTimelinePostUpdateFunc TimelinePostUpdateFunc;
    void OnTimelineEvent();
    FTimelineTimelineFinishedFunc TimelineFinishedFunc;
    void OnTimelineEvent();
    TWeakObjectPtr<UObject> PropertySetObject;
    FName DirectionPropertyName;
}

struct UTimelineLinearColorTrack
{
    UCurveLinearColor* LinearColorCurve;
    FTimelineLinearColorTrackInterpFunc InterpFunc;
    void OnTimelineLinearColor(FLinearColor Output);
    FName TrackName;
    FName LinearColorPropertyName;
}

struct UTimelineFloatTrack
{
    UCurveFloat* FloatCurve;
    FTimelineFloatTrackInterpFunc InterpFunc;
    void OnTimelineFloat(float Output);
    FName TrackName;
    FName FloatPropertyName;
}

struct UTimelineVectorTrack
{
    UCurveVector* VectorCurve;
    FTimelineVectorTrackInterpFunc InterpFunc;
    void OnTimelineVector(FVector Output);
    FName TrackName;
    FName VectorPropertyName;
}

struct UTimelineEventEntry
{
    float Time;
    FTimelineEventEntryEventFunc EventFunc;
    void OnTimelineEvent();
}

struct UTTTrackBase
{
    FName TrackName;
    bool bIsExternalCurve;
}

struct UTTPropertyTrack : FTTTrackBase
{
    FName PropertyName;
}

struct UTTLinearColorTrack : FTTPropertyTrack
{
    UCurveLinearColor* CurveLinearColor;
}

struct UTTVectorTrack : FTTPropertyTrack
{
    UCurveVector* CurveVector;
}

struct UTTFloatTrack : FTTPropertyTrack
{
    UCurveFloat* CurveFloat;
}

struct UTTEventTrack : FTTTrackBase
{
    FName FunctionName;
    UCurveFloat* CurveKeys;
}

struct UTimeStretchCurveInstance
{
    bool bHasValidData;
}

struct UTimeStretchCurve
{
    float SamplingRate;
    float CurveValueMinPrecision;
    TArray<FTimeStretchCurveMarker> Markers;
    float Sum_dT_i_by_C_i;
}

struct UTimeStretchCurveMarker
{
    float Time;
    float alpha;
}

struct UTouchInputControl
{
    UTexture2D* Image1;
    UTexture2D* Image2;
    FVector2D Center;
    FVector2D VisualSize;
    FVector2D ThumbSize;
    FVector2D InteractionSize;
    FVector2D InputScale;
    FKey MainInputKey;
    FKey AltInputKey;
}

struct UHardwareCursorReference
{
    FName CursorPath;
    FVector2D HotSpot;
}

struct UVirtualTextureBuildSettings
{
    int32 TileSize;
    int32 TileBorderSize;
    bool bEnableCompressCrunch;
    bool bEnableCompressZlib;
}

struct UVirtualTextureSpacePoolConfig
{
    int32 MinTileSize;
    int32 MaxTileSize;
    TArray<TEnumAsByte<EPixelFormat>> Formats;
    int32 SizeInMegabyte;
    bool bAllowSizeScale;
}

struct UVoiceSettings
{
    USceneComponent* ComponentToAttachTo;
    USoundAttenuation* AttenuationSettings;
    USoundEffectSourcePresetChain* SourceEffectChain;
}

struct UStreamingLevelsToConsider
{
    TArray<FLevelStreamingWrapper> StreamingLevels;
}

struct ULevelStreamingWrapper
{
    ULevelStreaming* StreamingLevel;
}

struct ULevelCollection
{
    AGameStateBase* GameState;
    UNetDriver* NetDriver;
    UDemoNetDriver* DemoNetDriver;
    ULevel* PersistentLevel;
    TSet<ULevel*> Levels;
}

struct UEndPhysicsTickFunction : FTickFunction
{
}

struct UStartPhysicsTickFunction : FTickFunction
{
}

struct ULevelViewportInfo
{
    FVector CamPosition;
    FRotator CamRotation;
    float CamOrthoZoom;
    bool CamUpdated;
}

struct UWorldPSCPool
{
    TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools;
}

struct UPSCPool
{
    TArray<FPSCPoolElem> FreeElements;
    TArray<UParticleSystemComponent*> InUseComponents_Auto;
    TArray<UParticleSystemComponent*> InUseComponents_Manual;
}

struct UPSCPoolElem
{
    UParticleSystemComponent* PSC;
}

struct UBroadphaseSettings
{
    bool bUseMBPOnClient;
    bool bUseMBPOnServer;
    bool bUseMBPOuterBounds;
    FBox MBPBounds;
    FBox MBPOuterBounds;
    uint32 MBPNumSubdivs;
}

struct UHierarchicalSimplification
{
    float TransitionScreenSize;
    float OverrideDrawDistance;
    uint8 bUseOverrideDrawDistance;
    uint8 bAllowSpecificExclusion;
    uint8 bSimplifyMesh;
    uint8 bOnlyGenerateClustersForVolumes;
    uint8 bReusePreviousLevelClusters;
    FMeshProxySettings ProxySetting;
    FMeshMergingSettings MergeSetting;
    float DesiredBoundRadius;
    float DesiredFillingPercentage;
    int32 MinNumberOfActorsToBuild;
}

struct UNetViewer
{
    UNetConnection* Connection;
    AActor* InViewer;
    AActor* ViewTarget;
    FVector ViewLocation;
    FVector ViewDir;
}

struct ULightmassWorldInfoSettings
{
    float StaticLightingLevelScale;
    int32 NumIndirectLightingBounces;
    int32 NumSkyLightingBounces;
    float IndirectLightingQuality;
    float IndirectLightingSmoothness;
    FColor EnvironmentColor;
    float EnvironmentIntensity;
    float EmissiveBoost;
    float DiffuseBoost;
    TEnumAsByte<EVolumeLightingMethod> VolumeLightingMethod;
    uint8 bUseAmbientOcclusion;
    uint8 bGenerateAmbientOcclusionMaterialMask;
    uint8 bVisualizeMaterialDiffuse;
    uint8 bVisualizeAmbientOcclusion;
    uint8 bCompressLightmaps;
    float VolumetricLightmapDetailCellSize;
    float VolumetricLightmapMaximumBrickMemoryMb;
    float VolumetricLightmapSphericalHarmonicSmoothing;
    float VolumeLightSamplePlacementScale;
    float DirectIlluminationOcclusionFraction;
    float IndirectIlluminationOcclusionFraction;
    float OcclusionExponent;
    float FullyOccludedSamplesFraction;
    float MaxOcclusionDistance;
}

class UDefault__BlueprintGeneratedClass
{
}

class UDefault__AnimBlueprintGeneratedClass
{
}

class UDefault__UserDefinedStruct
{
}

#endif
