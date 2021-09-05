// BlueprintGeneratedClass BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C
// Size: 0x290 (Inherited: 0x240)
struct ABP_LaserPointerWaypoint_C : ALaserPointerWaypoint {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	UStaticMeshComponent* ShowOnScanner; // 0x248(0x08)
	USceneComponent* RotatorNode; // 0x250(0x08)
	UStaticMeshComponent* Sphere; // 0x258(0x08)
	UActorTrackingComponent* ActorTracking; // 0x260(0x08)
	USceneComponent* ShowInGame; // 0x268(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x270(0x08)
	USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float Scanner_Object_Timeline_Time_EC07CDDA40AC89EA6875FCB53F3F2A41; // 0x280(0x04)
	enum class ETimelineDirection Scanner_Object_Timeline__Direction_EC07CDDA40AC89EA6875FCB53F3F2A41; // 0x284(0x01)
	UTimelineComponent* Scanner Object Timeline; // 0x288(0x08)

	void Scanner Object Timeline__FinishedFunc();
	void Scanner Object Timeline__UpdateFunc();
	void OnShow();
	void OnHide();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LaserPointerWaypoint(int32_t EntryPoint);
};

