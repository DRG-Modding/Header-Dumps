#ifndef UE4SS_SDK_PLS_Collection_HPP
#define UE4SS_SDK_PLS_Collection_HPP

class APLS_Collection_C : public APLS_Fractured_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URoomGeneratorGroup* RoomGroup;
    FRoomGeneratorGroupInstance groupInstance;
    float RoomDistance;

    class URoomGenerator* SelectRoomFromDNA(class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, class URoomGenerator* CallFunc_GetRandomRoomWithTags_ReturnValue);
    void CreateCaveGraph();
    void ExecuteUbergraph_PLS_Collection(int32 EntryPoint, class URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue, class URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, class URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue_2, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, class UBP_FracturedMissionDNA_C* K2Node_DynamicCast_AsBP_Fractured_Mission_DNA, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_Multiply_VectorFloat_ReturnValue_4, FVector CallFunc_AddRoom_outCenter, FRoomNode CallFunc_AddRoom_outRoom, int32 CallFunc_AddRoom_ReturnValue, FVector CallFunc_AddRoom_outCenter_1, FRoomNode CallFunc_AddRoom_outRoom_1, int32 CallFunc_AddRoom_ReturnValue_1, FVector CallFunc_AddRoom_outCenter_2, FRoomNode CallFunc_AddRoom_outRoom_2, int32 CallFunc_AddRoom_ReturnValue_2, class URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue_3, int32 CallFunc_ConnectRoomIds_ReturnValue, FVector CallFunc_AddRoom_outCenter_3, FRoomNode CallFunc_AddRoom_outRoom_3, int32 CallFunc_AddRoom_ReturnValue_3, FVector CallFunc_AddRoom_outCenter_4, FRoomNode CallFunc_AddRoom_outRoom_4, int32 CallFunc_AddRoom_ReturnValue_4, class URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue_4, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_AddRoom_outCenter_5, FRoomNode CallFunc_AddRoom_outRoom_5, int32 CallFunc_AddRoom_ReturnValue_5, FVector CallFunc_AddRoom_outCenter_6, FRoomNode CallFunc_AddRoom_outRoom_6, int32 CallFunc_AddRoom_ReturnValue_6, int32 CallFunc_ConnectRoomIds_ReturnValue_1, int32 CallFunc_ConnectRoomIds_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_1, class URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue_5, FVector CallFunc_AddRoom_outCenter_7, FRoomNode CallFunc_AddRoom_outRoom_7, int32 CallFunc_AddRoom_ReturnValue_7, FRoomGeneratorGroupInstance CallFunc_CreateGroupInstance_ReturnValue, int32 CallFunc_ConnectRoomIds_ReturnValue_3, class URoomGenerator* CallFunc_SelectRoomFromDNA_ReturnValue_6, FVector CallFunc_AddRoom_outCenter_8, FRoomNode CallFunc_AddRoom_outRoom_8, int32 CallFunc_AddRoom_ReturnValue_8, int32 CallFunc_ConnectRoomIds_ReturnValue_4);
};

#endif
