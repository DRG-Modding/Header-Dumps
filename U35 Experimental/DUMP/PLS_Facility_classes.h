// BlueprintGeneratedClass PLS_Facility.PLS_Facility_C
// Size: 0x588 (Inherited: 0x4e8)
struct APLS_Facility_C : APLS_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	FRoomGeneratorGroupInstance Room Group Instance; // 0x4f0(0x10)
	URoomGeneratorGroup* RoomGenerators; // 0x500(0x08)
	FRoomGeneratorGroupInstance Room Group MainStation Instance; // 0x508(0x10)
	int32_t MainStationRoomIndex; // 0x518(0x04)
	URoomGeneratorGroup* RoomGeneratorMainStation; // 0x520(0x08)
	TArray<int32_t> GeneratorRoomIndex; // 0x528(0x10)
	int32_t TotalRooms; // 0x538(0x04)
	URoomGenerator* MainFacilityRoomRef; // 0x540(0x08)
	URoomGenerator* GeneratorRoom1Ref; // 0x548(0x08)
	URoomGenerator* GeneratorRoom2Ref; // 0x550(0x08)
	URoomGenerator* ChallengeRoom2Ref; // 0x558(0x08)
	TArray<int32_t> ChallengeRoomIndex; // 0x560(0x10)
	URoomGenerator* StartingRoom; // 0x570(0x08)
	URoomGenerator* SecondBranchRoom; // 0x578(0x08)
	URoomGenerator* MainBranchRoom; // 0x580(0x08)

	void AddRoomLinear(FRoomNode PreviousRoom, FVector Direction, float DistanceRadiusMultiplier, bool PlaceDirt, URoomGeneratorBase* RoomGenerator, FRoomNode NewRoom);
	URoomGenerator* SelectTraversalChallenge();
	void SetFacilityRoom(int32_t FacilityRoom);
	URoomGenerator* SelectRoomMainStation();
	URoomGenerator* SelectRoom();
	void Circular Simple();
	void Circular Complex();
	void Linear();
	void LinearShort();
	void CreateCaveGraph();
	void ExecuteUbergraph_PLS_Facility(int32_t EntryPoint);
};

