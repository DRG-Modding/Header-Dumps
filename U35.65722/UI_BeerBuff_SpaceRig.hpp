#ifndef UE4SS_SDK_UI_BeerBuff_SpaceRig_HPP
#define UE4SS_SDK_UI_BeerBuff_SpaceRig_HPP

class UUI_BeerBuff_Spacerig_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BuffImage;
    class USizeBox* SizeBox_3;

    void OnLoaded_E76038A2482A1272456904B10D0684E1(class UObject* Loaded);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void On Buff Changed(class UTemporaryBuff* buff);
    void ExecuteUbergraph_UI_BeerBuff_Spacerig(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FExecuteUbergraph_UI_BeerBuff_SpacerigK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class UTemporaryBuff* K2Node_CustomEvent_buff);
};

#endif
