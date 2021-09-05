// Class Engine.BlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintFunctionLibrary : UObject {
};

// Class Engine.Player
// Size: 0x48 (Inherited: 0x28)
struct UPlayer : UObject {
	APlayerController* PlayerController; // 0x30(0x08)
	int32_t CurrentNetSpeed; // 0x38(0x04)
	int32_t ConfiguredInternetSpeed; // 0x3c(0x04)
	int32_t ConfiguredLanSpeed; // 0x40(0x04)
};

// Class Engine.NetConnection
// Size: 0x1a30 (Inherited: 0x48)
struct UNetConnection : UPlayer {
	TArray<UChildConnection*> Children; // 0x48(0x10)
	UNetDriver* Driver; // 0x58(0x08)
	UPackageMap* PackageMapClass; // 0x60(0x08)
	UPackageMap* PackageMap; // 0x68(0x08)
	TArray<UChannel*> OpenChannels; // 0x70(0x10)
	TArray<AActor*> SentTemporaries; // 0x80(0x10)
	AActor* ViewTarget; // 0x90(0x08)
	AActor* owningActor; // 0x98(0x08)
	int32_t MaxPacket; // 0xa0(0x04)
	char InternalAck : 1; // 0xa4(0x01)
	FUniqueNetIdRepl PlayerId; // 0x160(0x28)
	double LastReceiveTime; // 0x1d0(0x08)
	TArray<UChannel*> ChannelsToTick; // 0x1510(0x10)
};

// Class Engine.NetDriver
// Size: 0x748 (Inherited: 0x28)
struct UNetDriver : UObject {
	FString NetConnectionClassName; // 0x30(0x10)
	FString ReplicationDriverClassName; // 0x40(0x10)
	int32_t MaxDownloadSize; // 0x50(0x04)
	char bClampListenServerTickRate : 1; // 0x54(0x01)
	int32_t NetServerMaxTickRate; // 0x58(0x04)
	int32_t MaxNetTickRate; // 0x5c(0x04)
	int32_t MaxInternetClientRate; // 0x60(0x04)
	int32_t MaxClientRate; // 0x64(0x04)
	float ServerTravelPause; // 0x68(0x04)
	float SpawnPrioritySeconds; // 0x6c(0x04)
	float RelevantTimeout; // 0x70(0x04)
	float KeepAliveTime; // 0x74(0x04)
	float InitialConnectTimeout; // 0x78(0x04)
	float ConnectionTimeout; // 0x7c(0x04)
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x80(0x04)
	bool bNoTimeouts; // 0x84(0x01)
	bool bNeverApplyNetworkEmulationSettings; // 0x85(0x01)
	UNetConnection* ServerConnection; // 0x88(0x08)
	TArray<UNetConnection*> ClientConnections; // 0x90(0x10)
	int32_t RecentlyDisconnectedTrackingTime; // 0x100(0x04)
	UWorld* World; // 0x140(0x08)
	UPackage* WorldPackage; // 0x148(0x08)
	UObject* NetConnectionClass; // 0x170(0x08)
	UObject* ReplicationDriverClass; // 0x178(0x08)
	FName NetDriverName; // 0x190(0x08)
	TArray<FChannelDefinition> ChannelDefinitions; // 0x198(0x10)
	TMap<FName, FChannelDefinition> ChannelDefinitionMap; // 0x1a8(0x50)
	TArray<UChannel*> ActorChannelPool; // 0x1f8(0x10)
	float Time; // 0x210(0x04)
	UReplicationDriver* ReplicationDriver; // 0x6e8(0x08)
};

// Class Engine.BlueprintAsyncActionBase
// Size: 0x30 (Inherited: 0x28)
struct UBlueprintAsyncActionBase : UObject {

	void Activate();
};

// Class Engine.OnlineBlueprintCallProxyBase
// Size: 0x30 (Inherited: 0x30)
struct UOnlineBlueprintCallProxyBase : UBlueprintAsyncActionBase {
};

// Class Engine.Actor
// Size: 0x220 (Inherited: 0x28)
struct AActor : UObject {
	FActorTickFunction PrimaryActorTick; // 0x28(0x30)
	char bNetTemporary : 1; // 0x58(0x01)
	char bNetStartup : 1; // 0x58(0x01)
	char bOnlyRelevantToOwner : 1; // 0x58(0x01)
	char bAlwaysRelevant : 1; // 0x58(0x01)
	char bReplicateMovement : 1; // 0x58(0x01)
	char bHidden : 1; // 0x58(0x01)
	char bTearOff : 1; // 0x58(0x01)
	char bExchangedRoles : 1; // 0x58(0x01)
	char bNetLoadOnClient : 1; // 0x59(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x59(0x01)
	char bRelevantForNetworkReplays : 1; // 0x59(0x01)
	char bRelevantForLevelBounds : 1; // 0x59(0x01)
	char bReplayRewindable : 1; // 0x59(0x01)
	char bAllowTickBeforeBeginPlay : 1; // 0x59(0x01)
	char bAutoDestroyWhenFinished : 1; // 0x59(0x01)
	char bCanBeDamaged : 1; // 0x59(0x01)
	char bBlockInput : 1; // 0x5a(0x01)
	char bCollideWhenPlacing : 1; // 0x5a(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x5a(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x5a(0x01)
	char bIgnoresOriginShifting : 1; // 0x5a(0x01)
	char bEnableAutoLODGeneration : 1; // 0x5a(0x01)
	char bIsEditorOnlyActor : 1; // 0x5a(0x01)
	char bActorSeamlessTraveled : 1; // 0x5a(0x01)
	char bReplicates : 1; // 0x5b(0x01)
	char bCanBeInCluster : 1; // 0x5b(0x01)
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x5b(0x01)
	char bActorEnableCollision : 1; // 0x5c(0x01)
	char bActorIsBeingDestroyed : 1; // 0x5c(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x5d(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x5e(0x01)
	enum class ENetRole RemoteRole; // 0x5f(0x01)
	FRepMovement ReplicatedMovement; // 0x60(0x34)
	float InitialLifeSpan; // 0x94(0x04)
	float CustomTimeDilation; // 0x98(0x04)
	FRepAttachment AttachmentReplication; // 0xa0(0x40)
	AActor* Owner; // 0xe0(0x08)
	FName NetDriverName; // 0xe8(0x08)
	enum class ENetRole Role; // 0xf0(0x01)
	enum class ENetDormancy NetDormancy; // 0xf1(0x01)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0xf2(0x01)
	enum class EAutoReceiveInput AutoReceiveInput; // 0xf3(0x01)
	int32_t InputPriority; // 0xf4(0x04)
	UInputComponent* InputComponent; // 0xf8(0x08)
	float NetCullDistanceSquared; // 0x100(0x04)
	int32_t NetTag; // 0x104(0x04)
	float NetUpdateFrequency; // 0x108(0x04)
	float MinNetUpdateFrequency; // 0x10c(0x04)
	float NetPriority; // 0x110(0x04)
	APawn* Instigator; // 0x118(0x08)
	TArray<AActor*> Children; // 0x120(0x10)
	USceneComponent* RootComponent; // 0x130(0x08)
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x138(0x10)
	TArray<FName> Layers; // 0x150(0x10)
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x160(0x08)
	TArray<FName> Tags; // 0x170(0x10)
	FMulticastSparseDelegate OnTakeAnyDamage; // 0x180(0x01)
	FMulticastSparseDelegate OnTakePointDamage; // 0x181(0x01)
	FMulticastSparseDelegate OnTakeRadialDamage; // 0x182(0x01)
	FMulticastSparseDelegate OnActorBeginOverlap; // 0x183(0x01)
	FMulticastSparseDelegate OnActorEndOverlap; // 0x184(0x01)
	FMulticastSparseDelegate OnBeginCursorOver; // 0x185(0x01)
	FMulticastSparseDelegate OnEndCursorOver; // 0x186(0x01)
	FMulticastSparseDelegate OnClicked; // 0x187(0x01)
	FMulticastSparseDelegate OnReleased; // 0x188(0x01)
	FMulticastSparseDelegate OnInputTouchBegin; // 0x189(0x01)
	FMulticastSparseDelegate OnInputTouchEnd; // 0x18a(0x01)
	FMulticastSparseDelegate OnInputTouchEnter; // 0x18b(0x01)
	FMulticastSparseDelegate OnInputTouchLeave; // 0x18c(0x01)
	FMulticastSparseDelegate OnActorHit; // 0x18d(0x01)
	FMulticastSparseDelegate OnDestroyed; // 0x18e(0x01)
	FMulticastSparseDelegate OnEndPlay; // 0x18f(0x01)
	TArray<UActorComponent*> InstanceComponents; // 0x1f0(0x10)
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x200(0x10)

	bool WasRecentlyRendered(float Tolerance);
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo(AActor* InParentActor, FName InSocketName);
	void SetTickGroup(enum class ETickingGroup NewTickGroup);
	void SetTickableWhenPaused(bool bTickableWhenPaused);
	void SetReplicates(bool bInReplicates);
	void SetReplicateMovement(bool bInReplicateMovement);
	void SetOwner(AActor* NewOwner);
	void SetNetDormancy(enum class ENetDormancy NewDormancy);
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
	void ReceiveRadialDamage(float DamageReceived, UDamageType* DamageType, FVector Origin, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser);
	void ReceivePointDamage(float Damage, UDamageType* DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, FHitResult HitInfo);
	void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
	void ReceiveActorOnReleased(FKey ButtonReleased);
	void ReceiveActorOnInputTouchLeave(enum class ETouchIndex FingerIndex);
	void ReceiveActorOnInputTouchEnter(enum class ETouchIndex FingerIndex);
	void ReceiveActorOnInputTouchEnd(enum class ETouchIndex FingerIndex);
	void ReceiveActorOnInputTouchBegin(enum class ETouchIndex FingerIndex);
	void ReceiveActorOnClicked(FKey ButtonPressed);
	void ReceiveActorEndOverlap(AActor* OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(AActor* OtherActor);
	void ReceiveActorBeginCursorOver();
	void PrestreamTextures(float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups);
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise(float Loudness, APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, FName Tag);
	UMaterialInstanceDynamic* MakeMIDForMaterial(UMaterialInterface* Parent);
	bool K2_TeleportTo(FVector DestLocation, FRotator DestRotation);
	bool K2_SetActorTransform(FTransform NewTransform, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	bool K2_SetActorRotation(FRotator NewRotation, bool bTeleportPhysics);
	void K2_SetActorRelativeTransform(FTransform NewRelativeTransform, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_SetActorRelativeRotation(FRotator NewRelativeRotation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_SetActorRelativeLocation(FVector NewRelativeLocation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	bool K2_SetActorLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	bool K2_SetActorLocation(FVector NewLocation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_OnReset();
	void K2_OnEndViewTarget(APlayerController* PC);
	void K2_OnBecomeViewTarget(APlayerController* PC);
	USceneComponent* K2_GetRootComponent();
	TArray<UActorComponent*> K2_GetComponentsByClass(UActorComponent* ComponentClass);
	FRotator K2_GetActorRotation();
	FVector K2_GetActorLocation();
	void K2_DetachFromActor(enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule);
	void K2_DestroyComponent(UActorComponent* Component);
	void K2_DestroyActor();
	void K2_AttachToComponent(USceneComponent* Parent, FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void K2_AttachToActor(AActor* ParentActor, FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentToActor(AActor* InParentActor, FName InSocketName, enum class EAttachLocation AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(USceneComponent* InParent, FName InSocketName, enum class EAttachLocation AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AddActorWorldTransform(FTransform DeltaTransform, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddActorWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddActorWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddActorLocalTransform(FTransform NewTransform, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddActorLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddActorLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	bool IsOverlappingActor(AActor* Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasAuthority();
	float GetVerticalDistanceTo(AActor* OtherActor);
	FVector GetVelocity();
	FTransform GetTransform();
	bool GetTickableWhenPaused();
	float GetSquaredDistanceTo(AActor* OtherActor);
	enum class ENetRole GetRemoteRole();
	UChildActorComponent* GetParentComponent();
	AActor* GetParentActor();
	AActor* GetOwner();
	void GetOverlappingComponents(TArray<UPrimitiveComponent*> OverlappingComponents);
	void GetOverlappingActors(TArray<AActor*> OverlappingActors, AActor* ClassFilter);
	enum class ENetRole GetLocalRole();
	float GetLifeSpan();
	AController* GetInstigatorController();
	APawn* GetInstigator();
	FVector GetInputVectorAxisValue(FKey InputAxisKey);
	float GetInputAxisValue(FName InputAxisName);
	float GetInputAxisKeyValue(FKey InputAxisKey);
	float GetHorizontalDotProductTo(AActor* OtherActor);
	float GetHorizontalDistanceTo(AActor* OtherActor);
	float GetGameTimeSinceCreation();
	float GetDotProductTo(AActor* OtherActor);
	float GetDistanceTo(AActor* OtherActor);
	TArray<UActorComponent*> GetComponentsByTag(UActorComponent* ComponentClass, FName Tag);
	TArray<UActorComponent*> GetComponentsByInterface(UInterface* Interface);
	UActorComponent* GetComponentByClass(UActorComponent* ComponentClass);
	FName GetAttachParentSocketName();
	AActor* GetAttachParentActor();
	void GetAttachedActors(TArray<AActor*> OutActors, bool bResetArray);
	void GetAllChildActors(TArray<AActor*> ChildActors, bool bIncludeDescendants);
	FVector GetActorUpVector();
	float GetActorTimeDilation();
	float GetActorTickInterval();
	FVector GetActorScale3D();
	FVector GetActorRightVector();
	FVector GetActorRelativeScale3D();
	FVector GetActorForwardVector();
	void GetActorEyesViewPoint(FVector OutLocation, FRotator OutRotation);
	bool GetActorEnableCollision();
	void GetActorBounds(bool bOnlyCollidingComponents, FVector Origin, FVector BoxExtent, bool bIncludeFromChildActors);
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput(APlayerController* PlayerController);
	void DisableInput(APlayerController* PlayerController);
	void DetachRootComponentFromParent(bool bMaintainWorldPosition);
	void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
	void AddTickPrerequisiteActor(AActor* PrerequisiteActor);
	UActorComponent* AddComponent(FName TemplateName, bool bManualAttachment, FTransform RelativeTransform, UObject* ComponentTemplateContext);
	bool ActorHasTag(FName Tag);
};

// Class Engine.OnlineEngineInterface
// Size: 0x28 (Inherited: 0x28)
struct UOnlineEngineInterface : UObject {
};

// Class Engine.DeveloperSettings
// Size: 0x38 (Inherited: 0x28)
struct UDeveloperSettings : UObject {
};

// Class Engine.OnlineSession
// Size: 0x28 (Inherited: 0x28)
struct UOnlineSession : UObject {
};

// Class Engine.ActorComponent
// Size: 0xb0 (Inherited: 0x28)
struct UActorComponent : UObject {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30(0x30)
	TArray<FName> ComponentTags; // 0x60(0x10)
	TArray<UAssetUserData*> AssetUserData; // 0x70(0x10)
	int32_t UCSSerializationIndex; // 0x84(0x04)
	char pad_7C_0 : 3; // 0x7c(0x01)
	char bNetAddressable : 1; // 0x88(0x01)
	char bReplicates : 1; // 0x88(0x01)
	char pad_7C_5 : 2; // 0x7c(0x01)
	char bAutoActivate : 1; // 0x89(0x01)
	char bIsActive : 1; // 0x8a(0x01)
	char bEditableWhenInherited : 1; // 0x8a(0x01)
	char pad_7D_2 : 1; // 0x7d(0x01)
	char bCanEverAffectNavigation : 1; // 0x8a(0x01)
	char pad_7D_4 : 1; // 0x7d(0x01)
	char bIsEditorOnly : 1; // 0x8a(0x01)
	enum class EComponentCreationMethod CreationMethod; // 0x8c(0x01)
	FMulticastSparseDelegate OnComponentActivated; // 0x8d(0x01)
	FMulticastSparseDelegate OnComponentDeactivated; // 0x8e(0x01)
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0x90(0x10)

	void ToggleActive();
	void SetTickGroup(enum class ETickingGroup NewTickGroup);
	void SetTickableWhenPaused(bool bTickableWhenPaused);
	void SetIsReplicated(bool ShouldReplicate);
	void SetComponentTickInterval(float TickInterval);
	void SetComponentTickEnabled(bool bEnabled);
	void SetAutoActivate(bool bNewAutoActivate);
	void SetActive(bool bNewActive, bool bReset);
	void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
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
};

// Class Engine.SceneComponent
// Size: 0x1f0 (Inherited: 0xb0)
struct USceneComponent : UActorComponent {
	TWeakObjectPtr<APhysicsVolume> PhysicsVolume; // 0xb8(0x08)
	USceneComponent* AttachParent; // 0xc0(0x08)
	FName AttachSocketName; // 0xc8(0x08)
	TArray<USceneComponent*> AttachChildren; // 0xd0(0x10)
	TArray<USceneComponent*> ClientAttachedChildren; // 0xe0(0x10)
	FVector RelativeLocation; // 0x11c(0x0c)
	FRotator RelativeRotation; // 0x128(0x0c)
	FVector RelativeScale3D; // 0x134(0x0c)
	FVector ComponentVelocity; // 0x140(0x0c)
	char bComponentToWorldUpdated : 1; // 0x14c(0x01)
	char pad_118_1 : 1; // 0x118(0x01)
	char bAbsoluteLocation : 1; // 0x14c(0x01)
	char bAbsoluteRotation : 1; // 0x14c(0x01)
	char bAbsoluteScale : 1; // 0x14c(0x01)
	char bVisible : 1; // 0x14c(0x01)
	char bShouldBeAttached : 1; // 0x14c(0x01)
	char bShouldSnapLocationWhenAttached : 1; // 0x14c(0x01)
	char bShouldSnapRotationWhenAttached : 1; // 0x14d(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x14d(0x01)
	char bHiddenInGame : 1; // 0x14d(0x01)
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x14d(0x01)
	char bUseAttachParentBound : 1; // 0x14d(0x01)
	enum class EComponentMobility Mobility; // 0x14f(0x01)
	enum class EDetailMode DetailMode; // 0x150(0x01)
	FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0x151(0x01)

	void ToggleVisibility(bool bPropagateToChildren);
	bool SnapTo(USceneComponent* InParent, FName InSocketName);
	void SetWorldScale3D(FVector NewScale);
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
	void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);
	void SetRelativeScale3D(FVector NewScale3D);
	void SetMobility(enum class EComponentMobility NewMobility);
	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
	void ResetRelativeTransform();
	void OnRep_Visibility(bool OldValue);
	void OnRep_Transform();
	void OnRep_AttachSocketName();
	void OnRep_AttachParent();
	void OnRep_AttachChildren();
	void K2_SetWorldTransform(FTransform NewTransform, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_SetWorldRotation(FRotator NewRotation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_SetWorldLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_SetWorldLocation(FVector NewLocation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_SetRelativeTransform(FTransform NewTransform, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_SetRelativeRotation(FRotator NewRotation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_SetRelativeLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_SetRelativeLocation(FVector NewLocation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	FTransform K2_GetComponentToWorld();
	FVector K2_GetComponentScale();
	FRotator K2_GetComponentRotation();
	FVector K2_GetComponentLocation();
	void K2_DetachFromComponent(enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule, bool bCallModify);
	bool K2_AttachToComponent(USceneComponent* Parent, FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	bool K2_AttachTo(USceneComponent* InParent, FName InSocketName, enum class EAttachLocation AttachType, bool bWeldSimulatedBodies);
	void K2_AddWorldTransform(FTransform DeltaTransform, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddRelativeRotation(FRotator DeltaRotation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddRelativeLocation(FVector DeltaLocation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddLocalTransform(FTransform DeltaTransform, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	void K2_AddLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult SweepHitResult, bool bTeleport);
	bool IsVisible();
	bool IsSimulatingPhysics(FName BoneName);
	bool IsAnySimulatingPhysics();
	FVector GetUpVector();
	FTransform GetSocketTransform(FName InSocketName, enum class ERelativeTransformSpace TransformSpace);
	FRotator GetSocketRotation(FName InSocketName);
	FQuat GetSocketQuaternion(FName InSocketName);
	FVector GetSocketLocation(FName InSocketName);
	bool GetShouldUpdatePhysicsVolume();
	FVector GetRightVector();
	FTransform GetRelativeTransform();
	APhysicsVolume* GetPhysicsVolume();
	void GetParentComponents(TArray<USceneComponent*> Parents);
	int32_t GetNumChildrenComponents();
	FVector GetForwardVector();
	FVector GetComponentVelocity();
	void GetChildrenComponents(bool bIncludeAllDescendants, TArray<USceneComponent*> Children);
	USceneComponent* GetChildComponent(int32_t ChildIndex);
	FName GetAttachSocketName();
	USceneComponent* GetAttachParent();
	TArray<FName> GetAllSocketNames();
	bool DoesSocketExist(FName InSocketName);
	void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
};

// Class Engine.PrimitiveComponent
// Size: 0x3f0 (Inherited: 0x1f0)
struct UPrimitiveComponent : USceneComponent {
	float MinDrawDistance; // 0x1f8(0x04)
	float LDMaxDrawDistance; // 0x1fc(0x04)
	float CachedMaxDrawDistance; // 0x200(0x04)
	enum class ESceneDepthPriorityGroup DepthPriorityGroup; // 0x204(0x01)
	enum class ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x205(0x01)
	enum class EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x206(0x01)
	enum class ELightmapType LightmapType; // 0x207(0x01)
	char bUseMaxLODAsImposter : 1; // 0x208(0x01)
	char bBatchImpostersAsInstances : 1; // 0x208(0x01)
	char bNeverDistanceCull : 1; // 0x208(0x01)
	char pad_200_3 : 4; // 0x200(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x208(0x01)
	char bGenerateOverlapEvents : 1; // 0x209(0x01)
	char bMultiBodyOverlap : 1; // 0x209(0x01)
	char bTraceComplexOnMove : 1; // 0x209(0x01)
	char bReturnMaterialOnMove : 1; // 0x209(0x01)
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x209(0x01)
	char bAllowCullDistanceVolume : 1; // 0x209(0x01)
	char bHasMotionBlurVelocityMeshes : 1; // 0x209(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x209(0x01)
	char bVisibleInRayTracing : 1; // 0x20a(0x01)
	char bRenderInMainPass : 1; // 0x20a(0x01)
	char bRenderInDepthPass : 1; // 0x20a(0x01)
	char bReceivesDecals : 1; // 0x20a(0x01)
	char bOwnerNoSee : 1; // 0x20a(0x01)
	char bOnlyOwnerSee : 1; // 0x20a(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x20a(0x01)
	char bUseAsOccluder : 1; // 0x20a(0x01)
	char bSelectable : 1; // 0x20b(0x01)
	char bForceMipStreaming : 1; // 0x20b(0x01)
	char bHasPerInstanceHitProxies : 1; // 0x20b(0x01)
	char CastShadow : 1; // 0x20b(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x20b(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x20b(0x01)
	char bCastDynamicShadow : 1; // 0x20b(0x01)
	char bCastStaticShadow : 1; // 0x20b(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x20c(0x01)
	char bSelfShadowOnly : 1; // 0x20c(0x01)
	char bCastFarShadow : 1; // 0x20c(0x01)
	char bCastInsetShadow : 1; // 0x20c(0x01)
	char bCastCinematicShadow : 1; // 0x20c(0x01)
	char bCastHiddenShadow : 1; // 0x20c(0x01)
	char bCastShadowAsTwoSided : 1; // 0x20c(0x01)
	char bLightAsIfStatic : 1; // 0x20c(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x20d(0x01)
	char bExcludeFromLightAttachmentGroup : 1; // 0x20d(0x01)
	char bReceiveMobileCSMShadows : 1; // 0x20d(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x20d(0x01)
	char bIgnoreRadialImpulse : 1; // 0x20d(0x01)
	char bIgnoreRadialForce : 1; // 0x20d(0x01)
	char bApplyImpulseOnDamage : 1; // 0x20d(0x01)
	char bReplicatePhysicsToAutonomousProxy : 1; // 0x20d(0x01)
	char bFillCollisionUnderneathForNavmesh : 1; // 0x20e(0x01)
	char AlwaysLoadOnClient : 1; // 0x20e(0x01)
	char AlwaysLoadOnServer : 1; // 0x20e(0x01)
	char bUseEditorCompositing : 1; // 0x20e(0x01)
	char bRenderCustomDepth : 1; // 0x20e(0x01)
	enum class EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x20f(0x01)
	enum class ECanBeCharacterBase CanCharacterStepUpOn; // 0x211(0x01)
	FLightingChannels LightingChannels; // 0x212(0x01)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x213(0x01)
	int32_t CustomDepthStencilValue; // 0x214(0x04)
	FCustomPrimitiveData CustomPrimitiveData; // 0x218(0x10)
	FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x228(0x10)
	int32_t TranslucencySortPriority; // 0x240(0x04)
	int32_t VisibilityId; // 0x244(0x04)
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x248(0x10)
	int8_t VirtualTextureLodBias; // 0x258(0x01)
	int8_t VirtualTextureCullMips; // 0x259(0x01)
	int8_t VirtualTextureMinCoverage; // 0x25a(0x01)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x25b(0x01)
	float LpvBiasMultiplier; // 0x260(0x04)
	float BoundsScale; // 0x26c(0x04)
	TArray<AActor*> MoveIgnoreActors; // 0x280(0x10)
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x290(0x10)
	FBodyInstance BodyInstance; // 0x2b0(0x110)
	FMulticastSparseDelegate OnComponentHit; // 0x3c0(0x01)
	FMulticastSparseDelegate OnComponentBeginOverlap; // 0x3c1(0x01)
	FMulticastSparseDelegate OnComponentEndOverlap; // 0x3c2(0x01)
	FMulticastSparseDelegate OnComponentWake; // 0x3c3(0x01)
	FMulticastSparseDelegate OnComponentSleep; // 0x3c4(0x01)
	FMulticastSparseDelegate OnBeginCursorOver; // 0x3c6(0x01)
	FMulticastSparseDelegate OnEndCursorOver; // 0x3c7(0x01)
	FMulticastSparseDelegate OnClicked; // 0x3c8(0x01)
	FMulticastSparseDelegate OnReleased; // 0x3c9(0x01)
	FMulticastSparseDelegate OnInputTouchBegin; // 0x3ca(0x01)
	FMulticastSparseDelegate OnInputTouchEnd; // 0x3cb(0x01)
	FMulticastSparseDelegate OnInputTouchEnter; // 0x3cc(0x01)
	FMulticastSparseDelegate OnInputTouchLeave; // 0x3cd(0x01)
	UPrimitiveComponent* LODParentPrimitive; // 0x3e8(0x08)

	bool WasRecentlyRendered(float Tolerance);
	void WakeRigidBody(FName BoneName);
	void WakeAllRigidBodies();
	void SetWalkableSlopeOverride(FWalkableSlopeOverride NewOverride);
	void SetUseCCD(bool InUseCCD, FName BoneName);
	void SetTranslucentSortPriority(int32_t NewTranslucentSortPriority);
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
	void SetMaterial(int32_t ElementIndex, UMaterialInterface* Material);
	void SetMassScale(FName BoneName, float InMassScale);
	void SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass);
	void SetLinearDamping(float InDamping);
	void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
	void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup);
	void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
	void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup);
	void SetEnableGravity(bool bGravityEnabled);
	void SetCustomPrimitiveDataVector4(int32_t DataIndex, FVector4 Value);
	void SetCustomPrimitiveDataVector3(int32_t DataIndex, FVector Value);
	void SetCustomPrimitiveDataVector2(int32_t DataIndex, FVector2D Value);
	void SetCustomPrimitiveDataFloat(int32_t DataIndex, float Value);
	void SetCustomDepthStencilWriteMask(enum class ERendererStencilMask WriteMaskBit);
	void SetCustomDepthStencilValue(int32_t Value);
	void SetCullDistance(float NewCullDistance);
	void SetConstraintMode(enum class EDOFMode ConstraintMode);
	void SetCollisionResponseToChannel(enum class ECollisionChannel Channel, enum class ECollisionResponse NewResponse);
	void SetCollisionResponseToAllChannels(enum class ECollisionResponse NewResponse);
	void SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps);
	void SetCollisionObjectType(enum class ECollisionChannel Channel);
	void SetCollisionEnabled(enum class ECollisionEnabled NewType);
	void SetCenterOfMass(FVector CenterOfMassOffset, FName BoneName);
	void SetCastShadow(bool NewCastShadow);
	void SetCastInsetShadow(bool bInCastInsetShadow);
	void SetBoundsScale(float NewBoundsScale);
	void SetAngularDamping(float InDamping);
	void SetAllUseCCD(bool InUseCCD);
	void SetAllPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent);
	void SetAllPhysicsAngularVelocityInRadians(FVector NewAngVel, bool bAddToCurrent);
	void SetAllPhysicsAngularVelocityInDegrees(FVector NewAngVel, bool bAddToCurrent);
	void SetAllMassScale(float InMassScale);
	FVector ScaleByMomentOfInertia(FVector InputVector, FName BoneName);
	void PutRigidBodyToSleep(FName BoneName);
	bool K2_SphereTraceComponent(FVector TraceStart, FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector HitLocation, FVector HitNormal, FName BoneName, FHitResult OutHit);
	bool K2_SphereOverlapComponent(FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector HitLocation, FVector HitNormal, FName BoneName, FHitResult OutHit);
	bool K2_LineTraceComponent(FVector TraceStart, FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector HitLocation, FVector HitNormal, FName BoneName, FHitResult OutHit);
	bool K2_IsQueryCollisionEnabled();
	bool K2_IsPhysicsCollisionEnabled();
	bool K2_IsCollisionEnabled();
	bool K2_BoxOverlapComponent(FVector InBoxCentre, FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector HitLocation, FVector HitNormal, FName BoneName, FHitResult OutHit);
	bool IsOverlappingComponent(UPrimitiveComponent* OtherComp);
	bool IsOverlappingActor(AActor* Other);
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
	void GetOverlappingComponents(TArray<UPrimitiveComponent*> OutOverlappingComponents);
	void GetOverlappingActors(TArray<AActor*> OverlappingActors, AActor* ClassFilter);
	int32_t GetNumMaterials();
	UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t SectionIndex);
	UMaterialInterface* GetMaterial(int32_t ElementIndex);
	float GetMassScale(FName BoneName);
	float GetMass();
	float GetLinearDamping();
	FVector GetInertiaTensor(FName BoneName);
	bool GetGenerateOverlapEvents();
	enum class ECollisionResponse GetCollisionResponseToChannel(enum class ECollisionChannel Channel);
	FName GetCollisionProfileName();
	enum class ECollisionChannel GetCollisionObjectType();
	enum class ECollisionEnabled GetCollisionEnabled();
	float GetClosestPointOnCollision(FVector Point, FVector OutPointOnBody, FName BoneName);
	FVector GetCenterOfMass(FName BoneName);
	float GetAngularDamping();
	UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32_t ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName);
	UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, UMaterialInterface* Parent);
	UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex);
	TArray<UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
	TArray<AActor*> CopyArrayOfMoveIgnoreActors();
	void ClearMoveIgnoreComponents();
	void ClearMoveIgnoreActors();
	bool CanCharacterStepUp(APawn* Pawn);
	void AddTorqueInRadians(FVector Torque, FName BoneName, bool bAccelChange);
	void AddTorqueInDegrees(FVector Torque, FName BoneName, bool bAccelChange);
	void AddTorque(FVector Torque, FName BoneName, bool bAccelChange);
	void AddRadialImpulse(FVector Origin, float Radius, float Strength, enum class ERadialImpulseFalloff Falloff, bool bVelChange);
	void AddRadialForce(FVector Origin, float Radius, float Strength, enum class ERadialImpulseFalloff Falloff, bool bAccelChange);
	void AddImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName);
	void AddImpulse(FVector Impulse, FName BoneName, bool bVelChange);
	void AddForceAtLocationLocal(FVector force, FVector Location, FName BoneName);
	void AddForceAtLocation(FVector force, FVector Location, FName BoneName);
	void AddForce(FVector force, FName BoneName, bool bAccelChange);
	void AddAngularImpulseInRadians(FVector Impulse, FName BoneName, bool bVelChange);
	void AddAngularImpulseInDegrees(FVector Impulse, FName BoneName, bool bVelChange);
	void AddAngularImpulse(FVector Impulse, FName BoneName, bool bVelChange);
};

// Class Engine.MeshComponent
// Size: 0x420 (Inherited: 0x3f0)
struct UMeshComponent : UPrimitiveComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x3f0(0x10)
	char bEnableMaterialParameterCaching : 1; // 0x410(0x01)

	void SetVectorParameterValueOnMaterials(FName ParameterName, FVector ParameterValue);
	void SetScalarParameterValueOnMaterials(FName ParameterName, float ParameterValue);
	void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups);
	bool IsMaterialSlotNameValid(FName MaterialSlotName);
	TArray<FName> GetMaterialSlotNames();
	TArray<UMaterialInterface*> GetMaterials();
	int32_t GetMaterialIndex(FName MaterialSlotName);
};

// Class Engine.SkinnedMeshComponent
// Size: 0x630 (Inherited: 0x420)
struct USkinnedMeshComponent : UMeshComponent {
	USkeletalMesh* SkeletalMesh; // 0x418(0x08)
	TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent; // 0x420(0x08)
	TArray<enum class ESkinCacheUsage> SkinCacheUsage; // 0x428(0x10)
	UPhysicsAsset* PhysicsAssetOverride; // 0x530(0x08)
	int32_t ForcedLodModel; // 0x538(0x04)
	int32_t MinLodModel; // 0x53c(0x04)
	float StreamingDistanceMultiplier; // 0x548(0x04)
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x558(0x10)
	enum class EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x58c(0x01)
	char pad_465_0 : 2; // 0x465(0x01)
	char bOverrideMinLod : 1; // 0x58e(0x01)
	char bUseBoundsFromMasterPoseComponent : 1; // 0x58e(0x01)
	char bForceWireframe : 1; // 0x58e(0x01)
	char bDisplayBones : 1; // 0x58e(0x01)
	char bDisableMorphTarget : 1; // 0x58e(0x01)
	char bHideSkin : 1; // 0x58e(0x01)
	char bPerBoneMotionBlur : 1; // 0x58f(0x01)
	char bComponentUseFixedSkelBounds : 1; // 0x58f(0x01)
	char bConsiderAllBodiesForBounds : 1; // 0x58f(0x01)
	char bSyncAttachParentLOD : 1; // 0x58f(0x01)
	char bCanHighlightSelectedSections : 1; // 0x58f(0x01)
	char bRecentlyRendered : 1; // 0x58f(0x01)
	char bCastCapsuleDirectShadow : 1; // 0x58f(0x01)
	char bCastCapsuleIndirectShadow : 1; // 0x58f(0x01)
	char bCPUSkinning : 1; // 0x590(0x01)
	char bEnableUpdateRateOptimizations : 1; // 0x590(0x01)
	char bDisplayDebugUpdateRateOptimizations : 1; // 0x590(0x01)
	char bRenderStatic : 1; // 0x590(0x01)
	char bIgnoreMasterPoseComponentLOD : 1; // 0x590(0x01)
	char pad_467_5 : 2; // 0x467(0x01)
	char bCachedLocalBoundsUpToDate : 1; // 0x590(0x01)
	char pad_468_0 : 1; // 0x468(0x01)
	char bForceMeshObjectUpdate : 1; // 0x591(0x01)
	float CapsuleIndirectShadowMinVisibility; // 0x594(0x04)
	FBoxSphereBounds CachedWorldSpaceBounds; // 0x5a8(0x1c)
	FMatrix CachedWorldToLocalTransform; // 0x5d0(0x40)

	void UnloadSkinWeightProfile(FName InProfileName);
	void UnHideBoneByName(FName BoneName);
	void TransformToBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector OutPosition, FRotator OutRotation);
	void TransformFromBoneSpace(FName BoneName, FVector InPosition, FRotator InRotation, FVector OutPosition, FRotator OutRotation);
	void ShowMaterialSection(int32_t MaterialID, int32_t SectionIndex, bool bShow, int32_t LODIndex);
	void ShowAllMaterialSections(int32_t LODIndex);
	void SetVertexColorOverride_LinearColor(int32_t LODIndex, TArray<FLinearColor> VertexColors);
	bool SetSkinWeightProfile(FName InProfileName);
	void SetSkinWeightOverride(int32_t LODIndex, TArray<FSkelMeshSkinWeightInfo> SkinWeights);
	void SetSkeletalMesh(USkeletalMesh* NewMesh, bool bReinitPose);
	void SetRenderStatic(bool bNewValue);
	void SetPhysicsAsset(UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
	void SetMinLOD(int32_t InNewMinLOD);
	void SetMasterPoseComponent(USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);
	void SetForcedLOD(int32_t InNewForcedLOD);
	void SetCastCapsuleIndirectShadow(bool bNewValue);
	void SetCastCapsuleDirectShadow(bool bNewValue);
	void SetCapsuleIndirectShadowMinVisibility(float NewValue);
	bool IsUsingSkinWeightProfile();
	bool IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex);
	bool IsBoneHiddenByName(FName BoneName);
	void HideBoneByName(FName BoneName, enum class EPhysBodyOp PhysBodyOption);
	bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(FName BoneName, float OutTwistAngle, float OutSwingAngle);
	FName GetSocketBoneName(FName InSocketName);
	FVector GetRefPosePosition(int32_t BoneIndex);
	FName GetParentBone(FName BoneName);
	int32_t GetNumLODs();
	int32_t GetNumBones();
	int32_t GetForcedLOD();
	FTransform GetDeltaTransformFromRefPose(FName BoneName, FName BaseName);
	FName GetCurrentSkinWeightProfileName();
	FName GetBoneName(int32_t BoneIndex);
	int32_t GetBoneIndex(FName BoneName);
	FName FindClosestBone_K2(FVector TestLocation, FVector BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset);
	void ClearVertexColorOverride(int32_t LODIndex);
	void ClearSkinWeightProfile();
	void ClearSkinWeightOverride(int32_t LODIndex);
	bool BoneIsChildOf(FName BoneName, FName ParentBoneName);
};

// Class Engine.StreamableRenderAsset
// Size: 0x40 (Inherited: 0x28)
struct UStreamableRenderAsset : UObject {
	double ForceMipLevelsToBeResidentTimestamp; // 0x28(0x08)
	int32_t NumCinematicMipLevels; // 0x30(0x04)
	int32_t StreamingIndex; // 0x34(0x04)
	int32_t CachedCombinedLODBias; // 0x38(0x04)
	char CachedNumResidentLODs; // 0x3c(0x01)
	char bCachedReadyForStreaming : 1; // 0x3d(0x01)
	char NeverStream : 1; // 0x3d(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0x3d(0x01)
	char bIsStreamable : 1; // 0x3d(0x01)
	char bHasStreamingUpdatePending : 1; // 0x3d(0x01)
	char bForceMiplevelsToBeResident : 1; // 0x3d(0x01)
	char bIgnoreStreamingMipBias : 1; // 0x3d(0x01)
	char bUseCinematicMipLevels : 1; // 0x3d(0x01)
};

// Class Engine.SkeletalMesh
// Size: 0x388 (Inherited: 0x40)
struct USkeletalMesh : UStreamableRenderAsset {
	USkeleton* Skeleton; // 0x60(0x08)
	FBoxSphereBounds ImportedBounds; // 0x68(0x1c)
	FBoxSphereBounds ExtendedBounds; // 0x84(0x1c)
	FVector PositiveBoundsExtension; // 0xa0(0x0c)
	FVector NegativeBoundsExtension; // 0xac(0x0c)
	TArray<FSkeletalMaterial> Materials; // 0xb8(0x10)
	TArray<FBoneMirrorInfo> SkelMirrorTable; // 0xc8(0x10)
	TArray<FSkeletalMeshLODInfo> LODInfo; // 0xd8(0x10)
	FPerPlatformInt MinLOD; // 0x138(0x04)
	FPerPlatformBool DisableBelowMinLodStripping; // 0x13c(0x01)
	enum class EAxis SkelMirrorAxis; // 0x13d(0x01)
	enum class EAxis SkelMirrorFlipAxis; // 0x13e(0x01)
	char bUseFullPrecisionUVs : 1; // 0x13f(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x13f(0x01)
	char bHasBeenSimplified : 1; // 0x13f(0x01)
	char bHasVertexColors : 1; // 0x13f(0x01)
	char pad_CF_4 : 1; // 0xcf(0x01)
	char bEnablePerPolyCollision : 1; // 0x13f(0x01)
	UBodySetup* BodySetup; // 0x140(0x08)
	UPhysicsAsset* PhysicsAsset; // 0x148(0x08)
	UPhysicsAsset* ShadowPhysicsAsset; // 0x150(0x08)
	TArray<UNodeMappingContainer*> NodeMappingData; // 0x158(0x10)
	char bSupportRayTracing : 1; // 0x168(0x01)
	TArray<UMorphTarget*> MorphTargets; // 0x170(0x10)
	UAnimInstance* PostProcessAnimBlueprint; // 0x2f8(0x08)
	TArray<UClothingAssetBase*> MeshClothingAssets; // 0x300(0x10)
	FSkeletalMeshSamplingInfo SamplingInfo; // 0x310(0x30)
	TArray<UAssetUserData*> AssetUserData; // 0x340(0x10)
	TArray<USkeletalMeshSocket*> Sockets; // 0x358(0x10)
	TArray<FSkinWeightProfileInfo> SkinWeightProfiles; // 0x378(0x10)

	void SetLODSettings(USkeletalMeshLODSettings* InLODSettings);
	int32_t NumSockets();
	TArray<FString> K2_GetAllMorphTargetNames();
	bool IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections);
	USkeletalMeshSocket* GetSocketByIndex(int32_t Index);
	UNodeMappingContainer* GetNodeMappingContainer(UBlueprint* SourceAsset);
	FBoxSphereBounds GetImportedBounds();
	FBoxSphereBounds GetBounds();
	USkeletalMeshSocket* FindSocketInfo(FName InSocketName, FTransform OutTransform, int32_t outBoneIndex, int32_t OutIndex);
	USkeletalMeshSocket* FindSocketAndIndex(FName InSocketName, int32_t OutIndex);
	USkeletalMeshSocket* FindSocket(FName InSocketName);
};

// Class Engine.SoundEffectPreset
// Size: 0x40 (Inherited: 0x28)
struct USoundEffectPreset : UObject {
};

// Class Engine.SoundEffectSourcePreset
// Size: 0x40 (Inherited: 0x40)
struct USoundEffectSourcePreset : USoundEffectPreset {
};

// Class Engine.SoundEffectSubmixPreset
// Size: 0x40 (Inherited: 0x40)
struct USoundEffectSubmixPreset : USoundEffectPreset {
};

// Class Engine.FXSystemComponent
// Size: 0x3f0 (Inherited: 0x3f0)
struct UFXSystemComponent : UPrimitiveComponent {

	void SetVectorParameter(FName ParameterName, FVector Param);
	void SetUseAutoManageAttachment(bool bAutoManage);
	void SetFloatParameter(FName ParameterName, float Param);
	void SetEmitterEnable(FName EmitterName, bool bNewEnableState);
	void SetColorParameter(FName ParameterName, FLinearColor Param);
	void SetBoolParameter(FName ParameterName, bool Param);
	void SetAutoAttachmentParameters(USceneComponent* Parent, FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule);
	void SetActorParameter(FName ParameterName, AActor* Param);
	void ReleaseToPool();
	UFXSystemAsset* GetFXSystemAsset();
};

// Class Engine.FXSystemAsset
// Size: 0x30 (Inherited: 0x28)
struct UFXSystemAsset : UObject {
	uint32_t MaxPoolSize; // 0x28(0x04)
};

// Class Engine.AnimNotify
// Size: 0x38 (Inherited: 0x28)
struct UAnimNotify : UObject {

	bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
	FString GetNotifyName();
};

// Class Engine.AnimNotifyState
// Size: 0x30 (Inherited: 0x28)
struct UAnimNotifyState : UObject {

	bool Received_NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime);
	bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);
	FString GetNotifyName();
};

// Class Engine.BlueprintCore
// Size: 0x50 (Inherited: 0x28)
struct UBlueprintCore : UObject {
	UObject* SkeletonGeneratedClass; // 0x28(0x08)
	UObject* GeneratedClass; // 0x30(0x08)
	bool bLegacyNeedToPurgeSkelRefs; // 0x38(0x01)
	FGuid BlueprintGuid; // 0x3c(0x10)
};

// Class Engine.Blueprint
// Size: 0xa0 (Inherited: 0x50)
struct UBlueprint : UBlueprintCore {
	UObject* ParentClass; // 0x50(0x08)
	enum class EBlueprintType BlueprintType; // 0x58(0x01)
	char bRecompileOnLoad : 1; // 0x59(0x01)
	char bHasBeenRegenerated : 1; // 0x59(0x01)
	char bIsRegeneratingOnLoad : 1; // 0x59(0x01)
	int32_t BlueprintSystemVersion; // 0x5c(0x04)
	USimpleConstructionScript* SimpleConstructionScript; // 0x60(0x08)
	TArray<UActorComponent*> ComponentTemplates; // 0x68(0x10)
	TArray<UTimelineTemplate*> Timelines; // 0x78(0x10)
	TArray<FBPComponentClassOverride> ComponentClassOverrides; // 0x88(0x10)
	UInheritableComponentHandler* InheritableComponentHandler; // 0x98(0x08)
};

// Class Engine.BlueprintGeneratedClass
// Size: 0x328 (Inherited: 0x230)
struct UBlueprintGeneratedClass : UClass {
	int32_t NumReplicatedProperties; // 0x230(0x04)
	char bHasNativizedParent : 1; // 0x234(0x01)
	char bHasCookedComponentInstancingData : 1; // 0x234(0x01)
	TArray<UDynamicBlueprintBinding*> DynamicBindingObjects; // 0x238(0x10)
	TArray<UActorComponent*> ComponentTemplates; // 0x248(0x10)
	TArray<UTimelineTemplate*> Timelines; // 0x258(0x10)
	TArray<FBPComponentClassOverride> ComponentClassOverrides; // 0x268(0x10)
	USimpleConstructionScript* SimpleConstructionScript; // 0x278(0x08)
	UInheritableComponentHandler* InheritableComponentHandler; // 0x280(0x08)
	UStructProperty* UberGraphFramePointerProperty; // 0x288(0x08)
	UFunction* UberGraphFunction; // 0x298(0x08)
	TMap<FName, FBlueprintCookedComponentInstancingData> CookedComponentInstancingData; // 0x2a0(0x50)
};

// Class Engine.Subsystem
// Size: 0x30 (Inherited: 0x28)
struct USubsystem : UObject {
};

// Class Engine.DynamicSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UDynamicSubsystem : USubsystem {
};

// Class Engine.EngineSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UEngineSubsystem : UDynamicSubsystem {
};

// Class Engine.SkeletalMeshComponent
// Size: 0xac0 (Inherited: 0x630)
struct USkeletalMeshComponent : USkinnedMeshComponent {
	UObject* AnimBlueprintGeneratedClass; // 0x630(0x08)
	UAnimInstance* AnimClass; // 0x638(0x08)
	UAnimInstance* AnimScriptInstance; // 0x640(0x08)
	UAnimInstance* PostProcessAnimInstance; // 0x648(0x08)
	FSingleAnimationPlayData AnimationData; // 0x650(0x18)
	FVector RootBoneTranslation; // 0x678(0x0c)
	FVector LineCheckBoundsScale; // 0x684(0x0c)
	TArray<UAnimInstance*> LinkedInstances; // 0x6b0(0x10)
	TArray<FTransform> CachedBoneSpaceTransforms; // 0x6c0(0x10)
	TArray<FTransform> CachedComponentSpaceTransforms; // 0x6d0(0x10)
	float GlobalAnimRateScale; // 0x700(0x04)
	enum class EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0x704(0x01)
	enum class EPhysicsTransformUpdateMode PhysicsTransformUpdateMode; // 0x705(0x01)
	enum class EAnimationMode AnimationMode; // 0x707(0x01)
	char bDisablePostProcessBlueprint : 1; // 0x709(0x01)
	char pad_6B7_1 : 1; // 0x6b7(0x01)
	char bUpdateOverlapsOnAnimationFinalize : 1; // 0x709(0x01)
	char pad_6B7_3 : 1; // 0x6b7(0x01)
	char bHasValidBodies : 1; // 0x709(0x01)
	char pad_6B7_5 : 1; // 0x6b7(0x01)
	char bBlendPhysics : 1; // 0x709(0x01)
	char bEnablePhysicsOnDedicatedServer : 1; // 0x709(0x01)
	char bUpdateJointsFromAnimation : 1; // 0x70a(0x01)
	char bDisableClothSimulation : 1; // 0x70a(0x01)
	char bDisableRigidBodyAnimNode : 1; // 0x70a(0x01)
	char bAllowAnimCurveEvaluation : 1; // 0x70a(0x01)
	char bDisableAnimCurves : 1; // 0x70a(0x01)
	char bCollideWithEnvironment : 1; // 0x70b(0x01)
	char bCollideWithAttachedChildren : 1; // 0x70b(0x01)
	char bLocalSpaceSimulation : 1; // 0x70b(0x01)
	char pad_6B9_0 : 3; // 0x6b9(0x01)
	char bResetAfterTeleport : 1; // 0x70b(0x01)
	char pad_6B9_4 : 1; // 0x6b9(0x01)
	char bDeferKinematicBoneUpdate : 1; // 0x70b(0x01)
	char bNoSkeletonUpdate : 1; // 0x70b(0x01)
	char bPauseAnims : 1; // 0x70b(0x01)
	char bUseRefPoseOnInitAnim : 1; // 0x70c(0x01)
	char bEnablePerPolyCollision : 1; // 0x70c(0x01)
	char bForceRefpose : 1; // 0x70c(0x01)
	char bOnlyAllowAutonomousTickPose : 1; // 0x70c(0x01)
	char bIsAutonomousTickPose : 1; // 0x70c(0x01)
	char bOldForceRefPose : 1; // 0x70c(0x01)
	char bShowPrePhysBones : 1; // 0x70c(0x01)
	char bRequiredBonesUpToDate : 1; // 0x70c(0x01)
	char bAnimTreeInitialised : 1; // 0x70d(0x01)
	char bIncludeComponentLocationIntoBounds : 1; // 0x70d(0x01)
	char bEnableLineCheckWithBounds : 1; // 0x70d(0x01)
	char bUseBendingElements : 1; // 0x70d(0x01)
	char bUseTetrahedralConstraints : 1; // 0x70d(0x01)
	char bUseThinShellVolumeConstraints : 1; // 0x70d(0x01)
	char bUseSelfCollisions : 1; // 0x70d(0x01)
	char bUseContinuousCollisionDetection : 1; // 0x70d(0x01)
	char bPropagateCurvesToSlaves : 1; // 0x70e(0x01)
	char bSkipKinematicUpdateWhenInterpolating : 1; // 0x70e(0x01)
	char bSkipBoundsUpdateWhenInterpolating : 1; // 0x70e(0x01)
	char pad_6BC_3 : 1; // 0x6bc(0x01)
	char bNeedsQueuedAnimEventsDispatched : 1; // 0x70e(0x01)
	uint16_t CachedAnimCurveUidVersion; // 0x710(0x02)
	enum class EClothMassMode MassMode; // 0x712(0x01)
	float UniformMass; // 0x714(0x04)
	float TotalMass; // 0x718(0x04)
	float Density; // 0x71c(0x04)
	float MinPerParticleMass; // 0x720(0x04)
	float ClothBlendWeight; // 0x724(0x04)
	float EdgeStiffness; // 0x728(0x04)
	float BendingStiffness; // 0x72c(0x04)
	float AreaStiffness; // 0x730(0x04)
	float VolumeStiffness; // 0x734(0x04)
	float StrainLimitingStiffness; // 0x738(0x04)
	float ShapeTargetStiffness; // 0x73c(0x04)
	TArray<FName> DisallowedAnimCurves; // 0x740(0x10)
	UBodySetup* BodySetup; // 0x750(0x08)
	FMulticastInlineDelegate OnConstraintBroken; // 0x760(0x10)
	UClothingSimulationFactory* ClothingSimulationFactory; // 0x770(0x08)
	float TeleportDistanceThreshold; // 0x848(0x04)
	float TeleportRotationThreshold; // 0x84c(0x04)
	uint32_t LastPoseTickFrame; // 0x858(0x04)
	UClothingSimulationInteractor* ClothingInteractor; // 0x8b0(0x08)
	FMulticastInlineDelegate OnAnimInitialized; // 0x980(0x10)

	void UnlinkAnimClassLayers(UAnimInstance* InClass);
	void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
	void ToggleDisablePostProcessBlueprint();
	void TermBodiesBelow(FName ParentBoneName);
	void SuspendClothingSimulation();
	void Stop();
	void SnapshotPose(FPoseSnapshot Snapshot);
	void SetUpdateAnimationInEditor(bool NewUpdateState);
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
	void SetAnimClass(UObject* NewClass);
	void SetAnimationMode(enum class EAnimationMode InAnimationMode);
	void SetAnimation(UAnimationAsset* NewAnimToPlay);
	void SetAngularLimits(FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
	void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim);
	void SetAllowedAnimCurvesEvaluation(TArray<FName> List, bool bAllow);
	void SetAllowAnimCurveEvaluation(bool bInAllow);
	void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
	void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
	void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
	void SetAllBodiesSimulatePhysics(bool bNewSimulate);
	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
	void SetAllBodiesBelowSimulatePhysics(FName InBoneName, bool bNewSimulate, bool bIncludeSelf);
	void SetAllBodiesBelowPhysicsBlendWeight(FName InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
	void ResumeClothingSimulation();
	void ResetClothTeleportMode();
	void ResetAnimInstanceDynamics(enum class ETeleportType InTeleportType);
	void ResetAllowedAnimCurveEvaluation();
	void ResetAllBodiesSimulatePhysics();
	void PlayAnimation(UAnimationAsset* NewAnimToPlay, bool bLooping);
	void Play(bool bLooping);
	void OverrideAnimationData(UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);
	void LinkAnimGraphByTag(FName InTag, UAnimInstance* InClass);
	void LinkAnimClassLayers(UAnimInstance* InClass);
	bool K2_GetClosestPointOnPhysicsAsset(FVector WorldPosition, FVector ClosestWorldPosition, FVector Normal, FName BoneName, float Distance);
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
	UAnimInstance* GetLinkedAnimLayerInstanceByClass(UAnimInstance* InClass);
	void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*> OutLinkedInstances);
	UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag);
	bool GetDisablePostProcessBlueprint();
	bool GetDisableAnimCurves();
	void GetCurrentJointAngles(FName InBoneName, float Swing1Angle, float TwistAngle, float Swing2Angle);
	float GetClothMaxDistanceScale();
	UClothingSimulationInteractor* GetClothingSimulationInteractor();
	float GetBoneMass(FName BoneName, bool bScaleMass);
	UAnimInstance* GetAnimInstance();
	UObject* GetAnimClass();
	enum class EAnimationMode GetAnimationMode();
	bool GetAllowRigidBodyAnimNode();
	bool GetAllowedAnimCurveEvaluate();
	void ForceClothNextUpdateTeleportAndReset();
	void ForceClothNextUpdateTeleport();
	FName FindConstraintBoneName(int32_t ConstraintIndex);
	void ClearMorphTargets();
	void BreakConstraint(FVector Impulse, FVector HitLocation, FName InBoneName);
	void BindClothToMasterPoseComponent();
	void AllowAnimCurveEvaluation(FName NameOfCurve, bool bAllow);
	void AddImpulseToAllBodiesBelow(FVector Impulse, FName BoneName, bool bVelChange, bool bIncludeSelf);
	void AddForceToAllBodiesBelow(FVector force, FName BoneName, bool bAccelChange, bool bIncludeSelf);
	void AccumulateAllBodiesBelowPhysicsBlendWeight(FName InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);
};

// Class Engine.AnimInstance
// Size: 0x270 (Inherited: 0x28)
struct UAnimInstance : UObject {
	USkeleton* CurrentSkeleton; // 0x28(0x08)
	enum class ERootMotionMode RootMotionMode; // 0x30(0x01)
	char bUseMultiThreadedAnimationUpdate : 1; // 0x31(0x01)
	char bUsingCopyPoseFromMesh : 1; // 0x31(0x01)
	char pad_31_2 : 2; // 0x31(0x01)
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x31(0x01)
	char bPropagateNotifiesToLinkedInstances : 1; // 0x31(0x01)
	char bQueueMontageEvents : 1; // 0x31(0x01)
	FMulticastInlineDelegate OnMontageBlendingOut; // 0x38(0x10)
	FMulticastInlineDelegate OnMontageStarted; // 0x48(0x10)
	FMulticastInlineDelegate OnMontageEnded; // 0x58(0x10)
	FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x68(0x10)
	FAnimNotifyQueue NotifyQueue; // 0x100(0x70)
	TArray<FAnimNotifyEvent> ActiveAnimNotifyState; // 0x170(0x10)

	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
	void UnlinkAnimClassLayers(UAnimInstance* InClass);
	APawn* TryGetPawnOwner();
	void StopSlotAnimation(float InBlendOutTime, FName SlotNodeName);
	void SnapshotPose(FPoseSnapshot Snapshot);
	void SetRootMotionMode(enum class ERootMotionMode Value);
	void SetReceiveNotifiesFromLinkedInstances(bool bSet);
	void SetPropagateNotifiesToLinkedInstances(bool bSet);
	void SetMorphTarget(FName MorphTargetName, float Value);
	void SavePoseSnapshot(FName SnapshotName);
	void ResetDynamics(enum class ETeleportType InTeleportType);
	UAnimMontage* PlaySlotAnimationAsDynamicMontage(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
	float PlaySlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount);
	void Montage_StopGroupByName(float InBlendOutTime, FName GroupName);
	void Montage_Stop(float InBlendOutTime, UAnimMontage* Montage);
	void Montage_SetPosition(UAnimMontage* Montage, float NewPosition);
	void Montage_SetPlayRate(UAnimMontage* Montage, float NewPlayRate);
	void Montage_SetNextSection(FName SectionNameToChange, FName NextSection, UAnimMontage* Montage);
	void Montage_Resume(UAnimMontage* Montage);
	float Montage_Play(UAnimMontage* MontageToPlay, float InPlayRate, enum class EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
	void Montage_Pause(UAnimMontage* Montage);
	void Montage_JumpToSectionsEnd(FName SectionName, UAnimMontage* Montage);
	void Montage_JumpToSection(FName SectionName, UAnimMontage* Montage);
	bool Montage_IsPlaying(UAnimMontage* Montage);
	bool Montage_IsActive(UAnimMontage* Montage);
	float Montage_GetPosition(UAnimMontage* Montage);
	float Montage_GetPlayRate(UAnimMontage* Montage);
	bool Montage_GetIsStopped(UAnimMontage* Montage);
	FName Montage_GetCurrentSection(UAnimMontage* Montage);
	float Montage_GetBlendTime(UAnimMontage* Montage);
	void LockAIResources(bool bLockMovement, bool LockAILogic);
	void LinkAnimGraphByTag(FName InTag, UAnimInstance* InClass);
	void LinkAnimClassLayers(UAnimInstance* InClass);
	bool IsSyncGroupBetweenMarkers(FName InSyncGroupName, FName PreviousMarker, FName NextMarker, bool bRespectMarkerOrder);
	bool IsPlayingSlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName);
	bool IsAnyMontagePlaying();
	bool HasMarkerBeenHitThisFrame(FName SyncGroup, FName MarkerName);
	bool GetTimeToClosestMarker(FName SyncGroup, FName MarkerName, float OutMarkerTime);
	FMarkerSyncAnimPosition GetSyncGroupPosition(FName InSyncGroupName);
	float GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex);
	float GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex);
	float GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex);
	float GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex);
	float GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex);
	bool GetReceiveNotifiesFromLinkedInstances();
	bool GetPropagateNotifiesToLinkedInstances();
	USkeletalMeshComponent* GetOwningComponent();
	AActor* GetOwningActor();
	UAnimInstance* GetLinkedAnimLayerInstanceByGroup(FName InGroup);
	UAnimInstance* GetLinkedAnimLayerInstanceByClass(UAnimInstance* InClass);
	void GetLinkedAnimGraphInstancesByTag(FName InTag, TArray<UAnimInstance*> OutLinkedInstances);
	UAnimInstance* GetLinkedAnimGraphInstanceByTag(FName InTag);
	float GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex);
	float GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex);
	float GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex);
	float GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex);
	float GetInstanceMachineWeight(int32_t MachineIndex);
	float GetInstanceCurrentStateElapsedTime(int32_t MachineIndex);
	float GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex);
	float GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex);
	float GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex);
	float GetCurveValue(FName CurveName);
	FName GetCurrentStateName(int32_t MachineIndex);
	UAnimMontage* GetCurrentActiveMontage();
	void GetAllCurveNames(TArray<FName> OutNames);
	void GetActiveCurveNames(enum class EAnimCurveType CurveType, TArray<FName> OutNames);
	void ClearMorphTargets();
	float CalculateDirection(FVector Velocity, FRotator BaseRotation);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintPostEvaluateAnimation();
	void BlueprintLinkedAnimationLayersInitialized();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
};

// Class Engine.AudioComponent
// Size: 0x7d0 (Inherited: 0x1f0)
struct UAudioComponent : USceneComponent {
	USoundBase* Sound; // 0x1f0(0x08)
	TArray<FAudioComponentParam> InstanceParameters; // 0x1f8(0x10)
	USoundClass* SoundClassOverride; // 0x208(0x08)
	char bAutoDestroy : 1; // 0x210(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x210(0x01)
	char bShouldRemainActiveIfDropped : 1; // 0x210(0x01)
	char bAllowSpatialization : 1; // 0x210(0x01)
	char bOverrideAttenuation : 1; // 0x210(0x01)
	char bOverrideSubtitlePriority : 1; // 0x210(0x01)
	char bIsUISound : 1; // 0x210(0x01)
	char bEnableLowPassFilter : 1; // 0x210(0x01)
	char bOverridePriority : 1; // 0x211(0x01)
	char bSuppressSubtitles : 1; // 0x211(0x01)
	char pad_211_2 : 1; // 0x211(0x01)
	char bAutoManageAttachment : 1; // 0x212(0x01)
	FName AudioComponentUserID; // 0x218(0x08)
	float PitchModulationMin; // 0x220(0x04)
	float PitchModulationMax; // 0x224(0x04)
	float VolumeModulationMin; // 0x228(0x04)
	float VolumeModulationMax; // 0x22c(0x04)
	float VolumeMultiplier; // 0x230(0x04)
	int32_t EnvelopeFollowerAttackTime; // 0x234(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x238(0x04)
	float Priority; // 0x23c(0x04)
	float SubtitlePriority; // 0x240(0x04)
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x248(0x08)
	float PitchMultiplier; // 0x250(0x04)
	float LowPassFilterFrequency; // 0x254(0x04)
	USoundAttenuation* AttenuationSettings; // 0x260(0x08)
	FSoundAttenuationSettings AttenuationOverrides; // 0x268(0x3a0)
	USoundConcurrency* ConcurrencySettings; // 0x608(0x08)
	TSet<USoundConcurrency*> ConcurrencySet; // 0x610(0x50)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x66c(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x66d(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x66e(0x01)
	FMulticastInlineDelegate OnAudioFinished; // 0x670(0x10)
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x698(0x10)
	FMulticastInlineDelegate OnAudioSingleEnvelopeValue; // 0x6c0(0x10)
	FMulticastInlineDelegate OnAudioMultiEnvelopeValue; // 0x6e8(0x10)
	FSoundModulation Modulation; // 0x710(0x10)
	FDelegate OnQueueSubtitles; // 0x720(0x10)
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x730(0x08)
	FName AutoAttachSocketName; // 0x738(0x08)

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
	void SetIntParameter(FName InName, int32_t inInt);
	void SetFloatParameter(FName InName, float InFloat);
	void SetBoolParameter(FName InName, bool InBool);
	void Play(float StartTime);
	bool IsPlaying();
	bool HasCookedFFTData();
	bool HasCookedAmplitudeEnvelopeData();
	enum class EAudioComponentPlayState GetPlayState();
	bool GetCookedFFTDataForAllPlayingSounds(TArray<FSoundWaveSpectralDataPerSound> OutSoundWaveSpectralData);
	bool GetCookedFFTData(TArray<float> FrequenciesToGet, TArray<FSoundWaveSpectralData> OutSoundWaveSpectralData);
	bool GetCookedEnvelopeDataForAllPlayingSounds(TArray<FSoundWaveEnvelopeDataPerSound> OutEnvelopeData);
	bool GetCookedEnvelopeData(float OutEnvelopeData);
	void FadeOut(float FadeoutDuration, float FadeVolumeLevel, enum class EAudioFaderCurve FadeCurve);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, enum class EAudioFaderCurve FadeCurve);
	bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings OutAttenuationSettings);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, enum class EAudioFaderCurve FadeCurve);
	void AdjustAttenuation(FSoundAttenuationSettings InAttenuationSettings);
};

// Class Engine.AssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UAssetImportData : UObject {
};

// Class Engine.AssetUserData
// Size: 0x28 (Inherited: 0x28)
struct UAssetUserData : UObject {
};

// Class Engine.SaveGame
// Size: 0x28 (Inherited: 0x28)
struct USaveGame : UObject {
};

// Class Engine.Info
// Size: 0x220 (Inherited: 0x220)
struct AInfo : AActor {
};

// Class Engine.GameModeBase
// Size: 0x2c0 (Inherited: 0x220)
struct AGameModeBase : AInfo {
	FString OptionsString; // 0x220(0x10)
	AGameSession* GameSessionClass; // 0x230(0x08)
	AGameStateBase* GameStateClass; // 0x238(0x08)
	APlayerController* PlayerControllerClass; // 0x240(0x08)
	APlayerState* PlayerStateClass; // 0x248(0x08)
	AHUD* HUDClass; // 0x250(0x08)
	APawn* DefaultPawnClass; // 0x258(0x08)
	ASpectatorPawn* SpectatorClass; // 0x260(0x08)
	APlayerController* ReplaySpectatorPlayerControllerClass; // 0x268(0x08)
	AServerStatReplicator* ServerStatReplicatorClass; // 0x270(0x08)
	AGameSession* GameSession; // 0x278(0x08)
	AGameStateBase* GameState; // 0x280(0x08)
	AServerStatReplicator* ServerStatReplicator; // 0x288(0x08)
	FText DefaultPlayerName; // 0x290(0x18)
	char bUseSeamlessTravel : 1; // 0x2a8(0x01)
	char bStartPlayersAsSpectators : 1; // 0x2a8(0x01)
	char bPauseable : 1; // 0x2a8(0x01)

	void StartPlay();
	APawn* SpawnDefaultPawnFor(AController* NewPlayer, AActor* StartSpot);
	APawn* SpawnDefaultPawnAtTransform(AController* NewPlayer, FTransform SpawnTransform);
	bool ShouldReset(AActor* ActorToReset);
	void ReturnToMainMenuHost();
	void RestartPlayerAtTransform(AController* NewPlayer, FTransform SpawnTransform);
	void RestartPlayerAtPlayerStart(AController* NewPlayer, AActor* StartSpot);
	void RestartPlayer(AController* NewPlayer);
	void ResetLevel();
	bool PlayerCanRestart(APlayerController* Player);
	bool MustSpectate(APlayerController* NewPlayerController);
	void K2_PostLogin(APlayerController* NewPlayer);
	void K2_OnSwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC);
	void K2_OnRestartPlayer(AController* NewPlayer);
	void K2_OnLogout(AController* ExitingController);
	void K2_OnChangeName(AController* Other, FString NewName, bool bNameChange);
	AActor* K2_FindPlayerStart(AController* Player, FString IncomingName);
	void InitStartSpot(AActor* StartSpot, AController* NewPlayer);
	void InitializeHUDForPlayer(APlayerController* NewPlayer);
	bool HasMatchStarted();
	void HandleStartingNewPlayer(APlayerController* NewPlayer);
	int32_t GetNumSpectators();
	int32_t GetNumPlayers();
	UObject* GetDefaultPawnClassForController(AController* InController);
	AActor* FindPlayerStart(AController* Player, FString IncomingName);
	AActor* ChoosePlayerStart(AController* Player);
	void ChangeName(AController* Controller, FString NewName, bool bNameChange);
	bool CanSpectate(APlayerController* Viewer, APlayerState* ViewTarget);
};

// Class Engine.GameMode
// Size: 0x308 (Inherited: 0x2c0)
struct AGameMode : AGameModeBase {
	FName MatchState; // 0x2c0(0x08)
	char bDelayedStart : 1; // 0x2c8(0x01)
	int32_t NumSpectators; // 0x2cc(0x04)
	int32_t NumPlayers; // 0x2d0(0x04)
	int32_t NumBots; // 0x2d4(0x04)
	float MinRespawnDelay; // 0x2d8(0x04)
	int32_t NumTravellingPlayers; // 0x2dc(0x04)
	ULocalMessage* EngineMessageClass; // 0x2e0(0x08)
	TArray<APlayerState*> InactivePlayerArray; // 0x2e8(0x10)
	float InactivePlayerStateLifeSpan; // 0x2f8(0x04)
	int32_t MaxInactivePlayers; // 0x2fc(0x04)
	bool bHandleDedicatedServerReplays; // 0x300(0x01)

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
};

// Class Engine.GameStateBase
// Size: 0x270 (Inherited: 0x220)
struct AGameStateBase : AInfo {
	AGameModeBase* GameModeClass; // 0x220(0x08)
	AGameModeBase* AuthorityGameMode; // 0x228(0x08)
	ASpectatorPawn* SpectatorClass; // 0x230(0x08)
	TArray<APlayerState*> PlayerArray; // 0x238(0x10)
	bool bReplicatedHasBegunPlay; // 0x248(0x01)
	float ReplicatedWorldTimeSeconds; // 0x24c(0x04)
	float ServerWorldTimeSecondsDelta; // 0x250(0x04)
	float ServerWorldTimeSecondsUpdateFrequency; // 0x254(0x04)

	void OnRep_SpectatorClass();
	void OnRep_ReplicatedWorldTimeSeconds();
	void OnRep_ReplicatedHasBegunPlay();
	void OnRep_GameModeClass();
	bool HasMatchStarted();
	bool HasBegunPlay();
	float GetServerWorldTimeSeconds();
	float GetPlayerStartTime(AController* Controller);
	float GetPlayerRespawnDelay(AController* Controller);
};

// Class Engine.GameState
// Size: 0x290 (Inherited: 0x270)
struct AGameState : AGameStateBase {
	FName MatchState; // 0x270(0x08)
	FName PreviousMatchState; // 0x278(0x08)
	int32_t ElapsedTime; // 0x280(0x04)

	void OnRep_MatchState();
	void OnRep_ElapsedTime();
};

// Class Engine.Controller
// Size: 0x298 (Inherited: 0x220)
struct AController : AActor {
	APlayerState* PlayerState; // 0x228(0x08)
	FMulticastInlineDelegate OnInstigatedAnyDamage; // 0x238(0x10)
	FName StateName; // 0x248(0x08)
	APawn* Pawn; // 0x250(0x08)
	ACharacter* Character; // 0x260(0x08)
	USceneComponent* TransformComponent; // 0x268(0x08)
	FRotator ControlRotation; // 0x288(0x0c)
	char bAttachToPawn : 1; // 0x294(0x01)

	void UnPossess();
	void StopMovement();
	void SetInitialLocationAndRotation(FVector NewLocation, FRotator NewRotation);
	void SetIgnoreMoveInput(bool bNewMoveInput);
	void SetIgnoreLookInput(bool bNewLookInput);
	void SetControlRotation(FRotator NewRotation);
	void ResetIgnoreMoveInput();
	void ResetIgnoreLookInput();
	void ResetIgnoreInputFlags();
	void ReceiveUnPossess(APawn* UnpossessedPawn);
	void ReceivePossess(APawn* PossessedPawn);
	void ReceiveInstigatedAnyDamage(float Damage, UDamageType* DamageType, AActor* DamagedActor, AActor* DamageCauser);
	void Possess(APawn* InPawn);
	void OnRep_PlayerState();
	void OnRep_Pawn();
	bool LineOfSightTo(AActor* Other, FVector ViewPoint, bool bAlternateChecks);
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
};

// Class Engine.PlayerController
// Size: 0x570 (Inherited: 0x298)
struct APlayerController : AController {
	UPlayer* Player; // 0x298(0x08)
	APawn* AcknowledgedPawn; // 0x2a0(0x08)
	UInterpTrackInstDirector* ControllingDirTrackInst; // 0x2a8(0x08)
	AHUD* MyHUD; // 0x2b0(0x08)
	APlayerCameraManager* PlayerCameraManager; // 0x2b8(0x08)
	APlayerCameraManager* PlayerCameraManagerClass; // 0x2c0(0x08)
	bool bAutoManageActiveCameraTarget; // 0x2c8(0x01)
	FRotator TargetViewRotation; // 0x2cc(0x0c)
	float SmoothTargetViewRotationSpeed; // 0x2e4(0x04)
	TArray<AActor*> HiddenActors; // 0x2f0(0x10)
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents; // 0x300(0x10)
	float LastSpectatorStateSynchTime; // 0x314(0x04)
	FVector LastSpectatorSyncLocation; // 0x318(0x0c)
	FRotator LastSpectatorSyncRotation; // 0x324(0x0c)
	int32_t ClientCap; // 0x330(0x04)
	UCheatManager* CheatManager; // 0x338(0x08)
	UCheatManager* CheatClass; // 0x340(0x08)
	UPlayerInput* PlayerInput; // 0x348(0x08)
	TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x350(0x10)
	char pad_341_0 : 4; // 0x341(0x01)
	char bPlayerIsWaiting : 1; // 0x3d0(0x01)
	char NetPlayerIndex; // 0x3d4(0x01)
	UNetConnection* PendingSwapConnection; // 0x410(0x08)
	UNetConnection* NetConnection; // 0x418(0x08)
	float InputYawScale; // 0x42c(0x04)
	float InputPitchScale; // 0x430(0x04)
	float InputRollScale; // 0x434(0x04)
	char bShowMouseCursor : 1; // 0x438(0x01)
	char bEnableClickEvents : 1; // 0x438(0x01)
	char bEnableTouchEvents : 1; // 0x438(0x01)
	char pad_35F_0 : 3; // 0x35f(0x01)
	char bEnableMouseOverEvents : 1; // 0x438(0x01)
	char bEnableTouchOverEvents : 1; // 0x438(0x01)
	char bForceFeedbackEnabled : 1; // 0x438(0x01)
	float ForceFeedbackScale; // 0x43c(0x04)
	TArray<FKey> ClickEventKeys; // 0x440(0x10)
	enum class EMouseCursor DefaultMouseCursor; // 0x450(0x01)
	enum class EMouseCursor CurrentMouseCursor; // 0x451(0x01)
	enum class ECollisionChannel DefaultClickTraceChannel; // 0x452(0x01)
	enum class ECollisionChannel CurrentClickTraceChannel; // 0x453(0x01)
	float HitResultTraceDistance; // 0x454(0x04)
	uint16_t SeamlessTravelCount; // 0x458(0x02)
	uint16_t LastCompletedSeamlessTravelCount; // 0x45a(0x02)
	UInputComponent* InactiveStateInputComponent; // 0x4d0(0x08)
	char bShouldPerformFullTickWhenPaused : 1; // 0x4d8(0x01)
	UTouchInterface* CurrentTouchInterface; // 0x4f0(0x08)
	ASpectatorPawn* SpectatorPawn; // 0x548(0x08)
	bool bIsLocalPlayerController; // 0x554(0x01)
	FVector SpawnLocation; // 0x558(0x0c)

	bool WasInputKeyJustReleased(FKey Key);
	bool WasInputKeyJustPressed(FKey Key);
	void ToggleSpeaking(bool bInSpeaking);
	void TestServerLevelVisibilityChange(FName PackageName, FName Filename);
	void SwitchLevel(FString URL);
	void StopHapticEffect(enum class EControllerHand Hand);
	void StartFire(char FireModeNum);
	void SetVirtualJoystickVisibility(bool bVisible);
	void SetViewTargetWithBlend(AActor* NewViewTarget, float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing);
	void SetName(FString S);
	void SetMouseLocation(int32_t X, int32_t Y);
	void SetMouseCursorWidget(enum class EMouseCursor Cursor, UUserWidget* CursorWidget);
	void SetHapticsByValue(float Frequency, float Amplitude, enum class EControllerHand Hand);
	void SetDisableHaptics(bool bNewDisabled);
	void SetControllerLightColor(FColor Color);
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	void SetAudioListenerOverride(USceneComponent* AttachToComponent, FVector Location, FRotator Rotation);
	void SetAudioListenerAttenuationOverride(USceneComponent* AttachToComponent, FVector AttenuationLocationOVerride);
	void ServerViewSelf(FViewTargetTransitionParams TransitionParams);
	void ServerViewPrevPlayer();
	void ServerViewNextPlayer();
	void ServerVerifyViewTarget();
	void ServerUpdateMultipleLevelsVisibility(TArray<FUpdateLevelVisibilityLevelInfo> LevelVisibilities);
	void ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo LevelVisibility);
	void ServerUpdateCamera(FVector_NetQuantize CamLoc, int32_t CamPitchAndYaw);
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
	bool ProjectWorldLocationToScreen(FVector WorldLocation, FVector2D ScreenLocation, bool bPlayerViewportRelative);
	void PlayHapticEffect(UHapticFeedbackEffect_Base* HapticEffect, enum class EControllerHand Hand, float Scale, bool bLoop);
	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, enum class EDynamicForceFeedbackAction Action, FLatentActionInfo LatentInfo);
	void Pause();
	void OnServerStartedVisualLogger(bool bIsLogging);
	void LocalTravel(FString URL);
	void K2_ClientPlayForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused);
	bool IsInputKeyDown(FKey Key);
	void GetViewportSize(int32_t SizeX, int32_t SizeY);
	ASpectatorPawn* GetSpectatorPawn();
	bool GetMousePosition(float LocationX, float LocationY);
	FVector GetInputVectorKeyState(FKey Key);
	void GetInputTouchState(enum class ETouchIndex FingerIndex, float LocationX, float LocationY, bool bIsCurrentlyPressed);
	void GetInputMouseDelta(float DeltaX, float DeltaY);
	void GetInputMotionState(FVector Tilt, FVector RotationRate, FVector Gravity, FVector Acceleration);
	float GetInputKeyTimeDown(FKey Key);
	void GetInputAnalogStickState(enum class EControllerAnalogStick WhichStick, float StickX, float StickY);
	float GetInputAnalogKeyState(FKey Key);
	AHUD* GetHUD();
	bool GetHitResultUnderFingerForObjects(enum class ETouchIndex FingerIndex, TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, FHitResult HitResult);
	bool GetHitResultUnderFingerByChannel(enum class ETouchIndex FingerIndex, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult HitResult);
	bool GetHitResultUnderFinger(enum class ETouchIndex FingerIndex, enum class ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult HitResult);
	bool GetHitResultUnderCursorForObjects(TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, FHitResult HitResult);
	bool GetHitResultUnderCursorByChannel(enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, FHitResult HitResult);
	bool GetHitResultUnderCursor(enum class ECollisionChannel TraceChannel, bool bTraceComplex, FHitResult HitResult);
	FVector GetFocalLocation();
	void FOV(float NewFOV);
	void EnableCheats();
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, FVector WorldLocation, FVector WorldDirection);
	bool DeprojectMousePositionToWorld(FVector WorldLocation, FVector WorldDirection);
	void ConsoleKey(FKey Key);
	void ClientWasKicked(FText KickReason);
	void ClientVoiceHandshakeComplete();
	void ClientUpdateMultipleLevelsStreamingStatus(TArray<FUpdateLevelStreamingLevelStatus> LevelStatuses);
	void ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex);
	void ClientUnmutePlayer(FUniqueNetIdRepl PlayerId);
	void ClientTravelInternal(FString URL, enum class ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid);
	void ClientTravel(FString URL, enum class ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid);
	void ClientTeamMessage(APlayerState* SenderPlayerState, FString S, FName Type, float MsgLifeTime);
	void ClientStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
	void ClientStopCameraShakesFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
	void ClientStopCameraShake(UCameraShake* Shake, bool bImmediately);
	void ClientStopCameraAnim(UCameraAnim* AnimToStop);
	void ClientStartOnlineSession();
	void ClientSpawnCameraLensEffect(AEmitterCameraLensEffectBase* LensEffectEmitterClass);
	void ClientSetViewTarget(AActor* A, FViewTargetTransitionParams TransitionParams);
	void ClientSetSpectatorWaiting(bool bWaiting);
	void ClientSetHUD(AHUD* NewHUDClass);
	void ClientSetForceMipLevelsToBeResident(UMaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups);
	void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
	void ClientSetCameraMode(FName NewCamMode);
	void ClientSetCameraFade(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio);
	void ClientSetBlockOnAsyncLoading();
	void ClientReturnToMainMenuWithTextReason(FText ReturnReason);
	void ClientReturnToMainMenu(FString ReturnReason);
	void ClientRetryClientRestart(APawn* NewPawn);
	void ClientRestart(APawn* NewPawn);
	void ClientReset();
	void ClientRepObjRef(UObject* Object);
	void ClientReceiveLocalizedMessage(ULocalMessage* Message, int32_t Switch, APlayerState* RelatedPlayerState_2, APlayerState* RelatedPlayerState_3, UObject* OptionalObject);
	void ClientPrestreamTextures(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups);
	void ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast);
	void ClientPlaySoundAtLocation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier);
	void ClientPlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
	void ClientPlayForceFeedback_Internal(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params);
	void ClientPlayCameraShakeFromSource(UCameraShake* Shake, UCameraShakeSourceComponent* SourceComponent);
	void ClientPlayCameraShake(UCameraShake* Shake, float Scale, enum class ECameraAnimPlaySpace PlaySpace, FRotator UserPlaySpaceRot);
	void ClientPlayCameraAnim(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, enum class ECameraAnimPlaySpace Space, FRotator CustomPlaySpace);
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
	void ClientCapBandwidth(int32_t Cap);
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
};

// Class Engine.ApplicationLifecycleComponent
// Size: 0x140 (Inherited: 0xb0)
struct UApplicationLifecycleComponent : UActorComponent {
	FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0xb0(0x10)
	FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0xc0(0x10)
	FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0xd0(0x10)
	FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0xe0(0x10)
	FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0xf0(0x10)
	FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x100(0x10)
	FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x110(0x10)
	FMulticastInlineDelegate OnTemperatureChangeDelegate; // 0x120(0x10)
	FMulticastInlineDelegate OnLowPowerModeDelegate; // 0x130(0x10)
};

// Class Engine.DataAsset
// Size: 0x30 (Inherited: 0x28)
struct UDataAsset : UObject {
	UDataAsset* NativeClass; // 0x28(0x08)
};

// Class Engine.Pawn
// Size: 0x280 (Inherited: 0x220)
struct APawn : AActor {
	char bUseControllerRotationPitch : 1; // 0x228(0x01)
	char bUseControllerRotationYaw : 1; // 0x228(0x01)
	char bUseControllerRotationRoll : 1; // 0x228(0x01)
	char bCanAffectNavigationGeneration : 1; // 0x228(0x01)
	float BaseEyeHeight; // 0x22c(0x04)
	enum class EAutoReceiveInput AutoPossessPlayer; // 0x230(0x01)
	enum class EAutoPossessAI AutoPossessAI; // 0x231(0x01)
	char RemoteViewPitch; // 0x232(0x01)
	AController* AIControllerClass; // 0x238(0x08)
	APlayerState* PlayerState; // 0x240(0x08)
	AController* LastHitBy; // 0x250(0x08)
	AController* Controller; // 0x258(0x08)
	FVector ControlInputVector; // 0x264(0x0c)
	FVector LastControlInputVector; // 0x270(0x0c)

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
	AActor* GetMovementBaseActor(APawn* Pawn);
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
};

// Class Engine.GameInstance
// Size: 0x198 (Inherited: 0x28)
struct UGameInstance : UObject {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38(0x10)
	UOnlineSession* OnlineSession; // 0x48(0x08)
	TArray<UObject*> ReferencedObjects; // 0x50(0x10)

	void ReceiveShutdown();
	void ReceiveInit();
	void HandleTravelError(enum class ETravelFailure FailureType);
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer);
	void DebugRemovePlayer(int32_t ControllerId);
	void DebugCreatePlayer(int32_t ControllerId);
};

// Class Engine.GameInstanceSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UGameInstanceSubsystem : USubsystem {
};

// Class Engine.StaticMeshComponent
// Size: 0x480 (Inherited: 0x420)
struct UStaticMeshComponent : UMeshComponent {
	int32_t ForcedLodModel; // 0x418(0x04)
	int32_t PreviousLODLevel; // 0x41c(0x04)
	int32_t MinLOD; // 0x420(0x04)
	int32_t SubDivisionStepSize; // 0x424(0x04)
	UStaticMesh* StaticMesh; // 0x428(0x08)
	FColor WireframeColorOverride; // 0x430(0x04)
	char bEvaluateWorldPositionOffset : 1; // 0x434(0x01)
	char bOverrideWireframeColor : 1; // 0x434(0x01)
	char bOverrideMinLod : 1; // 0x434(0x01)
	char bOverrideNavigationExport : 1; // 0x434(0x01)
	char bForceNavigationObstacle : 1; // 0x434(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0x434(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0x434(0x01)
	char bOverrideLightMapRes : 1; // 0x434(0x01)
	char bCastDistanceFieldIndirectShadow : 1; // 0x435(0x01)
	char bOverrideDistanceFieldSelfShadowBias : 1; // 0x435(0x01)
	char bUseSubDivisions : 1; // 0x435(0x01)
	char bUseDefaultCollision : 1; // 0x435(0x01)
	char bReverseCulling : 1; // 0x435(0x01)
	int32_t OverriddenLightMapRes; // 0x438(0x04)
	float DistanceFieldIndirectShadowMinVisibility; // 0x43c(0x04)
	float DistanceFieldSelfShadowBias; // 0x440(0x04)
	float StreamingDistanceMultiplier; // 0x444(0x04)
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x448(0x10)
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x458(0x10)
	FLightmassPrimitiveSettings LightmassSettings; // 0x468(0x18)

	bool SetStaticMesh(UStaticMesh* NewMesh);
	void SetReverseCulling(bool ReverseCulling);
	void SetForcedLodModel(int32_t NewForcedLodModel);
	void SetDistanceFieldSelfShadowBias(float NewValue);
	void OnRep_StaticMesh(UStaticMesh* OldStaticMesh);
	void GetLocalBounds(FVector Min, FVector Max);
};

// Class Engine.InstancedStaticMeshComponent
// Size: 0x530 (Inherited: 0x480)
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x480(0x10)
	int32_t NumCustomDataFloats; // 0x490(0x04)
	TArray<float> PerInstanceSMCustomData; // 0x498(0x10)
	int32_t InstancingRandomSeed; // 0x4a8(0x04)
	int32_t InstanceStartCullDistance; // 0x4ac(0x04)
	int32_t InstanceEndCullDistance; // 0x4b0(0x04)
	TArray<int32_t> InstanceReorderTable; // 0x4b8(0x10)
	int32_t NumPendingLightmaps; // 0x510(0x04)
	TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x518(0x10)

	bool UpdateInstanceTransform(int32_t InstanceIndex, FTransform NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool SetCustomDataValue(int32_t InstanceIndex, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
	void SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance);
	bool RemoveInstance(int32_t InstanceIndex);
	bool GetInstanceTransform(int32_t InstanceIndex, FTransform OutInstanceTransform, bool bWorldSpace);
	TArray<int32_t> GetInstancesOverlappingSphere(FVector Center, float Radius, bool bSphereInWorldSpace);
	TArray<int32_t> GetInstancesOverlappingBox(FBox Box, bool bBoxInWorldSpace);
	int32_t GetInstanceCount();
	void ClearInstances();
	bool BatchUpdateInstancesTransforms(int32_t StartInstanceIndex, TArray<FTransform> NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool BatchUpdateInstancesTransform(int32_t StartInstanceIndex, int32_t NumInstances, FTransform NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	int32_t AddInstanceWorldSpace(FTransform WorldTransform);
	int32_t AddInstance(FTransform InstanceTransform);
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0x620 (Inherited: 0x530)
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	TArray<int32_t> SortedInstances; // 0x538(0x10)
	int32_t NumBuiltInstances; // 0x548(0x04)
	FBox BuiltInstanceBounds; // 0x550(0x1c)
	FBox UnbuiltInstanceBounds; // 0x56c(0x1c)
	TArray<FBox> UnbuiltInstanceBoundsList; // 0x588(0x10)
	char bEnableDensityScaling : 1; // 0x598(0x01)
	int32_t OcclusionLayerNumNodes; // 0x5a0(0x04)
	FBoxSphereBounds CacheMeshExtendedBounds; // 0x5a4(0x1c)
	bool bDisableCollision; // 0x5c0(0x01)
	int32_t InstanceCountToRender; // 0x5c4(0x04)

	bool RemoveInstances(TArray<int32_t> InstancesToRemove);
};

// Class Engine.MovementComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UMovementComponent : UActorComponent {
	USceneComponent* UpdatedComponent; // 0xb0(0x08)
	UPrimitiveComponent* UpdatedPrimitive; // 0xb8(0x08)
	FVector Velocity; // 0xc4(0x0c)
	FVector PlaneConstraintNormal; // 0xd0(0x0c)
	FVector PlaneConstraintOrigin; // 0xdc(0x0c)
	char bUpdateOnlyIfRendered : 1; // 0xe8(0x01)
	char bAutoUpdateTickRegistration : 1; // 0xe8(0x01)
	char bTickBeforeOwner : 1; // 0xe8(0x01)
	char bAutoRegisterUpdatedComponent : 1; // 0xe8(0x01)
	char bConstrainToPlane : 1; // 0xe8(0x01)
	char bSnapToPlaneAtStart : 1; // 0xe8(0x01)
	char bAutoRegisterPhysicsVolumeUpdates : 1; // 0xe8(0x01)
	char bComponentShouldUpdatePhysicsVolume : 1; // 0xe8(0x01)
	enum class EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0xeb(0x01)

	void StopMovementImmediately();
	void SnapUpdatedComponentToPlane();
	void SetUpdatedComponent(USceneComponent* NewUpdatedComponent);
	void SetPlaneConstraintOrigin(FVector PlaneOrigin);
	void SetPlaneConstraintNormal(FVector PlaneNormal);
	void SetPlaneConstraintFromVectors(FVector Forward, FVector Up);
	void SetPlaneConstraintEnabled(bool bEnabled);
	void SetPlaneConstraintAxisSetting(enum class EPlaneConstraintAxisSetting NewAxisSetting);
	void PhysicsVolumeChanged(APhysicsVolume* NewVolume);
	bool K2_MoveUpdatedComponent(FVector Delta, FRotator NewRotation, FHitResult OutHit, bool bSweep, bool bTeleport);
	float K2_GetModifiedMaxSpeed();
	float K2_GetMaxSpeedModifier();
	bool IsExceedingMaxSpeed(float MaxSpeed);
	FVector GetPlaneConstraintOrigin();
	FVector GetPlaneConstraintNormal();
	enum class EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting();
	APhysicsVolume* GetPhysicsVolume();
	float GetMaxSpeed();
	float GetGravityZ();
	FVector ConstrainNormalToPlane(FVector Normal);
	FVector ConstrainLocationToPlane(FVector Location);
	FVector ConstrainDirectionToPlane(FVector Direction);
};

// Class Engine.NavMovementComponent
// Size: 0x130 (Inherited: 0xf0)
struct UNavMovementComponent : UMovementComponent {
	FNavAgentProperties NavAgentProps; // 0xf0(0x30)
	float FixedPathBrakingDistance; // 0x120(0x04)
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x124(0x01)
	char bUseAccelerationForPaths : 1; // 0x124(0x01)
	char bUseFixedBrakingDistanceForPaths : 1; // 0x124(0x01)
	FMovementProperties MovementState; // 0x125(0x01)
	UObject* PathFollowingComp; // 0x128(0x08)

	void StopMovementKeepPathing();
	void StopActiveMovement();
	bool IsSwimming();
	bool IsMovingOnGround();
	bool IsFlying();
	bool IsFalling();
	bool IsCrouching();
};

// Class Engine.PawnMovementComponent
// Size: 0x138 (Inherited: 0x130)
struct UPawnMovementComponent : UNavMovementComponent {
	APawn* PawnOwner; // 0x130(0x08)

	FVector K2_GetInputVector();
	bool IsMoveInputIgnored();
	FVector GetPendingInputVector();
	APawn* GetPawnOwner();
	FVector GetLastInputVector();
	FVector ConsumeInputVector();
	void AddInputVector(FVector WorldVector, bool bForce);
};

// Class Engine.ParticleSystemComponent
// Size: 0x650 (Inherited: 0x3f0)
struct UParticleSystemComponent : UFXSystemComponent {
	UParticleSystem* Template; // 0x3f0(0x08)
	TArray<UMaterialInterface*> EmitterMaterials; // 0x3f8(0x10)
	TArray<USkeletalMeshComponent*> SkelMeshComponents; // 0x408(0x10)
	char bResetOnDetach : 1; // 0x419(0x01)
	char bUpdateOnDedicatedServer : 1; // 0x419(0x01)
	char pad_418_2 : 2; // 0x418(0x01)
	char bAllowRecycling : 1; // 0x419(0x01)
	char bAutoManageAttachment : 1; // 0x419(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x419(0x01)
	char bWarmingUp : 1; // 0x41a(0x01)
	char pad_419_0 : 2; // 0x419(0x01)
	char bOverrideLODMethod : 1; // 0x41a(0x01)
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x41a(0x01)
	enum class ParticleSystemLODMethod LODMethod; // 0x425(0x01)
	enum class EParticleSignificanceLevel RequiredSignificance; // 0x426(0x01)
	TArray<FParticleSysParam> InstanceParameters; // 0x428(0x10)
	FMulticastInlineDelegate OnParticleSpawn; // 0x438(0x10)
	FMulticastInlineDelegate OnParticleBurst; // 0x448(0x10)
	FMulticastInlineDelegate OnParticleDeath; // 0x458(0x10)
	FMulticastInlineDelegate OnParticleCollide; // 0x468(0x10)
	bool bOldPositionValid; // 0x478(0x01)
	FVector OldPosition; // 0x47c(0x0c)
	FVector PartSysVelocity; // 0x488(0x0c)
	float WarmupTime; // 0x494(0x04)
	float WarmupTickRate; // 0x498(0x04)
	float SecondsBeforeInactive; // 0x4a0(0x04)
	float MaxTimeBeforeForceUpdateTransform; // 0x4a8(0x04)
	TArray<UParticleSystemReplay*> ReplayClips; // 0x4c8(0x10)
	float CustomTimeDilation; // 0x4e0(0x04)
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x538(0x08)
	FName AutoAttachSocketName; // 0x540(0x08)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x548(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x549(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x54a(0x01)
	FMulticastInlineDelegate OnSystemFinished; // 0x578(0x10)

	void SetTrailSourceData(FName InFirstSocketName, FName InSecondSocketName, enum class ETrailWidthMode InWidthMode, float InWidth);
	void SetTemplate(UParticleSystem* NewTemplate);
	void SetMaterialParameter(FName ParameterName, UMaterialInterface* Param);
	void SetBeamTargetTangent(int32_t EmitterIndex, FVector NewTangentPoint, int32_t TargetIndex);
	void SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex);
	void SetBeamTargetPoint(int32_t EmitterIndex, FVector NewTargetPoint, int32_t TargetIndex);
	void SetBeamSourceTangent(int32_t EmitterIndex, FVector NewTangentPoint, int32_t SourceIndex);
	void SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex);
	void SetBeamSourcePoint(int32_t EmitterIndex, FVector NewSourcePoint, int32_t SourceIndex);
	void SetBeamEndPoint(int32_t EmitterIndex, FVector NewEndPoint);
	void SetAutoAttachParams(USceneComponent* Parent, FName SocketName, enum class EAttachLocation LocationType);
	int32_t GetNumActiveParticles();
	UMaterialInterface* GetNamedMaterial(FName InName);
	bool GetBeamTargetTangent(int32_t EmitterIndex, int32_t TargetIndex, FVector OutTangentPoint);
	bool GetBeamTargetStrength(int32_t EmitterIndex, int32_t TargetIndex, float OutTargetStrength);
	bool GetBeamTargetPoint(int32_t EmitterIndex, int32_t TargetIndex, FVector OutTargetPoint);
	bool GetBeamSourceTangent(int32_t EmitterIndex, int32_t SourceIndex, FVector OutTangentPoint);
	bool GetBeamSourceStrength(int32_t EmitterIndex, int32_t SourceIndex, float OutSourceStrength);
	bool GetBeamSourcePoint(int32_t EmitterIndex, int32_t SourceIndex, FVector OutSourcePoint);
	bool GetBeamEndPoint(int32_t EmitterIndex, FVector OutEndPoint);
	void GenerateParticleEvent(FName InEventName, float InEmitterTime, FVector InLocation, FVector InDirection, FVector InVelocity);
	void EndTrails();
	UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(FName InName, UMaterialInterface* SourceMaterial);
	void BeginTrails(FName InFirstSocketName, FName InSecondSocketName, enum class ETrailWidthMode InWidthMode, float InWidth);
};

// Class Engine.LightComponentBase
// Size: 0x220 (Inherited: 0x1f0)
struct ULightComponentBase : USceneComponent {
	FGuid LightGuid; // 0x1f0(0x10)
	float Brightness; // 0x200(0x04)
	float Intensity; // 0x204(0x04)
	FColor LightColor; // 0x208(0x04)
	char bAffectsWorld : 1; // 0x20c(0x01)
	char CastShadows : 1; // 0x20c(0x01)
	char CastStaticShadows : 1; // 0x20c(0x01)
	char CastDynamicShadows : 1; // 0x20c(0x01)
	char bAffectTranslucentLighting : 1; // 0x20c(0x01)
	char bTransmission : 1; // 0x20c(0x01)
	char bCastVolumetricShadow : 1; // 0x20c(0x01)
	char bCastDeepShadow : 1; // 0x20c(0x01)
	char bCastRaytracedShadow : 1; // 0x20d(0x01)
	char bAffectReflection : 1; // 0x20d(0x01)
	char bAffectGlobalIllumination : 1; // 0x20d(0x01)
	float IndirectLightingIntensity; // 0x210(0x04)
	float VolumetricScatteringIntensity; // 0x214(0x04)
	int32_t SamplesPerPixel; // 0x218(0x04)

	void SetSamplesPerPixel(int32_t NewValue);
	void SetCastVolumetricShadow(bool bNewValue);
	void SetCastShadows(bool bNewValue);
	void SetCastRaytracedShadow(bool bNewValue);
	void SetCastDeepShadow(bool bNewValue);
	void SetAffectReflection(bool bNewValue);
	void SetAffectGlobalIllumination(bool bNewValue);
	FLinearColor GetLightColor();
};

// Class Engine.LightComponent
// Size: 0x320 (Inherited: 0x220)
struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x220(0x04)
	float MaxDrawDistance; // 0x224(0x04)
	float MaxDistanceFadeRange; // 0x228(0x04)
	char bUseTemperature : 1; // 0x22c(0x01)
	int32_t ShadowMapChannel; // 0x230(0x04)
	float MinRoughness; // 0x238(0x04)
	float SpecularScale; // 0x23c(0x04)
	float ShadowResolutionScale; // 0x240(0x04)
	float ShadowBias; // 0x244(0x04)
	float ShadowSlopeBias; // 0x248(0x04)
	float ShadowSharpen; // 0x24c(0x04)
	float ContactShadowLength; // 0x250(0x04)
	char ContactShadowLengthInWS : 1; // 0x254(0x01)
	char InverseSquaredFalloff : 1; // 0x254(0x01)
	char CastTranslucentShadows : 1; // 0x254(0x01)
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x254(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x254(0x01)
	char bForceCachedShadowsForMovablePrimitives : 1; // 0x254(0x01)
	FLightingChannels LightingChannels; // 0x258(0x01)
	UMaterialInterface* LightFunctionMaterial; // 0x260(0x08)
	FVector LightFunctionScale; // 0x268(0x0c)
	UTextureLightProfile* IESTexture; // 0x278(0x08)
	char bUseIESBrightness : 1; // 0x280(0x01)
	float IESBrightnessScale; // 0x284(0x04)
	float LightFunctionFadeDistance; // 0x288(0x04)
	float DisabledBrightness; // 0x28c(0x04)
	char bEnableLightShaftBloom : 1; // 0x290(0x01)
	float BloomScale; // 0x294(0x04)
	float BloomThreshold; // 0x298(0x04)
	float BloomMaxBrightness; // 0x29c(0x04)
	FColor BloomTint; // 0x2a0(0x04)
	bool bUseRayTracedDistanceFieldShadows; // 0x2a4(0x01)
	float RayStartOffsetDepthScale; // 0x2a8(0x04)

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
};

// Class Engine.LocalLightComponent
// Size: 0x340 (Inherited: 0x320)
struct ULocalLightComponent : ULightComponent {
	enum class ELightUnits IntensityUnits; // 0x320(0x01)
	float Radius; // 0x324(0x04)
	float AttenuationRadius; // 0x328(0x04)
	FLightmassPointLightSettings LightmassSettings; // 0x32c(0x0c)

	void SetIntensityUnits(enum class ELightUnits NewIntensityUnits);
	void SetAttenuationRadius(float NewRadius);
	float GetUnitsConversionFactor(enum class ELightUnits SrcUnits, enum class ELightUnits TargetUnits, float CosHalfConeAngle);
};

// Class Engine.PointLightComponent
// Size: 0x350 (Inherited: 0x340)
struct UPointLightComponent : ULocalLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x338(0x01)
	float LightFalloffExponent; // 0x33c(0x04)
	float SourceRadius; // 0x340(0x04)
	float SoftSourceRadius; // 0x344(0x04)
	float SourceLength; // 0x348(0x04)

	void SetSourceRadius(float bNewValue);
	void SetSourceLength(float NewValue);
	void SetSoftSourceRadius(float bNewValue);
	void SetLightFalloffExponent(float NewLightFalloffExponent);
};

// Class Engine.ShapeComponent
// Size: 0x410 (Inherited: 0x3f0)
struct UShapeComponent : UPrimitiveComponent {
	UBodySetup* ShapeBodySetup; // 0x3f0(0x08)
	UNavAreaBase* AreaClass; // 0x3f8(0x08)
	FColor ShapeColor; // 0x400(0x04)
	char bDrawOnlyIfSelected : 1; // 0x404(0x01)
	char bShouldCollideWhenPlacing : 1; // 0x404(0x01)
	char bDynamicObstacle : 1; // 0x404(0x01)
};

// Class Engine.SphereComponent
// Size: 0x410 (Inherited: 0x410)
struct USphereComponent : UShapeComponent {
	float SphereRadius; // 0x408(0x04)

	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
	float GetUnscaledSphereRadius();
	float GetShapeScale();
	float GetScaledSphereRadius();
};

// Class Engine.AnimNotifyState_TimedParticleEffect
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30(0x08)
	FName SocketName; // 0x38(0x08)
	FVector LocationOffset; // 0x40(0x0c)
	FRotator RotationOffset; // 0x4c(0x0c)
	bool bDestroyAtEnd; // 0x58(0x01)
};

// Class Engine.AssetManager
// Size: 0x438 (Inherited: 0x28)
struct UAssetManager : UObject {
	TArray<UObject*> ObjectReferenceList; // 0x2c0(0x10)
	bool bIsGlobalAsyncScanEnvironment; // 0x2d0(0x01)
	bool bShouldGuessTypeAndName; // 0x2d1(0x01)
	bool bShouldUseSynchronousLoad; // 0x2d2(0x01)
	bool bIsLoadingFromPakFiles; // 0x2d3(0x01)
	bool bShouldAcquireMissingChunksOnLoad; // 0x2d4(0x01)
	bool bOnlyCookProductionAssets; // 0x2d5(0x01)
	bool bIsBulkScanning; // 0x2d6(0x01)
	bool bIsPrimaryAssetDirectoryCurrent; // 0x2d7(0x01)
	bool bIsManagementDatabaseCurrent; // 0x2d8(0x01)
	bool bUpdateManagementDatabaseAfterScan; // 0x2d9(0x01)
	bool bIncludeOnlyOnDiskAssets; // 0x2da(0x01)
	int32_t NumberOfSpawnedNotifications; // 0x2dc(0x04)
};

// Class Engine.CheatManager
// Size: 0x78 (Inherited: 0x28)
struct UCheatManager : UObject {
	ADebugCameraController* DebugCameraControllerRef; // 0x28(0x08)
	ADebugCameraController* DebugCameraControllerClass; // 0x30(0x08)

	void Walk();
	void ViewSelf();
	void ViewPlayer(FString S);
	void ViewClass(AActor* DesiredClass);
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
	void DestroyPawns(APawn* aClass);
	void DestroyAllPawnsExceptTarget();
	void DestroyAll(AActor* aClass);
	void DebugCapsuleSweepSize(float HalfHeight, float Radius);
	void DebugCapsuleSweepPawn();
	void DebugCapsuleSweepComplex(bool bTraceComplex);
	void DebugCapsuleSweepClear();
	void DebugCapsuleSweepChannel(enum class ECollisionChannel Channel);
	void DebugCapsuleSweepCapture();
	void DebugCapsuleSweep();
	void DamageTarget(float damageAmount);
	void CheatScript(FString ScriptName);
	void ChangeSize(float F);
	void BugItStringCreator(FVector ViewLocation, FRotator ViewRotation, FString GoString, FString LocString);
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
	void BugIt(FString ScreenShotDescription);
};

// Class Engine.DPICustomScalingRule
// Size: 0x28 (Inherited: 0x28)
struct UDPICustomScalingRule : UObject {
};

// Class Engine.GameSession
// Size: 0x238 (Inherited: 0x220)
struct AGameSession : AInfo {
	int32_t MaxSpectators; // 0x220(0x04)
	int32_t MaxPlayers; // 0x224(0x04)
	int32_t MaxPartySize; // 0x228(0x04)
	char MaxSplitscreensPerConnection; // 0x22c(0x01)
	bool bRequiresPushToTalk; // 0x22d(0x01)
	FName SessionName; // 0x230(0x08)
};

// Class Engine.GameUserSettings
// Size: 0x120 (Inherited: 0x28)
struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x28(0x01)
	bool bUseDynamicResolution; // 0x29(0x01)
	uint32_t ResolutionSizeX; // 0x80(0x04)
	uint32_t ResolutionSizeY; // 0x84(0x04)
	uint32_t LastUserConfirmedResolutionSizeX; // 0x88(0x04)
	uint32_t LastUserConfirmedResolutionSizeY; // 0x8c(0x04)
	int32_t WindowPosX; // 0x90(0x04)
	int32_t WindowPosY; // 0x94(0x04)
	int32_t FullscreenMode; // 0x98(0x04)
	int32_t LastConfirmedFullscreenMode; // 0x9c(0x04)
	int32_t PreferredFullscreenMode; // 0xa0(0x04)
	uint32_t Version; // 0xa4(0x04)
	int32_t AudioQualityLevel; // 0xa8(0x04)
	int32_t LastConfirmedAudioQualityLevel; // 0xac(0x04)
	float FrameRateLimit; // 0xb0(0x04)
	int32_t DesiredScreenWidth; // 0xb8(0x04)
	bool bUseDesiredScreenHeight; // 0xbc(0x01)
	int32_t DesiredScreenHeight; // 0xc0(0x04)
	int32_t LastUserConfirmedDesiredScreenWidth; // 0xc4(0x04)
	int32_t LastUserConfirmedDesiredScreenHeight; // 0xc8(0x04)
	float LastRecommendedScreenWidth; // 0xcc(0x04)
	float LastRecommendedScreenHeight; // 0xd0(0x04)
	float LastCPUBenchmarkResult; // 0xd4(0x04)
	float LastGPUBenchmarkResult; // 0xd8(0x04)
	TArray<float> LastCPUBenchmarkSteps; // 0xe0(0x10)
	TArray<float> LastGPUBenchmarkSteps; // 0xf0(0x10)
	float LastGPUBenchmarkMultiplier; // 0x100(0x04)
	bool bUseHDRDisplayOutput; // 0x104(0x01)
	int32_t HDRDisplayOutputNits; // 0x108(0x04)
	FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate; // 0x110(0x10)

	void ValidateSettings();
	bool SupportsHDRDisplayOutput();
	void SetVSyncEnabled(bool bEnable);
	void SetVisualEffectQuality(int32_t Value);
	void SetViewDistanceQuality(int32_t Value);
	void SetToDefaults();
	void SetTextureQuality(int32_t Value);
	void SetShadowQuality(int32_t Value);
	void SetShadingQuality(int32_t Value);
	void SetScreenResolution(FIntPoint Resolution);
	void SetResolutionScaleValueEx(float NewScaleValue);
	void SetResolutionScaleValue(int32_t NewScaleValue);
	void SetResolutionScaleNormalized(float NewScaleNormalized);
	void SetPostProcessingQuality(int32_t Value);
	void SetOverallScalabilityLevel(int32_t Value);
	void SetFullscreenMode(enum class EWindowMode InFullscreenMode);
	void SetFrameRateLimit(float NewLimit);
	void SetFoliageQuality(int32_t Value);
	void SetDynamicResolutionEnabled(bool bEnable);
	void SetBenchmarkFallbackValues();
	void SetAudioQualityLevel(int32_t QualityLevel);
	void SetAntiAliasingQuality(int32_t Value);
	void SaveSettings();
	void RunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier);
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
	int32_t GetVisualEffectQuality();
	int32_t GetViewDistanceQuality();
	int32_t GetTextureQuality();
	int32_t GetSyncInterval();
	int32_t GetShadowQuality();
	int32_t GetShadingQuality();
	FIntPoint GetScreenResolution();
	float GetResolutionScaleNormalized();
	void GetResolutionScaleInformationEx(float CurrentScaleNormalized, float CurrentScaleValue, float MinScaleValue, float MaxScaleValue);
	void GetResolutionScaleInformation(float CurrentScaleNormalized, int32_t CurrentScaleValue, int32_t MinScaleValue, int32_t MaxScaleValue);
	float GetRecommendedResolutionScale();
	enum class EWindowMode GetPreferredFullscreenMode();
	int32_t GetPostProcessingQuality();
	int32_t GetOverallScalabilityLevel();
	FIntPoint GetLastConfirmedScreenResolution();
	enum class EWindowMode GetLastConfirmedFullscreenMode();
	UGameUserSettings* GetGameUserSettings();
	enum class EWindowMode GetFullscreenMode();
	float GetFrameRateLimit();
	int32_t GetFramePace();
	int32_t GetFoliageQuality();
	FIntPoint GetDesktopResolution();
	FIntPoint GetDefaultWindowPosition();
	enum class EWindowMode GetDefaultWindowMode();
	float GetDefaultResolutionScale();
	FIntPoint GetDefaultResolution();
	int32_t GetCurrentHDRDisplayNits();
	int32_t GetAudioQualityLevel();
	int32_t GetAntiAliasingQuality();
	void EnableHDRDisplayOutput(bool bEnable, int32_t DisplayNits);
	void ConfirmVideoMode();
	void ApplySettings(bool bCheckForCommandLineOverrides);
	void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
	void ApplyNonResolutionSettings();
	void ApplyHardwareBenchmarkResults();
};

// Class Engine.HUD
// Size: 0x310 (Inherited: 0x220)
struct AHUD : AActor {
	APlayerController* PlayerOwner; // 0x220(0x08)
	char bLostFocusPaused : 1; // 0x228(0x01)
	char bShowHUD : 1; // 0x228(0x01)
	char bShowDebugInfo : 1; // 0x228(0x01)
	int32_t CurrentTargetIndex; // 0x22c(0x04)
	char bShowHitBoxDebugInfo : 1; // 0x230(0x01)
	char bShowOverlays : 1; // 0x230(0x01)
	char bEnableDebugTextShadow : 1; // 0x230(0x01)
	TArray<AActor*> PostRenderedActors; // 0x238(0x10)
	TArray<FName> DebugDisplay; // 0x250(0x10)
	TArray<FName> ToggledDebugCategories; // 0x260(0x10)
	UCanvas* Canvas; // 0x270(0x08)
	UCanvas* DebugCanvas; // 0x278(0x08)
	TArray<FDebugTextInfo> DebugTextList; // 0x280(0x10)
	AActor* ShowDebugTargetDesiredClass; // 0x290(0x08)
	AActor* ShowDebugTargetActor; // 0x298(0x08)

	void ShowHUD();
	void ShowDebugToggleSubCategory(FName Category);
	void ShowDebugForReticleTargetToggle(AActor* DesiredClass);
	void ShowDebug(FName DebugType);
	void RemoveDebugText(AActor* SrcActor, bool bLeaveDurationText);
	void RemoveAllDebugStrings();
	void ReceiveHitBoxRelease(FName BoxName);
	void ReceiveHitBoxEndCursorOver(FName BoxName);
	void ReceiveHitBoxClick(FName BoxName);
	void ReceiveHitBoxBeginCursorOver(FName BoxName);
	void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY);
	FVector Project(FVector Location);
	void PreviousDebugTarget();
	void NextDebugTarget();
	void GetTextSize(FString Text, float OutWidth, float OutHeight, UFont* Font, float Scale);
	APlayerController* GetOwningPlayerController();
	APawn* GetOwningPawn();
	void GetActorsInSelectionRectangle(AActor* ClassFilter, FVector2D FirstPoint, FVector2D SecondPoint, TArray<AActor*> OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);
	void DrawTextureSimple(UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
	void DrawTexture(UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, enum class EBlendMode BlendMode, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
	void DrawText(FString Text, FLinearColor TextColor, float ScreenX, float ScreenY, UFont* Font, float Scale, bool bScalePosition);
	void DrawRect(FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
	void DrawMaterialTriangle(UMaterialInterface* Material, FVector2D V0_Pos, FVector2D V1_Pos, FVector2D V2_Pos, FVector2D V0_UV, FVector2D V1_UV, FVector2D V2_UV, FLinearColor V0_Color, FLinearColor V1_Color, FLinearColor V2_Color);
	void DrawMaterialSimple(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
	void DrawMaterial(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
	void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, FLinearColor LineColor, float LineThickness);
	void Deproject(float ScreenX, float ScreenY, FVector WorldPosition, FVector WorldDirection);
	void AddHitBox(FVector2D Position, FVector2D Size, FName InName, bool bConsumesInput, int32_t Priority);
	void AddDebugText(FString DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow);
};

// Class Engine.KismetArrayLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetArrayLibrary : UBlueprintFunctionLibrary {

	void SetArrayPropertyByName(UObject* Object, FName PropertyName, TArray<int32_t> Value);
	void FilterArray(TArray<AActor*> TargetArray, AActor* FilterClass, TArray<AActor*> FilteredArray);
	void Array_Swap(TArray<int32_t> TargetArray, int32_t FirstIndex, int32_t SecondIndex);
	void Array_Shuffle(TArray<int32_t> TargetArray);
	void Array_Set(TArray<int32_t> TargetArray, int32_t Index, int32_t Item, bool bSizeToFit);
	void Array_Resize(TArray<int32_t> TargetArray, int32_t Size);
	bool Array_RemoveItem(TArray<int32_t> TargetArray, int32_t Item);
	void Array_Remove(TArray<int32_t> TargetArray, int32_t IndexToRemove);
	int32_t Array_Length(TArray<int32_t> TargetArray);
	int32_t Array_LastIndex(TArray<int32_t> TargetArray);
	bool Array_IsValidIndex(TArray<int32_t> TargetArray, int32_t IndexToTest);
	void Array_Insert(TArray<int32_t> TargetArray, int32_t NewItem, int32_t Index);
	bool Array_Identical(TArray<int32_t> ArrayA, TArray<int32_t> ArrayB);
	void Array_Get(TArray<int32_t> TargetArray, int32_t Index, int32_t Item);
	int32_t Array_Find(TArray<int32_t> TargetArray, int32_t ItemToFind);
	bool Array_Contains(TArray<int32_t> TargetArray, int32_t ItemToFind);
	void Array_Clear(TArray<int32_t> TargetArray);
	void Array_Append(TArray<int32_t> TargetArray, TArray<int32_t> SourceArray);
	int32_t Array_AddUnique(TArray<int32_t> TargetArray, int32_t NewItem);
	int32_t Array_Add(TArray<int32_t> TargetArray, int32_t NewItem);
};

// Class Engine.PhysicalMaterial
// Size: 0x80 (Inherited: 0x28)
struct UPhysicalMaterial : UObject {
	float Friction; // 0x28(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x2c(0x01)
	bool bOverrideFrictionCombineMode; // 0x2d(0x01)
	float Restitution; // 0x30(0x04)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x34(0x01)
	bool bOverrideRestitutionCombineMode; // 0x35(0x01)
	float Density; // 0x38(0x04)
	float RaiseMassToPower; // 0x3c(0x04)
	float DestructibleDamageThresholdScale; // 0x40(0x04)
	UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x48(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x50(0x01)
	float TireFrictionScale; // 0x54(0x04)
	TArray<FTireFrictionScalePair> TireFrictionScales; // 0x58(0x10)
};

// Class Engine.PlayerCameraManager
// Size: 0x2740 (Inherited: 0x220)
struct APlayerCameraManager : AActor {
	APlayerController* PCOwner; // 0x220(0x08)
	USceneComponent* TransformComponent; // 0x228(0x08)
	float DefaultFOV; // 0x238(0x04)
	float DefaultOrthoWidth; // 0x240(0x04)
	float DefaultAspectRatio; // 0x248(0x04)
	FCameraCacheEntry CameraCache; // 0x290(0x5e0)
	FCameraCacheEntry LastFrameCameraCache; // 0x870(0x5e0)
	FTViewTarget ViewTarget; // 0xe50(0x5f0)
	FTViewTarget PendingViewTarget; // 0x1440(0x5f0)
	FCameraCacheEntry CameraCachePrivate; // 0x1a60(0x5e0)
	FCameraCacheEntry LastFrameCameraCachePrivate; // 0x2040(0x5e0)
	TArray<UCameraModifier*> ModifierList; // 0x2620(0x10)
	TArray<UCameraModifier*> DefaultModifiers; // 0x2630(0x10)
	float FreeCamDistance; // 0x2640(0x04)
	FVector FreeCamOffset; // 0x2644(0x0c)
	FVector ViewTargetOffset; // 0x2650(0x0c)
	TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x2670(0x10)
	UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x2680(0x08)
	UCameraAnimInst* AnimInstPool[0x8]; // 0x2688(0x40)
	TArray<FPostProcessSettings> PostProcessBlendCache; // 0x26c8(0x10)
	TArray<UCameraAnimInst*> ActiveAnims; // 0x26e8(0x10)
	TArray<UCameraAnimInst*> FreeAnims; // 0x26f8(0x10)
	ACameraActor* AnimCameraActor; // 0x2708(0x08)
	char bIsOrthographic : 1; // 0x2710(0x01)
	char bDefaultConstrainAspectRatio : 1; // 0x2710(0x01)
	char pad_2668_2 : 4; // 0x2668(0x01)
	char bClientSimulatingViewTarget : 1; // 0x2710(0x01)
	char bUseClientSideCameraUpdates : 1; // 0x2710(0x01)
	char pad_2669_0 : 2; // 0x2669(0x01)
	char bGameCameraCutThisFrame : 1; // 0x2711(0x01)
	float ViewPitchMin; // 0x2714(0x04)
	float ViewPitchMax; // 0x2718(0x04)
	float ViewYawMin; // 0x271c(0x04)
	float ViewYawMax; // 0x2720(0x04)
	float ViewRollMin; // 0x2724(0x04)
	float ViewRollMax; // 0x2728(0x04)
	float ServerUpdateCameraTimeout; // 0x2730(0x04)

	void StopCameraShake(UCameraShake* ShakeInstance, bool bImmediately);
	void StopCameraFade();
	void StopCameraAnimInst(UCameraAnimInst* AnimInst, bool bImmediate);
	void StopAllInstancesOfCameraShakeFromSource(UCameraShakeSourceComponent* SourceComponent, bool bImmediately);
	void StopAllInstancesOfCameraShake(UCameraShake* Shake, bool bImmediately);
	void StopAllInstancesOfCameraAnim(UCameraAnim* Anim, bool bImmediate);
	void StopAllCameraShakes(bool bImmediately);
	void StopAllCameraAnims(bool bImmediate);
	void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
	void SetManualCameraFade(float InFadeAmount, FLinearColor Color, bool bInFadeAudio);
	void SetGameCameraCutThisFrame();
	bool RemoveCameraModifier(UCameraModifier* ModifierToRemove);
	void RemoveCameraLensEffect(AEmitterCameraLensEffectBase* Emitter);
	UCameraShake* PlayCameraShakeFromSource(UCameraShake* ShakeClass, UCameraShakeSourceComponent* SourceComponent);
	UCameraShake* PlayCameraShake(UCameraShake* ShakeClass, float Scale, enum class ECameraAnimPlaySpace PlaySpace, FRotator UserPlaySpaceRot);
	UCameraAnimInst* PlayCameraAnim(UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, enum class ECameraAnimPlaySpace PlaySpace, FRotator UserPlaySpaceRot);
	void PhotographyCameraModify(FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector ResultCameraLocation);
	void OnPhotographySessionStart();
	void OnPhotographySessionEnd();
	void OnPhotographyMultiPartCaptureStart();
	void OnPhotographyMultiPartCaptureEnd();
	APlayerController* GetOwningPlayerController();
	float GetFOVAngle();
	FRotator GetCameraRotation();
	FVector GetCameraLocation();
	UCameraModifier* FindCameraModifierByClass(UCameraModifier* ModifierClass);
	void ClearCameraLensEffects();
	bool BlueprintUpdateCamera(AActor* CameraTarget, FVector NewCameraLocation, FRotator NewCameraRotation, float NewCameraFOV);
	UCameraModifier* AddNewCameraModifier(UCameraModifier* ModifierClass);
	AEmitterCameraLensEffectBase* AddCameraLensEffect(AEmitterCameraLensEffectBase* LensEffectEmitterClass);
};

// Class Engine.NavigationObjectBase
// Size: 0x248 (Inherited: 0x220)
struct ANavigationObjectBase : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x228(0x08)
	UBillboardComponent* GoodSprite; // 0x230(0x08)
	UBillboardComponent* BadSprite; // 0x238(0x08)
	char bIsPIEPlayerStart : 1; // 0x240(0x01)
};

// Class Engine.PlayerStart
// Size: 0x250 (Inherited: 0x248)
struct APlayerStart : ANavigationObjectBase {
	FName PlayerStartTag; // 0x248(0x08)
};

// Class Engine.PlayerState
// Size: 0x320 (Inherited: 0x220)
struct APlayerState : AInfo {
	float Score; // 0x220(0x04)
	int32_t PlayerId; // 0x224(0x04)
	char Ping; // 0x228(0x01)
	char bShouldUpdateReplicatedPing : 1; // 0x22a(0x01)
	char bIsSpectator : 1; // 0x22a(0x01)
	char bOnlySpectator : 1; // 0x22a(0x01)
	char bIsABot : 1; // 0x22a(0x01)
	char pad_229_4 : 1; // 0x229(0x01)
	char bIsInactive : 1; // 0x22a(0x01)
	char bFromPreviousLevel : 1; // 0x22a(0x01)
	int32_t StartTime; // 0x22c(0x04)
	ULocalMessage* EngineMessageClass; // 0x230(0x08)
	FString SavedNetworkAddress; // 0x240(0x10)
	FUniqueNetIdRepl UniqueId; // 0x250(0x28)
	APawn* PawnPrivate; // 0x280(0x08)
	FString PlayerNamePrivate; // 0x300(0x10)

	void ReceiveOverrideWith(APlayerState* OldPlayerState);
	void ReceiveCopyProperties(APlayerState* NewPlayerState);
	void OnRep_UniqueId();
	void OnRep_Score();
	void OnRep_PlayerName();
	void OnRep_PlayerId();
	void OnRep_bIsInactive();
	FString GetPlayerName();
};

// Class Engine.PrimaryDataAsset
// Size: 0x30 (Inherited: 0x30)
struct UPrimaryDataAsset : UDataAsset {
};

// Class Engine.WorldSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UWorldSubsystem : USubsystem {
};

// Class Engine.Character
// Size: 0x4c0 (Inherited: 0x280)
struct ACharacter : APawn {
	USkeletalMeshComponent* Mesh; // 0x280(0x08)
	UCharacterMovementComponent* CharacterMovement; // 0x288(0x08)
	UCapsuleComponent* CapsuleComponent; // 0x290(0x08)
	FBasedMovementInfo BasedMovement; // 0x298(0x30)
	FBasedMovementInfo ReplicatedBasedMovement; // 0x2c8(0x30)
	float AnimRootMotionTranslationScale; // 0x2f8(0x04)
	FVector BaseTranslationOffset; // 0x2fc(0x0c)
	FQuat BaseRotationOffset; // 0x310(0x10)
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x320(0x04)
	float ReplayLastTransformUpdateTimeStamp; // 0x324(0x04)
	char ReplicatedMovementMode; // 0x328(0x01)
	bool bInBaseReplication; // 0x329(0x01)
	float CrouchedEyeHeight; // 0x32c(0x04)
	char bIsCrouched : 1; // 0x330(0x01)
	char bProxyIsJumpForceApplied : 1; // 0x330(0x01)
	char bPressedJump : 1; // 0x330(0x01)
	char bClientUpdating : 1; // 0x330(0x01)
	char bClientWasFalling : 1; // 0x330(0x01)
	char bClientResimulateRootMotion : 1; // 0x330(0x01)
	char bClientResimulateRootMotionSources : 1; // 0x330(0x01)
	char bSimGravityDisabled : 1; // 0x330(0x01)
	char bClientCheckEncroachmentOnNetUpdate : 1; // 0x331(0x01)
	char bServerMoveIgnoreRootMotion : 1; // 0x331(0x01)
	char bWasJumping : 1; // 0x331(0x01)
	float JumpKeyHoldTime; // 0x334(0x04)
	float JumpForceTimeRemaining; // 0x338(0x04)
	float ProxyJumpForceStartedTime; // 0x33c(0x04)
	float JumpMaxHoldTime; // 0x340(0x04)
	int32_t JumpMaxCount; // 0x344(0x04)
	int32_t JumpCurrentCount; // 0x348(0x04)
	FMulticastInlineDelegate OnReachedJumpApex; // 0x350(0x10)
	FMulticastInlineDelegate MovementModeChangedDelegate; // 0x370(0x10)
	FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x380(0x10)
	FRootMotionSourceGroup SavedRootMotion; // 0x390(0x38)
	FRootMotionMovementParams ClientRootMotionParams; // 0x3d0(0x40)
	TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x410(0x10)
	FRepRootMotionMontage RepRootMotion; // 0x420(0x98)

	void UnCrouch(bool bClientSimulation);
	void StopJumping();
	void StopAnimMontage(UAnimMontage* AnimMontage);
	void ServerMoveOld(float OldTimeStamp, FVector_NetQuantize10 OldAccel, char OldMoveFlags);
	void ServerMoveNoBase(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, char ClientMovementMode);
	void ServerMoveDualNoBase(float TimeStamp0, FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, char ClientMovementMode);
	void ServerMoveDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, char ClientMovementMode);
	void ServerMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, char ClientMovementMode);
	void ServerMove(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, char ClientMovementMode);
	void RootMotionDebugClientPrintOnScreen(FString inString);
	float PlayAnimMontage(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName);
	void OnWalkingOffLedge(FVector PreviousFloorImpactNormal, FVector PreviousFloorContactNormal, FVector PreviousLocation, float TimeDelta);
	void OnRep_RootMotion();
	void OnRep_ReplicatedBasedMovement();
	void OnRep_ReplayLastTransformUpdateTimeStamp();
	void OnRep_IsCrouched();
	void OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
	void OnLanded(FHitResult Hit);
	void OnJumped();
	void LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
	void K2_UpdateCustomMovement(float DeltaTime);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode);
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
	void ClientVeryShortAdjustPosition(float Timestamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode);
	void ClientCheatWalk();
	void ClientCheatGhost();
	void ClientCheatFly();
	void ClientAdjustRootMotionSourcePosition(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode);
	void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode);
	void ClientAdjustPosition(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode);
	void ClientAckGoodMove(float Timestamp);
	bool CanJumpInternal();
	bool CanJump();
	bool CanCrouch();
	void CacheInitialMeshOffset(FVector MeshRelativeLocation, FRotator MeshRelativeRotation);
};

// Class Engine.CharacterMovementComponent
// Size: 0x610 (Inherited: 0x138)
struct UCharacterMovementComponent : UPawnMovementComponent {
	ACharacter* CharacterOwner; // 0x148(0x08)
	float GravityScale; // 0x150(0x04)
	float MaxStepHeight; // 0x154(0x04)
	float JumpZVelocity; // 0x158(0x04)
	float JumpOffJumpZFactor; // 0x15c(0x04)
	float WalkableFloorAngle; // 0x160(0x04)
	float WalkableFloorZ; // 0x164(0x04)
	enum class EMovementMode MovementMode; // 0x168(0x01)
	char CustomMovementMode; // 0x169(0x01)
	enum class ENetworkSmoothingMode NetworkSmoothingMode; // 0x16a(0x01)
	float GroundFriction; // 0x16c(0x04)
	float MaxWalkSpeed; // 0x18c(0x04)
	float MaxWalkSpeedCrouched; // 0x190(0x04)
	float MaxSwimSpeed; // 0x194(0x04)
	float MaxFlySpeed; // 0x198(0x04)
	float MaxCustomMovementSpeed; // 0x19c(0x04)
	float MaxAcceleration; // 0x1a0(0x04)
	float MinAnalogWalkSpeed; // 0x1a4(0x04)
	float BrakingFrictionFactor; // 0x1a8(0x04)
	float BrakingFriction; // 0x1ac(0x04)
	float BrakingSubStepTime; // 0x1b0(0x04)
	float BrakingDecelerationWalking; // 0x1b4(0x04)
	float BrakingDecelerationFalling; // 0x1b8(0x04)
	float BrakingDecelerationSwimming; // 0x1bc(0x04)
	float BrakingDecelerationFlying; // 0x1c0(0x04)
	float AirControl; // 0x1c4(0x04)
	float AirControlBoostMultiplier; // 0x1c8(0x04)
	float AirControlBoostVelocityThreshold; // 0x1cc(0x04)
	float FallingLateralFriction; // 0x1d0(0x04)
	float CrouchedHalfHeight; // 0x1d4(0x04)
	float Buoyancy; // 0x1d8(0x04)
	float PerchRadiusThreshold; // 0x1dc(0x04)
	float PerchAdditionalHeight; // 0x1e0(0x04)
	FRotator RotationRate; // 0x1e4(0x0c)
	char bUseSeparateBrakingFriction : 1; // 0x1f0(0x01)
	char bApplyGravityWhileJumping : 1; // 0x1f0(0x01)
	char bUseControllerDesiredRotation : 1; // 0x1f0(0x01)
	char bOrientRotationToMovement : 1; // 0x1f0(0x01)
	char bSweepWhileNavWalking : 1; // 0x1f0(0x01)
	char pad_1C3_5 : 1; // 0x1c3(0x01)
	char bMovementInProgress : 1; // 0x1f0(0x01)
	char bEnableScopedMovementUpdates : 1; // 0x1f0(0x01)
	char bEnableServerDualMoveScopedMovementUpdates : 1; // 0x1f1(0x01)
	char bForceMaxAccel : 1; // 0x1f1(0x01)
	char bRunPhysicsWithNoController : 1; // 0x1f1(0x01)
	char bForceNextFloorCheck : 1; // 0x1f1(0x01)
	char bShrinkProxyCapsule : 1; // 0x1f1(0x01)
	char bCanWalkOffLedges : 1; // 0x1f1(0x01)
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x1f1(0x01)
	char bNetworkSkipProxyPredictionOnNetUpdate : 1; // 0x1f2(0x01)
	char pad_1C5_0 : 2; // 0x1c5(0x01)
	char bNetworkAlwaysReplicateTransformUpdateTimestamp : 1; // 0x1f2(0x01)
	char bDeferUpdateMoveComponent : 1; // 0x1f2(0x01)
	char bEnablePhysicsInteraction : 1; // 0x1f2(0x01)
	char bTouchForceScaledToMass : 1; // 0x1f2(0x01)
	char bPushForceScaledToMass : 1; // 0x1f2(0x01)
	char bPushForceUsingZOffset : 1; // 0x1f2(0x01)
	char bScalePushForceToVelocity : 1; // 0x1f3(0x01)
	USceneComponent* DeferredUpdatedMoveComponent; // 0x1f8(0x08)
	float MaxOutOfWaterStepHeight; // 0x200(0x04)
	float OutofWaterZ; // 0x204(0x04)
	float Mass; // 0x208(0x04)
	float StandingDownwardForceScale; // 0x20c(0x04)
	float InitialPushForceFactor; // 0x210(0x04)
	float PushForceFactor; // 0x214(0x04)
	float PushForcePointZOffsetFactor; // 0x218(0x04)
	float TouchForceFactor; // 0x21c(0x04)
	float MinTouchForce; // 0x220(0x04)
	float MaxTouchForce; // 0x224(0x04)
	float RepulsionForce; // 0x228(0x04)
	FVector Acceleration; // 0x22c(0x0c)
	FQuat LastUpdateRotation; // 0x240(0x10)
	FVector LastUpdateLocation; // 0x250(0x0c)
	FVector LastUpdateVelocity; // 0x25c(0x0c)
	float ServerLastTransformUpdateTimeStamp; // 0x268(0x04)
	float ServerLastClientGoodMoveAckTime; // 0x26c(0x04)
	float ServerLastClientAdjustmentTime; // 0x270(0x04)
	FVector PendingImpulseToApply; // 0x274(0x0c)
	FVector PendingForceToApply; // 0x280(0x0c)
	float AnalogInputModifier; // 0x28c(0x04)
	float MaxSimulationTimeStep; // 0x29c(0x04)
	int32_t MaxSimulationIterations; // 0x2a0(0x04)
	int32_t MaxJumpApexAttemptsPerSimulation; // 0x2a4(0x04)
	float MaxDepenetrationWithGeometry; // 0x2a8(0x04)
	float MaxDepenetrationWithGeometryAsProxy; // 0x2ac(0x04)
	float MaxDepenetrationWithPawn; // 0x2b0(0x04)
	float MaxDepenetrationWithPawnAsProxy; // 0x2b4(0x04)
	float NetworkSimulatedSmoothLocationTime; // 0x2b8(0x04)
	float NetworkSimulatedSmoothRotationTime; // 0x2bc(0x04)
	float ListenServerNetworkSimulatedSmoothLocationTime; // 0x2c0(0x04)
	float ListenServerNetworkSimulatedSmoothRotationTime; // 0x2c4(0x04)
	float NetProxyShrinkRadius; // 0x2c8(0x04)
	float NetProxyShrinkHalfHeight; // 0x2cc(0x04)
	float NetworkMaxSmoothUpdateDistance; // 0x2d0(0x04)
	float NetworkNoSmoothUpdateDistance; // 0x2d4(0x04)
	float NetworkMinTimeBetweenClientAckGoodMoves; // 0x2d8(0x04)
	float NetworkMinTimeBetweenClientAdjustments; // 0x2dc(0x04)
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; // 0x2e0(0x04)
	float NetworkLargeClientCorrectionDistance; // 0x2e4(0x04)
	float LedgeCheckThreshold; // 0x2e8(0x04)
	float JumpOutOfWaterPitch; // 0x2ec(0x04)
	FFindFloorResult CurrentFloor; // 0x2f0(0x94)
	enum class EMovementMode DefaultLandMovementMode; // 0x384(0x01)
	enum class EMovementMode DefaultWaterMovementMode; // 0x385(0x01)
	enum class EMovementMode GroundMovementMode; // 0x386(0x01)
	char bMaintainHorizontalGroundVelocity : 1; // 0x387(0x01)
	char bImpartBaseVelocityX : 1; // 0x387(0x01)
	char bImpartBaseVelocityY : 1; // 0x387(0x01)
	char bImpartBaseVelocityZ : 1; // 0x387(0x01)
	char bImpartBaseAngularVelocity : 1; // 0x387(0x01)
	char bJustTeleported : 1; // 0x387(0x01)
	char bNetworkUpdateReceived : 1; // 0x387(0x01)
	char pad_342_0 : 7; // 0x342(0x01)
	char bNetworkMovementModeChanged : 1; // 0x387(0x01)
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x388(0x01)
	char bServerAcceptClientAuthoritativePosition : 1; // 0x388(0x01)
	char bNotifyApex : 1; // 0x388(0x01)
	char bCheatFlying : 1; // 0x388(0x01)
	char bWantsToCrouch : 1; // 0x388(0x01)
	char bCrouchMaintainsBaseLocation : 1; // 0x388(0x01)
	char bIgnoreBaseRotation : 1; // 0x388(0x01)
	char bFastAttachedMove : 1; // 0x388(0x01)
	char bAlwaysCheckFloor : 1; // 0x389(0x01)
	char bUseFlatBaseForFloorChecks : 1; // 0x389(0x01)
	char bPerformingJumpOff : 1; // 0x389(0x01)
	char bWantsToLeaveNavWalking : 1; // 0x389(0x01)
	char bUseRVOAvoidance : 1; // 0x389(0x01)
	char bRequestedMoveUseAcceleration : 1; // 0x389(0x01)
	char pad_344_6 : 1; // 0x344(0x01)
	char bWasSimulatingRootMotion : 1; // 0x389(0x01)
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x38a(0x01)
	char bHasRequestedVelocity : 1; // 0x38a(0x01)
	char bRequestedMoveWithMaxSpeed : 1; // 0x38a(0x01)
	char bWasAvoidanceUpdated : 1; // 0x38a(0x01)
	char pad_345_4 : 2; // 0x345(0x01)
	char bProjectNavMeshWalking : 1; // 0x38a(0x01)
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x38a(0x01)
	float AvoidanceConsiderationRadius; // 0x39c(0x04)
	FVector RequestedVelocity; // 0x3a0(0x0c)
	int32_t AvoidanceUID; // 0x3ac(0x04)
	FNavAvoidanceMask AvoidanceGroup; // 0x3b0(0x04)
	FNavAvoidanceMask GroupsToAvoid; // 0x3b4(0x04)
	FNavAvoidanceMask GroupsToIgnore; // 0x3b8(0x04)
	float AvoidanceWeight; // 0x3bc(0x04)
	FVector PendingLaunchVelocity; // 0x3c0(0x0c)
	float NavMeshProjectionInterval; // 0x470(0x04)
	float NavMeshProjectionTimer; // 0x474(0x04)
	float NavMeshProjectionInterpSpeed; // 0x478(0x04)
	float NavMeshProjectionHeightScaleUp; // 0x47c(0x04)
	float NavMeshProjectionHeightScaleDown; // 0x480(0x04)
	float NavWalkingFloorDistTolerance; // 0x484(0x04)
	FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x488(0x30)
	float MinTimeBetweenTimeStampResets; // 0x4d0(0x04)
	FRootMotionSourceGroup CurrentRootMotion; // 0x4d8(0x38)
	FRootMotionMovementParams RootMotionParams; // 0x5a0(0x40)
	FVector AnimRootMotionVelocity; // 0x5e0(0x0c)

	void SetWalkableFloorZ(float InWalkableFloorZ);
	void SetWalkableFloorAngle(float InWalkableFloorAngle);
	void SetMovementMode(enum class EMovementMode NewMovementMode, char NewCustomMode);
	void SetGroupsToIgnoreMask(FNavAvoidanceMask GroupMask);
	void SetGroupsToIgnore(int32_t GroupFlags);
	void SetGroupsToAvoidMask(FNavAvoidanceMask GroupMask);
	void SetGroupsToAvoid(int32_t GroupFlags);
	void SetAvoidanceGroupMask(FNavAvoidanceMask GroupMask);
	void SetAvoidanceGroup(int32_t GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	float K2_GetWalkableFloorZ();
	float K2_GetWalkableFloorAngle();
	float K2_GetModifiedMaxAcceleration();
	void K2_FindFloor(FVector CapsuleLocation, FFindFloorResult FloorResult);
	void K2_ComputeFloorDist(FVector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, FFindFloorResult FloorResult);
	bool IsWalking();
	bool IsWalkable(FHitResult Hit);
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
	void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
	void AddImpulse(FVector Impulse, bool bVelocityChange);
	void AddForce(FVector force);
};

// Class Engine.TriggerBase
// Size: 0x228 (Inherited: 0x220)
struct ATriggerBase : AActor {
	UShapeComponent* CollisionComponent; // 0x220(0x08)
};

// Class Engine.TriggerBox
// Size: 0x228 (Inherited: 0x228)
struct ATriggerBox : ATriggerBase {
};

// Class Engine.ProjectileMovementComponent
// Size: 0x1d0 (Inherited: 0xf0)
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0xf0(0x04)
	float MaxSpeed; // 0xf4(0x04)
	char bRotationFollowsVelocity : 1; // 0xf8(0x01)
	char bRotationRemainsVertical : 1; // 0xf8(0x01)
	char bShouldBounce : 1; // 0xf8(0x01)
	char bInitialVelocityInLocalSpace : 1; // 0xf8(0x01)
	char bForceSubStepping : 1; // 0xf8(0x01)
	char bSimulationEnabled : 1; // 0xf8(0x01)
	char bSweepCollision : 1; // 0xf8(0x01)
	char bIsHomingProjectile : 1; // 0xf8(0x01)
	char bBounceAngleAffectsFriction : 1; // 0xf9(0x01)
	char bIsSliding : 1; // 0xf9(0x01)
	char bInterpMovement : 1; // 0xf9(0x01)
	char bInterpRotation : 1; // 0xf9(0x01)
	float PreviousHitTime; // 0xfc(0x04)
	FVector PreviousHitNormal; // 0x100(0x0c)
	float ProjectileGravityScale; // 0x10c(0x04)
	float Buoyancy; // 0x110(0x04)
	float Bounciness; // 0x114(0x04)
	float Friction; // 0x118(0x04)
	float BounceVelocityStopSimulatingThreshold; // 0x11c(0x04)
	float MinFrictionFraction; // 0x120(0x04)
	FMulticastInlineDelegate OnProjectileBounce; // 0x128(0x10)
	FMulticastInlineDelegate OnProjectileStop; // 0x138(0x10)
	float HomingAccelerationMagnitude; // 0x148(0x04)
	TWeakObjectPtr<USceneComponent> HomingTargetComponent; // 0x14c(0x08)
	float MaxSimulationTimeStep; // 0x154(0x04)
	int32_t MaxSimulationIterations; // 0x158(0x04)
	int32_t BounceAdditionalIterations; // 0x15c(0x04)
	float InterpLocationTime; // 0x160(0x04)
	float InterpRotationTime; // 0x164(0x04)
	float InterpLocationMaxLagDistance; // 0x168(0x04)
	float InterpLocationSnapToTargetDistance; // 0x16c(0x04)

	void StopSimulating(FHitResult HitResult);
	void SetVelocityInLocalSpace(FVector NewVelocity);
	void SetInterpolatedComponent(USceneComponent* Component);
	void ResetInterpolation();
	void OnProjectileStopDelegate__DelegateSignature(FHitResult ImpactResult);
	void OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity);
	void MoveInterpolationTarget(FVector NewLocation, FRotator NewRotation);
	FVector LimitVelocity(FVector NewVelocity);
	bool IsVelocityUnderSimulationThreshold();
	bool IsInterpolationComplete();
};

// Class Engine.BoxComponent
// Size: 0x420 (Inherited: 0x410)
struct UBoxComponent : UShapeComponent {
	FVector BoxExtent; // 0x408(0x0c)
	float LineThickness; // 0x414(0x04)

	void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);
	FVector GetUnscaledBoxExtent();
	FVector GetScaledBoxExtent();
};

// Class Engine.SplineMeshComponent
// Size: 0x520 (Inherited: 0x480)
struct USplineMeshComponent : UStaticMeshComponent {
	FSplineMeshParams SplineParams; // 0x488(0x58)
	FVector SplineUpDir; // 0x4e0(0x0c)
	float SplineBoundaryMin; // 0x4ec(0x04)
	FGuid CachedMeshBodySetupGuid; // 0x4f0(0x10)
	UBodySetup* BodySetup; // 0x500(0x08)
	float SplineBoundaryMax; // 0x508(0x04)
	char bAllowSplineEditingPerInstance : 1; // 0x50c(0x01)
	char bSmoothInterpRollScale : 1; // 0x50c(0x01)
	char bMeshDirty : 1; // 0x50c(0x01)
	enum class ESplineMeshAxis ForwardAxis; // 0x50d(0x01)
	float VirtualTextureMainPassMaxDrawDistance; // 0x510(0x04)

	void UpdateMesh();
	void SetStartTangent(FVector StartTangent, bool bUpdateMesh);
	void SetStartScale(FVector2D StartScale, bool bUpdateMesh);
	void SetStartRoll(float StartRoll, bool bUpdateMesh);
	void SetStartPosition(FVector StartPos, bool bUpdateMesh);
	void SetStartOffset(FVector2D StartOffset, bool bUpdateMesh);
	void SetStartAndEnd(FVector StartPos, FVector StartTangent, FVector EndPos, FVector EndTangent, bool bUpdateMesh);
	void SetSplineUpDir(FVector InSplineUpDir, bool bUpdateMesh);
	void SetForwardAxis(enum class ESplineMeshAxis InForwardAxis, bool bUpdateMesh);
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
	enum class ESplineMeshAxis GetForwardAxis();
	FVector GetEndTangent();
	FVector2D GetEndScale();
	float GetEndRoll();
	FVector GetEndPosition();
	FVector2D GetEndOffset();
	float GetBoundaryMin();
	float GetBoundaryMax();
};

// Class Engine.SceneCaptureComponent
// Size: 0x290 (Inherited: 0x1f0)
struct USceneCaptureComponent : USceneComponent {
	enum class ESceneCapturePrimitiveRenderMode PrimitiveRenderMode; // 0x1f0(0x01)
	enum class ESceneCaptureSource CaptureSource; // 0x1f1(0x01)
	char bCaptureEveryFrame : 1; // 0x1f2(0x01)
	char bCaptureOnMovement : 1; // 0x1f2(0x01)
	bool bAlwaysPersistRenderingState; // 0x1f3(0x01)
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents; // 0x1f8(0x10)
	TArray<AActor*> HiddenActors; // 0x208(0x10)
	TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents; // 0x218(0x10)
	TArray<AActor*> ShowOnlyActors; // 0x228(0x10)
	float LODDistanceFactor; // 0x238(0x04)
	float MaxViewDistanceOverride; // 0x23c(0x04)
	int32_t CaptureSortPriority; // 0x240(0x04)
	bool bUseRayTracingIfEnabled; // 0x244(0x01)
	TArray<FEngineShowFlagsSetting> ShowFlagSettings; // 0x248(0x10)
	FString ProfilingEventName; // 0x268(0x10)

	void ShowOnlyComponent(UPrimitiveComponent* InComponent);
	void ShowOnlyActorComponents(AActor* InActor, bool bIncludeFromChildActors);
	void SetCaptureSortPriority(int32_t NewCaptureSortPriority);
	void RemoveShowOnlyComponent(UPrimitiveComponent* InComponent);
	void RemoveShowOnlyActorComponents(AActor* InActor, bool bIncludeFromChildActors);
	void HideComponent(UPrimitiveComponent* InComponent);
	void HideActorComponents(AActor* InActor, bool bIncludeFromChildActors);
	void ClearShowOnlyComponents();
	void ClearHiddenComponents();
};

// Class Engine.SceneCaptureComponent2D
// Size: 0x880 (Inherited: 0x290)
struct USceneCaptureComponent2D : USceneCaptureComponent {
	enum class ECameraProjectionMode ProjectionType; // 0x288(0x01)
	float FOVAngle; // 0x28c(0x04)
	float OrthoWidth; // 0x290(0x04)
	UTextureRenderTarget2D* TextureTarget; // 0x298(0x08)
	enum class ESceneCaptureCompositeMode CompositeMode; // 0x2a0(0x01)
	FPostProcessSettings PostProcessSettings; // 0x2b0(0x540)
	float PostProcessBlendWeight; // 0x7f0(0x04)
	char bOverride_CustomNearClippingPlane : 1; // 0x7f4(0x01)
	float CustomNearClippingPlane; // 0x7f8(0x04)
	bool bUseCustomProjectionMatrix; // 0x7fc(0x01)
	FMatrix CustomProjectionMatrix; // 0x800(0x40)
	bool bEnableClipPlane; // 0x840(0x01)
	FVector ClipPlaneBase; // 0x844(0x0c)
	FVector ClipPlaneNormal; // 0x850(0x0c)
	char bCameraCutThisFrame : 1; // 0x85c(0x01)
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x85c(0x01)
	bool bDisableFlipCopyGLES; // 0x860(0x01)

	void CaptureScene();
	void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);
};

// Class Engine.SkyLight
// Size: 0x230 (Inherited: 0x220)
struct ASkyLight : AInfo {
	USkyLightComponent* LightComponent; // 0x220(0x08)
	char bEnabled : 1; // 0x228(0x01)

	void OnRep_bEnabled();
};

// Class Engine.Texture
// Size: 0xb8 (Inherited: 0x40)
struct UTexture : UStreamableRenderAsset {
	FGuid LightingGuid; // 0x48(0x10)
	int32_t LODBias; // 0x58(0x04)
	enum class TextureCompressionSettings CompressionSettings; // 0x5c(0x01)
	enum class TextureFilter Filter; // 0x5d(0x01)
	enum class ETextureMipLoadOptions MipLoadOptions; // 0x5e(0x01)
	enum class TextureGroup LODGroup; // 0x5f(0x01)
	char SRGB : 1; // 0x60(0x01)
	char bNoTiling : 1; // 0x60(0x01)
	char VirtualTextureStreaming : 1; // 0x60(0x01)
	char CompressionYCoCg : 1; // 0x60(0x01)
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x60(0x01)
	TArray<UAssetUserData*> AssetUserData; // 0x68(0x10)
};

// Class Engine.TextureCube
// Size: 0x110 (Inherited: 0xb8)
struct UTextureCube : UTexture {
};

// Class Engine.StaticMeshActor
// Size: 0x230 (Inherited: 0x220)
struct AStaticMeshActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220(0x08)
	bool bStaticMeshReplicateMovement; // 0x228(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x229(0x01)

	void SetMobility(enum class EComponentMobility InMobility);
};

// Class Engine.Brush
// Size: 0x258 (Inherited: 0x220)
struct ABrush : AActor {
	enum class EBrushType BrushType; // 0x220(0x01)
	FColor BrushColor; // 0x224(0x04)
	int32_t PolyFlags; // 0x228(0x04)
	char bColored : 1; // 0x22c(0x01)
	char bSolidWhenSelected : 1; // 0x22c(0x01)
	char bPlaceableFromClassBrowser : 1; // 0x22c(0x01)
	char bNotForClientOrServer : 1; // 0x22c(0x01)
	UModel* Brush; // 0x230(0x08)
	UBrushComponent* BrushComponent; // 0x238(0x08)
	char bInManipulation : 1; // 0x240(0x01)
	TArray<FGeomSelection> SavedSelections; // 0x248(0x10)
};

// Class Engine.Volume
// Size: 0x258 (Inherited: 0x258)
struct AVolume : ABrush {
};

// Class Engine.MaterialInterface
// Size: 0x88 (Inherited: 0x28)
struct UMaterialInterface : UObject {
	USubsurfaceProfile* SubsurfaceProfile; // 0x38(0x08)
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50(0x10)
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x60(0x10)
	TArray<UAssetUserData*> AssetUserData; // 0x70(0x10)

	void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, bool bFastResponse);
	UPhysicalMaterialMask* GetPhysicalMaterialMask();
	UPhysicalMaterial* GetPhysicalMaterialFromMap(int32_t Index);
	UPhysicalMaterial* GetPhysicalMaterial();
	FMaterialParameterInfo GetParameterInfo(enum class EMaterialParameterAssociation Association, FName ParameterName, UMaterialFunctionInterface* LayerFunction);
	UMaterial* GetBaseMaterial();
};

// Class Engine.MaterialInstance
// Size: 0x408 (Inherited: 0x88)
struct UMaterialInstance : UMaterialInterface {
	UPhysicalMaterial* PhysMaterial; // 0x88(0x08)
	UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0x90(0x40)
	UMaterialInterface* Parent; // 0xd0(0x08)
	char bHasStaticPermutationResource : 1; // 0xd8(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0xd8(0x01)
	TArray<FScalarParameterValue> ScalarParameterValues; // 0xe0(0x10)
	TArray<FVectorParameterValue> VectorParameterValues; // 0xf0(0x10)
	TArray<FTextureParameterValue> TextureParameterValues; // 0x100(0x10)
	TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0x110(0x10)
	TArray<FFontParameterValue> FontParameterValues; // 0x120(0x10)
	FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0x130(0x08)
	FStaticParameterSet StaticParameters; // 0x148(0x40)
	FMaterialCachedParameters CachedLayerParameters; // 0x188(0x1a0)
	TArray<UObject*> CachedReferencedTextures; // 0x328(0x10)
};

// Class Engine.MaterialInstanceConstant
// Size: 0x410 (Inherited: 0x408)
struct UMaterialInstanceConstant : UMaterialInstance {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x408(0x08)

	FLinearColor K2_GetVectorParameterValue(FName ParameterName);
	UTexture* K2_GetTextureParameterValue(FName ParameterName);
	float K2_GetScalarParameterValue(FName ParameterName);
};

// Class Engine.MaterialExpression
// Size: 0x40 (Inherited: 0x28)
struct UMaterialExpression : UObject {
	UMaterial* Material; // 0x28(0x08)
	UMaterialFunction* Function; // 0x30(0x08)
	char bIsParameterExpression : 1; // 0x38(0x01)
};

// Class Engine.MaterialExpressionCustomOutput
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionCustomOutput : UMaterialExpression {
};

// Class Engine.EngineCustomTimeStep
// Size: 0x28 (Inherited: 0x28)
struct UEngineCustomTimeStep : UObject {
};

// Class Engine.DynamicBlueprintBinding
// Size: 0x28 (Inherited: 0x28)
struct UDynamicBlueprintBinding : UObject {
};

// Class Engine.CameraActor
// Size: 0x790 (Inherited: 0x220)
struct ACameraActor : AActor {
	enum class EAutoReceiveInput AutoActivateForPlayer; // 0x220(0x01)
	UCameraComponent* CameraComponent; // 0x228(0x08)
	USceneComponent* SceneComponent; // 0x230(0x08)
	char bConstrainAspectRatio : 1; // 0x240(0x01)
	float AspectRatio; // 0x244(0x04)
	float FOVAngle; // 0x248(0x04)
	float PostProcessBlendWeight; // 0x24c(0x04)
	FPostProcessSettings PostProcessSettings; // 0x250(0x540)

	int32_t GetAutoActivatePlayerIndex();
};

// Class Engine.CameraComponent
// Size: 0x7b0 (Inherited: 0x1f0)
struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x1f0(0x04)
	float OrthoWidth; // 0x1f4(0x04)
	float OrthoNearClipPlane; // 0x1f8(0x04)
	float OrthoFarClipPlane; // 0x1fc(0x04)
	float AspectRatio; // 0x200(0x04)
	char bConstrainAspectRatio : 1; // 0x204(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x204(0x01)
	char bLockToHmd : 1; // 0x204(0x01)
	char bUsePawnControlRotation : 1; // 0x204(0x01)
	enum class ECameraProjectionMode ProjectionMode; // 0x205(0x01)
	float PostProcessBlendWeight; // 0x240(0x04)
	FPostProcessSettings PostProcessSettings; // 0x270(0x540)

	void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
	void SetProjectionMode(enum class ECameraProjectionMode InProjectionMode);
	void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
	void SetOrthoWidth(float InOrthoWidth);
	void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
	void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
	void SetFieldOfView(float InFieldOfView);
	void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
	void SetAspectRatio(float InAspectRatio);
	void RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject);
	void OnCameraMeshHiddenChanged();
	void GetCameraView(float DeltaTime, FMinimalViewInfo DesiredView);
	void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);
};

// Class Engine.SoundBase
// Size: 0x160 (Inherited: 0x28)
struct USoundBase : UObject {
	USoundClass* SoundClassObject; // 0x28(0x08)
	char bDebug : 1; // 0x30(0x01)
	char bOverrideConcurrency : 1; // 0x30(0x01)
	char bOutputToBusOnly : 1; // 0x30(0x01)
	char bHasDelayNode : 1; // 0x30(0x01)
	char bHasConcatenatorNode : 1; // 0x30(0x01)
	char bBypassVolumeScaleForPriority : 1; // 0x30(0x01)
	enum class EVirtualizationMode VirtualizationMode; // 0x31(0x01)
	TSet<USoundConcurrency*> ConcurrencySet; // 0x88(0x50)
	FSoundConcurrencySettings ConcurrencyOverrides; // 0xd8(0x20)
	float Duration; // 0xf8(0x04)
	float MaxDistance; // 0xfc(0x04)
	float TotalSamples; // 0x100(0x04)
	float Priority; // 0x104(0x04)
	USoundAttenuation* AttenuationSettings; // 0x108(0x08)
	FSoundModulation Modulation; // 0x110(0x10)
	USoundSubmixBase* SoundSubmixObject; // 0x120(0x08)
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x128(0x10)
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x138(0x08)
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x140(0x10)
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x150(0x10)
};

// Class Engine.SoundWave
// Size: 0x310 (Inherited: 0x160)
struct USoundWave : USoundBase {
	int32_t CompressionQuality; // 0x160(0x04)
	int32_t StreamingPriority; // 0x164(0x04)
	enum class ESoundwaveSampleRateSettings SampleRateQuality; // 0x168(0x01)
	enum class ESoundGroup SoundGroup; // 0x16a(0x01)
	char bLooping : 1; // 0x16b(0x01)
	char bStreaming : 1; // 0x16b(0x01)
	char bSeekableStreaming : 1; // 0x16b(0x01)
	enum class ESoundWaveLoadingBehavior LoadingBehavior; // 0x16c(0x01)
	char pad_16B_3 : 2; // 0x16b(0x01)
	char bMature : 1; // 0x16d(0x01)
	char bManualWordWrap : 1; // 0x16d(0x01)
	char bSingleLine : 1; // 0x16d(0x01)
	char bIsAmbisonics : 1; // 0x16e(0x01)
	TArray<float> FrequenciesToAnalyze; // 0x170(0x10)
	TArray<FSoundWaveSpectralTimeData> CookedSpectralTimeData; // 0x180(0x10)
	TArray<FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData; // 0x190(0x10)
	int32_t InitialChunkSize; // 0x1a0(0x04)
	FString SpokenText; // 0x1e8(0x10)
	float SubtitlePriority; // 0x1f8(0x04)
	float Volume; // 0x1fc(0x04)
	float Pitch; // 0x200(0x04)
	int32_t NumChannels; // 0x204(0x04)
	int32_t SampleRate; // 0x208(0x04)
	TArray<FSubtitleCue> Subtitles; // 0x218(0x10)
	UCurveTable* Curves; // 0x228(0x08)
	UCurveTable* InternalCurves; // 0x230(0x08)
};

// Class Engine.SoundWaveProcedural
// Size: 0x360 (Inherited: 0x310)
struct USoundWaveProcedural : USoundWave {
};

// Class Engine.Model
// Size: 0x258 (Inherited: 0x28)
struct UModel : UObject {
};

// Class Engine.Channel
// Size: 0x70 (Inherited: 0x28)
struct UChannel : UObject {
	UNetConnection* Connection; // 0x28(0x08)
};

// Class Engine.ActorChannel
// Size: 0x298 (Inherited: 0x70)
struct UActorChannel : UChannel {
	AActor* Actor; // 0x70(0x08)
	TArray<UObject*> CreateSubObjects; // 0x160(0x10)
};

// Class Engine.AnimationAsset
// Size: 0x80 (Inherited: 0x28)
struct UAnimationAsset : UObject {
	USkeleton* Skeleton; // 0x38(0x08)
	TArray<UAnimMetaData*> MetaData; // 0x60(0x10)
	TArray<UAssetUserData*> AssetUserData; // 0x70(0x10)
};

// Class Engine.BlendSpaceBase
// Size: 0x148 (Inherited: 0x80)
struct UBlendSpaceBase : UAnimationAsset {
	bool bRotationBlendInMeshSpace; // 0x88(0x01)
	float AnimLength; // 0x8c(0x04)
	FInterpolationParameter InterpolationParam[0x3]; // 0x90(0x18)
	float TargetWeightInterpolationSpeedPerSec; // 0xa8(0x04)
	enum class ENotifyTriggerMode NotifyTriggerMode; // 0xac(0x01)
	TArray<FPerBoneInterpolation> PerBoneBlend; // 0xb0(0x10)
	int32_t SampleIndexWithMarkers; // 0xc0(0x04)
	TArray<FBlendSample> SampleData; // 0xc8(0x10)
	TArray<FEditorElement> GridSamples; // 0xd8(0x10)
	FBlendParameter BlendParameters[0x3]; // 0xe8(0x60)
};

// Class Engine.BlendSpace
// Size: 0x150 (Inherited: 0x148)
struct UBlendSpace : UBlendSpaceBase {
	enum class EBlendSpaceAxis AxisToScaleAnimation; // 0x148(0x01)
};

// Class Engine.AimOffsetBlendSpace
// Size: 0x150 (Inherited: 0x150)
struct UAimOffsetBlendSpace : UBlendSpace {
};

// Class Engine.BlendSpace1D
// Size: 0x150 (Inherited: 0x148)
struct UBlendSpace1D : UBlendSpaceBase {
	bool bScaleAnimation; // 0x148(0x01)
};

// Class Engine.AimOffsetBlendSpace1D
// Size: 0x150 (Inherited: 0x150)
struct UAimOffsetBlendSpace1D : UBlendSpace1D {
};

// Class Engine.AISystemBase
// Size: 0x58 (Inherited: 0x28)
struct UAISystemBase : UObject {
	FSoftClassPath AISystemClassName; // 0x28(0x18)
	FName AISystemModuleName; // 0x40(0x08)
	bool bInstantiateAISystemOnClient; // 0x50(0x01)
};

// Class Engine.AmbientSound
// Size: 0x228 (Inherited: 0x220)
struct AAmbientSound : AActor {
	UAudioComponent* AudioComponent; // 0x220(0x08)

	void Stop();
	void Play(float StartTime);
	void FadeOut(float FadeoutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
};

// Class Engine.AnimationSettings
// Size: 0x58 (Inherited: 0x38)
struct UAnimationSettings : UDeveloperSettings {
	int32_t CompressCommandletVersion; // 0x38(0x04)
	TArray<FString> KeyEndEffectorsMatchNameArray; // 0x40(0x10)
	bool ForceRecompression; // 0x50(0x01)
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x51(0x01)
	bool bForceBelowThreshold; // 0x52(0x01)
	bool bFirstRecompressUsingCurrentOrDefault; // 0x53(0x01)
	bool bRaiseMaxErrorToExisting; // 0x54(0x01)
	bool bEnablePerformanceLog; // 0x55(0x01)
	bool bStripAnimationDataOnDedicatedServer; // 0x56(0x01)
	bool bTickAnimationOnSkeletalMeshInit; // 0x57(0x01)
};

// Class Engine.AnimBlueprint
// Size: 0xc8 (Inherited: 0xa0)
struct UAnimBlueprint : UBlueprint {
	USkeleton* TargetSkeleton; // 0xa8(0x08)
	TArray<FAnimGroupInfo> Groups; // 0xb0(0x10)
	bool bUseMultiThreadedAnimationUpdate; // 0xc0(0x01)
	bool bWarnAboutBlueprintUsage; // 0xc1(0x01)
};

// Class Engine.AnimBlueprintGeneratedClass
// Size: 0x4e8 (Inherited: 0x328)
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x330(0x10)
	USkeleton* TargetSkeleton; // 0x340(0x08)
	TArray<FAnimNotifyEvent> AnimNotifies; // 0x348(0x10)
	TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x358(0x50)
	TArray<FName> SyncGroupNames; // 0x428(0x10)
	TArray<FExposedValueHandler> EvaluateGraphExposedInputs; // 0x438(0x10)
	TMap<FName, FGraphAssetPlayerInformation> GraphAssetPlayerInformation; // 0x448(0x50)
	TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions; // 0x498(0x50)
};

// Class Engine.AnimBoneCompressionCodec
// Size: 0x38 (Inherited: 0x28)
struct UAnimBoneCompressionCodec : UObject {
	FString Description; // 0x28(0x10)
};

// Class Engine.AnimBoneCompressionSettings
// Size: 0x38 (Inherited: 0x28)
struct UAnimBoneCompressionSettings : UObject {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x28(0x10)
};

// Class Engine.AnimClassData
// Size: 0x268 (Inherited: 0x28)
struct UAnimClassData : UObject {
	TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x30(0x10)
	USkeleton* TargetSkeleton; // 0x40(0x08)
	TArray<FAnimNotifyEvent> AnimNotifies; // 0x48(0x10)
	TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x58(0x50)
	TArray<FAnimBlueprintFunction> AnimBlueprintFunctions; // 0xa8(0x10)
	TArray<FAnimBlueprintFunctionData> AnimBlueprintFunctionData; // 0xb8(0x10)
	TArray<TFieldPath<FStructProperty>> AnimNodeProperties; // 0xc8(0x10)
	TArray<TFieldPath<FStructProperty>> LinkedAnimGraphNodeProperties; // 0xe8(0x10)
	TArray<TFieldPath<FStructProperty>> LinkedAnimLayerNodeProperties; // 0x108(0x10)
	TArray<TFieldPath<FStructProperty>> PreUpdateNodeProperties; // 0x128(0x10)
	TArray<TFieldPath<FStructProperty>> DynamicResetNodeProperties; // 0x148(0x10)
	TArray<TFieldPath<FStructProperty>> StateMachineNodeProperties; // 0x168(0x10)
	TArray<TFieldPath<FStructProperty>> InitializationNodeProperties; // 0x188(0x10)
	TMap<FName, FGraphAssetPlayerInformation> GraphNameAssetPlayers; // 0x1a8(0x50)
	TArray<FName> SyncGroupNames; // 0x1f8(0x10)
	TArray<FExposedValueHandler> EvaluateGraphExposedInputs; // 0x208(0x10)
	TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions; // 0x218(0x50)
};

// Class Engine.AnimClassInterface
// Size: 0x28 (Inherited: 0x28)
struct UAnimClassInterface : UInterface {
};

// Class Engine.AnimSequenceBase
// Size: 0xa8 (Inherited: 0x80)
struct UAnimSequenceBase : UAnimationAsset {
	TArray<FAnimNotifyEvent> Notifies; // 0x80(0x10)
	float SequenceLength; // 0x90(0x04)
	float RateScale; // 0x94(0x04)
	FRawCurveTracks RawCurveData; // 0x98(0x10)

	float GetPlayLength();
};

// Class Engine.AnimCompositeBase
// Size: 0xa8 (Inherited: 0xa8)
struct UAnimCompositeBase : UAnimSequenceBase {
};

// Class Engine.AnimComposite
// Size: 0xb8 (Inherited: 0xa8)
struct UAnimComposite : UAnimCompositeBase {
	FAnimTrack AnimationTrack; // 0xa8(0x10)
};

// Class Engine.AnimCompress
// Size: 0x40 (Inherited: 0x38)
struct UAnimCompress : UAnimBoneCompressionCodec {
	char bNeedsSkeleton : 1; // 0x38(0x01)
	enum class AnimationCompressionFormat TranslationCompressionFormat; // 0x3c(0x01)
	enum class AnimationCompressionFormat RotationCompressionFormat; // 0x3d(0x01)
	enum class AnimationCompressionFormat ScaleCompressionFormat; // 0x3e(0x01)
};

// Class Engine.AnimCompress_BitwiseCompressOnly
// Size: 0x40 (Inherited: 0x40)
struct UAnimCompress_BitwiseCompressOnly : UAnimCompress {
};

// Class Engine.AnimCompress_LeastDestructive
// Size: 0x40 (Inherited: 0x40)
struct UAnimCompress_LeastDestructive : UAnimCompress_BitwiseCompressOnly {
};

// Class Engine.AnimCompress_RemoveLinearKeys
// Size: 0x60 (Inherited: 0x40)
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float MaxPosDiff; // 0x40(0x04)
	float MaxAngleDiff; // 0x44(0x04)
	float MaxScaleDiff; // 0x48(0x04)
	float MaxEffectorDiff; // 0x4c(0x04)
	float MinEffectorDiff; // 0x50(0x04)
	float EffectorDiffSocket; // 0x54(0x04)
	float ParentKeyScale; // 0x58(0x04)
	char bRetarget : 1; // 0x5c(0x01)
	char bActuallyFilterLinearKeys : 1; // 0x5c(0x01)
};

// Class Engine.AnimCompress_PerTrackCompression
// Size: 0xd8 (Inherited: 0x60)
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float MaxZeroingThreshold; // 0x60(0x04)
	float MaxPosDiffBitwise; // 0x64(0x04)
	float MaxAngleDiffBitwise; // 0x68(0x04)
	float MaxScaleDiffBitwise; // 0x6c(0x04)
	TArray<enum class AnimationCompressionFormat> AllowedRotationFormats; // 0x70(0x10)
	TArray<enum class AnimationCompressionFormat> AllowedTranslationFormats; // 0x80(0x10)
	TArray<enum class AnimationCompressionFormat> AllowedScaleFormats; // 0x90(0x10)
	char bResampleAnimation : 1; // 0xa0(0x01)
	float ResampledFramerate; // 0xa4(0x04)
	int32_t MinKeysForResampling; // 0xa8(0x04)
	char bUseAdaptiveError : 1; // 0xac(0x01)
	char bUseOverrideForEndEffectors : 1; // 0xac(0x01)
	int32_t TrackHeightBias; // 0xb0(0x04)
	float ParentingDivisor; // 0xb4(0x04)
	float ParentingDivisorExponent; // 0xb8(0x04)
	char bUseAdaptiveError2 : 1; // 0xbc(0x01)
	float RotationErrorSourceRatio; // 0xc0(0x04)
	float TranslationErrorSourceRatio; // 0xc4(0x04)
	float ScaleErrorSourceRatio; // 0xc8(0x04)
	float MaxErrorPerTrackRatio; // 0xcc(0x04)
	float PerturbationProbeSize; // 0xd0(0x04)
};

// Class Engine.AnimCompress_RemoveEverySecondKey
// Size: 0x48 (Inherited: 0x40)
struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; // 0x40(0x04)
	char bStartAtSecondKey : 1; // 0x44(0x01)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
// Size: 0x50 (Inherited: 0x40)
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; // 0x40(0x04)
	float MaxAngleDiff; // 0x44(0x04)
	float MaxScaleDiff; // 0x48(0x04)
};

// Class Engine.AnimCurveCompressionCodec
// Size: 0x28 (Inherited: 0x28)
struct UAnimCurveCompressionCodec : UObject {
};

// Class Engine.AnimCurveCompressionCodec_CompressedRichCurve
// Size: 0x28 (Inherited: 0x28)
struct UAnimCurveCompressionCodec_CompressedRichCurve : UAnimCurveCompressionCodec {
};

// Class Engine.AnimCurveCompressionCodec_UniformIndexable
// Size: 0x28 (Inherited: 0x28)
struct UAnimCurveCompressionCodec_UniformIndexable : UAnimCurveCompressionCodec {
};

// Class Engine.AnimCurveCompressionCodec_UniformlySampled
// Size: 0x28 (Inherited: 0x28)
struct UAnimCurveCompressionCodec_UniformlySampled : UAnimCurveCompressionCodec {
};

// Class Engine.AnimCurveCompressionSettings
// Size: 0x30 (Inherited: 0x28)
struct UAnimCurveCompressionSettings : UObject {
	UAnimCurveCompressionCodec* Codec; // 0x28(0x08)
};

// Class Engine.AnimLayerInterface
// Size: 0x28 (Inherited: 0x28)
struct UAnimLayerInterface : UInterface {
};

// Class Engine.AnimMetaData
// Size: 0x28 (Inherited: 0x28)
struct UAnimMetaData : UObject {
};

// Class Engine.AnimMontage
// Size: 0x1d0 (Inherited: 0xa8)
struct UAnimMontage : UAnimCompositeBase {
	FAlphaBlend BlendIn; // 0xa8(0x30)
	float BlendInTime; // 0xd8(0x04)
	FAlphaBlend BlendOut; // 0xe0(0x30)
	float BlendOutTime; // 0x110(0x04)
	float BlendOutTriggerTime; // 0x114(0x04)
	FName SyncGroup; // 0x118(0x08)
	int32_t SyncSlotIndex; // 0x120(0x04)
	FMarkerSyncData MarkerData; // 0x128(0x20)
	TArray<FCompositeSection> CompositeSections; // 0x148(0x10)
	TArray<FSlotAnimationTrack> SlotAnimTracks; // 0x158(0x10)
	TArray<FBranchingPoint> BranchingPoints; // 0x168(0x10)
	bool bEnableRootMotionTranslation; // 0x178(0x01)
	bool bEnableRootMotionRotation; // 0x179(0x01)
	bool bEnableAutoBlendOut; // 0x17a(0x01)
	enum class ERootMotionRootLock RootMotionRootLock; // 0x17b(0x01)
	TArray<FBranchingPointMarker> BranchingPointMarkers; // 0x180(0x10)
	TArray<int32_t> BranchingPointStateNotifyIndices; // 0x190(0x10)
	FTimeStretchCurve TimeStretchCurve; // 0x1a0(0x28)
	FName TimeStretchCurveName; // 0x1c8(0x08)

	float GetDefaultBlendOutTime();
};

// Class Engine.AnimNotify_PauseClothingSimulation
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_PauseClothingSimulation : UAnimNotify {
};

// Class Engine.AnimNotify_PlayParticleEffect
// Size: 0x90 (Inherited: 0x38)
struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	UParticleSystem* PSTemplate; // 0x38(0x08)
	FVector LocationOffset; // 0x40(0x0c)
	FRotator RotationOffset; // 0x4c(0x0c)
	FVector Scale; // 0x58(0x0c)
	char Attached : 1; // 0x80(0x01)
	FName SocketName; // 0x84(0x08)
};

// Class Engine.AnimNotify_PlaySound
// Size: 0x58 (Inherited: 0x38)
struct UAnimNotify_PlaySound : UAnimNotify {
	USoundBase* Sound; // 0x38(0x08)
	float VolumeMultiplier; // 0x40(0x04)
	float PitchMultiplier; // 0x44(0x04)
	char bFollow : 1; // 0x48(0x01)
	FName AttachName; // 0x4c(0x08)
};

// Class Engine.AnimNotify_ResetClothingSimulation
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_ResetClothingSimulation : UAnimNotify {
};

// Class Engine.AnimNotify_ResetDynamics
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_ResetDynamics : UAnimNotify {
};

// Class Engine.AnimNotify_ResumeClothingSimulation
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_ResumeClothingSimulation : UAnimNotify {
};

// Class Engine.AnimNotifyState_DisableRootMotion
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_DisableRootMotion : UAnimNotifyState {
};

// Class Engine.AnimNotifyState_Trail
// Size: 0x58 (Inherited: 0x30)
struct UAnimNotifyState_Trail : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30(0x08)
	FName FirstSocketName; // 0x38(0x08)
	FName SecondSocketName; // 0x40(0x08)
	enum class ETrailWidthMode WidthScaleMode; // 0x48(0x01)
	FName WidthScaleCurve; // 0x4c(0x08)
	char bRecycleSpawnedSystems : 1; // 0x54(0x01)

	UParticleSystem* OverridePSTemplate(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
};

// Class Engine.AnimSequence
// Size: 0x1a0 (Inherited: 0xa8)
struct UAnimSequence : UAnimSequenceBase {
	int32_t NumFrames; // 0xa8(0x04)
	TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable; // 0xb0(0x10)
	UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xd0(0x08)
	UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd8(0x08)
	enum class EAdditiveAnimationType AdditiveAnimType; // 0x150(0x01)
	enum class EAdditiveBasePoseType RefPoseType; // 0x151(0x01)
	UAnimSequence* RefPoseSeq; // 0x158(0x08)
	int32_t RefFrameIndex; // 0x160(0x04)
	FName RetargetSource; // 0x164(0x08)
	enum class EAnimInterpolationType Interpolation; // 0x16c(0x01)
	bool bEnableRootMotion; // 0x16d(0x01)
	enum class ERootMotionRootLock RootMotionRootLock; // 0x16e(0x01)
	bool bForceRootLock; // 0x16f(0x01)
	bool bUseNormalizedRootMotionScale; // 0x170(0x01)
	bool bRootMotionSettingsCopiedFromMontage; // 0x171(0x01)
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x178(0x10)
};

// Class Engine.AnimSet
// Size: 0xf0 (Inherited: 0x28)
struct UAnimSet : UObject {
	char bAnimRotationOnly : 1; // 0x28(0x01)
	TArray<FName> TrackBoneNames; // 0x30(0x10)
	TArray<FAnimSetMeshLinkup> LinkupCache; // 0x40(0x10)
	TArray<char> BoneUseAnimTranslation; // 0x50(0x10)
	TArray<char> ForceUseMeshTranslation; // 0x60(0x10)
	TArray<FName> UseTranslationBoneNames; // 0x70(0x10)
	TArray<FName> ForceMeshTranslationBoneNames; // 0x80(0x10)
	FName PreviewSkelMeshName; // 0x90(0x08)
	FName BestRatioSkelMeshName; // 0x98(0x08)
};

// Class Engine.AnimSingleNodeInstance
// Size: 0x280 (Inherited: 0x270)
struct UAnimSingleNodeInstance : UAnimInstance {
	UAnimationAsset* CurrentAsset; // 0x268(0x08)
	FDelegate PostEvaluateAnimEvent; // 0x270(0x10)

	void StopAnim();
	void SetReverse(bool bInReverse);
	void SetPreviewCurveOverride(FName PoseName, float Value, bool bRemoveIfZero);
	void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);
	void SetPosition(float InPosition, bool bFireNotifies);
	void SetPlayRate(float InPlayRate);
	void SetPlaying(bool bIsPlaying);
	void SetLooping(bool bIsLooping);
	void SetBlendSpaceInput(FVector InBlendInput);
	void SetAnimationAsset(UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
	void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
	float GetLength();
	UAnimationAsset* GetAnimationAsset();
};

// Class Engine.AnimStateMachineTypes
// Size: 0x28 (Inherited: 0x28)
struct UAnimStateMachineTypes : UObject {
};

// Class Engine.AnimStreamable
// Size: 0xe0 (Inherited: 0xa8)
struct UAnimStreamable : UAnimSequenceBase {
	int32_t NumFrames; // 0xa8(0x04)
	enum class EAnimInterpolationType Interpolation; // 0xac(0x01)
	FName RetargetSource; // 0xb0(0x08)
	UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xc8(0x08)
	UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd0(0x08)
	bool bEnableRootMotion; // 0xd8(0x01)
	enum class ERootMotionRootLock RootMotionRootLock; // 0xd9(0x01)
	bool bForceRootLock; // 0xda(0x01)
	bool bUseNormalizedRootMotionScale; // 0xdb(0x01)
};

// Class Engine.ArrowComponent
// Size: 0x400 (Inherited: 0x3f0)
struct UArrowComponent : UPrimitiveComponent {
	FColor ArrowColor; // 0x3f0(0x04)
	float ArrowSize; // 0x3f4(0x04)
	float ScreenSize; // 0x3f8(0x04)
	char bIsScreenSizeScaled : 1; // 0x3fc(0x01)
	char bTreatAsASprite : 1; // 0x3fc(0x01)

	void SetArrowColor(FLinearColor NewColor);
};

// Class Engine.AssetExportTask
// Size: 0x78 (Inherited: 0x28)
struct UAssetExportTask : UObject {
	UObject* Object; // 0x28(0x08)
	UExporter* Exporter; // 0x30(0x08)
	FString Filename; // 0x38(0x10)
	bool bSelected; // 0x48(0x01)
	bool bReplaceIdentical; // 0x49(0x01)
	bool bPrompt; // 0x4a(0x01)
	bool bAutomated; // 0x4b(0x01)
	bool bUseFileArchive; // 0x4c(0x01)
	bool bWriteEmptyFiles; // 0x4d(0x01)
	TArray<UObject*> IgnoreObjectList; // 0x50(0x10)
	UObject* options; // 0x60(0x08)
	TArray<FString> Errors; // 0x68(0x10)
};

// Class Engine.AssetManagerSettings
// Size: 0x100 (Inherited: 0x38)
struct UAssetManagerSettings : UDeveloperSettings {
	TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x38(0x10)
	TArray<FDirectoryPath> DirectoriesToExclude; // 0x48(0x10)
	TArray<FPrimaryAssetRulesOverride> PrimaryAssetRules; // 0x58(0x10)
	TArray<FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules; // 0x68(0x10)
	bool bOnlyCookProductionAssets; // 0x78(0x01)
	bool bShouldManagerDetermineTypeAndName; // 0x79(0x01)
	bool bShouldGuessTypeAndNameInEditor; // 0x7a(0x01)
	bool bShouldAcquireMissingChunksOnLoad; // 0x7b(0x01)
	TArray<FAssetManagerRedirect> PrimaryAssetIdRedirects; // 0x80(0x10)
	TArray<FAssetManagerRedirect> PrimaryAssetTypeRedirects; // 0x90(0x10)
	TArray<FAssetManagerRedirect> AssetPathRedirects; // 0xa0(0x10)
	TSet<FName> MetaDataTagsForAssetRegistry; // 0xb0(0x50)
};

// Class Engine.AssetMappingTable
// Size: 0x38 (Inherited: 0x28)
struct UAssetMappingTable : UObject {
	TArray<FAssetMapping> MappedAssets; // 0x28(0x10)
};

// Class Engine.AsyncActionHandleSaveGame
// Size: 0x68 (Inherited: 0x30)
struct UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Completed; // 0x30(0x10)
	USaveGame* SaveGameObject; // 0x60(0x08)

	UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(UObject* WorldContextObject, USaveGame* SaveGameObject, FString slotName, int32_t UserIndex);
	UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(UObject* WorldContextObject, FString slotName, int32_t UserIndex);
};

// Class Engine.AsyncActionLoadPrimaryAssetBase
// Size: 0x78 (Inherited: 0x30)
struct UAsyncActionLoadPrimaryAssetBase : UBlueprintAsyncActionBase {
};

// Class Engine.AsyncActionLoadPrimaryAsset
// Size: 0x88 (Inherited: 0x78)
struct UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78(0x10)

	UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, TArray<FName> LoadBundles);
};

// Class Engine.AsyncActionLoadPrimaryAssetClass
// Size: 0x88 (Inherited: 0x78)
struct UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78(0x10)

	UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(UObject* WorldContextObject, FPrimaryAssetId PrimaryAsset, TArray<FName> LoadBundles);
};

// Class Engine.AsyncActionLoadPrimaryAssetList
// Size: 0x88 (Inherited: 0x78)
struct UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78(0x10)

	UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(UObject* WorldContextObject, TArray<FPrimaryAssetId> PrimaryAssetList, TArray<FName> LoadBundles);
};

// Class Engine.AsyncActionLoadPrimaryAssetClassList
// Size: 0x88 (Inherited: 0x78)
struct UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78(0x10)

	UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(UObject* WorldContextObject, TArray<FPrimaryAssetId> PrimaryAssetList, TArray<FName> LoadBundles);
};

// Class Engine.AsyncActionChangePrimaryAssetBundles
// Size: 0x88 (Inherited: 0x78)
struct UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78(0x10)

	UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(UObject* WorldContextObject, TArray<FPrimaryAssetId> PrimaryAssetList, TArray<FName> AddBundles, TArray<FName> RemoveBundles);
	UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(UObject* WorldContextObject, TArray<FName> NewBundles, TArray<FName> OldBundles);
};

// Class Engine.AtmosphericFog
// Size: 0x228 (Inherited: 0x220)
struct AAtmosphericFog : AInfo {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x220(0x08)
};

// Class Engine.AtmosphericFogComponent
// Size: 0x300 (Inherited: 0x1f0)
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x1f0(0x04)
	float FogMultiplier; // 0x1f4(0x04)
	float DensityMultiplier; // 0x1f8(0x04)
	float DensityOffset; // 0x1fc(0x04)
	float DistanceScale; // 0x200(0x04)
	float AltitudeScale; // 0x204(0x04)
	float DistanceOffset; // 0x208(0x04)
	float GroundOffset; // 0x20c(0x04)
	float StartDistance; // 0x210(0x04)
	float SunDiscScale; // 0x214(0x04)
	float DefaultBrightness; // 0x218(0x04)
	FColor DefaultLightColor; // 0x21c(0x04)
	char bDisableSunDisk : 1; // 0x220(0x01)
	char bAtmosphereAffectsSunIlluminance : 1; // 0x220(0x01)
	char bDisableGroundScattering : 1; // 0x220(0x01)
	FAtmospherePrecomputeParameters PrecomputeParams; // 0x224(0x2c)
	UTexture2D* TransmittanceTexture; // 0x250(0x08)
	UTexture2D* IrradianceTexture; // 0x258(0x08)

	void StartPrecompute();
	void SetSunMultiplier(float NewSunMultiplier);
	void SetStartDistance(float NewStartDistance);
	void SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum);
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
};

// Class Engine.AudioSettings
// Size: 0x148 (Inherited: 0x38)
struct UAudioSettings : UDeveloperSettings {
	FSoftObjectPath DefaultSoundClassName; // 0x38(0x18)
	FSoftObjectPath DefaultMediaSoundClassName; // 0x50(0x18)
	FSoftObjectPath DefaultSoundConcurrencyName; // 0x68(0x18)
	FSoftObjectPath DefaultBaseSoundMix; // 0x80(0x18)
	FSoftObjectPath VoiPSoundClass; // 0x98(0x18)
	FSoftObjectPath MasterSubmix; // 0xb0(0x18)
	FSoftObjectPath ReverbSubmix; // 0xc8(0x18)
	FSoftObjectPath EQSubmix; // 0xe0(0x18)
	enum class EVoiceSampleRate VoiPSampleRate; // 0xf8(0x04)
	float DefaultReverbSendLevel; // 0xfc(0x04)
	int32_t MaximumConcurrentStreams; // 0x100(0x04)
	float GlobalMinPitchScale; // 0x104(0x04)
	float GlobalMaxPitchScale; // 0x108(0x04)
	TArray<FAudioQualitySettings> QualityLevels; // 0x110(0x10)
	char bAllowPlayWhenSilent : 1; // 0x120(0x01)
	char bDisableMasterEQ : 1; // 0x120(0x01)
	char bAllowCenterChannel3DPanning : 1; // 0x120(0x01)
	uint32_t NumStoppingSources; // 0x124(0x04)
	enum class EPanningMethod PanningMethod; // 0x128(0x01)
	enum class EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0x129(0x01)
	FString DialogueFilenameFormat; // 0x130(0x10)
};

// Class Engine.AudioVolume
// Size: 0x2a8 (Inherited: 0x258)
struct AAudioVolume : AVolume {
	float Priority; // 0x258(0x04)
	char bEnabled : 1; // 0x25c(0x01)
	FReverbSettings Settings; // 0x260(0x20)
	FInteriorSettings AmbientZoneSettings; // 0x280(0x24)

	void SetReverbSettings(FReverbSettings NewReverbSettings);
	void SetPriority(float NewPriority);
	void SetInteriorSettings(FInteriorSettings NewInteriorSettings);
	void SetEnabled(bool bNewEnabled);
	void OnRep_bEnabled();
};

// Class Engine.AutoDestroySubsystem
// Size: 0x48 (Inherited: 0x30)
struct UAutoDestroySubsystem : UWorldSubsystem {
	TArray<AActor*> ActorsToPoll; // 0x38(0x10)

	void OnActorEndPlay(AActor* Actor, enum class EEndPlayReason EndPlayReason);
};

// Class Engine.AutomationTestSettings
// Size: 0x328 (Inherited: 0x28)
struct UAutomationTestSettings : UObject {
	TArray<FString> EngineTestModules; // 0x28(0x10)
	TArray<FString> EditorTestModules; // 0x38(0x10)
	FSoftObjectPath AutomationTestmap; // 0x48(0x18)
	TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x60(0x10)
	TArray<FSoftObjectPath> AssetsToOpen; // 0x70(0x10)
	FBuildPromotionTestSettings BuildPromotionTest; // 0x80(0x1f0)
	FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x270(0x30)
	FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2a0(0x10)
	FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2b0(0x30)
	TArray<FString> TestLevelFolders; // 0x2e0(0x10)
	TArray<FExternalToolDefinition> ExternalTools; // 0x2f0(0x10)
	TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x300(0x10)
	TArray<FLaunchOnTestSettings> LaunchOnSettings; // 0x310(0x10)
	FIntPoint DefaultScreenshotResolution; // 0x320(0x08)
};

// Class Engine.AvoidanceManager
// Size: 0xe0 (Inherited: 0x28)
struct UAvoidanceManager : UObject {
	float DefaultTimeToLive; // 0x30(0x04)
	float LockTimeAfterAvoid; // 0x34(0x04)
	float LockTimeAfterClean; // 0x38(0x04)
	float DeltaTimeToPredict; // 0x3c(0x04)
	float ArtificialRadiusExpansion; // 0x40(0x04)
	float TestHeightDifference; // 0x44(0x04)
	float HeightCheckMargin; // 0x48(0x04)

	bool RegisterMovementComponent(UMovementComponent* MovementComp, float AvoidanceWeight);
	int32_t GetObjectCount();
	int32_t GetNewAvoidanceUID();
	FVector GetAvoidanceVelocityForComponent(UMovementComponent* MovementComp);
};

// Class Engine.BandwidthTestActor
// Size: 0x240 (Inherited: 0x220)
struct ABandwidthTestActor : AActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x220(0x20)
};

// Class Engine.BillboardComponent
// Size: 0x410 (Inherited: 0x3f0)
struct UBillboardComponent : UPrimitiveComponent {
	UTexture2D* Sprite; // 0x3f0(0x08)
	char bIsScreenSizeScaled : 1; // 0x3f8(0x01)
	float ScreenSize; // 0x3fc(0x04)
	float U; // 0x400(0x04)
	float UL; // 0x404(0x04)
	float V; // 0x408(0x04)
	float VL; // 0x40c(0x04)

	void SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL);
	void SetSpriteAndUV(UTexture2D* NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL);
	void SetSprite(UTexture2D* NewSprite);
};

// Class Engine.BlendableInterface
// Size: 0x28 (Inherited: 0x28)
struct UBlendableInterface : UInterface {
};

// Class Engine.Skeleton
// Size: 0x368 (Inherited: 0x28)
struct USkeleton : UObject {
	TArray<FBoneNode> BoneTree; // 0x38(0x10)
	TArray<FTransform> RefLocalPoses; // 0x48(0x10)
	FGuid VirtualBoneGuid; // 0x170(0x10)
	TArray<FVirtualBone> VirtualBones; // 0x180(0x10)
	TArray<USkeletalMeshSocket*> Sockets; // 0x190(0x10)
	FSmartNameContainer SmartNames; // 0x1f0(0x50)
	TArray<UBlendProfile*> BlendProfiles; // 0x270(0x10)
	TArray<FAnimSlotGroup> SlotGroups; // 0x280(0x10)
	TArray<UAssetUserData*> AssetUserData; // 0x358(0x10)
};

// Class Engine.BlendProfile
// Size: 0x48 (Inherited: 0x28)
struct UBlendProfile : UObject {
	USkeleton* OwningSkeleton; // 0x30(0x08)
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38(0x10)
};

// Class Engine.BlockingVolume
// Size: 0x258 (Inherited: 0x258)
struct ABlockingVolume : AVolume {
};

// Class Engine.BlueprintExtension
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintExtension : UObject {
};

// Class Engine.BlueprintMapLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintMapLibrary : UBlueprintFunctionLibrary {

	void SetMapPropertyByName(UObject* Object, FName PropertyName, TMap<int32_t, int32_t> Value);
	void Map_Values(TMap<int32_t, int32_t> TargetMap, TArray<int32_t> Values);
	bool Map_Remove(TMap<int32_t, int32_t> TargetMap, int32_t Key);
	int32_t Map_Length(TMap<int32_t, int32_t> TargetMap);
	void Map_Keys(TMap<int32_t, int32_t> TargetMap, TArray<int32_t> Keys);
	bool Map_Find(TMap<int32_t, int32_t> TargetMap, int32_t Key, int32_t Value);
	bool Map_Contains(TMap<int32_t, int32_t> TargetMap, int32_t Key);
	void Map_Clear(TMap<int32_t, int32_t> TargetMap);
	void Map_Add(TMap<int32_t, int32_t> TargetMap, int32_t Key, int32_t Value);
};

// Class Engine.BlueprintPathsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintPathsLibrary : UBlueprintFunctionLibrary {

	FString VideoCaptureDir();
	void ValidatePath(FString InPath, bool bDidSucceed, FText OutReason);
	void Split(FString InPath, FString PathPart, FString FilenamePart, FString ExtensionPart);
	FString SourceConfigDir();
	bool ShouldSaveToUserDir();
	FString ShaderWorkingDir();
	void SetProjectFilePath(FString NewGameProjectFilePath);
	FString SetExtension(FString InPath, FString InNewExtension);
	FString ScreenShotDir();
	FString SandboxesDir();
	FString RootDir();
	void RemoveDuplicateSlashes(FString InPath, FString OutPath);
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
	void NormalizeFilename(FString InPath, FString OutPath);
	void NormalizeDirectoryName(FString InPath, FString OutPath);
	FString MakeValidFileName(FString inString, FString InReplacementChar);
	void MakeStandardFilename(FString InPath, FString OutPath);
	void MakePlatformFilename(FString InPath, FString OutPath);
	bool MakePathRelativeTo(FString InPath, FString InRelativeTo, FString OutPath);
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
	FString Combine(TArray<FString> InPaths);
	bool CollapseRelativeDirectories(FString InPath, FString OutPath);
	FString CloudDir();
	FString ChangeExtension(FString InPath, FString InNewExtension);
	FString BugItDir();
	FString AutomationTransientDir();
	FString AutomationLogDir();
	FString AutomationDir();
};

// Class Engine.PlatformGameInstance
// Size: 0x268 (Inherited: 0x198)
struct UPlatformGameInstance : UGameInstance {
	FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0x198(0x10)
	FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0x1a8(0x10)
	FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0x1b8(0x10)
	FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x1c8(0x10)
	FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x1d8(0x10)
	FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x1e8(0x10)
	FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x1f8(0x10)
	FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x208(0x10)
	FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x218(0x10)
	FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x228(0x10)
	FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x238(0x10)
	FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; // 0x248(0x10)
	FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x258(0x10)
};

// Class Engine.BlueprintPlatformLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintPlatformLibrary : UBlueprintFunctionLibrary {

	int32_t ScheduleLocalNotificationFromNow(int32_t inSecondsFromNow, FText Title, FText Body, FText Action, FString ActivationEvent);
	void ScheduleLocalNotificationBadgeFromNow(int32_t inSecondsFromNow, FString ActivationEvent);
	int32_t ScheduleLocalNotificationBadgeAtTime(FDateTime FireDateTime, bool LocalTime, FString ActivationEvent);
	int32_t ScheduleLocalNotificationAtTime(FDateTime FireDateTime, bool LocalTime, FText Title, FText Body, FText Action, FString ActivationEvent);
	void GetLaunchNotification(bool NotificationLaunchedApp, FString ActivationEvent, int32_t FireDate);
	enum class EScreenOrientation GetDeviceOrientation();
	void ClearAllLocalNotifications();
	void CancelLocalNotificationById(int32_t NotificationId);
	void CancelLocalNotification(FString ActivationEvent);
};

// Class Engine.BlueprintSetLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintSetLibrary : UBlueprintFunctionLibrary {

	void SetSetPropertyByName(UObject* Object, FName PropertyName, TSet<int32_t> Value);
	void Set_Union(TSet<int32_t> A, TSet<int32_t> B, TSet<int32_t> Result);
	void Set_ToArray(TSet<int32_t> A, TArray<int32_t> Result);
	void Set_RemoveItems(TSet<int32_t> TargetSet, TArray<int32_t> Items);
	bool Set_Remove(TSet<int32_t> TargetSet, int32_t Item);
	int32_t Set_Length(TSet<int32_t> TargetSet);
	void Set_Intersection(TSet<int32_t> A, TSet<int32_t> B, TSet<int32_t> Result);
	void Set_Difference(TSet<int32_t> A, TSet<int32_t> B, TSet<int32_t> Result);
	bool Set_Contains(TSet<int32_t> TargetSet, int32_t ItemToFind);
	void Set_Clear(TSet<int32_t> TargetSet);
	void Set_AddItems(TSet<int32_t> TargetSet, TArray<int32_t> NewItems);
	void Set_Add(TSet<int32_t> TargetSet, int32_t NewItem);
};

// Class Engine.BodySetup
// Size: 0x250 (Inherited: 0x28)
struct UBodySetup : UObject {
	FKAggregateGeom AggGeom; // 0x28(0x58)
	FName BoneName; // 0x80(0x08)
	enum class EPhysicsType PhysicsType; // 0x88(0x01)
	char bAlwaysFullAnimWeight : 1; // 0x89(0x01)
	char bConsiderForBounds : 1; // 0x89(0x01)
	char bMeshCollideAll : 1; // 0x89(0x01)
	char bDoubleSidedGeometry : 1; // 0x89(0x01)
	char bGenerateNonMirroredCollision : 1; // 0x89(0x01)
	char bSharedCookedData : 1; // 0x89(0x01)
	char bGenerateMirroredCollision : 1; // 0x89(0x01)
	char bSupportUVsAndFaceRemap : 1; // 0x89(0x01)
	enum class EBodyCollisionResponse CollisionReponse; // 0x8b(0x01)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x8c(0x01)
	UPhysicalMaterial* PhysMaterial; // 0x90(0x08)
	FWalkableSlopeOverride WalkableSlopeOverride; // 0x98(0x10)
	FBodyInstance DefaultInstance; // 0x120(0x110)
	FVector BuildScale3D; // 0x238(0x0c)
};

// Class Engine.BoneMaskFilter
// Size: 0x38 (Inherited: 0x28)
struct UBoneMaskFilter : UObject {
	TArray<FInputBlendPose> BlendPoses; // 0x28(0x10)
};

// Class Engine.BookmarkBase
// Size: 0x28 (Inherited: 0x28)
struct UBookmarkBase : UObject {
};

// Class Engine.BookMark
// Size: 0x50 (Inherited: 0x28)
struct UBookMark : UBookmarkBase {
	FVector Location; // 0x28(0x0c)
	FRotator Rotation; // 0x34(0x0c)
	TArray<FString> HiddenLevels; // 0x40(0x10)
};

// Class Engine.BookMark2D
// Size: 0x38 (Inherited: 0x28)
struct UBookMark2D : UBookmarkBase {
	float Zoom2D; // 0x28(0x04)
	FIntPoint Location; // 0x2c(0x08)
};

// Class Engine.ReflectionCapture
// Size: 0x228 (Inherited: 0x220)
struct AReflectionCapture : AActor {
	UReflectionCaptureComponent* CaptureComponent; // 0x220(0x08)
};

// Class Engine.BoxReflectionCapture
// Size: 0x228 (Inherited: 0x228)
struct ABoxReflectionCapture : AReflectionCapture {
};

// Class Engine.ReflectionCaptureComponent
// Size: 0x270 (Inherited: 0x1f0)
struct UReflectionCaptureComponent : USceneComponent {
	UBillboardComponent* CaptureOffsetComponent; // 0x1f0(0x08)
	enum class EReflectionSourceType ReflectionSourceType; // 0x1f8(0x01)
	UTextureCube* Cubemap; // 0x200(0x08)
	float SourceCubemapAngle; // 0x208(0x04)
	float Brightness; // 0x20c(0x04)
	FVector CaptureOffset; // 0x210(0x0c)
	FGuid MapBuildDataId; // 0x21c(0x10)
};

// Class Engine.BoxReflectionCaptureComponent
// Size: 0x280 (Inherited: 0x270)
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x268(0x04)
	UBoxComponent* PreviewInfluenceBox; // 0x270(0x08)
	UBoxComponent* PreviewCaptureBox; // 0x278(0x08)
};

// Class Engine.Breakpoint
// Size: 0x40 (Inherited: 0x28)
struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28(0x01)
	UEdGraphNode* Node; // 0x30(0x08)
	char bStepOnce : 1; // 0x38(0x01)
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38(0x01)
	char bStepOnce_RemoveAfterHit : 1; // 0x38(0x01)
};

// Class Engine.BrushBuilder
// Size: 0x80 (Inherited: 0x28)
struct UBrushBuilder : UObject {
	FString BitmapFilename; // 0x28(0x10)
	FString ToolTip; // 0x38(0x10)
	char NotifyBadParams : 1; // 0x48(0x01)
	TArray<FVector> Vertices; // 0x50(0x10)
	TArray<FBuilderPoly> Polys; // 0x60(0x10)
	FName Layer; // 0x70(0x08)
	char MergeCoplanars : 1; // 0x78(0x01)
};

// Class Engine.BrushComponent
// Size: 0x400 (Inherited: 0x3f0)
struct UBrushComponent : UPrimitiveComponent {
	UModel* Brush; // 0x3f0(0x08)
	UBodySetup* BrushBodySetup; // 0x3f8(0x08)
};

// Class Engine.BrushShape
// Size: 0x258 (Inherited: 0x258)
struct ABrushShape : ABrush {
};

// Class Engine.ButtonStyleAsset
// Size: 0x2a0 (Inherited: 0x28)
struct UButtonStyleAsset : UObject {
	FButtonStyle ButtonStyle; // 0x28(0x278)
};

// Class Engine.CameraAnim
// Size: 0x5b0 (Inherited: 0x28)
struct UCameraAnim : UObject {
	UInterpGroup* CameraInterpGroup; // 0x28(0x08)
	float AnimLength; // 0x30(0x04)
	FBox BoundingBox; // 0x34(0x1c)
	char bRelativeToInitialTransform : 1; // 0x50(0x01)
	char bRelativeToInitialFOV : 1; // 0x50(0x01)
	float BaseFOV; // 0x54(0x04)
	FPostProcessSettings BasePostProcessSettings; // 0x60(0x540)
	float BasePostProcessBlendWeight; // 0x5a0(0x04)
};

// Class Engine.CameraAnimInst
// Size: 0x110 (Inherited: 0x28)
struct UCameraAnimInst : UObject {
	UCameraAnim* CamAnim; // 0x28(0x08)
	UInterpGroupInst* InterpGroupInst; // 0x30(0x08)
	float PlayRate; // 0x50(0x04)
	UInterpTrackMove* MoveTrack; // 0x68(0x08)
	UInterpTrackInstMove* MoveInst; // 0x70(0x08)
	enum class ECameraAnimPlaySpace PlaySpace; // 0x78(0x01)

	void Stop(bool bImmediate);
	void SetScale(float NewDuration);
	void SetDuration(float NewDuration);
};

// Class Engine.CameraBlockingVolume
// Size: 0x258 (Inherited: 0x258)
struct ACameraBlockingVolume : AVolume {
};

// Class Engine.CameraModifier
// Size: 0x48 (Inherited: 0x28)
struct UCameraModifier : UObject {
	char bDebug : 1; // 0x28(0x01)
	char bExclusive : 1; // 0x28(0x01)
	char Priority; // 0x2c(0x01)
	APlayerCameraManager* CameraOwner; // 0x30(0x08)
	float AlphaInTime; // 0x38(0x04)
	float AlphaOutTime; // 0x3c(0x04)
	float alpha; // 0x40(0x04)

	bool IsDisabled();
	AActor* GetViewTarget();
	void EnableModifier();
	void DisableModifier(bool bImmediate);
	void BlueprintModifyPostProcess(float DeltaTime, float PostProcessBlendWeight, FPostProcessSettings PostProcessSettings);
	void BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector NewViewLocation, FRotator NewViewRotation, float NewFOV);
};

// Class Engine.CameraModifier_CameraShake
// Size: 0xb0 (Inherited: 0x48)
struct UCameraModifier_CameraShake : UCameraModifier {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x48(0x10)
	TMap<UCameraShake*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58(0x50)
	float SplitScreenShakeScale; // 0xa8(0x04)
};

// Class Engine.CameraShake
// Size: 0x160 (Inherited: 0x28)
struct UCameraShake : UObject {
	char bSingleInstance : 1; // 0x28(0x01)
	float OscillationDuration; // 0x2c(0x04)
	float OscillationBlendInTime; // 0x30(0x04)
	float OscillationBlendOutTime; // 0x34(0x04)
	FROscillator RotOscillation; // 0x38(0x24)
	FVOscillator LocOscillation; // 0x5c(0x24)
	FFOscillator FOVOscillation; // 0x80(0x0c)
	float AnimPlayRate; // 0x8c(0x04)
	float AnimScale; // 0x90(0x04)
	float AnimBlendInTime; // 0x94(0x04)
	float AnimBlendOutTime; // 0x98(0x04)
	float RandomAnimSegmentDuration; // 0x9c(0x04)
	UCameraAnim* Anim; // 0xa0(0x08)
	char bRandomAnimSegment : 1; // 0xa8(0x01)
	APlayerCameraManager* CameraOwner; // 0xc0(0x08)
	float ShakeScale; // 0x148(0x04)
	float OscillatorTimeRemaining; // 0x14c(0x04)
	UCameraAnimInst* AnimInst; // 0x150(0x08)

	void ReceiveStopShake(bool bImmediately);
	void ReceivePlayShake(float Scale);
	bool ReceiveIsFinished();
	void BlueprintUpdateCameraShake(float DeltaTime, float alpha, FMinimalViewInfo POV, FMinimalViewInfo ModifiedPOV);
};

// Class Engine.CameraShakeSourceActor
// Size: 0x228 (Inherited: 0x220)
struct ACameraShakeSourceActor : AActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x220(0x08)
};

// Class Engine.CameraShakeSourceComponent
// Size: 0x210 (Inherited: 0x1f0)
struct UCameraShakeSourceComponent : USceneComponent {
	enum class ECameraShakeAttenuation Attenuation; // 0x1f0(0x01)
	float InnerAttenuationRadius; // 0x1f4(0x04)
	float OuterAttenuationRadius; // 0x1f8(0x04)
	UCameraShake* CameraShake; // 0x200(0x08)
	bool bAutoPlay; // 0x208(0x01)

	void StopAllCameraShakes(bool bImmediately);
	void PlayCameraShake(UCameraShake* InCameraShake);
	void Play();
	float GetAttenuationFactor(FVector Location);
};

// Class Engine.Canvas
// Size: 0x2c0 (Inherited: 0x28)
struct UCanvas : UObject {
	float OrgX; // 0x28(0x04)
	float OrgY; // 0x2c(0x04)
	float ClipX; // 0x30(0x04)
	float ClipY; // 0x34(0x04)
	FColor DrawColor; // 0x38(0x04)
	char bCenterX : 1; // 0x3c(0x01)
	char bCenterY : 1; // 0x3c(0x01)
	char bNoSmooth : 1; // 0x3c(0x01)
	int32_t SizeX; // 0x40(0x04)
	int32_t SizeY; // 0x44(0x04)
	FPlane ColorModulate; // 0x50(0x10)
	UTexture2D* DefaultTexture; // 0x60(0x08)
	UTexture2D* GradientTexture0; // 0x68(0x08)
	UReporterGraph* ReporterGraph; // 0x70(0x08)

	FVector2D K2_TextSize(UFont* RenderFont, FString RenderText, FVector2D Scale);
	FVector2D K2_StrLen(UFont* RenderFont, FString RenderText);
	FVector K2_Project(FVector WorldLocation);
	void K2_DrawTriangle(UTexture* RenderTexture, TArray<FCanvasUVTri> Triangles);
	void K2_DrawTexture(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, enum class EBlendMode BlendMode, float Rotation, FVector2D PivotPoint);
	void K2_DrawText(UFont* RenderFont, FString RenderText, FVector2D ScreenPosition, FVector2D Scale, FLinearColor RenderColor, float Kerning, FLinearColor ShadowColor, FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, FLinearColor OutlineColor);
	void K2_DrawPolygon(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D Radius, int32_t NumberOfSides, FLinearColor RenderColor);
	void K2_DrawMaterialTriangle(UMaterialInterface* RenderMaterial, TArray<FCanvasUVTri> Triangles);
	void K2_DrawMaterial(UMaterialInterface* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint);
	void K2_DrawLine(FVector2D ScreenPositionA, FVector2D ScreenPositionB, float Thickness, FLinearColor RenderColor);
	void K2_DrawBox(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness, FLinearColor RenderColor);
	void K2_DrawBorder(UTexture* BorderTexture, UTexture* BackgroundTexture, UTexture* LeftBorderTexture, UTexture* RightBorderTexture, UTexture* TopBorderTexture, UTexture* BottomBorderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, FVector2D BorderScale, FVector2D BackgroundScale, float Rotation, FVector2D PivotPoint, FVector2D CornerSize);
	void K2_Deproject(FVector2D ScreenPosition, FVector WorldOrigin, FVector WorldDirection);
};

// Class Engine.TextureRenderTarget
// Size: 0xc0 (Inherited: 0xb8)
struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0xb8(0x04)
};

// Class Engine.TextureRenderTarget2D
// Size: 0xe8 (Inherited: 0xc0)
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; // 0xc0(0x04)
	int32_t SizeY; // 0xc4(0x04)
	FLinearColor ClearColor; // 0xc8(0x10)
	enum class TextureAddress AddressX; // 0xd8(0x01)
	enum class TextureAddress AddressY; // 0xd9(0x01)
	char bForceLinearGamma : 1; // 0xda(0x01)
	char bHDR : 1; // 0xda(0x01)
	char bGPUSharedFlag : 1; // 0xda(0x01)
	enum class ETextureRenderTargetFormat RenderTargetFormat; // 0xdb(0x01)
	char bAutoGenerateMips : 1; // 0xdc(0x01)
	enum class TextureFilter MipsSamplerFilter; // 0xdd(0x01)
	enum class TextureAddress MipsAddressU; // 0xde(0x01)
	enum class TextureAddress MipsAddressV; // 0xdf(0x01)
	enum class EPixelFormat OverrideFormat; // 0xe0(0x01)
};

// Class Engine.CanvasRenderTarget2D
// Size: 0x108 (Inherited: 0xe8)
struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0xe8(0x10)
	TWeakObjectPtr<UWorld> World; // 0xf8(0x08)
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x100(0x01)

	void UpdateResource();
	void ReceiveUpdate(UCanvas* Canvas, int32_t Width, int32_t Height);
	void GetSize(int32_t Width, int32_t Height);
	UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(UObject* WorldContextObject, UCanvasRenderTarget2D* CanvasRenderTarget2DClass, int32_t Width, int32_t Height);
};

// Class Engine.CapsuleComponent
// Size: 0x410 (Inherited: 0x410)
struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; // 0x408(0x04)
	float CapsuleRadius; // 0x40c(0x04)

	void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
	void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
	void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
	void GetUnscaledCapsuleSize_WithoutHemisphere(float outRadius, float OutHalfHeightWithoutHemisphere);
	void GetUnscaledCapsuleSize(float outRadius, float OutHalfHeight);
	float GetUnscaledCapsuleRadius();
	float GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
	float GetUnscaledCapsuleHalfHeight();
	float GetShapeScale();
	void GetScaledCapsuleSize_WithoutHemisphere(float outRadius, float OutHalfHeightWithoutHemisphere);
	void GetScaledCapsuleSize(float outRadius, float OutHalfHeight);
	float GetScaledCapsuleRadius();
	float GetScaledCapsuleHalfHeight_WithoutHemisphere();
	float GetScaledCapsuleHalfHeight();
};

// Class Engine.ChaosPhysicalMaterial
// Size: 0x48 (Inherited: 0x28)
struct UChaosPhysicalMaterial : UObject {
	float Friction; // 0x28(0x04)
	float StaticFriction; // 0x2c(0x04)
	float Restitution; // 0x30(0x04)
	float LinearEtherDrag; // 0x34(0x04)
	float AngularEtherDrag; // 0x38(0x04)
	float SleepingLinearVelocityThreshold; // 0x3c(0x04)
	float SleepingAngularVelocityThreshold; // 0x40(0x04)
};

// Class Engine.CheckBoxStyleAsset
// Size: 0x5a8 (Inherited: 0x28)
struct UCheckBoxStyleAsset : UObject {
	FCheckBoxStyle CheckBoxStyle; // 0x28(0x580)
};

// Class Engine.ChildActorComponent
// Size: 0x220 (Inherited: 0x1f0)
struct UChildActorComponent : USceneComponent {
	AActor* ChildActorClass; // 0x1f0(0x08)
	AActor* ChildActor; // 0x1f8(0x08)
	AActor* ChildActorTemplate; // 0x200(0x08)

	void SetChildActorClass(AActor* InClass);
};

// Class Engine.ChildConnection
// Size: 0x1a38 (Inherited: 0x1a30)
struct UChildConnection : UNetConnection {
	UNetConnection* Parent; // 0x1a30(0x08)
};

// Class Engine.PlatformInterfaceBase
// Size: 0x38 (Inherited: 0x28)
struct UPlatformInterfaceBase : UObject {
	TArray<FDelegateArray> AllDelegates; // 0x28(0x10)
};

// Class Engine.CloudStorageBase
// Size: 0x50 (Inherited: 0x38)
struct UCloudStorageBase : UPlatformInterfaceBase {
	TArray<FString> LocalCloudFiles; // 0x38(0x10)
	char bSuppressDelegateCalls : 1; // 0x48(0x01)
};

// Class Engine.CollisionProfile
// Size: 0x158 (Inherited: 0x38)
struct UCollisionProfile : UDeveloperSettings {
	TArray<FCollisionResponseTemplate> Profiles; // 0x38(0x10)
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48(0x10)
	TArray<FCustomProfile> EditProfiles; // 0x58(0x10)
	TArray<FRedirector> ProfileRedirects; // 0x68(0x10)
	TArray<FRedirector> CollisionChannelRedirects; // 0x78(0x10)
};

// Class Engine.Commandlet
// Size: 0x80 (Inherited: 0x28)
struct UCommandlet : UObject {
	FString HelpDescription; // 0x28(0x10)
	FString HelpUsage; // 0x38(0x10)
	FString HelpWebLink; // 0x48(0x10)
	TArray<FString> HelpParamNames; // 0x58(0x10)
	TArray<FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
	char ShowProgress : 1; // 0x78(0x01)
};

// Class Engine.ComponentDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28(0x10)
};

// Class Engine.CurveTable
// Size: 0xa0 (Inherited: 0x28)
struct UCurveTable : UObject {
};

// Class Engine.CompositeCurveTable
// Size: 0xc8 (Inherited: 0xa0)
struct UCompositeCurveTable : UCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa0(0x10)
	TArray<UCurveTable*> OldParentTables; // 0xb0(0x10)
};

// Class Engine.DataTable
// Size: 0xc8 (Inherited: 0x28)
struct UDataTable : UObject {
	UScriptStruct* RowStruct; // 0x28(0x08)
	char bStripFromClientBuilds : 1; // 0x80(0x01)
	char bIgnoreExtraFields : 1; // 0x80(0x01)
	char bIgnoreMissingFields : 1; // 0x80(0x01)
	FString ImportKeyField; // 0x88(0x10)
};

// Class Engine.CompositeDataTable
// Size: 0xf0 (Inherited: 0xc8)
struct UCompositeDataTable : UDataTable {
	TArray<UDataTable*> ParentTables; // 0xc8(0x10)
	TArray<UDataTable*> OldParentTables; // 0xd8(0x10)
};

// Class Engine.Engine
// Size: 0xde0 (Inherited: 0x28)
struct UEngine : UObject {
	UFont* TinyFont; // 0x30(0x08)
	FSoftObjectPath TinyFontName; // 0x38(0x18)
	UFont* SmallFont; // 0x50(0x08)
	FSoftObjectPath SmallFontName; // 0x58(0x18)
	UFont* MediumFont; // 0x70(0x08)
	FSoftObjectPath MediumFontName; // 0x78(0x18)
	UFont* LargeFont; // 0x90(0x08)
	FSoftObjectPath LargeFontName; // 0x98(0x18)
	UFont* SubtitleFont; // 0xb0(0x08)
	FSoftObjectPath SubtitleFontName; // 0xb8(0x18)
	TArray<UFont*> AdditionalFonts; // 0xd0(0x10)
	TArray<FString> AdditionalFontNames; // 0xe8(0x10)
	UConsole* ConsoleClass; // 0xf8(0x08)
	FSoftClassPath ConsoleClassName; // 0x100(0x18)
	UGameViewportClient* GameViewportClientClass; // 0x118(0x08)
	FSoftClassPath GameViewportClientClassName; // 0x120(0x18)
	ULocalPlayer* LocalPlayerClass; // 0x138(0x08)
	FSoftClassPath LocalPlayerClassName; // 0x140(0x18)
	AWorldSettings* WorldSettingsClass; // 0x158(0x08)
	FSoftClassPath WorldSettingsClassName; // 0x160(0x18)
	FSoftClassPath NavigationSystemClassName; // 0x178(0x18)
	UNavigationSystemBase* NavigationSystemClass; // 0x190(0x08)
	FSoftClassPath NavigationSystemConfigClassName; // 0x198(0x18)
	UNavigationSystemConfig* NavigationSystemConfigClass; // 0x1b0(0x08)
	FSoftClassPath AvoidanceManagerClassName; // 0x1b8(0x18)
	UAvoidanceManager* AvoidanceManagerClass; // 0x1d0(0x08)
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x1d8(0x08)
	FSoftClassPath PhysicsCollisionHandlerClassName; // 0x1e0(0x18)
	FSoftClassPath GameUserSettingsClassName; // 0x1f8(0x18)
	UGameUserSettings* GameUserSettingsClass; // 0x210(0x08)
	FSoftClassPath AIControllerClassName; // 0x218(0x18)
	UGameUserSettings* GameUserSettings; // 0x230(0x08)
	ALevelScriptActor* LevelScriptActorClass; // 0x238(0x08)
	FSoftClassPath LevelScriptActorClassName; // 0x240(0x18)
	FSoftClassPath DefaultBlueprintBaseClassName; // 0x258(0x18)
	FSoftClassPath GameSingletonClassName; // 0x270(0x18)
	UObject* GameSingleton; // 0x288(0x08)
	FSoftClassPath AssetManagerClassName; // 0x290(0x18)
	UAssetManager* AssetManager; // 0x2a8(0x08)
	UTexture2D* DefaultTexture; // 0x2b0(0x08)
	FSoftObjectPath DefaultTextureName; // 0x2b8(0x18)
	UTexture* DefaultDiffuseTexture; // 0x2d0(0x08)
	FSoftObjectPath DefaultDiffuseTextureName; // 0x2d8(0x18)
	UTexture2D* DefaultBSPVertexTexture; // 0x2f0(0x08)
	FSoftObjectPath DefaultBSPVertexTextureName; // 0x2f8(0x18)
	UTexture2D* HighFrequencyNoiseTexture; // 0x310(0x08)
	FSoftObjectPath HighFrequencyNoiseTextureName; // 0x318(0x18)
	UTexture2D* DefaultBokehTexture; // 0x330(0x08)
	FSoftObjectPath DefaultBokehTextureName; // 0x338(0x18)
	UTexture2D* DefaultBloomKernelTexture; // 0x350(0x08)
	FSoftObjectPath DefaultBloomKernelTextureName; // 0x358(0x18)
	UMaterial* WireframeMaterial; // 0x370(0x08)
	FString WireframeMaterialName; // 0x378(0x10)
	UMaterial* DebugMeshMaterial; // 0x388(0x08)
	FSoftObjectPath DebugMeshMaterialName; // 0x390(0x18)
	UMaterial* EmissiveMeshMaterial; // 0x3a8(0x08)
	FSoftObjectPath EmissiveMeshMaterialName; // 0x3b0(0x18)
	UMaterial* LevelColorationLitMaterial; // 0x3c8(0x08)
	FString LevelColorationLitMaterialName; // 0x3d0(0x10)
	UMaterial* LevelColorationUnlitMaterial; // 0x3e0(0x08)
	FString LevelColorationUnlitMaterialName; // 0x3e8(0x10)
	UMaterial* LightingTexelDensityMaterial; // 0x3f8(0x08)
	FString LightingTexelDensityName; // 0x400(0x10)
	UMaterial* ShadedLevelColorationLitMaterial; // 0x410(0x08)
	FString ShadedLevelColorationLitMaterialName; // 0x418(0x10)
	UMaterial* ShadedLevelColorationUnlitMaterial; // 0x428(0x08)
	FString ShadedLevelColorationUnlitMaterialName; // 0x430(0x10)
	UMaterial* RemoveSurfaceMaterial; // 0x440(0x08)
	FSoftObjectPath RemoveSurfaceMaterialName; // 0x448(0x18)
	UMaterial* VertexColorMaterial; // 0x460(0x08)
	FString VertexColorMaterialName; // 0x468(0x10)
	UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x478(0x08)
	FString VertexColorViewModeMaterialName_ColorOnly; // 0x480(0x10)
	UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x490(0x08)
	FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x498(0x10)
	UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x4a8(0x08)
	FString VertexColorViewModeMaterialName_RedOnly; // 0x4b0(0x10)
	UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x4c0(0x08)
	FString VertexColorViewModeMaterialName_GreenOnly; // 0x4c8(0x10)
	UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x4d8(0x08)
	FString VertexColorViewModeMaterialName_BlueOnly; // 0x4e0(0x10)
	FSoftObjectPath DebugEditorMaterialName; // 0x4f0(0x18)
	UMaterial* ConstraintLimitMaterial; // 0x508(0x08)
	UMaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x510(0x08)
	UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis; // 0x518(0x08)
	UMaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x520(0x08)
	UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis; // 0x528(0x08)
	UMaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x530(0x08)
	UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis; // 0x538(0x08)
	UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; // 0x540(0x08)
	UMaterial* InvalidLightmapSettingsMaterial; // 0x548(0x08)
	FSoftObjectPath InvalidLightmapSettingsMaterialName; // 0x550(0x18)
	UMaterial* PreviewShadowsIndicatorMaterial; // 0x568(0x08)
	FSoftObjectPath PreviewShadowsIndicatorMaterialName; // 0x570(0x18)
	UMaterial* ArrowMaterial; // 0x588(0x08)
	UMaterialInstanceDynamic* ArrowMaterialYellow; // 0x590(0x08)
	FSoftObjectPath ArrowMaterialName; // 0x598(0x18)
	FLinearColor LightingOnlyBrightness; // 0x5b0(0x10)
	TArray<FLinearColor> ShaderComplexityColors; // 0x5c0(0x10)
	TArray<FLinearColor> QuadComplexityColors; // 0x5d0(0x10)
	TArray<FLinearColor> LightComplexityColors; // 0x5e0(0x10)
	TArray<FLinearColor> StationaryLightOverlapColors; // 0x5f0(0x10)
	TArray<FLinearColor> LODColorationColors; // 0x600(0x10)
	TArray<FLinearColor> HLODColorationColors; // 0x610(0x10)
	TArray<FLinearColor> StreamingAccuracyColors; // 0x620(0x10)
	float MaxPixelShaderAdditiveComplexityCount; // 0x630(0x04)
	float MaxES3PixelShaderAdditiveComplexityCount; // 0x634(0x04)
	float MinLightMapDensity; // 0x638(0x04)
	float IdealLightMapDensity; // 0x63c(0x04)
	float MaxLightMapDensity; // 0x640(0x04)
	char bRenderLightMapDensityGrayscale : 1; // 0x644(0x01)
	float RenderLightMapDensityGrayscaleScale; // 0x648(0x04)
	float RenderLightMapDensityColorScale; // 0x64c(0x04)
	FLinearColor LightMapDensityVertexMappedColor; // 0x650(0x10)
	FLinearColor LightMapDensitySelectedColor; // 0x660(0x10)
	TArray<FStatColorMapping> StatColorMappings; // 0x670(0x10)
	UPhysicalMaterial* DefaultPhysMaterial; // 0x680(0x08)
	FSoftObjectPath DefaultPhysMaterialName; // 0x688(0x18)
	TArray<FGameNameRedirect> ActiveGameNameRedirects; // 0x6a0(0x10)
	TArray<FClassRedirect> ActiveClassRedirects; // 0x6b0(0x10)
	TArray<FPluginRedirect> ActivePluginRedirects; // 0x6c0(0x10)
	TArray<FStructRedirect> ActiveStructRedirects; // 0x6d0(0x10)
	UTexture2D* PreIntegratedSkinBRDFTexture; // 0x6e0(0x08)
	FSoftObjectPath PreIntegratedSkinBRDFTextureName; // 0x6e8(0x18)
	UTexture2D* BlueNoiseTexture; // 0x700(0x08)
	FSoftObjectPath BlueNoiseTextureName; // 0x708(0x18)
	UTexture2D* MiniFontTexture; // 0x720(0x08)
	FSoftObjectPath MiniFontTextureName; // 0x728(0x18)
	UTexture* WeightMapPlaceholderTexture; // 0x740(0x08)
	FSoftObjectPath WeightMapPlaceholderTextureName; // 0x748(0x18)
	UTexture2D* LightMapDensityTexture; // 0x760(0x08)
	FSoftObjectPath LightMapDensityTextureName; // 0x768(0x18)
	UGameViewportClient* GameViewport; // 0x788(0x08)
	TArray<FString> DeferredCommands; // 0x790(0x10)
	int32_t TickCycles; // 0x7a0(0x04)
	int32_t GameCycles; // 0x7a4(0x04)
	int32_t ClientCycles; // 0x7a8(0x04)
	float NearClipPlane; // 0x7ac(0x04)
	char bHardwareSurveyEnabled : 1; // 0x7b0(0x01)
	char bSubtitlesEnabled : 1; // 0x7b0(0x01)
	char bSubtitlesForcedOff : 1; // 0x7b0(0x01)
	int32_t MaximumLoopIterationCount; // 0x7b4(0x04)
	char bCanBlueprintsTickByDefault : 1; // 0x7b8(0x01)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x7b8(0x01)
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x7b8(0x01)
	char bEnableEditorPSysRealtimeLOD : 1; // 0x7b8(0x01)
	char pad_799_0 : 5; // 0x799(0x01)
	char bSmoothFrameRate : 1; // 0x7b8(0x01)
	char bUseFixedFrameRate : 1; // 0x7b8(0x01)
	float FixedFrameRate; // 0x7bc(0x04)
	FFloatRange SmoothedFrameRateRange; // 0x7c0(0x10)
	UEngineCustomTimeStep* CustomTimeStep; // 0x7d0(0x08)
	FSoftClassPath CustomTimeStepClassName; // 0x7f8(0x18)
	UTimecodeProvider* TimecodeProvider; // 0x810(0x08)
	FSoftClassPath TimecodeProviderClassName; // 0x838(0x18)
	bool bGenerateDefaultTimecode; // 0x850(0x01)
	FFrameRate GenerateDefaultTimecodeFrameRate; // 0x854(0x08)
	float GenerateDefaultTimecodeFrameDelay; // 0x85c(0x04)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x860(0x01)
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x864(0x04)
	char bShouldGenerateLowQualityLightmaps : 1; // 0x868(0x01)
	FColor C_WorldBox; // 0x86c(0x04)
	FColor C_BrushWire; // 0x870(0x04)
	FColor C_AddWire; // 0x874(0x04)
	FColor C_SubtractWire; // 0x878(0x04)
	FColor C_SemiSolidWire; // 0x87c(0x04)
	FColor C_NonSolidWire; // 0x880(0x04)
	FColor C_WireBackground; // 0x884(0x04)
	FColor C_ScaleBoxHi; // 0x888(0x04)
	FColor C_VolumeCollision; // 0x88c(0x04)
	FColor C_BSPCollision; // 0x890(0x04)
	FColor C_OrthoBackground; // 0x894(0x04)
	FColor C_Volume; // 0x898(0x04)
	FColor C_BrushShape; // 0x89c(0x04)
	float StreamingDistanceFactor; // 0x8a0(0x04)
	FDirectoryPath GameScreenshotSaveDirectory; // 0x8a8(0x10)
	enum class ETransitionType TransitionType; // 0x8b8(0x01)
	FString TransitionDescription; // 0x8c0(0x10)
	FString TransitionGameMode; // 0x8d0(0x10)
	float MeshLODRange; // 0x8e0(0x04)
	char bAllowMatureLanguage : 1; // 0x8e4(0x01)
	float CameraRotationThreshold; // 0x8e8(0x04)
	float CameraTranslationThreshold; // 0x8ec(0x04)
	float PrimitiveProbablyVisibleTime; // 0x8f0(0x04)
	float MaxOcclusionPixelsFraction; // 0x8f4(0x04)
	char bPauseOnLossOfFocus : 1; // 0x8f8(0x01)
	int32_t MaxParticleResize; // 0x8fc(0x04)
	int32_t MaxParticleResizeWarn; // 0x900(0x04)
	TArray<FDropNoteInfo> PendingDroppedNotes; // 0x908(0x10)
	float NetClientTicksPerSecond; // 0x918(0x04)
	float DisplayGamma; // 0x91c(0x04)
	float MinDesiredFrameRate; // 0x920(0x04)
	FLinearColor DefaultSelectedMaterialColor; // 0x924(0x10)
	FLinearColor SelectedMaterialColor; // 0x934(0x10)
	FLinearColor SelectionOutlineColor; // 0x944(0x10)
	FLinearColor SubduedSelectionOutlineColor; // 0x954(0x10)
	FLinearColor SelectedMaterialColorOverride; // 0x964(0x10)
	bool bIsOverridingSelectedColor; // 0x974(0x01)
	char bEnableOnScreenDebugMessages : 1; // 0x978(0x01)
	char bEnableOnScreenDebugMessagesDisplay : 1; // 0x978(0x01)
	char bSuppressMapWarnings : 1; // 0x978(0x01)
	char bDisableAILogging : 1; // 0x978(0x01)
	uint32_t bEnableVisualLogRecordingOnStart; // 0x97c(0x04)
	int32_t ScreenSaverInhibitorSemaphore; // 0x984(0x04)
	char bLockReadOnlyLevels : 1; // 0x988(0x01)
	FString ParticleEventManagerClassPath; // 0x990(0x10)
	float SelectionHighlightIntensity; // 0x9a0(0x04)
	float BSPSelectionHighlightIntensity; // 0x9a4(0x04)
	float SelectionHighlightIntensityBillboards; // 0x9a8(0x04)
	TArray<FNetDriverDefinition> NetDriverDefinitions; // 0xbf8(0x10)
	TArray<FString> ServerActors; // 0xc08(0x10)
	TArray<FString> RuntimeServerActors; // 0xc18(0x10)
	float NetErrorLogInterval; // 0xc28(0x04)
	char bStartedLoadMapMovie : 1; // 0xc2c(0x01)
	int32_t NextWorldContextHandle; // 0xc48(0x04)
};

// Class Engine.ScriptViewportClient
// Size: 0x38 (Inherited: 0x28)
struct UScriptViewportClient : UObject {
};

// Class Engine.GameViewportClient
// Size: 0x330 (Inherited: 0x38)
struct UGameViewportClient : UScriptViewportClient {
	UConsole* ViewportConsole; // 0x40(0x08)
	TArray<FDebugDisplayProperty> DebugProperties; // 0x48(0x10)
	int32_t MaxSplitscreenPlayers; // 0x68(0x04)
	UWorld* World; // 0x78(0x08)
	UGameInstance* GameInstance; // 0x80(0x08)

	void SSSwapControllers();
	void ShowTitleSafeArea();
	void SetConsoleTarget(int32_t PlayerIndex);
};

// Class Engine.Console
// Size: 0x130 (Inherited: 0x28)
struct UConsole : UObject {
	ULocalPlayer* ConsoleTargetPlayer; // 0x38(0x08)
	UTexture2D* DefaultTexture_Black; // 0x40(0x08)
	UTexture2D* DefaultTexture_White; // 0x48(0x08)
	TArray<FString> HistoryBuffer; // 0x68(0x10)
};

// Class Engine.ControlChannel
// Size: 0x88 (Inherited: 0x70)
struct UControlChannel : UChannel {
};

// Class Engine.StreamingSettings
// Size: 0x70 (Inherited: 0x38)
struct UStreamingSettings : UDeveloperSettings {
	char AsyncLoadingThreadEnabled : 1; // 0x38(0x01)
	char WarnIfTimeLimitExceeded : 1; // 0x38(0x01)
	float TimeLimitExceededMultiplier; // 0x3c(0x04)
	float TimeLimitExceededMinTime; // 0x40(0x04)
	int32_t MinBulkDataSizeForAsyncLoading; // 0x44(0x04)
	char UseBackgroundLevelStreaming : 1; // 0x48(0x01)
	char AsyncLoadingUseFullTimeLimit : 1; // 0x48(0x01)
	float AsyncLoadingTimeLimit; // 0x4c(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x50(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x54(0x04)
	float PriorityLevelStreamingActorsUpdateExtraTime; // 0x58(0x04)
	int32_t LevelStreamingComponentsRegistrationGranularity; // 0x5c(0x04)
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x60(0x04)
	int32_t LevelStreamingComponentsUnregistrationGranularity; // 0x64(0x04)
	char FlushStreamingOnExit : 1; // 0x68(0x01)
	char EventDrivenLoaderEnabled : 1; // 0x68(0x01)
};

// Class Engine.GarbageCollectionSettings
// Size: 0x58 (Inherited: 0x38)
struct UGarbageCollectionSettings : UDeveloperSettings {
	float TimeBetweenPurgingPendingKillObjects; // 0x38(0x04)
	char FlushStreamingOnGC : 1; // 0x3c(0x01)
	char AllowParallelGC : 1; // 0x3c(0x01)
	char IncrementalBeginDestroyEnabled : 1; // 0x3c(0x01)
	char MultithreadedDestructionEnabled : 1; // 0x3c(0x01)
	char CreateGCClusters : 1; // 0x3c(0x01)
	char AssetClusteringEnabled : 1; // 0x3c(0x01)
	char ActorClusteringEnabled : 1; // 0x3c(0x01)
	char BlueprintClusteringEnabled : 1; // 0x3c(0x01)
	char UseDisregardForGCOnDedicatedServers : 1; // 0x3d(0x01)
	int32_t MinGCClusterSize; // 0x40(0x04)
	int32_t NumRetriesBeforeForcingGC; // 0x44(0x04)
	int32_t MaxObjectsNotConsideredByGC; // 0x48(0x04)
	int32_t SizeOfPermanentObjectPool; // 0x4c(0x04)
	int32_t MaxObjectsInGame; // 0x50(0x04)
	int32_t MaxObjectsInEditor; // 0x54(0x04)
};

// Class Engine.CullDistanceVolume
// Size: 0x270 (Inherited: 0x258)
struct ACullDistanceVolume : AVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x258(0x10)
	char bEnabled : 1; // 0x268(0x01)
};

// Class Engine.CurveBase
// Size: 0x30 (Inherited: 0x28)
struct UCurveBase : UObject {

	void GetValueRange(float MinValue, float MaxValue);
	void GetTimeRange(float MinTime, float MaxTime);
};

// Class Engine.CurveEdPresetCurve
// Size: 0x28 (Inherited: 0x28)
struct UCurveEdPresetCurve : UObject {
};

// Class Engine.CurveFloat
// Size: 0xb8 (Inherited: 0x30)
struct UCurveFloat : UCurveBase {
	FRichCurve FloatCurve; // 0x30(0x80)
	bool bIsEventCurve; // 0xb0(0x01)

	float GetFloatValue(float InTime);
};

// Class Engine.CurveLinearColor
// Size: 0x250 (Inherited: 0x30)
struct UCurveLinearColor : UCurveBase {
	FRichCurve FloatCurves[0x4]; // 0x30(0x200)
	float AdjustHue; // 0x230(0x04)
	float AdjustSaturation; // 0x234(0x04)
	float AdjustBrightness; // 0x238(0x04)
	float AdjustBrightnessCurve; // 0x23c(0x04)
	float AdjustVibrance; // 0x240(0x04)
	float AdjustMinAlpha; // 0x244(0x04)
	float AdjustMaxAlpha; // 0x248(0x04)

	FLinearColor GetLinearColorValue(float InTime);
	FLinearColor GetClampedLinearColorValue(float InTime);
};

// Class Engine.Texture2D
// Size: 0xe8 (Inherited: 0xb8)
struct UTexture2D : UTexture {
	int32_t LevelIndex; // 0xb8(0x04)
	int32_t FirstResourceMemMip; // 0xbc(0x04)
	char bTemporarilyDisableStreaming : 1; // 0xc0(0x01)
	enum class TextureAddress AddressX; // 0xc1(0x01)
	enum class TextureAddress AddressY; // 0xc2(0x01)
	FIntPoint ImportedSize; // 0xc4(0x08)

	int32_t Blueprint_GetSizeY();
	int32_t Blueprint_GetSizeX();
};

// Class Engine.CurveLinearColorAtlas
// Size: 0x100 (Inherited: 0xe8)
struct UCurveLinearColorAtlas : UTexture2D {
	uint32_t TextureSize; // 0xe8(0x04)
	TArray<UCurveLinearColor*> GradientCurves; // 0xf0(0x10)

	bool GetCurvePosition(UCurveLinearColor* InCurve, float Position);
};

// Class Engine.CurveSourceInterface
// Size: 0x28 (Inherited: 0x28)
struct UCurveSourceInterface : UInterface {

	float GetCurveValue(FName CurveName);
	void GetCurves(TArray<FNamedCurveValue> OutValues);
	FName GetBindingName();
};

// Class Engine.CurveVector
// Size: 0x1b0 (Inherited: 0x30)
struct UCurveVector : UCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x30(0x180)

	FVector GetVectorValue(float InTime);
};

// Class Engine.DamageType
// Size: 0x40 (Inherited: 0x28)
struct UDamageType : UObject {
	char bCausedByWorld : 1; // 0x28(0x01)
	char bScaleMomentumByMass : 1; // 0x28(0x01)
	char bRadialDamageVelChange : 1; // 0x28(0x01)
	float DamageImpulse; // 0x2c(0x04)
	float DestructibleImpulse; // 0x30(0x04)
	float DestructibleDamageSpreadScale; // 0x34(0x04)
	float DamageFalloff; // 0x38(0x04)
};

// Class Engine.DataTableFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDataTableFunctionLibrary : UBlueprintFunctionLibrary {

	void GetDataTableRowNames(UDataTable* Table, TArray<FName> OutRowNames);
	bool GetDataTableRowFromName(UDataTable* Table, FName RowName, FTableRowBase OutRow);
	TArray<FString> GetDataTableColumnAsString(UDataTable* DataTable, FName PropertyName);
	void EvaluateCurveTableRow(UCurveTable* CurveTable, FName RowName, float InXY, enum class EEvaluateCurveTableResult OutResult, float OutXY, FString ContextString);
	bool DoesDataTableRowExist(UDataTable* Table, FName RowName);
};

// Class Engine.DebugCameraController
// Size: 0x670 (Inherited: 0x570)
struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x570(0x01)
	char bIsFrozenRendering : 1; // 0x570(0x01)
	char bIsOrbitingSelectedActor : 1; // 0x570(0x01)
	char bOrbitPivotUseCenter : 1; // 0x570(0x01)
	char bEnableBufferVisualization : 1; // 0x570(0x01)
	char bEnableBufferVisualizationFullMode : 1; // 0x570(0x01)
	char bIsBufferVisualizationInputSetup : 1; // 0x570(0x01)
	char bLastDisplayEnabled : 1; // 0x570(0x01)
	UDrawFrustumComponent* DrawFrustum; // 0x578(0x08)
	AActor* SelectedActor; // 0x580(0x08)
	UPrimitiveComponent* SelectedComponent; // 0x588(0x08)
	FHitResult SelectedHitPoint; // 0x590(0x88)
	APlayerController* OriginalControllerRef; // 0x618(0x08)
	UPlayer* OriginalPlayer; // 0x620(0x08)
	float SpeedScale; // 0x628(0x04)
	float InitialMaxSpeed; // 0x62c(0x04)
	float InitialAccel; // 0x630(0x04)
	float InitialDecel; // 0x634(0x04)

	void ToggleDisplay();
	void ShowDebugSelectedInfo();
	void SetPawnMovementSpeedScale(float NewSpeedScale);
	void ReceiveOnDeactivate(APlayerController* RestoredPC);
	void ReceiveOnActorSelected(AActor* NewSelectedActor, FVector SelectHitLocation, FVector SelectHitNormal, FHitResult Hit);
	void ReceiveOnActivate(APlayerController* OriginalPC);
	AActor* GetSelectedActor();
};

// Class Engine.DebugCameraControllerSettings
// Size: 0x48 (Inherited: 0x38)
struct UDebugCameraControllerSettings : UDeveloperSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38(0x10)
};

// Class Engine.DebugCameraHUD
// Size: 0x310 (Inherited: 0x310)
struct ADebugCameraHUD : AHUD {
};

// Class Engine.DebugDrawService
// Size: 0x28 (Inherited: 0x28)
struct UDebugDrawService : UBlueprintFunctionLibrary {
};

// Class Engine.DecalActor
// Size: 0x228 (Inherited: 0x220)
struct ADecalActor : AActor {
	UDecalComponent* Decal; // 0x220(0x08)

	void SetDecalMaterial(UMaterialInterface* NewDecalMaterial);
	UMaterialInterface* GetDecalMaterial();
	UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};

// Class Engine.DecalComponent
// Size: 0x230 (Inherited: 0x1f0)
struct UDecalComponent : USceneComponent {
	UMaterialInterface* DecalMaterial; // 0x1f0(0x08)
	int32_t SortOrder; // 0x1f8(0x04)
	float FadeScreenSize; // 0x1fc(0x04)
	float FadeStartDelay; // 0x200(0x04)
	float FadeDuration; // 0x204(0x04)
	float FadeInDuration; // 0x208(0x04)
	float FadeInStartDelay; // 0x20c(0x04)
	char bDestroyOwnerAfterFade : 1; // 0x210(0x01)
	FVector DecalSize; // 0x214(0x0c)

	void SetSortOrder(int32_t Value);
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
};

// Class Engine.DefaultPawn
// Size: 0x2a8 (Inherited: 0x280)
struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x280(0x04)
	float BaseLookUpRate; // 0x284(0x04)
	UPawnMovementComponent* MovementComponent; // 0x288(0x08)
	USphereComponent* CollisionComponent; // 0x290(0x08)
	UStaticMeshComponent* MeshComponent; // 0x298(0x08)
	char bAddDefaultMovementBindings : 1; // 0x2a0(0x01)

	void TurnAtRate(float Rate);
	void MoveUp_World(float Val);
	void MoveRight(float Val);
	void MoveForward(float Val);
	void LookUpAtRate(float Rate);
};

// Class Engine.PhysicsVolume
// Size: 0x268 (Inherited: 0x258)
struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x258(0x04)
	int32_t Priority; // 0x25c(0x04)
	float FluidFriction; // 0x260(0x04)
	char bWaterVolume : 1; // 0x264(0x01)
	char bPhysicsOnContact : 1; // 0x264(0x01)
};

// Class Engine.DefaultPhysicsVolume
// Size: 0x268 (Inherited: 0x268)
struct ADefaultPhysicsVolume : APhysicsVolume {
};

// Class Engine.DemoNetConnection
// Size: 0x1aa0 (Inherited: 0x1a30)
struct UDemoNetConnection : UNetConnection {
};

// Class Engine.DemoNetDriver
// Size: 0x1120 (Inherited: 0x748)
struct UDemoNetDriver : UNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x840(0x50)
	float CheckpointSaveMaxMSPerFrame; // 0xc54(0x04)
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xc88(0x10)
	bool bIsLocalReplay; // 0xce8(0x01)
	TArray<APlayerController*> SpectatorControllers; // 0xcf0(0x10)
};

// Class Engine.PendingNetGame
// Size: 0xc0 (Inherited: 0x28)
struct UPendingNetGame : UObject {
	UNetDriver* NetDriver; // 0x30(0x08)
	UDemoNetDriver* DemoNetDriver; // 0x38(0x08)
};

// Class Engine.DemoPendingNetGame
// Size: 0xc0 (Inherited: 0xc0)
struct UDemoPendingNetGame : UPendingNetGame {
};

// Class Engine.DestructibleInterface
// Size: 0x28 (Inherited: 0x28)
struct UDestructibleInterface : UInterface {
};

// Class Engine.TextureLODSettings
// Size: 0x38 (Inherited: 0x28)
struct UTextureLODSettings : UObject {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x28(0x10)
};

// Class Engine.DeviceProfile
// Size: 0x98 (Inherited: 0x38)
struct UDeviceProfile : UTextureLODSettings {
	FString DeviceType; // 0x38(0x10)
	FString BaseProfileName; // 0x48(0x10)
	UObject* Parent; // 0x58(0x08)
	TArray<FString> CVars; // 0x78(0x10)
};

// Class Engine.DeviceProfileManager
// Size: 0xb0 (Inherited: 0x28)
struct UDeviceProfileManager : UObject {
	TArray<UObject*> Profiles; // 0x28(0x10)
};

// Class Engine.DialogueSoundWaveProxy
// Size: 0x178 (Inherited: 0x160)
struct UDialogueSoundWaveProxy : USoundBase {
};

// Class Engine.DialogueVoice
// Size: 0x40 (Inherited: 0x28)
struct UDialogueVoice : UObject {
	enum class EGrammaticalGender Gender; // 0x28(0x01)
	enum class EGrammaticalNumber Plurality; // 0x29(0x01)
	FGuid LocalizationGUID; // 0x2c(0x10)
};

// Class Engine.DialogueWave
// Size: 0x70 (Inherited: 0x28)
struct UDialogueWave : UObject {
	char bMature : 1; // 0x28(0x01)
	char bOverride_SubtitleOverride : 1; // 0x28(0x01)
	FString SpokenText; // 0x30(0x10)
	FString SubtitleOverride; // 0x40(0x10)
	TArray<FDialogueContextMapping> ContextMappings; // 0x50(0x10)
	FGuid LocalizationGUID; // 0x60(0x10)
};

// Class Engine.Light
// Size: 0x230 (Inherited: 0x220)
struct ALight : AActor {
	ULightComponent* LightComponent; // 0x220(0x08)
	char bEnabled : 1; // 0x228(0x01)

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
};

// Class Engine.DirectionalLight
// Size: 0x230 (Inherited: 0x230)
struct ADirectionalLight : ALight {
};

// Class Engine.DirectionalLightComponent
// Size: 0x3a0 (Inherited: 0x320)
struct UDirectionalLightComponent : ULightComponent {
	float ShadowCascadeBiasDistribution; // 0x320(0x04)
	char bEnableLightShaftOcclusion : 1; // 0x324(0x01)
	float OcclusionMaskDarkness; // 0x328(0x04)
	float OcclusionDepthRange; // 0x32c(0x04)
	FVector LightShaftOverrideDirection; // 0x330(0x0c)
	float WholeSceneDynamicShadowRadius; // 0x33c(0x04)
	float DynamicShadowDistanceMovableLight; // 0x340(0x04)
	float DynamicShadowDistanceStationaryLight; // 0x344(0x04)
	int32_t DynamicShadowCascades; // 0x348(0x04)
	float CascadeDistributionExponent; // 0x34c(0x04)
	float CascadeTransitionFraction; // 0x350(0x04)
	float ShadowDistanceFadeoutFraction; // 0x354(0x04)
	char bUseInsetShadowsForMovableObjects : 1; // 0x358(0x01)
	int32_t FarShadowCascadeCount; // 0x35c(0x04)
	float FarShadowDistance; // 0x360(0x04)
	float DistanceFieldShadowDistance; // 0x364(0x04)
	float LightSourceAngle; // 0x368(0x04)
	float LightSourceSoftAngle; // 0x36c(0x04)
	float TraceDistance; // 0x370(0x04)
	FLightmassDirectionalLightSettings LightmassSettings; // 0x374(0x10)
	char bCastModulatedShadows : 1; // 0x384(0x01)
	FColor ModulatedShadowColor; // 0x388(0x04)
	float ShadowAmount; // 0x38c(0x04)
	char bUsedAsAtmosphereSunLight : 1; // 0x390(0x01)
	int32_t AtmosphereSunLightIndex; // 0x394(0x04)

	void SetShadowDistanceFadeoutFraction(float NewValue);
	void SetShadowAmount(float NewValue);
	void SetOcclusionMaskDarkness(float NewValue);
	void SetLightShaftOverrideDirection(FVector NewValue);
	void SetEnableLightShaftOcclusion(bool bNewValue);
	void SetDynamicShadowDistanceStationaryLight(float NewValue);
	void SetDynamicShadowDistanceMovableLight(float NewValue);
	void SetDynamicShadowCascades(int32_t NewValue);
	void SetCascadeTransitionFraction(float NewValue);
	void SetCascadeDistributionExponent(float NewValue);
};

// Class Engine.Distribution
// Size: 0x30 (Inherited: 0x28)
struct UDistribution : UObject {
};

// Class Engine.DistributionFloat
// Size: 0x38 (Inherited: 0x30)
struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 1; // 0x30(0x01)
	char pad_30_1 : 1; // 0x30(0x01)
	char bBakedDataSuccesfully : 1; // 0x30(0x01)
};

// Class Engine.DistributionFloatConstant
// Size: 0x40 (Inherited: 0x38)
struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x38(0x04)
};

// Class Engine.DistributionFloatConstantCurve
// Size: 0x50 (Inherited: 0x38)
struct UDistributionFloatConstantCurve : UDistributionFloat {
	FInterpCurveFloat ConstantCurve; // 0x38(0x18)
};

// Class Engine.DistributionFloatParameterBase
// Size: 0x60 (Inherited: 0x40)
struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	FName ParameterName; // 0x40(0x08)
	float MinInput; // 0x48(0x04)
	float MaxInput; // 0x4c(0x04)
	float MinOutput; // 0x50(0x04)
	float MaxOutput; // 0x54(0x04)
	enum class DistributionParamMode ParamMode; // 0x58(0x01)
};

// Class Engine.DistributionFloatParticleParameter
// Size: 0x60 (Inherited: 0x60)
struct UDistributionFloatParticleParameter : UDistributionFloatParameterBase {
};

// Class Engine.DistributionFloatUniform
// Size: 0x40 (Inherited: 0x38)
struct UDistributionFloatUniform : UDistributionFloat {
	float Min; // 0x38(0x04)
	float Max; // 0x3c(0x04)
};

// Class Engine.DistributionFloatUniformCurve
// Size: 0x50 (Inherited: 0x38)
struct UDistributionFloatUniformCurve : UDistributionFloat {
	FInterpCurveVector2D ConstantCurve; // 0x38(0x18)
};

// Class Engine.DistributionVector
// Size: 0x38 (Inherited: 0x30)
struct UDistributionVector : UDistribution {
	char bCanBeBaked : 1; // 0x30(0x01)
	char bIsDirty : 1; // 0x30(0x01)
	char bBakedDataSuccesfully : 1; // 0x30(0x01)
};

// Class Engine.DistributionVectorConstant
// Size: 0x50 (Inherited: 0x38)
struct UDistributionVectorConstant : UDistributionVector {
	FVector Constant; // 0x38(0x0c)
	char bLockAxes : 1; // 0x44(0x01)
	enum class EDistributionVectorLockFlags LockedAxes; // 0x48(0x01)
};

// Class Engine.DistributionVectorConstantCurve
// Size: 0x58 (Inherited: 0x38)
struct UDistributionVectorConstantCurve : UDistributionVector {
	FInterpCurveVector ConstantCurve; // 0x38(0x18)
	char bLockAxes : 1; // 0x50(0x01)
	enum class EDistributionVectorLockFlags LockedAxes; // 0x54(0x01)
};

// Class Engine.DistributionVectorParameterBase
// Size: 0x90 (Inherited: 0x50)
struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	FName ParameterName; // 0x50(0x08)
	FVector MinInput; // 0x58(0x0c)
	FVector MaxInput; // 0x64(0x0c)
	FVector MinOutput; // 0x70(0x0c)
	FVector MaxOutput; // 0x7c(0x0c)
	enum class DistributionParamMode ParamModes[0x3]; // 0x88(0x03)
};

// Class Engine.DistributionVectorParticleParameter
// Size: 0x90 (Inherited: 0x90)
struct UDistributionVectorParticleParameter : UDistributionVectorParameterBase {
};

// Class Engine.DistributionVectorUniform
// Size: 0x60 (Inherited: 0x38)
struct UDistributionVectorUniform : UDistributionVector {
	FVector Max; // 0x38(0x0c)
	FVector Min; // 0x44(0x0c)
	char bLockAxes : 1; // 0x50(0x01)
	enum class EDistributionVectorLockFlags LockedAxes; // 0x54(0x01)
	enum class EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x55(0x03)
	char bUseExtremes : 1; // 0x58(0x01)
};

// Class Engine.DistributionVectorUniformCurve
// Size: 0x60 (Inherited: 0x38)
struct UDistributionVectorUniformCurve : UDistributionVector {
	FInterpCurveTwoVectors ConstantCurve; // 0x38(0x18)
	char bLockAxes1 : 1; // 0x50(0x01)
	char bLockAxes2 : 1; // 0x50(0x01)
	enum class EDistributionVectorLockFlags LockedAxes[0x2]; // 0x54(0x02)
	enum class EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x56(0x03)
	char bUseExtremes : 1; // 0x5c(0x01)
};

// Class Engine.DocumentationActor
// Size: 0x228 (Inherited: 0x220)
struct ADocumentationActor : AActor {
};

// Class Engine.DrawFrustumComponent
// Size: 0x410 (Inherited: 0x3f0)
struct UDrawFrustumComponent : UPrimitiveComponent {
	FColor FrustumColor; // 0x3f0(0x04)
	float FrustumAngle; // 0x3f4(0x04)
	float FrustumAspectRatio; // 0x3f8(0x04)
	float FrustumStartDist; // 0x3fc(0x04)
	float FrustumEndDist; // 0x400(0x04)
	UTexture* Texture; // 0x408(0x08)
};

// Class Engine.DrawSphereComponent
// Size: 0x410 (Inherited: 0x410)
struct UDrawSphereComponent : USphereComponent {
};

// Class Engine.EdGraph
// Size: 0x60 (Inherited: 0x28)
struct UEdGraph : UObject {
	UEdGraphSchema* Schema; // 0x28(0x08)
	TArray<UEdGraphNode*> Nodes; // 0x30(0x10)
	char bEditable : 1; // 0x40(0x01)
	char bAllowDeletion : 1; // 0x40(0x01)
	char bAllowRenaming : 1; // 0x40(0x01)
};

// Class Engine.GraphNodeContextMenuContext
// Size: 0x50 (Inherited: 0x28)
struct UGraphNodeContextMenuContext : UObject {
	UBlueprint* Blueprint; // 0x28(0x08)
	UEdGraph* Graph; // 0x30(0x08)
	UEdGraphNode* Node; // 0x38(0x08)
	bool bIsDebugging; // 0x48(0x01)
};

// Class Engine.EdGraphNode
// Size: 0x98 (Inherited: 0x28)
struct UEdGraphNode : UObject {
	TArray<UEdGraphPin_Deprecated*> DeprecatedPins; // 0x38(0x10)
	int32_t NodePosX; // 0x48(0x04)
	int32_t NodePosY; // 0x4c(0x04)
	int32_t NodeWidth; // 0x50(0x04)
	int32_t NodeHeight; // 0x54(0x04)
	enum class ENodeAdvancedPins AdvancedPinDisplay; // 0x58(0x01)
	enum class ENodeEnabledState EnabledState; // 0x59(0x01)
	char pad_4A_0 : 1; // 0x4a(0x01)
	char bDisplayAsDisabled : 1; // 0x5b(0x01)
	char bUserSetEnabledState : 1; // 0x5b(0x01)
	char pad_4A_3 : 1; // 0x4a(0x01)
	char bIsNodeEnabled : 1; // 0x5b(0x01)
	char pad_4A_5 : 1; // 0x4a(0x01)
	char bHasCompilerMessage : 1; // 0x5b(0x01)
	FString NodeComment; // 0x60(0x10)
	int32_t ErrorType; // 0x70(0x04)
	FString ErrorMsg; // 0x78(0x10)
	FGuid NodeGuid; // 0x88(0x10)
};

// Class Engine.EdGraphNode_Documentation
// Size: 0xb8 (Inherited: 0x98)
struct UEdGraphNode_Documentation : UEdGraphNode {
	FString Link; // 0x98(0x10)
	FString Excerpt; // 0xa8(0x10)
};

// Class Engine.EdGraphPin_Deprecated
// Size: 0x118 (Inherited: 0x28)
struct UEdGraphPin_Deprecated : UObject {
	FString PinName; // 0x28(0x10)
	FString PinToolTip; // 0x38(0x10)
	enum class EEdGraphPinDirection Direction; // 0x48(0x01)
	FEdGraphPinType PinType; // 0x50(0x58)
	FString DefaultValue; // 0xa8(0x10)
	FString AutogeneratedDefaultValue; // 0xb8(0x10)
	UObject* DefaultObject; // 0xc8(0x08)
	FText DefaultTextValue; // 0xd0(0x18)
	TArray<UEdGraphPin_Deprecated*> LinkedTo; // 0xe8(0x10)
	TArray<UEdGraphPin_Deprecated*> SubPins; // 0xf8(0x10)
	UEdGraphPin_Deprecated* ParentPin; // 0x108(0x08)
	UEdGraphPin_Deprecated* ReferencePassThroughConnection; // 0x110(0x08)
};

// Class Engine.EdGraphSchema
// Size: 0x28 (Inherited: 0x28)
struct UEdGraphSchema : UObject {
};

// Class Engine.Emitter
// Size: 0x270 (Inherited: 0x220)
struct AEmitter : AActor {
	UParticleSystemComponent* ParticleSystemComponent; // 0x220(0x08)
	char bDestroyOnSystemFinish : 1; // 0x228(0x01)
	char bPostUpdateTickGroup : 1; // 0x228(0x01)
	char bCurrentlyActive : 1; // 0x228(0x01)
	FMulticastInlineDelegate OnParticleSpawn; // 0x230(0x10)
	FMulticastInlineDelegate OnParticleBurst; // 0x240(0x10)
	FMulticastInlineDelegate OnParticleDeath; // 0x250(0x10)
	FMulticastInlineDelegate OnParticleCollide; // 0x260(0x10)

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
};

// Class Engine.EmitterCameraLensEffectBase
// Size: 0x2e0 (Inherited: 0x270)
struct AEmitterCameraLensEffectBase : AEmitter {
	UParticleSystem* PS_CameraEffect; // 0x270(0x08)
	UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x278(0x08)
	APlayerCameraManager* BaseCamera; // 0x280(0x08)
	FTransform RelativeTransform; // 0x290(0x30)
	float BaseFOV; // 0x2c0(0x04)
	char bAllowMultipleInstances : 1; // 0x2c4(0x01)
	char bResetWhenRetriggered : 1; // 0x2c4(0x01)
	TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x2c8(0x10)
	float DistFromCamera; // 0x2d8(0x04)
};

// Class Engine.ViewModeUtils
// Size: 0x28 (Inherited: 0x28)
struct UViewModeUtils : UObject {
};

// Class Engine.EngineBaseTypes
// Size: 0x28 (Inherited: 0x28)
struct UEngineBaseTypes : UObject {
};

// Class Engine.EngineHandlerComponentFactory
// Size: 0x28 (Inherited: 0x28)
struct UEngineHandlerComponentFactory : UHandlerComponentFactory {
};

// Class Engine.LocalMessage
// Size: 0x28 (Inherited: 0x28)
struct ULocalMessage : UObject {
};

// Class Engine.EngineMessage
// Size: 0xa8 (Inherited: 0x28)
struct UEngineMessage : ULocalMessage {
	FString FailedPlaceMessage; // 0x28(0x10)
	FString MaxedOutMessage; // 0x38(0x10)
	FString EnteredMessage; // 0x48(0x10)
	FString LeftMessage; // 0x58(0x10)
	FString GlobalNameChange; // 0x68(0x10)
	FString SpecEnteredMessage; // 0x78(0x10)
	FString NewPlayerMessage; // 0x88(0x10)
	FString NewSpecMessage; // 0x98(0x10)
};

// Class Engine.EngineTypes
// Size: 0x28 (Inherited: 0x28)
struct UEngineTypes : UObject {
};

// Class Engine.ExponentialHeightFog
// Size: 0x230 (Inherited: 0x220)
struct AExponentialHeightFog : AInfo {
	UExponentialHeightFogComponent* Component; // 0x220(0x08)
	char bEnabled : 1; // 0x228(0x01)

	void OnRep_bEnabled();
};

// Class Engine.ExponentialHeightFogComponent
// Size: 0x290 (Inherited: 0x1f0)
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x1f0(0x04)
	float FogHeightFalloff; // 0x1f4(0x04)
	FExponentialHeightFogData SecondFogData; // 0x1f8(0x0c)
	FLinearColor FogInscatteringColor; // 0x204(0x10)
	UTextureCube* InscatteringColorCubemap; // 0x218(0x08)
	float InscatteringColorCubemapAngle; // 0x220(0x04)
	FLinearColor InscatteringTextureTint; // 0x224(0x10)
	float FullyDirectionalInscatteringColorDistance; // 0x234(0x04)
	float NonDirectionalInscatteringColorDistance; // 0x238(0x04)
	float DirectionalInscatteringExponent; // 0x23c(0x04)
	float DirectionalInscatteringStartDistance; // 0x240(0x04)
	FLinearColor DirectionalInscatteringColor; // 0x244(0x10)
	float FogMaxOpacity; // 0x254(0x04)
	float StartDistance; // 0x258(0x04)
	float FogCutoffDistance; // 0x25c(0x04)
	bool bEnableVolumetricFog; // 0x260(0x01)
	float VolumetricFogScatteringDistribution; // 0x264(0x04)
	FColor VolumetricFogAlbedo; // 0x268(0x04)
	FLinearColor VolumetricFogEmissive; // 0x26c(0x10)
	float VolumetricFogExtinctionScale; // 0x27c(0x04)
	float VolumetricFogDistance; // 0x280(0x04)
	float VolumetricFogStaticLightingScatteringIntensity; // 0x284(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x288(0x01)

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
};

// Class Engine.Exporter
// Size: 0x78 (Inherited: 0x28)
struct UExporter : UObject {
	UObject* SupportedClass; // 0x28(0x08)
	UObject* ExportRootScope; // 0x30(0x08)
	TArray<FString> FormatExtension; // 0x38(0x10)
	TArray<FString> FormatDescription; // 0x48(0x10)
	int32_t PreferredFormatIndex; // 0x58(0x04)
	int32_t TextIndent; // 0x5c(0x04)
	char bText : 1; // 0x60(0x01)
	char bSelectedOnly : 1; // 0x60(0x01)
	char bForceFileOperations : 1; // 0x60(0x01)
	UAssetExportTask* ExportTask; // 0x68(0x08)

	bool ScriptRunAssetExportTask(UAssetExportTask* Task);
	bool RunAssetExportTasks(TArray<UAssetExportTask*> ExportTasks);
	bool RunAssetExportTask(UAssetExportTask* Task);
};

// Class Engine.FloatingPawnMovement
// Size: 0x150 (Inherited: 0x138)
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x138(0x04)
	float Acceleration; // 0x13c(0x04)
	float Deceleration; // 0x140(0x04)
	float TurningBoost; // 0x144(0x04)
	char bPositionCorrected : 1; // 0x148(0x01)
};

// Class Engine.Font
// Size: 0x1d0 (Inherited: 0x28)
struct UFont : UObject {
	enum class EFontCacheType FontCacheType; // 0x30(0x01)
	TArray<FFontCharacter> Characters; // 0x38(0x10)
	TArray<UTexture2D*> Textures; // 0x48(0x10)
	int32_t IsRemapped; // 0x58(0x04)
	float EmScale; // 0x5c(0x04)
	float Ascent; // 0x60(0x04)
	float Descent; // 0x64(0x04)
	float Leading; // 0x68(0x04)
	int32_t Kerning; // 0x6c(0x04)
	FFontImportOptionsData ImportOptions; // 0x70(0xb0)
	int32_t NumCharacters; // 0x120(0x04)
	TArray<int32_t> MaxCharHeight; // 0x128(0x10)
	float ScalingFactor; // 0x138(0x04)
	int32_t LegacyFontSize; // 0x13c(0x04)
	FName LegacyFontName; // 0x140(0x08)
	FCompositeFont CompositeFont; // 0x148(0x38)
};

// Class Engine.FontFace
// Size: 0x58 (Inherited: 0x28)
struct UFontFace : UObject {
	FString SourceFilename; // 0x30(0x10)
	enum class EFontHinting Hinting; // 0x40(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x41(0x01)
	enum class EFontLayoutMethod LayoutMethod; // 0x42(0x01)
};

// Class Engine.FontImportOptions
// Size: 0xd8 (Inherited: 0x28)
struct UFontImportOptions : UObject {
	FFontImportOptionsData Data; // 0x28(0xb0)
};

// Class Engine.ForceFeedbackAttenuation
// Size: 0xd8 (Inherited: 0x28)
struct UForceFeedbackAttenuation : UObject {
	FForceFeedbackAttenuationSettings Attenuation; // 0x28(0xb0)
};

// Class Engine.ForceFeedbackComponent
// Size: 0x2d0 (Inherited: 0x1f0)
struct UForceFeedbackComponent : USceneComponent {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x1f0(0x08)
	char bAutoDestroy : 1; // 0x1f8(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x1f8(0x01)
	char bLooping : 1; // 0x1f8(0x01)
	char bIgnoreTimeDilation : 1; // 0x1f8(0x01)
	char bOverrideAttenuation : 1; // 0x1f8(0x01)
	float IntensityMultiplier; // 0x1fc(0x04)
	UForceFeedbackAttenuation* AttenuationSettings; // 0x200(0x08)
	FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x208(0xb0)
	FMulticastInlineDelegate OnForceFeedbackFinished; // 0x2b8(0x10)

	void Stop();
	void SetIntensityMultiplier(float NewIntensityMultiplier);
	void SetForceFeedbackEffect(UForceFeedbackEffect* NewForceFeedbackEffect);
	void Play(float StartTime);
	bool BP_GetAttenuationSettingsToApply(FForceFeedbackAttenuationSettings OutAttenuationSettings);
	void AdjustAttenuation(FForceFeedbackAttenuationSettings InAttenuationSettings);
};

// Class Engine.ForceFeedbackEffect
// Size: 0x40 (Inherited: 0x28)
struct UForceFeedbackEffect : UObject {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28(0x10)
	float Duration; // 0x38(0x04)
};

// Class Engine.GameEngine
// Size: 0xe30 (Inherited: 0xde0)
struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xde0(0x04)
	float ServerFlushLogInterval; // 0xde4(0x04)
	UGameInstance* GameInstance; // 0xde8(0x08)
};

// Class Engine.GameNetworkManager
// Size: 0x2d0 (Inherited: 0x220)
struct AGameNetworkManager : AInfo {
	float BadPacketLossThreshold; // 0x220(0x04)
	float SeverePacketLossThreshold; // 0x224(0x04)
	int32_t BadPingThreshold; // 0x228(0x04)
	int32_t SeverePingThreshold; // 0x22c(0x04)
	int32_t AdjustedNetSpeed; // 0x230(0x04)
	float LastNetSpeedUpdateTime; // 0x234(0x04)
	int32_t TotalNetBandwidth; // 0x238(0x04)
	int32_t MinDynamicBandwidth; // 0x23c(0x04)
	int32_t MaxDynamicBandwidth; // 0x240(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x244(0x01)
	char bHasStandbyCheatTriggered : 1; // 0x244(0x01)
	float StandbyRxCheatTime; // 0x248(0x04)
	float StandbyTxCheatTime; // 0x24c(0x04)
	float PercentMissingForRxStandby; // 0x250(0x04)
	float PercentMissingForTxStandby; // 0x254(0x04)
	float PercentForBadPing; // 0x258(0x04)
	float JoinInProgressStandbyWaitTime; // 0x25c(0x04)
	float MoveRepSize; // 0x260(0x04)
	float MAXPOSITIONERRORSQUARED; // 0x264(0x04)
	float MAXNEARZEROVELOCITYSQUARED; // 0x268(0x04)
	float CLIENTADJUSTUPDATECOST; // 0x26c(0x04)
	float MAXCLIENTUPDATEINTERVAL; // 0x270(0x04)
	float MaxClientForcedUpdateDuration; // 0x274(0x04)
	float ServerForcedUpdateHitchThreshold; // 0x278(0x04)
	float ServerForcedUpdateHitchCooldown; // 0x27c(0x04)
	float MaxMoveDeltaTime; // 0x280(0x04)
	float MaxClientSmoothingDeltaTime; // 0x284(0x04)
	float ClientNetSendMoveDeltaTime; // 0x288(0x04)
	float ClientNetSendMoveDeltaTimeThrottled; // 0x28c(0x04)
	float ClientNetSendMoveDeltaTimeStationary; // 0x290(0x04)
	int32_t ClientNetSendMoveThrottleAtNetSpeed; // 0x294(0x04)
	int32_t ClientNetSendMoveThrottleOverPlayerCount; // 0x298(0x04)
	bool ClientAuthorativePosition; // 0x29c(0x01)
	float ClientErrorUpdateRateLimit; // 0x2a0(0x04)
	float ClientNetCamUpdateDeltaTime; // 0x2a4(0x04)
	float ClientNetCamUpdatePositionLimit; // 0x2a8(0x04)
	bool bMovementTimeDiscrepancyDetection; // 0x2ac(0x01)
	bool bMovementTimeDiscrepancyResolution; // 0x2ad(0x01)
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x2b0(0x04)
	float MovementTimeDiscrepancyMinTimeMargin; // 0x2b4(0x04)
	float MovementTimeDiscrepancyResolutionRate; // 0x2b8(0x04)
	float MovementTimeDiscrepancyDriftAllowance; // 0x2bc(0x04)
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x2c0(0x01)
	bool bUseDistanceBasedRelevancy; // 0x2c1(0x01)
};

// Class Engine.GameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UGameplayStatics : UBlueprintFunctionLibrary {

	void UnloadStreamLevel(UObject* WorldContextObject, FName LevelName, FLatentActionInfo LatentInfo, bool bShouldBlockOnUnload);
	bool SuggestProjectileVelocity_CustomArc(UObject* WorldContextObject, FVector OutLaunchVelocity, FVector StartPos, FVector EndPos, float OverrideGravityZ, float ArcParam);
	UAudioComponent* SpawnSoundAttached(USoundBase* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	UAudioComponent* SpawnSoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	UAudioComponent* SpawnSound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	UObject* SpawnObject(UObject* objectClass, UObject* Outer);
	UForceFeedbackComponent* SpawnForceFeedbackAttached(UForceFeedbackEffect* ForceFeedbackEffect, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
	UForceFeedbackComponent* SpawnForceFeedbackAtLocation(UObject* WorldContextObject, UForceFeedbackEffect* ForceFeedbackEffect, FVector Location, FRotator Rotation, bool bLooping, float IntensityMultiplier, float StartTime, UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
	UParticleSystemComponent* SpawnEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, enum class EAttachLocation LocationType, bool bAutoDestroy, enum class EPSCPoolMethod PoolingMethod, bool bAutoActivate);
	UParticleSystemComponent* SpawnEmitterAtLocation(UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, enum class EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem);
	UAudioComponent* SpawnDialogueAttached(UDialogueWave* Dialogue, FDialogueContext Context, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
	UAudioComponent* SpawnDialogueAtLocation(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
	UAudioComponent* SpawnDialogue2D(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);
	UDecalComponent* SpawnDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, enum class EAttachLocation LocationType, float LifeSpan);
	UDecalComponent* SpawnDecalAtLocation(UObject* WorldContextObject, UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);
	void SetWorldOriginLocation(UObject* WorldContextObject, FIntVector NewLocation);
	void SetViewportMouseCaptureMode(UObject* WorldContextObject, enum class EMouseCaptureMode MouseCaptureMode);
	void SetSubtitlesEnabled(bool bEnabled);
	void SetSoundMixClassOverride(UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);
	void SetSoundClassDistanceScale(UObject* WorldContextObject, USoundClass* SoundClass, float DistanceAttenuationScale, float TimeSec);
	void SetPlayerControllerID(APlayerController* Player, int32_t ControllerId);
	void SetMaxAudioChannelsScaled(UObject* WorldContextObject, float MaxChannelCountScale);
	void SetGlobalTimeDilation(UObject* WorldContextObject, float TimeDilation);
	void SetGlobalPitchModulation(UObject* WorldContextObject, float PitchModulation, float TimeSec);
	void SetGlobalListenerFocusParameters(UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);
	bool SetGamePaused(UObject* WorldContextObject, bool bPaused);
	void SetForceDisableSplitscreen(UObject* WorldContextObject, bool bDisable);
	void SetEnableWorldRendering(UObject* WorldContextObject, bool bEnable);
	void SetBaseSoundMix(UObject* WorldContextObject, USoundMix* InSoundMix);
	bool SaveGameToSlot(USaveGame* SaveGameObject, FString slotName, int32_t UserIndex);
	void RemovePlayer(APlayerController* Player, bool bDestroyPawn);
	FVector RebaseZeroOriginOntoLocal(UObject* WorldContextObject, FVector WorldLocation);
	FVector RebaseLocalOriginOntoZero(UObject* WorldContextObject, FVector WorldLocation);
	void PushSoundMixModifier(UObject* WorldContextObject, USoundMix* InSoundMixModifier);
	bool ProjectWorldToScreen(APlayerController* Player, FVector WorldPosition, FVector2D ScreenPosition, bool bPlayerViewportRelative);
	void PrimeSound(USoundBase* InSound);
	void PopSoundMixModifier(UObject* WorldContextObject, USoundMix* InSoundMixModifier);
	void PlayWorldCameraShake(UObject* WorldContextObject, UCameraShake* Shake, FVector Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
	void PlaySoundAtLocation(UObject* WorldContextObject, USoundBase* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, AActor* owningActor);
	void PlaySound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, AActor* owningActor);
	void PlayDialogueAtLocation(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext Context, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings);
	void PlayDialogue2D(UObject* WorldContextObject, UDialogueWave* Dialogue, FDialogueContext Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	FString ParseOption(FString options, FString Key);
	void OpenLevel(UObject* WorldContextObject, FName LevelName, bool bAbsolute, FString options);
	FHitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, FVector Location, FVector ImpactPoint, FVector Normal, FVector ImpactNormal, UPhysicalMaterial* PhysMat, AActor* HitActor, UPrimitiveComponent* HitComponent, FName HitBoneName, int32_t HitItem, int32_t FaceIndex, FVector TraceStart, FVector TraceEnd);
	void LoadStreamLevel(UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo);
	USaveGame* LoadGameFromSlot(FString slotName, int32_t UserIndex);
	bool IsSplitscreenForceDisabled(UObject* WorldContextObject);
	bool IsGamePaused(UObject* WorldContextObject);
	bool HasOption(FString options, FString InKey);
	bool HasLaunchOption(FString OptionToCheck);
	int32_t GrassOverlappingSphereCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
	FIntVector GetWorldOriginLocation(UObject* WorldContextObject);
	float GetWorldDeltaSeconds(UObject* WorldContextObject);
	void GetViewProjectionMatrix(FMinimalViewInfo DesiredView, FMatrix ViewMatrix, FMatrix ProjectionMatrix, FMatrix ViewProjectionMatrix);
	enum class EMouseCaptureMode GetViewportMouseCaptureMode(UObject* WorldContextObject);
	float GetUnpausedTimeSeconds(UObject* WorldContextObject);
	float GetTimeSeconds(UObject* WorldContextObject);
	enum class EPhysicalSurface GetSurfaceType(FHitResult Hit);
	ULevelStreaming* GetStreamingLevel(UObject* WorldContextObject, FName PackageName);
	float GetRealTimeSeconds(UObject* WorldContextObject);
	APawn* GetPlayerPawn(UObject* WorldContextObject, int32_t PlayerIndex);
	int32_t GetPlayerControllerID(APlayerController* Player);
	APlayerController* GetPlayerControllerFromID(UObject* WorldContextObject, int32_t ControllerId);
	APlayerController* GetPlayerController(UObject* WorldContextObject, int32_t PlayerIndex);
	ACharacter* GetPlayerCharacter(UObject* WorldContextObject, int32_t PlayerIndex);
	APlayerCameraManager* GetPlayerCameraManager(UObject* WorldContextObject, int32_t PlayerIndex);
	FString GetPlatformName();
	UObject* GetObjectClass(UObject* Object);
	int32_t GetMaxAudioChannelCount(UObject* WorldContextObject);
	void GetKeyValue(FString Pair, FString Key, FString Value);
	int32_t GetIntOption(FString options, FString Key, int32_t DefaultValue);
	float GetGlobalTimeDilation(UObject* WorldContextObject);
	AGameStateBase* GetGameState(UObject* WorldContextObject);
	AGameModeBase* GetGameMode(UObject* WorldContextObject);
	UGameInstance* GetGameInstance(UObject* WorldContextObject);
	bool GetEnableWorldRendering(UObject* WorldContextObject);
	UReverbEffect* GetCurrentReverbEffect(UObject* WorldContextObject);
	FString GetCurrentLevelName(UObject* WorldContextObject, bool bRemovePrefixString);
	bool GetClosestListenerLocation(UObject* WorldContextObject, FVector Location, float MaximumRange, bool bAllowAttenuationOverride, FVector ListenerPosition);
	float GetAudioTimeSeconds(UObject* WorldContextObject);
	void GetAllActorsWithTag(UObject* WorldContextObject, FName Tag, TArray<AActor*> OutActors);
	void GetAllActorsWithInterface(UObject* WorldContextObject, UInterface* Interface, TArray<AActor*> OutActors);
	void GetAllActorsOfClassWithTag(UObject* WorldContextObject, AActor* ActorClass, FName Tag, TArray<AActor*> OutActors);
	void GetAllActorsOfClass(UObject* WorldContextObject, AActor* ActorClass, TArray<AActor*> OutActors);
	AActor* GetActorOfClass(UObject* WorldContextObject, AActor* ActorClass);
	void GetActorArrayBounds(TArray<AActor*> Actors, bool bOnlyCollidingComponents, FVector Center, FVector BoxExtent);
	FVector GetActorArrayAverageLocation(TArray<AActor*> Actors);
	void GetAccurateRealTime(UObject* WorldContextObject, int32_t Seconds, float PartialSeconds);
	void FlushLevelStreaming(UObject* WorldContextObject);
	AActor* FinishSpawningActor(AActor* Actor, FTransform SpawnTransform);
	bool FindCollisionUV(FHitResult Hit, int32_t UVChannel, FVector2D UV);
	void EnableLiveStreaming(bool enable);
	bool DoesSaveGameExist(FString slotName, int32_t UserIndex);
	bool DeprojectScreenToWorld(APlayerController* Player, FVector2D ScreenPosition, FVector WorldPosition, FVector WorldDirection);
	bool DeleteGameInSlot(FString slotName, int32_t UserIndex);
	void DeactivateReverbEffect(UObject* WorldContextObject, FName TagName);
	UAudioComponent* CreateSound2D(UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	USaveGame* CreateSaveGameObject(USaveGame* SaveGameClass);
	APlayerController* CreatePlayer(UObject* WorldContextObject, int32_t ControllerId, bool bSpawnPlayerController);
	void ClearSoundMixModifiers(UObject* WorldContextObject);
	void ClearSoundMixClassOverride(UObject* WorldContextObject, USoundMix* InSoundMixModifier, USoundClass* InSoundClass, float FadeOutTime);
	void CancelAsyncLoading();
	void BreakHitResult(FHitResult Hit, bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, FVector Location, FVector ImpactPoint, FVector Normal, FVector ImpactNormal, UPhysicalMaterial* PhysMat, AActor* HitActor, UPrimitiveComponent* HitComponent, FName HitBoneName, int32_t HitItem, int32_t FaceIndex, FVector TraceStart, FVector TraceEnd);
	bool BlueprintSuggestProjectileVelocity(UObject* WorldContextObject, FVector TossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, enum class ESuggestProjVelocityTraceOption TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);
	bool Blueprint_PredictProjectilePath_ByTraceChannel(UObject* WorldContextObject, FHitResult OutHit, TArray<FVector> OutPathPositions, FVector OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, enum class ECollisionChannel TraceChannel, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
	bool Blueprint_PredictProjectilePath_ByObjectType(UObject* WorldContextObject, FHitResult OutHit, TArray<FVector> OutPathPositions, FVector OutLastTraceDestination, FVector StartPos, FVector LaunchVelocity, bool bTracePath, float ProjectileRadius, TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
	bool Blueprint_PredictProjectilePath_Advanced(UObject* WorldContextObject, FPredictProjectilePathParams PredictParams, FPredictProjectilePathResult PredictResult);
	AActor* BeginSpawningActorFromClass(UObject* WorldContextObject, AActor* ActorClass, FTransform SpawnTransform, bool bNoCollisionFail, AActor* Owner);
	AActor* BeginSpawningActorFromBlueprint(UObject* WorldContextObject, UBlueprint* Blueprint, FTransform SpawnTransform, bool bNoCollisionFail);
	AActor* BeginDeferredActorSpawnFromClass(UObject* WorldContextObject, AActor* ActorClass, FTransform SpawnTransform, enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner);
	bool AreSubtitlesEnabled();
	bool AreAnyListenersWithinRange(UObject* WorldContextObject, FVector Location, float MaximumRange);
	bool ApplyRadialDamageWithFalloff(UObject* WorldContextObject, float BaseDamage, float MinimumDamage, FVector Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, UDamageType* DamageTypeClass, TArray<AActor*> IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, enum class ECollisionChannel DamagePreventionChannel);
	bool ApplyRadialDamage(UObject* WorldContextObject, float BaseDamage, FVector Origin, float DamageRadius, UDamageType* DamageTypeClass, TArray<AActor*> IgnoreActors, AActor* DamageCauser, AController* InstigatedByController, bool bDoFullDamage, enum class ECollisionChannel DamagePreventionChannel);
	float ApplyPointDamage(AActor* DamagedActor, float BaseDamage, FVector HitFromDirection, FHitResult HitInfo, AController* EventInstigator, AActor* DamageCauser, UDamageType* DamageTypeClass);
	float ApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator, AActor* DamageCauser, UDamageType* DamageTypeClass);
	void ActivateReverbEffect(UObject* WorldContextObject, UReverbEffect* ReverbEffect, FName TagName, float Priority, float Volume, float FadeTime);
};

// Class Engine.SpotLight
// Size: 0x238 (Inherited: 0x230)
struct ASpotLight : ALight {
	USpotLightComponent* SpotLightComponent; // 0x230(0x08)

	void SetOuterConeAngle(float NewOuterConeAngle);
	void SetInnerConeAngle(float NewInnerConeAngle);
};

// Class Engine.GeneratedMeshAreaLight
// Size: 0x238 (Inherited: 0x238)
struct AGeneratedMeshAreaLight : ASpotLight {
};

// Class Engine.HapticFeedbackEffect_Base
// Size: 0x28 (Inherited: 0x28)
struct UHapticFeedbackEffect_Base : UObject {
};

// Class Engine.HapticFeedbackEffect_Buffer
// Size: 0x68 (Inherited: 0x28)
struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	TArray<char> Amplitudes; // 0x28(0x10)
	int32_t SampleRate; // 0x38(0x04)
};

// Class Engine.HapticFeedbackEffect_Curve
// Size: 0x138 (Inherited: 0x28)
struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x28(0x110)
};

// Class Engine.HapticFeedbackEffect_SoundWave
// Size: 0x60 (Inherited: 0x28)
struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	USoundWave* SoundWave; // 0x28(0x08)
};

// Class Engine.HealthSnapshotBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHealthSnapshotBlueprintLibrary : UBlueprintFunctionLibrary {

	void StopPerformanceSnapshots();
	void StartPerformanceSnapshots();
	void LogPerformanceSnapshot(FString SnapshotTitle, bool bResetStats);
};

// Class Engine.HLODProxy
// Size: 0x38 (Inherited: 0x28)
struct UHLODProxy : UObject {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x28(0x10)
};

// Class Engine.ImportanceSamplingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UImportanceSamplingLibrary : UBlueprintFunctionLibrary {

	float RandomSobolFloat(int32_t Index, int32_t Dimension, float Seed);
	FVector RandomSobolCell3D(int32_t Index, int32_t NumCells, FVector Cell, FVector Seed);
	FVector2D RandomSobolCell2D(int32_t Index, int32_t NumCells, FVector2D Cell, FVector2D Seed);
	float NextSobolFloat(int32_t Index, int32_t Dimension, float PreviousValue);
	FVector NextSobolCell3D(int32_t Index, int32_t NumCells, FVector PreviousValue);
	FVector2D NextSobolCell2D(int32_t Index, int32_t NumCells, FVector2D PreviousValue);
	FImportanceTexture MakeImportanceTexture(UTexture2D* Texture, enum class EImportanceWeight WeightingFunc);
	void ImportanceSample(FImportanceTexture Texture, FVector2D Rand, int32_t Samples, float Intensity, FVector2D SamplePosition, FLinearColor SampleColor, float SampleIntensity, float SampleSize);
	void BreakImportanceTexture(FImportanceTexture ImportanceTexture, UTexture2D* Texture, enum class EImportanceWeight WeightingFunc);
};

// Class Engine.ImportantToggleSettingInterface
// Size: 0x28 (Inherited: 0x28)
struct UImportantToggleSettingInterface : UInterface {
};

// Class Engine.InGameAdManager
// Size: 0x60 (Inherited: 0x38)
struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; // 0x38(0x01)
	TArray<FDelegate> ClickedBannerDelegates; // 0x40(0x10)
	TArray<FDelegate> ClosedAdDelegates; // 0x50(0x10)
};

// Class Engine.InheritableComponentHandler
// Size: 0x48 (Inherited: 0x28)
struct UInheritableComponentHandler : UObject {
	TArray<FComponentOverrideRecord> Records; // 0x28(0x10)
	TArray<UActorComponent*> UnnecessaryComponents; // 0x38(0x10)
};

// Class Engine.InputDelegateBinding
// Size: 0x28 (Inherited: 0x28)
struct UInputDelegateBinding : UDynamicBlueprintBinding {
};

// Class Engine.InputActionDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputActionDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputAxisDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputAxisDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputAxisKeyDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputComponent
// Size: 0x138 (Inherited: 0xb0)
struct UInputComponent : UActorComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x120(0x10)

	bool WasControllerKeyJustReleased(FKey Key);
	bool WasControllerKeyJustPressed(FKey Key);
	bool IsControllerKeyDown(FKey Key);
	void GetTouchState(int32_t FingerIndex, float LocationX, float LocationY, bool bIsCurrentlyPressed);
	FVector GetControllerVectorKeyState(FKey Key);
	void GetControllerMouseDelta(float DeltaX, float DeltaY);
	float GetControllerKeyTimeDown(FKey Key);
	void GetControllerAnalogStickState(enum class EControllerAnalogStick WhichStick, float StickX, float StickY);
	float GetControllerAnalogKeyState(FKey Key);
};

// Class Engine.InputKeyDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputSettings
// Size: 0xf0 (Inherited: 0x28)
struct UInputSettings : UObject {
	TArray<FInputAxisConfigEntry> AxisConfig; // 0x28(0x10)
	char bAltEnterTogglesFullscreen : 1; // 0x38(0x01)
	char bF11TogglesFullscreen : 1; // 0x38(0x01)
	char bUseMouseForTouch : 1; // 0x38(0x01)
	char bEnableMouseSmoothing : 1; // 0x38(0x01)
	char bEnableFOVScaling : 1; // 0x38(0x01)
	char bCaptureMouseOnLaunch : 1; // 0x38(0x01)
	char bDefaultViewportMouseLock : 1; // 0x38(0x01)
	char bAlwaysShowTouchInterface : 1; // 0x38(0x01)
	char bShowConsoleOnFourFingerTap : 1; // 0x39(0x01)
	char bEnableGestureRecognizer : 1; // 0x39(0x01)
	bool bUseAutocorrect; // 0x3a(0x01)
	TArray<FString> ExcludedAutocorrectOS; // 0x40(0x10)
	TArray<FString> ExcludedAutocorrectCultures; // 0x50(0x10)
	TArray<FString> ExcludedAutocorrectDeviceModels; // 0x60(0x10)
	enum class EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x70(0x01)
	enum class EMouseLockMode DefaultViewportMouseLockMode; // 0x71(0x01)
	float FOVScale; // 0x74(0x04)
	float DoubleClickTime; // 0x78(0x04)
	TArray<FInputActionKeyMapping> ActionMappings; // 0x80(0x10)
	TArray<FInputAxisKeyMapping> AxisMappings; // 0x90(0x10)
	TArray<FInputActionSpeechMapping> SpeechMappings; // 0xa0(0x10)
	FSoftObjectPath DefaultTouchInterface; // 0xb0(0x18)
	FKey ConsoleKey; // 0xc8(0x18)
	TArray<FKey> ConsoleKeys; // 0xe0(0x10)

	void SaveKeyMappings();
	void RemoveAxisMapping(FInputAxisKeyMapping KeyMapping, bool bForceRebuildKeymaps);
	void RemoveActionMapping(FInputActionKeyMapping KeyMapping, bool bForceRebuildKeymaps);
	UInputSettings* GetInputSettings();
	void GetAxisNames(TArray<FName> AxisNames);
	void GetAxisMappingByName(FName InAxisName, TArray<FInputAxisKeyMapping> OutMappings);
	void GetActionNames(TArray<FName> ActionNames);
	void GetActionMappingByName(FName InActionName, TArray<FInputActionKeyMapping> OutMappings);
	void ForceRebuildKeymaps();
	void AddAxisMapping(FInputAxisKeyMapping KeyMapping, bool bForceRebuildKeymaps);
	void AddActionMapping(FInputActionKeyMapping KeyMapping, bool bForceRebuildKeymaps);
};

// Class Engine.InputTouchDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputTouchDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputVectorAxisDelegateBinding
// Size: 0x38 (Inherited: 0x38)
struct UInputVectorAxisDelegateBinding : UInputAxisKeyDelegateBinding {
};

// Class Engine.Interface_AssetUserData
// Size: 0x28 (Inherited: 0x28)
struct UInterface_AssetUserData : UInterface {
};

// Class Engine.Interface_CollisionDataProvider
// Size: 0x28 (Inherited: 0x28)
struct UInterface_CollisionDataProvider : UInterface {
};

// Class Engine.Interface_PostProcessVolume
// Size: 0x28 (Inherited: 0x28)
struct UInterface_PostProcessVolume : UInterface {
};

// Class Engine.Interface_PreviewMeshProvider
// Size: 0x28 (Inherited: 0x28)
struct UInterface_PreviewMeshProvider : UInterface {
};

// Class Engine.InterpCurveEdSetup
// Size: 0x40 (Inherited: 0x28)
struct UInterpCurveEdSetup : UObject {
	TArray<FCurveEdTab> Tabs; // 0x28(0x10)
	int32_t ActiveTab; // 0x38(0x04)
};

// Class Engine.InterpData
// Size: 0x70 (Inherited: 0x28)
struct UInterpData : UObject {
	float InterpLength; // 0x28(0x04)
	float PathBuildTime; // 0x2c(0x04)
	TArray<UInterpGroup*> InterpGroups; // 0x30(0x10)
	UInterpCurveEdSetup* CurveEdSetup; // 0x40(0x08)
	float EdSectionStart; // 0x48(0x04)
	float EdSectionEnd; // 0x4c(0x04)
	char bShouldBakeAndPrune : 1; // 0x50(0x01)
	UInterpGroupDirector* CachedDirectorGroup; // 0x58(0x08)
	TArray<FName> AllEventNames; // 0x60(0x10)
};

// Class Engine.InterpFilter
// Size: 0x38 (Inherited: 0x28)
struct UInterpFilter : UObject {
	FString Caption; // 0x28(0x10)
};

// Class Engine.InterpFilter_Classes
// Size: 0x38 (Inherited: 0x38)
struct UInterpFilter_Classes : UInterpFilter {
};

// Class Engine.InterpFilter_Custom
// Size: 0x38 (Inherited: 0x38)
struct UInterpFilter_Custom : UInterpFilter {
};

// Class Engine.InterpGroup
// Size: 0x50 (Inherited: 0x28)
struct UInterpGroup : UObject {
	TArray<UInterpTrack*> InterpTracks; // 0x30(0x10)
	FName GroupName; // 0x40(0x08)
	FColor GroupColor; // 0x48(0x04)
	char bCollapsed : 1; // 0x4c(0x01)
	char bVisible : 1; // 0x4c(0x01)
	char bIsFolder : 1; // 0x4c(0x01)
	char bIsParented : 1; // 0x4c(0x01)
	char bIsSelected : 1; // 0x4c(0x01)
};

// Class Engine.InterpGroupCamera
// Size: 0x60 (Inherited: 0x50)
struct UInterpGroupCamera : UInterpGroup {
	UCameraAnim* CameraAnimInst; // 0x50(0x08)
	float CompressTolerance; // 0x58(0x04)
};

// Class Engine.InterpGroupDirector
// Size: 0x50 (Inherited: 0x50)
struct UInterpGroupDirector : UInterpGroup {
};

// Class Engine.InterpGroupInst
// Size: 0x48 (Inherited: 0x28)
struct UInterpGroupInst : UObject {
	UInterpGroup* Group; // 0x28(0x08)
	AActor* GroupActor; // 0x30(0x08)
	TArray<UInterpTrackInst*> TrackInst; // 0x38(0x10)
};

// Class Engine.InterpGroupInstCamera
// Size: 0x48 (Inherited: 0x48)
struct UInterpGroupInstCamera : UInterpGroupInst {
};

// Class Engine.InterpGroupInstDirector
// Size: 0x48 (Inherited: 0x48)
struct UInterpGroupInstDirector : UInterpGroupInst {
};

// Class Engine.InterpToMovementComponent
// Size: 0x190 (Inherited: 0xf0)
struct UInterpToMovementComponent : UMovementComponent {
	float Duration; // 0xf0(0x04)
	char bPauseOnImpact : 1; // 0xf4(0x01)
	bool bSweep; // 0xf8(0x01)
	enum class ETeleportType TeleportType; // 0xf9(0x01)
	enum class EInterpToBehaviourType BehaviourType; // 0xfa(0x01)
	bool bCheckIfStillInWorld; // 0xfb(0x01)
	char bForceSubStepping : 1; // 0xfc(0x01)
	FMulticastInlineDelegate OnInterpToReverse; // 0x100(0x10)
	FMulticastInlineDelegate OnInterpToStop; // 0x110(0x10)
	FMulticastInlineDelegate OnWaitBeginDelegate; // 0x120(0x10)
	FMulticastInlineDelegate OnWaitEndDelegate; // 0x130(0x10)
	FMulticastInlineDelegate OnResetDelegate; // 0x140(0x10)
	float MaxSimulationTimeStep; // 0x150(0x04)
	int32_t MaxSimulationIterations; // 0x154(0x04)
	TArray<FInterpControlPoint> ControlPoints; // 0x158(0x10)

	void StopSimulating(FHitResult HitResult);
	void RestartMovement(float InitialDirection);
	void OnInterpToWaitEndDelegate__DelegateSignature(FHitResult ImpactResult, float Time);
	void OnInterpToWaitBeginDelegate__DelegateSignature(FHitResult ImpactResult, float Time);
	void OnInterpToStopDelegate__DelegateSignature(FHitResult ImpactResult, float Time);
	void OnInterpToReverseDelegate__DelegateSignature(FHitResult ImpactResult, float Time);
	void OnInterpToResetDelegate__DelegateSignature(FHitResult ImpactResult, float Time);
	void FinaliseControlPoints();
};

// Class Engine.InterpTrack
// Size: 0x70 (Inherited: 0x28)
struct UInterpTrack : UObject {
	TArray<UInterpTrack*> SubTracks; // 0x38(0x10)
	UInterpTrackInst* TrackInstClass; // 0x48(0x08)
	enum class ETrackActiveCondition ActiveCondition; // 0x50(0x01)
	FString TrackTitle; // 0x58(0x10)
	char bOnePerGroup : 1; // 0x68(0x01)
	char bDirGroupOnly : 1; // 0x68(0x01)
	char bDisableTrack : 1; // 0x68(0x01)
	char bIsSelected : 1; // 0x68(0x01)
	char bIsAnimControlTrack : 1; // 0x68(0x01)
	char bSubTrackOnly : 1; // 0x68(0x01)
	char bVisible : 1; // 0x68(0x01)
	char bIsRecording : 1; // 0x68(0x01)
};

// Class Engine.InterpTrackFloatBase
// Size: 0x90 (Inherited: 0x70)
struct UInterpTrackFloatBase : UInterpTrack {
	FInterpCurveFloat FloatTrack; // 0x70(0x18)
	float CurveTension; // 0x88(0x04)
};

// Class Engine.InterpTrackAnimControl
// Size: 0xb0 (Inherited: 0x90)
struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	FName slotName; // 0x90(0x08)
	TArray<FAnimControlTrackKey> AnimSeqs; // 0x98(0x10)
	char bSkipAnimNotifiers : 1; // 0xa8(0x01)
};

// Class Engine.InterpTrackVectorBase
// Size: 0x90 (Inherited: 0x70)
struct UInterpTrackVectorBase : UInterpTrack {
	FInterpCurveVector VectorTrack; // 0x70(0x18)
	float CurveTension; // 0x88(0x04)
};

// Class Engine.InterpTrackAudioMaster
// Size: 0x90 (Inherited: 0x90)
struct UInterpTrackAudioMaster : UInterpTrackVectorBase {
};

// Class Engine.InterpTrackBoolProp
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackBoolProp : UInterpTrack {
	TArray<FBoolTrackKey> BoolTrack; // 0x70(0x10)
	FName PropertyName; // 0x80(0x08)
};

// Class Engine.InterpTrackColorProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackColorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackColorScale
// Size: 0x90 (Inherited: 0x90)
struct UInterpTrackColorScale : UInterpTrackVectorBase {
};

// Class Engine.InterpTrackDirector
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackDirector : UInterpTrack {
	TArray<FDirectorTrackCut> CutTrack; // 0x70(0x10)
	char bSimulateCameraCutsOnClients : 1; // 0x80(0x01)
};

// Class Engine.InterpTrackEvent
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackEvent : UInterpTrack {
	TArray<FEventTrackKey> EventTrack; // 0x70(0x10)
	char bFireEventsWhenForwards : 1; // 0x80(0x01)
	char bFireEventsWhenBackwards : 1; // 0x80(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x80(0x01)
	char bUseCustomEventName : 1; // 0x80(0x01)
};

// Class Engine.InterpTrackFade
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 1; // 0x90(0x01)
	char bFadeAudio : 1; // 0x90(0x01)
	FLinearColor FadeColor; // 0x94(0x10)
};

// Class Engine.InterpTrackFloatAnimBPParam
// Size: 0xb0 (Inherited: 0x90)
struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	UObject* AnimBlueprintClass; // 0x90(0x08)
	UAnimInstance* AnimClass; // 0x98(0x08)
	FName ParamName; // 0xa0(0x08)
};

// Class Engine.InterpTrackFloatMaterialParam
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90(0x10)
	FName ParamName; // 0xa0(0x08)
};

// Class Engine.InterpTrackFloatParticleParam
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	FName ParamName; // 0x90(0x08)
};

// Class Engine.InterpTrackFloatProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackInst
// Size: 0x28 (Inherited: 0x28)
struct UInterpTrackInst : UObject {
};

// Class Engine.InterpTrackInstAnimControl
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
};

// Class Engine.InterpTrackInstAudioMaster
// Size: 0x28 (Inherited: 0x28)
struct UInterpTrackInstAudioMaster : UInterpTrackInst {
};

// Class Engine.InterpTrackInstProperty
// Size: 0x50 (Inherited: 0x28)
struct UInterpTrackInstProperty : UInterpTrackInst {
	TFieldPath<FProperty> InterpProperty; // 0x28(0x20)
	UObject* PropertyOuterObjectInst; // 0x48(0x08)
};

// Class Engine.InterpTrackInstBoolProp
// Size: 0x68 (Inherited: 0x50)
struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	bool ResetBool; // 0x60(0x01)
};

// Class Engine.InterpTrackInstColorProp
// Size: 0x60 (Inherited: 0x50)
struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	FColor ResetColor; // 0x58(0x04)
};

// Class Engine.InterpTrackInstColorScale
// Size: 0x28 (Inherited: 0x28)
struct UInterpTrackInstColorScale : UInterpTrackInst {
};

// Class Engine.InterpTrackInstDirector
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstDirector : UInterpTrackInst {
	AActor* OldViewTarget; // 0x28(0x08)
};

// Class Engine.InterpTrackInstEvent
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
};

// Class Engine.InterpTrackInstFade
// Size: 0x28 (Inherited: 0x28)
struct UInterpTrackInstFade : UInterpTrackInst {
};

// Class Engine.InterpTrackInstFloatAnimBPParam
// Size: 0x40 (Inherited: 0x28)
struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	UAnimInstance* AnimScriptInstance; // 0x28(0x08)
	float ResetFloat; // 0x30(0x04)
};

// Class Engine.InterpTrackInstFloatMaterialParam
// Size: 0x60 (Inherited: 0x28)
struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28(0x10)
	TArray<float> ResetFloats; // 0x38(0x10)
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48(0x10)
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58(0x08)
};

// Class Engine.InterpTrackInstFloatParticleParam
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x28(0x04)
};

// Class Engine.InterpTrackInstFloatProp
// Size: 0x60 (Inherited: 0x50)
struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	float ResetFloat; // 0x58(0x04)
};

// Class Engine.InterpTrackInstLinearColorProp
// Size: 0x68 (Inherited: 0x50)
struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	FLinearColor ResetColor; // 0x58(0x10)
};

// Class Engine.InterpTrackInstMove
// Size: 0x40 (Inherited: 0x28)
struct UInterpTrackInstMove : UInterpTrackInst {
	FVector ResetLocation; // 0x28(0x0c)
	FRotator ResetRotation; // 0x34(0x0c)
};

// Class Engine.InterpTrackInstParticleReplay
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
};

// Class Engine.InterpTrackInstSlomo
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; // 0x28(0x04)
};

// Class Engine.InterpTrackInstSound
// Size: 0x38 (Inherited: 0x28)
struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	UAudioComponent* PlayAudioComp; // 0x30(0x08)
};

// Class Engine.InterpTrackInstToggle
// Size: 0x38 (Inherited: 0x28)
struct UInterpTrackInstToggle : UInterpTrackInst {
	enum class ETrackToggleAction Action; // 0x28(0x01)
	float LastUpdatePosition; // 0x2c(0x04)
	char bSavedActiveState : 1; // 0x30(0x01)
};

// Class Engine.InterpTrackInstVectorMaterialParam
// Size: 0x60 (Inherited: 0x28)
struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28(0x10)
	TArray<FVector> ResetVectors; // 0x38(0x10)
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48(0x10)
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58(0x08)
};

// Class Engine.InterpTrackInstVectorProp
// Size: 0x68 (Inherited: 0x50)
struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	FVector ResetVector; // 0x58(0x0c)
};

// Class Engine.InterpTrackInstVisibility
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstVisibility : UInterpTrackInst {
	enum class EVisibilityTrackAction Action; // 0x28(0x01)
	float LastUpdatePosition; // 0x2c(0x04)
};

// Class Engine.InterpTrackLinearColorBase
// Size: 0x90 (Inherited: 0x70)
struct UInterpTrackLinearColorBase : UInterpTrack {
	FInterpCurveLinearColor LinearColorTrack; // 0x70(0x18)
	float CurveTension; // 0x88(0x04)
};

// Class Engine.InterpTrackLinearColorProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackMove
// Size: 0xc8 (Inherited: 0x70)
struct UInterpTrackMove : UInterpTrack {
	FInterpCurveVector PosTrack; // 0x70(0x18)
	FInterpCurveVector EulerTrack; // 0x88(0x18)
	FInterpLookupTrack LookupTrack; // 0xa0(0x10)
	FName LookAtGroupName; // 0xb0(0x08)
	float LinCurveTension; // 0xb8(0x04)
	float AngCurveTension; // 0xbc(0x04)
	char bUseQuatInterpolation : 1; // 0xc0(0x01)
	char bShowArrowAtKeys : 1; // 0xc0(0x01)
	char bDisableMovement : 1; // 0xc0(0x01)
	char bShowTranslationOnCurveEd : 1; // 0xc0(0x01)
	char bShowRotationOnCurveEd : 1; // 0xc0(0x01)
	char bHide3DTrack : 1; // 0xc0(0x01)
	enum class EInterpTrackMoveRotMode RotMode; // 0xc4(0x01)
};

// Class Engine.InterpTrackMoveAxis
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	enum class EInterpMoveAxis MoveAxis; // 0x90(0x01)
	FInterpLookupTrack LookupTrack; // 0x98(0x10)
};

// Class Engine.InterpTrackParticleReplay
// Size: 0x80 (Inherited: 0x70)
struct UInterpTrackParticleReplay : UInterpTrack {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x70(0x10)
};

// Class Engine.InterpTrackSlomo
// Size: 0x90 (Inherited: 0x90)
struct UInterpTrackSlomo : UInterpTrackFloatBase {
};

// Class Engine.InterpTrackSound
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackSound : UInterpTrackVectorBase {
	TArray<FSoundTrackKey> Sounds; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueSoundOnMatineeEnd : 1; // 0xa0(0x01)
	char bSuppressSubtitles : 1; // 0xa0(0x01)
	char bTreatAsDialogue : 1; // 0xa0(0x01)
	char bAttach : 1; // 0xa0(0x01)
};

// Class Engine.InterpTrackToggle
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackToggle : UInterpTrack {
	TArray<FToggleTrackKey> ToggleTrack; // 0x70(0x10)
	char bActivateSystemEachUpdate : 1; // 0x80(0x01)
	char bActivateWithJustAttachedFlag : 1; // 0x80(0x01)
	char bFireEventsWhenForwards : 1; // 0x80(0x01)
	char bFireEventsWhenBackwards : 1; // 0x80(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x80(0x01)
};

// Class Engine.InterpTrackVectorMaterialParam
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90(0x10)
	FName ParamName; // 0xa0(0x08)
};

// Class Engine.InterpTrackVectorProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackVisibility
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackVisibility : UInterpTrack {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70(0x10)
	char bFireEventsWhenForwards : 1; // 0x80(0x01)
	char bFireEventsWhenBackwards : 1; // 0x80(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x80(0x01)
};

// Class Engine.IntSerialization
// Size: 0x50 (Inherited: 0x28)
struct UIntSerialization : UObject {
	uint16_t UnsignedInt16Variable; // 0x28(0x02)
	uint32_t UnsignedInt32Variable; // 0x2c(0x04)
	uint64_t UnsignedInt64Variable; // 0x30(0x08)
	int8_t SignedInt8Variable; // 0x38(0x01)
	int16_t SignedInt16Variable; // 0x3a(0x02)
	int64_t SignedInt64Variable; // 0x40(0x08)
	char UnsignedInt8Variable; // 0x48(0x01)
	int32_t SignedInt32Variable; // 0x4c(0x04)
};

// Class Engine.KillZVolume
// Size: 0x268 (Inherited: 0x268)
struct AKillZVolume : APhysicsVolume {
};

// Class Engine.KismetGuidLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetGuidLibrary : UBlueprintFunctionLibrary {

	void Parse_StringToGuid(FString GuidString, FGuid OutGuid, bool success);
	bool NotEqual_GuidGuid(FGuid A, FGuid B);
	FGuid NewGuid();
	bool IsValid_Guid(FGuid InGuid);
	void Invalidate_Guid(FGuid InGuid);
	bool EqualEqual_GuidGuid(FGuid A, FGuid B);
	FString Conv_GuidToString(FGuid InGuid);
};

// Class Engine.KismetInputLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetInputLibrary : UBlueprintFunctionLibrary {

	bool PointerEvent_IsTouchEvent(FPointerEvent Input);
	bool PointerEvent_IsMouseButtonDown(FPointerEvent Input, FKey MouseButton);
	float PointerEvent_GetWheelDelta(FPointerEvent Input);
	int32_t PointerEvent_GetUserIndex(FPointerEvent Input);
	int32_t PointerEvent_GetTouchpadIndex(FPointerEvent Input);
	FVector2D PointerEvent_GetScreenSpacePosition(FPointerEvent Input);
	int32_t PointerEvent_GetPointerIndex(FPointerEvent Input);
	FVector2D PointerEvent_GetLastScreenSpacePosition(FPointerEvent Input);
	enum class ESlateGesture PointerEvent_GetGestureType(FPointerEvent Input);
	FVector2D PointerEvent_GetGestureDelta(FPointerEvent Input);
	FKey PointerEvent_GetEffectingButton(FPointerEvent Input);
	FVector2D PointerEvent_GetCursorDelta(FPointerEvent Input);
	bool Key_IsVectorAxis(FKey Key);
	bool Key_IsValid(FKey Key);
	bool Key_IsMouseButton(FKey Key);
	bool Key_IsModifierKey(FKey Key);
	bool Key_IsKeyboardKey(FKey Key);
	bool Key_IsGamepadKey(FKey Key);
	bool Key_IsFloatAxis(FKey Key);
	enum class EUINavigation Key_GetNavigationDirectionFromKey(FKeyEvent InKeyEvent);
	enum class EUINavigation Key_GetNavigationDirectionFromAnalog(FAnalogInputEvent InAnalogEvent);
	enum class EUINavigationAction Key_GetNavigationActionFromKey(FKeyEvent InKeyEvent);
	enum class EUINavigationAction Key_GetNavigationAction(FKey InKey);
	FText Key_GetDisplayName(FKey Key);
	bool InputEvent_IsShiftDown(FInputEvent Input);
	bool InputEvent_IsRightShiftDown(FInputEvent Input);
	bool InputEvent_IsRightControlDown(FInputEvent Input);
	bool InputEvent_IsRightCommandDown(FInputEvent Input);
	bool InputEvent_IsRightAltDown(FInputEvent Input);
	bool InputEvent_IsRepeat(FInputEvent Input);
	bool InputEvent_IsLeftShiftDown(FInputEvent Input);
	bool InputEvent_IsLeftControlDown(FInputEvent Input);
	bool InputEvent_IsLeftCommandDown(FInputEvent Input);
	bool InputEvent_IsLeftAltDown(FInputEvent Input);
	bool InputEvent_IsControlDown(FInputEvent Input);
	bool InputEvent_IsCommandDown(FInputEvent Input);
	bool InputEvent_IsAltDown(FInputEvent Input);
	FText InputChord_GetDisplayName(FInputChord Key);
	int32_t GetUserIndex(FKeyEvent Input);
	FKey GetKey(FKeyEvent Input);
	float GetAnalogValue(FAnalogInputEvent Input);
	bool EqualEqual_KeyKey(FKey A, FKey B);
	bool EqualEqual_InputChordInputChord(FInputChord A, FInputChord B);
	void CalibrateTilt();
};

// Class Engine.KismetInternationalizationLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetInternationalizationLibrary : UBlueprintFunctionLibrary {

	bool SetCurrentLocale(FString Culture, bool SaveToConfig);
	bool SetCurrentLanguageAndLocale(FString Culture, bool SaveToConfig);
	bool SetCurrentLanguage(FString Culture, bool SaveToConfig);
	bool SetCurrentCulture(FString Culture, bool SaveToConfig);
	bool SetCurrentAssetGroupCulture(FName AssetGroup, FString Culture, bool SaveToConfig);
	FString GetSuitableCulture(TArray<FString> AvailableCultures, FString CultureToMatch, FString FallbackCulture);
	FString GetNativeCulture(enum class ELocalizedTextSourceCategory TextCategory);
	TArray<FString> GetLocalizedCultures(bool IncludeGame, bool IncludeEngine, bool IncludeEditor, bool IncludeAdditional);
	FString GetCurrentLocale();
	FString GetCurrentLanguage();
	FString GetCurrentCulture();
	FString GetCurrentAssetGroupCulture(FName AssetGroup);
	FString GetCultureDisplayName(FString Culture, bool Localized);
	void ClearCurrentAssetGroupCulture(FName AssetGroup, bool SaveToConfig);
};

// Class Engine.KismetMaterialLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetMaterialLibrary : UBlueprintFunctionLibrary {

	void SetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, FLinearColor ParameterValue);
	void SetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName, float ParameterValue);
	FLinearColor GetVectorParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName);
	float GetScalarParameterValue(UObject* WorldContextObject, UMaterialParameterCollection* Collection, FName ParameterName);
	UMaterialInstanceDynamic* CreateDynamicMaterialInstance(UObject* WorldContextObject, UMaterialInterface* Parent, FName OptionalName);
};

// Class Engine.KismetMathLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetMathLibrary : UBlueprintFunctionLibrary {

	int32_t Xor_IntInt(int32_t A, int32_t B);
	int64_t Xor_Int64Int64(int64_t A, int64_t B);
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
	FVector VectorSpringInterp(FVector current, FVector Target, FVectorSpringState SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);
	FVector Vector_Zero();
	FVector Vector_Up();
	void Vector_UnwindEuler(FVector A);
	FVector2D Vector_UnitCartesianToSpherical(FVector A);
	FVector Vector_ToRadians(FVector A);
	FVector Vector_ToDegrees(FVector A);
	FVector Vector_SnappedToGrid(FVector InVect, float InGridSize);
	void Vector_Set(FVector A, float X, float Y, float Z);
	FVector Vector_Right();
	FVector Vector_Reciprocal(FVector A);
	FVector Vector_ProjectOnToNormal(FVector V, FVector InNormal);
	FVector Vector_One();
	FVector Vector_NormalUnsafe(FVector A);
	void Vector_Normalize(FVector A, float Tolerance);
	FVector Vector_Normal2D(FVector A, float Tolerance);
	FVector Vector_MirrorByPlane(FVector A, FPlane InPlane);
	FVector Vector_Left();
	bool Vector_IsZero(FVector A);
	bool Vector_IsUnit(FVector A, float SquaredLenthTolerance);
	bool Vector_IsUniform(FVector A, float Tolerance);
	bool Vector_IsNormal(FVector A);
	bool Vector_IsNearlyZero(FVector A, float Tolerance);
	bool Vector_IsNAN(FVector A);
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
	void Vector_Assign(FVector A, FVector InVector);
	void Vector_AddBounded(FVector A, FVector InAddVect, float InRadius);
	FVector4 Vector4_Zero();
	float Vector4_SizeSquared3(FVector4 A);
	float Vector4_SizeSquared(FVector4 A);
	float Vector4_Size3(FVector4 A);
	float Vector4_Size(FVector4 A);
	void Vector4_Set(FVector4 A, float X, float Y, float Z, float W);
	FVector4 Vector4_NormalUnsafe3(FVector4 A);
	void Vector4_Normalize3(FVector4 A, float Tolerance);
	FVector4 Vector4_Normal3(FVector4 A, float Tolerance);
	FVector4 Vector4_Negated(FVector4 A);
	FVector4 Vector4_MirrorByVector3(FVector4 Direction, FVector4 SurfaceNormal);
	bool Vector4_IsZero(FVector4 A);
	bool Vector4_IsUnit3(FVector4 A, float SquaredLenthTolerance);
	bool Vector4_IsNormal3(FVector4 A);
	bool Vector4_IsNearlyZero3(FVector4 A, float Tolerance);
	bool Vector4_IsNAN(FVector4 A);
	float Vector4_DotProduct3(FVector4 A, FVector4 B);
	float Vector4_DotProduct(FVector4 A, FVector4 B);
	FVector4 Vector4_CrossProduct3(FVector4 A, FVector4 B);
	void Vector4_Assign(FVector4 A, FVector4 InVector);
	FVector2D Vector2DInterpTo_Constant(FVector2D current, FVector2D Target, float DeltaTime, float InterpSpeed);
	FVector2D Vector2DInterpTo(FVector2D current, FVector2D Target, float DeltaTime, float InterpSpeed);
	FVector2D Vector2D_Zero();
	FVector2D Vector2D_Unit45Deg();
	FVector2D Vector2D_One();
	FVector VEase(FVector A, FVector B, float alpha, enum class EEasingFunc EasingFunc, float BlendExp, int32_t Steps);
	FDateTime UtcNow();
	FVector4 TransformVector4(FMatrix Matrix, FVector4 Vec4);
	FRotator TransformRotation(FTransform T, FRotator Rotation);
	FVector TransformLocation(FTransform T, FVector Location);
	FVector TransformDirection(FTransform T, FVector Direction);
	float Transform_Determinant(FTransform Transform);
	FVector2D ToSign2D(FVector2D A);
	FVector2D ToRounded2D(FVector2D A);
	void ToDirectionAndLength2D(FVector2D A, FVector2D OutDir, float OutLength);
	FDateTime Today();
	FTransform TLerp(FTransform A, FTransform B, float alpha, enum class ELerpInterpolationMode InterpMode);
	FTransform TInterpTo(FTransform current, FTransform Target, float DeltaTime, float InterpSpeed);
	FTimespan TimespanZeroValue();
	float TimespanRatio(FTimespan A, FTimespan B);
	FTimespan TimespanMinValue();
	FTimespan TimespanMaxValue();
	bool TimespanFromString(FString TimespanString, FTimespan Result);
	FTransform TEase(FTransform A, FTransform B, float alpha, enum class EEasingFunc EasingFunc, float BlendExp, int32_t Steps);
	float Tan(float A);
	FVector Subtract_VectorVector(FVector A, FVector B);
	FVector Subtract_VectorInt(FVector A, int32_t B);
	FVector Subtract_VectorFloat(FVector A, float B);
	FVector4 Subtract_Vector4Vector4(FVector4 A, FVector4 B);
	FVector2D Subtract_Vector2DVector2D(FVector2D A, FVector2D B);
	FVector2D Subtract_Vector2DFloat(FVector2D A, float B);
	FTimespan Subtract_TimespanTimespan(FTimespan A, FTimespan B);
	FQuat Subtract_QuatQuat(FQuat A, FQuat B);
	FLinearColor Subtract_LinearColorLinearColor(FLinearColor A, FLinearColor B);
	FIntPoint Subtract_IntPointIntPoint(FIntPoint A, FIntPoint B);
	FIntPoint Subtract_IntPointInt(FIntPoint A, int32_t B);
	int32_t Subtract_IntInt(int32_t A, int32_t B);
	int64_t Subtract_Int64Int64(int64_t A, int64_t B);
	float Subtract_FloatFloat(float A, float B);
	FDateTime Subtract_DateTimeTimespan(FDateTime A, FTimespan B);
	FTimespan Subtract_DateTimeDateTime(FDateTime A, FDateTime B);
	char Subtract_ByteByte(char A, char B);
	float Square(float A);
	float Sqrt(float A);
	FVector Spherical2DToUnitCartesian(FVector2D A);
	float Sin(float A);
	int64_t SignOfInteger64(int64_t A);
	int32_t SignOfInteger(int32_t A);
	float SignOfFloat(float A);
	void SetRandomStreamSeed(FRandomStream Stream, int32_t NewSeed);
	void Set2D(FVector2D A, float X, float Y);
	FVector SelectVector(FVector A, FVector B, bool bPickA);
	FTransform SelectTransform(FTransform A, FTransform B, bool bPickA);
	FString SelectString(FString A, FString B, bool bPickA);
	FRotator SelectRotator(FRotator A, FRotator B, bool bPickA);
	UObject* SelectObject(UObject* A, UObject* B, bool bSelectA);
	int32_t SelectInt(int32_t A, int32_t B, bool bPickA);
	float SelectFloat(float A, float B, bool bPickA);
	FLinearColor SelectColor(FLinearColor A, FLinearColor B, bool bPickA);
	UObject* SelectClass(UObject* A, UObject* B, bool bSelectA);
	void SeedRandomStream(FRandomStream Stream);
	float SafeDivide(float A, float B);
	int64_t Round64(float A);
	int32_t Round(float A);
	FRotator RotatorFromAxisAndAngle(FVector Axis, float Angle);
	FVector RotateAngleAxis(FVector InVect, float AngleDeg, FVector Axis);
	FRotator RLerp(FRotator A, FRotator B, float alpha, bool bShortestPath);
	FRotator RInterpTo_Constant(FRotator current, FRotator Target, float DeltaTime, float InterpSpeed);
	FRotator RInterpTo(FRotator current, FRotator Target, float DeltaTime, float InterpSpeed);
	void RGBToHSV_Vector(FLinearColor RGB, FLinearColor HSV);
	void RGBToHSV(FLinearColor InColor, float H, float S, float V, float A);
	FLinearColor RGBLinearToHSV(FLinearColor RGB);
	void ResetVectorSpringState(FVectorSpringState SpringState);
	void ResetRandomStream(FRandomStream Stream);
	void ResetFloatSpringState(FFloatSpringState SpringState);
	FRotator REase(FRotator A, FRotator B, float alpha, bool bShortestPath, enum class EEasingFunc EasingFunc, float BlendExp, int32_t Steps);
	FVector RandomUnitVectorInEllipticalConeInRadiansFromStream(FVector ConeDir, float MaxYawInRadians, float MaxPitchInRadians, FRandomStream Stream);
	FVector RandomUnitVectorInEllipticalConeInRadians(FVector ConeDir, float MaxYawInRadians, float MaxPitchInRadians);
	FVector RandomUnitVectorInEllipticalConeInDegreesFromStream(FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, FRandomStream Stream);
	FVector RandomUnitVectorInEllipticalConeInDegrees(FVector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees);
	FVector RandomUnitVectorInConeInRadiansFromStream(FVector ConeDir, float ConeHalfAngleInRadians, FRandomStream Stream);
	FVector RandomUnitVectorInConeInRadians(FVector ConeDir, float ConeHalfAngleInRadians);
	FVector RandomUnitVectorInConeInDegreesFromStream(FVector ConeDir, float ConeHalfAngleInDegrees, FRandomStream Stream);
	FVector RandomUnitVectorInConeInDegrees(FVector ConeDir, float ConeHalfAngleInDegrees);
	FVector RandomUnitVectorFromStream(FRandomStream Stream);
	FVector RandomUnitVector();
	FRotator RandomRotatorFromStream(bool bRoll, FRandomStream Stream);
	FRotator RandomRotator(bool bRoll);
	FVector RandomPointInBoundingBox(FVector Origin, FVector BoxExtent);
	int32_t RandomIntegerInRangeFromStream(int32_t Min, int32_t Max, FRandomStream Stream);
	int32_t RandomIntegerInRange(int32_t Min, int32_t Max);
	int32_t RandomIntegerFromStream(int32_t Max, FRandomStream Stream);
	int64_t RandomInteger64InRange(int64_t Min, int64_t Max);
	int64_t RandomInteger64(int64_t Max);
	int32_t RandomInteger(int32_t Max);
	float RandomFloatInRangeFromStream(float Min, float Max, FRandomStream Stream);
	float RandomFloatInRange(float Min, float Max);
	float RandomFloatFromStream(FRandomStream Stream);
	float RandomFloat();
	bool RandomBoolWithWeightFromStream(float Weight, FRandomStream RandomStream);
	bool RandomBoolWithWeight(float Weight);
	bool RandomBoolFromStream(FRandomStream Stream);
	bool RandomBool();
	float RadiansToDegrees(float A);
	FVector Quat_VectorUp(FQuat Q);
	FVector Quat_VectorRight(FQuat Q);
	FVector Quat_VectorForward(FQuat Q);
	FVector Quat_UnrotateVector(FQuat Q, FVector V);
	float Quat_SizeSquared(FQuat Q);
	float Quat_Size(FQuat Q);
	void Quat_SetFromEuler(FQuat Q, FVector Euler);
	void Quat_SetComponents(FQuat Q, float X, float Y, float Z, float W);
	FRotator Quat_Rotator(FQuat Q);
	FVector Quat_RotateVector(FQuat Q, FVector V);
	FQuat Quat_Normalized(FQuat Q, float Tolerance);
	void Quat_Normalize(FQuat Q, float Tolerance);
	FQuat Quat_MakeFromEuler(FVector Euler);
	FQuat Quat_Log(FQuat Q);
	bool Quat_IsNormalized(FQuat Q);
	bool Quat_IsNonFinite(FQuat Q);
	bool Quat_IsIdentity(FQuat Q, float Tolerance);
	bool Quat_IsFinite(FQuat Q);
	FQuat Quat_Inversed(FQuat Q);
	FQuat Quat_Identity();
	FVector Quat_GetRotationAxis(FQuat Q);
	FVector Quat_GetAxisZ(FQuat Q);
	FVector Quat_GetAxisY(FQuat Q);
	FVector Quat_GetAxisX(FQuat Q);
	float Quat_GetAngle(FQuat Q);
	FQuat Quat_Exp(FQuat Q);
	FVector Quat_Euler(FQuat Q);
	void Quat_EnforceShortestArcWith(FQuat A, FQuat B);
	float Quat_AngularDistance(FQuat A, FQuat B);
	FVector ProjectVectorOnToVector(FVector V, FVector Target);
	FVector ProjectVectorOnToPlane(FVector V, FVector PlaneNormal);
	FVector ProjectPointOnToPlane(FVector Point, FVector PlaneBase, FVector PlaneNormal);
	bool PointsAreCoplanar(TArray<FVector> Points, float Tolerance);
	float PerlinNoise1D(float Value);
	int32_t Percent_IntInt(int32_t A, int32_t B);
	float Percent_FloatFloat(float A, float B);
	char Percent_ByteByte(char A, char B);
	int32_t Or_IntInt(int32_t A, int32_t B);
	int64_t Or_Int64Int64(int64_t A, int64_t B);
	FDateTime Now();
	bool NotEqualExactly_VectorVector(FVector A, FVector B);
	bool NotEqualExactly_Vector4Vector4(FVector4 A, FVector4 B);
	bool NotEqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);
	bool NotEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);
	bool NotEqual_Vector4Vector4(FVector4 A, FVector4 B, float ErrorTolerance);
	bool NotEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
	bool NotEqual_TimespanTimespan(FTimespan A, FTimespan B);
	bool NotEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);
	bool NotEqual_QuatQuat(FQuat A, FQuat B, float ErrorTolerance);
	bool NotEqual_ObjectObject(UObject* A, UObject* B);
	bool NotEqual_NameName(FName A, FName B);
	bool NotEqual_MatrixMatrix(FMatrix A, FMatrix B, float Tolerance);
	bool NotEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);
	bool NotEqual_IntPointIntPoint(FIntPoint A, FIntPoint B);
	bool NotEqual_IntInt(int32_t A, int32_t B);
	bool NotEqual_Int64Int64(int64_t A, int64_t B);
	bool NotEqual_FloatFloat(float A, float B);
	bool NotEqual_DateTimeDateTime(FDateTime A, FDateTime B);
	bool NotEqual_ClassClass(UObject* A, UObject* B);
	bool NotEqual_ByteByte(char A, char B);
	bool NotEqual_BoolBool(bool A, bool B);
	bool Not_PreBool(bool A);
	int64_t Not_Int64(int64_t A);
	int32_t Not_Int(int32_t A);
	FVector2D NormalSafe2D(FVector2D A, float Tolerance);
	float NormalizeToRange(float Value, float RangeMin, float RangeMax);
	FRotator NormalizedDeltaRotator(FRotator A, FRotator B);
	float NormalizeAxis(float Angle);
	void Normalize2D(FVector2D A, float Tolerance);
	FVector2D Normal2D(FVector2D A);
	FVector Normal(FVector A, float Tolerance);
	FVector NegateVector(FVector A);
	FRotator NegateRotator(FRotator A);
	FVector2D Negated2D(FVector2D A);
	bool NearlyEqual_TransformTransform(FTransform A, FTransform B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance);
	bool NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance);
	float MultiplyMultiply_FloatFloat(float Base, float Exp);
	float MultiplyByPi(float Value);
	FVector Multiply_VectorVector(FVector A, FVector B);
	FVector Multiply_VectorInt(FVector A, int32_t B);
	FVector Multiply_VectorFloat(FVector A, float B);
	FVector4 Multiply_Vector4Vector4(FVector4 A, FVector4 B);
	FVector2D Multiply_Vector2DVector2D(FVector2D A, FVector2D B);
	FVector2D Multiply_Vector2DFloat(FVector2D A, float B);
	FTimespan Multiply_TimespanFloat(FTimespan A, float Scalar);
	FRotator Multiply_RotatorInt(FRotator A, int32_t B);
	FRotator Multiply_RotatorFloat(FRotator A, float B);
	FQuat Multiply_QuatQuat(FQuat A, FQuat B);
	FMatrix Multiply_MatrixMatrix(FMatrix A, FMatrix B);
	FMatrix Multiply_MatrixFloat(FMatrix A, float B);
	FLinearColor Multiply_LinearColorLinearColor(FLinearColor A, FLinearColor B);
	FLinearColor Multiply_LinearColorFloat(FLinearColor A, float B);
	FIntPoint Multiply_IntPointIntPoint(FIntPoint A, FIntPoint B);
	FIntPoint Multiply_IntPointInt(FIntPoint A, int32_t B);
	int32_t Multiply_IntInt(int32_t A, int32_t B);
	float Multiply_IntFloat(int32_t A, float B);
	int64_t Multiply_Int64Int64(int64_t A, int64_t B);
	float Multiply_FloatFloat(float A, float B);
	char Multiply_ByteByte(char A, char B);
	FVector MirrorVectorByNormal(FVector InVect, FVector InNormal);
	void MinOfIntArray(TArray<int32_t> IntArray, int32_t IndexOfMinValue, int32_t MinValue);
	void MinOfFloatArray(TArray<float> FloatArray, int32_t IndexOfMinValue, float MinValue);
	void MinOfByteArray(TArray<char> ByteArray, int32_t IndexOfMinValue, char MinValue);
	int64_t MinInt64(int64_t A, int64_t B);
	void MinimumAreaRectangle(UObject* WorldContextObject, TArray<FVector> InVerts, FVector SampleSurfaceNormal, FVector OutRectCenter, FRotator OutRectRotation, float OutSideLengthX, float OutSideLengthY, bool bDebugDraw);
	int32_t Min(int32_t A, int32_t B);
	void MaxOfIntArray(TArray<int32_t> IntArray, int32_t IndexOfMaxValue, int32_t MaxValue);
	void MaxOfFloatArray(TArray<float> FloatArray, int32_t IndexOfMaxValue, float MaxValue);
	void MaxOfByteArray(TArray<char> ByteArray, int32_t IndexOfMaxValue, char MaxValue);
	int64_t MaxInt64(int64_t A, int64_t B);
	int32_t Max(int32_t A, int32_t B);
	FVector4 Matrix_TransformVector4(FMatrix M, FVector4 V);
	FVector4 Matrix_TransformVector(FMatrix M, FVector V);
	FVector4 Matrix_TransformPosition(FMatrix M, FVector V);
	FQuat Matrix_ToQuat(FMatrix M);
	void Matrix_SetOrigin(FMatrix M, FVector NewOrigin);
	void Matrix_SetColumn(FMatrix M, enum class EMatrixColumns Column, FVector Value);
	void Matrix_SetAxis(FMatrix M, enum class EAxis Axis, FVector AxisVector);
	FMatrix Matrix_ScaleTranslation(FMatrix M, FVector Scale3D);
	FMatrix Matrix_RemoveTranslation(FMatrix M);
	void Matrix_RemoveScaling(FMatrix M, float Tolerance);
	FMatrix Matrix_Mirror(FMatrix M, enum class EAxis MirrorAxis, enum class EAxis FlipAxis);
	FVector Matrix_InverseTransformVector(FMatrix M, FVector V);
	FVector Matrix_InverseTransformPosition(FMatrix M, FVector V);
	FMatrix Matrix_Identity();
	FVector Matrix_GetUnitAxis(FMatrix M, enum class EAxis Axis);
	void Matrix_GetUnitAxes(FMatrix M, FVector X, FVector Y, FVector Z);
	FMatrix Matrix_GetTransposed(FMatrix M);
	FMatrix Matrix_GetTransposeAdjoint(FMatrix M);
	FVector Matrix_GetScaleVector(FMatrix M, float Tolerance);
	FVector Matrix_GetScaledAxis(FMatrix M, enum class EAxis Axis);
	void Matrix_GetScaledAxes(FMatrix M, FVector X, FVector Y, FVector Z);
	float Matrix_GetRotDeterminant(FMatrix M);
	FRotator Matrix_GetRotator(FMatrix M);
	FVector Matrix_GetOrigin(FMatrix InMatrix);
	float Matrix_GetMaximumAxisScale(FMatrix M);
	FMatrix Matrix_GetMatrixWithoutScale(FMatrix M, float Tolerance);
	FMatrix Matrix_GetInverse(FMatrix M);
	bool Matrix_GetFrustumTopPlane(FMatrix M, FPlane OutPlane);
	bool Matrix_GetFrustumRightPlane(FMatrix M, FPlane OutPlane);
	bool Matrix_GetFrustumNearPlane(FMatrix M, FPlane OutPlane);
	bool Matrix_GetFrustumLeftPlane(FMatrix M, FPlane OutPlane);
	bool Matrix_GetFrustumFarPlane(FMatrix M, FPlane OutPlane);
	bool Matrix_GetFrustumBottomPlane(FMatrix M, FPlane OutPlane);
	float Matrix_GetDeterminant(FMatrix M);
	FVector Matrix_GetColumn(FMatrix M, enum class EMatrixColumns Column);
	bool Matrix_ContainsNaN(FMatrix M);
	FMatrix Matrix_ConcatenateTranslation(FMatrix M, FVector Translation);
	FMatrix Matrix_ApplyScale(FMatrix M, float Scale);
	float MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	float MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
	FVector4 MakeVector4(float X, float Y, float Z, float W);
	FVector2D MakeVector2D(float X, float Y);
	FVector MakeVector(float X, float Y, float Z);
	FTransform MakeTransform(FVector Location, FRotator Rotation, FVector Scale);
	FTimespan MakeTimespan2(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t FractionNano);
	FTimespan MakeTimespan(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds);
	FRotator MakeRotFromZY(FVector Z, FVector Y);
	FRotator MakeRotFromZX(FVector Z, FVector X);
	FRotator MakeRotFromZ(FVector Z);
	FRotator MakeRotFromYZ(FVector Y, FVector Z);
	FRotator MakeRotFromYX(FVector Y, FVector X);
	FRotator MakeRotFromY(FVector Y);
	FRotator MakeRotFromXZ(FVector X, FVector Z);
	FRotator MakeRotFromXY(FVector X, FVector Y);
	FRotator MakeRotFromX(FVector X);
	FRotator MakeRotator(float Roll, float Pitch, float Yaw);
	FRotator MakeRotationFromAxes(FVector Forward, FVector Right, FVector Up);
	FTransform MakeRelativeTransform(FTransform A, FTransform RelativeTo);
	FRandomStream MakeRandomStream(int32_t InitialSeed);
	FQualifiedFrameTime MakeQualifiedFrameTime(FFrameNumber Frame, FFrameRate FrameRate, float SubFrame);
	float MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase);
	FPlane MakePlaneFromPointAndNormal(FVector Point, FVector Normal);
	FFrameRate MakeFrameRate(int32_t Numerator, int32_t Denominator);
	FDateTime MakeDateTime(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond);
	FLinearColor MakeColor(float R, float G, float B, float A);
	FBox2D MakeBox2D(FVector2D Min, FVector2D Max);
	FBox MakeBox(FVector Min, FVector Max);
	float Loge(float A);
	float Log(float A, float Base);
	bool LinePlaneIntersection_OriginNormal(FVector LineStart, FVector LineEnd, FVector PlaneOrigin, FVector PlaneNormal, float T, FVector Intersection);
	bool LinePlaneIntersection(FVector LineStart, FVector LineEnd, FPlane APlane, float T, FVector Intersection);
	FLinearColor LinearColorLerpUsingHSV(FLinearColor A, FLinearColor B, float alpha);
	FLinearColor LinearColorLerp(FLinearColor A, FLinearColor B, float alpha);
	FLinearColor LinearColor_Yellow();
	FLinearColor LinearColor_White();
	FLinearColor LinearColor_Transparent();
	FColor LinearColor_ToRGBE(FLinearColor InLinearColor);
	FLinearColor LinearColor_ToNewOpacity(FLinearColor InColor, float InOpacity);
	void LinearColor_SetTemperature(FLinearColor InOutColor, float InTemperature);
	void LinearColor_SetRGBA(FLinearColor InOutColor, float R, float G, float B, float A);
	void LinearColor_SetRandomHue(FLinearColor InOutColor);
	void LinearColor_SetFromSRGB(FLinearColor InOutColor, FColor InSRGB);
	void LinearColor_SetFromPow22(FLinearColor InOutColor, FColor InColor);
	void LinearColor_SetFromHSV(FLinearColor InOutColor, float H, float S, float V, float A);
	void LinearColor_Set(FLinearColor InOutColor, FLinearColor InColor);
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
	bool LessEqual_IntInt(int32_t A, int32_t B);
	bool LessEqual_Int64Int64(int64_t A, int64_t B);
	bool LessEqual_FloatFloat(float A, float B);
	bool LessEqual_DateTimeDateTime(FDateTime A, FDateTime B);
	bool LessEqual_ByteByte(char A, char B);
	bool Less_TimespanTimespan(FTimespan A, FTimespan B);
	bool Less_IntInt(int32_t A, int32_t B);
	bool Less_Int64Int64(int64_t A, int64_t B);
	bool Less_FloatFloat(float A, float B);
	bool Less_DateTimeDateTime(FDateTime A, FDateTime B);
	bool Less_ByteByte(char A, char B);
	float Lerp(float A, float B, float alpha);
	bool IsZero2D(FVector2D A);
	bool IsPointInBoxWithTransform(FVector Point, FTransform BoxWorldTransform, FVector BoxExtent);
	bool IsPointInBox(FVector Point, FVector BoxOrigin, FVector BoxExtent);
	bool IsNearlyZero2D(FVector2D A, float Tolerance);
	bool IsMorning(FDateTime A);
	bool IsLeapYear(int32_t Year);
	bool IsAfternoon(FDateTime A);
	FTransform InvertTransform(FTransform T);
	FRotator InverseTransformRotation(FTransform T, FRotator Rotation);
	FVector InverseTransformLocation(FTransform T, FVector Location);
	FVector InverseTransformDirection(FTransform T, FVector Direction);
	FIntPoint IntPoint_Zero();
	FIntPoint IntPoint_Up();
	FIntPoint IntPoint_Right();
	FIntPoint IntPoint_One();
	FIntPoint IntPoint_Left();
	FIntPoint IntPoint_Down();
	bool InRange_IntInt(int32_t Value, int32_t Min, int32_t Max, bool InclusiveMin, bool InclusiveMax);
	bool InRange_Int64Int64(int64_t Value, int64_t Min, int64_t Max, bool InclusiveMin, bool InclusiveMax);
	bool InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax);
	float Hypotenuse(float Width, float Height);
	FLinearColor HSVToRGBLinear(FLinearColor HSV);
	void HSVToRGB_Vector(FLinearColor HSV, FLinearColor RGB);
	FLinearColor HSVToRGB(float H, float S, float V, float A);
	float GridSnap_Float(float Location, float GridSize);
	FVector GreaterGreater_VectorRotator(FVector A, FRotator B);
	bool GreaterEqual_TimespanTimespan(FTimespan A, FTimespan B);
	bool GreaterEqual_IntInt(int32_t A, int32_t B);
	bool GreaterEqual_Int64Int64(int64_t A, int64_t B);
	bool GreaterEqual_FloatFloat(float A, float B);
	bool GreaterEqual_DateTimeDateTime(FDateTime A, FDateTime B);
	bool GreaterEqual_ByteByte(char A, char B);
	bool Greater_TimespanTimespan(FTimespan A, FTimespan B);
	bool Greater_IntInt(int32_t A, int32_t B);
	bool Greater_Int64Int64(int64_t A, int64_t B);
	bool Greater_FloatFloat(float A, float B);
	bool Greater_DateTimeDateTime(FDateTime A, FDateTime B);
	bool Greater_ByteByte(char A, char B);
	int32_t GetYear(FDateTime A);
	void GetYawPitchFromVector(FVector InVec, float Yaw, float Pitch);
	FVector GetVectorArrayAverage(TArray<FVector> Vectors);
	FVector GetUpVector(FRotator InRot);
	float GetTotalSeconds(FTimespan A);
	float GetTotalMinutes(FTimespan A);
	float GetTotalMilliseconds(FTimespan A);
	float GetTotalHours(FTimespan A);
	float GetTotalDays(FTimespan A);
	FTimespan GetTimeOfDay(FDateTime A);
	float GetTAU();
	void GetSlopeDegreeAngles(FVector MyRightYAxis, FVector FloorNormal, FVector UpVector, float OutSlopePitchDegreeAngle, float OutSlopeRollDegreeAngle);
	int32_t GetSeconds(FTimespan A);
	int32_t GetSecond(FDateTime A);
	FVector2D GetRotated2D(FVector2D A, float AngleDeg);
	FVector GetRightVector(FRotator InRot);
	FVector GetReflectionVector(FVector Direction, FVector SurfaceNormal);
	float GetPointDistanceToSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);
	float GetPointDistanceToLine(FVector Point, FVector LineOrigin, FVector LineDirection);
	float GetPI();
	int32_t GetMonth(FDateTime A);
	int32_t GetMinutes(FTimespan A);
	int32_t GetMinute(FDateTime A);
	float GetMinElement(FVector A);
	float GetMin2D(FVector2D A);
	int32_t GetMilliseconds(FTimespan A);
	int32_t GetMillisecond(FDateTime A);
	float GetMaxElement(FVector A);
	float GetMax2D(FVector2D A);
	int32_t GetHours(FTimespan A);
	int32_t GetHour12(FDateTime A);
	int32_t GetHour(FDateTime A);
	FVector GetForwardVector(FRotator InRot);
	FTimespan GetDuration(FTimespan A);
	FVector GetDirectionUnitVector(FVector From, FVector to);
	int32_t GetDays(FTimespan A);
	int32_t GetDayOfYear(FDateTime A);
	int32_t GetDay(FDateTime A);
	FDateTime GetDate(FDateTime A);
	void GetAzimuthAndElevation(FVector InDirection, FTransform ReferenceFrame, float azimuth, float elevation);
	void GetAxes(FRotator A, FVector X, FVector Y, FVector Z);
	float GetAbsMax2D(FVector2D A);
	FVector2D GetAbs2D(FVector2D A);
	FIntVector FTruncVector(FVector InVector);
	int64_t FTrunc64(float A);
	int32_t FTrunc(float A);
	FTimespan FromSeconds(float Seconds);
	FTimespan FromMinutes(float Minutes);
	FTimespan FromMilliseconds(float Milliseconds);
	FTimespan FromHours(float Hours);
	FTimespan FromDays(float Days);
	float Fraction(float A);
	int32_t FMod(float Dividend, float Divisor, float Remainder);
	float FMin(float A, float B);
	float FMax(float A, float B);
	float FloatSpringInterp(float current, float Target, FFloatSpringState SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass);
	float FixedTurn(float InCurrent, float InDesired, float InDeltaRate);
	float FInterpTo_Constant(float current, float Target, float DeltaTime, float InterpSpeed);
	float FInterpTo(float current, float Target, float DeltaTime, float InterpSpeed);
	float FInterpEaseInOut(float A, float B, float alpha, float Exponent);
	void FindNearestPointsOnLineSegments(FVector Segment1Start, FVector Segment1End, FVector Segment2Start, FVector Segment2End, FVector Segment1Point, FVector Segment2Point);
	FRotator FindLookAtRotation(FVector Start, FVector Target);
	FVector FindClosestPointOnSegment(FVector Point, FVector SegmentStart, FVector SegmentEnd);
	FVector FindClosestPointOnLine(FVector Point, FVector LineOrigin, FVector LineDirection);
	int64_t FFloor64(float A);
	int32_t FFloor(float A);
	float FClamp(float Value, float Min, float Max);
	int64_t FCeil64(float A);
	int32_t FCeil(float A);
	float Exp(float A);
	bool EqualExactly_VectorVector(FVector A, FVector B);
	bool EqualExactly_Vector4Vector4(FVector4 A, FVector4 B);
	bool EqualExactly_Vector2DVector2D(FVector2D A, FVector2D B);
	bool EqualEqual_VectorVector(FVector A, FVector B, float ErrorTolerance);
	bool EqualEqual_Vector4Vector4(FVector4 A, FVector4 B, float ErrorTolerance);
	bool EqualEqual_Vector2DVector2D(FVector2D A, FVector2D B, float ErrorTolerance);
	bool EqualEqual_TransformTransform(FTransform A, FTransform B);
	bool EqualEqual_TimespanTimespan(FTimespan A, FTimespan B);
	bool EqualEqual_RotatorRotator(FRotator A, FRotator B, float ErrorTolerance);
	bool EqualEqual_QuatQuat(FQuat A, FQuat B, float Tolerance);
	bool EqualEqual_ObjectObject(UObject* A, UObject* B);
	bool EqualEqual_NameName(FName A, FName B);
	bool EqualEqual_MatrixMatrix(FMatrix A, FMatrix B, float Tolerance);
	bool EqualEqual_LinearColorLinearColor(FLinearColor A, FLinearColor B);
	bool EqualEqual_IntInt(int32_t A, int32_t B);
	bool EqualEqual_Int64Int64(int64_t A, int64_t B);
	bool EqualEqual_FloatFloat(float A, float B);
	bool EqualEqual_DateTimeDateTime(FDateTime A, FDateTime B);
	bool EqualEqual_ClassClass(UObject* A, UObject* B);
	bool EqualEqual_ByteByte(char A, char B);
	bool EqualEqual_BoolBool(bool A, bool B);
	bool Equal_IntPointIntPoint(FIntPoint A, FIntPoint B);
	float Ease(float A, float B, float alpha, enum class EEasingFunc EasingFunc, float BlendExp, int32_t Steps);
	FVector DynamicWeightedMovingAverage_FVector(FVector CurrentSample, FVector PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
	FRotator DynamicWeightedMovingAverage_FRotator(FRotator CurrentSample, FRotator PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
	float DynamicWeightedMovingAverage_Float(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);
	float DotProduct2D(FVector2D A, FVector2D B);
	float Dot_VectorVector(FVector A, FVector B);
	FVector Divide_VectorVector(FVector A, FVector B);
	FVector Divide_VectorInt(FVector A, int32_t B);
	FVector Divide_VectorFloat(FVector A, float B);
	FVector4 Divide_Vector4Vector4(FVector4 A, FVector4 B);
	FVector2D Divide_Vector2DVector2D(FVector2D A, FVector2D B);
	FVector2D Divide_Vector2DFloat(FVector2D A, float B);
	FTimespan Divide_TimespanFloat(FTimespan A, float Scalar);
	FLinearColor Divide_LinearColorLinearColor(FLinearColor A, FLinearColor B);
	FIntPoint Divide_IntPointIntPoint(FIntPoint A, FIntPoint B);
	FIntPoint Divide_IntPointInt(FIntPoint A, int32_t B);
	int32_t Divide_IntInt(int32_t A, int32_t B);
	int64_t Divide_Int64Int64(int64_t A, int64_t B);
	float Divide_FloatFloat(float A, float B);
	char Divide_ByteByte(char A, char B);
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
	int32_t DaysInYear(int32_t Year);
	int32_t DaysInMonth(int32_t Year, int32_t Month);
	FDateTime DateTimeMinValue();
	FDateTime DateTimeMaxValue();
	bool DateTimeFromString(FString DateTimeString, FDateTime Result);
	bool DateTimeFromIsoString(FString IsoString, FDateTime Result);
	float CrossProduct2D(FVector2D A, FVector2D B);
	FVector Cross_VectorVector(FVector A, FVector B);
	FVector CreateVectorFromYawPitch(float Yaw, float Pitch, float Length);
	float Cos(float A);
	FTransform ConvertTransformToRelative(FTransform Transform, FTransform ParentTransform);
	FVector2D Conv_VectorToVector2D(FVector InVector);
	FTransform Conv_VectorToTransform(FVector InLocation);
	FRotator Conv_VectorToRotator(FVector InVec);
	FQuat Conv_VectorToQuaterion(FVector InVec);
	FLinearColor Conv_VectorToLinearColor(FVector InVec);
	FVector Conv_Vector4ToVector(FVector4 InVector4);
	FRotator Conv_Vector4ToRotator(FVector4 InVec);
	FQuat Conv_Vector4ToQuaterion(FVector4 InVec);
	FVector Conv_Vector2DToVector(FVector2D InVector2D, float Z);
	FIntPoint Conv_Vector2DToIntPoint(FVector2D InVector2D);
	FMatrix Conv_TransformToMatrix(FTransform Transform);
	FVector Conv_RotatorToVector(FRotator InRot);
	FTransform Conv_RotatorToTransform(FRotator InRotator);
	FTransform Conv_MatrixToTransform(FMatrix InMatrix);
	FRotator Conv_MatrixToRotator(FMatrix InMatrix);
	FVector Conv_LinearColorToVector(FLinearColor InLinearColor);
	FColor Conv_LinearColorToColor(FLinearColor InLinearColor, bool InUseSRGB);
	FVector Conv_IntVectorToVector(FIntVector InIntVector);
	FIntVector Conv_IntToIntVector(int32_t inInt);
	int64_t Conv_IntToInt64(int32_t inInt);
	float Conv_IntToFloat(int32_t inInt);
	char Conv_IntToByte(int32_t inInt);
	bool Conv_IntToBool(int32_t inInt);
	FVector2D Conv_IntPointToVector2D(FIntPoint InIntPoint);
	int32_t Conv_Int64ToInt(int64_t inInt);
	char Conv_Int64ToByte(int64_t inInt);
	FVector Conv_FloatToVector(float InFloat);
	FLinearColor Conv_FloatToLinearColor(float InFloat);
	FLinearColor Conv_ColorToLinearColor(FColor InColor);
	int32_t Conv_ByteToInt(char InByte);
	float Conv_ByteToFloat(char InByte);
	int32_t Conv_BoolToInt(bool InBool);
	float Conv_BoolToFloat(bool InBool);
	char Conv_BoolToByte(bool InBool);
	FTransform ComposeTransforms(FTransform A, FTransform B);
	FRotator ComposeRotators(FRotator A, FRotator B);
	bool ClassIsChildOf(UObject* TestClass, UObject* ParentClass);
	FVector ClampVectorSize(FVector A, float Min, float Max);
	int64_t ClampInt64(int64_t Value, int64_t Min, int64_t Max);
	float ClampAxis(float Angle);
	FVector2D ClampAxes2D(FVector2D A, float MinAxisVal, float MaxAxisVal);
	float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);
	int32_t Clamp(int32_t Value, int32_t Min, int32_t Max);
	FLinearColor CInterpTo(FLinearColor current, FLinearColor Target, float DeltaTime, float InterpSpeed);
	void BreakVector4(FVector4 InVec, float X, float Y, float Z, float W);
	void BreakVector2D(FVector2D InVec, float X, float Y);
	void BreakVector(FVector InVec, float X, float Y, float Z);
	void BreakTransform(FTransform InTransform, FVector Location, FRotator Rotation, FVector Scale);
	void BreakTimespan2(FTimespan InTimespan, int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t FractionNano);
	void BreakTimespan(FTimespan InTimespan, int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds);
	void BreakRotIntoAxes(FRotator InRot, FVector X, FVector Y, FVector Z);
	void BreakRotator(FRotator InRot, float Roll, float Pitch, float Yaw);
	void BreakRandomStream(FRandomStream InRandomStream, int32_t InitialSeed);
	void BreakQualifiedFrameTime(FQualifiedFrameTime InFrameTime, FFrameNumber Frame, FFrameRate FrameRate, float SubFrame);
	void BreakFrameRate(FFrameRate InFrameRate, int32_t Numerator, int32_t Denominator);
	void BreakDateTime(FDateTime InDateTime, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond);
	void BreakColor(FLinearColor InColor, float R, float G, float B, float A);
	bool BooleanXOR(bool A, bool B);
	bool BooleanOR(bool A, bool B);
	bool BooleanNOR(bool A, bool B);
	bool BooleanNAND(bool A, bool B);
	bool BooleanAND(bool A, bool B);
	char BMin(char A, char B);
	char BMax(char A, char B);
	float Atan2(float Y, float X);
	float Atan(float A);
	float Asin(float A);
	int32_t And_IntInt(int32_t A, int32_t B);
	int64_t And_Int64Int64(int64_t A, int64_t B);
	FVector Add_VectorVector(FVector A, FVector B);
	FVector Add_VectorInt(FVector A, int32_t B);
	FVector Add_VectorFloat(FVector A, float B);
	FVector4 Add_Vector4Vector4(FVector4 A, FVector4 B);
	FVector2D Add_Vector2DVector2D(FVector2D A, FVector2D B);
	FVector2D Add_Vector2DFloat(FVector2D A, float B);
	FTimespan Add_TimespanTimespan(FTimespan A, FTimespan B);
	FQuat Add_QuatQuat(FQuat A, FQuat B);
	FMatrix Add_MatrixMatrix(FMatrix A, FMatrix B);
	FLinearColor Add_LinearColorLinearColor(FLinearColor A, FLinearColor B);
	FIntPoint Add_IntPointIntPoint(FIntPoint A, FIntPoint B);
	FIntPoint Add_IntPointInt(FIntPoint A, int32_t B);
	int32_t Add_IntInt(int32_t A, int32_t B);
	int64_t Add_Int64Int64(int64_t A, int64_t B);
	float Add_FloatFloat(float A, float B);
	FDateTime Add_DateTimeTimespan(FDateTime A, FTimespan B);
	FDateTime Add_DateTimeDateTime(FDateTime A, FDateTime B);
	char Add_ByteByte(char A, char B);
	float Acos(float A);
	int64_t Abs_Int64(int64_t A);
	int32_t Abs_Int(int32_t A);
	float Abs(float A);
};

// Class Engine.KismetNodeHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetNodeHelperLibrary : UBlueprintFunctionLibrary {

	void MarkBit(int32_t Data, int32_t Index);
	bool HasUnmarkedBit(int32_t Data, int32_t NumBits);
	bool HasMarkedBit(int32_t Data, int32_t NumBits);
	char GetValidValue(UEnum* Enum, char EnumeratorValue);
	int32_t GetUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits, bool bRandom);
	int32_t GetRandomUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits);
	int32_t GetFirstUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits);
	char GetEnumeratorValueFromIndex(UEnum* Enum, char EnumeratorIndex);
	FString GetEnumeratorUserFriendlyName(UEnum* Enum, char EnumeratorValue);
	FName GetEnumeratorName(UEnum* Enum, char EnumeratorValue);
	void ClearBit(int32_t Data, int32_t Index);
	void ClearAllBits(int32_t Data);
	bool BitIsMarked(int32_t Data, int32_t Index);
};

// Class Engine.KismetRenderingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetRenderingLibrary : UBlueprintFunctionLibrary {

	void SetCastInsetShadowForAllAttachments(UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup);
	UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(UTextureRenderTarget2D* RenderTarget, FString Name, enum class TextureCompressionSettings CompressionSettings, enum class TextureMipGenSettings MipSettings);
	void ReleaseRenderTarget2D(UTextureRenderTarget2D* TextureRenderTarget);
	FColor ReadRenderTargetUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
	FLinearColor ReadRenderTargetRawUV(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
	FLinearColor ReadRenderTargetRawPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y);
	FColor ReadRenderTargetPixel(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, int32_t X, int32_t Y);
	FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int32_t Bone0, char Weight0, int32_t Bone1, char Weight1, int32_t Bone2, char Weight2, int32_t Bone3, char Weight3);
	UTexture2D* ImportFileAsTexture2D(UObject* WorldContextObject, FString Filename);
	UTexture2D* ImportBufferAsTexture2D(UObject* WorldContextObject, TArray<char> Buffer);
	void ExportTexture2D(UObject* WorldContextObject, UTexture2D* Texture, FString FilePath, FString Filename);
	void ExportRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FString FilePath, FString Filename);
	void EndDrawCanvasToRenderTarget(UObject* WorldContextObject, FDrawToRenderTargetContext Context);
	void DrawMaterialToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UMaterialInterface* Material);
	UTextureRenderTarget2D* CreateRenderTarget2D(UObject* WorldContextObject, int32_t Width, int32_t Height, enum class ETextureRenderTargetFormat Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps);
	void ConvertRenderTargetToTexture2DEditorOnly(UObject* WorldContextObject, UTextureRenderTarget2D* RenderTarget, UTexture2D* Texture);
	void ClearRenderTarget2D(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FLinearColor ClearColor);
	void BreakSkinWeightInfo(FSkelMeshSkinWeightInfo InWeight, int32_t Bone0, char Weight0, int32_t Bone1, char Weight1, int32_t Bone2, char Weight2, int32_t Bone3, char Weight3);
	void BeginDrawCanvasToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UCanvas* Canvas, FVector2D Size, FDrawToRenderTargetContext Context);
};

// Class Engine.KismetStringLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetStringLibrary : UBlueprintFunctionLibrary {

	FString TrimTrailing(FString SourceString);
	FString Trim(FString SourceString);
	FString ToUpper(FString SourceString);
	FString ToLower(FString SourceString);
	FString TimeSecondsToString(float InSeconds);
	bool StartsWith(FString SourceString, FString InPrefix, enum class ESearchCase SearchCase);
	bool Split(FString SourceString, FString InStr, FString LeftS, FString RightS, enum class ESearchCase SearchCase, enum class ESearchDir SearchDir);
	FString RightPad(FString SourceString, int32_t ChCount);
	FString RightChop(FString SourceString, int32_t count);
	FString Right(FString SourceString, int32_t count);
	FString Reverse(FString SourceString);
	int32_t ReplaceInline(FString SourceString, FString SearchText, FString ReplacementText, enum class ESearchCase SearchCase);
	FString Replace(FString SourceString, FString From, FString to, enum class ESearchCase SearchCase);
	TArray<FString> ParseIntoArray(FString SourceString, FString Delimiter, bool CullEmptyStrings);
	bool NotEqual_StrStr(FString A, FString B);
	bool NotEqual_StriStri(FString A, FString B);
	FString Mid(FString SourceString, int32_t Start, int32_t count);
	bool MatchesWildcard(FString SourceString, FString Wildcard, enum class ESearchCase SearchCase);
	int32_t Len(FString S);
	FString LeftPad(FString SourceString, int32_t ChCount);
	FString LeftChop(FString SourceString, int32_t count);
	FString Left(FString SourceString, int32_t count);
	FString JoinStringArray(TArray<FString> SourceArray, FString Separator);
	bool IsNumeric(FString SourceString);
	bool IsEmpty(FString inString);
	FString GetSubstring(FString SourceString, int32_t StartIndex, int32_t Length);
	int32_t GetCharacterAsNumber(FString SourceString, int32_t Index);
	TArray<FString> GetCharacterArrayFromString(FString SourceString);
	int32_t FindSubstring(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition);
	bool EqualEqual_StrStr(FString A, FString B);
	bool EqualEqual_StriStri(FString A, FString B);
	bool EndsWith(FString SourceString, FString InSuffix, enum class ESearchCase SearchCase);
	int32_t CullArray(FString SourceString, TArray<FString> inArray);
	FString Conv_VectorToString(FVector InVec);
	FString Conv_Vector2dToString(FVector2D InVec);
	FString Conv_TransformToString(FTransform InTrans);
	void Conv_StringToVector2D(FString inString, FVector2D OutConvertedVector2D, bool OutIsValid);
	void Conv_StringToVector(FString inString, FVector OutConvertedVector, bool OutIsValid);
	void Conv_StringToRotator(FString inString, FRotator OutConvertedRotator, bool OutIsValid);
	FName Conv_StringToName(FString inString);
	int32_t Conv_StringToInt(FString inString);
	float Conv_StringToFloat(FString inString);
	void Conv_StringToColor(FString inString, FLinearColor OutConvertedColor, bool OutIsValid);
	FString Conv_RotatorToString(FRotator InRot);
	FString Conv_ObjectToString(UObject* InObj);
	FString Conv_NameToString(FName InName);
	FString Conv_MatrixToString(FMatrix InMatrix);
	FString Conv_IntVectorToString(FIntVector InIntVec);
	FString Conv_IntToString(int32_t inInt);
	FString Conv_IntPointToString(FIntPoint InIntPoint);
	FString Conv_FloatToString(float InFloat);
	FString Conv_ColorToString(FLinearColor InColor);
	FString Conv_ByteToString(char InByte);
	FString Conv_BoolToString(bool InBool);
	bool Contains(FString SearchIn, FString Substring, bool bUseCase, bool bSearchFromEnd);
	FString Concat_StrStr(FString A, FString B);
	FString BuildString_Vector2d(FString AppendTo, FString Prefix, FVector2D InVector2D, FString Suffix);
	FString BuildString_Vector(FString AppendTo, FString Prefix, FVector InVector, FString Suffix);
	FString BuildString_Rotator(FString AppendTo, FString Prefix, FRotator InRot, FString Suffix);
	FString BuildString_Object(FString AppendTo, FString Prefix, UObject* InObj, FString Suffix);
	FString BuildString_Name(FString AppendTo, FString Prefix, FName InName, FString Suffix);
	FString BuildString_IntVector(FString AppendTo, FString Prefix, FIntVector InIntVector, FString Suffix);
	FString BuildString_Int(FString AppendTo, FString Prefix, int32_t inInt, FString Suffix);
	FString BuildString_Float(FString AppendTo, FString Prefix, float InFloat, FString Suffix);
	FString BuildString_Color(FString AppendTo, FString Prefix, FLinearColor InColor, FString Suffix);
	FString BuildString_Bool(FString AppendTo, FString Prefix, bool InBool, FString Suffix);
};

// Class Engine.KismetStringTableLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetStringTableLibrary : UBlueprintFunctionLibrary {

	bool IsRegisteredTableId(FName TableId);
	bool IsRegisteredTableEntry(FName TableId, FString Key);
	FString GetTableNamespace(FName TableId);
	FString GetTableEntrySourceString(FName TableId, FString Key);
	FString GetTableEntryMetaData(FName TableId, FString Key, FName MetadataId);
	TArray<FName> GetRegisteredStringTables();
	TArray<FName> GetMetaDataIdsFromStringTableEntry(FName TableId, FString Key);
	TArray<FString> GetKeysFromStringTable(FName TableId);
};

// Class Engine.KismetSystemLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetSystemLibrary : UBlueprintFunctionLibrary {

	void UnregisterForRemoteNotifications();
	void UnloadPrimaryAssetList(TArray<FPrimaryAssetId> PrimaryAssetIdList);
	void UnloadPrimaryAsset(FPrimaryAssetId PrimaryAssetId);
	void TransactObject(UObject* Object);
	void StackTrace();
	bool SphereTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool SphereTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, FName ProfileName, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool SphereTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, float Radius, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool SphereTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool SphereTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, FName ProfileName, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool SphereTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, float Radius, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool SphereOverlapComponents(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TArray<enum class EObjectTypeQuery> ObjectTypes, UObject* ComponentClassFilter, TArray<AActor*> ActorsToIgnore, TArray<UPrimitiveComponent*> OutComponents);
	bool SphereOverlapActors(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, TArray<enum class EObjectTypeQuery> ObjectTypes, UObject* ActorClassFilter, TArray<AActor*> ActorsToIgnore, TArray<AActor*> OutActors);
	void SnapshotObject(UObject* Object);
	void ShowPlatformSpecificLeaderboardScreen(FString CategoryName);
	void ShowPlatformSpecificAchievementsScreen(APlayerController* SpecificPlayer);
	void ShowInterstitialAd();
	void ShowAdBanner(int32_t AdIdIndex, bool bShowOnBottomOfScreen);
	void SetWindowTitle(FText Title);
	void SetVolumeButtonsHandledBySystem(bool bEnabled);
	void SetVectorPropertyByName(UObject* Object, FName PropertyName, FVector Value);
	void SetUserActivity(FUserActivity UserActivity);
	void SetTransformPropertyByName(UObject* Object, FName PropertyName, FTransform Value);
	void SetTextPropertyByName(UObject* Object, FName PropertyName, FText Value);
	void SetSuppressViewportTransitionMessage(UObject* WorldContextObject, bool bState);
	void SetStructurePropertyByName(UObject* Object, FName PropertyName, FGenericStruct Value);
	void SetStringPropertyByName(UObject* Object, FName PropertyName, FString Value);
	void SetSoftObjectPropertyByName(UObject* Object, FName PropertyName, TSoftObjectPtr<UObject> Value);
	void SetSoftClassPropertyByName(UObject* Object, FName PropertyName, TSoftClassPtr<UObject> Value);
	void SetRotatorPropertyByName(UObject* Object, FName PropertyName, FRotator Value);
	void SetObjectPropertyByName(UObject* Object, FName PropertyName, UObject* Value);
	void SetNamePropertyByName(UObject* Object, FName PropertyName, FName Value);
	void SetLinearColorPropertyByName(UObject* Object, FName PropertyName, FLinearColor Value);
	void SetIntPropertyByName(UObject* Object, FName PropertyName, int32_t Value);
	void SetInterfacePropertyByName(UObject* Object, FName PropertyName, TScriptInterface<IInterface> Value);
	void SetInt64PropertyByName(UObject* Object, FName PropertyName, int64_t Value);
	void SetGamepadsBlockDeviceFeedback(bool bBlock);
	void SetFloatPropertyByName(UObject* Object, FName PropertyName, float Value);
	void SetFieldPathPropertyByName(UObject* Object, FName PropertyName, TFieldPath<FField> Value);
	void SetCollisionProfileNameProperty(UObject* Object, FName PropertyName, FCollisionProfileName Value);
	void SetClassPropertyByName(UObject* Object, FName PropertyName, UObject* Value);
	void SetBytePropertyByName(UObject* Object, FName PropertyName, char Value);
	void SetBoolPropertyByName(UObject* Object, FName PropertyName, bool Value);
	void RetriggerableDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
	void ResetGamepadAssignmentToController(int32_t ControllerId);
	void ResetGamepadAssignments();
	void RegisterForRemoteNotifications();
	void QuitGame(UObject* WorldContextObject, APlayerController* SpecificPlayer, enum class EQuitPreference QuitPreference, bool bIgnorePlatformRestrictions);
	void PrintWarning(FString inString);
	void PrintText(UObject* WorldContextObject, FText InText, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
	void PrintString(UObject* WorldContextObject, FString inString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
	void OnAssetLoaded__DelegateSignature(UObject* Loaded);
	void OnAssetClassLoaded__DelegateSignature(UObject* Loaded);
	bool NotEqual_SoftObjectReference(TSoftObjectPtr<UObject> A, TSoftObjectPtr<UObject> B);
	bool NotEqual_SoftClassReference(TSoftClassPtr<UObject> A, TSoftClassPtr<UObject> B);
	bool NotEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);
	bool NotEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);
	FString NormalizeFilename(FString InFilename);
	void MoveComponentTo(USceneComponent* Component, FVector TargetRelativeLocation, FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, enum class EMoveComponentAction MoveAction, FLatentActionInfo LatentInfo);
	FSoftObjectPath MakeSoftObjectPath(FString PathString);
	FSoftClassPath MakeSoftClassPath(FString PathString);
	FText MakeLiteralText(FText Value);
	FString MakeLiteralString(FString Value);
	FName MakeLiteralName(FName Value);
	int32_t MakeLiteralInt(int32_t Value);
	float MakeLiteralFloat(float Value);
	char MakeLiteralByte(char Value);
	bool MakeLiteralBool(bool Value);
	void LoadInterstitialAd(int32_t AdIdIndex);
	UObject* LoadClassAsset_Blocking(TSoftClassPtr<UObject> AssetClass);
	void LoadAssetClass(UObject* WorldContextObject, TSoftClassPtr<UObject> AssetClass, FDelegate OnLoaded, FLatentActionInfo LatentInfo);
	UObject* LoadAsset_Blocking(TSoftObjectPtr<UObject> Asset);
	void LoadAsset(UObject* WorldContextObject, TSoftObjectPtr<UObject> Asset, FDelegate OnLoaded, FLatentActionInfo LatentInfo);
	bool LineTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool LineTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, FName ProfileName, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool LineTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool LineTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool LineTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, FName ProfileName, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool LineTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void LaunchURL(FString URL);
	void K2_UnPauseTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);
	void K2_UnPauseTimerDelegate(FDelegate Delegate);
	void K2_UnPauseTimer(UObject* Object, FString FunctionName);
	bool K2_TimerExistsHandle(UObject* WorldContextObject, FTimerHandle Handle);
	bool K2_TimerExistsDelegate(FDelegate Delegate);
	bool K2_TimerExists(UObject* Object, FString FunctionName);
	FTimerHandle K2_SetTimerDelegate(FDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
	FTimerHandle K2_SetTimer(UObject* Object, FString FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
	void K2_PauseTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);
	void K2_PauseTimerDelegate(FDelegate Delegate);
	void K2_PauseTimer(UObject* Object, FString FunctionName);
	bool K2_IsValidTimerHandle(FTimerHandle Handle);
	bool K2_IsTimerPausedHandle(UObject* WorldContextObject, FTimerHandle Handle);
	bool K2_IsTimerPausedDelegate(FDelegate Delegate);
	bool K2_IsTimerPaused(UObject* Object, FString FunctionName);
	bool K2_IsTimerActiveHandle(UObject* WorldContextObject, FTimerHandle Handle);
	bool K2_IsTimerActiveDelegate(FDelegate Delegate);
	bool K2_IsTimerActive(UObject* Object, FString FunctionName);
	FTimerHandle K2_InvalidateTimerHandle(FTimerHandle Handle);
	float K2_GetTimerRemainingTimeHandle(UObject* WorldContextObject, FTimerHandle Handle);
	float K2_GetTimerRemainingTimeDelegate(FDelegate Delegate);
	float K2_GetTimerRemainingTime(UObject* Object, FString FunctionName);
	float K2_GetTimerElapsedTimeHandle(UObject* WorldContextObject, FTimerHandle Handle);
	float K2_GetTimerElapsedTimeDelegate(FDelegate Delegate);
	float K2_GetTimerElapsedTime(UObject* Object, FString FunctionName);
	void K2_ClearTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);
	void K2_ClearTimerDelegate(FDelegate Delegate);
	void K2_ClearTimer(UObject* Object, FString FunctionName);
	void K2_ClearAndInvalidateTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);
	bool IsValidSoftObjectReference(TSoftObjectPtr<UObject> SoftObjectReference);
	bool IsValidSoftClassReference(TSoftClassPtr<UObject> SoftClassReference);
	bool IsValidPrimaryAssetType(FPrimaryAssetType PrimaryAssetType);
	bool IsValidPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
	bool IsValidClass(UObject* Class);
	bool IsValid(UObject* Object);
	bool IsUnattended();
	bool IsStandalone(UObject* WorldContextObject);
	bool IsSplitScreen(UObject* WorldContextObject);
	bool IsServer(UObject* WorldContextObject);
	bool IsScreensaverEnabled();
	bool IsPackagedForDistribution();
	bool IsLoggedIn(APlayerController* SpecificPlayer);
	bool IsInterstitialAdRequested();
	bool IsInterstitialAdAvailable();
	bool IsDedicatedServer(UObject* WorldContextObject);
	bool IsControllerAssignedToGamepad(int32_t ControllerId);
	void HideAdBanner();
	bool GetVolumeButtonsHandledBySystem();
	FString GetUniqueDeviceId();
	bool GetSupportedFullscreenResolutions(TArray<FIntPoint> Resolutions);
	TSoftObjectPtr<UObject> GetSoftObjectReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
	TSoftClassPtr<UObject> GetSoftClassReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
	int32_t GetRenderingMaterialQualityLevel();
	int32_t GetRenderingDetailMode();
	FString GetProjectSavedDirectory();
	FString GetProjectDirectory();
	FString GetProjectContentDirectory();
	void GetPrimaryAssetsWithBundleState(TArray<FName> RequiredBundles, TArray<FName> ExcludedBundles, TArray<FPrimaryAssetType> ValidTypes, bool bForceCurrentState, TArray<FPrimaryAssetId> OutPrimaryAssetIdList);
	void GetPrimaryAssetIdList(FPrimaryAssetType PrimaryAssetType, TArray<FPrimaryAssetId> OutPrimaryAssetIdList);
	FPrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(TSoftObjectPtr<UObject> SoftObjectReference);
	FPrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(TSoftClassPtr<UObject> SoftClassReference);
	FPrimaryAssetId GetPrimaryAssetIdFromObject(UObject* Object);
	FPrimaryAssetId GetPrimaryAssetIdFromClass(UObject* Class);
	TArray<FString> GetPreferredLanguages();
	FString GetPlatformUserName();
	FString GetPlatformUserDir();
	FString GetPathName(UObject* Object);
	UObject* GetOuterObject(UObject* Object);
	FString GetObjectName(UObject* Object);
	UObject* GetObjectFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
	int32_t GetMinYResolutionForUI();
	int32_t GetMinYResolutionFor3DView();
	FString GetLocalCurrencySymbol();
	FString GetLocalCurrencyCode();
	float GetGameTimeInSeconds(UObject* WorldContextObject);
	FString GetGamepadControllerName(int32_t ControllerId);
	FString GetGameName();
	FString GetGameBundleId();
	int64_t GetFrameCount();
	FString GetEngineVersion();
	FString GetDisplayName(UObject* Object);
	FString GetDeviceId();
	FString GetDefaultLocale();
	FString GetDefaultLanguage();
	bool GetCurrentBundleState(FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, TArray<FName> OutBundles);
	bool GetConvenientWindowedResolutions(TArray<FIntPoint> Resolutions);
	int32_t GetConsoleVariableIntValue(FString VariableName);
	float GetConsoleVariableFloatValue(FString VariableName);
	bool GetConsoleVariableBoolValue(FString VariableName);
	void GetComponentBounds(USceneComponent* Component, FVector Origin, FVector BoxExtent, float SphereRadius);
	FString GetCommandLine();
	UObject* GetClassFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);
	FString GetClassDisplayName(UObject* Class);
	int32_t GetAdIDCount();
	void GetActorListFromComponentList(TArray<UPrimitiveComponent*> ComponentList, UObject* ActorClassFilter, TArray<AActor*> OutActorList);
	void GetActorBounds(AActor* Actor, FVector Origin, FVector BoxExtent);
	void ForceCloseAdBanner();
	void FlushPersistentDebugLines(UObject* WorldContextObject);
	void FlushDebugStrings(UObject* WorldContextObject);
	void ExecuteConsoleCommand(UObject* WorldContextObject, FString Command, APlayerController* SpecificPlayer);
	bool EqualEqual_SoftObjectReference(TSoftObjectPtr<UObject> A, TSoftObjectPtr<UObject> B);
	bool EqualEqual_SoftClassReference(TSoftClassPtr<UObject> A, TSoftClassPtr<UObject> B);
	bool EqualEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);
	bool EqualEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);
	int32_t EndTransaction();
	void DrawDebugString(UObject* WorldContextObject, FVector TextLocation, FString Text, AActor* TestBaseActor, FLinearColor TextColor, float Duration);
	void DrawDebugSphere(UObject* WorldContextObject, FVector Center, float Radius, int32_t Segments, FLinearColor LineColor, float Duration, float Thickness);
	void DrawDebugPoint(UObject* WorldContextObject, FVector Position, float Size, FLinearColor PointColor, float Duration);
	void DrawDebugPlane(UObject* WorldContextObject, FPlane PlaneCoordinates, FVector Location, float Size, FLinearColor PlaneColor, float Duration);
	void DrawDebugLine(UObject* WorldContextObject, FVector LineStart, FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness);
	void DrawDebugFrustum(UObject* WorldContextObject, FTransform FrustumTransform, FLinearColor FrustumColor, float Duration, float Thickness);
	void DrawDebugFloatHistoryTransform(UObject* WorldContextObject, FDebugFloatHistory FloatHistory, FTransform DrawTransform, FVector2D DrawSize, FLinearColor DrawColor, float Duration);
	void DrawDebugFloatHistoryLocation(UObject* WorldContextObject, FDebugFloatHistory FloatHistory, FVector DrawLocation, FVector2D DrawSize, FLinearColor DrawColor, float Duration);
	void DrawDebugCylinder(UObject* WorldContextObject, FVector Start, FVector End, float Radius, int32_t Segments, FLinearColor LineColor, float Duration, float Thickness);
	void DrawDebugCoordinateSystem(UObject* WorldContextObject, FVector AxisLoc, FRotator AxisRot, float Scale, float Duration, float Thickness);
	void DrawDebugConeInDegrees(UObject* WorldContextObject, FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, FLinearColor LineColor, float Duration, float Thickness);
	void DrawDebugCone(UObject* WorldContextObject, FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, FLinearColor LineColor, float Duration, float Thickness);
	void DrawDebugCircle(UObject* WorldContextObject, FVector Center, float Radius, int32_t NumSegments, FLinearColor LineColor, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis);
	void DrawDebugCapsule(UObject* WorldContextObject, FVector Center, float HalfHeight, float Radius, FRotator Rotation, FLinearColor LineColor, float Duration, float Thickness);
	void DrawDebugCamera(ACameraActor* CameraActor, FLinearColor CameraColor, float Duration);
	void DrawDebugBox(UObject* WorldContextObject, FVector Center, FVector Extent, FLinearColor LineColor, FRotator Rotation, float Duration, float Thickness);
	void DrawDebugArrow(UObject* WorldContextObject, FVector LineStart, FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, float Thickness);
	bool DoesImplementInterface(UObject* TestObject, UInterface* Interface);
	void Delay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);
	void CreateCopyForUndoBuffer(UObject* ObjectToModify);
	FString ConvertToRelativePath(FString Filename);
	FString ConvertToAbsolutePath(FString Filename);
	TSoftObjectPtr<UObject> Conv_SoftObjPathToSoftObjRef(FSoftObjectPath SoftObjectPath);
	FString Conv_SoftObjectReferenceToString(TSoftObjectPtr<UObject> SoftObjectReference);
	UObject* Conv_SoftObjectReferenceToObject(TSoftObjectPtr<UObject> SoftObject);
	FString Conv_SoftClassReferenceToString(TSoftClassPtr<UObject> SoftClassReference);
	UObject* Conv_SoftClassReferenceToClass(TSoftClassPtr<UObject> SoftClass);
	TSoftClassPtr<UObject> Conv_SoftClassPathToSoftClassRef(FSoftClassPath SoftClassPath);
	FString Conv_PrimaryAssetTypeToString(FPrimaryAssetType PrimaryAssetType);
	FString Conv_PrimaryAssetIdToString(FPrimaryAssetId PrimaryAssetId);
	TSoftObjectPtr<UObject> Conv_ObjectToSoftObjectReference(UObject* Object);
	UObject* Conv_InterfaceToObject(TScriptInterface<IInterface> Interface);
	TSoftClassPtr<UObject> Conv_ClassToSoftClassReference(UObject* Class);
	void ControlScreensaver(bool bAllowScreenSaver);
	bool ComponentOverlapComponents(UPrimitiveComponent* Component, FTransform ComponentTransform, TArray<enum class EObjectTypeQuery> ObjectTypes, UObject* ComponentClassFilter, TArray<AActor*> ActorsToIgnore, TArray<UPrimitiveComponent*> OutComponents);
	bool ComponentOverlapActors(UPrimitiveComponent* Component, FTransform ComponentTransform, TArray<enum class EObjectTypeQuery> ObjectTypes, UObject* ActorClassFilter, TArray<AActor*> ActorsToIgnore, TArray<AActor*> OutActors);
	void CollectGarbage();
	bool CapsuleTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool CapsuleTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool CapsuleTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool CapsuleTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool CapsuleTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool CapsuleTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool CapsuleOverlapComponents(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, TArray<enum class EObjectTypeQuery> ObjectTypes, UObject* ComponentClassFilter, TArray<AActor*> ActorsToIgnore, TArray<UPrimitiveComponent*> OutComponents);
	bool CapsuleOverlapActors(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, TArray<enum class EObjectTypeQuery> ObjectTypes, UObject* ActorClassFilter, TArray<AActor*> ActorsToIgnore, TArray<AActor*> OutActors);
	bool CanLaunchURL(FString URL);
	void CancelTransaction(int32_t Index);
	void BreakSoftObjectPath(FSoftObjectPath InSoftObjectPath, FString PathString);
	void BreakSoftClassPath(FSoftClassPath InSoftClassPath, FString PathString);
	bool BoxTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool BoxTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, FName ProfileName, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool BoxTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, FHitResult OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool BoxTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<enum class EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool BoxTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, FName ProfileName, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool BoxTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, enum class ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<AActor*> ActorsToIgnore, enum class EDrawDebugTrace DrawDebugType, TArray<FHitResult> OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool BoxOverlapComponents(UObject* WorldContextObject, FVector BoxPos, FVector Extent, TArray<enum class EObjectTypeQuery> ObjectTypes, UObject* ComponentClassFilter, TArray<AActor*> ActorsToIgnore, TArray<UPrimitiveComponent*> OutComponents);
	bool BoxOverlapActors(UObject* WorldContextObject, FVector BoxPos, FVector BoxExtent, TArray<enum class EObjectTypeQuery> ObjectTypes, UObject* ActorClassFilter, TArray<AActor*> ActorsToIgnore, TArray<AActor*> OutActors);
	int32_t BeginTransaction(FString Context, FText Description, UObject* PrimaryObject);
	FDebugFloatHistory AddFloatHistorySample(float Value, FDebugFloatHistory FloatHistory);
};

// Class Engine.KismetTextLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetTextLibrary : UBlueprintFunctionLibrary {

	FText TextTrimTrailing(FText InText);
	FText TextTrimPrecedingAndTrailing(FText InText);
	FText TextTrimPreceding(FText InText);
	FText TextToUpper(FText InText);
	FText TextToLower(FText InText);
	bool TextIsTransient(FText InText);
	bool TextIsFromStringTable(FText Text);
	bool TextIsEmpty(FText InText);
	bool TextIsCultureInvariant(FText InText);
	FText TextFromStringTable(FName TableId, FString Key);
	bool StringTableIdAndKeyFromText(FText Text, FName OutTableId, FString OutKey);
	FText PolyglotDataToText(FPolyglotTextData PolyglotData);
	bool NotEqual_TextText(FText A, FText B);
	bool NotEqual_IgnoreCase_TextText(FText A, FText B);
	void IsPolyglotDataValid(FPolyglotTextData PolyglotData, bool IsValid, FText errorMessage);
	FText GetEmptyText();
	FText Format(FText InPattern, TArray<FFormatArgumentData> InArgs);
	bool FindTextInLocalizationTable(FString Namespace, FString Key, FText OutText);
	bool EqualEqual_TextText(FText A, FText B);
	bool EqualEqual_IgnoreCase_TextText(FText A, FText B);
	FText Conv_VectorToText(FVector InVec);
	FText Conv_Vector2dToText(FVector2D InVec);
	FText Conv_TransformToText(FTransform InTrans);
	FString Conv_TextToString(FText InText);
	FText Conv_StringToText(FString inString);
	FText Conv_RotatorToText(FRotator InRot);
	FText Conv_ObjectToText(UObject* InObj);
	FText Conv_NameToText(FName InName);
	FText Conv_IntToText(int32_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits);
	FText Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits);
	FText Conv_FloatToText(float Value, enum class ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits);
	FText Conv_ColorToText(FLinearColor InColor);
	FText Conv_ByteToText(char Value);
	FText Conv_BoolToText(bool InBool);
	FText AsTimeZoneTime_DateTime(FDateTime InDateTime, FString InTimeZone);
	FText AsTimeZoneDateTime_DateTime(FDateTime InDateTime, FString InTimeZone);
	FText AsTimeZoneDate_DateTime(FDateTime InDateTime, FString InTimeZone);
	FText AsTimespan_Timespan(FTimespan InTimespan);
	FText AsTime_DateTime(FDateTime In);
	FText AsPercent_Float(float Value, enum class ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits);
	FText AsDateTime_DateTime(FDateTime In);
	FText AsDate_DateTime(FDateTime InDateTime);
	FText AsCurrencyBase(int32_t BaseValue, FString CurrencyCode);
	FText AsCurrency_Integer(int32_t Value, enum class ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, FString CurrencyCode);
	FText AsCurrency_Float(float Value, enum class ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits, int32_t MinimumFractionalDigits, int32_t MaximumFractionalDigits, FString CurrencyCode);
};

// Class Engine.Layer
// Size: 0x48 (Inherited: 0x28)
struct ULayer : UObject {
	FName LayerName; // 0x28(0x08)
	char bIsVisible : 1; // 0x30(0x01)
	TArray<FLayerActorStats> ActorStats; // 0x38(0x10)
};

// Class Engine.LevelPartitionInterface
// Size: 0x28 (Inherited: 0x28)
struct ULevelPartitionInterface : UInterface {
};

// Class Engine.Level
// Size: 0x280 (Inherited: 0x28)
struct ULevel : UObject {
	UWorld* OwningWorld; // 0xb8(0x08)
	UModel* Model; // 0xc0(0x08)
	TArray<UModelComponent*> ModelComponents; // 0xc8(0x10)
	ULevelActorContainer* ActorCluster; // 0xd8(0x08)
	int32_t NumTextureStreamingUnbuiltComponents; // 0xe0(0x04)
	int32_t NumTextureStreamingDirtyResources; // 0xe4(0x04)
	ALevelScriptActor* LevelScriptActor; // 0xe8(0x08)
	ANavigationObjectBase* NavListStart; // 0xf0(0x08)
	ANavigationObjectBase* NavListEnd; // 0xf8(0x08)
	TArray<UNavigationDataChunk*> NavDataChunks; // 0x100(0x10)
	float LightmapTotalSize; // 0x110(0x04)
	float ShadowmapTotalSize; // 0x114(0x04)
	TArray<FVector> StaticNavigableGeometry; // 0x118(0x10)
	TArray<FGuid> StreamingTextureGuids; // 0x128(0x10)
	FGuid LevelBuildDataId; // 0x1d0(0x10)
	UMapBuildDataRegistry* MapBuildData; // 0x1e0(0x08)
	FIntVector LightBuildLevelOffset; // 0x1e8(0x0c)
	char bIsLightingScenario : 1; // 0x1f4(0x01)
	char pad_CC_1 : 2; // 0xcc(0x01)
	char bTextureStreamingRotationChanged : 1; // 0x1f4(0x01)
	char bStaticComponentsRegisteredInStreamingManager : 1; // 0x1f4(0x01)
	char bIsVisible : 1; // 0x1f4(0x01)
	AWorldSettings* WorldSettings; // 0x240(0x08)
	TArray<UAssetUserData*> AssetUserData; // 0x250(0x10)
	TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; // 0x270(0x10)
};

// Class Engine.LevelActorContainer
// Size: 0x38 (Inherited: 0x28)
struct ULevelActorContainer : UObject {
	TArray<AActor*> Actors; // 0x28(0x10)
};

// Class Engine.LevelBounds
// Size: 0x230 (Inherited: 0x220)
struct ALevelBounds : AActor {
	UBoxComponent* BoxComponent; // 0x220(0x08)
	bool bAutoUpdateBounds; // 0x228(0x01)
};

// Class Engine.LevelScriptActor
// Size: 0x228 (Inherited: 0x220)
struct ALevelScriptActor : AActor {
	char bInputEnabled : 1; // 0x220(0x01)

	void WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation);
	void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	bool RemoteEvent(FName EventName);
	void LevelReset();
};

// Class Engine.LevelScriptBlueprint
// Size: 0xa0 (Inherited: 0xa0)
struct ULevelScriptBlueprint : UBlueprint {
};

// Class Engine.World
// Size: 0x710 (Inherited: 0x28)
struct UWorld : UObject {
	ULevel* PersistentLevel; // 0x30(0x08)
	UNetDriver* NetDriver; // 0x38(0x08)
	ULineBatchComponent* LineBatcher; // 0x40(0x08)
	ULineBatchComponent* PersistentLineBatcher; // 0x48(0x08)
	ULineBatchComponent* ForegroundLineBatcher; // 0x50(0x08)
	AGameNetworkManager* NetworkManager; // 0x58(0x08)
	UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x60(0x08)
	TArray<UObject*> ExtraReferencedObjects; // 0x68(0x10)
	TArray<UObject*> PerModuleDataObjects; // 0x78(0x10)
	TArray<AActor*> LevelSequenceActors; // 0x88(0x10)
	TArray<ULevelStreaming*> StreamingLevels; // 0x98(0x10)
	FStreamingLevelsToConsider StreamingLevelsToConsider; // 0xa8(0x28)
	FString StreamingLevelsPrefix; // 0xd0(0x10)
	ULevel* CurrentLevelPendingVisibility; // 0xe0(0x08)
	ULevel* CurrentLevelPendingInvisibility; // 0xe8(0x08)
	UDemoNetDriver* DemoNetDriver; // 0xf0(0x08)
	AParticleEventManager* MyParticleEventManager; // 0xf8(0x08)
	APhysicsVolume* DefaultPhysicsVolume; // 0x100(0x08)
	char pad_100_0 : 2; // 0x100(0x01)
	char bAreConstraintsDirty : 1; // 0x11e(0x01)
	UNavigationSystemBase* NavigationSystem; // 0x120(0x08)
	AGameModeBase* AuthorityGameMode; // 0x128(0x08)
	AGameStateBase* GameState; // 0x130(0x08)
	UAISystemBase* AISystem; // 0x138(0x08)
	UAvoidanceManager* AvoidanceManager; // 0x140(0x08)
	TArray<ULevel*> Levels; // 0x148(0x10)
	TArray<FLevelCollection> LevelCollections; // 0x158(0x10)
	UGameInstance* OwningGameInstance; // 0x188(0x08)
	TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances; // 0x190(0x10)
	UCanvas* CanvasForRenderingToTarget; // 0x1a0(0x08)
	UCanvas* CanvasForDrawMaterialToRenderTarget; // 0x1a8(0x08)
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x200(0x10)
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x210(0x10)
	UWorldComposition* WorldComposition; // 0x560(0x08)
	FWorldPSCPool PSCPool; // 0x5f0(0x58)

	AWorldSettings* K2_GetWorldSettings();
	void HandleTimelineScrubbed();
};

// Class Engine.LevelStreaming
// Size: 0x150 (Inherited: 0x28)
struct ULevelStreaming : UObject {
	TSoftObjectPtr<UWorld> WorldAsset; // 0x28(0x28)
	FName PackageNameToLoad; // 0x50(0x08)
	TArray<FName> LODPackageNames; // 0x58(0x10)
	FTransform LevelTransform; // 0x80(0x30)
	int32_t LevelLODIndex; // 0xb0(0x04)
	int32_t StreamingPriority; // 0xb4(0x04)
	char pad_A0_0 : 3; // 0xa0(0x01)
	char bShouldBeVisible : 1; // 0xba(0x01)
	char bShouldBeLoaded : 1; // 0xba(0x01)
	char bLocked : 1; // 0xba(0x01)
	char bIsStatic : 1; // 0xba(0x01)
	char bShouldBlockOnLoad : 1; // 0xba(0x01)
	char bShouldBlockOnUnload : 1; // 0xbb(0x01)
	char bDisableDistanceStreaming : 1; // 0xbb(0x01)
	char bDrawOnLevelStatusMap : 1; // 0xbb(0x01)
	FLinearColor LevelColor; // 0xbc(0x10)
	TArray<ALevelStreamingVolume*> EditorStreamingVolumes; // 0xd0(0x10)
	float MinTimeBetweenVolumeUnloadRequests; // 0xe0(0x04)
	FMulticastInlineDelegate OnLevelLoaded; // 0xe8(0x10)
	FMulticastInlineDelegate OnLevelUnloaded; // 0xf8(0x10)
	FMulticastInlineDelegate OnLevelShown; // 0x108(0x10)
	FMulticastInlineDelegate OnLevelHidden; // 0x118(0x10)
	ULevel* LoadedLevel; // 0x128(0x08)
	ULevel* PendingUnloadLevel; // 0x130(0x08)

	bool ShouldBeLoaded();
	void SetShouldBeVisible(bool bInShouldBeVisible);
	void SetShouldBeLoaded(bool bInShouldBeLoaded);
	void SetPriority(int32_t NewPriority);
	void SetLevelLODIndex(int32_t LODIndex);
	bool IsStreamingStatePending();
	bool IsLevelVisible();
	bool IsLevelLoaded();
	FName GetWorldAssetPackageFName();
	ULevel* GetLoadedLevel();
	ALevelScriptActor* GetLevelScriptActor();
	ULevelStreaming* CreateInstance(FString UniqueInstanceName);
};

// Class Engine.LevelStreamingAlwaysLoaded
// Size: 0x150 (Inherited: 0x150)
struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
};

// Class Engine.LevelStreamingDynamic
// Size: 0x150 (Inherited: 0x150)
struct ULevelStreamingDynamic : ULevelStreaming {
	char bInitiallyLoaded : 1; // 0x148(0x01)
	char bInitiallyVisible : 1; // 0x148(0x01)

	ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, FVector Location, FRotator Rotation, bool bOutSuccess);
	ULevelStreamingDynamic* LoadLevelInstance(UObject* WorldContextObject, FString LevelName, FVector Location, FRotator Rotation, bool bOutSuccess);
};

// Class Engine.LevelStreamingPersistent
// Size: 0x150 (Inherited: 0x150)
struct ULevelStreamingPersistent : ULevelStreaming {
};

// Class Engine.LevelStreamingVolume
// Size: 0x270 (Inherited: 0x258)
struct ALevelStreamingVolume : AVolume {
	TArray<FName> StreamingLevelNames; // 0x258(0x10)
	char bEditorPreVisOnly : 1; // 0x268(0x01)
	char bDisabled : 1; // 0x268(0x01)
	enum class EStreamingVolumeUsage StreamingUsage; // 0x26c(0x01)
};

// Class Engine.LightmappedSurfaceCollection
// Size: 0x40 (Inherited: 0x28)
struct ULightmappedSurfaceCollection : UObject {
	UModel* SourceModel; // 0x28(0x08)
	TArray<int32_t> Surfaces; // 0x30(0x10)
};

// Class Engine.LightMapTexture2D
// Size: 0xf0 (Inherited: 0xe8)
struct ULightMapTexture2D : UTexture2D {
};

// Class Engine.LightmassCharacterIndirectDetailVolume
// Size: 0x258 (Inherited: 0x258)
struct ALightmassCharacterIndirectDetailVolume : AVolume {
};

// Class Engine.LightmassImportanceVolume
// Size: 0x258 (Inherited: 0x258)
struct ALightmassImportanceVolume : AVolume {
};

// Class Engine.LightmassPortal
// Size: 0x228 (Inherited: 0x220)
struct ALightmassPortal : AActor {
	ULightmassPortalComponent* PortalComponent; // 0x220(0x08)
};

// Class Engine.LightmassPortalComponent
// Size: 0x200 (Inherited: 0x1f0)
struct ULightmassPortalComponent : USceneComponent {
	UBoxComponent* PreviewBox; // 0x1f0(0x08)
};

// Class Engine.LightmassPrimitiveSettingsObject
// Size: 0x40 (Inherited: 0x28)
struct ULightmassPrimitiveSettingsObject : UObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x28(0x18)
};

// Class Engine.LineBatchComponent
// Size: 0x430 (Inherited: 0x3f0)
struct ULineBatchComponent : UPrimitiveComponent {
};

// Class Engine.LocalPlayer
// Size: 0x258 (Inherited: 0x48)
struct ULocalPlayer : UPlayer {
	UGameViewportClient* ViewportClient; // 0x70(0x08)
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x94(0x01)
	APlayerController* PendingLevelPlayerControllerClass; // 0x98(0x08)
	char bSentSplitJoin : 1; // 0xa0(0x01)
	int32_t ControllerId; // 0xb8(0x04)
};

// Class Engine.LocalPlayerSubsystem
// Size: 0x30 (Inherited: 0x30)
struct ULocalPlayerSubsystem : USubsystem {
};

// Class Engine.LODActor
// Size: 0x2a8 (Inherited: 0x220)
struct ALODActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220(0x08)
	TMap<UMaterialInterface*, UInstancedStaticMeshComponent*> ImpostersStaticMeshComponents; // 0x228(0x50)
	UHLODProxy* Proxy; // 0x278(0x08)
	FName Key; // 0x280(0x08)
	float LODDrawDistance; // 0x288(0x04)
	int32_t LODLevel; // 0x28c(0x04)
	TArray<AActor*> SubActors; // 0x290(0x10)
	char CachedNumHLODLevels; // 0x2a0(0x01)
};

// Class Engine.MapBuildDataRegistry
// Size: 0x238 (Inherited: 0x28)
struct UMapBuildDataRegistry : UObject {
	enum class ELightingBuildQuality LevelLightingQuality; // 0x28(0x01)
};

// Class Engine.Material
// Size: 0x4e8 (Inherited: 0x88)
struct UMaterial : UMaterialInterface {
	UPhysicalMaterial* PhysMaterial; // 0x88(0x08)
	UPhysicalMaterialMask* PhysMaterialMask; // 0x90(0x08)
	UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0x98(0x40)
	FScalarMaterialInput Metallic; // 0xd8(0x0c)
	FScalarMaterialInput Specular; // 0xec(0x0c)
	FScalarMaterialInput Anisotropy; // 0x100(0x0c)
	FVectorMaterialInput Normal; // 0x114(0x0c)
	FVectorMaterialInput Tangent; // 0x128(0x0c)
	FColorMaterialInput EmissiveColor; // 0x13c(0x0c)
	enum class EMaterialDomain MaterialDomain; // 0x150(0x01)
	enum class EBlendMode BlendMode; // 0x151(0x01)
	enum class EDecalBlendMode DecalBlendMode; // 0x152(0x01)
	enum class EMaterialDecalResponse MaterialDecalResponse; // 0x153(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x154(0x01)
	char bCastDynamicShadowAsMasked : 1; // 0x155(0x01)
	FMaterialShadingModelField ShadingModels; // 0x156(0x02)
	float OpacityMaskClipValue; // 0x158(0x04)
	FVectorMaterialInput WorldPositionOffset; // 0x15c(0x0c)
	FScalarMaterialInput Refraction; // 0x170(0x0c)
	FMaterialAttributesInput MaterialAttributes; // 0x184(0x10)
	FScalarMaterialInput PixelDepthOffset; // 0x19c(0x0c)
	FShadingModelMaterialInput ShadingModelFromMaterialExpression; // 0x1b0(0x0c)
	char bEnableSeparateTranslucency : 1; // 0x1c4(0x01)
	char bEnableResponsiveAA : 1; // 0x1c4(0x01)
	char bScreenSpaceReflections : 1; // 0x1c4(0x01)
	char bContactShadows : 1; // 0x1c4(0x01)
	char TwoSided : 1; // 0x1c4(0x01)
	char DitheredLODTransition : 1; // 0x1c4(0x01)
	char DitherOpacityMask : 1; // 0x1c4(0x01)
	char pad_16C_0 : 7; // 0x16c(0x01)
	char bAllowNegativeEmissiveColor : 1; // 0x1c4(0x01)
	enum class ETranslucencyLightingMode TranslucencyLightingMode; // 0x1c5(0x01)
	char bEnableMobileSeparateTranslucency : 1; // 0x1c6(0x01)
	int32_t NumCustomizedUVs; // 0x1c8(0x04)
	float TranslucencyDirectionalLightingIntensity; // 0x1cc(0x04)
	float TranslucentShadowDensityScale; // 0x1d0(0x04)
	float TranslucentSelfShadowDensityScale; // 0x1d4(0x04)
	float TranslucentSelfShadowSecondDensityScale; // 0x1d8(0x04)
	float TranslucentSelfShadowSecondOpacity; // 0x1dc(0x04)
	float TranslucentBackscatteringExponent; // 0x1e0(0x04)
	FLinearColor TranslucentMultipleScatteringExtinction; // 0x1e4(0x10)
	float TranslucentShadowStartOffset; // 0x1f4(0x04)
	char bDisableDepthTest : 1; // 0x1f8(0x01)
	char bWriteOnlyAlpha : 1; // 0x1f8(0x01)
	char bGenerateSphericalParticleNormals : 1; // 0x1f8(0x01)
	char bTangentSpaceNormal : 1; // 0x1f8(0x01)
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x1f8(0x01)
	char bBlockGI : 1; // 0x1f8(0x01)
	char bUsedAsSpecialEngineMaterial : 1; // 0x1f8(0x01)
	char pad_19F_0 : 7; // 0x19f(0x01)
	char bUsedWithSkeletalMesh : 1; // 0x1f8(0x01)
	char bUsedWithEditorCompositing : 1; // 0x1f9(0x01)
	char bUsedWithParticleSprites : 1; // 0x1f9(0x01)
	char bUsedWithBeamTrails : 1; // 0x1f9(0x01)
	char bUsedWithMeshParticles : 1; // 0x1f9(0x01)
	char bUsedWithNiagaraSprites : 1; // 0x1f9(0x01)
	char bUsedWithNiagaraRibbons : 1; // 0x1f9(0x01)
	char bUsedWithNiagaraMeshParticles : 1; // 0x1f9(0x01)
	char bUsedWithGeometryCache : 1; // 0x1f9(0x01)
	char bUsedWithStaticLighting : 1; // 0x1fa(0x01)
	char bUsedWithMorphTargets : 1; // 0x1fa(0x01)
	char bUsedWithSplineMeshes : 1; // 0x1fa(0x01)
	char bUsedWithInstancedStaticMeshes : 1; // 0x1fa(0x01)
	char bUsedWithGeometryCollections : 1; // 0x1fa(0x01)
	char bUsesDistortion : 1; // 0x1fa(0x01)
	char bUsedWithClothing : 1; // 0x1fa(0x01)
	char bUsedWithWater : 1; // 0x1fc(0x01)
	char pad_1A2_0 : 1; // 0x1a2(0x01)
	char bUsedWithHairStrands : 1; // 0x1fc(0x01)
	char bUsedWithLidarPointCloud : 1; // 0x1fc(0x01)
	char bUsedWithUI : 1; // 0x200(0x01)
	char bAutomaticallySetUsageInEditor : 1; // 0x200(0x01)
	char bFullyRough : 1; // 0x200(0x01)
	char bUseFullPrecision : 1; // 0x200(0x01)
	char bUseLightmapDirectionality : 1; // 0x200(0x01)
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 1; // 0x204(0x01)
	char bUseHQForwardReflections : 1; // 0x208(0x01)
	char bUsePlanarForwardReflections : 1; // 0x208(0x01)
	char bNormalCurvatureToRoughness : 1; // 0x208(0x01)
	enum class EMaterialTessellationMode D3D11TessellationMode; // 0x209(0x01)
	char bEnableCrackFreeDisplacement : 1; // 0x20a(0x01)
	char bEnableAdaptiveTessellation : 1; // 0x20a(0x01)
	char AllowTranslucentCustomDepthWrites : 1; // 0x20a(0x01)
	char Wireframe : 1; // 0x20a(0x01)
	enum class EMaterialShadingRate ShadingRate; // 0x20b(0x01)
	char bCanMaskedBeAssumedOpaque : 1; // 0x20c(0x01)
	char bIsMasked : 1; // 0x20c(0x01)
	char bIsPreviewMaterial : 1; // 0x20c(0x01)
	char bIsFunctionPreviewMaterial : 1; // 0x20c(0x01)
	char bUseMaterialAttributes : 1; // 0x20c(0x01)
	char bCastRayTracedShadows : 1; // 0x20c(0x01)
	char bUseTranslucencyVertexFog : 1; // 0x20c(0x01)
	char bIsSky : 1; // 0x20c(0x01)
	char bComputeFogPerPixel : 1; // 0x20d(0x01)
	char bOutputTranslucentVelocity : 1; // 0x20d(0x01)
	char bAllowDevelopmentShaderCompile : 1; // 0x20d(0x01)
	char bIsMaterialEditorStatsMaterial : 1; // 0x20d(0x01)
	enum class EBlendableLocation BlendableLocation; // 0x20e(0x01)
	char BlendableOutputAlpha : 1; // 0x20f(0x01)
	char bEnableStencilTest : 1; // 0x20f(0x01)
	enum class EMaterialStencilCompare StencilCompare; // 0x210(0x01)
	char StencilRefValue; // 0x211(0x01)
	enum class ERefractionMode RefractionMode; // 0x212(0x01)
	int32_t BlendablePriority; // 0x214(0x04)
	char bIsBlendable : 1; // 0x218(0x01)
	uint32_t UsageFlagWarnings; // 0x21c(0x04)
	float RefractionDepthBias; // 0x220(0x04)
	FGuid StateId; // 0x224(0x10)
	float MaxDisplacement; // 0x234(0x04)
	FMaterialCachedExpressionData CachedExpressionData; // 0x2c0(0x228)
};

// Class Engine.MaterialBillboardComponent
// Size: 0x400 (Inherited: 0x3f0)
struct UMaterialBillboardComponent : UPrimitiveComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x3f0(0x10)

	void SetElements(TArray<FMaterialSpriteElement> NewElements);
	void AddElement(UMaterialInterface* Material, UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, UCurveFloat* DistanceToSizeCurve);
};

// Class Engine.MaterialExpressionAbs
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionAbs : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionActorPositionWS
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionActorPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionAdd
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionAdd : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionTextureBase
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionTextureBase : UMaterialExpression {
	UTexture* Texture; // 0x40(0x08)
	enum class EMaterialSamplerType SamplerType; // 0x48(0x01)
	char IsDefaultMeshpaintTexture : 1; // 0x49(0x01)
};

// Class Engine.MaterialExpressionTextureSample
// Size: 0xd0 (Inherited: 0x50)
struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	FExpressionInput Coordinates; // 0x50(0x0c)
	FExpressionInput TextureObject; // 0x64(0x0c)
	FExpressionInput MipValue; // 0x78(0x0c)
	FExpressionInput CoordinatesDX; // 0x8c(0x0c)
	FExpressionInput CoordinatesDY; // 0xa0(0x0c)
	FExpressionInput AutomaticViewMipBiasValue; // 0xb4(0x0c)
	enum class ETextureMipValueMode MipValueMode; // 0xc8(0x01)
	enum class ESamplerSourceMode SamplerSource; // 0xc9(0x01)
	char AutomaticViewMipBias : 1; // 0xca(0x01)
	char ConstCoordinate; // 0xcb(0x01)
	int32_t ConstMipValue; // 0xcc(0x04)
};

// Class Engine.MaterialExpressionTextureSampleParameter
// Size: 0xf0 (Inherited: 0xd0)
struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	FName ParameterName; // 0xd0(0x08)
	FGuid ExpressionGUID; // 0xd8(0x10)
	FName Group; // 0xe8(0x08)
};

// Class Engine.MaterialExpressionTextureSampleParameter2D
// Size: 0xf0 (Inherited: 0xf0)
struct UMaterialExpressionTextureSampleParameter2D : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionAntialiasedTextureMask
// Size: 0xf8 (Inherited: 0xf0)
struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0xf0(0x04)
	enum class ETextureColorChannel Channel; // 0xf4(0x01)
};

// Class Engine.MaterialExpressionAppendVector
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionAppendVector : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionArccosine
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArccosine : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionArccosineFast
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArccosineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionArcsine
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArcsine : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionArcsineFast
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArcsineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionArctangent
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArctangent : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionArctangent2
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionArctangent2 : UMaterialExpression {
	FExpressionInput Y; // 0x40(0x0c)
	FExpressionInput X; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionArctangent2Fast
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	FExpressionInput Y; // 0x40(0x0c)
	FExpressionInput X; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionArctangentFast
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArctangentFast : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionAtmosphericFogColor
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionAtmosphericLightColor
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionAtmosphericLightColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionAtmosphericLightVector
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionAtmosphericLightVector : UMaterialExpression {
};

// Class Engine.MaterialExpressionBentNormalCustomOutput
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionBlackBody
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionBlackBody : UMaterialExpression {
	FExpressionInput Temp; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionBlendMaterialAttributes
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput A; // 0x40(0x10)
	FMaterialAttributesInput B; // 0x58(0x10)
	FExpressionInput alpha; // 0x70(0x0c)
	enum class EMaterialAttributeBlend PixelAttributeBlendType; // 0x84(0x01)
	enum class EMaterialAttributeBlend VertexAttributeBlendType; // 0x85(0x01)
};

// Class Engine.MaterialExpressionBreakMaterialAttributes
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40(0x10)
};

// Class Engine.MaterialExpressionBumpOffset
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40(0x0c)
	FExpressionInput Height; // 0x54(0x0c)
	FExpressionInput HeightRatioInput; // 0x68(0x0c)
	float HeightRatio; // 0x7c(0x04)
	float ReferencePlane; // 0x80(0x04)
	uint32_t ConstCoordinate; // 0x84(0x04)
};

// Class Engine.MaterialExpressionCameraPositionWS
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionCameraPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionCameraVectorWS
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionCameraVectorWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionCeil
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionCeil : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionParameter
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionParameter : UMaterialExpression {
	FName ParameterName; // 0x40(0x08)
	FGuid ExpressionGUID; // 0x48(0x10)
};

// Class Engine.MaterialExpressionVectorParameter
// Size: 0x70 (Inherited: 0x58)
struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	FLinearColor DefaultValue; // 0x58(0x10)
	bool bUseCustomPrimitiveData; // 0x68(0x01)
	char PrimitiveDataIndex; // 0x69(0x01)
};

// Class Engine.MaterialExpressionChannelMaskParameter
// Size: 0x88 (Inherited: 0x70)
struct UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter {
	enum class EChannelMaskParameterColor MaskChannel; // 0x70(0x01)
	FExpressionInput Input; // 0x74(0x0c)
};

// Class Engine.MaterialExpressionClamp
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionClamp : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
	FExpressionInput Min; // 0x54(0x0c)
	FExpressionInput Max; // 0x68(0x0c)
	enum class EClampMode ClampMode; // 0x7c(0x01)
	float MinDefault; // 0x80(0x04)
	float MaxDefault; // 0x84(0x04)
};

// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionCollectionParameter
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	UMaterialParameterCollection* Collection; // 0x40(0x08)
	FName ParameterName; // 0x48(0x08)
	FGuid ParameterId; // 0x50(0x10)
};

// Class Engine.MaterialExpressionComment
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; // 0x40(0x04)
	int32_t SizeY; // 0x44(0x04)
	FString Text; // 0x48(0x10)
	FLinearColor CommentColor; // 0x58(0x10)
	int32_t FontSize; // 0x68(0x04)
};

// Class Engine.MaterialExpressionComponentMask
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionComponentMask : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
	char R : 1; // 0x54(0x01)
	char G : 1; // 0x54(0x01)
	char B : 1; // 0x54(0x01)
	char A : 1; // 0x54(0x01)
};

// Class Engine.MaterialExpressionConstant
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x40(0x04)
};

// Class Engine.MaterialExpressionConstant2Vector
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x40(0x04)
	float G; // 0x44(0x04)
};

// Class Engine.MaterialExpressionConstant3Vector
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40(0x10)
};

// Class Engine.MaterialExpressionConstant4Vector
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40(0x10)
};

// Class Engine.MaterialExpressionConstantBiasScale
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
	float Bias; // 0x54(0x04)
	float Scale; // 0x58(0x04)
};

// Class Engine.MaterialExpressionCosine
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionCosine : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
	float Period; // 0x54(0x04)
};

// Class Engine.MaterialExpressionCrossProduct
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionCrossProduct : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionScalarParameter
// Size: 0x60 (Inherited: 0x58)
struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0x58(0x04)
	bool bUseCustomPrimitiveData; // 0x5c(0x01)
	char PrimitiveDataIndex; // 0x5d(0x01)
};

// Class Engine.MaterialExpressionCurveAtlasRowParameter
// Size: 0x88 (Inherited: 0x60)
struct UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter {
	UCurveLinearColor* Curve; // 0x60(0x08)
	UCurveLinearColorAtlas* Atlas; // 0x68(0x08)
	FExpressionInput InputTime; // 0x70(0x0c)
};

// Class Engine.MaterialExpressionCustom
// Size: 0x98 (Inherited: 0x40)
struct UMaterialExpressionCustom : UMaterialExpression {
	FString code; // 0x40(0x10)
	enum class ECustomMaterialOutputType OutputType; // 0x50(0x01)
	FString Description; // 0x58(0x10)
	TArray<FCustomInput> Inputs; // 0x68(0x10)
	TArray<FCustomDefine> AdditionalDefines; // 0x78(0x10)
	TArray<FString> IncludeFilePaths; // 0x88(0x10)
};

// Class Engine.MaterialExpressionDDX
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDDX : UMaterialExpression {
	FExpressionInput Value; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionDDY
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDDY : UMaterialExpression {
	FExpressionInput Value; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionDecalDerivative
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionDecalDerivative : UMaterialExpression {
};

// Class Engine.MaterialExpressionDecalLifetimeOpacity
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionDecalLifetimeOpacity : UMaterialExpression {
};

// Class Engine.MaterialExpressionDecalMipmapLevel
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	FExpressionInput TextureSize; // 0x40(0x0c)
	float ConstWidth; // 0x54(0x04)
	float ConstHeight; // 0x58(0x04)
};

// Class Engine.MaterialExpressionDeltaTime
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionDeltaTime : UMaterialExpression {
};

// Class Engine.MaterialExpressionDepthFade
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionDepthFade : UMaterialExpression {
	FExpressionInput InOpacity; // 0x40(0x0c)
	FExpressionInput FadeDistance; // 0x54(0x0c)
	float OpacityDefault; // 0x68(0x04)
	float FadeDistanceDefault; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	enum class EDepthOfFieldFunctionValue FunctionValue; // 0x40(0x01)
	FExpressionInput Depth; // 0x44(0x0c)
};

// Class Engine.MaterialExpressionDeriveNormalZ
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	FExpressionInput InXY; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionDesaturation
// Size: 0x78 (Inherited: 0x40)
struct UMaterialExpressionDesaturation : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
	FExpressionInput Fraction; // 0x54(0x0c)
	FLinearColor LuminanceFactors; // 0x68(0x10)
};

// Class Engine.MaterialExpressionDistance
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionDistance : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionDistanceCullFade
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionDistanceCullFade : UMaterialExpression {
};

// Class Engine.MaterialExpressionDistanceFieldGradient
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	FExpressionInput Position; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionDistanceToNearestSurface
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	FExpressionInput Position; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionDivide
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionDivide : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionDotProduct
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionDotProduct : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionDynamicParameter
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	TArray<FString> ParamNames; // 0x40(0x10)
	FLinearColor DefaultValue; // 0x50(0x10)
	uint32_t ParameterIndex; // 0x60(0x04)
};

// Class Engine.MaterialExpressionEyeAdaptation
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionEyeAdaptation : UMaterialExpression {
};

// Class Engine.MaterialExpressionFeatureLevelSwitch
// Size: 0xa8 (Inherited: 0x40)
struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40(0x0c)
	FExpressionInput Inputs[0x4]; // 0x54(0x30)
};

// Class Engine.MaterialExpressionFloor
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionFloor : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionFmod
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionFmod : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionFontSample
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionFontSample : UMaterialExpression {
	UFont* Font; // 0x40(0x08)
	int32_t FontTexturePage; // 0x48(0x04)
};

// Class Engine.MaterialExpressionFontSampleParameter
// Size: 0x70 (Inherited: 0x50)
struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	FName ParameterName; // 0x50(0x08)
	FGuid ExpressionGUID; // 0x58(0x10)
	FName Group; // 0x68(0x08)
};

// Class Engine.MaterialExpressionFrac
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionFrac : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionFresnel
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionFresnel : UMaterialExpression {
	FExpressionInput ExponentIn; // 0x40(0x0c)
	float Exponent; // 0x54(0x04)
	FExpressionInput BaseReflectFractionIn; // 0x58(0x0c)
	float BaseReflectFraction; // 0x6c(0x04)
	FExpressionInput Normal; // 0x70(0x0c)
};

// Class Engine.MaterialExpressionFunctionInput
// Size: 0xc0 (Inherited: 0x40)
struct UMaterialExpressionFunctionInput : UMaterialExpression {
	FExpressionInput Preview; // 0x40(0x0c)
	FName InputName; // 0x54(0x08)
	FString Description; // 0x60(0x10)
	FGuid ID; // 0x70(0x10)
	enum class EFunctionInputType InputType; // 0x80(0x01)
	FVector4 PreviewValue; // 0x90(0x10)
	char bUsePreviewValueAsDefault : 1; // 0xa0(0x01)
	int32_t SortPriority; // 0xa4(0x04)
	char bCompilingFunctionPreview : 1; // 0xa8(0x01)
};

// Class Engine.MaterialExpressionFunctionOutput
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	FName OutputName; // 0x40(0x08)
	FString Description; // 0x48(0x10)
	int32_t SortPriority; // 0x58(0x04)
	FExpressionInput A; // 0x5c(0x0c)
	char bLastPreviewed : 1; // 0x70(0x01)
	FGuid ID; // 0x74(0x10)
};

// Class Engine.MaterialExpressionGetMaterialAttributes
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40(0x10)
	TArray<FGuid> AttributeGetTypes; // 0x58(0x10)
};

// Class Engine.MaterialExpressionGIReplace
// Size: 0x80 (Inherited: 0x40)
struct UMaterialExpressionGIReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40(0x0c)
	FExpressionInput StaticIndirect; // 0x54(0x0c)
	FExpressionInput DynamicIndirect; // 0x68(0x0c)
};

// Class Engine.MaterialExpressionHairAttributes
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionHairAttributes : UMaterialExpression {
};

// Class Engine.MaterialExpressionIf
// Size: 0xb0 (Inherited: 0x40)
struct UMaterialExpressionIf : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
	FExpressionInput AGreaterThanB; // 0x68(0x0c)
	FExpressionInput AEqualsB; // 0x7c(0x0c)
	FExpressionInput ALessThanB; // 0x90(0x0c)
	float EqualsThreshold; // 0xa4(0x04)
	float ConstB; // 0xa8(0x04)
	float ConstAEqualsB; // 0xac(0x04)
};

// Class Engine.MaterialExpressionLightmapUVs
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionLightmapUVs : UMaterialExpression {
};

// Class Engine.MaterialExpressionLightmassReplace
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	FExpressionInput Realtime; // 0x40(0x0c)
	FExpressionInput Lightmass; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionLightVector
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionLightVector : UMaterialExpression {
};

// Class Engine.MaterialExpressionLinearInterpolate
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
	FExpressionInput alpha; // 0x68(0x0c)
	float ConstA; // 0x7c(0x04)
	float ConstB; // 0x80(0x04)
	float ConstAlpha; // 0x84(0x04)
};

// Class Engine.MaterialExpressionLogarithm10
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLogarithm10 : UMaterialExpression {
	FExpressionInput X; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionLogarithm2
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	FExpressionInput X; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionMakeMaterialAttributes
// Size: 0x270 (Inherited: 0x40)
struct UMaterialExpressionMakeMaterialAttributes : UMaterialExpression {
	FExpressionInput BaseColor; // 0x40(0x0c)
	FExpressionInput Metallic; // 0x54(0x0c)
	FExpressionInput Specular; // 0x68(0x0c)
	FExpressionInput Roughness; // 0x7c(0x0c)
	FExpressionInput Anisotropy; // 0x90(0x0c)
	FExpressionInput EmissiveColor; // 0xa4(0x0c)
	FExpressionInput Opacity; // 0xb8(0x0c)
	FExpressionInput OpacityMask; // 0xcc(0x0c)
	FExpressionInput Normal; // 0xe0(0x0c)
	FExpressionInput Tangent; // 0xf4(0x0c)
	FExpressionInput WorldPositionOffset; // 0x108(0x0c)
	FExpressionInput WorldDisplacement; // 0x11c(0x0c)
	FExpressionInput TessellationMultiplier; // 0x130(0x0c)
	FExpressionInput SubsurfaceColor; // 0x144(0x0c)
	FExpressionInput ClearCoat; // 0x158(0x0c)
	FExpressionInput ClearCoatRoughness; // 0x16c(0x0c)
	FExpressionInput AmbientOcclusion; // 0x180(0x0c)
	FExpressionInput Refraction; // 0x194(0x0c)
	FExpressionInput CustomizedUVs[0x8]; // 0x1a8(0x60)
	FExpressionInput PixelDepthOffset; // 0x248(0x0c)
	FExpressionInput ShadingModel; // 0x25c(0x0c)
};

// Class Engine.MaterialExpressionMapARPassthroughCameraUV
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionMaterialAttributeLayers
// Size: 0xe8 (Inherited: 0x40)
struct UMaterialExpressionMaterialAttributeLayers : UMaterialExpression {
	FName ParameterName; // 0x40(0x08)
	FGuid ExpressionGUID; // 0x48(0x10)
	FMaterialAttributesInput Input; // 0x58(0x10)
	FMaterialLayersFunctions DefaultLayers; // 0x70(0x40)
	TArray<UMaterialExpressionMaterialFunctionCall*> LayerCallers; // 0xb0(0x10)
	int32_t NumActiveLayerCallers; // 0xc0(0x04)
	TArray<UMaterialExpressionMaterialFunctionCall*> BlendCallers; // 0xc8(0x10)
	int32_t NumActiveBlendCallers; // 0xd8(0x04)
	bool bIsLayerGraphBuilt; // 0xdc(0x01)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	UMaterialFunctionInterface* MaterialFunction; // 0x40(0x08)
	FMaterialParameterInfo FunctionParameterInfo; // 0x48(0x10)
};

// Class Engine.MaterialExpressionMaterialLayerOutput
// Size: 0x88 (Inherited: 0x88)
struct UMaterialExpressionMaterialLayerOutput : UMaterialExpressionFunctionOutput {
};

// Class Engine.MaterialExpressionMaterialProxyReplace
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	FExpressionInput Realtime; // 0x40(0x0c)
	FExpressionInput MaterialProxy; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionMax
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionMax : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionMin
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionMin : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionMultiply
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionMultiply : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionNoise
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionNoise : UMaterialExpression {
	FExpressionInput Position; // 0x40(0x0c)
	FExpressionInput FilterWidth; // 0x54(0x0c)
	float Scale; // 0x68(0x04)
	int32_t Quality; // 0x6c(0x04)
	enum class ENoiseFunction NoiseFunction; // 0x70(0x01)
	char bTurbulence : 1; // 0x74(0x01)
	int32_t Levels; // 0x78(0x04)
	float OutputMin; // 0x7c(0x04)
	float OutputMax; // 0x80(0x04)
	float LevelScale; // 0x84(0x04)
	char bTiling : 1; // 0x88(0x01)
	uint32_t RepeatSize; // 0x8c(0x04)
};

// Class Engine.MaterialExpressionNormalize
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionNormalize : UMaterialExpression {
	FExpressionInput VectorInput; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionObjectBounds
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionObjectBounds : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectOrientation
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionObjectOrientation : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectPositionWS
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionObjectPositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionObjectRadius
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionObjectRadius : UMaterialExpression {
};

// Class Engine.MaterialExpressionOneMinus
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionOneMinus : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionPanner
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionPanner : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40(0x0c)
	FExpressionInput Time; // 0x54(0x0c)
	FExpressionInput Speed; // 0x68(0x0c)
	float SpeedX; // 0x7c(0x04)
	float SpeedY; // 0x80(0x04)
	uint32_t ConstCoordinate; // 0x84(0x04)
	bool bFractionalPart; // 0x88(0x01)
};

// Class Engine.MaterialExpressionParticleColor
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionParticleColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleDirection
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionParticleDirection : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleMacroUV
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionParticleMacroUV : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleMotionBlurFade
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionParticleMotionBlurFade : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticlePositionWS
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionParticlePositionWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleRadius
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionParticleRadius : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleRandom
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionParticleRandom : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleRelativeTime
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionParticleRelativeTime : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleSize
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionParticleSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleSpeed
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionParticleSpeed : UMaterialExpression {
};

// Class Engine.MaterialExpressionParticleSubUV
// Size: 0xd8 (Inherited: 0xd0)
struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 1; // 0xd0(0x01)
};

// Class Engine.MaterialExpressionParticleSubUVProperties
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionParticleSubUVProperties : UMaterialExpression {
};

// Class Engine.MaterialExpressionPerInstanceCustomData
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionPerInstanceCustomData : UMaterialExpression {
	FExpressionInput DefaultValue; // 0x40(0x0c)
	float ConstDefaultValue; // 0x54(0x04)
	uint32_t DataIndex; // 0x58(0x04)
};

// Class Engine.MaterialExpressionPerInstanceFadeAmount
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionPerInstanceFadeAmount : UMaterialExpression {
};

// Class Engine.MaterialExpressionPerInstanceRandom
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionPerInstanceRandom : UMaterialExpression {
};

// Class Engine.MaterialExpressionPixelDepth
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionPixelDepth : UMaterialExpression {
};

// Class Engine.MaterialExpressionPixelNormalWS
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionPixelNormalWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionPower
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionPower : UMaterialExpression {
	FExpressionInput Base; // 0x40(0x0c)
	FExpressionInput Exponent; // 0x54(0x0c)
	float ConstExponent; // 0x68(0x04)
};

// Class Engine.MaterialExpressionPrecomputedAOMask
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionPrecomputedAOMask : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreSkinnedLocalBounds
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionPreSkinnedLocalBounds : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreSkinnedNormal
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionPreSkinnedNormal : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreSkinnedPosition
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionPreSkinnedPosition : UMaterialExpression {
};

// Class Engine.MaterialExpressionPreviousFrameSwitch
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	FExpressionInput CurrentFrame; // 0x40(0x0c)
	FExpressionInput PreviousFrame; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionQualitySwitch
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40(0x0c)
	FExpressionInput Inputs[0x3]; // 0x54(0x24)
};

// Class Engine.MaterialExpressionRayTracingQualitySwitch
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression {
	FExpressionInput Normal; // 0x40(0x0c)
	FExpressionInput RayTraced; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionReflectionVectorWS
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	FExpressionInput CustomWorldNormal; // 0x40(0x0c)
	char bNormalizeCustomWorldNormal : 1; // 0x54(0x01)
};

// Class Engine.MaterialExpressionReroute
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionReroute : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionRotateAboutAxis
// Size: 0x98 (Inherited: 0x40)
struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	FExpressionInput NormalizedRotationAxis; // 0x40(0x0c)
	FExpressionInput RotationAngle; // 0x54(0x0c)
	FExpressionInput PivotPoint; // 0x68(0x0c)
	FExpressionInput Position; // 0x7c(0x0c)
	float Period; // 0x90(0x04)
};

// Class Engine.MaterialExpressionRotator
// Size: 0x78 (Inherited: 0x40)
struct UMaterialExpressionRotator : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40(0x0c)
	FExpressionInput Time; // 0x54(0x0c)
	float CenterX; // 0x68(0x04)
	float CenterY; // 0x6c(0x04)
	float Speed; // 0x70(0x04)
	uint32_t ConstCoordinate; // 0x74(0x04)
};

// Class Engine.MaterialExpressionRound
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionRound : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureOutput
// Size: 0xd0 (Inherited: 0x40)
struct UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput {
	FExpressionInput BaseColor; // 0x40(0x0c)
	FExpressionInput Specular; // 0x54(0x0c)
	FExpressionInput Roughness; // 0x68(0x0c)
	FExpressionInput Normal; // 0x7c(0x0c)
	FExpressionInput WorldHeight; // 0x90(0x0c)
	FExpressionInput Opacity; // 0xa4(0x0c)
	FExpressionInput Mask; // 0xb8(0x0c)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureReplace
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40(0x0c)
	FExpressionInput VirtualTextureOutput; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSample
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionRuntimeVirtualTextureSample : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40(0x0c)
	FExpressionInput WorldPosition; // 0x54(0x0c)
	FExpressionInput MipValue; // 0x68(0x0c)
	URuntimeVirtualTexture* VirtualTexture; // 0x80(0x08)
	enum class ERuntimeVirtualTextureMaterialType MaterialType; // 0x88(0x01)
	bool bSinglePhysicalSpace; // 0x89(0x01)
	enum class ERuntimeVirtualTextureMipValueMode MipValueMode; // 0x8a(0x01)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter
// Size: 0xb0 (Inherited: 0x90)
struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample {
	FName ParameterName; // 0x90(0x08)
	FGuid ExpressionGUID; // 0x98(0x10)
	FName Group; // 0xa8(0x08)
};

// Class Engine.MaterialExpressionSaturate
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSaturate : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionSceneColor
// Size: 0x78 (Inherited: 0x40)
struct UMaterialExpressionSceneColor : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x40(0x01)
	FExpressionInput Input; // 0x44(0x0c)
	FExpressionInput OffsetFraction; // 0x58(0x0c)
	FVector2D ConstInput; // 0x6c(0x08)
};

// Class Engine.MaterialExpressionSceneDepth
// Size: 0x78 (Inherited: 0x40)
struct UMaterialExpressionSceneDepth : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x40(0x01)
	FExpressionInput Input; // 0x44(0x0c)
	FExpressionInput Coordinates; // 0x58(0x0c)
	FVector2D ConstInput; // 0x6c(0x08)
};

// Class Engine.MaterialExpressionSceneTexelSize
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionSceneTexelSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionSceneTexture
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSceneTexture : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40(0x0c)
	enum class ESceneTextureId SceneTextureId; // 0x54(0x01)
	bool bFiltered; // 0x55(0x01)
};

// Class Engine.MaterialExpressionScreenPosition
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionScreenPosition : UMaterialExpression {
};

// Class Engine.MaterialExpressionSetMaterialAttributes
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	TArray<FExpressionInput> Inputs; // 0x40(0x10)
	TArray<FGuid> AttributeSetTypes; // 0x50(0x10)
};

// Class Engine.MaterialExpressionShaderStageSwitch
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionShaderStageSwitch : UMaterialExpression {
	FExpressionInput PixelShader; // 0x40(0x0c)
	FExpressionInput VertexShader; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionShadingModel
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionShadingModel : UMaterialExpression {
	enum class EMaterialShadingModel ShadingModel; // 0x40(0x01)
};

// Class Engine.MaterialExpressionShadingPathSwitch
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionShadingPathSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40(0x0c)
	FExpressionInput Inputs[0x3]; // 0x54(0x24)
};

// Class Engine.MaterialExpressionShadowReplace
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionShadowReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40(0x0c)
	FExpressionInput Shadow; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionSign
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSign : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionSine
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSine : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
	float Period; // 0x54(0x04)
};

// Class Engine.MaterialExpressionSingleLayerWaterMaterialOutput
// Size: 0x80 (Inherited: 0x40)
struct UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput ScatteringCoefficients; // 0x40(0x0c)
	FExpressionInput AbsorptionCoefficients; // 0x54(0x0c)
	FExpressionInput PhaseG; // 0x68(0x0c)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDirection
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression {
	int32_t LightIndex; // 0x40(0x04)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightIlluminance
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression {
	int32_t LightIndex; // 0x40(0x04)
	FExpressionInput WorldPosition; // 0x44(0x0c)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression {
	int32_t LightIndex; // 0x40(0x04)
};

// Class Engine.MaterialExpressionSkyAtmosphereAerialPerspective
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionSkyAtmosphereDistantLightScatteredLuminance
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance : UMaterialExpression {
};

// Class Engine.MaterialExpressionSkyAtmosphereViewLuminance
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionSkyAtmosphereViewLuminance : UMaterialExpression {
};

// Class Engine.MaterialExpressionSobol
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionSobol : UMaterialExpression {
	FExpressionInput Cell; // 0x40(0x0c)
	FExpressionInput Index; // 0x54(0x0c)
	FExpressionInput Seed; // 0x68(0x0c)
	uint32_t ConstIndex; // 0x7c(0x04)
	FVector2D ConstSeed; // 0x80(0x08)
};

// Class Engine.MaterialExpressionSpeedTree
// Size: 0xa0 (Inherited: 0x40)
struct UMaterialExpressionSpeedTree : UMaterialExpression {
	FExpressionInput GeometryInput; // 0x40(0x0c)
	FExpressionInput WindInput; // 0x54(0x0c)
	FExpressionInput LODInput; // 0x68(0x0c)
	FExpressionInput ExtraBendWS; // 0x7c(0x0c)
	enum class ESpeedTreeGeometryType GeometryType; // 0x90(0x01)
	enum class ESpeedTreeWindType WindType; // 0x91(0x01)
	enum class ESpeedTreeLODType LODType; // 0x92(0x01)
	float BillboardThreshold; // 0x94(0x04)
	bool bAccurateWindVelocities; // 0x98(0x01)
};

// Class Engine.MaterialExpressionSphereMask
// Size: 0x98 (Inherited: 0x40)
struct UMaterialExpressionSphereMask : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
	FExpressionInput Radius; // 0x68(0x0c)
	FExpressionInput Hardness; // 0x7c(0x0c)
	float AttenuationRadius; // 0x90(0x04)
	float HardnessPercent; // 0x94(0x04)
};

// Class Engine.MaterialExpressionSphericalParticleOpacity
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	FExpressionInput Density; // 0x40(0x0c)
	float ConstantDensity; // 0x54(0x04)
};

// Class Engine.MaterialExpressionSquareRoot
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSquareRoot : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionStaticBool
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 1; // 0x40(0x01)
};

// Class Engine.MaterialExpressionStaticBoolParameter
// Size: 0x60 (Inherited: 0x58)
struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 1; // 0x58(0x01)
};

// Class Engine.MaterialExpressionStaticComponentMaskParameter
// Size: 0x70 (Inherited: 0x58)
struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	FExpressionInput Input; // 0x58(0x0c)
	char DefaultR : 1; // 0x6c(0x01)
	char DefaultG : 1; // 0x6c(0x01)
	char DefaultB : 1; // 0x6c(0x01)
	char DefaultA : 1; // 0x6c(0x01)
};

// Class Engine.MaterialExpressionStaticSwitch
// Size: 0x80 (Inherited: 0x40)
struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 1; // 0x40(0x01)
	FExpressionInput A; // 0x44(0x0c)
	FExpressionInput B; // 0x58(0x0c)
	FExpressionInput Value; // 0x6c(0x0c)
};

// Class Engine.MaterialExpressionStaticSwitchParameter
// Size: 0x88 (Inherited: 0x60)
struct UMaterialExpressionStaticSwitchParameter : UMaterialExpressionStaticBoolParameter {
	FExpressionInput A; // 0x60(0x0c)
	FExpressionInput B; // 0x74(0x0c)
};

// Class Engine.MaterialExpressionSubtract
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionSubtract : UMaterialExpression {
	FExpressionInput A; // 0x40(0x0c)
	FExpressionInput B; // 0x54(0x0c)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionTangent
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTangent : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
	float Period; // 0x54(0x04)
};

// Class Engine.MaterialExpressionTangentOutput
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionTemporalSobol
// Size: 0x78 (Inherited: 0x40)
struct UMaterialExpressionTemporalSobol : UMaterialExpression {
	FExpressionInput Index; // 0x40(0x0c)
	FExpressionInput Seed; // 0x54(0x0c)
	uint32_t ConstIndex; // 0x68(0x04)
	FVector2D ConstSeed; // 0x6c(0x08)
};

// Class Engine.MaterialExpressionTextureCoordinate
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0x40(0x04)
	float UTiling; // 0x44(0x04)
	float VTiling; // 0x48(0x04)
	char UnMirrorU : 1; // 0x4c(0x01)
	char UnMirrorV : 1; // 0x4c(0x01)
};

// Class Engine.MaterialExpressionTextureObject
// Size: 0x50 (Inherited: 0x50)
struct UMaterialExpressionTextureObject : UMaterialExpressionTextureBase {
};

// Class Engine.MaterialExpressionTextureObjectParameter
// Size: 0xf0 (Inherited: 0xf0)
struct UMaterialExpressionTextureObjectParameter : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionTextureProperty
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTextureProperty : UMaterialExpression {
	FExpressionInput TextureObject; // 0x40(0x0c)
	enum class EMaterialExposedTextureProperty Property; // 0x54(0x01)
};

// Class Engine.MaterialExpressionTextureSampleParameter2DArray
// Size: 0xf0 (Inherited: 0xf0)
struct UMaterialExpressionTextureSampleParameter2DArray : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionTextureSampleParameterCube
// Size: 0xf0 (Inherited: 0xf0)
struct UMaterialExpressionTextureSampleParameterCube : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// Size: 0xf8 (Inherited: 0xf0)
struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; // 0xf0(0x01)
};

// Class Engine.MaterialExpressionTextureSampleParameterVolume
// Size: 0xf0 (Inherited: 0xf0)
struct UMaterialExpressionTextureSampleParameterVolume : UMaterialExpressionTextureSampleParameter {
};

// Class Engine.MaterialExpressionThinTranslucentMaterialOutput
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput TransmittanceColor; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionTime
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 1; // 0x40(0x01)
	char bOverride_Period : 1; // 0x40(0x01)
	float Period; // 0x44(0x04)
};

// Class Engine.MaterialExpressionTransform
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTransform : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
	enum class EMaterialVectorCoordTransformSource TransformSourceType; // 0x54(0x01)
	enum class EMaterialVectorCoordTransform TransformType; // 0x55(0x01)
};

// Class Engine.MaterialExpressionTransformPosition
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTransformPosition : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
	enum class EMaterialPositionTransformSource TransformSourceType; // 0x54(0x01)
	enum class EMaterialPositionTransformSource TransformType; // 0x55(0x01)
};

// Class Engine.MaterialExpressionTruncate
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTruncate : UMaterialExpression {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionTwoSidedSign
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionTwoSidedSign : UMaterialExpression {
};

// Class Engine.MaterialExpressionVectorNoise
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionVectorNoise : UMaterialExpression {
	FExpressionInput Position; // 0x40(0x0c)
	enum class EVectorNoiseFunction NoiseFunction; // 0x54(0x01)
	int32_t Quality; // 0x58(0x04)
	char bTiling : 1; // 0x5c(0x01)
	uint32_t TileSize; // 0x60(0x04)
};

// Class Engine.MaterialExpressionVertexColor
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionVertexColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionVertexInterpolator
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40(0x0c)
};

// Class Engine.MaterialExpressionVertexNormalWS
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionVertexNormalWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionVertexTangentWS
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionVertexTangentWS : UMaterialExpression {
};

// Class Engine.MaterialExpressionViewProperty
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionViewProperty : UMaterialExpression {
	enum class EMaterialExposedViewProperty Property; // 0x40(0x01)
};

// Class Engine.MaterialExpressionViewSize
// Size: 0x40 (Inherited: 0x40)
struct UMaterialExpressionViewSize : UMaterialExpression {
};

// Class Engine.MaterialExpressionVirtualTextureFeatureSwitch
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression {
	FExpressionInput No; // 0x40(0x0c)
	FExpressionInput Yes; // 0x54(0x0c)
};

// Class Engine.MaterialExpressionWorldPosition
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionWorldPosition : UMaterialExpression {
	enum class EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x40(0x01)
};

// Class Engine.MaterialFunctionInterface
// Size: 0x40 (Inherited: 0x28)
struct UMaterialFunctionInterface : UObject {
	FGuid StateId; // 0x28(0x10)
	enum class EMaterialFunctionUsage MaterialFunctionUsage; // 0x38(0x01)
};

// Class Engine.MaterialFunction
// Size: 0x58 (Inherited: 0x40)
struct UMaterialFunction : UMaterialFunctionInterface {
	FString Description; // 0x40(0x10)
	char bExposeToLibrary : 1; // 0x50(0x01)
	char bPrefixParameterNames : 1; // 0x50(0x01)
	char bReentrantFlag : 1; // 0x50(0x01)
};

// Class Engine.MaterialFunctionInstance
// Size: 0xc0 (Inherited: 0x40)
struct UMaterialFunctionInstance : UMaterialFunctionInterface {
	UMaterialFunctionInterface* Parent; // 0x40(0x08)
	UMaterialFunctionInterface* Base; // 0x48(0x08)
	TArray<FScalarParameterValue> ScalarParameterValues; // 0x50(0x10)
	TArray<FVectorParameterValue> VectorParameterValues; // 0x60(0x10)
	TArray<FTextureParameterValue> TextureParameterValues; // 0x70(0x10)
	TArray<FFontParameterValue> FontParameterValues; // 0x80(0x10)
	TArray<FStaticSwitchParameter> StaticSwitchParameterValues; // 0x90(0x10)
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameterValues; // 0xa0(0x10)
	TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0xb0(0x10)
};

// Class Engine.MaterialFunctionMaterialLayer
// Size: 0x58 (Inherited: 0x58)
struct UMaterialFunctionMaterialLayer : UMaterialFunction {
};

// Class Engine.MaterialFunctionMaterialLayerInstance
// Size: 0xc0 (Inherited: 0xc0)
struct UMaterialFunctionMaterialLayerInstance : UMaterialFunctionInstance {
};

// Class Engine.MaterialFunctionMaterialLayerBlend
// Size: 0x58 (Inherited: 0x58)
struct UMaterialFunctionMaterialLayerBlend : UMaterialFunction {
};

// Class Engine.MaterialFunctionMaterialLayerBlendInstance
// Size: 0xc0 (Inherited: 0xc0)
struct UMaterialFunctionMaterialLayerBlendInstance : UMaterialFunctionInstance {
};

// Class Engine.MaterialInstanceActor
// Size: 0x230 (Inherited: 0x220)
struct AMaterialInstanceActor : AActor {
	TArray<AActor*> TargetActors; // 0x220(0x10)
};

// Class Engine.MaterialInstanceDynamic
// Size: 0x458 (Inherited: 0x408)
struct UMaterialInstanceDynamic : UMaterialInstance {

	void SetVectorParameterValueByInfo(FMaterialParameterInfo ParameterInfo, FLinearColor Value);
	void SetVectorParameterValue(FName ParameterName, FLinearColor Value);
	void SetTextureParameterValueByInfo(FMaterialParameterInfo ParameterInfo, UTexture* Value);
	void SetTextureParameterValue(FName ParameterName, UTexture* Value);
	void SetScalarParameterValueByInfo(FMaterialParameterInfo ParameterInfo, float Value);
	void SetScalarParameterValue(FName ParameterName, float Value);
	void K2_InterpolateMaterialInstanceParams(UMaterialInstance* SourceA, UMaterialInstance* SourceB, float alpha);
	FLinearColor K2_GetVectorParameterValueByInfo(FMaterialParameterInfo ParameterInfo);
	FLinearColor K2_GetVectorParameterValue(FName ParameterName);
	UTexture* K2_GetTextureParameterValueByInfo(FMaterialParameterInfo ParameterInfo);
	UTexture* K2_GetTextureParameterValue(FName ParameterName);
	float K2_GetScalarParameterValueByInfo(FMaterialParameterInfo ParameterInfo);
	float K2_GetScalarParameterValue(FName ParameterName);
	void K2_CopyMaterialInstanceParameters(UMaterialInterface* Source, bool bQuickParametersOnly);
	void CopyParameterOverrides(UMaterialInstance* MaterialInstance);
	void CopyInterpParameters(UMaterialInstance* Source);
};

// Class Engine.MaterialParameterCollection
// Size: 0x78 (Inherited: 0x28)
struct UMaterialParameterCollection : UObject {
	FGuid StateId; // 0x28(0x10)
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x38(0x10)
	TArray<FCollectionVectorParameter> VectorParameters; // 0x48(0x10)
};

// Class Engine.MaterialParameterCollectionInstance
// Size: 0xf0 (Inherited: 0x28)
struct UMaterialParameterCollectionInstance : UObject {
	UMaterialParameterCollection* Collection; // 0x30(0x08)
};

// Class Engine.MatineeActor
// Size: 0x2c8 (Inherited: 0x220)
struct AMatineeActor : AActor {
	UInterpData* MatineeData; // 0x220(0x08)
	FName MatineeControllerName; // 0x228(0x08)
	float PlayRate; // 0x230(0x04)
	char bPlayOnLevelLoad : 1; // 0x234(0x01)
	char bForceStartPos : 1; // 0x234(0x01)
	float ForceStartPosition; // 0x238(0x04)
	char bLooping : 1; // 0x23c(0x01)
	char bRewindOnPlay : 1; // 0x23c(0x01)
	char bNoResetOnRewind : 1; // 0x23c(0x01)
	char bRewindIfAlreadyPlaying : 1; // 0x23c(0x01)
	char bDisableRadioFilter : 1; // 0x23c(0x01)
	char bClientSideOnly : 1; // 0x23c(0x01)
	char pad_239_0 : 6; // 0x239(0x01)
	char bSkipUpdateIfNotVisible : 1; // 0x23c(0x01)
	char bIsSkippable : 1; // 0x23c(0x01)
	int32_t PreferredSplitScreenNum; // 0x240(0x04)
	char bDisableMovementInput : 1; // 0x244(0x01)
	char bDisableLookAtInput : 1; // 0x244(0x01)
	char bHidePlayer : 1; // 0x244(0x01)
	char bHideHud : 1; // 0x244(0x01)
	TArray<FInterpGroupActorInfo> GroupActorInfos; // 0x248(0x10)
	char bShouldShowGore : 1; // 0x258(0x01)
	TArray<UInterpGroupInst*> GroupInst; // 0x260(0x10)
	TArray<FCameraCutInfo> CameraCuts; // 0x270(0x10)
	char bIsPlaying : 1; // 0x280(0x01)
	char bReversePlayback : 1; // 0x280(0x01)
	char bPaused : 1; // 0x280(0x01)
	char pad_26F_0 : 3; // 0x26f(0x01)
	char bPendingStop : 1; // 0x280(0x01)
	float InterpPosition; // 0x284(0x04)
	char ReplicationForceIsPlaying; // 0x28c(0x01)
	FMulticastInlineDelegate OnPlay; // 0x290(0x10)
	FMulticastInlineDelegate OnStop; // 0x2a0(0x10)
	FMulticastInlineDelegate OnPause; // 0x2b0(0x10)

	void Stop();
	void SetPosition(float NewPosition, bool bJump);
	void SetLoopingState(bool bNewLooping);
	void Reverse();
	void Play();
	void Pause();
	void EnableGroupByName(FString GroupName, bool bEnable);
	void ChangePlaybackDirection();
};

// Class Engine.MatineeActorCameraAnim
// Size: 0x2d0 (Inherited: 0x2c8)
struct AMatineeActorCameraAnim : AMatineeActor {
	UCameraAnim* CameraAnim; // 0x2c8(0x08)
};

// Class Engine.MatineeAnimInterface
// Size: 0x28 (Inherited: 0x28)
struct UMatineeAnimInterface : UInterface {
};

// Class Engine.MatineeInterface
// Size: 0x28 (Inherited: 0x28)
struct UMatineeInterface : UInterface {
};

// Class Engine.MeshMergeCullingVolume
// Size: 0x258 (Inherited: 0x258)
struct AMeshMergeCullingVolume : AVolume {
};

// Class Engine.MeshSimplificationSettings
// Size: 0x40 (Inherited: 0x38)
struct UMeshSimplificationSettings : UDeveloperSettings {
	FName MeshReductionModuleName; // 0x38(0x08)
};

// Class Engine.MeshVertexPainterKismetLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMeshVertexPainterKismetLibrary : UBlueprintFunctionLibrary {

	void RemovePaintedVertices(UStaticMeshComponent* StaticMeshComponent);
	void PaintVerticesSingleColor(UStaticMeshComponent* StaticMeshComponent, FLinearColor FillColor, bool bConvertToSRGB);
	void PaintVerticesLerpAlongAxis(UStaticMeshComponent* StaticMeshComponent, FLinearColor StartColor, FLinearColor EndColor, enum class EVertexPaintAxis Axis, bool bConvertToSRGB);
};

// Class Engine.MicroTransactionBase
// Size: 0x68 (Inherited: 0x38)
struct UMicroTransactionBase : UPlatformInterfaceBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x38(0x10)
	FString LastError; // 0x48(0x10)
	FString LastErrorSolution; // 0x58(0x10)
};

// Class Engine.ModelComponent
// Size: 0x430 (Inherited: 0x3f0)
struct UModelComponent : UPrimitiveComponent {
	UBodySetup* ModelBodySetup; // 0x408(0x08)
};

// Class Engine.MorphTarget
// Size: 0x40 (Inherited: 0x28)
struct UMorphTarget : UObject {
	USkeletalMesh* BaseSkelMesh; // 0x28(0x08)
};

// Class Engine.NavAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavAgentInterface : UInterface {
};

// Class Engine.NavAreaBase
// Size: 0x30 (Inherited: 0x28)
struct UNavAreaBase : UObject {
};

// Class Engine.NavCollisionBase
// Size: 0x70 (Inherited: 0x28)
struct UNavCollisionBase : UObject {
	char bIsDynamicObstacle : 1; // 0x28(0x01)
};

// Class Engine.NavEdgeProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavEdgeProviderInterface : UInterface {
};

// Class Engine.NavigationDataChunk
// Size: 0x30 (Inherited: 0x28)
struct UNavigationDataChunk : UObject {
	FName NavigationDataName; // 0x28(0x08)
};

// Class Engine.NavigationDataInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavigationDataInterface : UInterface {
};

// Class Engine.NavigationSystemBase
// Size: 0x28 (Inherited: 0x28)
struct UNavigationSystemBase : UObject {
};

// Class Engine.NavigationSystemConfig
// Size: 0x50 (Inherited: 0x28)
struct UNavigationSystemConfig : UObject {
	FSoftClassPath NavigationSystemClass; // 0x28(0x18)
	FNavAgentSelector SupportedAgentsMask; // 0x40(0x04)
	FName DefaultAgentName; // 0x44(0x08)
	char bIsOverriden : 1; // 0x4c(0x01)
};

// Class Engine.NullNavSysConfig
// Size: 0x50 (Inherited: 0x50)
struct UNullNavSysConfig : UNavigationSystemConfig {
};

// Class Engine.NavLinkDefinition
// Size: 0x50 (Inherited: 0x28)
struct UNavLinkDefinition : UObject {
	TArray<FNavigationLink> Links; // 0x28(0x10)
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38(0x10)
};

// Class Engine.NavPathObserverInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavPathObserverInterface : UInterface {
};

// Class Engine.NavRelevantInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavRelevantInterface : UInterface {
};

// Class Engine.SimulatedClientNetConnection
// Size: 0x1a30 (Inherited: 0x1a30)
struct USimulatedClientNetConnection : UNetConnection {
};

// Class Engine.NetPushModelHelpers
// Size: 0x28 (Inherited: 0x28)
struct UNetPushModelHelpers : UBlueprintFunctionLibrary {

	void MarkPropertyDirtyFromRepIndex(UObject* Object, int32_t RepIndex, FName PropertyName);
	void MarkPropertyDirty(UObject* Object, FName PropertyName);
};

// Class Engine.NetworkPredictionInterface
// Size: 0x28 (Inherited: 0x28)
struct UNetworkPredictionInterface : UInterface {
};

// Class Engine.NetworkSettings
// Size: 0x58 (Inherited: 0x38)
struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 1; // 0x38(0x01)
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38(0x01)
	int32_t MaxRepArraySize; // 0x3c(0x04)
	int32_t MaxRepArrayMemory; // 0x40(0x04)
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48(0x10)
};

// Class Engine.NodeMappingContainer
// Size: 0x168 (Inherited: 0x28)
struct UNodeMappingContainer : UObject {
	TMap<FName, FNodeItem> SourceItems; // 0x28(0x50)
	TMap<FName, FNodeItem> TargetItems; // 0x78(0x50)
	TMap<FName, FName> SourceToTarget; // 0xc8(0x50)
	TSoftObjectPtr<UObject> SourceAsset; // 0x118(0x28)
	TSoftObjectPtr<UObject> TargetAsset; // 0x140(0x28)
};

// Class Engine.NodeMappingProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UNodeMappingProviderInterface : UInterface {
};

// Class Engine.Note
// Size: 0x220 (Inherited: 0x220)
struct ANote : AActor {
};

// Class Engine.ObjectLibrary
// Size: 0xa8 (Inherited: 0x28)
struct UObjectLibrary : UObject {
	UObject* ObjectBaseClass; // 0x28(0x08)
	bool bHasBlueprintClasses; // 0x30(0x01)
	TArray<UObject*> Objects; // 0x38(0x10)
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x48(0x10)
	bool bUseWeakReferences; // 0x58(0x01)
	bool bIsFullyLoaded; // 0x59(0x01)
};

// Class Engine.ObjectReferencer
// Size: 0x38 (Inherited: 0x28)
struct UObjectReferencer : UObject {
	TArray<UObject*> ReferencedObjects; // 0x28(0x10)
};

// Class Engine.ObjectTraceWorldSubsystem
// Size: 0x38 (Inherited: 0x30)
struct UObjectTraceWorldSubsystem : UWorldSubsystem {
};

// Class Engine.PackageMapClient
// Size: 0x3f8 (Inherited: 0xe0)
struct UPackageMapClient : UPackageMap {
};

// Class Engine.PainCausingVolume
// Size: 0x290 (Inherited: 0x268)
struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 1; // 0x268(0x01)
	float DamagePerSec; // 0x26c(0x04)
	UDamageType* DamageType; // 0x270(0x08)
	float PainInterval; // 0x278(0x04)
	char bEntryPain : 1; // 0x27c(0x01)
	char BACKUP_bPainCausing : 1; // 0x27c(0x01)
	AController* DamageInstigator; // 0x280(0x08)
};

// Class Engine.ParticleEmitter
// Size: 0x1b8 (Inherited: 0x28)
struct UParticleEmitter : UObject {
	FName EmitterName; // 0x28(0x08)
	int32_t SubUVDataOffset; // 0x30(0x04)
	enum class EEmitterRenderMode EmitterRenderMode; // 0x34(0x01)
	enum class EParticleSignificanceLevel SignificanceLevel; // 0x35(0x01)
	char bUseLegacySpawningBehavior : 1; // 0x37(0x01)
	char pad_36_1 : 3; // 0x36(0x01)
	char ConvertedModules : 1; // 0x37(0x01)
	char bIsSoloing : 1; // 0x37(0x01)
	char bCookedOut : 1; // 0x37(0x01)
	char bDisabledLODsKeepEmitterAlive : 1; // 0x37(0x01)
	char bDisableWhenInsignficant : 1; // 0x38(0x01)
	TArray<UParticleLODLevel*> LODLevels; // 0x40(0x10)
	int32_t PeakActiveParticles; // 0x50(0x04)
	int32_t InitialAllocationCount; // 0x54(0x04)
	float QualityLevelSpawnRateScale; // 0x58(0x04)
	uint32_t DetailModeBitmask; // 0x5c(0x04)
};

// Class Engine.ParticleEventManager
// Size: 0x220 (Inherited: 0x220)
struct AParticleEventManager : AActor {
};

// Class Engine.ParticleLODLevel
// Size: 0xb8 (Inherited: 0x28)
struct UParticleLODLevel : UObject {
	int32_t Level; // 0x28(0x04)
	char bEnabled : 1; // 0x2c(0x01)
	UParticleModuleRequired* RequiredModule; // 0x30(0x08)
	TArray<UParticleModule*> Modules; // 0x38(0x10)
	UParticleModuleTypeDataBase* TypeDataModule; // 0x48(0x08)
	UParticleModuleSpawn* SpawnModule; // 0x50(0x08)
	UParticleModuleEventGenerator* EventGenerator; // 0x58(0x08)
	TArray<UParticleModuleSpawnBase*> SpawningModules; // 0x60(0x10)
	TArray<UParticleModule*> SpawnModules; // 0x70(0x10)
	TArray<UParticleModule*> UpdateModules; // 0x80(0x10)
	TArray<UParticleModuleOrbit*> OrbitModules; // 0x90(0x10)
	TArray<UParticleModuleEventReceiverBase*> EventReceiverModules; // 0xa0(0x10)
	char ConvertedModules : 1; // 0xb0(0x01)
	int32_t PeakActiveParticles; // 0xb4(0x04)
};

// Class Engine.ParticleModule
// Size: 0x30 (Inherited: 0x28)
struct UParticleModule : UObject {
	char bSpawnModule : 1; // 0x28(0x01)
	char bUpdateModule : 1; // 0x28(0x01)
	char bFinalUpdateModule : 1; // 0x28(0x01)
	char bUpdateForGPUEmitter : 1; // 0x28(0x01)
	char bCurvesAsColor : 1; // 0x28(0x01)
	char b3DDrawMode : 1; // 0x28(0x01)
	char bSupported3DDrawMode : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char bEditable : 1; // 0x29(0x01)
	char LODDuplicate : 1; // 0x29(0x01)
	char bSupportsRandomSeed : 1; // 0x29(0x01)
	char bRequiresLoopingNotification : 1; // 0x29(0x01)
	char LODValidity; // 0x2a(0x01)
};

// Class Engine.ParticleModuleAccelerationBase
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 1; // 0x30(0x01)
};

// Class Engine.ParticleModuleAcceleration
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	FRawDistributionVector Acceleration; // 0x38(0x48)
	char bApplyOwnerScale : 1; // 0x80(0x01)
};

// Class Engine.ParticleModuleAccelerationConstant
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	FVector Acceleration; // 0x38(0x0c)
};

// Class Engine.ParticleModuleAccelerationDrag
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	UDistributionFloat* DragCoefficient; // 0x38(0x08)
	FRawDistributionFloat DragCoefficientRaw; // 0x40(0x30)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	UDistributionFloat* DragScale; // 0x38(0x08)
	FRawDistributionFloat DragScaleRaw; // 0x40(0x30)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
// Size: 0x80 (Inherited: 0x38)
struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	FRawDistributionVector AccelOverLife; // 0x38(0x48)
};

// Class Engine.ParticleModuleAttractorBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleAttractorBase : UParticleModule {
};

// Class Engine.ParticleModuleAttractorLine
// Size: 0xa8 (Inherited: 0x30)
struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	FVector EndPoint0; // 0x30(0x0c)
	FVector EndPoint1; // 0x3c(0x0c)
	FRawDistributionFloat Range; // 0x48(0x30)
	FRawDistributionFloat Strength; // 0x78(0x30)
};

// Class Engine.ParticleModuleAttractorParticle
// Size: 0xb0 (Inherited: 0x30)
struct UParticleModuleAttractorParticle : UParticleModuleAttractorBase {
	FName EmitterName; // 0x30(0x08)
	FRawDistributionFloat Range; // 0x38(0x30)
	char bStrengthByDistance : 1; // 0x68(0x01)
	FRawDistributionFloat Strength; // 0x70(0x30)
	char bAffectBaseVelocity : 1; // 0xa0(0x01)
	enum class EAttractorParticleSelectionMethod SelectionMethod; // 0xa4(0x01)
	char bRenewSource : 1; // 0xa8(0x01)
	char bInheritSourceVel : 1; // 0xa8(0x01)
	int32_t LastSelIndex; // 0xac(0x04)
};

// Class Engine.ParticleModuleAttractorPoint
// Size: 0xe0 (Inherited: 0x30)
struct UParticleModuleAttractorPoint : UParticleModuleAttractorBase {
	FRawDistributionVector Position; // 0x30(0x48)
	FRawDistributionFloat Range; // 0x78(0x30)
	FRawDistributionFloat Strength; // 0xa8(0x30)
	char StrengthByDistance : 1; // 0xd8(0x01)
	char bAffectBaseVelocity : 1; // 0xd8(0x01)
	char bOverrideVelocity : 1; // 0xd8(0x01)
	char bUseWorldSpacePosition : 1; // 0xd8(0x01)
	char Positive_X : 1; // 0xd8(0x01)
	char Positive_Y : 1; // 0xd8(0x01)
	char Positive_Z : 1; // 0xd8(0x01)
	char Negative_X : 1; // 0xd8(0x01)
	char Negative_Y : 1; // 0xd9(0x01)
	char Negative_Z : 1; // 0xd9(0x01)
};

// Class Engine.ParticleModuleAttractorPointGravity
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	FVector Position; // 0x30(0x0c)
	float Radius; // 0x3c(0x04)
	UDistributionFloat* Strength; // 0x40(0x08)
	FRawDistributionFloat StrengthRaw; // 0x48(0x30)
};

// Class Engine.ParticleModuleBeamBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleBeamBase : UParticleModule {
};

// Class Engine.ParticleModuleBeamModifier
// Size: 0x108 (Inherited: 0x30)
struct UParticleModuleBeamModifier : UParticleModuleBeamBase {
	enum class BeamModifierType ModifierType; // 0x30(0x01)
	FBeamModifierOptions PositionOptions; // 0x34(0x04)
	FRawDistributionVector Position; // 0x38(0x48)
	FBeamModifierOptions TangentOptions; // 0x80(0x04)
	FRawDistributionVector Tangent; // 0x88(0x48)
	char bAbsoluteTangent : 1; // 0xd0(0x01)
	FBeamModifierOptions StrengthOptions; // 0xd4(0x04)
	FRawDistributionFloat Strength; // 0xd8(0x30)
};

// Class Engine.ParticleModuleBeamNoise
// Size: 0x190 (Inherited: 0x30)
struct UParticleModuleBeamNoise : UParticleModuleBeamBase {
	char bLowFreq_Enabled : 1; // 0x30(0x01)
	int32_t Frequency; // 0x34(0x04)
	int32_t Frequency_LowRange; // 0x38(0x04)
	FRawDistributionVector NoiseRange; // 0x40(0x48)
	FRawDistributionFloat NoiseRangeScale; // 0x88(0x30)
	char bNRScaleEmitterTime : 1; // 0xb8(0x01)
	FRawDistributionVector NoiseSpeed; // 0xc0(0x48)
	char bSmooth : 1; // 0x108(0x01)
	float NoiseLockRadius; // 0x10c(0x04)
	char bNoiseLock : 1; // 0x110(0x01)
	char bOscillate : 1; // 0x110(0x01)
	float NoiseLockTime; // 0x114(0x04)
	float NoiseTension; // 0x118(0x04)
	char bUseNoiseTangents : 1; // 0x11c(0x01)
	FRawDistributionFloat NoiseTangentStrength; // 0x120(0x30)
	int32_t NoiseTessellation; // 0x150(0x04)
	char bTargetNoise : 1; // 0x154(0x01)
	float FrequencyDistance; // 0x158(0x04)
	char bApplyNoiseScale : 1; // 0x15c(0x01)
	FRawDistributionFloat NoiseScale; // 0x160(0x30)
};

// Class Engine.ParticleModuleBeamSource
// Size: 0x118 (Inherited: 0x30)
struct UParticleModuleBeamSource : UParticleModuleBeamBase {
	enum class Beam2SourceTargetMethod SourceMethod; // 0x30(0x01)
	FName SourceName; // 0x34(0x08)
	char bSourceAbsolute : 1; // 0x3c(0x01)
	FRawDistributionVector Source; // 0x40(0x48)
	char bLockSource : 1; // 0x88(0x01)
	enum class Beam2SourceTargetTangentMethod SourceTangentMethod; // 0x8c(0x01)
	FRawDistributionVector SourceTangent; // 0x90(0x48)
	char bLockSourceTangent : 1; // 0xd8(0x01)
	FRawDistributionFloat SourceStrength; // 0xe0(0x30)
	char bLockSourceStength : 1; // 0x110(0x01)
};

// Class Engine.ParticleModuleBeamTarget
// Size: 0x120 (Inherited: 0x30)
struct UParticleModuleBeamTarget : UParticleModuleBeamBase {
	enum class Beam2SourceTargetMethod TargetMethod; // 0x30(0x01)
	FName TargetName; // 0x34(0x08)
	FRawDistributionVector Target; // 0x40(0x48)
	char bTargetAbsolute : 1; // 0x88(0x01)
	char bLockTarget : 1; // 0x88(0x01)
	enum class Beam2SourceTargetTangentMethod TargetTangentMethod; // 0x8c(0x01)
	FRawDistributionVector TargetTangent; // 0x90(0x48)
	char bLockTargetTangent : 1; // 0xd8(0x01)
	FRawDistributionFloat TargetStrength; // 0xe0(0x30)
	char bLockTargetStength : 1; // 0x110(0x01)
	float LockRadius; // 0x114(0x04)
};

// Class Engine.ParticleModuleCameraBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleCameraBase : UParticleModule {
};

// Class Engine.ParticleModuleCameraOffset
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	FRawDistributionFloat CameraOffset; // 0x30(0x30)
	char bSpawnTimeOnly : 1; // 0x60(0x01)
	enum class EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x64(0x01)
};

// Class Engine.ParticleModuleCollisionBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleCollisionBase : UParticleModule {
};

// Class Engine.ParticleModuleCollision
// Size: 0x190 (Inherited: 0x30)
struct UParticleModuleCollision : UParticleModuleCollisionBase {
	FRawDistributionVector DampingFactor; // 0x30(0x48)
	FRawDistributionVector DampingFactorRotation; // 0x78(0x48)
	FRawDistributionFloat MaxCollisions; // 0xc0(0x30)
	enum class EParticleCollisionComplete CollisionCompletionOption; // 0xf0(0x01)
	TArray<enum class EObjectTypeQuery> CollisionTypes; // 0xf8(0x10)
	char bApplyPhysics : 1; // 0x110(0x01)
	char bIgnoreTriggerVolumes : 1; // 0x110(0x01)
	FRawDistributionFloat ParticleMass; // 0x118(0x30)
	float DirScalar; // 0x148(0x04)
	char bPawnsDoNotDecrementCount : 1; // 0x14c(0x01)
	char bOnlyVerticalNormalsDecrementCount : 1; // 0x14c(0x01)
	float VerticalFudgeFactor; // 0x150(0x04)
	FRawDistributionFloat DelayAmount; // 0x158(0x30)
	char bDropDetail : 1; // 0x188(0x01)
	char bCollideOnlyIfVisible : 1; // 0x188(0x01)
	char bIgnoreSourceActor : 1; // 0x188(0x01)
	float MaxCollisionDistance; // 0x18c(0x04)
};

// Class Engine.ParticleModuleCollisionGPU
// Size: 0xa8 (Inherited: 0x30)
struct UParticleModuleCollisionGPU : UParticleModuleCollisionBase {
	FRawDistributionFloat Resilience; // 0x30(0x30)
	FRawDistributionFloat ResilienceScaleOverLife; // 0x60(0x30)
	float Friction; // 0x90(0x04)
	float RandomSpread; // 0x94(0x04)
	float RandomDistribution; // 0x98(0x04)
	float RadiusScale; // 0x9c(0x04)
	float RadiusBias; // 0xa0(0x04)
	enum class EParticleCollisionResponse Response; // 0xa4(0x01)
	enum class EParticleCollisionMode CollisionMode; // 0xa5(0x01)
};

// Class Engine.ParticleModuleColorBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleColorBase : UParticleModule {
};

// Class Engine.ParticleModuleColor
// Size: 0xb0 (Inherited: 0x30)
struct UParticleModuleColor : UParticleModuleColorBase {
	FRawDistributionVector StartColor; // 0x30(0x48)
	FRawDistributionFloat StartAlpha; // 0x78(0x30)
	char bClampAlpha : 1; // 0xa8(0x01)
};

// Class Engine.ParticleModuleColor_Seeded
// Size: 0xd0 (Inherited: 0xb0)
struct UParticleModuleColor_Seeded : UParticleModuleColor {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0(0x20)
};

// Class Engine.ParticleModuleColorOverLife
// Size: 0xb0 (Inherited: 0x30)
struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorOverLife; // 0x30(0x48)
	FRawDistributionFloat AlphaOverLife; // 0x78(0x30)
	char bClampAlpha : 1; // 0xa8(0x01)
};

// Class Engine.ParticleModuleColorScaleOverLife
// Size: 0xb0 (Inherited: 0x30)
struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorScaleOverLife; // 0x30(0x48)
	FRawDistributionFloat AlphaScaleOverLife; // 0x78(0x30)
	char bEmitterTime : 1; // 0xa8(0x01)
};

// Class Engine.ParticleModuleEventBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleEventBase : UParticleModule {
};

// Class Engine.ParticleModuleEventGenerator
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x30(0x10)
};

// Class Engine.ParticleModuleEventReceiverBase
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	enum class EParticleEventType EventGeneratorType; // 0x30(0x01)
	FName EventName; // 0x34(0x08)
};

// Class Engine.ParticleModuleEventReceiverKillParticles
// Size: 0x48 (Inherited: 0x40)
struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; // 0x40(0x01)
};

// Class Engine.ParticleModuleEventReceiverSpawn
// Size: 0xd8 (Inherited: 0x40)
struct UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase {
	FRawDistributionFloat SpawnCount; // 0x40(0x30)
	char bUseParticleTime : 1; // 0x70(0x01)
	char bUsePSysLocation : 1; // 0x70(0x01)
	char bInheritVelocity : 1; // 0x70(0x01)
	FRawDistributionVector InheritVelocityScale; // 0x78(0x48)
	TArray<UPhysicalMaterial*> PhysicalMaterials; // 0xc0(0x10)
	char bBanPhysicalMaterials : 1; // 0xd0(0x01)
};

// Class Engine.ParticleModuleEventSendToGame
// Size: 0x28 (Inherited: 0x28)
struct UParticleModuleEventSendToGame : UObject {
};

// Class Engine.ParticleModuleKillBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleKillBase : UParticleModule {
};

// Class Engine.ParticleModuleKillBox
// Size: 0xc8 (Inherited: 0x30)
struct UParticleModuleKillBox : UParticleModuleKillBase {
	FRawDistributionVector LowerLeftCorner; // 0x30(0x48)
	FRawDistributionVector UpperRightCorner; // 0x78(0x48)
	char bAbsolute : 1; // 0xc0(0x01)
	char bKillInside : 1; // 0xc0(0x01)
	char bAxisAlignedAndFixedSize : 1; // 0xc0(0x01)
};

// Class Engine.ParticleModuleKillHeight
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleKillHeight : UParticleModuleKillBase {
	FRawDistributionFloat Height; // 0x30(0x30)
	char bAbsolute : 1; // 0x60(0x01)
	char bFloor : 1; // 0x60(0x01)
	char bApplyPSysScale : 1; // 0x60(0x01)
};

// Class Engine.ParticleModuleLifetimeBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleLifetimeBase : UParticleModule {
};

// Class Engine.ParticleModuleLifetime
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	FRawDistributionFloat LifeTime; // 0x30(0x30)
};

// Class Engine.ParticleModuleLifetime_Seeded
// Size: 0x80 (Inherited: 0x60)
struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60(0x20)
};

// Class Engine.ParticleModuleLightBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleLightBase : UParticleModule {
};

// Class Engine.ParticleModuleLight
// Size: 0x120 (Inherited: 0x30)
struct UParticleModuleLight : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x30(0x01)
	bool bAffectsTranslucency; // 0x31(0x01)
	bool bPreviewLightRadius; // 0x32(0x01)
	float SpawnFraction; // 0x34(0x04)
	FRawDistributionVector ColorScaleOverLife; // 0x38(0x48)
	FRawDistributionFloat BrightnessOverLife; // 0x80(0x30)
	FRawDistributionFloat RadiusScale; // 0xb0(0x30)
	FRawDistributionFloat LightExponent; // 0xe0(0x30)
	FLightingChannels LightingChannels; // 0x110(0x01)
	float VolumetricScatteringIntensity; // 0x114(0x04)
	bool bHighQualityLights; // 0x118(0x01)
	bool bShadowCastingLights; // 0x119(0x01)
};

// Class Engine.ParticleModuleLight_Seeded
// Size: 0x140 (Inherited: 0x120)
struct UParticleModuleLight_Seeded : UParticleModuleLight {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120(0x20)
};

// Class Engine.ParticleModuleLocationBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleLocationBase : UParticleModule {
};

// Class Engine.ParticleModuleLocation
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleLocation : UParticleModuleLocationBase {
	FRawDistributionVector StartLocation; // 0x30(0x48)
	float DistributeOverNPoints; // 0x78(0x04)
	float DistributeThreshold; // 0x7c(0x04)
};

// Class Engine.ParticleModuleLocation_Seeded
// Size: 0xa0 (Inherited: 0x80)
struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80(0x20)
};

// Class Engine.ParticleModuleLocationBoneSocket
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleLocationBoneSocket : UParticleModuleLocationBase {
	enum class ELocationBoneSocketSource SourceType; // 0x30(0x01)
	FVector UniversalOffset; // 0x34(0x0c)
	TArray<FLocationBoneSocketInfo> SourceLocations; // 0x40(0x10)
	enum class ELocationBoneSocketSelectionMethod SelectionMethod; // 0x50(0x01)
	char bUpdatePositionEachFrame : 1; // 0x54(0x01)
	char bOrientMeshEmitters : 1; // 0x54(0x01)
	char bInheritBoneVelocity : 1; // 0x54(0x01)
	float InheritVelocityScale; // 0x58(0x04)
	FName SkelMeshActorParamName; // 0x5c(0x08)
	int32_t NumPreSelectedIndices; // 0x64(0x04)
};

// Class Engine.ParticleModuleLocationDirect
// Size: 0x150 (Inherited: 0x30)
struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	FRawDistributionVector Location; // 0x30(0x48)
	FRawDistributionVector LocationOffset; // 0x78(0x48)
	FRawDistributionVector ScaleFactor; // 0xc0(0x48)
	FRawDistributionVector Direction; // 0x108(0x48)
};

// Class Engine.ParticleModuleLocationEmitter
// Size: 0x50 (Inherited: 0x30)
struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	FName EmitterName; // 0x30(0x08)
	enum class ELocationEmitterSelectionMethod SelectionMethod; // 0x38(0x01)
	char InheritSourceVelocity : 1; // 0x3c(0x01)
	float InheritSourceVelocityScale; // 0x40(0x04)
	char bInheritSourceRotation : 1; // 0x44(0x01)
	float InheritSourceRotationScale; // 0x48(0x04)
};

// Class Engine.ParticleModuleLocationEmitterDirect
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	FName EmitterName; // 0x30(0x08)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xb0 (Inherited: 0x30)
struct UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase {
	char Positive_X : 1; // 0x30(0x01)
	char Positive_Y : 1; // 0x30(0x01)
	char Positive_Z : 1; // 0x30(0x01)
	char Negative_X : 1; // 0x30(0x01)
	char Negative_Y : 1; // 0x30(0x01)
	char Negative_Z : 1; // 0x30(0x01)
	char SurfaceOnly : 1; // 0x30(0x01)
	char Velocity : 1; // 0x30(0x01)
	FRawDistributionFloat VelocityScale; // 0x38(0x30)
	FRawDistributionVector StartLocation; // 0x68(0x48)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder
// Size: 0x120 (Inherited: 0xb0)
struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; // 0xb0(0x01)
	FRawDistributionFloat StartRadius; // 0xb8(0x30)
	FRawDistributionFloat StartHeight; // 0xe8(0x30)
	enum class CylinderHeightAxis HeightAxis; // 0x118(0x01)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// Size: 0x140 (Inherited: 0x120)
struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120(0x20)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere
// Size: 0xe0 (Inherited: 0xb0)
struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	FRawDistributionFloat StartRadius; // 0xb0(0x30)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// Size: 0x100 (Inherited: 0xe0)
struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe0(0x20)
};

// Class Engine.ParticleModuleLocationPrimitiveTriangle
// Size: 0x108 (Inherited: 0x30)
struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	FRawDistributionVector StartOffset; // 0x30(0x48)
	FRawDistributionFloat Height; // 0x78(0x30)
	FRawDistributionFloat Angle; // 0xa8(0x30)
	FRawDistributionFloat Thickness; // 0xd8(0x30)
};

// Class Engine.ParticleModuleLocationSkelVertSurface
// Size: 0x90 (Inherited: 0x30)
struct UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase {
	enum class ELocationSkelVertSurfaceSource SourceType; // 0x30(0x01)
	FVector UniversalOffset; // 0x34(0x0c)
	char bUpdatePositionEachFrame : 1; // 0x40(0x01)
	char bOrientMeshEmitters : 1; // 0x40(0x01)
	char bInheritBoneVelocity : 1; // 0x40(0x01)
	float InheritVelocityScale; // 0x44(0x04)
	FName SkelMeshActorParamName; // 0x48(0x08)
	TArray<FName> ValidAssociatedBones; // 0x50(0x10)
	char bEnforceNormalCheck : 1; // 0x60(0x01)
	FVector NormalToCompare; // 0x64(0x0c)
	float NormalCheckToleranceDegrees; // 0x70(0x04)
	float NormalCheckTolerance; // 0x74(0x04)
	TArray<int32_t> ValidMaterialIndices; // 0x78(0x10)
	char bInheritVertexColor : 1; // 0x88(0x01)
	char bInheritUV : 1; // 0x88(0x01)
	uint32_t InheritUVChannel; // 0x8c(0x04)
};

// Class Engine.ParticleModuleLocationWorldOffset
// Size: 0x80 (Inherited: 0x80)
struct UParticleModuleLocationWorldOffset : UParticleModuleLocation {
};

// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// Size: 0xa0 (Inherited: 0x80)
struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80(0x20)
};

// Class Engine.ParticleModuleMaterialBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleMaterialBase : UParticleModule {
};

// Class Engine.ParticleModuleMeshMaterial
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	TArray<UMaterialInterface*> MeshMaterials; // 0x30(0x10)
};

// Class Engine.ParticleModuleRotationBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleRotationBase : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotation
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	FRawDistributionVector StartRotation; // 0x30(0x48)
	char bInheritParent : 1; // 0x78(0x01)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
// Size: 0xa0 (Inherited: 0x80)
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80(0x20)
};

// Class Engine.ParticleModuleRotationRateBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleRotationRateBase : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotationRate
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionVector StartRotationRate; // 0x30(0x48)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// Size: 0x98 (Inherited: 0x78)
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78(0x20)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionVector LifeMultiplier; // 0x30(0x48)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	FRawDistributionVector RotRate; // 0x30(0x48)
	char bScaleRotRate : 1; // 0x78(0x01)
};

// Class Engine.ParticleModuleOrbitBase
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 1; // 0x30(0x01)
};

// Class Engine.ParticleModuleOrbit
// Size: 0x130 (Inherited: 0x38)
struct UParticleModuleOrbit : UParticleModuleOrbitBase {
	enum class EOrbitChainMode ChainMode; // 0x38(0x01)
	FRawDistributionVector OffsetAmount; // 0x40(0x48)
	FOrbitOptions OffsetOptions; // 0x88(0x04)
	FRawDistributionVector RotationAmount; // 0x90(0x48)
	FOrbitOptions RotationOptions; // 0xd8(0x04)
	FRawDistributionVector RotationRateAmount; // 0xe0(0x48)
	FOrbitOptions RotationRateOptions; // 0x128(0x04)
};

// Class Engine.ParticleModuleOrientationBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleOrientationBase : UParticleModule {
};

// Class Engine.ParticleModuleOrientationAxisLock
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	enum class EParticleAxisLock LockAxisFlags; // 0x30(0x01)
};

// Class Engine.ParticleModuleParameterBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleParameterBase : UParticleModule {
};

// Class Engine.ParticleModuleParameterDynamic
// Size: 0x48 (Inherited: 0x30)
struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x30(0x10)
	int32_t UpdateFlags; // 0x40(0x04)
	char bUsesVelocity : 1; // 0x44(0x01)
};

// Class Engine.ParticleModuleParameterDynamic_Seeded
// Size: 0x68 (Inherited: 0x48)
struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x48(0x20)
};

// Class Engine.ParticleModulePivotOffset
// Size: 0x38 (Inherited: 0x30)
struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	FVector2D PivotOffset; // 0x30(0x08)
};

// Class Engine.ParticleModuleRequired
// Size: 0x140 (Inherited: 0x30)
struct UParticleModuleRequired : UParticleModule {
	UMaterialInterface* Material; // 0x30(0x08)
	float MinFacingCameraBlendDistance; // 0x38(0x04)
	float MaxFacingCameraBlendDistance; // 0x3c(0x04)
	FVector EmitterOrigin; // 0x40(0x0c)
	FRotator EmitterRotation; // 0x4c(0x0c)
	enum class EParticleScreenAlignment ScreenAlignment; // 0x58(0x01)
	char bUseLocalSpace : 1; // 0x59(0x01)
	char bKillOnDeactivate : 1; // 0x59(0x01)
	char bKillOnCompleted : 1; // 0x59(0x01)
	enum class EParticleSortMode SortMode; // 0x5a(0x01)
	char bUseLegacyEmitterTime : 1; // 0x5b(0x01)
	char bRemoveHMDRoll : 1; // 0x5b(0x01)
	char bEmitterDurationUseRange : 1; // 0x5b(0x01)
	float EmitterDuration; // 0x5c(0x04)
	FRawDistributionFloat SpawnRate; // 0x60(0x30)
	TArray<FParticleBurst> BurstList; // 0x90(0x10)
	float EmitterDelay; // 0xa0(0x04)
	float EmitterDelayLow; // 0xa4(0x04)
	char bDelayFirstLoopOnly : 1; // 0xa8(0x01)
	enum class EParticleSubUVInterpMethod InterpolationMethod; // 0xa9(0x01)
	char bScaleUV : 1; // 0xaa(0x01)
	char pad_A8_0 : 1; // 0xa8(0x01)
	char bEmitterDelayUseRange : 1; // 0xaa(0x01)
	enum class EParticleBurstMethod ParticleBurstMethod; // 0xab(0x01)
	char bOverrideSystemMacroUV : 1; // 0xac(0x01)
	char bUseMaxDrawCount : 1; // 0xac(0x01)
	enum class EOpacitySourceMode OpacitySourceMode; // 0xad(0x01)
	enum class EEmitterNormalsMode EmitterNormalsMode; // 0xae(0x01)
	char bOrbitModuleAffectsVelocityAlignment : 1; // 0xaf(0x01)
	int32_t SubImages_Horizontal; // 0xb0(0x04)
	int32_t SubImages_Vertical; // 0xb4(0x04)
	float RandomImageTime; // 0xb8(0x04)
	int32_t RandomImageChanges; // 0xbc(0x04)
	FVector MacroUVPosition; // 0xc0(0x0c)
	float MacroUVRadius; // 0xcc(0x04)
	enum class EParticleUVFlipMode UVFlippingMode; // 0xd0(0x01)
	enum class ESubUVBoundingVertexCount BoundingMode; // 0xd1(0x01)
	char bDurationRecalcEachLoop : 1; // 0xd2(0x01)
	FVector NormalsSphereCenter; // 0xd4(0x0c)
	float AlphaThreshold; // 0xe0(0x04)
	int32_t EmitterLoops; // 0xe4(0x04)
	UTexture2D* CutoutTexture; // 0xe8(0x08)
	int32_t MaxDrawCount; // 0xf0(0x04)
	float EmitterDurationLow; // 0xf4(0x04)
	FVector NormalsCylinderDirection; // 0xf8(0x0c)
	TArray<FName> NamedMaterialOverrides; // 0x108(0x10)
};

// Class Engine.ParticleModuleRotation
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleRotation : UParticleModuleRotationBase {
	FRawDistributionFloat StartRotation; // 0x30(0x30)
};

// Class Engine.ParticleModuleRotation_Seeded
// Size: 0x80 (Inherited: 0x60)
struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60(0x20)
};

// Class Engine.ParticleModuleRotationOverLifetime
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	FRawDistributionFloat RotationOverLife; // 0x30(0x30)
	char Scale : 1; // 0x60(0x01)
};

// Class Engine.ParticleModuleRotationRate
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionFloat StartRotationRate; // 0x30(0x30)
};

// Class Engine.ParticleModuleRotationRate_Seeded
// Size: 0x80 (Inherited: 0x60)
struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60(0x20)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionFloat LifeMultiplier; // 0x30(0x30)
};

// Class Engine.ParticleModuleSizeBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleSizeBase : UParticleModule {
};

// Class Engine.ParticleModuleSize
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleSize : UParticleModuleSizeBase {
	FRawDistributionVector StartSize; // 0x30(0x48)
};

// Class Engine.ParticleModuleSize_Seeded
// Size: 0x98 (Inherited: 0x78)
struct UParticleModuleSize_Seeded : UParticleModuleSize {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78(0x20)
};

// Class Engine.ParticleModuleSizeMultiplyLife
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	FRawDistributionVector LifeMultiplier; // 0x30(0x48)
	char MultiplyX : 1; // 0x78(0x01)
	char MultiplyY : 1; // 0x78(0x01)
	char MultiplyZ : 1; // 0x78(0x01)
};

// Class Engine.ParticleModuleSizeScale
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	FRawDistributionVector SizeScale; // 0x30(0x48)
	char EnableX : 1; // 0x78(0x01)
	char EnableY : 1; // 0x78(0x01)
	char EnableZ : 1; // 0x78(0x01)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	FVector2D SpeedScale; // 0x30(0x08)
	FVector2D MaxScale; // 0x38(0x08)
};

// Class Engine.ParticleModuleSourceMovement
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	FRawDistributionVector SourceMovementScale; // 0x30(0x48)
};

// Class Engine.ParticleModuleSpawnBase
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 1; // 0x30(0x01)
	char bProcessBurstList : 1; // 0x30(0x01)
};

// Class Engine.ParticleModuleSpawn
// Size: 0xe8 (Inherited: 0x38)
struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	FRawDistributionFloat Rate; // 0x38(0x30)
	FRawDistributionFloat RateScale; // 0x68(0x30)
	enum class EParticleBurstMethod ParticleBurstMethod; // 0x98(0x01)
	TArray<FParticleBurst> BurstList; // 0xa0(0x10)
	FRawDistributionFloat BurstScale; // 0xb0(0x30)
	char bApplyGlobalSpawnRateScale : 1; // 0xe0(0x01)
};

// Class Engine.ParticleModuleSpawnPerUnit
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase {
	float UnitScalar; // 0x38(0x04)
	float MovementTolerance; // 0x3c(0x04)
	FRawDistributionFloat SpawnPerUnit; // 0x40(0x30)
	float MaxFrameDistance; // 0x70(0x04)
	char bIgnoreSpawnRateWhenMoving : 1; // 0x74(0x01)
	char bIgnoreMovementAlongX : 1; // 0x74(0x01)
	char bIgnoreMovementAlongY : 1; // 0x74(0x01)
	char bIgnoreMovementAlongZ : 1; // 0x74(0x01)
};

// Class Engine.ParticleModuleSubUVBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleSubUVBase : UParticleModule {
};

// Class Engine.ParticleModuleSubUV
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	USubUVAnimation* Animation; // 0x30(0x08)
	FRawDistributionFloat SubImageIndex; // 0x38(0x30)
	char bUseRealTime : 1; // 0x68(0x01)
};

// Class Engine.ParticleModuleSubUVMovie
// Size: 0xb0 (Inherited: 0x70)
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 1; // 0x70(0x01)
	FRawDistributionFloat FrameRate; // 0x78(0x30)
	int32_t StartingFrame; // 0xa8(0x04)
};

// Class Engine.ParticleModuleTrailBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleTrailBase : UParticleModule {
};

// Class Engine.ParticleModuleTrailSource
// Size: 0x90 (Inherited: 0x30)
struct UParticleModuleTrailSource : UParticleModuleTrailBase {
	enum class ETrail2SourceMethod SourceMethod; // 0x30(0x01)
	FName SourceName; // 0x34(0x08)
	FRawDistributionFloat SourceStrength; // 0x40(0x30)
	char bLockSourceStength : 1; // 0x70(0x01)
	int32_t SourceOffsetCount; // 0x74(0x04)
	TArray<FVector> SourceOffsetDefaults; // 0x78(0x10)
	enum class EParticleSourceSelectionMethod SelectionMethod; // 0x88(0x01)
	char bInheritRotation : 1; // 0x8c(0x01)
};

// Class Engine.ParticleModuleTypeDataBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleTypeDataBase : UParticleModule {
};

// Class Engine.ParticleModuleTypeDataAnimTrail
// Size: 0x48 (Inherited: 0x30)
struct UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase {
	char bDeadTrailsOnDeactivate : 1; // 0x30(0x01)
	char bEnablePreviousTangentRecalculation : 1; // 0x30(0x01)
	char bTangentRecalculationEveryFrame : 1; // 0x30(0x01)
	float TilingDistance; // 0x34(0x04)
	float DistanceTessellationStepSize; // 0x38(0x04)
	float TangentTessellationStepSize; // 0x3c(0x04)
	float WidthTessellationStepSize; // 0x40(0x04)
};

// Class Engine.ParticleModuleTypeDataBeam2
// Size: 0x150 (Inherited: 0x30)
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	enum class EBeam2Method BeamMethod; // 0x30(0x01)
	int32_t TextureTile; // 0x34(0x04)
	float TextureTileDistance; // 0x38(0x04)
	int32_t Sheets; // 0x3c(0x04)
	int32_t MaxBeamCount; // 0x40(0x04)
	float Speed; // 0x44(0x04)
	int32_t InterpolationPoints; // 0x48(0x04)
	char bAlwaysOn : 1; // 0x4c(0x01)
	int32_t UpVectorStepSize; // 0x50(0x04)
	FName BranchParentName; // 0x54(0x08)
	FRawDistributionFloat Distance; // 0x60(0x30)
	enum class EBeamTaperMethod TaperMethod; // 0x90(0x01)
	FRawDistributionFloat TaperFactor; // 0x98(0x30)
	FRawDistributionFloat TaperScale; // 0xc8(0x30)
	char RenderGeometry : 1; // 0xf8(0x01)
	char RenderDirectLine : 1; // 0xf8(0x01)
	char RenderLines : 1; // 0xf8(0x01)
	char RenderTessellation : 1; // 0xf8(0x01)
};

// Class Engine.ParticleModuleTypeDataGpu
// Size: 0x420 (Inherited: 0x30)
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x30(0x280)
	FGPUSpriteResourceData ResourceData; // 0x2b0(0x160)
	float CameraMotionBlurAmount; // 0x410(0x04)
	char bClearExistingParticlesOnInit : 1; // 0x414(0x01)
};

// Class Engine.ParticleModuleTypeDataMesh
// Size: 0x98 (Inherited: 0x30)
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	UStaticMesh* Mesh; // 0x30(0x08)
	float LODSizeScale; // 0x40(0x04)
	char bUseStaticMeshLODs : 1; // 0x44(0x01)
	char CastShadows : 1; // 0x44(0x01)
	char DoCollisions : 1; // 0x44(0x01)
	enum class EMeshScreenAlignment MeshAlignment; // 0x45(0x01)
	char bOverrideMaterial : 1; // 0x46(0x01)
	char bOverrideDefaultMotionBlurSettings : 1; // 0x46(0x01)
	char bEnableMotionBlur : 1; // 0x46(0x01)
	FRawDistributionVector RollPitchYawRange; // 0x48(0x48)
	enum class EParticleAxisLock AxisLockOption; // 0x90(0x01)
	char bCameraFacing : 1; // 0x91(0x01)
	enum class EMeshCameraFacingUpAxis CameraFacingUpAxisOption; // 0x92(0x01)
	enum class EMeshCameraFacingOptions CameraFacingOption; // 0x93(0x01)
	char bApplyParticleRotationAsSpin : 1; // 0x94(0x01)
	char pad_89_0 : 1; // 0x89(0x01)
	char bFaceCameraDirectionRatherThanPosition : 1; // 0x94(0x01)
	char bCollisionsConsiderPartilceSize : 1; // 0x94(0x01)
};

// Class Engine.ParticleModuleTypeDataRibbon
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32_t MaxTessellationBetweenParticles; // 0x30(0x04)
	int32_t SheetsPerTrail; // 0x34(0x04)
	int32_t MaxTrailCount; // 0x38(0x04)
	int32_t MaxParticleInTrailCount; // 0x3c(0x04)
	char bDeadTrailsOnDeactivate : 1; // 0x40(0x01)
	char bDeadTrailsOnSourceLoss : 1; // 0x40(0x01)
	char bClipSourceSegement : 1; // 0x40(0x01)
	char bEnablePreviousTangentRecalculation : 1; // 0x40(0x01)
	char bTangentRecalculationEveryFrame : 1; // 0x40(0x01)
	char bSpawnInitialParticle : 1; // 0x40(0x01)
	enum class ETrailsRenderAxisOption RenderAxis; // 0x44(0x01)
	float TangentSpawningScalar; // 0x48(0x04)
	char bRenderGeometry : 1; // 0x4c(0x01)
	char bRenderSpawnPoints : 1; // 0x4c(0x01)
	char pad_46_0 : 2; // 0x46(0x01)
	char bRenderTangents : 1; // 0x4c(0x01)
	char bRenderTessellation : 1; // 0x4c(0x01)
	float TilingDistance; // 0x50(0x04)
	float DistanceTessellationStepSize; // 0x54(0x04)
	char bEnableTangentDiffInterpScale : 1; // 0x58(0x01)
	float TangentTessellationScalar; // 0x5c(0x04)
};

// Class Engine.ParticleModuleVectorFieldBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleVectorFieldBase : UParticleModule {
};

// Class Engine.ParticleModuleVectorFieldGlobal
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30(0x01)
	float GlobalVectorFieldScale; // 0x34(0x04)
	float GlobalVectorFieldTightness; // 0x38(0x04)
};

// Class Engine.ParticleModuleVectorFieldLocal
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleVectorFieldLocal : UParticleModuleVectorFieldBase {
	UVectorField* VectorField; // 0x30(0x08)
	FVector RelativeTranslation; // 0x38(0x0c)
	FRotator RelativeRotation; // 0x44(0x0c)
	FVector RelativeScale3D; // 0x50(0x0c)
	float Intensity; // 0x5c(0x04)
	float Tightness; // 0x60(0x04)
	char bIgnoreComponentTransform : 1; // 0x64(0x01)
	char bTileX : 1; // 0x64(0x01)
	char bTileY : 1; // 0x64(0x01)
	char bTileZ : 1; // 0x64(0x01)
	char bUseFixDT : 1; // 0x64(0x01)
};

// Class Engine.ParticleModuleVectorFieldRotation
// Size: 0x48 (Inherited: 0x30)
struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	FVector MinInitialRotation; // 0x30(0x0c)
	FVector MaxInitialRotation; // 0x3c(0x0c)
};

// Class Engine.ParticleModuleVectorFieldRotationRate
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	FVector RotationRate; // 0x30(0x0c)
};

// Class Engine.ParticleModuleVectorFieldScale
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScale; // 0x30(0x08)
	FRawDistributionFloat VectorFieldScaleRaw; // 0x38(0x30)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x30(0x08)
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38(0x30)
};

// Class Engine.ParticleModuleVelocityBase
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 1; // 0x30(0x01)
	char bApplyOwnerScale : 1; // 0x30(0x01)
};

// Class Engine.ParticleModuleVelocity
// Size: 0xb0 (Inherited: 0x38)
struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	FRawDistributionVector StartVelocity; // 0x38(0x48)
	FRawDistributionFloat StartVelocityRadial; // 0x80(0x30)
};

// Class Engine.ParticleModuleVelocity_Seeded
// Size: 0xd0 (Inherited: 0xb0)
struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0(0x20)
};

// Class Engine.ParticleModuleVelocityCone
// Size: 0xa8 (Inherited: 0x38)
struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	FRawDistributionFloat Angle; // 0x38(0x30)
	FRawDistributionFloat Velocity; // 0x68(0x30)
	FVector Direction; // 0x98(0x0c)
};

// Class Engine.ParticleModuleVelocityInheritParent
// Size: 0x80 (Inherited: 0x38)
struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	FRawDistributionVector Scale; // 0x38(0x48)
};

// Class Engine.ParticleModuleVelocityOverLifetime
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	FRawDistributionVector VelOverLife; // 0x38(0x48)
	char Absolute : 1; // 0x80(0x01)
};

// Class Engine.ParticleSpriteEmitter
// Size: 0x1b8 (Inherited: 0x1b8)
struct UParticleSpriteEmitter : UParticleEmitter {
};

// Class Engine.ParticleSystem
// Size: 0x110 (Inherited: 0x30)
struct UParticleSystem : UFXSystemAsset {
	float UpdateTime_FPS; // 0x30(0x04)
	float UpdateTime_Delta; // 0x34(0x04)
	float WarmupTime; // 0x38(0x04)
	float WarmupTickRate; // 0x3c(0x04)
	TArray<UParticleEmitter*> Emitters; // 0x40(0x10)
	UParticleSystemComponent* PreviewComponent; // 0x50(0x08)
	UInterpCurveEdSetup* CurveEdSetup; // 0x58(0x08)
	float LODDistanceCheckTime; // 0x60(0x04)
	float MacroUVRadius; // 0x64(0x04)
	TArray<float> LODDistances; // 0x68(0x10)
	TArray<FParticleSystemLOD> LODSettings; // 0x78(0x10)
	FBox FixedRelativeBoundingBox; // 0x88(0x1c)
	float SecondsBeforeInactive; // 0xa4(0x04)
	float Delay; // 0xa8(0x04)
	float DelayLow; // 0xac(0x04)
	char bOrientZAxisTowardCamera : 1; // 0xb0(0x01)
	char bUseFixedRelativeBoundingBox : 1; // 0xb0(0x01)
	char bShouldResetPeakCounts : 1; // 0xb0(0x01)
	char bHasPhysics : 1; // 0xb0(0x01)
	char bUseRealtimeThumbnail : 1; // 0xb0(0x01)
	char ThumbnailImageOutOfDate : 1; // 0xb0(0x01)
	char bUseDelayRange : 1; // 0xb1(0x01)
	char bAllowManagedTicking : 1; // 0xb1(0x01)
	char pad_B1_0 : 2; // 0xb1(0x01)
	char bAutoDeactivate : 1; // 0xb1(0x01)
	char bRegenerateLODDuplicate : 1; // 0xb1(0x01)
	enum class EParticleSystemUpdateMode SystemUpdateMode; // 0xb2(0x01)
	enum class ParticleSystemLODMethod LODMethod; // 0xb3(0x01)
	enum class EParticleSystemInsignificanceReaction InsignificantReaction; // 0xb4(0x01)
	enum class EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod; // 0xb5(0x01)
	enum class EParticleSignificanceLevel MaxSignificanceLevel; // 0xb7(0x01)
	uint32_t MinTimeBetweenTicks; // 0xb8(0x04)
	float InsignificanceDelay; // 0xbc(0x04)
	FVector MacroUVPosition; // 0xc0(0x0c)
	FBox CustomOcclusionBounds; // 0xcc(0x1c)
	TArray<FLODSoloTrack> SoloTracking; // 0xe8(0x10)
	TArray<FNamedEmitterMaterial> NamedMaterialSlots; // 0xf8(0x10)

	bool ContainsEmitterType(UObject* TypeData);
};

// Class Engine.ParticleSystemReplay
// Size: 0x40 (Inherited: 0x28)
struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; // 0x28(0x04)
};

// Class Engine.PathFollowingAgentInterface
// Size: 0x28 (Inherited: 0x28)
struct UPathFollowingAgentInterface : UInterface {
};

// Class Engine.PawnNoiseEmitterComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UPawnNoiseEmitterComponent : UActorComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xb0(0x01)
	FVector LastRemoteNoisePosition; // 0xb4(0x0c)
	float NoiseLifetime; // 0xc0(0x04)
	float LastRemoteNoiseVolume; // 0xc4(0x04)
	float LastRemoteNoiseTime; // 0xc8(0x04)
	float LastLocalNoiseVolume; // 0xcc(0x04)
	float LastLocalNoiseTime; // 0xd0(0x04)

	void MakeNoise(AActor* NoiseMaker, float Loudness, FVector NoiseLocation);
};

// Class Engine.PhysicalAnimationComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; // 0xb0(0x04)
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8(0x08)

	void SetStrengthMultiplyer(float InStrengthMultiplyer);
	void SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent);
	FTransform GetBodyTargetTransform(FName BodyName);
	void ApplyPhysicalAnimationSettingsBelow(FName BodyName, FPhysicalAnimationData PhysicalAnimationData, bool bIncludeSelf);
	void ApplyPhysicalAnimationSettings(FName BodyName, FPhysicalAnimationData PhysicalAnimationData);
	void ApplyPhysicalAnimationProfileBelow(FName BodyName, FName ProfileName, bool bIncludeSelf, bool bClearNotFound);
};

// Class Engine.PhysicalMaterialMask
// Size: 0x30 (Inherited: 0x28)
struct UPhysicalMaterialMask : UObject {
	int32_t UVChannelIndex; // 0x28(0x04)
	enum class TextureAddress AddressX; // 0x2c(0x01)
	enum class TextureAddress AddressY; // 0x2d(0x01)
};

// Class Engine.PhysicalMaterialPropertyBase
// Size: 0x28 (Inherited: 0x28)
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class Engine.PhysicsAsset
// Size: 0x138 (Inherited: 0x28)
struct UPhysicsAsset : UObject {
	TArray<int32_t> BoundsBodies; // 0x30(0x10)
	TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x40(0x10)
	TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50(0x10)
	FSolverIterations SolverIterations; // 0x60(0x18)
	char bNotForDedicatedServer : 1; // 0x78(0x01)
	UThumbnailInfo* ThumbnailInfo; // 0x120(0x08)
	TArray<UBodySetup*> BodySetup; // 0x128(0x10)
};

// Class Engine.SkeletalBodySetup
// Size: 0x268 (Inherited: 0x250)
struct USkeletalBodySetup : UBodySetup {
	bool bSkipScaleFromAnimation; // 0x250(0x01)
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x258(0x10)
};

// Class Engine.PhysicsCollisionHandler
// Size: 0x40 (Inherited: 0x28)
struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x28(0x04)
	float ImpactReFireDelay; // 0x2c(0x04)
	USoundBase* DefaultImpactSound; // 0x30(0x08)
	float LastImpactSoundTime; // 0x38(0x04)
};

// Class Engine.RigidBodyBase
// Size: 0x220 (Inherited: 0x220)
struct ARigidBodyBase : AActor {
};

// Class Engine.PhysicsConstraintActor
// Size: 0x240 (Inherited: 0x220)
struct APhysicsConstraintActor : ARigidBodyBase {
	UPhysicsConstraintComponent* ConstraintComp; // 0x220(0x08)
	AActor* ConstraintActor1; // 0x228(0x08)
	AActor* ConstraintActor2; // 0x230(0x08)
	char bDisableCollision : 1; // 0x238(0x01)
};

// Class Engine.PhysicsConstraintComponent
// Size: 0x3f0 (Inherited: 0x1f0)
struct UPhysicsConstraintComponent : USceneComponent {
	AActor* ConstraintActor1; // 0x1f0(0x08)
	FConstrainComponentPropName ComponentName1; // 0x1f8(0x08)
	AActor* ConstraintActor2; // 0x200(0x08)
	FConstrainComponentPropName ComponentName2; // 0x208(0x08)
	UPhysicsConstraintTemplate* ConstraintSetup; // 0x220(0x08)
	FMulticastInlineDelegate OnConstraintBroken; // 0x228(0x10)
	FConstraintInstance ConstraintInstance; // 0x238(0x1b8)

	void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
	void SetOrientationDriveSLERP(bool bEnableSLERP);
	void SetLinearZLimit(enum class ELinearConstraintMotion ConstraintType, float LimitSize);
	void SetLinearYLimit(enum class ELinearConstraintMotion ConstraintType, float LimitSize);
	void SetLinearXLimit(enum class ELinearConstraintMotion ConstraintType, float LimitSize);
	void SetLinearVelocityTarget(FVector InVelTarget);
	void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void SetLinearPositionTarget(FVector InPosTarget);
	void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
	void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);
	void SetDisableCollision(bool bDisableCollision);
	void SetConstraintReferencePosition(enum class EConstraintFrame Frame, FVector RefPosition);
	void SetConstraintReferenceOrientation(enum class EConstraintFrame Frame, FVector PriAxis, FVector SecAxis);
	void SetConstraintReferenceFrame(enum class EConstraintFrame Frame, FTransform RefFrame);
	void SetConstrainedComponents(UPrimitiveComponent* Component1, FName BoneName1, UPrimitiveComponent* Component2, FName BoneName2);
	void SetAngularVelocityTarget(FVector InVelTarget);
	void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
	void SetAngularVelocityDriveSLERP(bool bEnableSLERP);
	void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void SetAngularTwistLimit(enum class EAngularConstraintMotion ConstraintType, float TwistLimitAngle);
	void SetAngularSwing2Limit(enum class EAngularConstraintMotion MotionType, float Swing2LimitAngle);
	void SetAngularSwing1Limit(enum class EAngularConstraintMotion MotionType, float Swing1LimitAngle);
	void SetAngularOrientationTarget(FRotator InPosTarget);
	void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
	void SetAngularDriveMode(enum class EAngularDriveMode DriveMode);
	void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);
	bool IsBroken();
	float GetCurrentTwist();
	float GetCurrentSwing2();
	float GetCurrentSwing1();
	void GetConstraintForce(FVector OutLinearForce, FVector OutAngularForce);
	void BreakConstraint();
};

// Class Engine.PhysicsConstraintTemplate
// Size: 0x2f8 (Inherited: 0x28)
struct UPhysicsConstraintTemplate : UObject {
	FConstraintInstance DefaultInstance; // 0x28(0x1b8)
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1e0(0x10)
	FConstraintProfileProperties DefaultProfile; // 0x1f0(0x104)
};

// Class Engine.PhysicsHandleComponent
// Size: 0x160 (Inherited: 0xb0)
struct UPhysicsHandleComponent : UActorComponent {
	UPrimitiveComponent* GrabbedComponent; // 0xb0(0x08)
	char pad_B8_0 : 1; // 0xb8(0x01)
	char bSoftAngularConstraint : 1; // 0xc0(0x01)
	char bSoftLinearConstraint : 1; // 0xc0(0x01)
	char bInterpolateTarget : 1; // 0xc0(0x01)
	float LinearDamping; // 0xc4(0x04)
	float LinearStiffness; // 0xc8(0x04)
	float AngularDamping; // 0xcc(0x04)
	float AngularStiffness; // 0xd0(0x04)
	float InterpolationSpeed; // 0x140(0x04)

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
	void GetTargetLocationAndRotation(FVector TargetLocation, FRotator TargetRotation);
	UPrimitiveComponent* GetGrabbedComponent();
};

// Class Engine.PhysicsSettings
// Size: 0x138 (Inherited: 0x38)
struct UPhysicsSettings : UDeveloperSettings {
	float DefaultGravityZ; // 0x38(0x04)
	float DefaultTerminalVelocity; // 0x3c(0x04)
	float DefaultFluidFriction; // 0x40(0x04)
	int32_t SimulateScratchMemorySize; // 0x44(0x04)
	int32_t RagdollAggregateThreshold; // 0x48(0x04)
	float TriangleMeshTriangleMinAreaThreshold; // 0x4c(0x04)
	bool bEnableShapeSharing; // 0x50(0x01)
	bool bEnablePCM; // 0x51(0x01)
	bool bEnableStabilization; // 0x52(0x01)
	bool bWarnMissingLocks; // 0x53(0x01)
	bool bEnable2DPhysics; // 0x54(0x01)
	FRigidBodyErrorCorrection PhysicErrorCorrection; // 0x58(0x34)
	enum class ESettingsLockedAxis LockedAxis; // 0x8c(0x01)
	enum class ESettingsDOF DefaultDegreesOfFreedom; // 0x8d(0x01)
	float BounceThresholdVelocity; // 0x90(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x94(0x01)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x95(0x01)
	float MaxAngularVelocity; // 0x98(0x04)
	float MaxDepenetrationVelocity; // 0x9c(0x04)
	float ContactOffsetMultiplier; // 0xa0(0x04)
	float MinContactOffset; // 0xa4(0x04)
	float MaxContactOffset; // 0xa8(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0xac(0x01)
	enum class ECollisionTraceFlag DefaultShapeComplexity; // 0xad(0x01)
	bool bDefaultHasComplexCollision; // 0xae(0x01)
	bool bSuppressFaceRemapTable; // 0xaf(0x01)
	bool bSupportUVFromHitResults; // 0xb0(0x01)
	bool bDisableActiveActors; // 0xb1(0x01)
	bool bDisableKinematicStaticPairs; // 0xb2(0x01)
	bool bDisableKinematicKinematicPairs; // 0xb3(0x01)
	bool bDisableCCD; // 0xb4(0x01)
	bool bEnableEnhancedDeterminism; // 0xb5(0x01)
	float AnimPhysicsMinDeltaTime; // 0xb8(0x04)
	bool bSimulateAnimPhysicsAfterReset; // 0xbc(0x01)
	float MaxPhysicsDeltaTime; // 0xc0(0x04)
	bool bSubstepping; // 0xc4(0x01)
	bool bSubsteppingAsync; // 0xc5(0x01)
	float MaxSubstepDeltaTime; // 0xc8(0x04)
	int32_t MaxSubsteps; // 0xcc(0x04)
	float SyncSceneSmoothingFactor; // 0xd0(0x04)
	float InitialAverageFrameRate; // 0xd4(0x04)
	int32_t PhysXTreeRebuildRate; // 0xd8(0x04)
	TArray<FPhysicalSurfaceName> PhysicalSurfaces; // 0xe0(0x10)
	FBroadphaseSettings DefaultBroadphaseSettings; // 0xf0(0x40)
	FChaosPhysicsSettings ChaosSettings; // 0x130(0x03)
};

// Class Engine.PhysicsSpringComponent
// Size: 0x220 (Inherited: 0x1f0)
struct UPhysicsSpringComponent : USceneComponent {
	float SpringStiffness; // 0x1f0(0x04)
	float SpringDamping; // 0x1f4(0x04)
	float SpringLengthAtRest; // 0x1f8(0x04)
	float SpringRadius; // 0x1fc(0x04)
	enum class ECollisionChannel SpringChannel; // 0x200(0x01)
	bool bIgnoreSelf; // 0x201(0x01)
	float SpringCompression; // 0x204(0x04)

	FVector GetSpringRestingPoint();
	FVector GetSpringDirection();
	FVector GetSpringCurrentEndPoint();
	float GetNormalizedCompressionScalar();
};

// Class Engine.PhysicsThruster
// Size: 0x228 (Inherited: 0x220)
struct APhysicsThruster : ARigidBodyBase {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x220(0x08)
};

// Class Engine.PhysicsThrusterComponent
// Size: 0x200 (Inherited: 0x1f0)
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x1f0(0x04)
};

// Class Engine.SceneCapture
// Size: 0x230 (Inherited: 0x220)
struct ASceneCapture : AActor {
	UStaticMeshComponent* MeshComp; // 0x220(0x08)
	USceneComponent* SceneComponent; // 0x228(0x08)
};

// Class Engine.PlanarReflection
// Size: 0x240 (Inherited: 0x230)
struct APlanarReflection : ASceneCapture {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x230(0x08)
	bool bShowPreviewPlane; // 0x238(0x01)

	void OnInterpToggle(bool bEnable);
};

// Class Engine.PlanarReflectionComponent
// Size: 0x370 (Inherited: 0x290)
struct UPlanarReflectionComponent : USceneCaptureComponent {
	UBoxComponent* PreviewBox; // 0x288(0x08)
	float NormalDistortionStrength; // 0x290(0x04)
	float PrefilterRoughness; // 0x294(0x04)
	float PrefilterRoughnessDistance; // 0x298(0x04)
	int32_t ScreenPercentage; // 0x29c(0x04)
	float ExtraFOV; // 0x2a0(0x04)
	float DistanceFromPlaneFadeStart; // 0x2a4(0x04)
	float DistanceFromPlaneFadeEnd; // 0x2a8(0x04)
	float DistanceFromPlaneFadeoutStart; // 0x2ac(0x04)
	float DistanceFromPlaneFadeoutEnd; // 0x2b0(0x04)
	float AngleFromPlaneFadeStart; // 0x2b4(0x04)
	float AngleFromPlaneFadeEnd; // 0x2b8(0x04)
	bool bShowPreviewPlane; // 0x2bc(0x01)
	bool bRenderSceneTwoSided; // 0x2bd(0x01)
};

// Class Engine.PlaneReflectionCapture
// Size: 0x228 (Inherited: 0x228)
struct APlaneReflectionCapture : AReflectionCapture {
};

// Class Engine.PlaneReflectionCaptureComponent
// Size: 0x280 (Inherited: 0x270)
struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x268(0x04)
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x270(0x08)
	UBoxComponent* PreviewCaptureBox; // 0x278(0x08)
};

// Class Engine.PlatformEventsComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UPlatformEventsComponent : UActorComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb0(0x10)
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc0(0x10)

	bool SupportsConvertibleLaptops();
	void PlatformEventDelegate__DelegateSignature();
	bool IsInTabletMode();
	bool IsInLaptopMode();
};

// Class Engine.PlatformInterfaceWebResponse
// Size: 0xb0 (Inherited: 0x28)
struct UPlatformInterfaceWebResponse : UObject {
	FString OriginalURL; // 0x28(0x10)
	int32_t ResponseCode; // 0x38(0x04)
	int32_t Tag; // 0x3c(0x04)
	FString StringResponse; // 0x40(0x10)
	TArray<char> BinaryResponse; // 0x50(0x10)

	int32_t GetNumHeaders();
	FString GetHeaderValue(FString HeaderName);
	void GetHeader(int32_t HeaderIndex, FString Header, FString Value);
};

// Class Engine.PlayerInput
// Size: 0x3a8 (Inherited: 0x28)
struct UPlayerInput : UObject {
	TArray<FKeyBind> DebugExecBindings; // 0x120(0x10)
	TArray<FName> InvertedAxis; // 0x160(0x10)

	void SetMouseSensitivity(float Sensitivity);
	void SetBind(FName BindName, FString Command);
	void InvertAxisKey(FKey AxisKey);
	void InvertAxis(FName AxisName);
	void ClearSmoothing();
};

// Class Engine.PlayerStartPIE
// Size: 0x250 (Inherited: 0x250)
struct APlayerStartPIE : APlayerStart {
};

// Class Engine.PluginCommandlet
// Size: 0xa0 (Inherited: 0x80)
struct UPluginCommandlet : UCommandlet {
};

// Class Engine.PointLight
// Size: 0x238 (Inherited: 0x230)
struct APointLight : ALight {
	UPointLightComponent* PointLightComponent; // 0x230(0x08)

	void SetRadius(float NewRadius);
	void SetLightFalloffExponent(float NewLightFalloffExponent);
};

// Class Engine.Polys
// Size: 0x38 (Inherited: 0x28)
struct UPolys : UObject {
};

// Class Engine.PoseableMeshComponent
// Size: 0x790 (Inherited: 0x630)
struct UPoseableMeshComponent : USkinnedMeshComponent {

	void SetBoneTransformByName(FName BoneName, FTransform InTransform, enum class EBoneSpaces BoneSpace);
	void SetBoneScaleByName(FName BoneName, FVector InScale3D, enum class EBoneSpaces BoneSpace);
	void SetBoneRotationByName(FName BoneName, FRotator InRotation, enum class EBoneSpaces BoneSpace);
	void SetBoneLocationByName(FName BoneName, FVector InLocation, enum class EBoneSpaces BoneSpace);
	void ResetBoneTransformByName(FName BoneName);
	FTransform GetBoneTransformByName(FName BoneName, enum class EBoneSpaces BoneSpace);
	FVector GetBoneScaleByName(FName BoneName, enum class EBoneSpaces BoneSpace);
	FRotator GetBoneRotationByName(FName BoneName, enum class EBoneSpaces BoneSpace);
	FVector GetBoneLocationByName(FName BoneName, enum class EBoneSpaces BoneSpace);
	void CopyPoseFromSkeletalComponent(USkeletalMeshComponent* InComponentToCopy);
};

// Class Engine.PoseAsset
// Size: 0x120 (Inherited: 0x80)
struct UPoseAsset : UAnimationAsset {
	FPoseDataContainer PoseContainer; // 0x80(0x90)
	bool bAdditivePose; // 0x110(0x01)
	int32_t BasePoseIndex; // 0x114(0x04)
	FName RetargetSource; // 0x118(0x08)
};

// Class Engine.PoseWatch
// Size: 0x38 (Inherited: 0x28)
struct UPoseWatch : UObject {
	UEdGraphNode* Node; // 0x28(0x08)
	FColor PoseWatchColour; // 0x30(0x04)
};

// Class Engine.PostProcessComponent
// Size: 0x750 (Inherited: 0x1f0)
struct UPostProcessComponent : USceneComponent {
	FPostProcessSettings Settings; // 0x200(0x540)
	float Priority; // 0x740(0x04)
	float BlendRadius; // 0x744(0x04)
	float BlendWeight; // 0x748(0x04)
	char bEnabled : 1; // 0x74c(0x01)
	char bUnbound : 1; // 0x74c(0x01)

	void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);
};

// Class Engine.PostProcessVolume
// Size: 0x7b0 (Inherited: 0x258)
struct APostProcessVolume : AVolume {
	FPostProcessSettings Settings; // 0x260(0x540)
	float Priority; // 0x7a0(0x04)
	float BlendRadius; // 0x7a4(0x04)
	float BlendWeight; // 0x7a8(0x04)
	char bEnabled : 1; // 0x7ac(0x01)
	char bUnbound : 1; // 0x7ac(0x01)

	void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);
};

// Class Engine.PrecomputedVisibilityOverrideVolume
// Size: 0x288 (Inherited: 0x258)
struct APrecomputedVisibilityOverrideVolume : AVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x258(0x10)
	TArray<AActor*> OverrideInvisibleActors; // 0x268(0x10)
	TArray<FName> OverrideInvisibleLevels; // 0x278(0x10)
};

// Class Engine.PrecomputedVisibilityVolume
// Size: 0x258 (Inherited: 0x258)
struct APrecomputedVisibilityVolume : AVolume {
};

// Class Engine.PreviewCollectionInterface
// Size: 0x28 (Inherited: 0x28)
struct UPreviewCollectionInterface : UInterface {
};

// Class Engine.PreviewMeshCollection
// Size: 0x50 (Inherited: 0x30)
struct UPreviewMeshCollection : UDataAsset {
	USkeleton* Skeleton; // 0x38(0x08)
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40(0x10)
};

// Class Engine.PrimaryAssetLabel
// Size: 0x68 (Inherited: 0x30)
struct UPrimaryAssetLabel : UPrimaryDataAsset {
	FPrimaryAssetRules Rules; // 0x30(0x0c)
	char bLabelAssetsInMyDirectory : 1; // 0x3c(0x01)
	char bIsRuntimeLabel : 1; // 0x3c(0x01)
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x40(0x10)
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x50(0x10)
	FCollectionReference AssetCollection; // 0x60(0x08)
};

// Class Engine.ProxyLODMeshSimplificationSettings
// Size: 0x40 (Inherited: 0x38)
struct UProxyLODMeshSimplificationSettings : UDeveloperSettings {
	FName ProxyLODMeshReductionModuleName; // 0x38(0x08)
};

// Class Engine.RadialForceActor
// Size: 0x228 (Inherited: 0x220)
struct ARadialForceActor : ARigidBodyBase {
	URadialForceComponent* ForceComponent; // 0x220(0x08)

	void ToggleForce();
	void FireImpulse();
	void EnableForce();
	void DisableForce();
};

// Class Engine.RadialForceComponent
// Size: 0x220 (Inherited: 0x1f0)
struct URadialForceComponent : USceneComponent {
	float Radius; // 0x1f0(0x04)
	enum class ERadialImpulseFalloff Falloff; // 0x1f4(0x01)
	float ImpulseStrength; // 0x1f8(0x04)
	char bImpulseVelChange : 1; // 0x1fc(0x01)
	char bIgnoreOwningActor : 1; // 0x1fc(0x01)
	float ForceStrength; // 0x200(0x04)
	float DestructibleDamage; // 0x204(0x04)
	TArray<enum class EObjectTypeQuery> ObjectTypesToAffect; // 0x208(0x10)

	void RemoveObjectTypeToAffect(enum class EObjectTypeQuery ObjectType);
	void FireImpulse();
	void AddObjectTypeToAffect(enum class EObjectTypeQuery ObjectType);
};

// Class Engine.RectLight
// Size: 0x238 (Inherited: 0x230)
struct ARectLight : ALight {
	URectLightComponent* RectLightComponent; // 0x230(0x08)
};

// Class Engine.RectLightComponent
// Size: 0x360 (Inherited: 0x340)
struct URectLightComponent : ULocalLightComponent {
	float SourceWidth; // 0x338(0x04)
	float SourceHeight; // 0x33c(0x04)
	float BarnDoorAngle; // 0x340(0x04)
	float BarnDoorLength; // 0x344(0x04)
	UTexture* SourceTexture; // 0x348(0x08)

	void SetSourceWidth(float bNewValue);
	void SetSourceTexture(UTexture* bNewValue);
	void SetSourceHeight(float NewValue);
	void SetBarnDoorLength(float NewValue);
	void SetBarnDoorAngle(float NewValue);
};

// Class Engine.RendererSettings
// Size: 0xf0 (Inherited: 0x38)
struct URendererSettings : UDeveloperSettings {
	char bMobileDisableVertexFog : 1; // 0x38(0x01)
	int32_t MaxMobileCascades; // 0x3c(0x04)
	enum class EMobileMSAASampleCount MobileMSAASampleCount; // 0x40(0x01)
	char bMobileUseLegacyShadingModel : 1; // 0x44(0x01)
	char bMobileAllowDitheredLODTransition : 1; // 0x44(0x01)
	char bMobileAllowSoftwareOcclusionCulling : 1; // 0x44(0x01)
	char bMobileVirtualTextures : 1; // 0x44(0x01)
	char bDiscardUnusedQualityLevels : 1; // 0x44(0x01)
	char bOcclusionCulling : 1; // 0x44(0x01)
	float MinScreenRadiusForLights; // 0x48(0x04)
	float MinScreenRadiusForEarlyZPass; // 0x4c(0x04)
	float MinScreenRadiusForCSMdepth; // 0x50(0x04)
	char bPrecomputedVisibilityWarning : 1; // 0x54(0x01)
	char pad_4A_0 : 1; // 0x4a(0x01)
	char bTextureStreaming : 1; // 0x54(0x01)
	char bUseDXT5NormalMaps : 1; // 0x54(0x01)
	char bVirtualTextures : 1; // 0x54(0x01)
	char bVirtualTexturedLightmaps : 1; // 0x54(0x01)
	uint32_t VirtualTextureTileSize; // 0x58(0x04)
	uint32_t VirtualTextureTileBorderSize; // 0x5c(0x04)
	uint32_t VirtualTextureFeedbackFactor; // 0x60(0x04)
	char bVirtualTextureEnableCompressZlib : 1; // 0x64(0x01)
	char bVirtualTextureEnableCompressCrunch : 1; // 0x64(0x01)
	char bClearCoatEnableSecondNormal : 1; // 0x64(0x01)
	char pad_57_0 : 3; // 0x57(0x01)
	char bAnisotropicBRDF : 1; // 0x64(0x01)
	int32_t ReflectionCaptureResolution; // 0x68(0x04)
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x6c(0x01)
	char bForwardShading : 1; // 0x6c(0x01)
	char bVertexFoggingForOpaque : 1; // 0x6c(0x01)
	char bAllowStaticLighting : 1; // 0x6c(0x01)
	char pad_5C_0 : 4; // 0x5c(0x01)
	char bUseNormalMapsForStaticLighting : 1; // 0x6c(0x01)
	char bGenerateMeshDistanceFields : 1; // 0x6c(0x01)
	char bEightBitMeshDistanceFields : 1; // 0x6c(0x01)
	char bGenerateLandscapeGIData : 1; // 0x6c(0x01)
	char bCompressMeshDistanceFields : 1; // 0x6d(0x01)
	float TessellationAdaptivePixelsPerTriangle; // 0x70(0x04)
	char bSeparateTranslucency : 1; // 0x74(0x01)
	enum class ETranslucentSortPolicy TranslucentSortPolicy; // 0x78(0x01)
	FVector TranslucentSortAxis; // 0x7c(0x0c)
	enum class ECustomDepthStencil CustomDepthStencil; // 0x88(0x01)
	char bCustomDepthTaaJitter : 1; // 0x8c(0x01)
	enum class EAlphaChannelMode bEnableAlphaChannelInPostProcessing; // 0x90(0x01)
	char bDefaultFeatureBloom : 1; // 0x94(0x01)
	char bDefaultFeatureAmbientOcclusion : 1; // 0x94(0x01)
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x94(0x01)
	char bDefaultFeatureAutoExposure : 1; // 0x94(0x01)
	enum class EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0x98(0x01)
	float DefaultFeatureAutoExposureBias; // 0x9c(0x04)
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 1; // 0xa0(0x01)
	char pad_76_0 : 1; // 0x76(0x01)
	char bUsePreExposure : 1; // 0xa0(0x01)
	char bEnablePreExposureOnlyInTheEditor : 1; // 0xa0(0x01)
	char bDefaultFeatureMotionBlur : 1; // 0xa0(0x01)
	char bDefaultFeatureLensFlare : 1; // 0xa0(0x01)
	char bTemporalUpsampling : 1; // 0xa0(0x01)
	char bSSGI : 1; // 0xa0(0x01)
	enum class EAntiAliasingMethod DefaultFeatureAntiAliasing; // 0xa4(0x01)
	enum class ELightUnits DefaultLightUnits; // 0xa5(0x01)
	enum class EDefaultBackBufferPixelFormat DefaultBackBufferPixelFormat; // 0xa6(0x01)
	char bRenderUnbuiltPreviewShadowsInGame : 1; // 0xa8(0x01)
	char pad_7A_0 : 1; // 0x7a(0x01)
	char bStencilForLODDither : 1; // 0xa8(0x01)
	enum class EEarlyZPass EarlyZPass; // 0xac(0x01)
	char bEarlyZPassOnlyMaterialMasking : 1; // 0xb0(0x01)
	char bDBuffer : 1; // 0xb0(0x01)
	enum class EClearSceneOptions ClearSceneMethod; // 0xb4(0x01)
	char bBasePassOutputsVelocity : 1; // 0xb8(0x01)
	char bVertexDeformationOutputsVelocity : 1; // 0xb8(0x01)
	char bSelectiveBasePassOutputs : 1; // 0xb8(0x01)
	char bDefaultParticleCutouts : 1; // 0xb8(0x01)
	int32_t GPUSimulationTextureSizeX; // 0xbc(0x04)
	int32_t GPUSimulationTextureSizeY; // 0xc0(0x04)
	char bGlobalClipPlane : 1; // 0xc4(0x01)
	enum class EGBufferFormat GBufferFormat; // 0xc8(0x01)
	char bUseGPUMorphTargets : 1; // 0xcc(0x01)
	char bNvidiaAftermathEnabled : 1; // 0xcc(0x01)
	char bMultiView : 1; // 0xcc(0x01)
	char bMobilePostProcessing : 1; // 0xcc(0x01)
	char bMobileMultiView : 1; // 0xcc(0x01)
	char bMobileUseHWsRGBEncoding : 1; // 0xcc(0x01)
	char bRoundRobinOcclusion : 1; // 0xcc(0x01)
	char pad_87_0 : 7; // 0x87(0x01)
	char bODSCapture : 1; // 0xcc(0x01)
	char bMeshStreaming : 1; // 0xcd(0x01)
	float WireframeCullThreshold; // 0xd0(0x04)
	char bEnableRayTracing : 1; // 0xd4(0x01)
	char bEnableRayTracingTextureLOD : 1; // 0xd4(0x01)
	char bSupportStationarySkylight : 1; // 0xd4(0x01)
	char bSupportLowQualityLightmaps : 1; // 0xd4(0x01)
	char bSupportPointLightWholeSceneShadows : 1; // 0xd4(0x01)
	char bSupportAtmosphericFog : 1; // 0xd4(0x01)
	char bSupportSkyAtmosphere : 1; // 0xd4(0x01)
	char pad_8D_0 : 7; // 0x8d(0x01)
	char bSupportSkyAtmosphereAffectsHeightFog : 1; // 0xd4(0x01)
	char bSupportSkinCacheShaders : 1; // 0xd5(0x01)
	enum class ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; // 0xd8(0x01)
	float SkinCacheSceneMemoryLimitInMB; // 0xdc(0x04)
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xe0(0x01)
	char bMobileEnableMovableLightCSMShaderCulling : 1; // 0xe0(0x01)
	char bMobileAllowDistanceFieldShadows : 1; // 0xe0(0x01)
	char bMobileAllowMovableDirectionalLights : 1; // 0xe0(0x01)
	uint32_t MobileNumDynamicPointLights; // 0xe4(0x04)
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xe8(0x01)
	char bMobileAllowMovableSpotlights : 1; // 0xe8(0x01)
	char bSupport16BitBoneIndex : 1; // 0xe8(0x01)
	char pad_98_0 : 3; // 0x98(0x01)
	char bGPUSkinLimit2BoneInfluences : 1; // 0xe8(0x01)
	char bSupportDepthOnlyIndexBuffers : 1; // 0xe8(0x01)
	char bSupportReversedIndexBuffers : 1; // 0xe8(0x01)
	char bSupportMaterialLayers : 1; // 0xe8(0x01)
	char bLPV : 1; // 0xe8(0x01)
};

// Class Engine.RendererOverrideSettings
// Size: 0x40 (Inherited: 0x38)
struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutations : 1; // 0x38(0x01)
	char bForceRecomputeTangents : 1; // 0x38(0x01)
};

// Class Engine.ReplicationDriver
// Size: 0x28 (Inherited: 0x28)
struct UReplicationDriver : UObject {
};

// Class Engine.ReplicationConnectionDriver
// Size: 0x28 (Inherited: 0x28)
struct UReplicationConnectionDriver : UObject {
};

// Class Engine.ReporterBase
// Size: 0x30 (Inherited: 0x28)
struct UReporterBase : UObject {
};

// Class Engine.ReporterGraph
// Size: 0xa8 (Inherited: 0x30)
struct UReporterGraph : UReporterBase {
};

// Class Engine.ReverbEffect
// Size: 0x58 (Inherited: 0x28)
struct UReverbEffect : UObject {
	float Density; // 0x28(0x04)
	float Diffusion; // 0x2c(0x04)
	float Gain; // 0x30(0x04)
	float GainHF; // 0x34(0x04)
	float DecayTime; // 0x38(0x04)
	float DecayHFRatio; // 0x3c(0x04)
	float ReflectionsGain; // 0x40(0x04)
	float ReflectionsDelay; // 0x44(0x04)
	float LateGain; // 0x48(0x04)
	float LateDelay; // 0x4c(0x04)
	float AirAbsorptionGainHF; // 0x50(0x04)
	float RoomRolloffFactor; // 0x54(0x04)
};

// Class Engine.Rig
// Size: 0x50 (Inherited: 0x28)
struct URig : UObject {
	TArray<FTransformBase> TransformBases; // 0x30(0x10)
	TArray<FNode> Nodes; // 0x40(0x10)
};

// Class Engine.RotatingMovementComponent
// Size: 0x110 (Inherited: 0xf0)
struct URotatingMovementComponent : UMovementComponent {
	FRotator RotationRate; // 0xf0(0x0c)
	FVector PivotTranslation; // 0xfc(0x0c)
	char bRotationInLocalSpace : 1; // 0x108(0x01)
};

// Class Engine.RuntimeOptionsBase
// Size: 0x38 (Inherited: 0x28)
struct URuntimeOptionsBase : UObject {
};

// Class Engine.RuntimeVirtualTexture
// Size: 0xa0 (Inherited: 0x28)
struct URuntimeVirtualTexture : UObject {
	enum class ERuntimeVirtualTextureMaterialType MaterialType; // 0x28(0x01)
	bool bCompressTextures; // 0x29(0x01)
	bool bEnable; // 0x2a(0x01)
	bool bClearTextures; // 0x2b(0x01)
	bool bSinglePhysicalSpace; // 0x2c(0x01)
	bool bPrivateSpace; // 0x2d(0x01)
	bool bEnableScalability; // 0x2e(0x01)
	int32_t Size; // 0x30(0x04)
	int32_t TileCount; // 0x34(0x04)
	int32_t TileSize; // 0x38(0x04)
	int32_t TileBorderSize; // 0x3c(0x04)
	int32_t StreamLowMips; // 0x40(0x04)
	URuntimeVirtualTextureStreamingProxy* StreamingTexture; // 0x48(0x08)
	bool bEnableCompressCrunch; // 0x50(0x01)
	int32_t RemoveLowMips; // 0x54(0x04)

	int32_t GetTileSize();
	int32_t GetTileCount();
	int32_t GetTileBorderSize();
	int32_t GetSize();
};

// Class Engine.RuntimeVirtualTextureComponent
// Size: 0x210 (Inherited: 0x1f0)
struct URuntimeVirtualTextureComponent : USceneComponent {
	URuntimeVirtualTexture* VirtualTexture; // 0x1f0(0x08)
	bool bUseStreamingLowMipsInEditor; // 0x1f8(0x01)
	AActor* BoundsSourceActor; // 0x200(0x08)

	FTransform GetVirtualTextureTransform();
};

// Class Engine.RuntimeVirtualTextureStreamingProxy
// Size: 0x100 (Inherited: 0xe8)
struct URuntimeVirtualTextureStreamingProxy : UTexture2D {
	FVirtualTextureBuildSettings Settings; // 0xe8(0x0c)
	bool bSinglePhysicalSpace; // 0xf4(0x01)
	uint32_t BuildHash; // 0xf8(0x04)
};

// Class Engine.RuntimeVirtualTextureVolume
// Size: 0x228 (Inherited: 0x220)
struct ARuntimeVirtualTextureVolume : AActor {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x220(0x08)
};

// Class Engine.RVOAvoidanceInterface
// Size: 0x28 (Inherited: 0x28)
struct URVOAvoidanceInterface : UInterface {
};

// Class Engine.Scene
// Size: 0x28 (Inherited: 0x28)
struct UScene : UObject {
};

// Class Engine.SceneCapture2D
// Size: 0x238 (Inherited: 0x230)
struct ASceneCapture2D : ASceneCapture {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x230(0x08)

	void OnInterpToggle(bool bEnable);
};

// Class Engine.SceneCaptureComponentCube
// Size: 0x2c0 (Inherited: 0x290)
struct USceneCaptureComponentCube : USceneCaptureComponent {
	UTextureRenderTargetCube* TextureTarget; // 0x288(0x08)
	bool bCaptureRotation; // 0x290(0x01)
	UTextureRenderTargetCube* TextureTargetLeft; // 0x298(0x08)
	UTextureRenderTargetCube* TextureTargetRight; // 0x2a0(0x08)
	UTextureRenderTarget2D* TextureTargetODS; // 0x2a8(0x08)
	float IPD; // 0x2b0(0x04)

	void CaptureScene();
};

// Class Engine.SceneCaptureCube
// Size: 0x238 (Inherited: 0x230)
struct ASceneCaptureCube : ASceneCapture {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x230(0x08)

	void OnInterpToggle(bool bEnable);
};

// Class Engine.SCS_Node
// Size: 0xd8 (Inherited: 0x28)
struct USCS_Node : UObject {
	UObject* ComponentClass; // 0x28(0x08)
	UActorComponent* ComponentTemplate; // 0x30(0x08)
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x38(0x48)
	FName AttachToName; // 0x80(0x08)
	FName ParentComponentOrVariableName; // 0x88(0x08)
	FName ParentComponentOwnerClassName; // 0x90(0x08)
	bool bIsParentComponentNative; // 0x98(0x01)
	TArray<USCS_Node*> ChildNodes; // 0xa0(0x10)
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xb0(0x10)
	FGuid VariableGuid; // 0xc0(0x10)
	FName InternalVariableName; // 0xd0(0x08)
};

// Class Engine.Selection
// Size: 0xa0 (Inherited: 0x28)
struct USelection : UObject {
};

// Class Engine.ServerStatReplicator
// Size: 0x2e8 (Inherited: 0x220)
struct AServerStatReplicator : AInfo {
	bool bUpdateStatNet; // 0x220(0x01)
	bool bOverwriteClientStats; // 0x221(0x01)
	uint32_t Channels; // 0x224(0x04)
	uint32_t InRate; // 0x228(0x04)
	uint32_t OutRate; // 0x22c(0x04)
	uint32_t MaxPacketOverhead; // 0x234(0x04)
	uint32_t InRateClientMax; // 0x238(0x04)
	uint32_t InRateClientMin; // 0x23c(0x04)
	uint32_t InRateClientAvg; // 0x240(0x04)
	uint32_t InPacketsClientMax; // 0x244(0x04)
	uint32_t InPacketsClientMin; // 0x248(0x04)
	uint32_t InPacketsClientAvg; // 0x24c(0x04)
	uint32_t OutRateClientMax; // 0x250(0x04)
	uint32_t OutRateClientMin; // 0x254(0x04)
	uint32_t OutRateClientAvg; // 0x258(0x04)
	uint32_t OutPacketsClientMax; // 0x25c(0x04)
	uint32_t OutPacketsClientMin; // 0x260(0x04)
	uint32_t OutPacketsClientAvg; // 0x264(0x04)
	uint32_t NetNumClients; // 0x268(0x04)
	uint32_t InPackets; // 0x26c(0x04)
	uint32_t OutPackets; // 0x270(0x04)
	uint32_t InBunches; // 0x274(0x04)
	uint32_t OutBunches; // 0x278(0x04)
	uint32_t OutLoss; // 0x27c(0x04)
	uint32_t InLoss; // 0x280(0x04)
	uint32_t VoiceBytesSent; // 0x284(0x04)
	uint32_t VoiceBytesRecv; // 0x288(0x04)
	uint32_t VoicePacketsSent; // 0x28c(0x04)
	uint32_t VoicePacketsRecv; // 0x290(0x04)
	uint32_t PercentInVoice; // 0x294(0x04)
	uint32_t PercentOutVoice; // 0x298(0x04)
	uint32_t NumActorChannels; // 0x29c(0x04)
	uint32_t NumConsideredActors; // 0x2a0(0x04)
	uint32_t PrioritizedActors; // 0x2a4(0x04)
	uint32_t NumRelevantActors; // 0x2a8(0x04)
	uint32_t NumRelevantDeletedActors; // 0x2ac(0x04)
	uint32_t NumReplicatedActorAttempts; // 0x2b0(0x04)
	uint32_t NumReplicatedActors; // 0x2b4(0x04)
	uint32_t NumActors; // 0x2b8(0x04)
	uint32_t NumNetActors; // 0x2bc(0x04)
	uint32_t NumDormantActors; // 0x2c0(0x04)
	uint32_t NumInitiallyDormantActors; // 0x2c4(0x04)
	uint32_t NumNetGUIDsAckd; // 0x2c8(0x04)
	uint32_t NumNetGUIDsPending; // 0x2cc(0x04)
	uint32_t NumNetGUIDsUnAckd; // 0x2d0(0x04)
	uint32_t ObjPathBytes; // 0x2d4(0x04)
	uint32_t NetGUIDOutRate; // 0x2d8(0x04)
	uint32_t NetGUIDInRate; // 0x2dc(0x04)
	uint32_t NetSaturated; // 0x2e0(0x04)
};

// Class Engine.ShadowMapTexture2D
// Size: 0xf0 (Inherited: 0xe8)
struct UShadowMapTexture2D : UTexture2D {
	enum class EShadowMapFlags ShadowmapFlags; // 0xe8(0x01)
};

// Class Engine.SimpleConstructionScript
// Size: 0xa0 (Inherited: 0x28)
struct USimpleConstructionScript : UObject {
	TArray<USCS_Node*> RootNodes; // 0x28(0x10)
	TArray<USCS_Node*> AllNodes; // 0x38(0x10)
	USCS_Node* DefaultSceneRootNode; // 0x48(0x08)
};

// Class Engine.SkeletalMeshActor
// Size: 0x2a8 (Inherited: 0x220)
struct ASkeletalMeshActor : AActor {
	char bShouldDoAnimNotifies : 1; // 0x228(0x01)
	char bWakeOnLevelStart : 1; // 0x228(0x01)
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x230(0x08)
	USkeletalMesh* ReplicatedMesh; // 0x238(0x08)
	UPhysicsAsset* ReplicatedPhysAsset; // 0x240(0x08)
	UMaterialInterface* ReplicatedMaterial0; // 0x248(0x08)
	UMaterialInterface* ReplicatedMaterial1; // 0x250(0x08)

	void OnRep_ReplicatedPhysAsset();
	void OnRep_ReplicatedMesh();
	void OnRep_ReplicatedMaterial1();
	void OnRep_ReplicatedMaterial0();
};

// Class Engine.SkeletalMeshEditorData
// Size: 0x28 (Inherited: 0x28)
struct USkeletalMeshEditorData : UObject {
};

// Class Engine.SkeletalMeshLODSettings
// Size: 0x50 (Inherited: 0x30)
struct USkeletalMeshLODSettings : UDataAsset {
	FPerPlatformInt MinLOD; // 0x30(0x04)
	FPerPlatformBool DisableBelowMinLodStripping; // 0x34(0x01)
	FPerPlatformBool bSupportLODStreaming; // 0x35(0x01)
	FPerPlatformInt MaxNumStreamedLODs; // 0x38(0x04)
	FPerPlatformInt MaxNumOptionalLODs; // 0x3c(0x04)
	TArray<FSkeletalMeshLODGroupSettings> LODGroups; // 0x40(0x10)
};

// Class Engine.SkeletalMeshSimplificationSettings
// Size: 0x40 (Inherited: 0x38)
struct USkeletalMeshSimplificationSettings : UDeveloperSettings {
	FName SkeletalMeshReductionModuleName; // 0x38(0x08)
};

// Class Engine.SkeletalMeshSocket
// Size: 0x60 (Inherited: 0x28)
struct USkeletalMeshSocket : UObject {
	FName SocketName; // 0x28(0x08)
	FName BoneName; // 0x30(0x08)
	FVector RelativeLocation; // 0x38(0x0c)
	FRotator RelativeRotation; // 0x44(0x0c)
	FVector RelativeScale; // 0x50(0x0c)
	bool bForceAlwaysAnimated; // 0x5c(0x01)

	void InitializeSocketFromLocation(USkeletalMeshComponent* SkelComp, FVector WorldLocation, FVector WorldNormal);
	FVector GetSocketLocation(USkeletalMeshComponent* SkelComp);
};

// Class Engine.SkyAtmosphereComponent
// Size: 0x2c0 (Inherited: 0x1f0)
struct USkyAtmosphereComponent : USceneComponent {
	enum class ESkyAtmosphereTransformMode TransformMode; // 0x1f0(0x01)
	float BottomRadius; // 0x1f4(0x04)
	FColor GroundAlbedo; // 0x1f8(0x04)
	float AtmosphereHeight; // 0x1fc(0x04)
	float MultiScatteringFactor; // 0x200(0x04)
	float RayleighScatteringScale; // 0x204(0x04)
	FLinearColor RayleighScattering; // 0x208(0x10)
	float RayleighExponentialDistribution; // 0x218(0x04)
	float MieScatteringScale; // 0x21c(0x04)
	FLinearColor MieScattering; // 0x220(0x10)
	float MieAbsorptionScale; // 0x230(0x04)
	FLinearColor MieAbsorption; // 0x234(0x10)
	float MieAnisotropy; // 0x244(0x04)
	float MieExponentialDistribution; // 0x248(0x04)
	float OtherAbsorptionScale; // 0x24c(0x04)
	FLinearColor OtherAbsorption; // 0x250(0x10)
	FTentDistribution OtherTentDistribution; // 0x260(0x0c)
	FLinearColor SkyLuminanceFactor; // 0x26c(0x10)
	float AerialPespectiveViewDistanceScale; // 0x27c(0x04)
	float HeightFogContribution; // 0x280(0x04)
	float TransmittanceMinLightElevationAngle; // 0x284(0x04)
	FGuid bStaticLightingBuiltGUID; // 0x2ac(0x10)

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
	void OverrideAtmosphereLightDirection(int32_t AtmosphereLightIndex, FVector LightDirection);
};

// Class Engine.SkyAtmosphere
// Size: 0x228 (Inherited: 0x220)
struct ASkyAtmosphere : AInfo {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x220(0x08)
};

// Class Engine.SkyLightComponent
// Size: 0x3f0 (Inherited: 0x220)
struct USkyLightComponent : ULightComponentBase {
	enum class ESkyLightSourceType SourceType; // 0x220(0x01)
	UTextureCube* Cubemap; // 0x228(0x08)
	float SourceCubemapAngle; // 0x230(0x04)
	int32_t CubemapResolution; // 0x234(0x04)
	float SkyDistanceThreshold; // 0x238(0x04)
	bool bCaptureEmissiveOnly; // 0x23c(0x01)
	bool bLowerHemisphereIsBlack; // 0x23d(0x01)
	FLinearColor LowerHemisphereColor; // 0x240(0x10)
	float OcclusionMaxDistance; // 0x250(0x04)
	float Contrast; // 0x254(0x04)
	float OcclusionExponent; // 0x258(0x04)
	float MinOcclusion; // 0x25c(0x04)
	FColor OcclusionTint; // 0x260(0x04)
	enum class EOcclusionCombineMode OcclusionCombineMode; // 0x264(0x01)
	UTextureCube* BlendDestinationCubemap; // 0x318(0x08)

	void SetVolumetricScatteringIntensity(float NewIntensity);
	void SetOcclusionTint(FColor InTint);
	void SetOcclusionExponent(float InOcclusionExponent);
	void SetOcclusionContrast(float InOcclusionContrast);
	void SetMinOcclusion(float InMinOcclusion);
	void SetLowerHemisphereColor(FLinearColor InLowerHemisphereColor);
	void SetLightColor(FLinearColor NewLightColor);
	void SetIntensity(float NewIntensity);
	void SetIndirectLightingIntensity(float NewIntensity);
	void SetCubemapBlend(UTextureCube* SourceCubemap, UTextureCube* DestinationCubemap, float InBlendFraction);
	void SetCubemap(UTextureCube* NewCubemap);
	void RecaptureSky();
};

// Class Engine.SlateBrushAsset
// Size: 0xb0 (Inherited: 0x28)
struct USlateBrushAsset : UObject {
	FSlateBrush Brush; // 0x28(0x88)
};

// Class Engine.SlateTextureAtlasInterface
// Size: 0x28 (Inherited: 0x28)
struct USlateTextureAtlasInterface : UInterface {
};

// Class Engine.SmokeTestCommandlet
// Size: 0x80 (Inherited: 0x80)
struct USmokeTestCommandlet : UCommandlet {
};

// Class Engine.SoundAttenuation
// Size: 0x3c8 (Inherited: 0x28)
struct USoundAttenuation : UObject {
	FSoundAttenuationSettings Attenuation; // 0x28(0x3a0)
};

// Class Engine.SoundClass
// Size: 0xb8 (Inherited: 0x28)
struct USoundClass : UObject {
	FSoundClassProperties Properties; // 0x28(0x58)
	TArray<USoundClass*> ChildClasses; // 0x80(0x10)
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0x90(0x10)
	FSoundModulation Modulation; // 0xa0(0x10)
	USoundClass* ParentClass; // 0xb0(0x08)
};

// Class Engine.SoundConcurrency
// Size: 0x48 (Inherited: 0x28)
struct USoundConcurrency : UObject {
	FSoundConcurrencySettings Concurrency; // 0x28(0x20)
};

// Class Engine.SoundCue
// Size: 0x538 (Inherited: 0x160)
struct USoundCue : USoundBase {
	char bPrimeOnLoad : 1; // 0x160(0x01)
	USoundNode* FirstNode; // 0x168(0x08)
	float VolumeMultiplier; // 0x170(0x04)
	float PitchMultiplier; // 0x174(0x04)
	FSoundAttenuationSettings AttenuationOverrides; // 0x178(0x3a0)
	float SubtitlePriority; // 0x518(0x04)
	char bOverrideAttenuation : 1; // 0x520(0x01)
	char bExcludeFromRandomNodeBranchCulling : 1; // 0x520(0x01)
	int32_t CookedQualityIndex; // 0x524(0x04)
	char bHasPlayWhenSilent : 1; // 0x528(0x01)
};

// Class Engine.SoundEffectSourcePresetChain
// Size: 0x40 (Inherited: 0x28)
struct USoundEffectSourcePresetChain : UObject {
	TArray<FSourceEffectChainEntry> Chain; // 0x28(0x10)
	char bPlayEffectChainTails : 1; // 0x38(0x01)
};

// Class Engine.SoundGroups
// Size: 0x88 (Inherited: 0x28)
struct USoundGroups : UObject {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x28(0x10)
};

// Class Engine.SoundMix
// Size: 0x90 (Inherited: 0x28)
struct USoundMix : UObject {
	char bApplyEQ : 1; // 0x28(0x01)
	float EQPriority; // 0x2c(0x04)
	FAudioEQEffect EQSettings; // 0x30(0x40)
	TArray<FSoundClassAdjuster> SoundClassEffects; // 0x70(0x10)
	float InitialDelay; // 0x80(0x04)
	float FadeInTime; // 0x84(0x04)
	float Duration; // 0x88(0x04)
	float FadeOutTime; // 0x8c(0x04)
};

// Class Engine.SoundNode
// Size: 0x48 (Inherited: 0x28)
struct USoundNode : UObject {
	TArray<USoundNode*> ChildNodes; // 0x28(0x10)
};

// Class Engine.SoundNodeAssetReferencer
// Size: 0x48 (Inherited: 0x48)
struct USoundNodeAssetReferencer : USoundNode {
};

// Class Engine.SoundNodeAttenuation
// Size: 0x3f8 (Inherited: 0x48)
struct USoundNodeAttenuation : USoundNode {
	USoundAttenuation* AttenuationSettings; // 0x48(0x08)
	FSoundAttenuationSettings AttenuationOverrides; // 0x50(0x3a0)
	char bOverrideAttenuation : 1; // 0x3f0(0x01)
};

// Class Engine.SoundNodeBranch
// Size: 0x50 (Inherited: 0x48)
struct USoundNodeBranch : USoundNode {
	FName BoolParameterName; // 0x48(0x08)
};

// Class Engine.SoundNodeConcatenator
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeConcatenator : USoundNode {
	TArray<float> InputVolume; // 0x48(0x10)
};

// Class Engine.SoundNodeDelay
// Size: 0x50 (Inherited: 0x48)
struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x48(0x04)
	float DelayMax; // 0x4c(0x04)
};

// Class Engine.SoundNodeDialoguePlayer
// Size: 0x70 (Inherited: 0x48)
struct USoundNodeDialoguePlayer : USoundNode {
	FDialogueWaveParameter DialogueWaveParameter; // 0x48(0x20)
	char bLooping : 1; // 0x68(0x01)
};

// Class Engine.SoundNodeDistanceCrossFade
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeDistanceCrossFade : USoundNode {
	TArray<FDistanceDatum> CrossFadeInput; // 0x48(0x10)
};

// Class Engine.SoundNodeDoppler
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x48(0x04)
	bool bUseSmoothing; // 0x4c(0x01)
	float SmoothingInterpSpeed; // 0x50(0x04)
};

// Class Engine.SoundNodeEnveloper
// Size: 0x190 (Inherited: 0x48)
struct USoundNodeEnveloper : USoundNode {
	float LoopStart; // 0x48(0x04)
	float LoopEnd; // 0x4c(0x04)
	float DurationAfterLoop; // 0x50(0x04)
	int32_t LoopCount; // 0x54(0x04)
	char bLoopIndefinitely : 1; // 0x58(0x01)
	char bLoop : 1; // 0x58(0x01)
	UDistributionFloatConstantCurve* VolumeInterpCurve; // 0x60(0x08)
	UDistributionFloatConstantCurve* PitchInterpCurve; // 0x68(0x08)
	FRuntimeFloatCurve VolumeCurve; // 0x70(0x88)
	FRuntimeFloatCurve PitchCurve; // 0xf8(0x88)
	float PitchMin; // 0x180(0x04)
	float PitchMax; // 0x184(0x04)
	float VolumeMin; // 0x188(0x04)
	float VolumeMax; // 0x18c(0x04)
};

// Class Engine.SoundNodeGroupControl
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeGroupControl : USoundNode {
	TArray<int32_t> GroupSizes; // 0x48(0x10)
};

// Class Engine.SoundNodeLooping
// Size: 0x50 (Inherited: 0x48)
struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; // 0x48(0x04)
	char bLoopIndefinitely : 1; // 0x4c(0x01)
};

// Class Engine.SoundNodeMature
// Size: 0x48 (Inherited: 0x48)
struct USoundNodeMature : USoundNode {
};

// Class Engine.SoundNodeMixer
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeMixer : USoundNode {
	TArray<float> InputVolume; // 0x48(0x10)
};

// Class Engine.SoundNodeModulator
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x48(0x04)
	float PitchMax; // 0x4c(0x04)
	float VolumeMin; // 0x50(0x04)
	float VolumeMax; // 0x54(0x04)
};

// Class Engine.SoundNodeModulatorContinuous
// Size: 0x88 (Inherited: 0x48)
struct USoundNodeModulatorContinuous : USoundNode {
	FModulatorContinuousParams PitchModulationParams; // 0x48(0x20)
	FModulatorContinuousParams VolumeModulationParams; // 0x68(0x20)
};

// Class Engine.SoundNodeOscillator
// Size: 0x70 (Inherited: 0x48)
struct USoundNodeOscillator : USoundNode {
	char bModulateVolume : 1; // 0x48(0x01)
	char bModulatePitch : 1; // 0x48(0x01)
	float AmplitudeMin; // 0x4c(0x04)
	float AmplitudeMax; // 0x50(0x04)
	float FrequencyMin; // 0x54(0x04)
	float FrequencyMax; // 0x58(0x04)
	float OffsetMin; // 0x5c(0x04)
	float OffsetMax; // 0x60(0x04)
	float CenterMin; // 0x64(0x04)
	float CenterMax; // 0x68(0x04)
};

// Class Engine.SoundNodeParamCrossFade
// Size: 0x60 (Inherited: 0x58)
struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	FName ParamName; // 0x58(0x08)
};

// Class Engine.SoundNodeQualityLevel
// Size: 0x48 (Inherited: 0x48)
struct USoundNodeQualityLevel : USoundNode {
};

// Class Engine.SoundNodeRandom
// Size: 0x78 (Inherited: 0x48)
struct USoundNodeRandom : USoundNode {
	TArray<float> Weights; // 0x48(0x10)
	TArray<bool> HasBeenUsed; // 0x58(0x10)
	int32_t NumRandomUsed; // 0x68(0x04)
	int32_t PreselectAtLevelLoad; // 0x6c(0x04)
	char bShouldExcludeFromBranchCulling : 1; // 0x70(0x01)
	char bSoundCueExcludedFromBranchCulling : 1; // 0x70(0x01)
	char bRandomizeWithoutReplacement : 1; // 0x70(0x01)
};

// Class Engine.SoundNodeSoundClass
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeSoundClass : USoundNode {
	USoundClass* SoundClassOverride; // 0x48(0x08)
};

// Class Engine.SoundNodeSwitch
// Size: 0x50 (Inherited: 0x48)
struct USoundNodeSwitch : USoundNode {
	FName IntParameterName; // 0x48(0x08)
};

// Class Engine.SoundNodeWaveParam
// Size: 0x50 (Inherited: 0x48)
struct USoundNodeWaveParam : USoundNode {
	FName WaveParameterName; // 0x48(0x08)
};

// Class Engine.SoundNodeWavePlayer
// Size: 0x80 (Inherited: 0x48)
struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x48(0x28)
	USoundWave* SoundWave; // 0x70(0x08)
	char pad_78_0 : 1; // 0x78(0x01)
	char bLooping : 1; // 0x78(0x01)
};

// Class Engine.SoundSourceBus
// Size: 0x328 (Inherited: 0x310)
struct USoundSourceBus : USoundWave {
	enum class ESourceBusChannels SourceBusChannels; // 0x310(0x01)
	float SourceBusDuration; // 0x314(0x04)
	char bAutoDeactivateWhenSilent : 1; // 0x318(0x01)
};

// Class Engine.SoundSubmixBase
// Size: 0x38 (Inherited: 0x28)
struct USoundSubmixBase : UObject {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x28(0x10)
};

// Class Engine.SoundSubmixWithParentBase
// Size: 0x40 (Inherited: 0x38)
struct USoundSubmixWithParentBase : USoundSubmixBase {
	USoundSubmixBase* ParentSubmix; // 0x38(0x08)
};

// Class Engine.SoundSubmix
// Size: 0x88 (Inherited: 0x40)
struct USoundSubmix : USoundSubmixWithParentBase {
	char bMuteWhenBackgrounded : 1; // 0x40(0x01)
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x48(0x10)
	USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings; // 0x58(0x08)
	int32_t EnvelopeFollowerAttackTime; // 0x60(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x64(0x04)
	float OutputVolume; // 0x68(0x04)
	FMulticastInlineDelegate OnSubmixRecordedFileDone; // 0x70(0x10)

	void StopRecordingOutput(UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, FString Name, FString Path, USoundWave* ExistingSoundWaveToOverwrite);
	void StopEnvelopeFollowing(UObject* WorldContextObject);
	void StartRecordingOutput(UObject* WorldContextObject, float ExpectedDuration);
	void StartEnvelopeFollowing(UObject* WorldContextObject);
	void SetSubmixOutputVolume(UObject* WorldContextObject, float InOutputVolume);
	void AddEnvelopeFollowerDelegate(UObject* WorldContextObject, FDelegate OnSubmixEnvelopeBP);
};

// Class Engine.SoundfieldSubmix
// Size: 0x68 (Inherited: 0x40)
struct USoundfieldSubmix : USoundSubmixWithParentBase {
	FName SoundfieldEncodingFormat; // 0x40(0x08)
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48(0x08)
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50(0x10)
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60(0x08)
};

// Class Engine.EndpointSubmix
// Size: 0x50 (Inherited: 0x38)
struct UEndpointSubmix : USoundSubmixBase {
	FName EndpointType; // 0x38(0x08)
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40(0x08)
	UAudioEndpointSettingsBase* EndpointSettings; // 0x48(0x08)
};

// Class Engine.SoundfieldEndpointSubmix
// Size: 0x70 (Inherited: 0x38)
struct USoundfieldEndpointSubmix : USoundSubmixBase {
	FName SoundfieldEndpointType; // 0x38(0x08)
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40(0x08)
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48(0x08)
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x50(0x08)
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58(0x08)
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60(0x10)
};

// Class Engine.SpectatorPawn
// Size: 0x2a8 (Inherited: 0x2a8)
struct ASpectatorPawn : ADefaultPawn {
};

// Class Engine.SpectatorPawnMovement
// Size: 0x158 (Inherited: 0x150)
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x150(0x01)
};

// Class Engine.SphereReflectionCapture
// Size: 0x230 (Inherited: 0x228)
struct ASphereReflectionCapture : AReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x228(0x08)
};

// Class Engine.SphereReflectionCaptureComponent
// Size: 0x280 (Inherited: 0x270)
struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x268(0x04)
	float CaptureDistanceScale; // 0x26c(0x04)
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x270(0x08)
};

// Class Engine.SplineMetadata
// Size: 0x28 (Inherited: 0x28)
struct USplineMetadata : UObject {
};

// Class Engine.SplineComponent
// Size: 0x4e0 (Inherited: 0x3f0)
struct USplineComponent : UPrimitiveComponent {
	FSplineCurves SplineCurves; // 0x3f0(0x68)
	FInterpCurveVector SplineInfo; // 0x458(0x18)
	FInterpCurveQuat SplineRotInfo; // 0x470(0x18)
	FInterpCurveVector SplineScaleInfo; // 0x488(0x18)
	FInterpCurveFloat SplineReparamTable; // 0x4a0(0x18)
	bool bAllowSplineEditingPerInstance; // 0x4b8(0x01)
	int32_t ReparamStepsPerSegment; // 0x4bc(0x04)
	float Duration; // 0x4c0(0x04)
	bool bStationaryEndpoints; // 0x4c4(0x01)
	bool bSplineHasBeenEdited; // 0x4c5(0x01)
	bool bModifiedByConstructionScript; // 0x4c6(0x01)
	bool bInputSplinePointsToConstructionScript; // 0x4c7(0x01)
	bool bDrawDebug; // 0x4c8(0x01)
	bool bClosedLoop; // 0x4c9(0x01)
	bool bLoopPositionOverride; // 0x4ca(0x01)
	float LoopPosition; // 0x4cc(0x04)
	FVector DefaultUpVector; // 0x4d0(0x0c)

	void UpdateSpline();
	void SetWorldLocationAtSplinePoint(int32_t PointIndex, FVector InLocation);
	void SetUpVectorAtSplinePoint(int32_t PointIndex, FVector InUpVector, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline);
	void SetUnselectedSplineSegmentColor(FLinearColor SegmentColor);
	void SetTangentsAtSplinePoint(int32_t PointIndex, FVector InArriveTangent, FVector InLeaveTangent, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline);
	void SetTangentAtSplinePoint(int32_t PointIndex, FVector InTangent, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline);
	void SetSplineWorldPoints(TArray<FVector> Points);
	void SetSplinePointType(int32_t PointIndex, enum class ESplinePointType Type, bool bUpdateSpline);
	void SetSplinePoints(TArray<FVector> Points, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline);
	void SetSplineLocalPoints(TArray<FVector> Points);
	void SetSelectedSplineSegmentColor(FLinearColor SegmentColor);
	void SetLocationAtSplinePoint(int32_t PointIndex, FVector InLocation, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline);
	void SetDrawDebug(bool bShow);
	void SetDefaultUpVector(FVector UpVector, enum class ESplineCoordinateSpace CoordinateSpace);
	void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);
	void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);
	void RemoveSplinePoint(int32_t Index, bool bUpdateSpline);
	bool IsClosedLoop();
	FVector GetWorldTangentAtDistanceAlongSpline(float Distance);
	FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity);
	FRotator GetWorldRotationAtDistanceAlongSpline(float Distance);
	FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity);
	FVector GetWorldLocationAtSplinePoint(int32_t PointIndex);
	FVector GetWorldLocationAtDistanceAlongSpline(float Distance);
	FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity);
	FVector GetWorldDirectionAtDistanceAlongSpline(float Distance);
	FVector GetVectorPropertyAtSplinePoint(int32_t Index, FName PropertyName);
	FVector GetVectorPropertyAtSplineInputKey(float InKey, FName PropertyName);
	FVector GetUpVectorAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity);
	FVector GetUpVectorAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetUpVectorAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetUpVectorAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace);
	FTransform GetTransformAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity, bool bUseScale);
	FTransform GetTransformAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseScale);
	FTransform GetTransformAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseScale);
	FTransform GetTransformAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseScale);
	FVector GetTangentAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity);
	FVector GetTangentAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetTangentAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetTangentAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace);
	enum class ESplinePointType GetSplinePointType(int32_t PointIndex);
	float GetSplineLength();
	FVector GetScaleAtTime(float Time, bool bUseConstantVelocity);
	FVector GetScaleAtSplinePoint(int32_t PointIndex);
	FVector GetScaleAtSplineInputKey(float InKey);
	FVector GetScaleAtDistanceAlongSpline(float Distance);
	FRotator GetRotationAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity);
	FRotator GetRotationAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace);
	FRotator GetRotationAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace);
	FRotator GetRotationAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace);
	float GetRollAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity);
	float GetRollAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace);
	float GetRollAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace);
	float GetRollAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetRightVectorAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity);
	FVector GetRightVectorAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetRightVectorAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetRightVectorAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace);
	int32_t GetNumberOfSplineSegments();
	int32_t GetNumberOfSplinePoints();
	FVector GetLocationAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity);
	FVector GetLocationAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetLocationAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetLocationAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace);
	void GetLocationAndTangentAtSplinePoint(int32_t PointIndex, FVector Location, FVector Tangent, enum class ESplineCoordinateSpace CoordinateSpace);
	void GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, FVector LocalLocation, FVector LocalTangent);
	FVector GetLeaveTangentAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace);
	float GetInputKeyAtDistanceAlongSpline(float Distance);
	float GetFloatPropertyAtSplinePoint(int32_t Index, FName PropertyName);
	float GetFloatPropertyAtSplineInputKey(float InKey, FName PropertyName);
	float GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex);
	FVector GetDirectionAtTime(float Time, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseConstantVelocity);
	FVector GetDirectionAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetDirectionAtSplineInputKey(float InKey, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetDirectionAtDistanceAlongSpline(float Distance, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetDefaultUpVector(enum class ESplineCoordinateSpace CoordinateSpace);
	FVector GetArriveTangentAtSplinePoint(int32_t PointIndex, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector FindUpVectorClosestToWorldLocation(FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace);
	FTransform FindTransformClosestToWorldLocation(FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace, bool bUseScale);
	FVector FindTangentClosestToWorldLocation(FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector FindScaleClosestToWorldLocation(FVector WorldLocation);
	FRotator FindRotationClosestToWorldLocation(FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace);
	float FindRollClosestToWorldLocation(FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector FindRightVectorClosestToWorldLocation(FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace);
	FVector FindLocationClosestToWorldLocation(FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace);
	float FindInputKeyClosestToWorldLocation(FVector WorldLocation);
	FVector FindDirectionClosestToWorldLocation(FVector WorldLocation, enum class ESplineCoordinateSpace CoordinateSpace);
	void ClearSplinePoints(bool bUpdateSpline);
	void AddSplineWorldPoint(FVector Position);
	void AddSplinePointAtIndex(FVector Position, int32_t Index, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline);
	void AddSplinePoint(FVector Position, enum class ESplineCoordinateSpace CoordinateSpace, bool bUpdateSpline);
	void AddSplineLocalPoint(FVector Position);
	void AddPoints(TArray<FSplinePoint> Points, bool bUpdateSpline);
	void AddPoint(FSplinePoint Point, bool bUpdateSpline);
};

// Class Engine.SplineMeshActor
// Size: 0x228 (Inherited: 0x220)
struct ASplineMeshActor : AActor {
	USplineMeshComponent* SplineMeshComponent; // 0x220(0x08)
};

// Class Engine.SpotLightComponent
// Size: 0x360 (Inherited: 0x350)
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x350(0x04)
	float OuterConeAngle; // 0x354(0x04)
	float LightShaftConeAngle; // 0x358(0x04)

	void SetOuterConeAngle(float NewOuterConeAngle);
	void SetInnerConeAngle(float NewInnerConeAngle);
};

// Class Engine.SpringArmComponent
// Size: 0x280 (Inherited: 0x1f0)
struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x1f0(0x04)
	FVector SocketOffset; // 0x1f4(0x0c)
	FVector TargetOffset; // 0x200(0x0c)
	float ProbeSize; // 0x20c(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x210(0x01)
	char bDoCollisionTest : 1; // 0x214(0x01)
	char bUsePawnControlRotation : 1; // 0x214(0x01)
	char bInheritPitch : 1; // 0x214(0x01)
	char bInheritYaw : 1; // 0x214(0x01)
	char bInheritRoll : 1; // 0x214(0x01)
	char bEnableCameraLag : 1; // 0x214(0x01)
	char bEnableCameraRotationLag : 1; // 0x214(0x01)
	char bUseCameraLagSubstepping : 1; // 0x214(0x01)
	char bDrawDebugLagMarkers : 1; // 0x215(0x01)
	float CameraLagSpeed; // 0x218(0x04)
	float CameraRotationLagSpeed; // 0x21c(0x04)
	float CameraLagMaxTimeStep; // 0x220(0x04)
	float CameraLagMaxDistance; // 0x224(0x04)

	bool IsCollisionFixApplied();
	FVector GetUnfixedCameraPosition();
	FRotator GetTargetRotation();
};

// Class Engine.StaticMesh
// Size: 0x138 (Inherited: 0x40)
struct UStaticMesh : UStreamableRenderAsset {
	FPerPlatformInt MinLOD; // 0x60(0x04)
	float LpvBiasMultiplier; // 0x64(0x04)
	TArray<FStaticMaterial> StaticMaterials; // 0x68(0x10)
	float LightmapUVDensity; // 0x78(0x04)
	int32_t LightMapResolution; // 0x7c(0x04)
	int32_t LightMapCoordinateIndex; // 0x80(0x04)
	float DistanceFieldSelfShadowBias; // 0x84(0x04)
	UBodySetup* BodySetup; // 0x88(0x08)
	int32_t LODForCollision; // 0x90(0x04)
	char bGenerateMeshDistanceField : 1; // 0x94(0x01)
	char bStripComplexCollisionForConsole : 1; // 0x94(0x01)
	char bHasNavigationData : 1; // 0x94(0x01)
	char bSupportUniformlyDistributedSampling : 1; // 0x94(0x01)
	char bSupportPhysicalMaterialMasks : 1; // 0x94(0x01)
	char bSupportRayTracing : 1; // 0x94(0x01)
	char bIsBuiltAtRuntime : 1; // 0x94(0x01)
	char bAllowCPUAccess : 1; // 0x95(0x01)
	char pad_75_0 : 1; // 0x75(0x01)
	char bSupportGpuUniformlyDistributedSampling : 1; // 0x95(0x01)
	TArray<UStaticMeshSocket*> Sockets; // 0xb8(0x10)
	FVector PositiveBoundsExtension; // 0xd8(0x0c)
	FVector NegativeBoundsExtension; // 0xe4(0x0c)
	FBoxSphereBounds ExtendedBounds; // 0xf0(0x1c)
	int32_t ElementToIgnoreForTexFactor; // 0x10c(0x04)
	TArray<UAssetUserData*> AssetUserData; // 0x110(0x10)
	UObject* EditableMesh; // 0x128(0x08)
	UNavCollisionBase* NavCollision; // 0x130(0x08)

	void RemoveSocket(UStaticMeshSocket* Socket);
	int32_t GetNumSections(int32_t InLOD);
	int32_t GetNumLODs();
	void GetMinimumLODForPlatforms(TMap<FName, int32_t> PlatformMinimumLODs);
	int32_t GetMinimumLODForPlatform(FName PlatformName);
	int32_t GetMaterialIndex(FName MaterialSlotName);
	UMaterialInterface* GetMaterial(int32_t MaterialIndex);
	FBoxSphereBounds GetBounds();
	FBox GetBoundingBox();
	UStaticMeshSocket* FindSocket(FName InSocketName);
	UStaticMeshDescription* CreateStaticMeshDescription(UObject* Outer);
	void BuildFromStaticMeshDescriptions(TArray<UStaticMeshDescription*> StaticMeshDescriptions, bool bBuildSimpleCollision);
	void AddSocket(UStaticMeshSocket* Socket);
	FName AddMaterial(UMaterialInterface* Material);
};

// Class Engine.StaticMeshSocket
// Size: 0x68 (Inherited: 0x28)
struct UStaticMeshSocket : UObject {
	FName SocketName; // 0x28(0x08)
	FVector RelativeLocation; // 0x30(0x0c)
	FRotator RelativeRotation; // 0x3c(0x0c)
	FVector RelativeScale; // 0x48(0x0c)
	FString Tag; // 0x58(0x10)
};

// Class Engine.StereoLayerComponent
// Size: 0x2e0 (Inherited: 0x1f0)
struct UStereoLayerComponent : USceneComponent {
	char bLiveTexture : 1; // 0x1f0(0x01)
	char bSupportsDepth : 1; // 0x1f0(0x01)
	char bNoAlphaChannel : 1; // 0x1f0(0x01)
	UTexture* Texture; // 0x1f8(0x08)
	UTexture* LeftTexture; // 0x200(0x08)
	char bQuadPreserveTextureRatio : 1; // 0x208(0x01)
	FVector2D QuadSize; // 0x20c(0x08)
	FBox2D UVRect; // 0x214(0x14)
	float CylinderRadius; // 0x228(0x04)
	float CylinderOverlayArc; // 0x22c(0x04)
	int32_t CylinderHeight; // 0x230(0x04)
	FEquirectProps EquirectProps; // 0x234(0x48)
	enum class EStereoLayerType StereoLayerType; // 0x27c(0x01)
	enum class EStereoLayerShape StereoLayerShape; // 0x27d(0x01)
	UStereoLayerShape* Shape; // 0x280(0x08)
	int32_t Priority; // 0x288(0x04)

	void SetUVRect(FBox2D InUVRect);
	void SetTexture(UTexture* InTexture);
	void SetQuadSize(FVector2D InQuadSize);
	void SetPriority(int32_t InPriority);
	void SetLeftTexture(UTexture* InTexture);
	void SetEquirectProps(FEquirectProps InScaleBiases);
	void MarkTextureForUpdate();
	FBox2D GetUVRect();
	UTexture* GetTexture();
	FVector2D GetQuadSize();
	int32_t GetPriority();
	UTexture* GetLeftTexture();
};

// Class Engine.StereoLayerShape
// Size: 0x28 (Inherited: 0x28)
struct UStereoLayerShape : UObject {
};

// Class Engine.StereoLayerShapeQuad
// Size: 0x28 (Inherited: 0x28)
struct UStereoLayerShapeQuad : UStereoLayerShape {
};

// Class Engine.StereoLayerShapeCylinder
// Size: 0x38 (Inherited: 0x28)
struct UStereoLayerShapeCylinder : UStereoLayerShape {
	float Radius; // 0x28(0x04)
	float OverlayArc; // 0x2c(0x04)
	int32_t Height; // 0x30(0x04)

	void SetRadius(float InRadius);
	void SetOverlayArc(float InOverlayArc);
	void SetHeight(int32_t InHeight);
};

// Class Engine.StereoLayerShapeCubemap
// Size: 0x28 (Inherited: 0x28)
struct UStereoLayerShapeCubemap : UStereoLayerShape {
};

// Class Engine.StereoLayerShapeEquirect
// Size: 0x70 (Inherited: 0x28)
struct UStereoLayerShapeEquirect : UStereoLayerShape {
	FBox2D LeftUVRect; // 0x28(0x14)
	FBox2D RightUVRect; // 0x3c(0x14)
	FVector2D LeftScale; // 0x50(0x08)
	FVector2D RightScale; // 0x58(0x08)
	FVector2D LeftBias; // 0x60(0x08)
	FVector2D RightBias; // 0x68(0x08)

	void SetEquirectProps(FEquirectProps InScaleBiases);
};

// Class Engine.StereoLayerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UStereoLayerFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowSplashScreen();
	void SetSplashScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
	void HideSplashScreen();
	void EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);
};

// Class Engine.StringTable
// Size: 0x40 (Inherited: 0x28)
struct UStringTable : UObject {
};

// Class Engine.SubsurfaceProfile
// Size: 0xb8 (Inherited: 0x28)
struct USubsurfaceProfile : UObject {
	FSubsurfaceProfileStruct Settings; // 0x28(0x8c)
};

// Class Engine.SubsystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USubsystemBlueprintLibrary : UBlueprintFunctionLibrary {

	UWorldSubsystem* GetWorldSubsystem(UObject* contextObject, UWorldSubsystem* Class);
	ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(APlayerController* PlayerController, ULocalPlayerSubsystem* Class);
	ULocalPlayerSubsystem* GetLocalPlayerSubsystem(UObject* contextObject, ULocalPlayerSubsystem* Class);
	UGameInstanceSubsystem* GetGameInstanceSubsystem(UObject* contextObject, UGameInstanceSubsystem* Class);
	UEngineSubsystem* GetEngineSubsystem(UEngineSubsystem* Class);
};

// Class Engine.SubUVAnimation
// Size: 0x68 (Inherited: 0x28)
struct USubUVAnimation : UObject {
	UTexture2D* SubUVTexture; // 0x28(0x08)
	int32_t SubImages_Horizontal; // 0x30(0x04)
	int32_t SubImages_Vertical; // 0x34(0x04)
	enum class ESubUVBoundingVertexCount BoundingMode; // 0x38(0x01)
	enum class EOpacitySourceMode OpacitySourceMode; // 0x39(0x01)
	float AlphaThreshold; // 0x3c(0x04)
};

// Class Engine.TimecodeProvider
// Size: 0x30 (Inherited: 0x28)
struct UTimecodeProvider : UObject {
	float FrameDelay; // 0x28(0x04)

	FTimecode GetTimecode();
	enum class ETimecodeProviderSynchronizationState GetSynchronizationState();
	FQualifiedFrameTime GetQualifiedFrameTime();
	FFrameRate GetFrameRate();
	FTimecode GetDelayedTimecode();
	FQualifiedFrameTime GetDelayedQualifiedFrameTime();
};

// Class Engine.SystemTimeTimecodeProvider
// Size: 0x40 (Inherited: 0x30)
struct USystemTimeTimecodeProvider : UTimecodeProvider {
	FFrameRate FrameRate; // 0x30(0x08)
	bool bGenerateFullFrame; // 0x38(0x01)
	bool bUseHighPerformanceClock; // 0x39(0x01)
};

// Class Engine.TargetPoint
// Size: 0x220 (Inherited: 0x220)
struct ATargetPoint : AActor {
};

// Class Engine.TextPropertyTestObject
// Size: 0x70 (Inherited: 0x28)
struct UTextPropertyTestObject : UObject {
	FText DefaultedText; // 0x28(0x18)
	FText UndefaultedText; // 0x40(0x18)
	FText TransientText; // 0x58(0x18)
};

// Class Engine.TextRenderActor
// Size: 0x228 (Inherited: 0x220)
struct ATextRenderActor : AActor {
	UTextRenderComponent* TextRender; // 0x220(0x08)
};

// Class Engine.TextRenderComponent
// Size: 0x440 (Inherited: 0x3f0)
struct UTextRenderComponent : UPrimitiveComponent {
	FText Text; // 0x3f0(0x18)
	UMaterialInterface* TextMaterial; // 0x408(0x08)
	UFont* Font; // 0x410(0x08)
	enum class EHorizTextAligment HorizontalAlignment; // 0x418(0x01)
	enum class EVerticalTextAligment VerticalAlignment; // 0x419(0x01)
	FColor TextRenderColor; // 0x41c(0x04)
	float XScale; // 0x420(0x04)
	float YScale; // 0x424(0x04)
	float WorldSize; // 0x428(0x04)
	float InvDefaultSize; // 0x42c(0x04)
	float HorizSpacingAdjust; // 0x430(0x04)
	float VertSpacingAdjust; // 0x434(0x04)
	char bAlwaysRenderAsText : 1; // 0x438(0x01)

	void SetYScale(float Value);
	void SetXScale(float Value);
	void SetWorldSize(float Value);
	void SetVertSpacingAdjust(float Value);
	void SetVerticalAlignment(enum class EVerticalTextAligment Value);
	void SetTextRenderColor(FColor Value);
	void SetTextMaterial(UMaterialInterface* Material);
	void SetText(FString Value);
	void SetHorizSpacingAdjust(float Value);
	void SetHorizontalAlignment(enum class EHorizTextAligment Value);
	void SetFont(UFont* Value);
	void K2_SetText(FText Value);
	FVector GetTextWorldSize();
	FVector GetTextLocalSize();
};

// Class Engine.Texture2DArray
// Size: 0x110 (Inherited: 0xb8)
struct UTexture2DArray : UTexture {
};

// Class Engine.Texture2DDynamic
// Size: 0xd0 (Inherited: 0xb8)
struct UTexture2DDynamic : UTexture {
	enum class EPixelFormat Format; // 0xc0(0x01)
};

// Class Engine.TextureLightProfile
// Size: 0xf0 (Inherited: 0xe8)
struct UTextureLightProfile : UTexture2D {
	float Brightness; // 0xe8(0x04)
	float TextureMultiplier; // 0xec(0x04)
};

// Class Engine.TextureMipDataProviderFactory
// Size: 0x28 (Inherited: 0x28)
struct UTextureMipDataProviderFactory : UAssetUserData {
};

// Class Engine.TextureRenderTargetCube
// Size: 0xd8 (Inherited: 0xc0)
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0xc0(0x04)
	FLinearColor ClearColor; // 0xc4(0x10)
	enum class EPixelFormat OverrideFormat; // 0xd4(0x01)
	char bHDR : 1; // 0xd5(0x01)
	char bForceLinearGamma : 1; // 0xd5(0x01)
};

// Class Engine.ThumbnailInfo
// Size: 0x28 (Inherited: 0x28)
struct UThumbnailInfo : UObject {
};

// Class Engine.TimelineComponent
// Size: 0x150 (Inherited: 0xb0)
struct UTimelineComponent : UActorComponent {
	FTimeline TheTimeline; // 0xb0(0x98)
	char bIgnoreTimeDilation : 1; // 0x148(0x01)

	void Stop();
	void SetVectorCurve(UCurveVector* NewVectorCurve, FName VectorTrackName);
	void SetTimelineLengthMode(enum class ETimelineLengthMode NewLengthMode);
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
};

// Class Engine.TimelineTemplate
// Size: 0xb0 (Inherited: 0x28)
struct UTimelineTemplate : UObject {
	float TimelineLength; // 0x28(0x04)
	enum class ETimelineLengthMode LengthMode; // 0x2c(0x01)
	char bAutoPlay : 1; // 0x2d(0x01)
	char bLoop : 1; // 0x2d(0x01)
	char bReplicated : 1; // 0x2d(0x01)
	char bIgnoreTimeDilation : 1; // 0x2d(0x01)
	TArray<FTTEventTrack> EventTracks; // 0x30(0x10)
	TArray<FTTFloatTrack> FloatTracks; // 0x40(0x10)
	TArray<FTTVectorTrack> VectorTracks; // 0x50(0x10)
	TArray<FTTLinearColorTrack> LinearColorTracks; // 0x60(0x10)
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0x70(0x10)
	FGuid TimelineGuid; // 0x80(0x10)
	FName VariableName; // 0x90(0x08)
	FName DirectionPropertyName; // 0x98(0x08)
	FName UpdateFunctionName; // 0xa0(0x08)
	FName FinishedFunctionName; // 0xa8(0x08)
};

// Class Engine.TireType
// Size: 0x38 (Inherited: 0x30)
struct UTireType : UDataAsset {
	float FrictionScale; // 0x30(0x04)
};

// Class Engine.TouchInterface
// Size: 0x58 (Inherited: 0x28)
struct UTouchInterface : UObject {
	TArray<FTouchInputControl> Controls; // 0x28(0x10)
	float ActiveOpacity; // 0x38(0x04)
	float InactiveOpacity; // 0x3c(0x04)
	float TimeUntilDeactive; // 0x40(0x04)
	float TimeUntilReset; // 0x44(0x04)
	float ActivationDelay; // 0x48(0x04)
	bool bPreventRecenter; // 0x4c(0x01)
	float StartupDelay; // 0x50(0x04)
};

// Class Engine.TriggerCapsule
// Size: 0x228 (Inherited: 0x228)
struct ATriggerCapsule : ATriggerBase {
};

// Class Engine.TriggerSphere
// Size: 0x228 (Inherited: 0x228)
struct ATriggerSphere : ATriggerBase {
};

// Class Engine.TriggerVolume
// Size: 0x258 (Inherited: 0x258)
struct ATriggerVolume : AVolume {
};

// Class Engine.TwitterIntegrationBase
// Size: 0x38 (Inherited: 0x38)
struct UTwitterIntegrationBase : UPlatformInterfaceBase {

	bool TwitterRequest(FString URL, TArray<FString> ParamKeysAndValues, enum class ETwitterRequestMethod RequestMethod, int32_t AccountIndex);
	bool ShowTweetUI(FString InitialMessage, FString URL, FString Picture);
	void Init();
	int32_t GetNumAccounts();
	FString GetAccountName(int32_t AccountIndex);
	bool CanShowTweetUI();
	bool AuthorizeAccounts();
};

// Class Engine.UserDefinedEnum
// Size: 0xb0 (Inherited: 0x60)
struct UUserDefinedEnum : UEnum {
	TMap<FName, FText> DisplayNameMap; // 0x60(0x50)
};

// Class Engine.UserDefinedStruct
// Size: 0x108 (Inherited: 0xc0)
struct UUserDefinedStruct : UScriptStruct {
	enum class EUserDefinedStructureStatus Status; // 0xc0(0x01)
	FGuid Guid; // 0xc4(0x10)
};

// Class Engine.UserInterfaceSettings
// Size: 0x268 (Inherited: 0x38)
struct UUserInterfaceSettings : UDeveloperSettings {
	enum class ERenderFocusRule RenderFocusRule; // 0x38(0x01)
	TMap<enum class EMouseCursor, FHardwareCursorReference> HardwareCursors; // 0x40(0x50)
	TMap<enum class EMouseCursor, FSoftClassPath> SoftwareCursors; // 0x90(0x50)
	FSoftClassPath DefaultCursor; // 0xe0(0x18)
	FSoftClassPath TextEditBeamCursor; // 0xf8(0x18)
	FSoftClassPath CrosshairsCursor; // 0x110(0x18)
	FSoftClassPath HandCursor; // 0x128(0x18)
	FSoftClassPath GrabHandCursor; // 0x140(0x18)
	FSoftClassPath GrabHandClosedCursor; // 0x158(0x18)
	FSoftClassPath SlashedCircleCursor; // 0x170(0x18)
	float ApplicationScale; // 0x188(0x04)
	enum class EUIScalingRule UIScaleRule; // 0x18c(0x01)
	FSoftClassPath CustomScalingRuleClass; // 0x190(0x18)
	FRuntimeFloatCurve UIScaleCurve; // 0x1a8(0x88)
	bool bAllowHighDPIInGameMode; // 0x230(0x01)
	bool bLoadWidgetsOnDedicatedServer; // 0x231(0x01)
	TArray<UObject*> CursorClasses; // 0x238(0x10)
	UObject* CustomScalingRuleClassInstance; // 0x248(0x08)
	UDPICustomScalingRule* CustomScalingRule; // 0x250(0x08)
};

// Class Engine.VectorField
// Size: 0x48 (Inherited: 0x28)
struct UVectorField : UObject {
	FBox Bounds; // 0x28(0x1c)
	float Intensity; // 0x44(0x04)
};

// Class Engine.VectorFieldAnimated
// Size: 0x88 (Inherited: 0x48)
struct UVectorFieldAnimated : UVectorField {
	UTexture2D* Texture; // 0x48(0x08)
	enum class EVectorFieldConstructionOp ConstructionOp; // 0x50(0x01)
	int32_t VolumeSizeX; // 0x54(0x04)
	int32_t VolumeSizeY; // 0x58(0x04)
	int32_t VolumeSizeZ; // 0x5c(0x04)
	int32_t SubImagesX; // 0x60(0x04)
	int32_t SubImagesY; // 0x64(0x04)
	int32_t FrameCount; // 0x68(0x04)
	float FramesPerSecond; // 0x6c(0x04)
	char bLoop : 1; // 0x70(0x01)
	UVectorFieldStatic* NoiseField; // 0x78(0x08)
	float NoiseScale; // 0x80(0x04)
	float NoiseMax; // 0x84(0x04)
};

// Class Engine.VectorFieldComponent
// Size: 0x420 (Inherited: 0x3f0)
struct UVectorFieldComponent : UPrimitiveComponent {
	UVectorField* VectorField; // 0x3f0(0x08)
	float Intensity; // 0x3f8(0x04)
	float Tightness; // 0x3fc(0x04)
	char bPreviewVectorField : 1; // 0x400(0x01)

	void SetIntensity(float NewIntensity);
};

// Class Engine.VectorFieldStatic
// Size: 0x98 (Inherited: 0x48)
struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; // 0x48(0x04)
	int32_t SizeY; // 0x4c(0x04)
	int32_t sizeZ; // 0x50(0x04)
	bool bAllowCPUAccess; // 0x54(0x01)
	TArray<FVector4> CPUData; // 0x88(0x10)
};

// Class Engine.VectorFieldVolume
// Size: 0x228 (Inherited: 0x220)
struct AVectorFieldVolume : AActor {
	UVectorFieldComponent* VectorFieldComponent; // 0x220(0x08)
};

// Class Engine.VirtualTexture
// Size: 0x28 (Inherited: 0x28)
struct UVirtualTexture : UObject {
};

// Class Engine.LightMapVirtualTexture
// Size: 0x28 (Inherited: 0x28)
struct ULightMapVirtualTexture : UVirtualTexture {
};

// Class Engine.LightMapVirtualTexture2D
// Size: 0xf8 (Inherited: 0xe8)
struct ULightMapVirtualTexture2D : UTexture2D {
	TArray<int8_t> TypeToLayer; // 0xe8(0x10)
};

// Class Engine.VirtualTexturePoolConfig
// Size: 0x40 (Inherited: 0x28)
struct UVirtualTexturePoolConfig : UObject {
	int32_t DefaultSizeInMegabyte; // 0x28(0x04)
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x30(0x10)
};

// Class Engine.VisualLoggerAutomationTests
// Size: 0x28 (Inherited: 0x28)
struct UVisualLoggerAutomationTests : UObject {
};

// Class Engine.VisualLoggerDebugSnapshotInterface
// Size: 0x28 (Inherited: 0x28)
struct UVisualLoggerDebugSnapshotInterface : UInterface {
};

// Class Engine.VisualLoggerKismetLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVisualLoggerKismetLibrary : UBlueprintFunctionLibrary {

	void RedirectVislog(UObject* SourceOwner, UObject* DestinationOwner);
	void LogText(UObject* WorldContextObject, FString Text, FName LogCategory, bool bAddToMessageLog);
	void LogSegment(UObject* WorldContextObject, FVector SegmentStart, FVector SegmentEnd, FString Text, FLinearColor ObjectColor, float Thickness, FName CategoryName, bool bAddToMessageLog);
	void LogLocation(UObject* WorldContextObject, FVector Location, FString Text, FLinearColor ObjectColor, float Radius, FName LogCategory, bool bAddToMessageLog);
	void LogBox(UObject* WorldContextObject, FBox BoxShape, FString Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog);
	void EnableRecording(bool bEnabled);
};

// Class Engine.VoiceChannel
// Size: 0x80 (Inherited: 0x70)
struct UVoiceChannel : UChannel {
};

// Class Engine.VOIPTalker
// Size: 0xe8 (Inherited: 0xb0)
struct UVOIPTalker : UActorComponent {
	FVoiceSettings Settings; // 0xb0(0x18)

	void RegisterWithPlayerState(APlayerState* OwningState);
	float GetVoiceLevel();
	UVOIPTalker* CreateTalkerForPlayer(APlayerState* OwningState);
	void BPOnTalkingEnd();
	void BPOnTalkingBegin(UAudioComponent* AudioComponent);
};

// Class Engine.VOIPStatics
// Size: 0x28 (Inherited: 0x28)
struct UVOIPStatics : UBlueprintFunctionLibrary {

	void SetMicThreshold(float InThreshold);
};

// Class Engine.VolumeTexture
// Size: 0x110 (Inherited: 0xb8)
struct UVolumeTexture : UTexture {
};

// Class Engine.VolumetricLightmapDensityVolume
// Size: 0x260 (Inherited: 0x258)
struct AVolumetricLightmapDensityVolume : AVolume {
	FInt32Interval AllowedMipLevelRange; // 0x258(0x08)
};

// Class Engine.WindDirectionalSource
// Size: 0x228 (Inherited: 0x220)
struct AWindDirectionalSource : AInfo {
	UWindDirectionalSourceComponent* Component; // 0x220(0x08)
};

// Class Engine.WindDirectionalSourceComponent
// Size: 0x210 (Inherited: 0x1f0)
struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; // 0x1f0(0x04)
	float Speed; // 0x1f4(0x04)
	float MinGustAmount; // 0x1f8(0x04)
	float MaxGustAmount; // 0x1fc(0x04)
	float Radius; // 0x200(0x04)
	char bPointWind : 1; // 0x204(0x01)

	void SetWindType(enum class EWindSourceType InNewType);
	void SetStrength(float InNewStrength);
	void SetSpeed(float InNewSpeed);
	void SetRadius(float InNewRadius);
	void SetMinimumGustAmount(float InNewMinGust);
	void SetMaximumGustAmount(float InNewMaxGust);
};

// Class Engine.WorldComposition
// Size: 0x68 (Inherited: 0x28)
struct UWorldComposition : UObject {
	TArray<ULevelStreaming*> TilesStreaming; // 0x48(0x10)
	double TilesStreamingTimeThreshold; // 0x58(0x08)
	bool bLoadAllTilesDuringCinematic; // 0x60(0x01)
	bool bRebaseOriginIn3DSpace; // 0x61(0x01)
	float RebaseOriginDistance; // 0x64(0x04)
};

// Class Engine.HierarchicalLODSetup
// Size: 0x60 (Inherited: 0x28)
struct UHierarchicalLODSetup : UObject {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x28(0x10)
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x38(0x28)
};

// Class Engine.WorldSettings
// Size: 0x3a0 (Inherited: 0x220)
struct AWorldSettings : AInfo {
	int32_t VisibilityCellSize; // 0x228(0x04)
	enum class EVisibilityAggressiveness VisibilityAggressiveness; // 0x22c(0x01)
	char bPrecomputeVisibility : 1; // 0x22d(0x01)
	char bPlaceCellsOnlyAlongCameraTracks : 1; // 0x22d(0x01)
	char bEnableWorldBoundsChecks : 1; // 0x22d(0x01)
	char bEnableNavigationSystem : 1; // 0x22d(0x01)
	char bEnableAISystem : 1; // 0x22d(0x01)
	char bEnableWorldComposition : 1; // 0x22d(0x01)
	char bUseClientSideLevelStreamingVolumes : 1; // 0x22d(0x01)
	char bEnableWorldOriginRebasing : 1; // 0x22d(0x01)
	char bWorldGravitySet : 1; // 0x22e(0x01)
	char bGlobalGravitySet : 1; // 0x22e(0x01)
	char bMinimizeBSPSections : 1; // 0x22e(0x01)
	char bForceNoPrecomputedLighting : 1; // 0x22e(0x01)
	char bHighPriorityLoading : 1; // 0x22e(0x01)
	char bHighPriorityLoadingLocal : 1; // 0x22e(0x01)
	char bOverrideDefaultBroadphaseSettings : 1; // 0x22e(0x01)
	UNavigationSystemConfig* NavigationSystemConfig; // 0x230(0x08)
	UNavigationSystemConfig* NavigationSystemConfigOverride; // 0x238(0x08)
	float WorldToMeters; // 0x240(0x04)
	float KillZ; // 0x244(0x04)
	UDamageType* KillZDamageType; // 0x248(0x08)
	float WorldGravityZ; // 0x250(0x04)
	float GlobalGravityZ; // 0x254(0x04)
	ADefaultPhysicsVolume* DefaultPhysicsVolumeClass; // 0x258(0x08)
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x260(0x08)
	AGameModeBase* DefaultGameMode; // 0x268(0x08)
	AGameNetworkManager* GameNetworkManagerClass; // 0x270(0x08)
	int32_t PackedLightAndShadowMapTextureSize; // 0x278(0x04)
	FVector DefaultColorScale; // 0x27c(0x0c)
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x288(0x04)
	float GlobalDistanceFieldViewDistance; // 0x28c(0x04)
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x290(0x04)
	FReverbSettings DefaultReverbSettings; // 0x298(0x20)
	FInteriorSettings DefaultAmbientZoneSettings; // 0x2b8(0x24)
	float MonoCullingDistance; // 0x2dc(0x04)
	USoundMix* DefaultBaseSoundMix; // 0x2e0(0x08)
	float TimeDilation; // 0x2e8(0x04)
	float MatineeTimeDilation; // 0x2ec(0x04)
	float DemoPlayTimeDilation; // 0x2f0(0x04)
	float MinGlobalTimeDilation; // 0x2f4(0x04)
	float MaxGlobalTimeDilation; // 0x2f8(0x04)
	float MinUndilatedFrameTime; // 0x2fc(0x04)
	float MaxUndilatedFrameTime; // 0x300(0x04)
	FBroadphaseSettings BroadphaseSettings; // 0x304(0x40)
	APlayerState* Pauser; // 0x348(0x08)
	TArray<FNetViewer> ReplicationViewers; // 0x350(0x10)
	TArray<UAssetUserData*> AssetUserData; // 0x360(0x10)
	APlayerState* PauserPlayerState; // 0x370(0x08)
	int32_t MaxNumberOfBookmarks; // 0x378(0x04)
	UBookmarkBase* DefaultBookmarkClass; // 0x380(0x08)
	TArray<UBookmarkBase*> BookmarkArray; // 0x388(0x10)
	UBookmarkBase* LastBookmarkClass; // 0x398(0x08)

	void OnRep_WorldGravityZ();
};

