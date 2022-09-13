#ifndef UE4SS_SDK_WND_ForgeAvailableMessage_HPP
#define UE4SS_SDK_WND_ForgeAvailableMessage_HPP

class UWND_ForgeAvailableMessage_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnShown();
    void ExecuteUbergraph_WND_ForgeAvailableMessage(int32 EntryPoint);
};

#endif
