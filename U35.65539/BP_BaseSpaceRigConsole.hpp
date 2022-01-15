#ifndef UE4SS_SDK_BP_BaseSpaceRigConsole_HPP
#define UE4SS_SDK_BP_BaseSpaceRigConsole_HPP

class ABP_BaseSpaceRigConsole_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    UTextRenderComponent* TextRender;
    UWidgetComponent* Widget;
    UStaticMeshComponent* StaticMesh1;
    UBoxComponent* Box;
    UInstantUsable* InstantUsable;
    USceneComponent* DefaultSceneRoot;
    TArray<ABP_PlayerController_SpaceRig_C*> PlayersThatHaveUsed;
    FString StatCountKey;
    FText ConsoleTitle;
    FText NotificationText;
    UTexture2D* NotificationIcon;
    TSoftClassPtr<UWindowWidget> ConsoleWindowClass;
    int32 Window Z Order;
    bool CreateMenuOnStartup;
    UWindowWidget* WindowInstance;

    void ShowNotification(bool IsVisible, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UConsoleScreen_BGtemplate_C* K2Node_DynamicCast_AsConsole_Screen_BGtemplate, bool K2Node_DynamicCast_bSuccess);
    void SetCreateMenuOnStartUp(bool InCreateOnStartUp, bool CallFunc_IsValid_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSubclassOf<UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, UWindowWidget* CallFunc_Create_ReturnValue);
    void IsNewPlayer(UBP_PlayerController_SpaceRig_C* PlayerController, bool& IsNewPlayer, bool FoundController, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UBP_PlayerController_SpaceRig_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void OnOpenConsole(UBP_PlayerController_SpaceRig_C* InPlayerController);
    void OnWindowCreated(UWindowWidget* WindowWidget);
    void PIE_QuickUse();
    void ExecuteUbergraph_BP_BaseSpaceRigConsole(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsLocallyControlled_ReturnValue, AController* CallFunc_GetController_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsNewPlayer_IsNewPlayer, bool CallFunc_IsValid_ReturnValue, UBP_PlayerController_SpaceRig_C* K2Node_CustomEvent_InPlayerController, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UConsoleScreen_BGtemplate_C* K2Node_DynamicCast_AsConsole_Screen_BGtemplate, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, UWindowWidget* CallFunc_OpenWindowFromClass_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, UWindowWidget* K2Node_CustomEvent_WindowWidget);
}

#endif
