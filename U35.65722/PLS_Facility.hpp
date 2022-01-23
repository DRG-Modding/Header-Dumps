#ifndef UE4SS_SDK_PLS_Facility_HPP
#define UE4SS_SDK_PLS_Facility_HPP

class APLS_Facility_C : public APLS_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FRoomGeneratorGroupInstance Room Group Instance;
    class URoomGeneratorGroup* RoomGenerators;
    FRoomGeneratorGroupInstance Room Group MainStation Instance;
    int32 MainStationRoomIndex;
    class URoomGeneratorGroup* RoomGeneratorMainStation;
    TArray<int32> GeneratorRoomIndex;
    int32 TotalRooms;
    class URoomGenerator* MainFacilityRoomRef;
    class URoomGenerator* GeneratorRoom1Ref;
    class URoomGenerator* GeneratorRoom2Ref;
    class URoomGenerator* ChallengeRoom2Ref;
    TArray<int32> ChallengeRoomIndex;
    class URoomGenerator* StartingRoom;
    class URoomGenerator* SecondBranchRoom;
    class URoomGenerator* MainBranchRoom;

    void AddRoomLinear(const FRoomNode& PreviousRoom, FVector Direction, float DistanceRadiusMultiplier, bool PlaceDirt, class URoomGeneratorBase*& RoomGenerator, FRoomNode& NewRoom, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_AddRoom_outCenter, FRoomNode CallFunc_AddRoom_outRoom, int32 CallFunc_AddRoom_ReturnValue, int32 CallFunc_ConnectRoomIds_ReturnValue);
    class URoomGenerator* SelectTraversalChallenge(class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, class URoomGenerator* CallFunc_GetRandomRoomWithTags_ReturnValue);
    void SetFacilityRoom(int32 FacilityRoom, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class UFacilityObjective* K2Node_DynamicCast_AsFacility_Objective, bool K2Node_DynamicCast_bSuccess);
    class URoomGenerator* SelectRoomMainStation(class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, class URoomGenerator* CallFunc_GetRandomRoomWithTags_ReturnValue);
    class URoomGenerator* SelectRoom(class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, class URoomGenerator* CallFunc_GetRandomRoomWithTags_ReturnValue);
    void Circular Simple();
    void Circular Complex();
    void Linear();
    void LinearShort();
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_Facility(int32 EntryPoint, class URoomGenerator* CallFunc_SelectRoomMainStation_ReturnValue, FVector CallFunc_AddRoom_outCenter, FRoomNode CallFunc_AddRoom_outRoom, int32 CallFunc_AddRoom_ReturnValue, FVector CallFunc_AddRoom_outCenter_1, FRoomNode CallFunc_AddRoom_outRoom_1, int32 CallFunc_AddRoom_ReturnValue_1, class URoomGenerator* CallFunc_SelectRoomMainStation_ReturnValue_1, class URoomGenerator* CallFunc_SelectRoom_ReturnValue, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_1, class URoomGenerator* CallFunc_GetRandomRoom_Room, FRoomGeneratorGroupInstance CallFunc_CreateGroupInstance_ReturnValue, FVector CallFunc_AddRoom_outCenter_2, FRoomNode CallFunc_AddRoom_outRoom_2, int32 CallFunc_AddRoom_ReturnValue_2, FRoomNode CallFunc_AddRoomLinear_NewRoom, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_2, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_3, class URoomGenerator* CallFunc_SelectTraversalChallenge_ReturnValue, class URoomGenerator* CallFunc_GetRandomRoom_Room_1, class URoomGenerator* CallFunc_SelectTraversalChallenge_ReturnValue_1, FVector CallFunc_AddRoom_outCenter_3, FRoomNode CallFunc_AddRoom_outRoom_3, int32 CallFunc_AddRoom_ReturnValue_3, FRoomNode CallFunc_AddRoomLinear_NewRoom_1, float CallFunc_Add_FloatFloat_ReturnValue, class URoomGenerator* CallFunc_SelectTraversalChallenge_ReturnValue_2, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, class UDNA_Facility_DNA_C* K2Node_DynamicCast_AsDNA_Facility_DNA, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_4, class URoomGenerator* CallFunc_GetRandomRoom_Room_2, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_5, class URoomGenerator* CallFunc_SelectTraversalChallenge_ReturnValue_3, class URoomGenerator* CallFunc_SelectTraversalChallenge_ReturnValue_4, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_6, class URoomGenerator* CallFunc_SelectRoomMainStation_ReturnValue_2, FRoomNode CallFunc_AddRoomLinear_NewRoom_2, FRoomNode CallFunc_AddRoomLinear_NewRoom_3, class URoomGenerator* CallFunc_GetRandomRoom_Room_3, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_7, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_8, FRoomGeneratorGroupInstance CallFunc_CreateGroupInstance_ReturnValue_1, class URoomGenerator* CallFunc_SelectTraversalChallenge_ReturnValue_5, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_2, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_3, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_4, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_6, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_7, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_AddRoom_outCenter_4, FRoomNode CallFunc_AddRoom_outRoom_4, int32 CallFunc_AddRoom_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_8, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_9, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_10, int32 CallFunc_ConnectRoomIds_ReturnValue, FVector CallFunc_MakeVector_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_11, FVector CallFunc_MakeVector_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_4, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_AddRoom_outCenter_5, FRoomNode CallFunc_AddRoom_outRoom_5, int32 CallFunc_AddRoom_ReturnValue_5, FVector CallFunc_AddRoom_outCenter_6, FRoomNode CallFunc_AddRoom_outRoom_6, int32 CallFunc_AddRoom_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_ConnectRoomIds_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_3, int32 CallFunc_ConnectRoomIds_ReturnValue_2, FVector CallFunc_AddRoom_outCenter_7, FRoomNode CallFunc_AddRoom_outRoom_7, int32 CallFunc_AddRoom_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_3, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_12, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_13, int32 CallFunc_ConnectRoomIds_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_5, FVector CallFunc_Add_VectorVector_ReturnValue_4, FVector CallFunc_AddRoom_outCenter_8, FRoomNode CallFunc_AddRoom_outRoom_8, int32 CallFunc_AddRoom_ReturnValue_8, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_ConnectRoomIds_ReturnValue_4, FVector CallFunc_Add_VectorVector_ReturnValue_5, FVector CallFunc_AddRoom_outCenter_9, FRoomNode CallFunc_AddRoom_outRoom_9, int32 CallFunc_AddRoom_ReturnValue_9, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_14, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_ConnectRoomIds_ReturnValue_5, int32 CallFunc_ConnectRoomIds_ReturnValue_6, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_15, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_16, float CallFunc_Add_FloatFloat_ReturnValue_5, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_6, FVector CallFunc_Add_VectorVector_ReturnValue_6, FVector CallFunc_AddRoom_outCenter_10, FRoomNode CallFunc_AddRoom_outRoom_10, int32 CallFunc_AddRoom_ReturnValue_10, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2, int32 CallFunc_ConnectRoomIds_ReturnValue_7, int32 CallFunc_ConnectRoomIds_ReturnValue_8, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_17, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_18, FVector CallFunc_MakeVector_ReturnValue_7, FVector CallFunc_MakeVector_ReturnValue_8, FVector CallFunc_Add_VectorVector_ReturnValue_7, FVector CallFunc_Add_VectorVector_ReturnValue_8, FVector CallFunc_AddRoom_outCenter_11, FRoomNode CallFunc_AddRoom_outRoom_11, int32 CallFunc_AddRoom_ReturnValue_11, FVector CallFunc_AddRoom_outCenter_12, FRoomNode CallFunc_AddRoom_outRoom_12, int32 CallFunc_AddRoom_ReturnValue_12, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_ConnectRoomIds_ReturnValue_9, int32 CallFunc_ConnectRoomIds_ReturnValue_10, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_19, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_20, FVector CallFunc_MakeVector_ReturnValue_9, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_21, FVector CallFunc_MakeVector_ReturnValue_10, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_3, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_4, class URoomGenerator* CallFunc_SelectRoomMainStation_ReturnValue_3, FRoomNode CallFunc_AddRoomLinear_NewRoom_4, FRoomNode CallFunc_AddRoomLinear_NewRoom_5, FRoomNode CallFunc_AddRoomLinear_NewRoom_6, FRoomNode CallFunc_AddRoomLinear_NewRoom_7, FVector CallFunc_Add_VectorVector_ReturnValue_9, FVector CallFunc_AddRoom_outCenter_13, FRoomNode CallFunc_AddRoom_outRoom_13, int32 CallFunc_AddRoom_ReturnValue_13, FVector CallFunc_Add_VectorVector_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_8, FVector CallFunc_AddRoom_outCenter_14, FRoomNode CallFunc_AddRoom_outRoom_14, int32 CallFunc_AddRoom_ReturnValue_14, int32 CallFunc_ConnectRoomIds_ReturnValue_11, int32 CallFunc_ConnectRoomIds_ReturnValue_12, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_ConnectRoomIds_ReturnValue_13);
};

#endif
