#ifndef UE4SS_SDK_ITM_MissionComplete_ResourceBox_HPP
#define UE4SS_SDK_ITM_MissionComplete_ResourceBox_HPP

class UITM_MissionComplete_ResourceBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UVerticalBox* BarleyBox;
    UVerticalBox* LinesBox;
    float ItemDelay;
    USoundBase* Item Sound;
    FITM_MissionComplete_ResourceBox_CFinished Finished;
    void Finished();
    int32 NextIndex;
    int32 PreviewCount;
    TArray<UITM_MissionComplete_Resource_C*> ResourceWidgets;
    int32 MaxIconsPerRow;
    FMargin IconPadding;
    int32 IconSize;
    bool Counting;
    UAudioComponent* AudioComponent;

    void IsBarleyResource(UResourceData* InResource, bool& OutIsBarley, UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
    void ClearIcons();
    void GetOrCreateHorizontalBar(bool ForceNewLine, UHorizontalBox*& OutHorizontal, UHorizontalBox* Box, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UHorizontalBox* K2Node_DynamicCast_AsHorizontal_Box, bool K2Node_DynamicCast_bSuccess, UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue);
    void AddIcon(bool ForceNewLine, float SizeScale, UITM_MissionComplete_Resource_C*& OutIconWidget, UITM_MissionComplete_Resource_C* Widget, UHorizontalBox* CallFunc_GetOrCreateHorizontalBar_OutHorizontal, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_MissionComplete_Resource_C* CallFunc_Create_ReturnValue);
    void CreateIcons(TArray<UITM_MissionComplete_Resource_C*>& OutWidgets, TArray<UResourceData*> BarleyResources, UResourceData* ThisResource, TMap<UResourceData*, float> ResourceMap, TArray<UITM_MissionComplete_Resource_C*> Widgets, UITM_MissionComplete_Resource_C* Widget, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<UResourceData*>& CallFunc_Map_Keys_Keys, UITM_MissionComplete_Resource_C* CallFunc_AddIcon_OutIconWidget, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, UResourceData* CallFunc_Array_Get_Item, bool CallFunc_IsBarleyResource_OutIsBarley, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, UResourceData* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, UITM_MissionComplete_Resource_C* CallFunc_AddIcon_OutIconWidget_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TMap<UResourceData*, float> CallFunc_GetEndscreenResources_ReturnValue);
    void Show(float DelayBetweenItems, USoundBase* ItemSound);
    void Add Line(FText Description, int32 Amount, UTexture2D* Texture);
    void PreConstruct(bool IsDesignTime);
    void Show Custom(TMap<UResourceData*, float> ResourceMap);
    void Add Line No Anim(FText Description, int32 Amount, UTexture2D* Texture);
    void Start Counting Audio(USoundBase* Item Sound);
    void Stop Counting Audio(float FadeDuration);
    void OnAudioFinished_Event();
    void ExecuteUbergraph_ITM_MissionComplete_ResourceBox(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Format_ReturnValue, float K2Node_CustomEvent_DelayBetweenItems, USoundBase* K2Node_CustomEvent_ItemSound, FText K2Node_CustomEvent_Description_1, int32 K2Node_CustomEvent_Amount_1, UTexture2D* K2Node_CustomEvent_Texture_1, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, TMap<UResourceData*, float> K2Node_CustomEvent_ResourceMap, TArray<UResourceData*>& CallFunc_Map_Keys_Keys, FText K2Node_CustomEvent_Description, int32 K2Node_CustomEvent_Amount, UTexture2D* K2Node_CustomEvent_Texture, UResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, OnAudioFinished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<UITM_MissionComplete_Resource_C*>& CallFunc_CreateIcons_OutWidgets, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, UITM_MissionComplete_Resource_C* CallFunc_AddIcon_OutIconWidget, UITM_MissionComplete_Resource_C* CallFunc_Array_Get_Item_1, UITM_MissionComplete_Resource_C* CallFunc_AddIcon_OutIconWidget_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, USoundBase* K2Node_CustomEvent_Item_Sound, float K2Node_CustomEvent_FadeDuration, bool CallFunc_IsValid_ReturnValue_2);
    void Finished__DelegateSignature();
}

#endif
