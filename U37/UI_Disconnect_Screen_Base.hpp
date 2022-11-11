#ifndef UE4SS_SDK_UI_Disconnect_Screen_Base_HPP
#define UE4SS_SDK_UI_Disconnect_Screen_Base_HPP

class UUI_Disconnect_Screen_Base_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Update();
    void ExecuteUbergraph_UI_Disconnect_Screen_Base(int32 EntryPoint);
};

#endif
