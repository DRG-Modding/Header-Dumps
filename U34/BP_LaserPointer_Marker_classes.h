// BlueprintGeneratedClass BP_LaserPointer_Marker.BP_LaserPointer_Marker_C
// Size: 0x2a8 (Inherited: 0x258)
struct ABP_LaserPointer_Marker_C : ALaserPointerMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UStaticMeshComponent* StaticMesh3; // 0x260(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x268(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x270(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x278(0x08)
	struct UActorTrackingComponent* ActorTracking; // 0x280(0x08)
	struct UStaticMeshComponent* Sphere; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct UOutlineComponent* outline; // 0x298(0x08)
	struct UHealthComponentBase* HealthComponent; // 0x2a0(0x08)

	void UpdateMaterial(); // Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.UpdateMaterial
	void ReceiveBeginPlay(); // Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ReceiveBeginPlay
	void OnDestroyed_Target(struct AActor* DestroyedActor); // Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Target
	void OnDestroyed_Self(struct AActor* DestroyedActor); // Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Self
	void OnDeath_Event(struct UHealthComponentBase* HealthComponent); // Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDeath_Event
	void ExecuteUbergraph_BP_LaserPointer_Marker(int32_t EntryPoint); // Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ExecuteUbergraph_BP_LaserPointer_Marker
};

