class CfgWeapons {
    class ItemCore;
    class InventoryItem_Base_F;
    class dat_ItemCore: ItemCore {
        type = TYPE_ITEM;
        simulation = "Weapon";
        detectRange = 0;
        ace_asItem = 1;
    };

    class RyanZombiesAntiVirusCure_Item: dat_ItemCore {
        class ItemInfo: InventoryItem_Base_F {
            type = TYPE_BIPOD;
        };
    };

    class RyanZombiesAntiVirusTemporary_Item: dat_ItemCore {
        class ItemInfo: InventoryItem_Base_F {
            type = TYPE_BIPOD;
        };
    };
};