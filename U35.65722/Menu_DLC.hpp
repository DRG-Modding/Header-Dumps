#ifndef UE4SS_SDK_Menu_DLC_HPP
#define UE4SS_SDK_Menu_DLC_HPP

class UMenu_DLC_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUniformGridPanel* Entries_Panel;
    class UGameDLCSettings* Settings;
    class ABP_DLC_Audio_C* AudioActor;
    float EntryWidth;
    class UMediaPlayer* CurrentMediaPlayer;

    void AddDLC(class UGameDLC* InDLC, class UUniformGridSlot* GridSlot, class UITM_DLC_Entry_C* DLCWidget, FAddDLCK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FAddDLCK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_DLC_Entry_C* CallFunc_Create_ReturnValue);
    void Clear();
    void PreConstruct(bool IsDesignTime);
    void OnEntryHoverBegin(class UITM_DLC_Entry_C* InEntry);
    void OnEntryHoverEnd(class UITM_DLC_Entry_C* InEntry);
    void ExecuteUbergraph_Menu_DLC(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable, TArray<class UGameDLC*>& CallFunc_GetStoreDLCs_ReturnValue, class UGameDLC* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UITM_DLC_Entry_C* K2Node_CustomEvent_InEntry_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_MediaPlayer, class ABP_DLC_Audio_C* CallFunc_FinishSpawningActor_ReturnValue, class UITM_DLC_Entry_C* K2Node_CustomEvent_InEntry, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1);
};

#endif
