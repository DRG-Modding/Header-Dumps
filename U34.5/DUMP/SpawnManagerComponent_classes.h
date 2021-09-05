// BlueprintGeneratedClass SpawnManagerComponent.SpawnManagerComponent_C
// Size: 0x140 (Inherited: 0xb0)
struct USpawnManagerComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	float Queue Interval; // 0xb8(0x04)
	FTimerHandle QueueTimer; // 0xc0(0x08)
	TArray<FFSpawnQueueItem> Spawn Queue; // 0xc8(0x10)
	FName Spawn Tag; // 0xd8(0x08)
	FVector Spawn Target Loop Location; // 0xe0(0x0c)
	FMulticastInlineDelegate On Actor Spawned; // 0xf0(0x10)
	TArray<AActor*> Actors Not Safe in SpaceRig; // 0x100(0x10)
	TArray<AActor*> Cullable Natural Creatures; // 0x110(0x10)
	TArray<AActor*> Non Cullable Actors; // 0x120(0x10)
	float Auto Destroy Interval; // 0x130(0x04)
	FTimerHandle Auto Destroy Timer; // 0x138(0x08)

	void Destroy All Enemies();
	void Set Enable Auto Destroy Natural Creatures(bool Enabled);
	void Is Actor Spawnable(AActor* Actor, bool Result);
	void Is Actor Safe In Space Rig(AActor* Actor, bool Result);
	void Is Actor Mod Spawned(AActor* Target, bool Result);
	void Destroy Natural Creatures();
	void Destroy Actors By Class(AActor* ActorClass, bool Include Natural Actors, bool Mark as Manually Destroyed);
	void Spawn Actor(AActor* Actor, FTransform Transform, FVector Offset Location, FRotator Offset Rotation, float LifeSpan, float Time Dilation, TArray<FName> Tags, AActor* Spawned Actor);
	void Find Spawn Location(FVector Origin, float Min Distance, float Max Distance, float Min Slope, float Max Slope, FTransform Transform);
	void Scan Spawn Queue();
	void Remove From Queue(FGuid Guid);
	void Add To Queue(AActor* Actor, TArray<AActor*> Target Actors, TArray<FVector> Target Locations, FSpawnConfig Spawn Config, TArray<FName> Tags);
	void ReceiveBeginPlay();
	void Queue Timer Event();
	void Spawn Queue Item Ready Event(FFSpawnQueueItem Spawn Queue Item);
	void Auto Destroy Timer Event();
	void ExecuteUbergraph_SpawnManagerComponent(int32_t EntryPoint);
	void On Actor Spawned__DelegateSignature(AActor* Actor);
};

