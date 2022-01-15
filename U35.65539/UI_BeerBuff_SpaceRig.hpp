#ifndef UE4SS_SDK_UI_BeerBuff_SpaceRig_HPP
#define UE4SS_SDK_UI_BeerBuff_SpaceRig_HPP

class UUI_BeerBuff_Spacerig_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BuffImage;
    USizeBox* SizeBox_3;

    void OnLoaded_E76038A2482A1272456904B10D0684E1(UObject* Loaded);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void On Buff Changed(UTemporaryBuff* buff);
    void ExecuteUbergraph_UI_BeerBuff_Spacerig(int32 EntryPoint, UObject* K2Node_CustomEvent_Loaded, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UObject* Temp_object_Variable, UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, UTemporaryBuff* K2Node_CustomEvent_buff);
}

#endif
