#ifndef UE4SS_SDK_Menu_DLC_HPP
#define UE4SS_SDK_Menu_DLC_HPP

class UMenu_DLC_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UUniformGridPanel* Entries_Panel;
    UGameDLCSettings* Settings;
    ABP_DLC_Audio_C* AudioActor;
    float EntryWidth;
    UMediaPlayer* CurrentMediaPlayer;

    void AddDLC(UGameDLC* InDLC, UUniformGridSlot* GridSlot, UITM_DLC_Entry_C* DLCWidget, OnHoverEnd__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnHoverBegin__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_DLC_Entry_C* CallFunc_Create_ReturnValue);
    void Clear();
    void PreConstruct(bool IsDesignTime);
    void OnEntryHoverBegin(UITM_DLC_Entry_C* InEntry);
    void OnEntryHoverEnd(UITM_DLC_Entry_C* InEntry);
    void ExecuteUbergraph_Menu_DLC(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable, TArray<UGameDLC*>& CallFunc_GetStoreDLCs_ReturnValue, UGameDLC* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UITM_DLC_Entry_C* K2Node_CustomEvent_InEntry_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UMediaPlayer* CallFunc_GetMediaPlayer_MediaPlayer, ABP_DLC_Audio_C* CallFunc_FinishSpawningActor_ReturnValue, UITM_DLC_Entry_C* K2Node_CustomEvent_InEntry, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1);
}

#endif
