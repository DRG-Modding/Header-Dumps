#ifndef UE4SS_SDK_UI_BuildID_HPP
#define UE4SS_SDK_UI_BuildID_HPP

class UUI_BuildID_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBuildId;

    void Construct();
    void ExecuteUbergraph_UI_BuildID(int32 EntryPoint, FString CallFunc_GetProjectVersion_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue);
};

#endif
