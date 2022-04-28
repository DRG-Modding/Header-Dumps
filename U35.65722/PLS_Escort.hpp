#ifndef UE4SS_SDK_PLS_Escort_HPP
#define UE4SS_SDK_PLS_Escort_HPP

class APLS_Escort_C : public APLS_Linear_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FRoomGeneratorGroupInstance RoomGroupInstance;
    class URoomGeneratorGroup* Room Group;
    class URoomGenerator* Starting Room;
    class URoomGenerator* End Room;
    class URoomGeneratorGroup* Small Room Group;
    FRoomGeneratorGroupInstance Small Room Group Instance;
    float Min Room Distance;
    float Max Room Distance;
    int32 NumberOfMainRooms;
    bool MidWayRoom1;
    bool MidWayRoom2;
    bool MidWayRoom3;
    class URoomGenerator* FirstStopRoom;
    class URoomGenerator* SecondStopRoom;
    class URoomGenerator* LastStopRoom;
    int32 LastStopRoomID;
    TArray<bool> BigMidWayRoom;
    FVector LastStopRoomCenter;

    void AddOilShaleInfluencers(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    class URoomGenerator* SelectRoom(int32 DNARoomIndexclass UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, class URoomGenerator* CallFunc_GetRandomRoomWithTags_ReturnValue);
    void CreateGraphSecondPass();
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_Escort(int32 EntryPoint, int32 Temp_int_Variable, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class URoomGenerator* CallFunc_GetRandomRoom_Room, FRoomGeneratorGroupInstance CallFunc_CreateGroupInstance_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_AddRoom_outCenter, FRoomNode CallFunc_AddRoom_outRoom, int32 CallFunc_AddRoom_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, class URoomGenerator* CallFunc_SelectRoom_ReturnValue, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue, const bool Temp_bool_Variable, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, FRoomGeneratorGroupInstance CallFunc_CreateGroupInstance_ReturnValue_1, FRoomNode CallFunc_Array_Get_Item, FRoomNode CallFunc_Array_Get_Item_1, float CallFunc_Add_FloatFloat_ReturnValue_5, FGameplayTagQuery CallFunc_MakeGameplayTagQuery_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, class URoomGenerator* CallFunc_GetRandomRoomWithTags_ReturnValue, FVector CallFunc_Divide_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_AddRoom_outCenter_1, FRoomNode CallFunc_AddRoom_outRoom_1, int32 CallFunc_AddRoom_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FRandRange K2Node_MakeStruct_RandRange, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FVector CallFunc_FindLocationInDirection_ReturnValue, FRandRange K2Node_MakeStruct_RandRange_1, FVector CallFunc_AddRoom_outCenter_2, FRoomNode CallFunc_AddRoom_outRoom_2, int32 CallFunc_AddRoom_ReturnValue_2, int32 CallFunc_ConnectRoomIds_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, FRandRange K2Node_MakeStruct_RandRange_2, FVector CallFunc_FindLocationInDirection_ReturnValue_1, FVector CallFunc_AddRoom_outCenter_3, FRoomNode CallFunc_AddRoom_outRoom_3, int32 CallFunc_AddRoom_ReturnValue_3, FVector CallFunc_FindLocationInDirection_ReturnValue_2, FVector CallFunc_AddRoom_outCenter_4, FRoomNode CallFunc_AddRoom_outRoom_4, int32 CallFunc_AddRoom_ReturnValue_4, int32 CallFunc_ConnectRoomIds_ReturnValue_1, int32 CallFunc_ConnectRoomIds_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_6, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue_1, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, class UEscortMissionDNA* K2Node_DynamicCast_AsEscort_Mission_DNA, bool K2Node_DynamicCast_bSuccess, class URoomGenerator* CallFunc_SelectRoom_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue_3, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, FGameplayTagQuery CallFunc_MakeGameplayTagQuery_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class URoomGenerator* CallFunc_GetRandomRoomWithTags_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_4, FVector CallFunc_AddRoom_outCenter_5, FRoomNode CallFunc_AddRoom_outRoom_5, int32 CallFunc_AddRoom_ReturnValue_5, bool CallFunc_RandomBoolWithWeightFromStream_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3);
};

#endif