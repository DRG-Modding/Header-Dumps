// BlueprintGeneratedClass SpawnManagerComponent.SpawnManagerComponent_C
// Size: 0x140 (Inherited: 0xb0)
struct USpawnManagerComponent_C : UActorComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float Queue Interval; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle QueueTimer; 
	UPROPERTY(BlueprintReadWrite) TArray<FFSpawnQueueItem> Spawn Queue; 
	UPROPERTY(BlueprintReadWrite) FName Spawn Tag; 
	UPROPERTY(BlueprintReadWrite) FVector Spawn Target Loop Location; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Actor Spawned; 
	UPROPERTY(BlueprintReadWrite) TArray<AActor*> Actors Not Safe in SpaceRig; 
	UPROPERTY(BlueprintReadWrite) TArray<AActor*> Cullable Natural Creatures; 
	UPROPERTY(BlueprintReadWrite) TArray<AActor*> Non Cullable Actors; 
	UPROPERTY(BlueprintReadWrite) float Auto Destroy Interval; 
	UPROPERTY(BlueprintReadWrite) FTimerHandle Auto Destroy Timer; 

	UFUNCTION(BlueprintCallable) void Destroy All Enemies();
	UFUNCTION(BlueprintCallable) void Set Enable Auto Destroy Natural Creatures(bool Enabled);
	UFUNCTION(BlueprintCallable) void Is Actor Spawnable(AActor* Actor, bool Result);
	UFUNCTION(BlueprintCallable) void Is Actor Safe In Space Rig(AActor* Actor, bool Result);
	UFUNCTION(BlueprintCallable) void Is Actor Mod Spawned(AActor* Target, bool Result);
	UFUNCTION(BlueprintCallable) void Destroy Natural Creatures();
	UFUNCTION(BlueprintCallable) void Destroy Actors By Class(AActor* ActorClass, bool Include Natural Actors, bool Mark as Manually Destroyed);
	UFUNCTION(BlueprintCallable) void Spawn Actor(AActor* Actor, FTransform Transform, FVector Offset Location, FRotator Offset Rotation, float LifeSpan, float Time Dilation, TArray<FName> Tags, AActor* Spawned Actor);
	UFUNCTION(BlueprintCallable) void Find Spawn Location(FVector Origin, float Min Distance, float Max Distance, float Min Slope, float Max Slope, FTransform Transform);
	UFUNCTION(BlueprintCallable) void Scan Spawn Queue();
	UFUNCTION(BlueprintCallable) void Remove From Queue(FGuid Guid);
	UFUNCTION(BlueprintCallable) void Add To Queue(AActor* Actor, TArray<AActor*> Target Actors, TArray<FVector> Target Locations, FSpawnConfig Spawn Config, TArray<FName> Tags);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Queue Timer Event();
	UFUNCTION(BlueprintCallable) void Spawn Queue Item Ready Event(FFSpawnQueueItem Spawn Queue Item);
	UFUNCTION(BlueprintCallable) void Auto Destroy Timer Event();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_SpawnManagerComponent(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Actor Spawned__DelegateSignature(AActor* Actor);
};

