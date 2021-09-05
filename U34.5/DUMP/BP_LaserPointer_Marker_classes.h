// BlueprintGeneratedClass BP_LaserPointer_Marker.BP_LaserPointer_Marker_C
// Size: 0x2a8 (Inherited: 0x258)
struct ABP_LaserPointer_Marker_C : ALaserPointerMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UStaticMeshComponent* StaticMesh3; // 0x260(0x08)
	UStaticMeshComponent* StaticMesh2; // 0x268(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x270(0x08)
	UStaticMeshComponent* StaticMesh; // 0x278(0x08)
	UActorTrackingComponent* ActorTracking; // 0x280(0x08)
	UStaticMeshComponent* Sphere; // 0x288(0x08)
	USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	UOutlineComponent* outline; // 0x298(0x08)
	UHealthComponentBase* HealthComponent; // 0x2a0(0x08)

	void UpdateMaterial();
	void ReceiveBeginPlay();
	void OnDestroyed_Target(AActor* DestroyedActor);
	void OnDestroyed_Self(AActor* DestroyedActor);
	void OnDeath_Event(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_BP_LaserPointer_Marker(int32_t EntryPoint);
};

