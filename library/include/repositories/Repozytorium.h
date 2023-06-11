//
// Created by student on 09.06.23.
//

#ifndef OOPPROJECT_REPOZYTORIUM_H
#define OOPPROJECT_REPOZYTORIUM_H
#include "vector"
#include "memory"
#include "iostream"
#include <algorithm>
template<class Model>
class Repozytorium {
protected:
    std::vector<std::shared_ptr<Model>> registry;

public:

    void dodaj(std::shared_ptr<Model> model) {
        if (model == nullptr) return;
        registry.push_back(model);
    }

    void usun(std::shared_ptr<Model> model) {
        if (model == nullptr) return;
        registry.erase(std::remove_if(registry.begin(), registry.end(),
                                      [model](const std::shared_ptr<Model>& m) { return m == model; }), registry.end());
    }

    size_t size() const noexcept {
        return registry.size();
    }

    template<typename Predicate>
    std::vector<std::shared_ptr<Model>> Znajdz(Predicate matchingMethod) const {
        std::vector<std::shared_ptr<Model>> found;
        for (const auto& curElem : registry) {
            if (curElem != nullptr && matchingMethod(curElem)) {
                found.push_back(curElem);
            }
        }
        return found;
    }

    std::vector<std::shared_ptr<Model>> Znajdz_wsz() const {
        auto f = [](std::shared_ptr<Model> elem) -> bool { return true; };
        return Znajdz(f);
    }

    template<typename ID>
    std::shared_ptr<Model> Znajdz_po_ID(ID id) const {
        auto f = [id](const std::shared_ptr<Model>& elem) -> bool {
            return elem->getUuid() == id;
        };
        auto found = Znajdz(f);
        return found.empty() ? nullptr : found[0];
    }
};

#endif //OOPPROJECT_REPOZYTORIUM_H
