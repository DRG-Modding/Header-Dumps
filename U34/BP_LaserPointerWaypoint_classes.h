// BlueprintGeneratedClass BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C
// Size: 0x290 (Inherited: 0x240)
struct ABP_LaserPointerWaypoint_C : ALaserPointerWaypoint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UStaticMeshComponent* ShowOnScanner; // 0x248(0x08)
	struct USceneComponent* RotatorNode; // 0x250(0x08)
	struct UStaticMeshComponent* Sphere; // 0x258(0x08)
	struct UActorTrackingComponent* ActorTracking; // 0x260(0x08)
	struct USceneComponent* ShowInGame; // 0x268(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x270(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x278(0x08)
	float Scanner_Object_Timeline_Time_EC07CDDA40AC89EA6875FCB53F3F2A41; // 0x280(0x04)
	char Scanner_Object_Timeline__Direction_EC07CDDA40AC89EA6875FCB53F3F2A41; // 0x284(0x01)
	char UnknownData_285[0x3]; // 0x285(0x03)
	struct UTimelineComponent* Scanner Object Timeline; // 0x288(0x08)

	void Scanner Object Timeline__FinishedFunc(); // Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__FinishedFunc
	void Scanner Object Timeline__UpdateFunc(); // Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__UpdateFunc
	void OnShow(); // Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnShow
	void OnHide(); // Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnHide
	void ReceiveBeginPlay(); // Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_LaserPointerWaypoint(int32_t EntryPoint); // Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ExecuteUbergraph_BP_LaserPointerWaypoint
};

